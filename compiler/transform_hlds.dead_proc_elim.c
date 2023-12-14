/*
** Automatically generated from `dead_proc_elim.m'
** by the Mercury compiler,
** version rotd-2023-12-14
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
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
#include "set_ctree234.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.introduced_call_table.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s {
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__AllProcsInPred_16;
  MR_bool transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded;
  jmp_buf transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_44_44;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_45_45;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_35;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_36;
  MR_Integer transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__OtherProcId_39;
  MR_Box transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv0_OtherProcId_39;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableModuleName_22;
  MR_String transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableName_23;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKinds_25;
  jmp_buf transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_1;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_47_47;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_48_48;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressMutableEntity_27;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKind_40;
  MR_Box transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv1_SuppressPredKind_40;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_analyze_links_0_0[3];

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_analyze_links_0_0[3];

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_analyze_links_0_0[3];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_analyze_links_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_analyze_links_0_0[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_analyze_links_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_analyze_links_0[1];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_links_0[1];

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_eliminated_how_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_eliminated_how_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_eliminated_how_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_eliminated_what_0_0[1];

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_eliminated_what_0_0[1];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_eliminated_what_0_1[1];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_1;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_eliminated_what_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_eliminated_what_0_1[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_eliminated_what_0[2];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_eliminated_what_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_eliminated_what_0[2];

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[1];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[1];

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

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_const_struct_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_const_struct_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_const_struct_0[2];

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_deleted_calls_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_deleted_calls_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_deleted_calls_0[2];

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_type_ctor_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_type_ctor_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_type_ctor_0[2];

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_elim_opt_imported_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_ctree234__ti_set_ctree234_1transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_0[1];

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

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_0;

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_1;

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_2;

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_3;

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_4;

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_5;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_needed_reason_0_6[1];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_6;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_needed_reason_0_0[6];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_needed_reason_0_1[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_needed_reason_0[2];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_needed_reason_0[7];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_needed_reason_0[7];

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

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1];

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__1149__1_4_p_0(
  MR_Word ProcTable0_54,
  MR_Integer LambdaHeadVar__1_41,
  MR_Word LambdaHeadVar__2_42,
  MR_Word * LambdaHeadVar__3_43);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1482__1_2_p_0(
  MR_Word NeededPreds_39,
  MR_Word HeadVar__2_89);

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1470__1_4_p_0(
  MR_Word SpecMap0_32,
  MR_Word LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__2_57,
  MR_Word * LambdaHeadVar__3_58);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0(
  MR_Word HeadVar__1_1,
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
transform_hlds__dead_proc_elim__acc_proc_elimination_msg_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_Msgs_0_12,
  MR_Word * STATE_VARIABLE_Msgs_13);

static void MR_CALL 
transform_hlds__dead_proc_elim__acc_pred_elimination_msg_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__acc_pred_elimination_msg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Msgs_0_13,
  MR_Word * STATE_VARIABLE_Msgs_14);

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_reason_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word Reason_10,
  MR_Integer STATE_VARIABLE_CurReasonNum_0_14,
  MR_Integer * STATE_VARIABLE_CurReasonNum_15);

static MR_String MR_CALL 
transform_hlds__dead_proc_elim__needed_reason_to_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Reason_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_map_entry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word HeadVar__3_3);

static MR_String MR_CALL 
transform_hlds__dead_proc_elim__entity_to_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Entity_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_9,
  MR_Word * STATE_VARIABLE_DeadInfo_10);

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
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
  MR_Word GoalExpr_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_52,
  MR_Word * STATE_VARIABLE_DeadInfo_53);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_6,
  MR_Word * STATE_VARIABLE_DeadInfo_7);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_5(
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
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21,
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
  MR_Word STATE_VARIABLE_Queue_0_19,
  MR_Word * STATE_VARIABLE_Queue_20,
  MR_Word STATE_VARIABLE_Preds_0_21,
  MR_Word * STATE_VARIABLE_Preds_22);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_initialize_referred_preds_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NeededPreds_0_24,
  MR_Word * STATE_VARIABLE_NeededPreds_25);

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
  MR_Word ProcElimInfo_9,
  MR_Word KeepAnyProc_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcTable_0_16,
  MR_Word * STATE_VARIABLE_ProcTable_17,
  MR_Word STATE_VARIABLE_DeletedProcIds_0_18,
  MR_Word * STATE_VARIABLE_DeletedProcIds_19);

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
  MR_Word STATE_VARIABLE_ProcElimInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcElimInfo_32);

static void MR_CALL 
transform_hlds__dead_proc_elim__need_trace_goal_proc_6_p_0(
  MR_Word NeededReason_7,
  MR_Word TraceGoalPPId_8,
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15);

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
  MR_Word ClassProc_6,
  MR_Word STATE_VARIABLE_Queue_0_10,
  MR_Word * STATE_VARIABLE_Queue_11,
  MR_Word STATE_VARIABLE_Needed_0_12,
  MR_Word * STATE_VARIABLE_Needed_13);

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
  MR_Word STATE_VARIABLE_Queue_0_11,
  MR_Word * STATE_VARIABLE_Queue_12,
  MR_Word STATE_VARIABLE_Needed_0_13,
  MR_Word * STATE_VARIABLE_Needed_14);

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
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15);

static void MR_CALL 
transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0_1(
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
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word AnalyzeLinks_8,
  MR_Word STATE_VARIABLE_Queue_0_25,
  MR_Word STATE_VARIABLE_Examined_0_26,
  MR_Word STATE_VARIABLE_Needed_0_27,
  MR_Word * STATE_VARIABLE_Needed_28);

static void MR_CALL 
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word CurPredProcId_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_Queue_0_103,
  MR_Word * STATE_VARIABLE_Queue_104,
  MR_Word STATE_VARIABLE_Needed_0_105,
  MR_Word * STATE_VARIABLE_Needed_106);

static void MR_CALL 
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word CurPredProcId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Queue_0_4,
  MR_Word * STATE_VARIABLE_Queue_5,
  MR_Word STATE_VARIABLE_Needed_0_6,
  MR_Word * STATE_VARIABLE_Needed_7);

static void MR_CALL 
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word CurPredProcId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Queue_0_4,
  MR_Word * STATE_VARIABLE_Queue_5,
  MR_Word STATE_VARIABLE_Needed_0_6,
  MR_Word * STATE_VARIABLE_Needed_7);

static void MR_CALL 
transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(
  MR_Word Entity_5,
  MR_Word User_6,
  MR_Word STATE_VARIABLE_Needed_0_8,
  MR_Word * STATE_VARIABLE_Needed_9);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_type_ctor_info_refs_5_p_0(
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

static void MR_CALL 
transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(
  MR_Word Entity_5,
  MR_Word NeededReason_6,
  MR_Word STATE_VARIABLE_Needed_0_13,
  MR_Word * STATE_VARIABLE_Needed_14);

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
transform_hlds__dead_proc_elim____Unify____eliminated_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____eliminated_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____eliminated_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_what_0_0_10001(
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
transform_hlds__dead_proc_elim____Unify____needed_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_reason_0_0_10001(
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


static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_1[27][2];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_2[32][3];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_3[7][1];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_4[1][9];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_5[6][8];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_6[6][7];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_7[2][10];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_8[4][6];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_9[1][5];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_10[1][11];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_11[1][13];


struct transform_hlds__dead_proc_elim__vector_common_type_12_0_s {
  const MR_Word transform_hlds__dead_proc_elim__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct transform_hlds__dead_proc_elim__vector_common_type_12_0_s transform_hlds__dead_proc_elim_vector_common_12[12];

struct transform_hlds__dead_proc_elim__vector_common_type_13_0_s {
  const MR_String transform_hlds__dead_proc_elim__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct transform_hlds__dead_proc_elim__vector_common_type_13_0_s transform_hlds__dead_proc_elim_vector_common_13[24];



static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_1[27][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_ctree234__set_ctree234__type_ctor_info_set_ctree234_1)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__dead_proc_elim_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is never called."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__dead_proc_elim_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[24])))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_2[32][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_3[7][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)))) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)))) },
  /* row   3 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_5[6][8] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
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
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
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
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_6[6][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
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

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_7[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_8[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_9[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_10[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_11[1][13] = {
  /* row   0 */
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
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct transform_hlds__dead_proc_elim__vector_common_type_12_0_s transform_hlds__dead_proc_elim_vector_common_12[12] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[20])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[21])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[19])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[19])) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[11])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[17])) },
  /* row   7 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[17])) },
  /* row   8 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[17])) },
  /* row   9 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[17])) },
  /* row  10 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[17])) },
  /* row  11 */   { (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[17])) },
};

static /* final */ const struct transform_hlds__dead_proc_elim__vector_common_type_13_0_s transform_hlds__dead_proc_elim_vector_common_13[24] = {
  /* row   0 */   { (MR_String) "std get" },
  /* row   1 */   { (MR_String) "std set" },
  /* row   2 */   { (MR_String) "io get" },
  /* row   3 */   { (MR_String) "io set" },
  /* row   4 */   { (MR_String) "constant get" },
  /* row   5 */   { (MR_String) "constant set" },
  /* row   6 */   { (MR_String) "unsafe get" },
  /* row   7 */   { (MR_String) "unsafe set" },
  /* row   8 */   { (MR_String) "lock" },
  /* row   9 */   { (MR_String) "unlock" },
  /* row  10 */   { (MR_String) "pre_init" },
  /* row  11 */   { (MR_String) "init" },
  /* row  12 */   { (MR_String) "std get" },
  /* row  13 */   { (MR_String) "std set" },
  /* row  14 */   { (MR_String) "io get" },
  /* row  15 */   { (MR_String) "io set" },
  /* row  16 */   { (MR_String) "constant get" },
  /* row  17 */   { (MR_String) "constant set" },
  /* row  18 */   { (MR_String) "unsafe get" },
  /* row  19 */   { (MR_String) "unsafe set" },
  /* row  20 */   { (MR_String) "lock" },
  /* row  21 */   { (MR_String) "unlock" },
  /* row  22 */   { (MR_String) "pre_init" },
  /* row  23 */   { (MR_String) "init" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
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
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_analyze_links_0_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_analyze_links_0_0 };

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_analyze_links_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_analyze_links_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_analyze_links_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_analyze_links_0_0 };

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_links_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_analyze_links_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____analyze_links_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____analyze_links_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "analyze_links",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_analyze_links_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_analyze_links_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_links_0,

};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_0 = {
  (MR_String) "elim_deleted_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_1 = {
  (MR_String) "elim_deleted_goal",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_eliminated_how_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_eliminated_how_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_eliminated_how_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_eliminated_how_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_how_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____eliminated_how_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____eliminated_how_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "eliminated_how",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_eliminated_how_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_eliminated_how_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_eliminated_how_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____eliminated_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____eliminated_map_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "eliminated_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_eliminated_what_0_0[1] = { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_how_0) };

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_eliminated_what_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_0 = {
  (MR_String) "elim_whole_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_eliminated_what_0_0,
  NULL,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_eliminated_what_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_eliminated_what_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_1 = {
  (MR_String) "elim_procs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_eliminated_what_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_eliminated_what_0_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_eliminated_what_0_1[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_1 };

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_eliminated_what_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_eliminated_what_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_eliminated_what_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_eliminated_what_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_eliminated_what_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_eliminated_what_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____eliminated_what_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____eliminated_what_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "eliminated_what",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_eliminated_what_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_eliminated_what_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_eliminated_what_0,

};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) };

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0 = {
  (MR_String) "entity_proc",
  INT16_C(1),
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

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) };

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1 = {
  (MR_String) "entity_table_struct",
  INT16_C(1),
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

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

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

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2 };

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_4
};

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  { (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity_queue",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "examined_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_0 = {
  (MR_String) "do_not_analyze_link_const_struct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_1 = {
  (MR_String) "analyze_link_const_struct",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_const_struct_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_analyze_link_const_struct",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_const_struct_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_const_struct_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_const_struct_0,

};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_0 = {
  (MR_String) "do_not_analyze_link_deleted_calls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_1 = {
  (MR_String) "analyze_link_deleted_calls",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_deleted_calls_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_analyze_link_deleted_calls",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_deleted_calls_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_deleted_calls_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_deleted_calls_0,

};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_0 = {
  (MR_String) "do_not_analyze_link_type_ctor",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_1 = {
  (MR_String) "analyze_link_type_ctor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_type_ctor_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_analyze_link_type_ctor",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_type_ctor_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_analyze_link_type_ctor_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_type_ctor_0,

};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0 = {
  (MR_String) "elim_opt_imported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1 = {
  (MR_String) "do_not_elim_opt_imported",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_elim_opt_imported_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_elim_opt_imported",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_ordinal_ordered_maybe_elim_opt_imported_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_ctree234__ti_set_ctree234_1transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0 = {
  &mercury__set_ctree234__set_ctree234__type_ctor_info_set_ctree234_1,
  { (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0) }
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_0[1] = { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__set_ctree234__ti_set_ctree234_1transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0) };

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0 = {
  (MR_String) "not_eliminable",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1] = { (MR_String) "num_references" };

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

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1 };

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_needed",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "needed_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_0 = {
  (MR_String) "nr_exported",
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

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_1 = {
  (MR_String) "nr_foreign_exported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_2 = {
  (MR_String) "nr_initial_final",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_3 = {
  (MR_String) "nr_type_ctor",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_4 = {
  (MR_String) "nr_const_struct",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_5 = {
  (MR_String) "nr_class_interface_proc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_needed_reason_0_6[1] = { (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0) };

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_6 = {
  (MR_String) "nr_used_by",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(6),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_needed_reason_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_needed_reason_0_0[6] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_2,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_4,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_5
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_needed_reason_0_1[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_6 };

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_needed_reason_0[2] = {
  {
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_needed_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_needed_reason_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_needed_reason_0[7] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_5,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_4,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_2,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_needed_reason_0_6
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_needed_reason_0[7] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____needed_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____needed_reason_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "needed_reason",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_needed_reason_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_needed_reason_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_needed_reason_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0 };

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0 };

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "pred_elim_info",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0,

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
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0)
};

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[4] = {
  (MR_String) "proc_elim_needed_map",
  (MR_String) "proc_elim_module_info",
  (MR_String) "proc_elim_pred_id_table",
  (MR_String) "proc_elim_map"
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
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0 };

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1] = { &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0 };

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "proc_elim_info",
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0 },
  { transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0,

};

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__1149__1_4_p_0(
  MR_Word ProcTable0_54,
  MR_Integer LambdaHeadVar__1_41,
  MR_Word LambdaHeadVar__2_42,
  MR_Word * LambdaHeadVar__3_43)
{
  MR_Word ProcInfo0_28;
  MR_Word ProcInfo_29;
  MR_Word Var_44;
  MR_Box conv0_ProcInfo0_28;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_54, ((MR_Box) (LambdaHeadVar__1_41)), &conv0_ProcInfo0_28);
  ProcInfo0_28 = ((MR_Word) (conv0_ProcInfo0_28));
  Var_44 = hlds__make_goal__true_goal_0_f_0();
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Var_44, ProcInfo0_28, &ProcInfo_29);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (LambdaHeadVar__1_41)), ((MR_Box) (ProcInfo_29)), LambdaHeadVar__2_42, LambdaHeadVar__3_43);
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1482__1_2_p_0(
  MR_Word NeededPreds_39,
  MR_Word HeadVar__2_89)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NeededPreds_39, ((MR_Box) (HeadVar__2_89)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1470__1_4_p_0(
  MR_Word SpecMap0_32,
  MR_Word LambdaHeadVar__1_56,
  MR_Word LambdaHeadVar__2_57,
  MR_Word * LambdaHeadVar__3_58)
{
  MR_bool succeeded;
  MR_Word NewNeededPreds_38;
  MR_Box conv0_NewNeededPreds_38;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[2]), SpecMap0_32, ((MR_Box) (LambdaHeadVar__1_56)), &conv0_NewNeededPreds_38);
  if (succeeded)
  {
    NewNeededPreds_38 = ((MR_Word) (conv0_NewNeededPreds_38));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewNeededPreds_38, LambdaHeadVar__2_57, LambdaHeadVar__3_58);
  else
    *LambdaHeadVar__3_58 = LambdaHeadVar__2_57;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
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
            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
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
            TypeInfo_19_19 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_reason_0_0(
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                transform_hlds__dead_proc_elim____Compare____entity_0_0(HeadVar__1_1, Var_21, ArgY1_17);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
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
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = transform_hlds__dead_proc_elim____Unify____entity_0_0(ArgX1_15, ArgY1_16);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_16 < ArgY1_11);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_16 > ArgY1_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[9]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(
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
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0(
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
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0(
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
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0(
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
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_98 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_99 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_98 == CastY_99);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_113, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Word Var_114 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_114, ArgY1_21);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_String Var_116 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_117 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_41 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_44 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_47 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_42;

                mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_42, Var_117, ArgY1_41);
                succeeded = (SubResult1_42 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_42;
                else
                {
                  MR_Word SubResult2_45;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_45, Var_116, ArgY2_44);
                  succeeded = (SubResult2_45 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_45;
                  else
                  {
                    succeeded = (Var_115 < ArgY3_47);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_115 > ArgY3_47);
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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_109 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ArgY1_67 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        succeeded = (Var_109 < ArgY1_67);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_109 > ArgY1_67);
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
              MR_Word Var_110 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
              MR_String Var_111 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_112 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_91 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_String ArgY2_94 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_97 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 15);
                        MR_Word SubResult1_92;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_92, Var_112, ArgY1_91);
                        succeeded = (SubResult1_92 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_92;
                        else
                        {
                          MR_Word SubResult2_95;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_95, Var_111, ArgY2_94);
                          succeeded = (SubResult2_95 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_95;
                          else
                          {
                            MR_Integer Var_118 = (MR_Integer) (Var_110);
                            MR_Integer Var_119 = (MR_Integer) (ArgY3_97);

                            succeeded = (Var_118 < Var_119);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_118 > Var_119);
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

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_10;
          MR_Integer ArgX3_11 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_9, ArgY2_10) == 0);
              if (succeeded)
                succeeded = (ArgX3_11 == ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;
              MR_String ArgX2_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_18;
              MR_Word ArgX3_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 15);
              MR_Word ArgY3_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_15, ArgY1_16);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_17, ArgY2_18) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_19 == ArgY3_20);
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_what_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_11)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer Var_18 = (MR_Integer) (Var_17);
      MR_Integer Var_19 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_18 < Var_19);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_18 > Var_19);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____eliminated_what_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____eliminated_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_how_0_0(
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
transform_hlds__dead_proc_elim____Unify____eliminated_how_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_links_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_links_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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

static void MR_CALL 
transform_hlds__dead_proc_elim__acc_proc_elimination_msg_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_Msgs_0_12,
  MR_Word * STATE_VARIABLE_Msgs_13)
{
  MR_String ProcStr_10;
  MR_String Msg_11;
  MR_String Var_19;

  ProcStr_10 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_user_string_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
  Var_19 = mercury__string__f_43_43_2_f_0(ProcStr_10, (MR_String) "\n");
  Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "% Eliminated dead ", Var_19);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Msgs_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Msgs_0_12));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__acc_pred_elimination_msg_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Msgs_13;

  transform_hlds__dead_proc_elim__acc_proc_elimination_msg_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Msgs_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Msgs_13));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__acc_pred_elimination_msg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Msgs_0_13,
  MR_Word * STATE_VARIABLE_Msgs_14)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ElimWhat_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) ElimWhat_7)) == (MR_Integer) 1))
  {
    MR_Word ProcIds_12 = ((MR_Word) ((MR_hl_field(1, ElimWhat_7, (MR_Integer) 0))));
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Box conv1_STATE_VARIABLE_Msgs_14;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[5]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__acc_pred_elimination_msg_4_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (PredId_6));
    }
    Var_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds_12);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[3]), Var_24, Var_25, ((MR_Box) (STATE_VARIABLE_Msgs_0_13)), &conv1_STATE_VARIABLE_Msgs_14);
    *STATE_VARIABLE_Msgs_14 = ((MR_Word) (conv1_STATE_VARIABLE_Msgs_14));
  }
  else
  {
    MR_Word ElimHow_9 = ((MR_Unsigned) ((MR_hl_field(0, ElimWhat_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String PredStr_10;
    MR_String Msg_11;

    PredStr_10 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_5, PredId_6);
    switch (ElimHow_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_35;

          Var_35 = mercury__string__f_43_43_2_f_0(PredStr_10, (MR_String) "\n");
          Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "% Eliminated opt_imported ", Var_35);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String Var_32;

          Var_32 = mercury__string__f_43_43_2_f_0(PredStr_10, (MR_String) "\n");
          Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "% Eliminated dead ", Var_32);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Msgs_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Msgs_0_13));
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_reason_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word Reason_10,
  MR_Integer STATE_VARIABLE_CurReasonNum_0_14,
  MR_Integer * STATE_VARIABLE_CurReasonNum_15)
{
  MR_String ReasonStr_13;
  MR_String Var_30;

  ReasonStr_13 = transform_hlds__dead_proc_elim__needed_reason_to_string_2_f_0(ModuleInfo_9, Reason_10);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%   #");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[3]), STATE_VARIABLE_CurReasonNum_0_14, &Var_30);
  mercury__io__write_string_4_p_0(Stream_8, Var_30);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": ");
  mercury__io__write_string_4_p_0(Stream_8, ReasonStr_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  *STATE_VARIABLE_CurReasonNum_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurReasonNum_0_14 + (MR_Unsigned) 1);
}

static MR_String MR_CALL 
transform_hlds__dead_proc_elim__needed_reason_to_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Reason_5)
{
  MR_String Str_6;

  switch (MR_tag((MR_Word) Reason_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Reason_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_6 = (MR_String) "exported";
          break;
        case (MR_Integer) 1:
          Str_6 = (MR_String) "exported to foreign code";
          break;
        case (MR_Integer) 2:
          Str_6 = (MR_String) "is initialization or finalization procedure";
          break;
        case (MR_Integer) 3:
          Str_6 = (MR_String) "type constructor";
          break;
        case (MR_Integer) 4:
          Str_6 = (MR_String) "const struct";
          break;
        case (MR_Integer) 5:
          Str_6 = (MR_String) "class interface procedure";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Entity_7 = ((MR_Word) ((MR_hl_field(1, Reason_5, (MR_Integer) 0))));
        MR_String EntityStr_8;

        switch (MR_tag((MR_Word) Entity_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredProcId_14 = ((MR_Word) ((MR_hl_field(0, Entity_7, (MR_Integer) 0))));

              EntityStr_8 = hlds__hlds_desc__describe_proc_from_id_3_f_0((MR_Integer) 1, ModuleInfo_4, PredProcId_14);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredProcId_55 = ((MR_Word) ((MR_hl_field(1, Entity_7, (MR_Integer) 0))));
              MR_String ProcDesc_56;

              ProcDesc_56 = hlds__hlds_desc__describe_proc_from_id_3_f_0((MR_Integer) 1, ModuleInfo_4, PredProcId_55);
              EntityStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "table_struct ", ProcDesc_56);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(2, Entity_7, (MR_Integer) 0))));
              MR_String TypeName_17 = ((MR_String) ((MR_hl_field(2, Entity_7, (MR_Integer) 1))));
              MR_Integer TypeArity_18 = ((MR_Integer) ((MR_hl_field(2, Entity_7, (MR_Integer) 2))));
              MR_String Var_36;
              MR_String Var_58;
              MR_String Var_66;
              MR_String Var_67;
              MR_String Var_69;
              MR_String Var_70;

              Var_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_16);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[3]), TypeArity_18, &Var_58);
              Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_58);
              Var_67 = mercury__string__f_43_43_2_f_0(TypeName_17, Var_66);
              Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_67);
              Var_70 = mercury__string__f_43_43_2_f_0(Var_36, Var_69);
              EntityStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor ", Var_70);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Entity_7, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(3, Entity_7, (MR_Integer) 1))));
                  MR_String Var_78;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[3]), N_19, &Var_78);
                  EntityStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "const struct #", Var_78);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String MutableName_20 = ((MR_String) ((MR_hl_field(3, Entity_7, (MR_Integer) 2))));
                  MR_Word Kind_21 = ((MR_Unsigned) ((MR_hl_field(3, Entity_7, (MR_Integer) 3))) & (MR_Integer) 15);
                  MR_String KindStr_22 = ((&transform_hlds__dead_proc_elim_vector_common_13[12 + Kind_21]))->transform_hlds__dead_proc_elim__vector_common_type_13_0__vct_13_f_0;
                  MR_String Var_51;
                  MR_Word ModuleName_57 = ((MR_Word) ((MR_hl_field(3, Entity_7, (MR_Integer) 1))));
                  MR_String Var_74;
                  MR_String Var_75;
                  MR_String Var_77;

                  Var_51 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_57);
                  Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ".", MutableName_20);
                  Var_75 = mercury__string__f_43_43_2_f_0(Var_51, Var_74);
                  Var_77 = mercury__string__f_43_43_2_f_0((MR_String) " pred for mutable ", Var_75);
                  EntityStr_8 = mercury__string__f_43_43_2_f_0(KindStr_22, Var_77);
                }
                break;
            }
            break;
        }
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "used by ", EntityStr_8);
      }
      break;
  }
  return Str_6;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_map_entry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_CurReasonNum_15;

  transform_hlds__dead_proc_elim__output_needed_reason_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CurReasonNum_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CurReasonNum_15));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_map_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Entity_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word MaybeNeeded_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String EntityStr_11;

  EntityStr_11 = transform_hlds__dead_proc_elim__entity_to_string_2_f_0(ModuleInfo_7, Entity_8);
  if (((MR_tag((MR_Word) MaybeNeeded_9)) == (MR_Integer) 1))
  {
    MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(1, MaybeNeeded_9, (MR_Integer) 0))));
    MR_String Var_53;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n% entity: ");
    mercury__io__write_string_4_p_0(Stream_6, EntityStr_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ": ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[3]), N_12, &Var_53);
    mercury__io__write_string_4_p_0(Stream_6, Var_53);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " refs\n");
  }
  else
  {
    MR_Word NeededReasonsSet_13 = ((MR_Word) ((MR_hl_field(0, MaybeNeeded_9, (MR_Integer) 0))));
    MR_Word NeededReasons_14;
    MR_Integer NumReasons_15;
    MR_Word Var_30;
    MR_Box conv2_NumReasons_15;
    MR_Box conv1_STATE_VARIABLE_IO_32_32;

    NeededReasons_14 = mercury__set_ctree234__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0), NeededReasonsSet_13);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n% entity: ");
    mercury__io__write_string_4_p_0(Stream_6, EntityStr_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ": needed\n");
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[1]));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__output_needed_map_entry_5_p_0_1));
      MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_30, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(0, Var_30, 4) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, NeededReasons_14, ((MR_Box) ((MR_Integer) 1)), &conv2_NumReasons_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
    NumReasons_15 = ((MR_Integer) (conv2_NumReasons_15));
    succeeded = (NumReasons_15 == (MR_Integer) 3);
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%%   ... and possibly more\n");
  }
}

static MR_String MR_CALL 
transform_hlds__dead_proc_elim__entity_to_string_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Entity_5)
{
  MR_String Str_6;

  switch (MR_tag((MR_Word) Entity_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredProcId_7 = ((MR_Word) ((MR_hl_field(0, Entity_5, (MR_Integer) 0))));

        Str_6 = hlds__hlds_desc__describe_proc_from_id_3_f_0((MR_Integer) 1, ModuleInfo_4, PredProcId_7);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredProcId_48 = ((MR_Word) ((MR_hl_field(1, Entity_5, (MR_Integer) 0))));
        MR_String ProcDesc_49;

        ProcDesc_49 = hlds__hlds_desc__describe_proc_from_id_3_f_0((MR_Integer) 1, ModuleInfo_4, PredProcId_48);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_struct ", ProcDesc_49);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(2, Entity_5, (MR_Integer) 0))));
        MR_String TypeName_10 = ((MR_String) ((MR_hl_field(2, Entity_5, (MR_Integer) 1))));
        MR_Integer TypeArity_11 = ((MR_Integer) ((MR_hl_field(2, Entity_5, (MR_Integer) 2))));
        MR_String Var_29;
        MR_String Var_51;
        MR_String Var_59;
        MR_String Var_60;
        MR_String Var_62;
        MR_String Var_63;

        Var_29 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_9);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[3]), TypeArity_11, &Var_51);
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_51);
        Var_60 = mercury__string__f_43_43_2_f_0(TypeName_10, Var_59);
        Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_60);
        Var_63 = mercury__string__f_43_43_2_f_0(Var_29, Var_62);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "type_ctor ", Var_63);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Entity_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(3, Entity_5, (MR_Integer) 1))));
            MR_String Var_71;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[3]), N_12, &Var_71);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "const struct #", Var_71);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String MutableName_13 = ((MR_String) ((MR_hl_field(3, Entity_5, (MR_Integer) 2))));
            MR_Word Kind_14 = ((MR_Unsigned) ((MR_hl_field(3, Entity_5, (MR_Integer) 3))) & (MR_Integer) 15);
            MR_String KindStr_15 = ((&transform_hlds__dead_proc_elim_vector_common_13[0 + Kind_14]))->transform_hlds__dead_proc_elim__vector_common_type_13_0__vct_13_f_0;
            MR_String Var_44;
            MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(3, Entity_5, (MR_Integer) 1))));
            MR_String Var_67;
            MR_String Var_68;
            MR_String Var_70;

            Var_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_50);
            Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ".", MutableName_13);
            Var_68 = mercury__string__f_43_43_2_f_0(Var_44, Var_67);
            Var_70 = mercury__string__f_43_43_2_f_0((MR_String) " pred for mutable ", Var_68);
            Str_6 = mercury__string__f_43_43_2_f_0(KindStr_15, Var_70);
          }
          break;
      }
      break;
  }
  return Str_6;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_9,
  MR_Word * STATE_VARIABLE_DeadInfo_10)
{
  MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_4, (MR_Integer) 2))));
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(GoalExpr_11, STATE_VARIABLE_DeadInfo_0_9, STATE_VARIABLE_DeadInfo_10);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_DeadInfo_10;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DeadInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DeadInfo_10));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
  MR_Word GoalExpr_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_52,
  MR_Word * STATE_VARIABLE_DeadInfo_53)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_15 = (MR_Word) ((MR_Word) (GoalExpr_4));

        transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(SubGoal_15, STATE_VARIABLE_DeadInfo_0_52, STATE_VARIABLE_DeadInfo_53);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RHS_36 = ((MR_Word) ((MR_hl_field(1, GoalExpr_4, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) RHS_36)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Functor_110 = ((MR_Word) ((MR_hl_field(1, RHS_36, (MR_Integer) 0))));
              MR_Word Name_113;

              succeeded = ((((MR_tag((MR_Word) Functor_110)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_110, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Name_113 = ((MR_Word) ((MR_hl_field(3, Functor_110, (MR_Integer) 1))));
                transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(Name_113, STATE_VARIABLE_DeadInfo_0_52, STATE_VARIABLE_DeadInfo_53);
              }
              else
                *STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goal_123 = ((MR_Word) ((MR_hl_field(2, RHS_36, (MR_Integer) 5))));

              transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Goal_123, STATE_VARIABLE_DeadInfo_0_52, STATE_VARIABLE_DeadInfo_53);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredName_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_4, (MR_Integer) 5))));
        MR_Word ModuleInfo_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_52, (MR_Integer) 0))));
        MR_Word Examined_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_52, (MR_Integer) 2))));
        MR_Word Needed_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_52, (MR_Integer) 3))));
        MR_Word STATE_VARIABLE_Queue_15_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_52, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_NeededNames_16_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_52, (MR_Integer) 4))));

        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_NeededNames_16_102, ((MR_Box) (PredName_22)));
        if (succeeded)
          *STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
        else
        {
          MR_Word PredicateTable_99;
          MR_Word PredIds_100;
          MR_Word STATE_VARIABLE_NeededNames_17_103;
          MR_Word STATE_VARIABLE_Queue_19_105;

          hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_96, &PredicateTable_99);
          mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (PredName_22)), STATE_VARIABLE_NeededNames_16_102, &STATE_VARIABLE_NeededNames_17_103);
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_99, (MR_Integer) 1, PredName_22, &PredIds_100);
          mercury__queue__put_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_100, STATE_VARIABLE_Queue_15_101, &STATE_VARIABLE_Queue_19_105);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_DeadInfo_53 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_96));
            MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_105));
            MR_hl_field(0, base, 2) = ((MR_Box) (Examined_97));
            MR_hl_field(0, base, 3) = ((MR_Box) (Needed_98));
            MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_103));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 2))));
            MR_Box conv1_STATE_VARIABLE_DeadInfo_53;

            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[28]), Goals_7, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv1_STATE_VARIABLE_DeadInfo_53);
            *STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv1_STATE_VARIABLE_DeadInfo_53));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 1))));
            MR_Box conv3_STATE_VARIABLE_DeadInfo_53;

            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[29]), Goals_73, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv3_STATE_VARIABLE_DeadInfo_53);
            *STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv3_STATE_VARIABLE_DeadInfo_53));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 3))));
            MR_Box conv7_STATE_VARIABLE_DeadInfo_53;

            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[31]), Cases_14, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv7_STATE_VARIABLE_DeadInfo_53);
            *STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv7_STATE_VARIABLE_DeadInfo_53));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 2))));

            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(SubGoal_74, STATE_VARIABLE_DeadInfo_0_52, STATE_VARIABLE_DeadInfo_53);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 2))));
            MR_Word Then_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 3))));
            MR_Word Else_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 4))));
            MR_Word STATE_VARIABLE_DeadInfo_58_58;
            MR_Word STATE_VARIABLE_DeadInfo_59_59;

            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_9, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_58_58);
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_10, STATE_VARIABLE_DeadInfo_58_58, &STATE_VARIABLE_DeadInfo_59_59);
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Else_11, STATE_VARIABLE_DeadInfo_59_59, STATE_VARIABLE_DeadInfo_53);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 1))));

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
                  MR_Word MainGoal_45 = ((MR_Word) ((MR_hl_field(1, ShortHand_40, (MR_Integer) 4))));
                  MR_Word OrElseGoals_46 = ((MR_Word) ((MR_hl_field(1, ShortHand_40, (MR_Integer) 5))));
                  MR_Word STATE_VARIABLE_DeadInfo_67_67;
                  MR_Box conv5_STATE_VARIABLE_DeadInfo_53;

                  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_45, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_67_67);
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[30]), OrElseGoals_46, ((MR_Box) (STATE_VARIABLE_DeadInfo_67_67)), &conv5_STATE_VARIABLE_DeadInfo_53);
                  *STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv5_STATE_VARIABLE_DeadInfo_53));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(2, ShortHand_40, (MR_Integer) 2))));

                  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(SubGoal_75, STATE_VARIABLE_DeadInfo_0_52, STATE_VARIABLE_DeadInfo_53);
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_DeadInfo_10;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DeadInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DeadInfo_10));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_6,
  MR_Word * STATE_VARIABLE_DeadInfo_7)
{
  MR_Word Var_8;
  MR_Word GoalExpr_9;

  Var_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
  GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
  switch (MR_tag((MR_Word) GoalExpr_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_20 = (MR_Word) ((MR_Word) (GoalExpr_9));

        transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(SubGoal_20, STATE_VARIABLE_DeadInfo_0_6, STATE_VARIABLE_DeadInfo_7);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RHS_29 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, (MR_Integer) 1))));

        transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(RHS_29, STATE_VARIABLE_DeadInfo_0_6, STATE_VARIABLE_DeadInfo_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredName_27 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 5))));

        transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_27, STATE_VARIABLE_DeadInfo_0_6, STATE_VARIABLE_DeadInfo_7);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeadInfo_7 = STATE_VARIABLE_DeadInfo_0_6;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeadInfo_7 = STATE_VARIABLE_DeadInfo_0_6;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goals_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
            MR_Box conv1_STATE_VARIABLE_DeadInfo_7;

            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[24]), Goals_12, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_6)), &conv1_STATE_VARIABLE_DeadInfo_7);
            *STATE_VARIABLE_DeadInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_DeadInfo_7));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
            MR_Box conv3_STATE_VARIABLE_DeadInfo_7;

            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[25]), Goals_52, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_6)), &conv3_STATE_VARIABLE_DeadInfo_7);
            *STATE_VARIABLE_DeadInfo_7 = ((MR_Word) (conv3_STATE_VARIABLE_DeadInfo_7));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
            MR_Box conv7_STATE_VARIABLE_DeadInfo_7;

            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[27]), Cases_19, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_6)), &conv7_STATE_VARIABLE_DeadInfo_7);
            *STATE_VARIABLE_DeadInfo_7 = ((MR_Word) (conv7_STATE_VARIABLE_DeadInfo_7));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));

            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(SubGoal_53, STATE_VARIABLE_DeadInfo_0_6, STATE_VARIABLE_DeadInfo_7);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
            MR_Word Then_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
            MR_Word Else_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));
            MR_Word STATE_VARIABLE_DeadInfo_58_45;
            MR_Word STATE_VARIABLE_DeadInfo_59_46;

            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_14, STATE_VARIABLE_DeadInfo_0_6, &STATE_VARIABLE_DeadInfo_58_45);
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_15, STATE_VARIABLE_DeadInfo_58_45, &STATE_VARIABLE_DeadInfo_59_46);
            transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Else_16, STATE_VARIABLE_DeadInfo_59_46, STATE_VARIABLE_DeadInfo_7);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MainGoal_38 = ((MR_Word) ((MR_hl_field(1, ShortHand_33, (MR_Integer) 4))));
                  MR_Word OrElseGoals_39 = ((MR_Word) ((MR_hl_field(1, ShortHand_33, (MR_Integer) 5))));
                  MR_Word STATE_VARIABLE_DeadInfo_67_48;
                  MR_Box conv5_STATE_VARIABLE_DeadInfo_7;

                  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_38, STATE_VARIABLE_DeadInfo_0_6, &STATE_VARIABLE_DeadInfo_67_48);
                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[26]), OrElseGoals_39, ((MR_Box) (STATE_VARIABLE_DeadInfo_67_48)), &conv5_STATE_VARIABLE_DeadInfo_7);
                  *STATE_VARIABLE_DeadInfo_7 = ((MR_Word) (conv5_STATE_VARIABLE_DeadInfo_7));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_54 = ((MR_Word) ((MR_hl_field(2, ShortHand_33, (MR_Integer) 2))));

                  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(SubGoal_54, STATE_VARIABLE_DeadInfo_0_6, STATE_VARIABLE_DeadInfo_7);
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_DeadInfo_10;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DeadInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DeadInfo_10));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_DeadInfo_10;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_DeadInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_DeadInfo_10));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_DeadInfo_9;

  transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_DeadInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_DeadInfo_9));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9)
{
  MR_Word tscc_proc_2_input_1_RHS_4;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21;
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
  // proc 2 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_unify_rhs/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_DeadInfo_0_8 = tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
    MR_Word STATE_VARIABLE_DeadInfo_9;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_19 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_19;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_28 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_28;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = STATE_VARIABLE_DeadInfo_0_8;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredName_26 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 5))));

          transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_26, STATE_VARIABLE_DeadInfo_0_8, &STATE_VARIABLE_DeadInfo_9);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_0_8;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_0_8;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Box conv1_STATE_VARIABLE_DeadInfo_9;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[16]), Goals_11, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_8)), &conv1_STATE_VARIABLE_DeadInfo_9);
              STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_DeadInfo_9));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_DeadInfo_9;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[17]), Goals_51, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_8)), &conv3_STATE_VARIABLE_DeadInfo_9);
              STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv3_STATE_VARIABLE_DeadInfo_9));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Box conv7_STATE_VARIABLE_DeadInfo_9;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[19]), Cases_18, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_8)), &conv7_STATE_VARIABLE_DeadInfo_9);
              STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv7_STATE_VARIABLE_DeadInfo_9));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_52;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_8;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_DeadInfo_58_44;
              MR_Word STATE_VARIABLE_DeadInfo_59_45;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;

              transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_13, STATE_VARIABLE_DeadInfo_0_8, &STATE_VARIABLE_DeadInfo_58_44);
              transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_14, STATE_VARIABLE_DeadInfo_58_44, &STATE_VARIABLE_DeadInfo_59_45);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_15;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_59_45;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_32)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_37 = ((MR_Word) ((MR_hl_field(1, ShortHand_32, (MR_Integer) 4))));
                    MR_Word OrElseGoals_38 = ((MR_Word) ((MR_hl_field(1, ShortHand_32, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_DeadInfo_67_47;
                    MR_Box conv5_STATE_VARIABLE_DeadInfo_9;

                    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_37, STATE_VARIABLE_DeadInfo_0_8, &STATE_VARIABLE_DeadInfo_67_47);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[18]), OrElseGoals_38, ((MR_Box) (STATE_VARIABLE_DeadInfo_67_47)), &conv5_STATE_VARIABLE_DeadInfo_9);
                    STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv5_STATE_VARIABLE_DeadInfo_9));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_53 = ((MR_Word) ((MR_hl_field(2, ShortHand_32, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_53;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_8;

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
    tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_9;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_Word STATE_VARIABLE_DeadInfo_0_21 = tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21;
    MR_Word STATE_VARIABLE_DeadInfo_22;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Functor_7 = ((MR_Word) ((MR_hl_field(1, RHS_4, (MR_Integer) 0))));
          MR_Word Name_10;

          succeeded = ((((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Name_10 = ((MR_Word) ((MR_hl_field(3, Functor_7, (MR_Integer) 1))));
            {
              MR_Word ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 0))));
              MR_Word Examined_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 2))));
              MR_Word Needed_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Queue_15_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_NeededNames_16_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 4))));

              succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_NeededNames_16_29, ((MR_Box) (Name_10)));
              if (succeeded)
                STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
              else
              {
                MR_Word PredicateTable_26;
                MR_Word PredIds_27;
                MR_Word STATE_VARIABLE_NeededNames_17_30;
                MR_Word STATE_VARIABLE_Queue_19_32;

                hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_23, &PredicateTable_26);
                mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Name_10)), STATE_VARIABLE_NeededNames_16_29, &STATE_VARIABLE_NeededNames_17_30);
                hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_26, (MR_Integer) 1, Name_10, &PredIds_27);
                mercury__queue__put_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_27, STATE_VARIABLE_Queue_15_28, &STATE_VARIABLE_Queue_19_32);
                {
                  STATE_VARIABLE_DeadInfo_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 0) = ((MR_Box) (ModuleInfo_23));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_32));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 2) = ((MR_Box) (Examined_24));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 3) = ((MR_Box) (Needed_25));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_30));
                }
              }
            }
          }
          else
            STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 5))));
          MR_Word GoalExpr_36 = ((MR_Word) ((MR_hl_field(0, Goal_20, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) GoalExpr_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubGoal_47 = (MR_Word) ((MR_Word) (GoalExpr_36));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_47;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_21;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHS_56 = ((MR_Word) ((MR_hl_field(1, GoalExpr_36, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_56;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = STATE_VARIABLE_DeadInfo_0_21;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
                tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PredName_54 = ((MR_Word) ((MR_hl_field(2, GoalExpr_36, (MR_Integer) 5))));

                transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_54, STATE_VARIABLE_DeadInfo_0_21, &STATE_VARIABLE_DeadInfo_22);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Goals_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 2))));
                    MR_Box conv9_STATE_VARIABLE_DeadInfo_22;

                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[20]), Goals_39, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_21)), &conv9_STATE_VARIABLE_DeadInfo_22);
                    STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv9_STATE_VARIABLE_DeadInfo_22));
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Goals_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 1))));
                    MR_Box conv11_STATE_VARIABLE_DeadInfo_22;

                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[21]), Goals_79, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_21)), &conv11_STATE_VARIABLE_DeadInfo_22);
                    STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv11_STATE_VARIABLE_DeadInfo_22));
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Cases_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 3))));
                    MR_Box conv15_STATE_VARIABLE_DeadInfo_22;

                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[23]), Cases_46, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_21)), &conv15_STATE_VARIABLE_DeadInfo_22);
                    STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv15_STATE_VARIABLE_DeadInfo_22));
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_80;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_21;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Cond_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 2))));
                    MR_Word Then_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 3))));
                    MR_Word Else_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 4))));
                    MR_Word STATE_VARIABLE_DeadInfo_58_72;
                    MR_Word STATE_VARIABLE_DeadInfo_59_73;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;

                    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_41, STATE_VARIABLE_DeadInfo_0_21, &STATE_VARIABLE_DeadInfo_58_72);
                    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_42, STATE_VARIABLE_DeadInfo_58_72, &STATE_VARIABLE_DeadInfo_59_73);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = Else_43;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_59_73;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ShortHand_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 1))));

                    switch (MR_tag((MR_Word) ShortHand_60)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                          return;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word MainGoal_65 = ((MR_Word) ((MR_hl_field(1, ShortHand_60, (MR_Integer) 4))));
                          MR_Word OrElseGoals_66 = ((MR_Word) ((MR_hl_field(1, ShortHand_60, (MR_Integer) 5))));
                          MR_Word STATE_VARIABLE_DeadInfo_67_75;
                          MR_Box conv13_STATE_VARIABLE_DeadInfo_22;

                          transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_65, STATE_VARIABLE_DeadInfo_0_21, &STATE_VARIABLE_DeadInfo_67_75);
                          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[22]), OrElseGoals_66, ((MR_Box) (STATE_VARIABLE_DeadInfo_67_75)), &conv13_STATE_VARIABLE_DeadInfo_22);
                          STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv13_STATE_VARIABLE_DeadInfo_22));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word SubGoal_81 = ((MR_Word) ((MR_hl_field(2, ShortHand_60, (MR_Integer) 2))));
                          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_81;
                          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_21;

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
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_22;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9 = tscc_output_1_STATE_VARIABLE_DeadInfo_9;
  return;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9)
{
  MR_Word tscc_proc_1_input_1_Goal_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
  MR_Word tscc_output_1_STATE_VARIABLE_DeadInfo_9;

  // The code for TSCC PROC 2: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_unify_rhs/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal/3-0
  ;
  // proc 2 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_unify_rhs/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_DeadInfo_0_8 = tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
    MR_Word STATE_VARIABLE_DeadInfo_9;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_19 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_19;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_28 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_28;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = STATE_VARIABLE_DeadInfo_0_8;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredName_26 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 5))));

          transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_26, STATE_VARIABLE_DeadInfo_0_8, &STATE_VARIABLE_DeadInfo_9);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_0_8;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_0_8;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Box conv1_STATE_VARIABLE_DeadInfo_9;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[16]), Goals_11, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_8)), &conv1_STATE_VARIABLE_DeadInfo_9);
              STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_DeadInfo_9));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_DeadInfo_9;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[17]), Goals_51, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_8)), &conv3_STATE_VARIABLE_DeadInfo_9);
              STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv3_STATE_VARIABLE_DeadInfo_9));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Box conv7_STATE_VARIABLE_DeadInfo_9;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[19]), Cases_18, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_8)), &conv7_STATE_VARIABLE_DeadInfo_9);
              STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv7_STATE_VARIABLE_DeadInfo_9));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_52;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_8;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_DeadInfo_58_44;
              MR_Word STATE_VARIABLE_DeadInfo_59_45;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;

              transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_13, STATE_VARIABLE_DeadInfo_0_8, &STATE_VARIABLE_DeadInfo_58_44);
              transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_14, STATE_VARIABLE_DeadInfo_58_44, &STATE_VARIABLE_DeadInfo_59_45);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_15;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_59_45;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_32)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_37 = ((MR_Word) ((MR_hl_field(1, ShortHand_32, (MR_Integer) 4))));
                    MR_Word OrElseGoals_38 = ((MR_Word) ((MR_hl_field(1, ShortHand_32, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_DeadInfo_67_47;
                    MR_Box conv5_STATE_VARIABLE_DeadInfo_9;

                    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_37, STATE_VARIABLE_DeadInfo_0_8, &STATE_VARIABLE_DeadInfo_67_47);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[18]), OrElseGoals_38, ((MR_Box) (STATE_VARIABLE_DeadInfo_67_47)), &conv5_STATE_VARIABLE_DeadInfo_9);
                    STATE_VARIABLE_DeadInfo_9 = ((MR_Word) (conv5_STATE_VARIABLE_DeadInfo_9));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_53 = ((MR_Word) ((MR_hl_field(2, ShortHand_32, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_53;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_8;

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
    tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_9;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_Word STATE_VARIABLE_DeadInfo_0_21 = tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21;
    MR_Word STATE_VARIABLE_DeadInfo_22;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Functor_7 = ((MR_Word) ((MR_hl_field(1, RHS_4, (MR_Integer) 0))));
          MR_Word Name_10;

          succeeded = ((((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Name_10 = ((MR_Word) ((MR_hl_field(3, Functor_7, (MR_Integer) 1))));
            {
              MR_Word ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 0))));
              MR_Word Examined_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 2))));
              MR_Word Needed_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Queue_15_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_NeededNames_16_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_21, (MR_Integer) 4))));

              succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_NeededNames_16_29, ((MR_Box) (Name_10)));
              if (succeeded)
                STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
              else
              {
                MR_Word PredicateTable_26;
                MR_Word PredIds_27;
                MR_Word STATE_VARIABLE_NeededNames_17_30;
                MR_Word STATE_VARIABLE_Queue_19_32;

                hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_23, &PredicateTable_26);
                mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Name_10)), STATE_VARIABLE_NeededNames_16_29, &STATE_VARIABLE_NeededNames_17_30);
                hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_26, (MR_Integer) 1, Name_10, &PredIds_27);
                mercury__queue__put_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_27, STATE_VARIABLE_Queue_15_28, &STATE_VARIABLE_Queue_19_32);
                {
                  STATE_VARIABLE_DeadInfo_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 0) = ((MR_Box) (ModuleInfo_23));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_32));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 2) = ((MR_Box) (Examined_24));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 3) = ((MR_Box) (Needed_25));
                  MR_hl_field(0, STATE_VARIABLE_DeadInfo_22, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_30));
                }
              }
            }
          }
          else
            STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(2, RHS_4, (MR_Integer) 5))));
          MR_Word GoalExpr_36 = ((MR_Word) ((MR_hl_field(0, Goal_20, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) GoalExpr_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubGoal_47 = (MR_Word) ((MR_Word) (GoalExpr_36));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_47;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_21;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHS_56 = ((MR_Word) ((MR_hl_field(1, GoalExpr_36, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_56;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = STATE_VARIABLE_DeadInfo_0_21;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
                tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_21;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PredName_54 = ((MR_Word) ((MR_hl_field(2, GoalExpr_36, (MR_Integer) 5))));

                transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_54, STATE_VARIABLE_DeadInfo_0_21, &STATE_VARIABLE_DeadInfo_22);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_DeadInfo_22 = STATE_VARIABLE_DeadInfo_0_21;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Goals_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 2))));
                    MR_Box conv9_STATE_VARIABLE_DeadInfo_22;

                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[20]), Goals_39, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_21)), &conv9_STATE_VARIABLE_DeadInfo_22);
                    STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv9_STATE_VARIABLE_DeadInfo_22));
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Goals_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 1))));
                    MR_Box conv11_STATE_VARIABLE_DeadInfo_22;

                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[21]), Goals_79, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_21)), &conv11_STATE_VARIABLE_DeadInfo_22);
                    STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv11_STATE_VARIABLE_DeadInfo_22));
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word Cases_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 3))));
                    MR_Box conv15_STATE_VARIABLE_DeadInfo_22;

                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[23]), Cases_46, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_21)), &conv15_STATE_VARIABLE_DeadInfo_22);
                    STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv15_STATE_VARIABLE_DeadInfo_22));
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_80;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_21;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Cond_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 2))));
                    MR_Word Then_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 3))));
                    MR_Word Else_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 4))));
                    MR_Word STATE_VARIABLE_DeadInfo_58_72;
                    MR_Word STATE_VARIABLE_DeadInfo_59_73;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;

                    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_41, STATE_VARIABLE_DeadInfo_0_21, &STATE_VARIABLE_DeadInfo_58_72);
                    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_42, STATE_VARIABLE_DeadInfo_58_72, &STATE_VARIABLE_DeadInfo_59_73);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = Else_43;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_59_73;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ShortHand_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_36, (MR_Integer) 1))));

                    switch (MR_tag((MR_Word) ShortHand_60)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                          return;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word MainGoal_65 = ((MR_Word) ((MR_hl_field(1, ShortHand_60, (MR_Integer) 4))));
                          MR_Word OrElseGoals_66 = ((MR_Word) ((MR_hl_field(1, ShortHand_60, (MR_Integer) 5))));
                          MR_Word STATE_VARIABLE_DeadInfo_67_75;
                          MR_Box conv13_STATE_VARIABLE_DeadInfo_22;

                          transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_65, STATE_VARIABLE_DeadInfo_0_21, &STATE_VARIABLE_DeadInfo_67_75);
                          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[22]), OrElseGoals_66, ((MR_Box) (STATE_VARIABLE_DeadInfo_67_75)), &conv13_STATE_VARIABLE_DeadInfo_22);
                          STATE_VARIABLE_DeadInfo_22 = ((MR_Word) (conv13_STATE_VARIABLE_DeadInfo_22));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word SubGoal_81 = ((MR_Word) ((MR_hl_field(2, ShortHand_60, (MR_Integer) 2))));
                          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_81;
                          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_21;

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
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_22;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9 = tscc_output_1_STATE_VARIABLE_DeadInfo_9;
  return;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
  MR_Word Name_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_13,
  MR_Word * STATE_VARIABLE_DeadInfo_14)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 0))));
  MR_Word Examined_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 2))));
  MR_Word Needed_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_Queue_15_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_NeededNames_16_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 4))));

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
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (Examined_9));
      MR_hl_field(0, base, 3) = ((MR_Box) (Needed_10));
      MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_17));
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
  MR_Word PredId_4,
  MR_Word DeadInfo0_5,
  MR_Word * DeadInfo_6)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, DeadInfo0_5, (MR_Integer) 0))));
  MR_Word Examined_10 = ((MR_Word) ((MR_hl_field(0, DeadInfo0_5, (MR_Integer) 2))));
  MR_Word NeededIds_11 = ((MR_Word) ((MR_hl_field(0, DeadInfo0_5, (MR_Integer) 3))));
  MR_Word PredInfo_12;
  MR_Word STATE_VARIABLE_Queue_23_23 = ((MR_Word) ((MR_hl_field(0, DeadInfo0_5, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_NeededNames_24_24 = ((MR_Word) ((MR_hl_field(0, DeadInfo0_5, (MR_Integer) 4))));
  MR_Word STATE_VARIABLE_NeededNames_25_25;
  MR_Word STATE_VARIABLE_Queue_26_26;
  MR_Word PredModuleName_13;
  MR_String PredName_14;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, PredId_4, &PredInfo_12);
  PredModuleName_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
  PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_12);
  if (!(succeeded))
  {
    {
      MR_String PredModuleNameStr_15;
      MR_Word PredOrFunc_16;
      MR_Word PredFormArity_17;

      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(PredModuleName_13, &PredModuleNameStr_15);
      if (succeeded)
      {
        PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
        PredFormArity_17 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_12);
        succeeded = hlds__introduced_call_table__may_introduce_calls_to_4_p_0(PredOrFunc_16, PredModuleNameStr_15, PredName_14, PredFormArity_17);
      }
    }
    if (!(succeeded))
    {
      {
        MR_Word PredStatus_18;
        MR_Word OldStatus_19;

        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_12, &PredStatus_18);
        OldStatus_19 = (MR_Word) (PredStatus_18);
        switch (MR_tag((MR_Word) OldStatus_19)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_19)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 6:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 8:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (!(succeeded))
      {
        MR_Word Var_21;

        succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_12, &Var_21);
      }
    }
  }
  if (succeeded)
  {
    MR_Word PredSymName_22;

    {
      PredSymName_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_22, 0) = ((MR_Box) (PredModuleName_13));
      MR_hl_field(1, PredSymName_22, 1) = ((MR_Box) (PredName_14));
    }
    mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (PredSymName_22)), STATE_VARIABLE_NeededNames_24_24, &STATE_VARIABLE_NeededNames_25_25);
    mercury__queue__put_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_4)), STATE_VARIABLE_Queue_23_23, &STATE_VARIABLE_Queue_26_26);
  }
  else
  {
    STATE_VARIABLE_NeededNames_25_25 = STATE_VARIABLE_NeededNames_24_24;
    STATE_VARIABLE_Queue_26_26 = STATE_VARIABLE_Queue_23_23;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *DeadInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_Queue_26_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (Examined_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (NeededIds_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_25_25));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
  MR_Word Entity_6,
  MR_Word STATE_VARIABLE_Queue_0_19,
  MR_Word * STATE_VARIABLE_Queue_20,
  MR_Word STATE_VARIABLE_Preds_0_21,
  MR_Word * STATE_VARIABLE_Preds_22)
{
  switch (MR_tag((MR_Word) Entity_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredId_9;
        MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Entity_6, (MR_Integer) 0))));

        PredId_9 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
        mercury__queue__put_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_Queue_0_19, STATE_VARIABLE_Queue_20);
        mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_Preds_0_21, STATE_VARIABLE_Preds_22);
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Queue_20 = STATE_VARIABLE_Queue_0_19;
        *STATE_VARIABLE_Preds_22 = STATE_VARIABLE_Preds_0_21;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Queue_20 = STATE_VARIABLE_Queue_0_19;
        *STATE_VARIABLE_Preds_22 = STATE_VARIABLE_Preds_0_21;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Entity_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Queue_20 = STATE_VARIABLE_Queue_0_19;
            *STATE_VARIABLE_Preds_22 = STATE_VARIABLE_Preds_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Queue_20 = STATE_VARIABLE_Queue_0_19;
            *STATE_VARIABLE_Preds_22 = STATE_VARIABLE_Preds_0_21;
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
  MR_Word STATE_VARIABLE_NeededPreds_0_24,
  MR_Word * STATE_VARIABLE_NeededPreds_25)
{
  MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word TypeDefnBody_9;

  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &TypeDefnBody_9);
  switch (MR_tag((MR_Word) TypeDefnBody_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_10 = (MR_Word) ((MR_Word) (TypeDefnBody_9));
        MR_Word MaybeCanon_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_10, (MR_Integer) 2))));

        if ((MaybeCanon_13 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_NeededPreds_25 = STATE_VARIABLE_NeededPreds_0_24;
        else
        {
          MR_Word NonCanonical_35 = ((MR_Word) ((MR_hl_field(1, MaybeCanon_13, (MR_Integer) 0))));
          MR_Word PredTable_36;

          hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_36);
          switch (MR_tag((MR_Word) NonCanonical_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_NeededPreds_25 = STATE_VARIABLE_NeededPreds_0_24;
              break;
            case (MR_Integer) 1:
              {
                MR_Word UniPredSymName_37 = ((MR_Word) ((MR_hl_field(1, NonCanonical_35, (MR_Integer) 0))));
                MR_Word CmpPredSymName_38 = ((MR_Word) ((MR_hl_field(1, NonCanonical_35, (MR_Integer) 1))));
                MR_Word UniPredIds_39;
                MR_Word CmpPredIds_40;
                MR_Word STATE_VARIABLE_NeededPreds_23_48;

                hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_36, (MR_Integer) 0, UniPredSymName_37, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_39);
                hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_36, (MR_Integer) 0, CmpPredSymName_38, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_40);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_39, STATE_VARIABLE_NeededPreds_0_24, &STATE_VARIABLE_NeededPreds_23_48);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_40, STATE_VARIABLE_NeededPreds_23_48, STATE_VARIABLE_NeededPreds_25);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UniPredSymName_55 = ((MR_Word) ((MR_hl_field(2, NonCanonical_35, (MR_Integer) 0))));
                MR_Word UniPredIds_56;

                hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_36, (MR_Integer) 0, UniPredSymName_55, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_56);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_56, STATE_VARIABLE_NeededPreds_0_24, STATE_VARIABLE_NeededPreds_25);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_35, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CmpPredSymName_57 = ((MR_Word) ((MR_hl_field(3, NonCanonical_35, (MR_Integer) 1))));
                    MR_Word CmpPredIds_58;

                    hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_36, (MR_Integer) 0, CmpPredSymName_57, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_58);
                    mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_58, STATE_VARIABLE_NeededPreds_0_24, STATE_VARIABLE_NeededPreds_25);
                  }
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_NeededPreds_25 = STATE_VARIABLE_NeededPreds_0_24;
                  break;
              }
              break;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody_16 = (MR_Word) (MR_body((MR_Word) (TypeDefnBody_9), (MR_Integer) 1));
        MR_Word C_17 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_16, (MR_Integer) 0))));
        MR_Word Java_18 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_16, (MR_Integer) 1))));
        MR_Word CSharp_19 = ((MR_Word) ((MR_hl_field(0, ForeignTypeBody_16, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_NeededPreds_27_27;
        MR_Word STATE_VARIABLE_NeededPreds_28_28;

        if ((C_17 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_NeededPreds_27_27 = STATE_VARIABLE_NeededPreds_0_24;
        else
        {
          MR_Word MaybeCanon_63;
          MR_Word Var_65 = ((MR_Word) ((MR_hl_field(1, C_17, (MR_Integer) 0))));

          MaybeCanon_63 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 1))));
          if ((MaybeCanon_63 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_NeededPreds_27_27 = STATE_VARIABLE_NeededPreds_0_24;
          else
          {
            MR_Word NonCanonical_66 = ((MR_Word) ((MR_hl_field(1, MaybeCanon_63, (MR_Integer) 0))));
            MR_Word PredTable_67;

            hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_67);
            switch (MR_tag((MR_Word) NonCanonical_66)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_NeededPreds_27_27 = STATE_VARIABLE_NeededPreds_0_24;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word UniPredSymName_68 = ((MR_Word) ((MR_hl_field(1, NonCanonical_66, (MR_Integer) 0))));
                  MR_Word CmpPredSymName_69 = ((MR_Word) ((MR_hl_field(1, NonCanonical_66, (MR_Integer) 1))));
                  MR_Word UniPredIds_70;
                  MR_Word CmpPredIds_71;
                  MR_Word STATE_VARIABLE_NeededPreds_23_79;

                  hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_67, (MR_Integer) 0, UniPredSymName_68, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_70);
                  hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_67, (MR_Integer) 0, CmpPredSymName_69, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_71);
                  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_70, STATE_VARIABLE_NeededPreds_0_24, &STATE_VARIABLE_NeededPreds_23_79);
                  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_71, STATE_VARIABLE_NeededPreds_23_79, &STATE_VARIABLE_NeededPreds_27_27);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniPredSymName_86 = ((MR_Word) ((MR_hl_field(2, NonCanonical_66, (MR_Integer) 0))));
                  MR_Word UniPredIds_87;

                  hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_67, (MR_Integer) 0, UniPredSymName_86, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_87);
                  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_87, STATE_VARIABLE_NeededPreds_0_24, &STATE_VARIABLE_NeededPreds_27_27);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_66, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word CmpPredSymName_88 = ((MR_Word) ((MR_hl_field(3, NonCanonical_66, (MR_Integer) 1))));
                      MR_Word CmpPredIds_89;

                      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_67, (MR_Integer) 0, CmpPredSymName_88, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_89);
                      mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_89, STATE_VARIABLE_NeededPreds_0_24, &STATE_VARIABLE_NeededPreds_27_27);
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_NeededPreds_27_27 = STATE_VARIABLE_NeededPreds_0_24;
                    break;
                }
                break;
            }
          }
        }
        transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(ModuleInfo_5, Java_18, STATE_VARIABLE_NeededPreds_27_27, &STATE_VARIABLE_NeededPreds_28_28);
        transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(ModuleInfo_5, CSharp_19, STATE_VARIABLE_NeededPreds_28_28, STATE_VARIABLE_NeededPreds_25);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_NeededPreds_25 = STATE_VARIABLE_NeededPreds_0_24;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefnBody_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_20 = ((MR_Word) ((MR_hl_field(3, TypeDefnBody_9, (MR_Integer) 1))));
            MR_Word MaybeCanon_31 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_20, (MR_Integer) 1))));

            transform_hlds__dead_proc_elim__dead_pred_initialize_maybe_canonical_4_p_0(ModuleInfo_5, MaybeCanon_31, STATE_VARIABLE_NeededPreds_0_24, STATE_VARIABLE_NeededPreds_25);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_NeededPreds_25 = STATE_VARIABLE_NeededPreds_0_24;
          break;
      }
      break;
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
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, ForeignTypeLangBody_6, (MR_Integer) 0))));

    MaybeCanon_9 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
    if ((MaybeCanon_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NeededPreds_12 = STATE_VARIABLE_NeededPreds_0_11;
    else
    {
      MR_Word NonCanonical_15 = ((MR_Word) ((MR_hl_field(1, MaybeCanon_9, (MR_Integer) 0))));
      MR_Word PredTable_16;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_16);
      switch (MR_tag((MR_Word) NonCanonical_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_NeededPreds_12 = STATE_VARIABLE_NeededPreds_0_11;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UniPredSymName_17 = ((MR_Word) ((MR_hl_field(1, NonCanonical_15, (MR_Integer) 0))));
            MR_Word CmpPredSymName_18 = ((MR_Word) ((MR_hl_field(1, NonCanonical_15, (MR_Integer) 1))));
            MR_Word UniPredIds_19;
            MR_Word CmpPredIds_20;
            MR_Word STATE_VARIABLE_NeededPreds_23_28;

            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_16, (MR_Integer) 0, UniPredSymName_17, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_19);
            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_16, (MR_Integer) 0, CmpPredSymName_18, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_20);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_19, STATE_VARIABLE_NeededPreds_0_11, &STATE_VARIABLE_NeededPreds_23_28);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_20, STATE_VARIABLE_NeededPreds_23_28, STATE_VARIABLE_NeededPreds_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UniPredSymName_35 = ((MR_Word) ((MR_hl_field(2, NonCanonical_15, (MR_Integer) 0))));
            MR_Word UniPredIds_36;

            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_16, (MR_Integer) 0, UniPredSymName_35, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_36);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_36, STATE_VARIABLE_NeededPreds_0_11, STATE_VARIABLE_NeededPreds_12);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_15, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CmpPredSymName_37 = ((MR_Word) ((MR_hl_field(3, NonCanonical_15, (MR_Integer) 1))));
                MR_Word CmpPredIds_38;

                hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_16, (MR_Integer) 0, CmpPredSymName_37, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_38);
                mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_38, STATE_VARIABLE_NeededPreds_0_11, STATE_VARIABLE_NeededPreds_12);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_NeededPreds_12 = STATE_VARIABLE_NeededPreds_0_11;
              break;
          }
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
    MR_Word NonCanonical_8 = ((MR_Word) ((MR_hl_field(1, MaybeCanon_6, (MR_Integer) 0))));
    MR_Word PredTable_9;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_9);
    switch (MR_tag((MR_Word) NonCanonical_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_NeededPreds_16 = STATE_VARIABLE_NeededPreds_0_15;
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniPredSymName_10 = ((MR_Word) ((MR_hl_field(1, NonCanonical_8, (MR_Integer) 0))));
          MR_Word CmpPredSymName_11 = ((MR_Word) ((MR_hl_field(1, NonCanonical_8, (MR_Integer) 1))));
          MR_Word UniPredIds_12;
          MR_Word CmpPredIds_13;
          MR_Word STATE_VARIABLE_NeededPreds_23_23;

          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, UniPredSymName_10, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_12);
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, CmpPredSymName_11, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_13);
          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_12, STATE_VARIABLE_NeededPreds_0_15, &STATE_VARIABLE_NeededPreds_23_23);
          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_13, STATE_VARIABLE_NeededPreds_23_23, STATE_VARIABLE_NeededPreds_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniPredSymName_33 = ((MR_Word) ((MR_hl_field(2, NonCanonical_8, (MR_Integer) 0))));
          MR_Word UniPredIds_34;

          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, UniPredSymName_33, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &UniPredIds_34);
          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_34, STATE_VARIABLE_NeededPreds_0_15, STATE_VARIABLE_NeededPreds_16);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CmpPredSymName_35 = ((MR_Word) ((MR_hl_field(3, NonCanonical_8, (MR_Integer) 1))));
              MR_Word CmpPredIds_36;

              hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, CmpPredSymName_35, (MR_Word) (((MR_Box) ((MR_Integer) 3))), &CmpPredIds_36);
              mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_36, STATE_VARIABLE_NeededPreds_0_15, STATE_VARIABLE_NeededPreds_16);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_NeededPreds_16 = STATE_VARIABLE_NeededPreds_0_15;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__OtherProcId_39 = ((MR_Integer) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv0_OtherProcId_39));
  transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_44_44 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_36 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__OtherProcId_39));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_35 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_36));
  }
  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_44_44, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_45_45, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12, ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_35)));
  if ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
    transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), &(env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv0_OtherProcId_39, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__AllProcsInPred_16, transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKind_40 = ((MR_Word) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv1_SuppressPredKind_40));
  transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_6(env_ptr);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressMutableEntity_27 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableModuleName_22));
    MR_hl_field(3, base, 2) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableName_23));
    MR_hl_field(3, base, 3) = (MR_Box) ((MR_Unsigned) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKind_40));
  }
  (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_47_47, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_48_48, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12, ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressMutableEntity_27)));
  if ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
    transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_5(env_ptr);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), &(env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv1_SuppressPredKind_40, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKinds_25, transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_7, env_ptr);
      (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_TRUE;
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
  struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s env;

  (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12 = Needed_12;
  (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13 = PredId_13;
  (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__AllProcsInPred_16 = AllProcsInPred_16;
  {
    MR_Word Var_33;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (ProcId_18));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (Var_34));
    }
    (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12, ((MR_Box) (Var_33)));
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
      MR_Word Var_37;
      MR_Unsigned packed_word_0;

      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_14, &Origin_21);
      (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) Origin_21)) == (MR_Integer) 1);
      if ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(1, Origin_21, (MR_Integer) 0))));
        (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
        {
          (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableModuleName_22 = ((MR_Word) ((MR_hl_field(3, Var_37, (MR_Integer) 1))));
          (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableName_23 = ((MR_String) ((MR_hl_field(3, Var_37, (MR_Integer) 2))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, Var_37, (MR_Integer) 3)));
          PredKind_24 = ((MR_Unsigned) ((MR_hl_field(3, Var_37, (MR_Integer) 3))) & (MR_Integer) 15);
          (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKinds_25 = ((&transform_hlds__dead_proc_elim_vector_common_12[0 + PredKind_24]))->transform_hlds__dead_proc_elim__vector_common_type_12_0__vct_12_f_0;
          transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_8(&env);
        }
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
    MR_Word ProcPieces_55;
    MR_Word Pieces_56;
    MR_Word Var_58;
    MR_Word Var_63;
    MR_Box conv2_ProcInfo_28;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_17, ((MR_Box) (ProcId_18)), &conv2_ProcInfo_28);
    ProcInfo_28 = ((MR_Word) (conv2_ProcInfo_28));
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_28, &Context_29);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (ProcId_18));
    }
    ProcPieces_55 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_11, (MR_Integer) 1, Var_58);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_55, (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[26])));
    Pieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_1[23])), Var_63);
    {
      Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.dead_proc_elim.warn_dead_proc\'/4"));
      MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 88U));
      MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Context_29));
      MR_hl_field(1, Spec_30, 4) = ((MR_Box) (Pieces_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_32 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Specs_32;

  transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_32);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_32));
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

    ProcIds_17 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_14);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_14, &ProcTable_18);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_11[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (Needed_11));
      MR_hl_field(0, Var_24, 5) = ((MR_Box) (PredId_12));
      MR_hl_field(0, Var_24, 6) = ((MR_Box) (PredInfo_14));
      MR_hl_field(0, Var_24, 7) = ((MR_Box) (WarnWithLiveSiblings_10));
      MR_hl_field(0, Var_24, 8) = ((MR_Box) (ProcIds_17));
      MR_hl_field(0, Var_24, 9) = ((MR_Box) (ProcTable_18));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[7]), Var_24, ProcIds_17, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_20);
    *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_20));
  }
  else
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_8_p_0(
  MR_Word ProcElimInfo_9,
  MR_Word KeepAnyProc_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcTable_0_16,
  MR_Word * STATE_VARIABLE_ProcTable_17,
  MR_Word STATE_VARIABLE_DeletedProcIds_0_18,
  MR_Word * STATE_VARIABLE_DeletedProcIds_19)
{
  MR_bool succeeded;
  MR_Word Needed_15 = ((MR_Word) ((MR_hl_field(0, ProcElimInfo_9, (MR_Integer) 0))));

  {
    MR_Word Var_20;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (ProcId_12));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (Var_21));
    }
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), Needed_15, ((MR_Box) (Var_20)));
  }
  if (!(succeeded))
  {
    MR_Integer Var_29;

    succeeded = (KeepAnyProc_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_29 = ((MR_Integer) ((MR_hl_field(1, KeepAnyProc_10, (MR_Integer) 0))));
      succeeded = (ProcId_12 == Var_29);
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_DeletedProcIds_19 = STATE_VARIABLE_DeletedProcIds_0_18;
    *STATE_VARIABLE_ProcTable_17 = STATE_VARIABLE_ProcTable_0_16;
  }
  else
  {
    mercury__map__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_12)), STATE_VARIABLE_ProcTable_0_16, STATE_VARIABLE_ProcTable_17);
    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_12)), STATE_VARIABLE_DeletedProcIds_0_18, STATE_VARIABLE_DeletedProcIds_19);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_43;

  transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__1149__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_43);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_43));
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
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ProcTable_17;
  MR_Word conv1_STATE_VARIABLE_DeletedProcIds_19;

  transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ProcTable_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_DeletedProcIds_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ProcTable_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_DeletedProcIds_19));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
  MR_Word ElimOptImported_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcElimInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcElimInfo_32)
{
  MR_bool succeeded;
  MR_Word Needed_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcElimInfo_0_31, (MR_Integer) 0))));
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcElimInfo_0_31, (MR_Integer) 1))));
  MR_Word PredTable0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcElimInfo_0_31, (MR_Integer) 2))));
  MR_Word ElimMap0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ProcElimInfo_0_31, (MR_Integer) 3))));
  MR_Word PredInfo0_12;
  MR_Word PredStatus_13;
  MR_Box conv0_PredInfo0_12;
  MR_Word KeepAnyProc_14;
  MR_Word Var_77;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_10, ((MR_Box) (PredId_6)), &conv0_PredInfo0_12);
  PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_12, &PredStatus_13);
  Var_77 = (MR_Word) (PredStatus_13);
  switch (MR_tag((MR_Word) Var_77)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Var_77)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            KeepAnyProc_14 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer InitProcId_15;

            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&InitProcId_15);
            {
              KeepAnyProc_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, KeepAnyProc_14, 0) = ((MR_Box) (InitProcId_15));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            KeepAnyProc_14 = (MR_Word) ((MR_Unsigned) 0U);
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
    MR_Word DeletedProcIds_19;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Box conv4_ProcTable_18;
    MR_Box conv3_DeletedProcIds_19;

    ProcIds_16 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo0_12);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_17);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_10[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (STATE_VARIABLE_ProcElimInfo_0_31));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (KeepAnyProc_14));
      MR_hl_field(0, Var_36, 5) = ((MR_Box) (PredId_6));
    }
    Var_37 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[6]), Var_36, ProcIds_16, ((MR_Box) (ProcTable0_17)), &conv4_ProcTable_18, ((MR_Box) (Var_37)), &conv3_DeletedProcIds_19);
    ProcTable_18 = ((MR_Word) (conv4_ProcTable_18));
    DeletedProcIds_19 = ((MR_Word) (conv3_DeletedProcIds_19));
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), DeletedProcIds_19);
    if (succeeded)
      *STATE_VARIABLE_ProcElimInfo_32 = STATE_VARIABLE_ProcElimInfo_0_31;
    else
    {
      MR_Word ElimWhat_20;
      MR_Word ElimMap_21;
      MR_Word PredInfo_22;
      MR_Word PredTable_23;

      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_18);
      if (succeeded)
        ElimWhat_20 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[5]);
      else
        {
          ElimWhat_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ElimWhat_20, 0) = ((MR_Box) (DeletedProcIds_19));
        }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0), ((MR_Box) (PredId_6)), ((MR_Box) (ElimWhat_20)), ElimMap0_11, &ElimMap_21);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_18, PredInfo0_12, &PredInfo_22);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_22)), PredTable0_10, &PredTable_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ProcElimInfo_32 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Needed_8));
        MR_hl_field(0, base, 1) = ((MR_Box) (ModuleInfo_9));
        MR_hl_field(0, base, 2) = ((MR_Box) (PredTable_23));
        MR_hl_field(0, base, 3) = ((MR_Box) (ElimMap_21));
      }
    }
  }
  else
  {
    MR_Word Var_40;

    succeeded = (ElimOptImported_5 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_40 = (MR_Word) (PredStatus_13);
      succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word DestroyGoal_24;
      MR_Word PredInfo1_30;
      MR_Word ProcIds_53;
      MR_Word ProcTable0_54;
      MR_Word ProcTable_55;
      MR_Word ElimMap_57;
      MR_Word PredInfo_58;
      MR_Word PredTable_59;
      MR_Box conv6_ProcTable_55;

      ProcIds_53 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo0_12);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_54);
      {
        DestroyGoal_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DestroyGoal_24, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[5]));
        MR_hl_field(0, DestroyGoal_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2));
        MR_hl_field(0, DestroyGoal_24, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, DestroyGoal_24, 3) = ((MR_Box) (ProcTable0_54));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0), ((MR_Box) (PredId_6)), ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_3[6])), ElimMap0_11, &ElimMap_57);
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[4]), DestroyGoal_24, ProcIds_53, ((MR_Box) (ProcTable0_54)), &conv6_ProcTable_55);
      ProcTable_55 = ((MR_Word) (conv6_ProcTable_55));
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_55, PredInfo0_12, &PredInfo1_30);
      hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) (MR_mkword(2, &transform_hlds__dead_proc_elim_scalar_common_3[6])))), PredInfo1_30, &PredInfo_58);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_58)), PredTable0_10, &PredTable_59);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ProcElimInfo_32 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Needed_8));
        MR_hl_field(0, base, 1) = ((MR_Box) (ModuleInfo_9));
        MR_hl_field(0, base, 2) = ((MR_Box) (PredTable_59));
        MR_hl_field(0, base, 3) = ((MR_Box) (ElimMap_57));
      }
    }
    else
      *STATE_VARIABLE_ProcElimInfo_32 = STATE_VARIABLE_ProcElimInfo_0_31;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__need_trace_goal_proc_6_p_0(
  MR_Word NeededReason_7,
  MR_Word TraceGoalPPId_8,
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15)
{
  MR_Word Entity_11;

  {
    Entity_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entity_11, 0) = ((MR_Box) (TraceGoalPPId_8));
  }
  transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_11, NeededReason_7, STATE_VARIABLE_Needed_0_14, STATE_VARIABLE_Needed_15);
  mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_11)), STATE_VARIABLE_Queue_0_12, STATE_VARIABLE_Queue_13);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
  MR_Word ClassProc_6,
  MR_Word STATE_VARIABLE_Queue_0_10,
  MR_Word * STATE_VARIABLE_Queue_11,
  MR_Word STATE_VARIABLE_Needed_0_12,
  MR_Word * STATE_VARIABLE_Needed_13)
{
  MR_Word Entity_9;

  {
    Entity_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entity_9, 0) = ((MR_Box) (ClassProc_6));
  }
  mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_9)), STATE_VARIABLE_Queue_0_10, STATE_VARIABLE_Queue_11);
  transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_9, (MR_Word) ((MR_Unsigned) 20U), STATE_VARIABLE_Needed_0_12, STATE_VARIABLE_Needed_13);
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Queue_11;
  MR_Word conv0_STATE_VARIABLE_Needed_13;

  transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_11, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_11));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_13));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
  MR_Word Class_6,
  MR_Word STATE_VARIABLE_Queue_0_11,
  MR_Word * STATE_VARIABLE_Queue_12,
  MR_Word STATE_VARIABLE_Needed_0_13,
  MR_Word * STATE_VARIABLE_Needed_14)
{
  MR_Word MethodInfos_9 = ((MR_Word) ((MR_hl_field(0, Class_6, (MR_Integer) 8))));
  MR_Word MethodPredProcIds_10;
  MR_Box conv3_STATE_VARIABLE_Queue_12;
  MR_Box conv2_STATE_VARIABLE_Needed_14;

  MethodPredProcIds_10 = hlds__hlds_class__method_infos_to_pred_proc_ids_1_f_0(MethodInfos_9);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[15]), MethodPredProcIds_10, ((MR_Box) (STATE_VARIABLE_Queue_0_11)), &conv3_STATE_VARIABLE_Queue_12, ((MR_Box) (STATE_VARIABLE_Needed_0_13)), &conv2_STATE_VARIABLE_Needed_14);
  *STATE_VARIABLE_Queue_12 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_12));
  *STATE_VARIABLE_Needed_14 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Queue_11;
  MR_Word conv0_STATE_VARIABLE_Needed_13;

  transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_11, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_11));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_13));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
  MR_Word Instance_6,
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15)
{
  MR_Word MaybeMethodInfos_9 = ((MR_Word) ((MR_hl_field(0, Instance_6, (MR_Integer) 9))));

  if ((MaybeMethodInfos_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Queue_13 = STATE_VARIABLE_Queue_0_12;
    *STATE_VARIABLE_Needed_15 = STATE_VARIABLE_Needed_0_14;
  }
  else
  {
    MR_Word MethodInfos_10 = ((MR_Word) ((MR_hl_field(1, MaybeMethodInfos_9, (MR_Integer) 0))));
    MR_Word MethodPredProcIds_11;
    MR_Box conv3_STATE_VARIABLE_Queue_13;
    MR_Box conv2_STATE_VARIABLE_Needed_15;

    MethodPredProcIds_11 = hlds__hlds_class__method_infos_to_pred_proc_ids_1_f_0(MethodInfos_10);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[14]), MethodPredProcIds_11, ((MR_Box) (STATE_VARIABLE_Queue_0_12)), &conv3_STATE_VARIABLE_Queue_13, ((MR_Box) (STATE_VARIABLE_Needed_0_14)), &conv2_STATE_VARIABLE_Needed_15);
    *STATE_VARIABLE_Queue_13 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_13));
    *STATE_VARIABLE_Needed_15 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_15));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Msgs_14;

  transform_hlds__dead_proc_elim__acc_pred_elimination_msg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Msgs_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Msgs_14));
}

void MR_CALL 
transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word ElimMap_8)
{
  MR_Word ElimMapAL_10;
  MR_Word Msgs_11;
  MR_Word SortedMsgs_12;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Box conv1_Msgs_11;
  MR_Box conv2_STATE_VARIABLE_IO_14;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0), ElimMap_8, &ElimMapAL_10);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[3]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[2]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[3]), Var_15, ElimMapAL_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Msgs_11);
  Msgs_11 = ((MR_Word) (conv1_Msgs_11));
  mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Msgs_11, &SortedMsgs_12);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[4]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0_2));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Stream_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, SortedMsgs_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_14);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__dead_proc_elim__output_needed_map_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
transform_hlds__dead_proc_elim__output_needed_map_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word Needed_8)
{
  MR_Word NeededAL_10;
  MR_Word Var_15;
  MR_Box conv0_STATE_VARIABLE_IO_16_16;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), Needed_8, &NeededAL_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% Needed map:\n");
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[3]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__output_needed_map_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, NeededAL_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% End of needed map\n");
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1482__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_LambdaHeadVar__3_58;

  transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1470__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_LambdaHeadVar__3_58);
  *wrapper_arg_3 = ((MR_Box) (conv16_LambdaHeadVar__3_58));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_DeadInfo_6;

  transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_DeadInfo_6);
  *wrapper_arg_3 = ((MR_Box) (conv14_DeadInfo_6));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_NeededPreds_25;

  transform_hlds__dead_proc_elim__dead_pred_initialize_referred_preds_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_NeededPreds_25);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_NeededPreds_25));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Queue_20;
  MR_Word conv8_STATE_VARIABLE_Preds_22;

  transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Queue_20, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Preds_22);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Queue_20));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Preds_22));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Queue_12;
  MR_Word conv4_STATE_VARIABLE_Needed_14;

  transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Queue_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Needed_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Queue_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Needed_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Queue_13;
  MR_Word conv0_STATE_VARIABLE_Needed_15;

  transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_15));
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46)
{
  MR_bool succeeded;
  MR_Word NeededMap0_4;
  MR_Word PragmaExports_5;
  MR_Word NeededMap1_7;
  MR_Word Instances_8;
  MR_Word Classes_9;
  MR_Word NeededMap_11;
  MR_Word NeededEntities_12;
  MR_Word NeededPreds0_13;
  MR_Word Queue_14;
  MR_Word NeededPreds1_15;
  MR_Word TypeTable_16;
  MR_Word TypeCtorDefns_17;
  MR_Word NeededPreds2_18;
  MR_Word PredIds_19;
  MR_Word Preds0_20;
  MR_Word Names0_21;
  MR_Word DeadInfo0_22;
  MR_Word DeadInfo1_23;
  MR_Word DeadInfo_24;
  MR_Word NeededPreds3_27;
  MR_Word TypeSpecInfo0_29;
  MR_Word TypeSpecProcs0_30;
  MR_Word TypeSpecForcePreds0_31;
  MR_Word SpecMap0_32;
  MR_Word PragmaMap0_33;
  MR_Word NeededPredList3_34;
  MR_Word NeededPreds_39;
  MR_Word TypeSpecForcePreds_40;
  MR_Word TypeSpecInfo_41;
  MR_Word PredTable0_42;
  MR_Word PartialQualInfo_43;
  MR_Word PredTable_44;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_ModuleInfo_54_54;
  MR_Word Var_55;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_ModuleInfo_60_60;
  MR_Word Var_61;
  MR_Word InstanceDefnsLists_86;
  MR_Word InstanceDefns_87;
  MR_Word ClassDefns_88;
  MR_Word STATE_VARIABLE_Queue_19_90;
  MR_Word STATE_VARIABLE_Needed_20_91;
  MR_Word Var_6;
  MR_Box conv3_STATE_VARIABLE_Queue_19_90;
  MR_Box conv2_STATE_VARIABLE_Needed_20_91;
  MR_Box conv7_Var_10;
  MR_Box conv6_NeededMap_11;
  MR_Box conv11_Queue_14;
  MR_Box conv10_NeededPreds1_15;
  MR_Box conv13_NeededPreds2_18;
  MR_Box conv15_DeadInfo1_23;
  MR_Box conv17_NeededPreds_39;

  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), &NeededMap0_4);
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &PragmaExports_5);
  Var_47 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExports_5);
  Var_48 = mercury__queue__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0));
  transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(Var_47, Var_48, &Var_6, NeededMap0_4, &NeededMap1_7);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &Instances_8);
  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &Classes_9);
  Var_49 = mercury__queue__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0));
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), Instances_8, &InstanceDefnsLists_86);
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceDefnsLists_86, &InstanceDefns_87);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[10]), InstanceDefns_87, ((MR_Box) (Var_49)), &conv3_STATE_VARIABLE_Queue_19_90, ((MR_Box) (NeededMap1_7)), &conv2_STATE_VARIABLE_Needed_20_91);
  STATE_VARIABLE_Queue_19_90 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_19_90));
  STATE_VARIABLE_Needed_20_91 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_20_91));
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_9, &ClassDefns_88);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[11]), ClassDefns_88, ((MR_Box) (STATE_VARIABLE_Queue_19_90)), &conv7_Var_10, ((MR_Box) (STATE_VARIABLE_Needed_20_91)), &conv6_NeededMap_11);
  NeededMap_11 = ((MR_Word) (conv6_NeededMap_11));
  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), NeededMap_11, &NeededEntities_12);
  NeededPreds0_13 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_51 = mercury__queue__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[0]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[12]), NeededEntities_12, ((MR_Box) (Var_51)), &conv11_Queue_14, ((MR_Box) (NeededPreds0_13)), &conv10_NeededPreds1_15);
  Queue_14 = ((MR_Word) (conv11_Queue_14));
  NeededPreds1_15 = ((MR_Word) (conv10_NeededPreds1_15));
  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &TypeTable_16);
  hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_16, &TypeCtorDefns_17);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[1]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_45));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[0]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), Var_52, TypeCtorDefns_17, ((MR_Box) (NeededPreds1_15)), &conv13_NeededPreds2_18);
  NeededPreds2_18 = ((MR_Word) (conv13_NeededPreds2_18));
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &PredIds_19);
  Preds0_20 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Names0_21 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  {
    DeadInfo0_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DeadInfo0_22, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_45));
    MR_hl_field(0, DeadInfo0_22, 1) = ((MR_Box) (Queue_14));
    MR_hl_field(0, DeadInfo0_22, 2) = ((MR_Box) (Preds0_20));
    MR_hl_field(0, DeadInfo0_22, 3) = ((MR_Box) (NeededPreds2_18));
    MR_hl_field(0, DeadInfo0_22, 4) = ((MR_Box) (Names0_21));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[13]), PredIds_19, ((MR_Box) (DeadInfo0_22)), &conv15_DeadInfo1_23);
  DeadInfo1_23 = ((MR_Word) (conv15_DeadInfo1_23));
  transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(DeadInfo1_23, &DeadInfo_24);
  STATE_VARIABLE_ModuleInfo_54_54 = ((MR_Word) ((MR_hl_field(0, DeadInfo_24, (MR_Integer) 0))));
  NeededPreds3_27 = ((MR_Word) ((MR_hl_field(0, DeadInfo_24, (MR_Integer) 3))));
  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_54_54, &TypeSpecInfo0_29);
  TypeSpecProcs0_30 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_29, (MR_Integer) 0))));
  TypeSpecForcePreds0_31 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_29, (MR_Integer) 1))));
  SpecMap0_32 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_29, (MR_Integer) 2))));
  PragmaMap0_33 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_29, (MR_Integer) 3))));
  NeededPredList3_34 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NeededPreds3_27);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[2]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_6));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (SpecMap0_32));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), Var_55, NeededPredList3_34, ((MR_Box) (NeededPreds3_27)), &conv17_NeededPreds_39);
  NeededPreds_39 = ((MR_Word) (conv17_NeededPreds_39));
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_9[0]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_7));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (NeededPreds_39));
  }
  TypeSpecForcePreds_40 = mercury__set__filter_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_59, TypeSpecForcePreds0_31);
  {
    TypeSpecInfo_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSpecInfo_41, 0) = ((MR_Box) (TypeSpecProcs0_30));
    MR_hl_field(0, TypeSpecInfo_41, 1) = ((MR_Box) (TypeSpecForcePreds_40));
    MR_hl_field(0, TypeSpecInfo_41, 2) = ((MR_Box) (SpecMap0_32));
    MR_hl_field(0, TypeSpecInfo_41, 3) = ((MR_Box) (PragmaMap0_33));
  }
  hlds__hlds_module__module_info_set_type_spec_info_3_p_0(TypeSpecInfo_41, STATE_VARIABLE_ModuleInfo_54_54, &STATE_VARIABLE_ModuleInfo_60_60);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_60_60, &PredTable0_42);
  hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_60_60, &PartialQualInfo_43);
  Var_61 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NeededPreds_39);
  hlds__pred_table__predicate_table_restrict_4_p_0(PartialQualInfo_43, Var_61, PredTable0_42, &PredTable_44);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_44, STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ModuleInfo_46);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DeadInfo_7;

  transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DeadInfo_7);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DeadInfo_7));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
  MR_Word STATE_VARIABLE_DeadInfo_0_15,
  MR_Word * STATE_VARIABLE_DeadInfo_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 0))));
    MR_Word NeededNames_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_Queue_17_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Examined_18_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Needed_19_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 3))));
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
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_21_21, 0) = ((MR_Box) (ModuleInfo_7));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Queue_20_20));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_21_21, 2) = ((MR_Box) (STATE_VARIABLE_Examined_18_18));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_21_21, 3) = ((MR_Box) (STATE_VARIABLE_Needed_19_19));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_21_21, 4) = ((MR_Box) (NeededNames_8));
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
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_24_24, 0) = ((MR_Box) (ModuleInfo_7));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Queue_20_20));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_24_24, 2) = ((MR_Box) (STATE_VARIABLE_Examined_23_23));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_24_24, 3) = ((MR_Box) (STATE_VARIABLE_Needed_22_22));
          MR_hl_field(0, STATE_VARIABLE_DeadInfo_24_24, 4) = ((MR_Box) (NeededNames_8));
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
transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_20;

  transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Specs_4)
{
  MR_Word Needed_6;
  MR_Word PredIds_10;
  MR_Word PredIdTable_11;
  MR_Word Globals_12;
  MR_Word WarnWithLiveSiblings_13;
  MR_Word Var_15;
  MR_Box conv1_Specs_4;

  transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(ModuleInfo_3, (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[2]), &Needed_6);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &PredIds_10);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_3, &PredIdTable_11);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 42, &WarnWithLiveSiblings_13);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ModuleInfo_3));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (PredIdTable_11));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (WarnWithLiveSiblings_13));
    MR_hl_field(0, Var_15, 6) = ((MR_Box) (Needed_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[7]), Var_15, PredIds_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Specs_4);
  *Specs_4 = ((MR_Word) (conv1_Specs_4));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcElimInfo_32;

  transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcElimInfo_32);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcElimInfo_32));
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0(
  MR_Word ElimOptImported_6,
  MR_Word * Needed_7,
  MR_Word * ElimMap_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_bool succeeded;
  MR_Word PredIds_16;
  MR_Word PredIdTable0_17;
  MR_Word ProcElimInfo0_18;
  MR_Word ProcElimInfo_19;
  MR_Word PredIdTable_20;
  MR_Word TypeCtorGenInfos0_21;
  MR_Word TypeCtorGenInfos_22;
  MR_Word ConstStructDb0_23;
  MR_Word ConstNumStructs0_24;
  MR_Word ConstStructDb_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_Needed_26_28;
  MR_Word STATE_VARIABLE_ModuleInfo_27_29;
  MR_Word STATE_VARIABLE_ModuleInfo_29_30;
  MR_Word STATE_VARIABLE_ModuleInfo_30_31;
  MR_Word STATE_VARIABLE_ModuleInfo_31_32;
  MR_Box conv1_ProcElimInfo_19;

  transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[1]), Needed_7);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIds_16);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIdTable0_17);
  Var_26 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0));
  {
    ProcElimInfo0_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcElimInfo0_18, 0) = ((MR_Box) (*Needed_7));
    MR_hl_field(0, ProcElimInfo0_18, 1) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11));
    MR_hl_field(0, ProcElimInfo0_18, 2) = ((MR_Box) (PredIdTable0_17));
    MR_hl_field(0, ProcElimInfo0_18, 3) = ((MR_Box) (Var_26));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[0]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (ElimOptImported_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0), Var_27, PredIds_16, ((MR_Box) (ProcElimInfo0_18)), &conv1_ProcElimInfo_19);
  ProcElimInfo_19 = ((MR_Word) (conv1_ProcElimInfo_19));
  STATE_VARIABLE_Needed_26_28 = ((MR_Word) ((MR_hl_field(0, ProcElimInfo_19, (MR_Integer) 0))));
  STATE_VARIABLE_ModuleInfo_27_29 = ((MR_Word) ((MR_hl_field(0, ProcElimInfo_19, (MR_Integer) 1))));
  PredIdTable_20 = ((MR_Word) ((MR_hl_field(0, ProcElimInfo_19, (MR_Integer) 2))));
  *ElimMap_8 = ((MR_Word) ((MR_hl_field(0, ProcElimInfo_19, (MR_Integer) 3))));
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_20, STATE_VARIABLE_ModuleInfo_27_29, &STATE_VARIABLE_ModuleInfo_29_30);
  hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(STATE_VARIABLE_ModuleInfo_29_30, &TypeCtorGenInfos0_21);
  transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(TypeCtorGenInfos0_21, STATE_VARIABLE_Needed_26_28, &TypeCtorGenInfos_22);
  hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(TypeCtorGenInfos_22, STATE_VARIABLE_ModuleInfo_29_30, &STATE_VARIABLE_ModuleInfo_30_31);
  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(STATE_VARIABLE_ModuleInfo_30_31, &ConstStructDb0_23);
  hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb0_23, &ConstNumStructs0_24);
  transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(ConstNumStructs0_24, STATE_VARIABLE_Needed_26_28, ConstStructDb0_23, &ConstStructDb_25);
  hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_25, STATE_VARIABLE_ModuleInfo_30_31, &STATE_VARIABLE_ModuleInfo_31_32);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0), *ElimMap_8);
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_31_32;
  else
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_31_32, STATE_VARIABLE_ModuleInfo_12);
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
      MR_Word ConstNumStructs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Entity_14;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ConstStructDb_19_19;
      MR_Box conv0_Var_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConstStructDb_0_3;

      ConstNum_9 = ((MR_Integer) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      {
        Entity_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Entity_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Entity_14, 1) = ((MR_Box) (ConstNum_9));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeCtorGenInfo0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeCtorGenInfos0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeCtorGenInfos1_9;
    MR_Word ModuleName_11;
    MR_String TypeName_12;
    MR_Integer Arity_13;
    MR_Word Entity_18;
    MR_Box conv0_Var_19;

    transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(TypeCtorGenInfos0_6, HeadVar__2_2, &TypeCtorGenInfos1_9);
    ModuleName_11 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo0_5, (MR_Integer) 1))));
    TypeName_12 = ((MR_String) ((MR_hl_field(0, TypeCtorGenInfo0_5, (MR_Integer) 2))));
    Arity_13 = ((MR_Integer) ((MR_hl_field(0, TypeCtorGenInfo0_5, (MR_Integer) 3))));
    {
      Entity_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Entity_18, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(2, Entity_18, 1) = ((MR_Box) (TypeName_12));
      MR_hl_field(2, Entity_18, 2) = ((MR_Box) (Arity_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), HeadVar__2_2, ((MR_Box) (Entity_18)), &conv0_Var_19);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeCtorGenInfo0_5));
        MR_hl_field(1, base, 1) = ((MR_Box) (TypeCtorGenInfos1_9));
      }
    else
      *HeadVar__3_3 = TypeCtorGenInfos1_9;
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Needed_4)
{
  transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(ModuleInfo_3, (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[0]), Needed_4);
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
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Queue_12;
  MR_Word conv4_STATE_VARIABLE_Needed_14;

  transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Queue_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Needed_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Queue_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Needed_14));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Queue_13;
  MR_Word conv0_STATE_VARIABLE_Needed_15;

  transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_15));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word AnalyzeLinks_5,
  MR_Word * STATE_VARIABLE_Needed_9)
{
  MR_Word Examined0_7;
  MR_Word Queue0_8;
  MR_Word STATE_VARIABLE_Needed_10_10;
  MR_Word PredIds_12;
  MR_Word PredIdTable_13;
  MR_Word PragmaExports_14;
  MR_Word InitProcs_15;
  MR_Word FinalPreds_16;
  MR_Word TypeCtorGenInfos_17;
  MR_Word Classes_18;
  MR_Word Instances_19;
  MR_Word STATE_VARIABLE_Queue_17_20;
  MR_Word STATE_VARIABLE_Needed_18_21;
  MR_Word STATE_VARIABLE_Queue_19_22;
  MR_Word STATE_VARIABLE_Needed_20_23;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_Queue_22_25;
  MR_Word STATE_VARIABLE_Needed_23_26;
  MR_Word STATE_VARIABLE_Queue_24_27;
  MR_Word STATE_VARIABLE_Needed_25_28;
  MR_Word STATE_VARIABLE_Queue_26_29;
  MR_Word STATE_VARIABLE_Needed_27_30;
  MR_Word STATE_VARIABLE_Queue_28_31;
  MR_Word STATE_VARIABLE_Needed_29_32;
  MR_Word InstanceDefnsLists_36;
  MR_Word InstanceDefns_37;
  MR_Word ClassDefns_38;
  MR_Word STATE_VARIABLE_Queue_19_40;
  MR_Word STATE_VARIABLE_Needed_20_41;
  MR_Box conv3_STATE_VARIABLE_Queue_19_40;
  MR_Box conv2_STATE_VARIABLE_Needed_20_41;
  MR_Box conv7_Queue0_8;
  MR_Box conv6_STATE_VARIABLE_Needed_10_10;

  Examined0_7 = mercury__set_tree234__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0));
  STATE_VARIABLE_Queue_17_20 = mercury__queue__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0));
  STATE_VARIABLE_Needed_18_21 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0));
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_4, &PredIds_12);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_4, &PredIdTable_13);
  transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(PredIdTable_13, PredIds_12, STATE_VARIABLE_Queue_17_20, &STATE_VARIABLE_Queue_19_22, STATE_VARIABLE_Needed_18_21, &STATE_VARIABLE_Needed_20_23);
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ModuleInfo_4, &PragmaExports_14);
  Var_24 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExports_14);
  transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(Var_24, STATE_VARIABLE_Queue_19_22, &STATE_VARIABLE_Queue_22_25, STATE_VARIABLE_Needed_20_23, &STATE_VARIABLE_Needed_23_26);
  hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(ModuleInfo_4, &InitProcs_15);
  transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(InitProcs_15, STATE_VARIABLE_Queue_22_25, &STATE_VARIABLE_Queue_24_27, STATE_VARIABLE_Needed_23_26, &STATE_VARIABLE_Needed_25_28);
  hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(ModuleInfo_4, &FinalPreds_16);
  transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(FinalPreds_16, STATE_VARIABLE_Queue_24_27, &STATE_VARIABLE_Queue_26_29, STATE_VARIABLE_Needed_25_28, &STATE_VARIABLE_Needed_27_30);
  hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(ModuleInfo_4, &TypeCtorGenInfos_17);
  transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(TypeCtorGenInfos_17, STATE_VARIABLE_Queue_26_29, &STATE_VARIABLE_Queue_28_31, STATE_VARIABLE_Needed_27_30, &STATE_VARIABLE_Needed_29_32);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_4, &Classes_18);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_4, &Instances_19);
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), Instances_19, &InstanceDefnsLists_36);
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceDefnsLists_36, &InstanceDefns_37);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[7]), InstanceDefns_37, ((MR_Box) (STATE_VARIABLE_Queue_28_31)), &conv3_STATE_VARIABLE_Queue_19_40, ((MR_Box) (STATE_VARIABLE_Needed_29_32)), &conv2_STATE_VARIABLE_Needed_20_41);
  STATE_VARIABLE_Queue_19_40 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_19_40));
  STATE_VARIABLE_Needed_20_41 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_20_41));
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_18, &ClassDefns_38);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[8]), ClassDefns_38, ((MR_Box) (STATE_VARIABLE_Queue_19_40)), &conv7_Queue0_8, ((MR_Box) (STATE_VARIABLE_Needed_20_41)), &conv6_STATE_VARIABLE_Needed_10_10);
  Queue0_8 = ((MR_Word) (conv7_Queue0_8));
  STATE_VARIABLE_Needed_10_10 = ((MR_Word) (conv6_STATE_VARIABLE_Needed_10_10));
  transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(ModuleInfo_4, AnalyzeLinks_5, Queue0_8, Examined0_7, STATE_VARIABLE_Needed_10_10, STATE_VARIABLE_Needed_9);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Queue_13;
  MR_Word conv2_STATE_VARIABLE_Needed_15;

  transform_hlds__dead_proc_elim__need_trace_goal_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Queue_13, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Needed_15);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Queue_13));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Needed_15));
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word AnalyzeLinks_8,
  MR_Word STATE_VARIABLE_Queue_0_25,
  MR_Word STATE_VARIABLE_Examined_0_26,
  MR_Word STATE_VARIABLE_Needed_0_27,
  MR_Word * STATE_VARIABLE_Needed_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Entity_12;
    MR_Word STATE_VARIABLE_Queue_29_29;
    MR_Box conv0_Entity_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), &conv0_Entity_12, STATE_VARIABLE_Queue_0_25, &STATE_VARIABLE_Queue_29_29);
    if (succeeded)
    {
      Entity_12 = ((MR_Word) (conv0_Entity_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Queue_31_31;
      MR_Word STATE_VARIABLE_Needed_32_32;
      MR_Word STATE_VARIABLE_Examined_37_37;
      MR_Word STATE_VARIABLE_Examined_30_30;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_25;
      MR_Word next_value_of_STATE_VARIABLE_Examined_0_26;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_27;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_12)), STATE_VARIABLE_Examined_0_26, &STATE_VARIABLE_Examined_30_30);
      if (succeeded)
      {
        STATE_VARIABLE_Examined_37_37 = STATE_VARIABLE_Examined_30_30;
        switch (MR_tag((MR_Word) Entity_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(0, Entity_12, (MR_Integer) 0))));
              MR_Word AnalyzeTraceGoalProcs_14 = ((((MR_Unsigned) ((MR_hl_field(0, AnalyzeLinks_8, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
              MR_Word PredId_61 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, (MR_Integer) 0))));
              MR_Integer ProcId_62 = ((MR_Integer) ((MR_hl_field(0, PredProcId_13, (MR_Integer) 1))));
              MR_Word PredInfo_63;
              MR_Word ProcIds_64;
              MR_Word ProcInfo_66;
              MR_Word TypeCtorInfo_83_87;
              MR_Word ProcTable_65;
              MR_Box conv1_ProcInfo_66;

              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_61, &PredInfo_63);
              ProcIds_64 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_63);
              succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_62)), ProcIds_64);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_63, &ProcTable_65);
                TypeCtorInfo_83_87 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
                mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), TypeCtorInfo_83_87, ProcTable_65, ((MR_Box) (ProcId_62)), &conv1_ProcInfo_66);
                ProcInfo_66 = ((MR_Word) (conv1_ProcInfo_66));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word EvalMethod_67;
                MR_Word NeededReason_68;
                MR_Word Goal_69;
                MR_Word Origin_73;
                MR_Word STATE_VARIABLE_Queue_48_79;
                MR_Word STATE_VARIABLE_Needed_49_80;
                MR_Word STATE_VARIABLE_Needed_52_82;
                MR_Word STATE_VARIABLE_Needed_65_84;
                MR_Word TabledMethod_71;
                MR_Word ModuleName_74;
                MR_String MutableName_75;
                MR_Word PredKind_76;
                MR_Word Var_85;

                hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_66, &EvalMethod_67);
                {
                  NeededReason_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NeededReason_68, 0) = ((MR_Box) (Entity_12));
                }
                hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_66, &Goal_69);
                transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(PredProcId_13, Goal_69, STATE_VARIABLE_Queue_29_29, &STATE_VARIABLE_Queue_48_79, STATE_VARIABLE_Needed_0_27, &STATE_VARIABLE_Needed_49_80);
                switch (AnalyzeTraceGoalProcs_14) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word DeletedCallCallees_70;
                      MR_Word Var_81;
                      MR_Box conv5_STATE_VARIABLE_Queue_31_31;
                      MR_Box conv4_STATE_VARIABLE_Needed_52_82;

                      hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(ProcInfo_66, &DeletedCallCallees_70);
                      {
                        Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_81, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[0]));
                        MR_hl_field(0, Var_81, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0_1));
                        MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(0, Var_81, 3) = ((MR_Box) (NeededReason_68));
                      }
                      mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), Var_81, DeletedCallCallees_70, ((MR_Box) (STATE_VARIABLE_Queue_48_79)), &conv5_STATE_VARIABLE_Queue_31_31, ((MR_Box) (STATE_VARIABLE_Needed_49_80)), &conv4_STATE_VARIABLE_Needed_52_82);
                      STATE_VARIABLE_Queue_31_31 = ((MR_Word) (conv5_STATE_VARIABLE_Queue_31_31));
                      STATE_VARIABLE_Needed_52_82 = ((MR_Word) (conv4_STATE_VARIABLE_Needed_52_82));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_48_79;
                      STATE_VARIABLE_Needed_52_82 = STATE_VARIABLE_Needed_49_80;
                    }
                    break;
                }
                succeeded = (EvalMethod_67 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TabledMethod_71 = ((MR_Word) ((MR_hl_field(1, EvalMethod_67, (MR_Integer) 0))));
                  switch (MR_tag((MR_Word) TabledMethod_71)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_97 = ((MR_Unsigned) ((MR_hl_field(3, TabledMethod_71, (MR_Integer) 0))) & (MR_Integer) 3);

                        switch (Var_97) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 2:
                            succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 0:
                            succeeded = MR_TRUE;
                            break;
                        }
                      }
                      break;
                  }
                }
                if (succeeded)
                {
                  MR_Word TableStructEntity_72;

                  {
                    TableStructEntity_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, TableStructEntity_72, 0) = ((MR_Box) (PredProcId_13));
                  }
                  transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(TableStructEntity_72, NeededReason_68, STATE_VARIABLE_Needed_52_82, &STATE_VARIABLE_Needed_65_84);
                }
                else
                  STATE_VARIABLE_Needed_65_84 = STATE_VARIABLE_Needed_52_82;
                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_63, &Origin_73);
                succeeded = ((MR_tag((MR_Word) Origin_73)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_85 = ((MR_Word) ((MR_hl_field(1, Origin_73, (MR_Integer) 0))));
                  succeeded = ((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_85, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ModuleName_74 = ((MR_Word) ((MR_hl_field(3, Var_85, (MR_Integer) 1))));
                    MutableName_75 = ((MR_String) ((MR_hl_field(3, Var_85, (MR_Integer) 2))));
                    PredKind_76 = ((MR_Unsigned) ((MR_hl_field(3, Var_85, (MR_Integer) 3))) & (MR_Integer) 15);
                  }
                }
                if (succeeded)
                {
                  MR_Word MutableEntity_77;

                  {
                    MutableEntity_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, MutableEntity_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, MutableEntity_77, 1) = ((MR_Box) (ModuleName_74));
                    MR_hl_field(3, MutableEntity_77, 2) = ((MR_Box) (MutableName_75));
                    MR_hl_field(3, MutableEntity_77, 3) = (MR_Box) ((MR_Unsigned) (PredKind_76));
                  }
                  transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(MutableEntity_77, NeededReason_68, STATE_VARIABLE_Needed_65_84, &STATE_VARIABLE_Needed_32_32);
                }
                else
                  STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_65_84;
              }
              else
              {
                STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_27;
                STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_29_29;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_29_29;
              STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_27;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Module_19 = ((MR_Word) ((MR_hl_field(2, Entity_12, (MR_Integer) 0))));
              MR_String Type_20 = ((MR_String) ((MR_hl_field(2, Entity_12, (MR_Integer) 1))));
              MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(2, Entity_12, (MR_Integer) 2))));
              MR_Word AnalyzeTypeCtor_22 = ((((MR_Unsigned) ((MR_hl_field(0, AnalyzeLinks_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

              switch (AnalyzeTypeCtor_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorGenInfos_98;
                    MR_Word Refs_99;

                    hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(ModuleInfo_7, &TypeCtorGenInfos_98);
                    succeeded = transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(Module_19, Type_20, Arity_21, TypeCtorGenInfos_98, &Refs_99);
                    if (succeeded)
                      transform_hlds__dead_proc_elim__dead_proc_examine_type_ctor_info_refs_5_p_0(Refs_99, STATE_VARIABLE_Queue_29_29, &STATE_VARIABLE_Queue_31_31, STATE_VARIABLE_Needed_0_27, &STATE_VARIABLE_Needed_32_32);
                    else
                    {
                      STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_27;
                      STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_29_29;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_29_29;
                    STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_27;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Entity_12, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ConstNum_23 = ((MR_Integer) ((MR_hl_field(3, Entity_12, (MR_Integer) 1))));
                  MR_Word AnalyzeConstStruct_24 = ((MR_Unsigned) ((MR_hl_field(0, AnalyzeLinks_8, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (AnalyzeConstStruct_24) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word ConstStructDb_46;
                        MR_Word ConstStruct_47;
                        MR_Word ConsId_48;
                        MR_Word Args_49;
                        MR_Word STATE_VARIABLE_Queue_26_57;
                        MR_Word STATE_VARIABLE_Needed_28_59;
                        MR_Word Module_53;
                        MR_String TypeName_54;
                        MR_Integer Arity_55;

                        hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_7, &ConstStructDb_46);
                        hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_46, ConstNum_23, &ConstStruct_47);
                        ConsId_48 = ((MR_Word) ((MR_hl_field(0, ConstStruct_47, (MR_Integer) 0))));
                        Args_49 = ((MR_Word) ((MR_hl_field(0, ConstStruct_47, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) ConsId_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_48, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                          Module_53 = ((MR_Word) ((MR_hl_field(3, ConsId_48, (MR_Integer) 1))));
                          TypeName_54 = ((MR_String) ((MR_hl_field(3, ConsId_48, (MR_Integer) 2))));
                          Arity_55 = ((MR_Integer) ((MR_hl_field(3, ConsId_48, (MR_Integer) 3))));
                          {
                            MR_Word Entity_56;

                            {
                              Entity_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Entity_56, 0) = ((MR_Box) (Module_53));
                              MR_hl_field(2, Entity_56, 1) = ((MR_Box) (TypeName_54));
                              MR_hl_field(2, Entity_56, 2) = ((MR_Box) (Arity_55));
                            }
                            mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_56)), STATE_VARIABLE_Queue_29_29, &STATE_VARIABLE_Queue_26_57);
                            transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_56, (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_Needed_0_27, &STATE_VARIABLE_Needed_28_59);
                          }
                        }
                        else
                        {
                          STATE_VARIABLE_Needed_28_59 = STATE_VARIABLE_Needed_0_27;
                          STATE_VARIABLE_Queue_26_57 = STATE_VARIABLE_Queue_29_29;
                        }
                        transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(Args_49, STATE_VARIABLE_Queue_26_57, &STATE_VARIABLE_Queue_31_31, STATE_VARIABLE_Needed_28_59, &STATE_VARIABLE_Needed_32_32);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_29_29;
                        STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_27;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_29_29;
                  STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_27;
                }
                break;
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_27;
        STATE_VARIABLE_Examined_37_37 = STATE_VARIABLE_Examined_0_26;
        STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_29_29;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Queue_0_25 = STATE_VARIABLE_Queue_31_31;
      next_value_of_STATE_VARIABLE_Examined_0_26 = STATE_VARIABLE_Examined_37_37;
      next_value_of_STATE_VARIABLE_Needed_0_27 = STATE_VARIABLE_Needed_32_32;
      STATE_VARIABLE_Queue_0_25 = next_value_of_STATE_VARIABLE_Queue_0_25;
      STATE_VARIABLE_Examined_0_26 = next_value_of_STATE_VARIABLE_Examined_0_26;
      STATE_VARIABLE_Needed_0_27 = next_value_of_STATE_VARIABLE_Needed_0_27;
      continue;
    }
    else
      *STATE_VARIABLE_Needed_28 = STATE_VARIABLE_Needed_0_27;
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word CurPredProcId_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_Queue_0_103,
  MR_Word * STATE_VARIABLE_Queue_104,
  MR_Word STATE_VARIABLE_Needed_0_105,
  MR_Word * STATE_VARIABLE_Needed_106)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_20 = (MR_Word) ((MR_Word) (GoalExpr_13));
          MR_Word next_value_of_Goal_10 = SubGoal_20;

          // direct tailcall eliminated
          ;
          Goal_10 = next_value_of_Goal_10;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_56 = ((MR_Word) ((MR_hl_field(1, GoalExpr_13, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_56)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConsId_59 = ((MR_Word) ((MR_hl_field(0, Unification_56, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ConsId_59)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                      *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                      *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_199;
                      MR_Word ShroudedPredProcId_237 = (MR_Word) (MR_body((MR_Word) (ConsId_59), (MR_Integer) 2));
                      MR_Word Entity_253;
                      MR_Word CurProcEntity_254;

                      Var_199 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_237);
                      {
                        Entity_253 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Entity_253, 0) = ((MR_Box) (Var_199));
                      }
                      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_253)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
                      {
                        CurProcEntity_254 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CurProcEntity_254, 0) = ((MR_Box) (CurPredProcId_9));
                      }
                      transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(Entity_253, CurProcEntity_254, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ConsId_59, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ShroudedPredProcId_65 = ((MR_Word) ((MR_hl_field(3, ConsId_59, (MR_Integer) 1))));
                          MR_Word Entity_67;
                          MR_Word Var_186;
                          MR_Word CurProcEntity_242;

                          Var_186 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_65);
                          {
                            Entity_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Entity_67, 0) = ((MR_Box) (Var_186));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_67)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
                          {
                            CurProcEntity_242 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, CurProcEntity_242, 0) = ((MR_Box) (CurPredProcId_9));
                          }
                          transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(Entity_67, CurProcEntity_242, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Word Module_68 = ((MR_Word) ((MR_hl_field(3, ConsId_59, (MR_Integer) 1))));
                          MR_String TypeName_69 = ((MR_String) ((MR_hl_field(3, ConsId_59, (MR_Integer) 2))));
                          MR_Integer Arity_70 = ((MR_Integer) ((MR_hl_field(3, ConsId_59, (MR_Integer) 3))));
                          MR_Word Entity_256;
                          MR_Word CurProcEntity_257;

                          {
                            Entity_256 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Entity_256, 0) = ((MR_Box) (Module_68));
                            MR_hl_field(2, Entity_256, 1) = ((MR_Box) (TypeName_69));
                            MR_hl_field(2, Entity_256, 2) = ((MR_Box) (Arity_70));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_256)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
                          {
                            CurProcEntity_257 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, CurProcEntity_257, 0) = ((MR_Box) (CurPredProcId_9));
                          }
                          transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(Entity_256, CurProcEntity_257, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                          *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Integer ConstNum_259 = ((MR_Integer) ((MR_hl_field(3, ConsId_59, (MR_Integer) 1))));
                          MR_Word CurProcEntity_260;
                          MR_Word Entity_261;

                          {
                            Entity_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Entity_261, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, Entity_261, 1) = ((MR_Box) (ConstNum_259));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_261)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
                          {
                            CurProcEntity_260 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, CurProcEntity_260, 0) = ((MR_Box) (CurPredProcId_9));
                          }
                          transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(Entity_261, CurProcEntity_260, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          MR_Integer ConstNum_263 = ((MR_Integer) ((MR_hl_field(3, ConsId_59, (MR_Integer) 1))));
                          MR_Word CurProcEntity_264;
                          MR_Word Entity_265;

                          {
                            Entity_265 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Entity_265, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, Entity_265, 1) = ((MR_Box) (ConstNum_263));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_265)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
                          {
                            CurProcEntity_264 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, CurProcEntity_264, 0) = ((MR_Box) (CurPredProcId_9));
                          }
                          transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(Entity_265, CurProcEntity_264, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          MR_Integer ConstNum_71 = ((MR_Integer) ((MR_hl_field(3, ConsId_59, (MR_Integer) 1))));
                          MR_Word CurProcEntity_243;
                          MR_Word Entity_244;

                          {
                            Entity_244 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Entity_244, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, Entity_244, 1) = ((MR_Box) (ConstNum_71));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_244)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
                          {
                            CurProcEntity_243 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, CurProcEntity_243, 0) = ((MR_Box) (CurPredProcId_9));
                          }
                          transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(Entity_244, CurProcEntity_243, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
              }
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_56, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
                    *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/7", (MR_String) "complicated_unify");
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
          MR_Word PredId_33 = ((MR_Word) ((MR_hl_field(2, GoalExpr_13, (MR_Integer) 0))));
          MR_Integer ProcId_34 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_13, (MR_Integer) 1))));
          MR_Word CalleePredProcId_39;
          MR_Word CalleeEntity_40;

          {
            CalleePredProcId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleePredProcId_39, 0) = ((MR_Box) (PredId_33));
            MR_hl_field(0, CalleePredProcId_39, 1) = ((MR_Box) (ProcId_34));
          }
          {
            CalleeEntity_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CalleeEntity_40, 0) = ((MR_Box) (CalleePredProcId_39));
          }
          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (CalleeEntity_40)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CalleePredProcId_39, CurPredProcId_9);
          if (succeeded)
          {
            MR_Word CurProcEntity_43;

            {
              CurProcEntity_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CurProcEntity_43, 0) = ((MR_Box) (CurPredProcId_9));
            }
            transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(CalleeEntity_40, CurProcEntity_43, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
          }
          else
          {
            MR_Word OldNotation_44;
            MR_Box conv0_OldNotation_44;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), STATE_VARIABLE_Needed_0_105, ((MR_Box) (CalleeEntity_40)), &conv0_OldNotation_44);
            if (succeeded)
            {
              OldNotation_44 = ((MR_Word) (conv0_OldNotation_44));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              if (((MR_tag((MR_Word) OldNotation_44)) == (MR_Integer) 1))
              {
                MR_Integer Count_46 = ((MR_Integer) ((MR_hl_field(1, OldNotation_44, (MR_Integer) 0))));
                MR_Word NewNotation_47;
                MR_Integer Var_145 = (MR_Integer) ((MR_Unsigned) Count_46 + (MR_Unsigned) 1);

                {
                  NewNotation_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewNotation_47, 0) = ((MR_Box) (Var_145));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (CalleeEntity_40)), ((MR_Box) (NewNotation_47)), STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
              }
              else
                *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
            else
              mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (CalleeEntity_40)), ((MR_Box) (MR_mkword(1, &transform_hlds__dead_proc_elim_scalar_common_3[4]))), STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
              *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_172;
              MR_Word PredId_227 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 2))));
              MR_Integer ProcId_228 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 3))));
              MR_Word CalleeEntity_229;
              MR_Word CurProcEntity_230;

              {
                Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_172, 0) = ((MR_Box) (PredId_227));
                MR_hl_field(0, Var_172, 1) = ((MR_Box) (ProcId_228));
              }
              {
                CalleeEntity_229 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CalleeEntity_229, 0) = ((MR_Box) (Var_172));
              }
              mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (CalleeEntity_229)), STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104);
              {
                CurProcEntity_230 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CurProcEntity_230, 0) = ((MR_Box) (CurPredProcId_9));
              }
              transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(CalleeEntity_229, CurProcEntity_230, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 2))));

              transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(CurPredProcId_9, Goals_16, STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_252 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 1))));

              transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(CurPredProcId_9, Goals_252, STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 3))));

              transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(CurPredProcId_9, Cases_19, STATE_VARIABLE_Queue_0_103, STATE_VARIABLE_Queue_104, STATE_VARIABLE_Needed_0_105, STATE_VARIABLE_Needed_106);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 1))));
              MR_Word SubGoal_220 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 2))));
              MR_Word FGT_23;

              succeeded = ((((MR_tag((MR_Word) Reason_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_23 = ((MR_Unsigned) ((MR_hl_field(3, Reason_21, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_23) {
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
                *STATE_VARIABLE_Needed_106 = STATE_VARIABLE_Needed_0_105;
                *STATE_VARIABLE_Queue_104 = STATE_VARIABLE_Queue_0_103;
              }
              else
              {
                MR_Word next_value_of_Goal_10 = SubGoal_220;

                // direct tailcall eliminated
                ;
                Goal_10 = next_value_of_Goal_10;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 2))));
              MR_Word Then_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 3))));
              MR_Word Else_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Queue_115_115;
              MR_Word STATE_VARIABLE_Needed_116_116;
              MR_Word STATE_VARIABLE_Queue_117_117;
              MR_Word STATE_VARIABLE_Needed_118_118;
              MR_Word next_value_of_Goal_10;
              MR_Word next_value_of_STATE_VARIABLE_Queue_0_103;
              MR_Word next_value_of_STATE_VARIABLE_Needed_0_105;

              transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CurPredProcId_9, Cond_25, STATE_VARIABLE_Queue_0_103, &STATE_VARIABLE_Queue_115_115, STATE_VARIABLE_Needed_0_105, &STATE_VARIABLE_Needed_116_116);
              transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CurPredProcId_9, Then_26, STATE_VARIABLE_Queue_115_115, &STATE_VARIABLE_Queue_117_117, STATE_VARIABLE_Needed_116_116, &STATE_VARIABLE_Needed_118_118);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_10 = Else_27;
              next_value_of_STATE_VARIABLE_Queue_0_103 = STATE_VARIABLE_Queue_117_117;
              next_value_of_STATE_VARIABLE_Needed_0_105 = STATE_VARIABLE_Needed_118_118;
              Goal_10 = next_value_of_Goal_10;
              STATE_VARIABLE_Queue_0_103 = next_value_of_STATE_VARIABLE_Queue_0_103;
              STATE_VARIABLE_Needed_0_105 = next_value_of_STATE_VARIABLE_Needed_0_105;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/7", (MR_String) "shorthand");
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
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_99_97_115_101_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word CurPredProcId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Queue_0_4,
  MR_Word * STATE_VARIABLE_Queue_5,
  MR_Word STATE_VARIABLE_Needed_0_6,
  MR_Word * STATE_VARIABLE_Needed_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_7 = STATE_VARIABLE_Needed_0_6;
      *STATE_VARIABLE_Queue_5 = STATE_VARIABLE_Queue_0_4;
    }
    else
    {
      MR_Word Goal_20;
      MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Queue_29_29;
      MR_Word STATE_VARIABLE_Needed_30_30;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_6;

      Goal_20 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 2))));
      transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CurPredProcId_2, Goal_20, STATE_VARIABLE_Queue_0_4, &STATE_VARIABLE_Queue_29_29, STATE_VARIABLE_Needed_0_6, &STATE_VARIABLE_Needed_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Cases_21;
      next_value_of_STATE_VARIABLE_Queue_0_4 = STATE_VARIABLE_Queue_29_29;
      next_value_of_STATE_VARIABLE_Needed_0_6 = STATE_VARIABLE_Needed_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Queue_0_4 = next_value_of_STATE_VARIABLE_Queue_0_4;
      STATE_VARIABLE_Needed_0_6 = next_value_of_STATE_VARIABLE_Needed_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word CurPredProcId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Queue_0_4,
  MR_Word * STATE_VARIABLE_Queue_5,
  MR_Word STATE_VARIABLE_Needed_0_6,
  MR_Word * STATE_VARIABLE_Needed_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_7 = STATE_VARIABLE_Needed_0_6;
      *STATE_VARIABLE_Queue_5 = STATE_VARIABLE_Queue_0_4;
    }
    else
    {
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Queue_26_26;
      MR_Word STATE_VARIABLE_Needed_27_27;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_6;

      transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_111_99_95_101_120_97_109_105_110_101_95_103_111_97_108_95_95_91_49_93_95_48_7_p_0(CurPredProcId_2, Goal_18, STATE_VARIABLE_Queue_0_4, &STATE_VARIABLE_Queue_26_26, STATE_VARIABLE_Needed_0_6, &STATE_VARIABLE_Needed_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Goals_19;
      next_value_of_STATE_VARIABLE_Queue_0_4 = STATE_VARIABLE_Queue_26_26;
      next_value_of_STATE_VARIABLE_Needed_0_6 = STATE_VARIABLE_Needed_27_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Queue_0_4 = next_value_of_STATE_VARIABLE_Queue_0_4;
      STATE_VARIABLE_Needed_0_6 = next_value_of_STATE_VARIABLE_Needed_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__record_entity_is_used_4_p_0(
  MR_Word Entity_5,
  MR_Word User_6,
  MR_Word STATE_VARIABLE_Needed_0_8,
  MR_Word * STATE_VARIABLE_Needed_9)
{
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (User_6));
  }
  transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_5, Var_10, STATE_VARIABLE_Needed_0_8, STATE_VARIABLE_Needed_9);
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
      MR_Word Arg_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Queue_27_27;
      MR_Word STATE_VARIABLE_Needed_29_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      if (((MR_tag((MR_Word) Arg_12)) == (MR_Integer) 0))
      {
        MR_Integer ConstNum_16 = ((MR_Integer) ((MR_hl_field(0, Arg_12, (MR_Integer) 0))));
        MR_Word Entity_17;

        {
          Entity_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Entity_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Entity_17, 1) = ((MR_Box) (ConstNum_16));
        }
        mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_17)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_27_27);
        transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_17, (MR_Word) ((MR_Unsigned) 16U), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_29_29);
      }
      else
      {
        MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(1, Arg_12, (MR_Integer) 0))));
        MR_Word Module_20;
        MR_String TypeName_21;
        MR_Integer Arity_22;

        succeeded = ((((MR_tag((MR_Word) ConsId_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_18, (MR_Integer) 0)))) == (MR_Integer) 10)));
        if (succeeded)
        {
          Module_20 = ((MR_Word) ((MR_hl_field(3, ConsId_18, (MR_Integer) 1))));
          TypeName_21 = ((MR_String) ((MR_hl_field(3, ConsId_18, (MR_Integer) 2))));
          Arity_22 = ((MR_Integer) ((MR_hl_field(3, ConsId_18, (MR_Integer) 3))));
          {
            MR_Word Entity_35;

            {
              Entity_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Entity_35, 0) = ((MR_Box) (Module_20));
              MR_hl_field(2, Entity_35, 1) = ((MR_Box) (TypeName_21));
              MR_hl_field(2, Entity_35, 2) = ((MR_Box) (Arity_22));
            }
            mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_35)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_27_27);
            transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_35, (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_29_29);
          }
        }
        else
        {
          STATE_VARIABLE_Needed_29_29 = STATE_VARIABLE_Needed_0_4;
          STATE_VARIABLE_Queue_27_27 = STATE_VARIABLE_Queue_0_2;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_27_27;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_29_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_2 = next_value_of_STATE_VARIABLE_Queue_0_2;
      STATE_VARIABLE_Needed_0_4 = next_value_of_STATE_VARIABLE_Needed_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_type_ctor_info_refs_5_p_0(
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
      MR_Word PPId_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PPIds_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Entity_16;
      MR_Word STATE_VARIABLE_Queue_21_21;
      MR_Word STATE_VARIABLE_Needed_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      {
        Entity_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Entity_16, 0) = ((MR_Box) (PPId_12));
      }
      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_16)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_21_21);
      transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_16, (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PPIds_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_21_21;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_23_23;
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
      TypeCtorGenInfo_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      TypeCtorGenInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_9, (MR_Integer) 1))));
      Var_20 = ((MR_String) ((MR_hl_field(0, TypeCtorGenInfo_9, (MR_Integer) 2))));
      Var_21 = ((MR_Integer) ((MR_hl_field(0, TypeCtorGenInfo_9, (MR_Integer) 3))));
      Unify_15 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_9, (MR_Integer) 6))));
      Compare_16 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_9, (MR_Integer) 7))));
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
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (Compare_16));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Refs_11 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Unify_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_17));
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
      MR_Word TypeCtorGenInfo_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeCtorGenInfos_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_12, (MR_Integer) 1))));
      MR_String TypeName_18 = ((MR_String) ((MR_hl_field(0, TypeCtorGenInfo_12, (MR_Integer) 2))));
      MR_Integer Arity_19 = ((MR_Integer) ((MR_hl_field(0, TypeCtorGenInfo_12, (MR_Integer) 3))));
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
          Entity_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Entity_24, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(2, Entity_24, 1) = ((MR_Box) (TypeName_18));
          MR_hl_field(2, Entity_24, 2) = ((MR_Box) (Arity_19));
        }
        mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_24)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_29_29);
        transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_24, (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_31_31);
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
      MR_Word PPId_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PPIds_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Entity_16;
      MR_Word STATE_VARIABLE_Queue_21_21;
      MR_Word STATE_VARIABLE_Needed_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      {
        Entity_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Entity_16, 0) = ((MR_Box) (PPId_12));
      }
      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_16)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_21_21);
      transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_16, (MR_Word) ((MR_Unsigned) 8U), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PPIds_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_21_21;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_23_23;
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
      MR_Word PragmaProc_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PragmaProcs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(0, PragmaProc_12, (MR_Integer) 1))));
      MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(0, PragmaProc_12, (MR_Integer) 2))));
      MR_Word Entity_21;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_Queue_27_27;
      MR_Word STATE_VARIABLE_Needed_29_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredId_17));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (ProcId_18));
      }
      {
        Entity_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Entity_21, 0) = ((MR_Box) (Var_26));
      }
      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_21)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_27_27);
      transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_21, (MR_Word) ((MR_Unsigned) 4U), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_29_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PragmaProcs_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_27_27;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_29_29;
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_6 = STATE_VARIABLE_Needed_0_5;
      *STATE_VARIABLE_Queue_4 = STATE_VARIABLE_Queue_0_3;
    }
    else
    {
      MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_19;
      MR_Word PredMarkers_20;
      MR_Word LiveProcIds_21;
      MR_Word ProcTable_22;
      MR_Word Procs_23;
      MR_Word STATE_VARIABLE_Queue_29_29;
      MR_Word STATE_VARIABLE_Needed_30_30;
      MR_Box conv0_PredInfo_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (PredId_15)), &conv0_PredInfo_19);
      PredInfo_19 = ((MR_Word) (conv0_PredInfo_19));
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_19, &PredMarkers_20);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_20, (MR_Integer) 10);
      if (succeeded)
        LiveProcIds_21 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_19);
      else
        LiveProcIds_21 = hlds__hlds_pred__pred_info_all_exported_procids_1_f_0(PredInfo_19);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_19, &ProcTable_22);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_22, &Procs_23);
      transform_hlds__dead_proc_elim__dead_proc_initialize_procs_7_p_0(PredId_15, Procs_23, LiveProcIds_21, STATE_VARIABLE_Queue_0_3, &STATE_VARIABLE_Queue_29_29, STATE_VARIABLE_Needed_0_5, &STATE_VARIABLE_Needed_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_16;
      next_value_of_STATE_VARIABLE_Queue_0_3 = STATE_VARIABLE_Queue_29_29;
      next_value_of_STATE_VARIABLE_Needed_0_5 = STATE_VARIABLE_Needed_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
      MR_Word ProcIdInfo_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIdInfos_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(0, ProcIdInfo_17, (MR_Integer) 0))));
      MR_Word ProcInfo_23 = ((MR_Word) ((MR_hl_field(0, ProcIdInfo_17, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Queue_31_31;
      MR_Word STATE_VARIABLE_Needed_33_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_6;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_22)), HeadVar__3_3);
      if (!(succeeded))
      {
        MR_Word Var_36;

        hlds__hlds_pred__proc_info_get_has_any_foreign_exports_2_p_0(ProcInfo_23, &Var_36);
        succeeded = ((MR_Integer) 1 == Var_36);
      }
      if (succeeded)
      {
        MR_Word Entity_24;
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (ProcId_22));
        }
        {
          Entity_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entity_24, 0) = ((MR_Box) (Var_30));
        }
        mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_24)), STATE_VARIABLE_Queue_0_4, &STATE_VARIABLE_Queue_31_31);
        transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(Entity_24, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Needed_0_6, &STATE_VARIABLE_Needed_33_33);
      }
      else
      {
        STATE_VARIABLE_Needed_33_33 = STATE_VARIABLE_Needed_0_6;
        STATE_VARIABLE_Queue_31_31 = STATE_VARIABLE_Queue_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIdInfos_18;
      next_value_of_STATE_VARIABLE_Queue_0_4 = STATE_VARIABLE_Queue_31_31;
      next_value_of_STATE_VARIABLE_Needed_0_6 = STATE_VARIABLE_Needed_33_33;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Queue_0_4 = next_value_of_STATE_VARIABLE_Queue_0_4;
      STATE_VARIABLE_Needed_0_6 = next_value_of_STATE_VARIABLE_Needed_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__record_entity_is_needed_4_p_0(
  MR_Word Entity_5,
  MR_Word NeededReason_6,
  MR_Word STATE_VARIABLE_Needed_0_13,
  MR_Word * STATE_VARIABLE_Needed_14)
{
  MR_bool succeeded;
  MR_Word MaybeEliminable0_8;
  MR_Box conv0_MaybeEliminable0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), STATE_VARIABLE_Needed_0_13, ((MR_Box) (Entity_5)), &conv0_MaybeEliminable0_8);
  if (succeeded)
  {
    MaybeEliminable0_8 = ((MR_Word) (conv0_MaybeEliminable0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    if (((MR_tag((MR_Word) MaybeEliminable0_8)) == (MR_Integer) 1))
    {
      MR_Word NeededReasons_10;
      MR_Word Var_15;

      NeededReasons_10 = mercury__set_ctree234__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0), ((MR_Box) (NeededReason_6)));
      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (NeededReasons_10));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_5)), ((MR_Box) (Var_15)), STATE_VARIABLE_Needed_0_13, STATE_VARIABLE_Needed_14);
    }
    else
    {
      MR_Word NeededReasons0_11 = ((MR_Word) ((MR_hl_field(0, MaybeEliminable0_8, (MR_Integer) 0))));
      MR_Integer NumReasons0_12;

      NumReasons0_12 = mercury__set_ctree234__count_1_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0), NeededReasons0_11);
      succeeded = (NumReasons0_12 < (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word Var_18;
        MR_Word NeededReasons_22;

        mercury__set_ctree234__insert_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0), ((MR_Box) (NeededReason_6)), NeededReasons0_11, &NeededReasons_22);
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (NeededReasons_22));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_5)), ((MR_Box) (Var_18)), STATE_VARIABLE_Needed_0_13, STATE_VARIABLE_Needed_14);
      }
      else
        *STATE_VARIABLE_Needed_14 = STATE_VARIABLE_Needed_0_13;
    }
  else
  {
    MR_Word Var_20;
    MR_Word NeededReasons_25;

    NeededReasons_25 = mercury__set_ctree234__make_singleton_set_1_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0), ((MR_Box) (NeededReason_6)));
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (NeededReasons_25));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_5)), ((MR_Box) (Var_20)), STATE_VARIABLE_Needed_0_13, STATE_VARIABLE_Needed_14);
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_links_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____analyze_links_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_links_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____analyze_links_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____eliminated_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____eliminated_how_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____eliminated_how_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____eliminated_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____eliminated_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____eliminated_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____eliminated_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____eliminated_what_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____eliminated_what_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____eliminated_what_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____entity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____entity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____examined_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____examined_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____needed_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____needed_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____needed_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____needed_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_how_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_map_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_eliminated_what_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_const_struct_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_deleted_calls_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_type_ctor_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_reason_0);
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
