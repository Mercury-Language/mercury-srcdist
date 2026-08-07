/*
** Automatically generated from `tag_switch_util.m'
** by the Mercury compiler,
** version rotd-2026-08-07
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


// :- module backend_libs.tag_switch_util.
// :- implementation.

/*
INIT mercury__backend_libs__tag_switch_util__init
ENDINIT
*/

#include "backend_libs.tag_switch_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 backend_libs__tag_switch_util__cord__ti_cord_1builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_cord__ti_cord_1builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__cord__pti_cord_1__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__one_or_more__pti_one_or_more_1__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__pseudo_backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_group_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_shared_ptag_info_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_counted_ptag_case_group_1__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_counted_ptag_case_group_1_0[2];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_counted_ptag_case_group_1_0;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_counted_ptag_case_group_1_0[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_counted_ptag_case_group_1[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_counted_ptag_case_group_1[1];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_counted_ptag_case_group_1[1];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_empty_ptag_list_0_0;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_empty_ptag_list_0_0[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_empty_ptag_list_0[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_empty_ptag_list_0[1];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_empty_ptag_list_0[1];

static const MR_EnumFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_0;

static const MR_EnumFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_1;

static const MR_EnumFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_ordinal_ordered_is_switch_complete_0[2];

static const MR_EnumFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_name_ordered_is_switch_complete_0[2];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_is_switch_complete_0[2];

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_1_0[1];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_1_1[3];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_1;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_1_1[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_case_1[2];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_case_1[2];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_case_1[2];

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_group_1_0[1];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_0;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_group_1_1[1];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_1;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_group_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_group_1_1[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_case_group_1[2];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_case_group_1[2];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_case_group_1[2];

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_sectag_info_0_0[2];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_sectag_info_0_0;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_sectag_info_0_0[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_sectag_info_0[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_sectag_info_0[1];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_sectag_info_0[1];

static const MR_FA_TypeInfo_Struct2 backend_libs__tag_switch_util__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_ptag_0backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__tag_switch_util__one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__pair__pti_pair_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_ptag_info_1_0[7];

static const MR_ConstString backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_shared_ptag_info_1_0[7];

static const MR_DuArgLocn backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_locns_shared_ptag_info_1_0[7];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_ptag_info_1_0;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_ptag_info_1_0[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_shared_ptag_info_1[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_shared_ptag_info_1[1];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_shared_ptag_info_1[1];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_0;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_sectag_locn_0_1[2];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_1;

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_2;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_sectag_locn_0_3[2];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_3;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_0[2];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_2[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_shared_sectag_locn_0[3];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_shared_sectag_locn_0[4];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_shared_sectag_locn_0[4];

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptag_info_1__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_single_ptag_case_1_0[1];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_0;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_single_ptag_case_1_1[1];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_1;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_single_ptag_case_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_single_ptag_case_1_1[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_single_ptag_case_1[2];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_single_ptag_case_1[2];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_single_ptag_case_1[2];

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_whole_ptag_info_1_0[4];

static const MR_ConstString backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_whole_ptag_info_1_0[4];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptag_info_1_0;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_whole_ptag_info_1_0[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_whole_ptag_info_1[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_whole_ptag_info_1[1];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_whole_ptag_info_1[1];

static const MR_FA_TypeInfo_Struct1 backend_libs__tag_switch_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_ptag_0;

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_whole_ptags_info_1_0[4];

static const MR_ConstString backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_whole_ptags_info_1_0[4];

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptags_info_1_0;

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_whole_ptags_info_1_0[1];

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_whole_ptags_info_1[1];

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_whole_ptags_info_1[1];

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_whole_ptags_info_1[1];

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1;

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__873__2_2_p_0(
  MR_Word OldSectagLocn_191,
  MR_Word SectagLocn_231);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__873__1_2_p_0(
  MR_Word OldSectagLocn_33,
  MR_Word SectagLocn_107);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__915__2_2_p_0(
  MR_Word OldSectagLocn_248,
  MR_Word SectagLocn_283);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__915__1_2_p_0(
  MR_Word OldSectagLocn_141,
  MR_Word SectagLocn_151);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__build_ptag_groups__492__1_2_p_0(
  MR_Word SectagLocn_26,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__add_sectag_to_shared_ptag__441__1_2_p_0(
  MR_Word InfoSectagLocn_22,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__add_sectag_to_shared_ptag__432__1_2_p_0(
  MR_Word SectagLocn_10,
  MR_Word SectagLocn0_16);

static MR_Word MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__func__order_ptag_groups_by_count__619__1_2_f_0(
  MR_Word TypeInfo_for_CaseRep_19,
  MR_Word LambdaHeadVar__1_14);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptags_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptags_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_cord_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_cord_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_16,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____counted_ptag_case_group_1_0(
  MR_Word TypeInfo_for_CaseRep_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____counted_ptag_case_group_1_0(
  MR_Word TypeInfo_for_CaseRep_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__tag_switch_util__count_can_succeed_case_reps_5_p_0(
  MR_Word TypeInfo_for_CaseRep_16,
  MR_Word CaseRepGoalMap_6,
  MR_Box CaseRep_7,
  MR_Word OoMSectags_8,
  MR_Unsigned STATE_VARIABLE_EffectiveNumFunctors_0_11,
  MR_Unsigned * STATE_VARIABLE_EffectiveNumFunctors_12);

static void MR_CALL 
backend_libs__tag_switch_util__count_functors_in_ptag_case_group_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__tag_switch_util__count_functors_in_ptag_case_group_3_p_0(
  MR_Word TypeInfo_for_CaseRep_24,
  MR_Word CaseRepGoalMap_4,
  MR_Word Group_5,
  MR_Word * CountedGroup_6);

static void MR_CALL 
backend_libs__tag_switch_util__order_groups_by_more_functors_3_p_0(
  MR_Word TypeInfo_for_CaseRep_13,
  MR_Word CountedGroupA_4,
  MR_Word CountedGroupB_5,
  MR_Word * CompareResult_6);

static MR_Word MR_CALL 
backend_libs__tag_switch_util__wrap_shared_ptag_info_1_f_0(
  MR_Word TypeInfo_for_CaseRep_4,
  MR_Word SharedInfo_3);

static MR_Word MR_CALL 
backend_libs__tag_switch_util__wrap_whole_ptags_info_1_f_0(
  MR_Word TypeInfo_for_CaseRep_4,
  MR_Word WholeInfo_3);

static MR_Word MR_CALL 
backend_libs__tag_switch_util__cord_to_one_or_more_1_f_0(
  MR_Word Cord_3);

static void MR_CALL 
backend_libs__tag_switch_util__build_sectag_case_cord_map_6_p_0(
  MR_Word TypeInfo_for_CaseRep_21,
  MR_Unsigned Sectag_7,
  MR_Box CaseRep_8,
  MR_Word STATE_VARIABLE_SectagCaseCordMap_0_13,
  MR_Word * STATE_VARIABLE_SectagCaseCordMap_14,
  MR_Unsigned STATE_VARIABLE_NumFunctors_0_15,
  MR_Unsigned * STATE_VARIABLE_NumFunctors_16);

static void MR_CALL 
backend_libs__tag_switch_util__specialize_and_record_ptag_case_groups_3_p_0(
  MR_Word TypeInfo_for_CaseRep_28,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SpecificMap_0_2,
  MR_Word * STATE_VARIABLE_SpecificMap_3);

static void MR_CALL 
backend_libs__tag_switch_util__record_specialized_versions_4_p_0(
  MR_Word TypeInfo_for_CaseRep_20,
  MR_Box CaseRep_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SpecificMap_0_3,
  MR_Word * STATE_VARIABLE_SpecificMap_4);

static MR_Box MR_CALL 
backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__tag_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_15_p_0(
  MR_Word TypeInfo_for_CaseRep_71,
  MR_Word PtagSectagMap_1,
  MR_Word RepresentCase_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_StateA_0_4,
  MR_Box * STATE_VARIABLE_StateA_5,
  MR_Box STATE_VARIABLE_StateB_0_6,
  MR_Box * STATE_VARIABLE_StateB_7,
  MR_Box STATE_VARIABLE_StateC_0_8,
  MR_Box * STATE_VARIABLE_StateC_9,
  MR_Box STATE_VARIABLE_StateD_0_10,
  MR_Box * STATE_VARIABLE_StateD_11,
  MR_Word STATE_VARIABLE_PtagCaseMap_0_12,
  MR_Word * STATE_VARIABLE_PtagCaseMap_13,
  MR_Word STATE_VARIABLE_CaseRepGoalMap_0_14,
  MR_Word * STATE_VARIABLE_CaseRepGoalMap_15);

static void MR_CALL 
backend_libs__tag_switch_util__group_case_by_ptag_5_p_0(
  MR_Word TypeInfo_for_CaseRep_107,
  MR_Word PtagSectagMap_6,
  MR_Box CaseRep_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_PtagCaseMap_0_53,
  MR_Word * STATE_VARIABLE_PtagCaseMap_54);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0(
  MR_Word TypeInfo_for_CaseRep_40,
  MR_Word PtagSectagMap_8,
  MR_Word Ptag_9,
  MR_Word SectagLocn_10,
  MR_Unsigned Sectag_11,
  MR_Box CaseRep_12,
  MR_Word STATE_VARIABLE_PtagCaseMap_0_24,
  MR_Word * STATE_VARIABLE_PtagCaseMap_25);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0(
  MR_Word HeadVar__1_1,
  uint8_t STATE_VARIABLE_MaxPrimary_0_2,
  uint8_t * STATE_VARIABLE_MaxPrimary_3,
  MR_Word STATE_VARIABLE_PtagSectagMap_0_4,
  MR_Word * STATE_VARIABLE_PtagSectagMap_5);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_4(
  MR_Box closure_arg);

static MR_Box MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0(
  MR_Word TypeInfo_for_CaseRep_60,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_WholePtagsMap_0_3,
  MR_Word * STATE_VARIABLE_WholePtagsMap_4,
  MR_Word STATE_VARIABLE_SharedPtagInfos_0_5,
  MR_Word * STATE_VARIABLE_SharedPtagInfos_6);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____counted_ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____counted_ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____empty_ptag_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____empty_ptag_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____is_switch_complete_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____is_switch_complete_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_cord_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_cord_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_goal_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_goal_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_goal_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_goal_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____shared_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____shared_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____shared_sectag_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____shared_sectag_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____single_ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____single_ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptags_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptags_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptags_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptags_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_1[5][2];

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_2[2][3];

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_3[3][5];

static /* final */ const MR_Integer backend_libs__tag_switch_util_scalar_common_4[1][2];

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_5[1][10];

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_6[4][6];

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_7[2][9];

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_8[2][7];




static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) -1))
  },
};

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[1])),
    ((MR_Box) (backend_libs__tag_switch_util__build_ptag_groups_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__tag_switch_util__cord__pti_cord_1__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__one_or_more__pti_one_or_more_1__plain_builtin__type_ctor_info_uint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_sectag_locn_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_sectag_locn_0))
  },
};

static /* final */ const MR_Integer backend_libs__tag_switch_util_scalar_common_4[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_cord__ti_cord_1builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_cord__ti_cord_1builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
};

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_6[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_group_1__pseudo_1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_shared_ptag_info_1__pseudo_1)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_group_1__pseudo_1))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_counted_ptag_case_group_1__pseudo_1)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_group_1__pseudo_1))
  },
};

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_7[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__pseudo_backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1)),
    ((MR_Box) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__pseudo_backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&backend_libs__tag_switch_util__one_or_more__pti_one_or_more_1__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
};

static /* final */ const MR_Box backend_libs__tag_switch_util_scalar_common_8[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_group_1__pseudo_1)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_counted_ptag_case_group_1__pseudo_1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_counted_ptag_case_group_1__pseudo_1)),
    ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_counted_ptag_case_group_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 backend_libs__tag_switch_util__cord__ti_cord_1builtin__type_ctor_info_uint_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_cord__ti_cord_1builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__cord__ti_cord_1builtin__type_ctor_info_uint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__cord__pti_cord_1__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__one_or_more__pti_one_or_more_1__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
    (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1 = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__pseudo_backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
    (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1 = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_group_1__pseudo_1 = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_group_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_shared_ptag_info_1__pseudo_1 = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_ptag_info_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_counted_ptag_case_group_1__pseudo_1 = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_counted_ptag_case_group_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_counted_ptag_case_group_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_ptag_case_group_1__pseudo_1)
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_counted_ptag_case_group_1_0 = {
  (MR_String) "counted_group",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_counted_ptag_case_group_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_counted_ptag_case_group_1_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_counted_ptag_case_group_1_0 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_counted_ptag_case_group_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_counted_ptag_case_group_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_counted_ptag_case_group_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_counted_ptag_case_group_1_0 };

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_counted_ptag_case_group_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_counted_ptag_case_group_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____counted_ptag_case_group_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____counted_ptag_case_group_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "counted_ptag_case_group",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_counted_ptag_case_group_1 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_counted_ptag_case_group_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_counted_ptag_case_group_1,

};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_empty_ptag_list_0_0 = {
  (MR_String) "[]",
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

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_empty_ptag_list_0_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_empty_ptag_list_0_0 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_empty_ptag_list_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_empty_ptag_list_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_empty_ptag_list_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_empty_ptag_list_0_0 };

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_empty_ptag_list_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_empty_ptag_list_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____empty_ptag_list_0_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____empty_ptag_list_0_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "empty_ptag_list",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_empty_ptag_list_0 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_empty_ptag_list_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_empty_ptag_list_0,

};

static const MR_EnumFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_0 = {
  (MR_String) "incomplete_switch",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_1 = {
  (MR_String) "complete_switch",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_ordinal_ordered_is_switch_complete_0[2] = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_0,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_name_ordered_is_switch_complete_0[2] = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_1,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_functor_desc_is_switch_complete_0_0
};

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_is_switch_complete_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_is_switch_complete_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____is_switch_complete_0_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____is_switch_complete_0_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "is_switch_complete",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_name_ordered_is_switch_complete_0 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__enum_ordinal_ordered_is_switch_complete_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_is_switch_complete_0,

};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_0 = {
  (MR_String) "ptag_case_unshared",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_1_1[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_sectag_locn_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_1)
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_1 = {
  (MR_String) "ptag_case_shared",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_1_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_0 };

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_1_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_1 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_case_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_case_1[2] = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_1,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_1_0
};

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_case_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____ptag_case_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____ptag_case_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "ptag_case",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_case_1 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_case_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_case_1,

};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_group_1_0[1] = { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1) };

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_0 = {
  (MR_String) "one_or_more_whole_ptags",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_group_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_group_1_1[1] = { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_shared_ptag_info_1__pseudo_1) };

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_1 = {
  (MR_String) "one_shared_ptag",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_case_group_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_group_1_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_0 };

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_group_1_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_1 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_case_group_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_group_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_case_group_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_case_group_1[2] = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_0,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_case_group_1_1
};

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_case_group_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_group_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____ptag_case_group_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____ptag_case_group_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "ptag_case_group",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_case_group_1 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_case_group_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_case_group_1,

};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____ptag_case_map_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____ptag_case_map_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "ptag_case_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__pseudo_backend_libs__tag_switch_util__pti_ptag_case_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_sectag_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_sectag_info_0_0 = {
  (MR_String) "ptag_sectag_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_ptag_sectag_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_sectag_info_0_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_sectag_info_0_0 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_sectag_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_ptag_sectag_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_sectag_info_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_ptag_sectag_info_0_0 };

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_sectag_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____ptag_sectag_info_0_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____ptag_sectag_info_0_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "ptag_sectag_info",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_ptag_sectag_info_0 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_ptag_sectag_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_ptag_sectag_info_0,

};

static const MR_FA_TypeInfo_Struct2 backend_libs__tag_switch_util__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_ptag_0backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
    (MR_TypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____ptag_sectag_map_0_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____ptag_sectag_map_0_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "ptag_sectag_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_ptag_0backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__tag_switch_util__one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__pair__pti_pair_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____sectag_case_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____sectag_case_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "sectag_case",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__pair__pti_pair_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_cord_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____sectag_case_cord_map_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____sectag_case_cord_map_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "sectag_case_cord_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_cord__ti_cord_1builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__pair__pti_pair_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0) }
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____sectag_case_list_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____sectag_case_list_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "sectag_case_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____sectag_case_map_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____sectag_case_map_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "sectag_case_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__pseudo_1) }
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_goal_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____sectag_goal_list_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____sectag_goal_list_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "sectag_goal_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_uint_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_goal_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____sectag_goal_map_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____sectag_goal_map_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "sectag_goal_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_ptag_info_1_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_sectag_locn_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_is_switch_complete_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__pseudo_1),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_uint_0)
};

static const MR_ConstString backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_shared_ptag_info_1_0[7] = {
  (MR_String) "spi_ptag",
  (MR_String) "spi_sectag_locn",
  (MR_String) "spi_max_sectag",
  (MR_String) "spi_complete",
  (MR_String) "spi_num_functors",
  (MR_String) "spi_sectag_to_goal_map",
  (MR_String) "spi_goal_to_sectags_map"
};

static const MR_DuArgLocn backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_locns_shared_ptag_info_1_0[7] = {
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
  }
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_ptag_info_1_0 = {
  (MR_String) "shared_ptag_info",
  INT16_C(7),
  UINT16_C(96),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_ptag_info_1_0,
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_shared_ptag_info_1_0,
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_locns_shared_ptag_info_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_ptag_info_1_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_ptag_info_1_0 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_shared_ptag_info_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_ptag_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_shared_ptag_info_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_ptag_info_1_0 };

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_shared_ptag_info_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_ptag_info_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____shared_ptag_info_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____shared_ptag_info_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "shared_ptag_info",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_shared_ptag_info_1 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_shared_ptag_info_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_shared_ptag_info_1,

};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_0 = {
  (MR_String) "sectag_local_rest_of_word",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_sectag_locn_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_1 = {
  (MR_String) "sectag_local_bits",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_sectag_locn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_2 = {
  (MR_String) "sectag_remote_word",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_sectag_locn_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_3 = {
  (MR_String) "sectag_remote_bits",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_shared_sectag_locn_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_0[2] = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_0,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_2
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_1 };

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_2[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_3 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_shared_sectag_locn_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(0)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_shared_sectag_locn_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_shared_sectag_locn_0[4] = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_1,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_0,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_3,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_shared_sectag_locn_0_2
};

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_shared_sectag_locn_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_sectag_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____shared_sectag_locn_0_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____shared_sectag_locn_0_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "shared_sectag_locn",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_shared_sectag_locn_0 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_shared_sectag_locn_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_shared_sectag_locn_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptag_info_1__pseudo_1 = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptag_info_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_single_ptag_case_1_0[1] = { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptag_info_1__pseudo_1) };

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_0 = {
  (MR_String) "one_or_more_whole_ptags",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_single_ptag_case_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_single_ptag_case_1_1[1] = { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_shared_ptag_info_1__pseudo_1) };

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_1 = {
  (MR_String) "one_shared_ptag",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_single_ptag_case_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_single_ptag_case_1_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_0 };

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_single_ptag_case_1_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_1 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_single_ptag_case_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_single_ptag_case_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_single_ptag_case_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_single_ptag_case_1[2] = {
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_0,
  &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_single_ptag_case_1_1
};

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_single_ptag_case_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____single_ptag_case_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____single_ptag_case_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "single_ptag_case",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_single_ptag_case_1 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_single_ptag_case_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_single_ptag_case_1,

};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_whole_ptag_info_1_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_empty_ptag_list_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_ConstString backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_whole_ptag_info_1_0[4] = {
  (MR_String) "wpi_head_ptag",
  (MR_String) "wpi_tail_ptags",
  (MR_String) "wpi_num_functors",
  (MR_String) "wpi_case_rep"
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptag_info_1_0 = {
  (MR_String) "whole_ptags_info",
  INT16_C(4),
  UINT16_C(8),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_whole_ptag_info_1_0,
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_whole_ptag_info_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_whole_ptag_info_1_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptag_info_1_0 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_whole_ptag_info_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_whole_ptag_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_whole_ptag_info_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptag_info_1_0 };

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_whole_ptag_info_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptag_info_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____whole_ptag_info_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____whole_ptag_info_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "whole_ptag_info",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_whole_ptag_info_1 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_whole_ptag_info_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_whole_ptag_info_1,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__tag_switch_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_ptag_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0) }
};

static const MR_PseudoTypeInfo backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_whole_ptags_info_1_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_ConstString backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_whole_ptags_info_1_0[4] = {
  (MR_String) "wpi_head_ptag",
  (MR_String) "wpi_tail_ptags",
  (MR_String) "wpi_num_functors",
  (MR_String) "wpi_case_rep"
};

static const MR_DuFunctorDesc backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptags_info_1_0 = {
  (MR_String) "whole_ptags_info",
  INT16_C(4),
  UINT16_C(8),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_types_whole_ptags_info_1_0,
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__field_names_whole_ptags_info_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_whole_ptags_info_1_0[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptags_info_1_0 };

static const MR_DuPtagLayout backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_whole_ptags_info_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_stag_ordered_whole_ptags_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_whole_ptags_info_1[1] = { &backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_functor_desc_whole_ptags_info_1_0 };

static const MR_Integer backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_whole_ptags_info_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____whole_ptags_info_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____whole_ptags_info_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "whole_ptags_info",
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_name_ordered_whole_ptags_info_1 },
  { backend_libs__tag_switch_util__backend_libs__tag_switch_util__du_ptag_ordered_whole_ptags_info_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__tag_switch_util__backend_libs__tag_switch_util__functor_number_map_whole_ptags_info_1,

};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__tag_switch_util____Unify____whole_ptags_map_1_0_10001)),
  ((MR_Box) (backend_libs__tag_switch_util____Compare____whole_ptags_map_1_0_10001)),
  (MR_String) "backend_libs.tag_switch_util",
  (MR_String) "whole_ptags_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__tag_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__tag_switch_util__pti_whole_ptags_info_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__873__2_2_p_0(
  MR_Word OldSectagLocn_191,
  MR_Word SectagLocn_231)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(OldSectagLocn_191, SectagLocn_231);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__873__1_2_p_0(
  MR_Word OldSectagLocn_33,
  MR_Word SectagLocn_107)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(OldSectagLocn_33, SectagLocn_107);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__915__2_2_p_0(
  MR_Word OldSectagLocn_248,
  MR_Word SectagLocn_283)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(OldSectagLocn_248, SectagLocn_283);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__915__1_2_p_0(
  MR_Word OldSectagLocn_141,
  MR_Word SectagLocn_151)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(OldSectagLocn_141, SectagLocn_151);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__build_ptag_groups__492__1_2_p_0(
  MR_Word SectagLocn_26,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(HeadVar__2_46, SectagLocn_26);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__add_sectag_to_shared_ptag__441__1_2_p_0(
  MR_Word InfoSectagLocn_22,
  MR_Word HeadVar__2_35)
{
  MR_bool succeeded;

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(HeadVar__2_35, InfoSectagLocn_22);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__pred__add_sectag_to_shared_ptag__432__1_2_p_0(
  MR_Word SectagLocn_10,
  MR_Word SectagLocn0_16)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_45 = (MR_Word) (SectagLocn0_16);
  MR_Word Cast_HeadVar2_46 = (MR_Word) (SectagLocn_10);

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(Cast_HeadVar1_45, Cast_HeadVar2_46);
  return succeeded;
}

static MR_Word MR_CALL 
backend_libs__tag_switch_util__IntroducedFrom__func__order_ptag_groups_by_count__619__1_2_f_0(
  MR_Word TypeInfo_for_CaseRep_19,
  MR_Word LambdaHeadVar__1_14)
{
  MR_Word LambdaHeadVar__2_15 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_14, 1))));

  return LambdaHeadVar__2_15;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptags_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_CaseRep_6));
  }
  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_CaseRep_6, TypeInfo_8_8, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptags_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_CaseRep_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_CaseRep_5, TypeInfo_7_7, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptag_info_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  backend_libs__tag_switch_util____Compare____whole_ptags_info_1_0(TypeInfo_for_CaseRep_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptag_info_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = backend_libs__tag_switch_util____Unify____whole_ptags_info_1_0(TypeInfo_for_CaseRep_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____single_ptag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  backend_libs__tag_switch_util____Compare____ptag_case_group_1_0(TypeInfo_for_CaseRep_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____single_ptag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = backend_libs__tag_switch_util____Unify____ptag_case_group_1_0(TypeInfo_for_CaseRep_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____shared_sectag_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  backend_libs__rtti____Compare____sectag_locn_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____shared_sectag_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_goal_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_CaseRep_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_goal_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_CaseRep_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_goal_list_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_CaseRep_6));
  }
  mercury__list____Compare____list_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_goal_list_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_CaseRep_5));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_CaseRep_6, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_CaseRep_5, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_list_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_CaseRep_6));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_1[1]));
  }
  mercury__list____Compare____list_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_list_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_CaseRep_5));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_1[1]));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_cord_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_CaseRep_6, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[0]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_cord_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_CaseRep_5, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[0]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__pair____Compare____pair_2_0(TypeInfo_for_CaseRep_6, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_for_CaseRep_5, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__tag_switch_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__tag_switch_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_info_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    backend_libs__rtti____Compare____sectag_locn_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_info_0_0(
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
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_map_1_0(
  MR_Word TypeInfo_for_CaseRep_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_CaseRep_6));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_9_9, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_map_1_0(
  MR_Word TypeInfo_for_CaseRep_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_CaseRep_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_8_8, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_16,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Unsigned ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Unsigned ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word SubResult1_8;
      MR_Word Cast_HeadVar1_22 = (MR_Word) (ArgX1_6);
      MR_Word Cast_HeadVar2_23 = (MR_Word) (ArgY1_7);

      backend_libs__rtti____Compare____sectag_locn_0_0(&SubResult1_8, Cast_HeadVar1_22, Cast_HeadVar2_23);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Word SubResult2_11;

        succeeded = (ArgX2_9 < ArgY2_10);
        if (succeeded)
        {
          SubResult2_11 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_9 > ArgY2_10);
          if (succeeded)
          {
            SubResult2_11 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_11;
        else
          mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_CaseRep_16, HeadVar__1_1, ArgX3_12, ArgY3_13);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_CaseRep_16, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_1_0(
  MR_Word TypeInfo_for_CaseRep_13,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_10;
    MR_Word Cast_HeadVar1_17;
    MR_Word Cast_HeadVar2_18;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      Cast_HeadVar1_17 = (MR_Word) (ArgX1_5);
      Cast_HeadVar2_18 = (MR_Word) (ArgY1_6);
      succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(Cast_HeadVar1_17, Cast_HeadVar2_18);
      if (succeeded)
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
        {
          TypeCtorInfo_14_14 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
          succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_14_14, TypeInfo_for_CaseRep_13, ArgX3_9, ArgY3_10);
        }
      }
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_CaseRep_13, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____is_switch_complete_0_0(
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
backend_libs__tag_switch_util____Unify____is_switch_complete_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____empty_ptag_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____empty_ptag_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____counted_ptag_case_group_1_0(
  MR_Word TypeInfo_for_CaseRep_11,
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      backend_libs__tag_switch_util____Compare____ptag_case_group_1_0(TypeInfo_for_CaseRep_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_group_1_0(
  MR_Word TypeInfo_for_CaseRep_10,
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      backend_libs__tag_switch_util____Compare____whole_ptags_info_1_0(TypeInfo_for_CaseRep_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    backend_libs__tag_switch_util____Compare____shared_ptag_info_1_0(TypeInfo_for_CaseRep_10, HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptags_info_1_0(
  MR_Word TypeInfo_for_CaseRep_17,
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
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Box ArgX4_13 = (MR_hl_field(0, HeadVar__2_2, 3));
    MR_Box ArgY4_14 = (MR_hl_field(0, HeadVar__3_3, 3));
    MR_Word SubResult1_6;
    uint8_t Var_21 = (uint8_t) (ArgX1_4);
    uint8_t Var_22 = (uint8_t) (ArgY1_5);

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

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_CaseRep_17, HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

void MR_CALL 
backend_libs__tag_switch_util____Compare____shared_ptag_info_1_0(
  MR_Word TypeInfo_for_CaseRep_26,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Unsigned ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Unsigned ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;
    uint8_t Var_38 = (uint8_t) (ArgX1_4);
    uint8_t Var_39 = (uint8_t) (ArgY1_5);

    succeeded = (Var_38 < Var_39);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_38 > Var_39);
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
      MR_Word Cast_HeadVar1_42 = (MR_Word) (ArgX2_7);
      MR_Word Cast_HeadVar2_43 = (MR_Word) (ArgY2_8);

      backend_libs__rtti____Compare____sectag_locn_0_0(&SubResult2_9, Cast_HeadVar1_42, Cast_HeadVar2_43);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_40 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_41 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_40 < Var_41);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_40 > Var_41);
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

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_CaseRep_26, &SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__tree234____Compare____tree234_2_0(TypeInfo_for_CaseRep_26, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), HeadVar__1_1, ArgX7_22, ArgY7_23);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____counted_ptag_case_group_1_0(
  MR_Word TypeInfo_for_CaseRep_9,
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
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = backend_libs__tag_switch_util____Unify____ptag_case_group_1_0(TypeInfo_for_CaseRep_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_group_1_0(
  MR_Word TypeInfo_for_CaseRep_9,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = backend_libs__tag_switch_util____Unify____whole_ptags_info_1_0(TypeInfo_for_CaseRep_9, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = backend_libs__tag_switch_util____Unify____shared_ptag_info_1_0(TypeInfo_for_CaseRep_9, ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptags_info_1_0(
  MR_Word TypeInfo_for_CaseRep_13,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Box ArgX4_9 = (MR_hl_field(0, HeadVar__1_1, 3));
    MR_Box ArgY4_10 = (MR_hl_field(0, HeadVar__2_2, 3));
    uint8_t Var_16 = (uint8_t) (ArgX1_3);
    uint8_t Var_17 = (uint8_t) (ArgY1_4);

    succeeded = (Var_16 == Var_17);
    if (succeeded)
    {
      TypeInfo_15_15 = (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_CaseRep_13, ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____shared_ptag_info_1_0(
  MR_Word TypeInfo_for_CaseRep_19,
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
  {
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Unsigned ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Unsigned ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    uint8_t Var_27 = (uint8_t) (ArgX1_3);
    uint8_t Var_28 = (uint8_t) (ArgY1_4);
    MR_Word Cast_HeadVar1_29;
    MR_Word Cast_HeadVar2_30;

    succeeded = (Var_27 == Var_28);
    if (succeeded)
    {
      Cast_HeadVar1_29 = (MR_Word) (ArgX2_5);
      Cast_HeadVar2_30 = (MR_Word) (ArgY2_6);
      succeeded = backend_libs__rtti____Unify____sectag_locn_0_0(Cast_HeadVar1_29, Cast_HeadVar2_30);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              TypeCtorInfo_21_21 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
              succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_21_21, TypeInfo_for_CaseRep_19, ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]);
                succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_CaseRep_19, TypeInfo_24_24, ArgX7_15, ArgY7_16);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util__count_can_succeed_case_reps_5_p_0(
  MR_Word TypeInfo_for_CaseRep_16,
  MR_Word CaseRepGoalMap_6,
  MR_Box CaseRep_7,
  MR_Word OoMSectags_8,
  MR_Unsigned STATE_VARIABLE_EffectiveNumFunctors_0_11,
  MR_Unsigned * STATE_VARIABLE_EffectiveNumFunctors_12)
{
  MR_bool succeeded;
  MR_Word CaseDetism_10;
  MR_Word Goal_18;
  MR_Word GoalInfo_20;
  MR_Box conv0_Goal_18;

  mercury__map__lookup_3_p_0(TypeInfo_for_CaseRep_16, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CaseRepGoalMap_6, CaseRep_7, &conv0_Goal_18);
  Goal_18 = ((MR_Word) (conv0_Goal_18));
  GoalInfo_20 = ((MR_Word) ((MR_hl_field(0, Goal_18, 1))));
  CaseDetism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_20);
  succeeded = (CaseDetism_10 == (MR_Integer) 6);
  if (succeeded)
    *STATE_VARIABLE_EffectiveNumFunctors_12 = STATE_VARIABLE_EffectiveNumFunctors_0_11;
  else
  {
    MR_Unsigned Var_14;
    MR_Integer Var_15;

    Var_15 = mercury__one_or_more__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), OoMSectags_8);
    Var_14 = mercury__uint__det_from_int_1_f_0(Var_15);
    *STATE_VARIABLE_EffectiveNumFunctors_12 = (STATE_VARIABLE_EffectiveNumFunctors_0_11 + Var_14);
  }
}

static void MR_CALL 
backend_libs__tag_switch_util__count_functors_in_ptag_case_group_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Unsigned conv1_STATE_VARIABLE_EffectiveNumFunctors_12;

  backend_libs__tag_switch_util__count_can_succeed_case_reps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), ((MR_Unsigned) (wrapper_arg_3)), &conv1_STATE_VARIABLE_EffectiveNumFunctors_12);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_EffectiveNumFunctors_12));
}

static void MR_CALL 
backend_libs__tag_switch_util__count_functors_in_ptag_case_group_3_p_0(
  MR_Word TypeInfo_for_CaseRep_24,
  MR_Word CaseRepGoalMap_4,
  MR_Word Group_5,
  MR_Word * CountedGroup_6)
{
  MR_bool succeeded;
  MR_Unsigned EffectiveNumFunctors_13;

  if (((MR_tag((MR_Word) Group_5)) == (MR_Integer) 0))
  {
    MR_Word WholeInfo_7 = ((MR_Word) ((MR_hl_field(0, Group_5, 0))));
    MR_Unsigned NumFunctors_10 = ((MR_Unsigned) ((MR_hl_field(0, WholeInfo_7, 2))));
    MR_Box CaseRep_11 = (MR_hl_field(0, WholeInfo_7, 3));
    MR_Word CaseDetism_12;
    MR_Word Goal_31;
    MR_Word GoalInfo_33;
    MR_Box conv0_Goal_31;

    mercury__map__lookup_3_p_0(TypeInfo_for_CaseRep_24, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CaseRepGoalMap_4, CaseRep_11, &conv0_Goal_31);
    Goal_31 = ((MR_Word) (conv0_Goal_31));
    GoalInfo_33 = ((MR_Word) ((MR_hl_field(0, Goal_31, 1))));
    CaseDetism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_33);
    succeeded = (CaseDetism_12 == (MR_Integer) 6);
    if (succeeded)
      EffectiveNumFunctors_13 = (MR_Unsigned) 0U;
    else
      EffectiveNumFunctors_13 = NumFunctors_10;
  }
  else
  {
    MR_Word SharedInfo_14 = ((MR_Word) ((MR_hl_field(1, Group_5, 0))));
    MR_Word SectagCaseMap_21 = ((MR_Word) ((MR_hl_field(0, SharedInfo_14, 6))));
    MR_Word Var_22;
    MR_Box conv2_EffectiveNumFunctors_13;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_7[1]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (backend_libs__tag_switch_util__count_functors_in_ptag_case_group_3_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (TypeInfo_for_CaseRep_24));
      MR_hl_field(0, Var_22, 4) = ((MR_Box) (CaseRepGoalMap_4));
    }
    mercury__map__foldl_4_p_0(TypeInfo_for_CaseRep_24, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_22, SectagCaseMap_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_EffectiveNumFunctors_13);
    EffectiveNumFunctors_13 = ((MR_Unsigned) (conv2_EffectiveNumFunctors_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CountedGroup_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (EffectiveNumFunctors_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Group_5));
  }
}

static void MR_CALL 
backend_libs__tag_switch_util__order_groups_by_more_functors_3_p_0(
  MR_Word TypeInfo_for_CaseRep_13,
  MR_Word CountedGroupA_4,
  MR_Word CountedGroupB_5,
  MR_Word * CompareResult_6)
{
  MR_bool succeeded;
  MR_Unsigned NumFunctorsA_7 = ((MR_Unsigned) ((MR_hl_field(0, CountedGroupA_4, 0))));
  MR_Word GroupA_8 = ((MR_Word) ((MR_hl_field(0, CountedGroupA_4, 1))));
  MR_Unsigned NumFunctorsB_9 = ((MR_Unsigned) ((MR_hl_field(0, CountedGroupB_5, 0))));
  MR_Word GroupB_10 = ((MR_Word) ((MR_hl_field(0, CountedGroupB_5, 1))));

  succeeded = (NumFunctorsA_7 > NumFunctorsB_9);
  if (succeeded)
    *CompareResult_6 = (MR_Integer) 1;
  else
  {
    succeeded = (NumFunctorsA_7 < NumFunctorsB_9);
    if (succeeded)
      *CompareResult_6 = (MR_Integer) 2;
    else
    {
      uint8_t MainPtagA_11;
      uint8_t MainPtagB_12;

      if (((MR_tag((MR_Word) GroupA_8)) == (MR_Integer) 0))
      {
        MR_Word WholeInfo_15 = ((MR_Word) ((MR_hl_field(0, GroupA_8, 0))));
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, WholeInfo_15, 0))));

        MainPtagA_11 = (uint8_t) (Var_17);
      }
      else
      {
        MR_Word SharedInfo_16 = ((MR_Word) ((MR_hl_field(1, GroupA_8, 0))));
        MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, SharedInfo_16, 0))));

        MainPtagA_11 = (uint8_t) (Var_18);
      }
      if (((MR_tag((MR_Word) GroupB_10)) == (MR_Integer) 0))
      {
        MR_Word WholeInfo_28 = ((MR_Word) ((MR_hl_field(0, GroupB_10, 0))));
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, WholeInfo_28, 0))));

        MainPtagB_12 = (uint8_t) (Var_30);
      }
      else
      {
        MR_Word SharedInfo_29 = ((MR_Word) ((MR_hl_field(1, GroupB_10, 0))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, SharedInfo_29, 0))));

        MainPtagB_12 = (uint8_t) (Var_31);
      }
      succeeded = (MainPtagA_11 < MainPtagB_12);
      if (succeeded)
        *CompareResult_6 = (MR_Integer) 1;
      else
      {
        succeeded = (MainPtagA_11 > MainPtagB_12);
        if (succeeded)
          *CompareResult_6 = (MR_Integer) 2;
        else
          *CompareResult_6 = (MR_Integer) 0;
      }
    }
  }
}

static MR_Word MR_CALL 
backend_libs__tag_switch_util__wrap_shared_ptag_info_1_f_0(
  MR_Word TypeInfo_for_CaseRep_4,
  MR_Word SharedInfo_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (SharedInfo_3));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
backend_libs__tag_switch_util__wrap_whole_ptags_info_1_f_0(
  MR_Word TypeInfo_for_CaseRep_4,
  MR_Word WholeInfo_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (WholeInfo_3));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
backend_libs__tag_switch_util__cord_to_one_or_more_1_f_0(
  MR_Word Cord_3)
{
  MR_Word OoM_4;
  MR_Word List_5;
  MR_Unsigned Head_6;
  MR_Word Tail_7;
  MR_Box conv0_Head_6;

  List_5 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Cord_3);
  mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), List_5, &conv0_Head_6, &Tail_7);
  Head_6 = ((MR_Unsigned) (conv0_Head_6));
  {
    OoM_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OoM_4, 0) = ((MR_Box) (Head_6));
    MR_hl_field(0, OoM_4, 1) = ((MR_Box) (Tail_7));
  }
  return OoM_4;
}

static void MR_CALL 
backend_libs__tag_switch_util__build_sectag_case_cord_map_6_p_0(
  MR_Word TypeInfo_for_CaseRep_21,
  MR_Unsigned Sectag_7,
  MR_Box CaseRep_8,
  MR_Word STATE_VARIABLE_SectagCaseCordMap_0_13,
  MR_Word * STATE_VARIABLE_SectagCaseCordMap_14,
  MR_Unsigned STATE_VARIABLE_NumFunctors_0_15,
  MR_Unsigned * STATE_VARIABLE_NumFunctors_16)
{
  MR_bool succeeded;
  MR_Word Cord0_11;
  MR_Box conv0_Cord0_11;

  *STATE_VARIABLE_NumFunctors_16 = (STATE_VARIABLE_NumFunctors_0_15 + (MR_Unsigned) 1U);
  succeeded = mercury__map__search_3_p_0(TypeInfo_for_CaseRep_21, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[0]), STATE_VARIABLE_SectagCaseCordMap_0_13, CaseRep_8, &conv0_Cord0_11);
  if (succeeded)
  {
    Cord0_11 = ((MR_Word) (conv0_Cord0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Cord_12;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (Sectag_7)), Cord0_11, &Cord_12);
    mercury__map__det_update_4_p_0(TypeInfo_for_CaseRep_21, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[0]), CaseRep_8, ((MR_Box) (Cord_12)), STATE_VARIABLE_SectagCaseCordMap_0_13, STATE_VARIABLE_SectagCaseCordMap_14);
  }
  else
  {
    MR_Word Var_20;

    Var_20 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (Sectag_7)));
    mercury__map__det_insert_4_p_0(TypeInfo_for_CaseRep_21, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[0]), CaseRep_8, ((MR_Box) (Var_20)), STATE_VARIABLE_SectagCaseCordMap_0_13, STATE_VARIABLE_SectagCaseCordMap_14);
  }
}

void MR_CALL 
backend_libs__tag_switch_util__order_ptag_specific_groups_by_value_2_p_0(
  MR_Word TypeInfo_for_CaseRep_7,
  MR_Word Groups0_3,
  MR_Word * SortedSpecificGroups_4)
{
  MR_Word TypeInfo_10_10;
  MR_Word SpecificMap_5;
  MR_Word Var_6;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_CaseRep_7));
  }
  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_10_10);
  backend_libs__tag_switch_util__specialize_and_record_ptag_case_groups_3_p_0(TypeInfo_for_CaseRep_7, Groups0_3, Var_6, &SpecificMap_5);
  mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_10_10, SpecificMap_5, SortedSpecificGroups_4);
}

static void MR_CALL 
backend_libs__tag_switch_util__specialize_and_record_ptag_case_groups_3_p_0(
  MR_Word TypeInfo_for_CaseRep_28,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SpecificMap_0_2,
  MR_Word * STATE_VARIABLE_SpecificMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SpecificMap_3 = STATE_VARIABLE_SpecificMap_0_2;
    else
    {
      MR_Word Group_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Groups_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_SpecificMap_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SpecificMap_0_2;

      if (((MR_tag((MR_Word) Group_7)) == (MR_Integer) 0))
      {
        MR_Word TypeInfo_23_47;
        MR_Word WholeInfo_10 = ((MR_Word) ((MR_hl_field(0, Group_7, 0))));
        MR_Box CaseRep_14 = (MR_hl_field(0, WholeInfo_10, 3));
        MR_Word Ptag_36 = ((MR_Word) ((MR_hl_field(0, WholeInfo_10, 0))));
        MR_Word Ptags_37 = ((MR_Word) ((MR_hl_field(0, WholeInfo_10, 1))));
        MR_Word WholeInfo_38;
        MR_Word Group_39;
        MR_Word STATE_VARIABLE_SpecificMap_1_44;

        {
          WholeInfo_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, WholeInfo_38, 0) = ((MR_Box) (Ptag_36));
          MR_hl_field(0, WholeInfo_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, WholeInfo_38, 2) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(0, WholeInfo_38, 3) = CaseRep_14;
        }
        {
          Group_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Group_39, 0) = ((MR_Box) (WholeInfo_38));
        }
        {
          TypeInfo_23_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_23_47, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1));
          MR_hl_field(0, TypeInfo_23_47, 1) = ((MR_Box) (TypeInfo_for_CaseRep_28));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_23_47, ((MR_Box) (Ptag_36)), ((MR_Box) (Group_39)), STATE_VARIABLE_SpecificMap_0_2, &STATE_VARIABLE_SpecificMap_1_44);
        backend_libs__tag_switch_util__record_specialized_versions_4_p_0(TypeInfo_for_CaseRep_28, CaseRep_14, Ptags_37, STATE_VARIABLE_SpecificMap_1_44, &STATE_VARIABLE_SpecificMap_1_27);
      }
      else
      {
        MR_Word TypeInfo_31_31;
        MR_Word SharedInfo_15 = ((MR_Word) ((MR_hl_field(1, Group_7, 0))));
        MR_Word Ptag_16 = ((MR_Word) ((MR_hl_field(0, SharedInfo_15, 0))));
        MR_Word SingleGroup_23;

        {
          SingleGroup_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SingleGroup_23, 0) = ((MR_Box) (SharedInfo_15));
        }
        {
          TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1));
          MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_CaseRep_28));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_31_31, ((MR_Box) (Ptag_16)), ((MR_Box) (SingleGroup_23)), STATE_VARIABLE_SpecificMap_0_2, &STATE_VARIABLE_SpecificMap_1_27);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Groups_8;
      next_value_of_STATE_VARIABLE_SpecificMap_0_2 = STATE_VARIABLE_SpecificMap_1_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SpecificMap_0_2 = next_value_of_STATE_VARIABLE_SpecificMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__tag_switch_util__record_specialized_versions_4_p_0(
  MR_Word TypeInfo_for_CaseRep_20,
  MR_Box CaseRep_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SpecificMap_0_3,
  MR_Word * STATE_VARIABLE_SpecificMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SpecificMap_4 = STATE_VARIABLE_SpecificMap_0_3;
    else
    {
      MR_Word TypeInfo_23_23;
      MR_Word Ptag_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Ptags_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word WholeInfo_13;
      MR_Word Group_14;
      MR_Word STATE_VARIABLE_SpecificMap_1_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_SpecificMap_0_3;

      {
        WholeInfo_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WholeInfo_13, 0) = ((MR_Box) (Ptag_10));
        MR_hl_field(0, WholeInfo_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, WholeInfo_13, 2) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(0, WholeInfo_13, 3) = CaseRep_1;
      }
      {
        Group_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Group_14, 0) = ((MR_Box) (WholeInfo_13));
      }
      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1));
        MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_CaseRep_20));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_23_23, ((MR_Box) (Ptag_10)), ((MR_Box) (Group_14)), STATE_VARIABLE_SpecificMap_0_3, &STATE_VARIABLE_SpecificMap_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ptags_11;
      next_value_of_STATE_VARIABLE_SpecificMap_0_3 = STATE_VARIABLE_SpecificMap_1_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_SpecificMap_0_3 = next_value_of_STATE_VARIABLE_SpecificMap_0_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_15;

  conv3_LambdaHeadVar__2_15 = backend_libs__tag_switch_util__IntroducedFrom__func__order_ptag_groups_by_count__619__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_15));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CompareResult_6;

  backend_libs__tag_switch_util__order_groups_by_more_functors_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_CompareResult_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_CompareResult_6));
}

static void MR_CALL 
backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_CountedGroup_6;

  backend_libs__tag_switch_util__count_functors_in_ptag_case_group_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_CountedGroup_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_CountedGroup_6));
}

void MR_CALL 
backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0(
  MR_Word TypeInfo_for_CaseRep_19,
  MR_Word CaseRepGoalMap_4,
  MR_Word Groups_5,
  MR_Word * SortedGroups_6)
{
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_25_25;
  MR_Word CountedGroups_7;
  MR_Word SortedCountedGroups_8;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word conv2_SortedCountedGroups_8;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_8[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (TypeInfo_for_CaseRep_19));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (CaseRepGoalMap_4));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_group_1));
    MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_CaseRep_19));
  }
  {
    TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_counted_ptag_case_group_1));
    MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_CaseRep_19));
  }
  mercury__list__map_3_p_0(TypeInfo_23_23, TypeInfo_25_25, (MR_Word) (Var_11), (MR_Word) (Groups_5), &CountedGroups_7);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_8[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_2));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TypeInfo_for_CaseRep_19));
  }
  mercury__list__sort_3_p_0(TypeInfo_25_25, (MR_Word) (Var_12), (MR_Word) (CountedGroups_7), &conv2_SortedCountedGroups_8);
  SortedCountedGroups_8 = (MR_Word) (conv2_SortedCountedGroups_8);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_6[3]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (backend_libs__tag_switch_util__order_ptag_groups_by_count_3_p_0_3));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (TypeInfo_for_CaseRep_19));
  }
  *SortedGroups_6 = mercury__list__map_2_f_0(TypeInfo_25_25, TypeInfo_23_23, (MR_Word) (Var_13), (MR_Word) (SortedCountedGroups_8));
}

static MR_Box MR_CALL 
backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__tag_switch_util__wrap_shared_ptag_info_1_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__tag_switch_util__wrap_whole_ptags_info_1_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0(
  MR_Word TypeInfo_for_CaseRep_55,
  MR_Word TypeInfo_for_StateA_56,
  MR_Word TypeInfo_for_StateB_57,
  MR_Word TypeInfo_for_StateC_58,
  MR_Word TypeInfo_for_StateD_59,
  MR_Word ModuleInfo_17,
  MR_Word RepresentCase_18,
  MR_Word VarType_19,
  MR_Word TaggedCases_20,
  MR_Box STATE_VARIABLE_StateA_0_37,
  MR_Box * STATE_VARIABLE_StateA_38,
  MR_Box STATE_VARIABLE_StateB_0_39,
  MR_Box * STATE_VARIABLE_StateB_40,
  MR_Box STATE_VARIABLE_StateC_0_41,
  MR_Box * STATE_VARIABLE_StateC_42,
  MR_Box STATE_VARIABLE_StateD_0_43,
  MR_Box * STATE_VARIABLE_StateD_44,
  MR_Word * PtagGroups_25,
  MR_Word * CaseRepGoalMap_26,
  MR_Integer * NumPtagsUsed_27,
  uint8_t * MaxPtagUint8_28)
{
  MR_Word TypeInfo_62_62;
  MR_Word TypeInfo_65_65;
  MR_Word TypeInfo_67_67;
  MR_Word TypeInfo_69_69;
  MR_Word TypeInfo_73_73;
  MR_Word PtagSectagMap_29;
  MR_Word PtagCaseMap_30;
  MR_Word PtagCaseList_31;
  MR_Word WholePtagsMap_32;
  MR_Word SharedPtagInfos_33;
  MR_Word WholePtagsInfos_34;
  MR_Word WholePtagGroups_35;
  MR_Word SharedPtagGroups_36;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word TypeCtor_74;
  MR_Word TypeTable_75;
  MR_Word TypeDefn_76;
  MR_Word TypeBody_77;
  MR_Word CtorRepns_85;
  MR_Word PtagSectagMap0_91;
  MR_Word conv2_PtagGroups_25;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_19, &TypeCtor_74);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_17, &TypeTable_75);
  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_75, TypeCtor_74, &TypeDefn_76);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_76, &TypeBody_77);
  switch (MR_tag((MR_Word) TypeBody_77)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeRepn_82;
        MR_Word Var_92 = (MR_Word) ((MR_Word) (TypeBody_77));

        MaybeRepn_82 = ((MR_Word) ((MR_hl_field(0, Var_92, 4))));
        if ((MaybeRepn_82 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts\'/4", (MR_String) "MaybeRepn = no");
            return;
          }
        else
        {
          MR_Word Repn_84 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_82, 0))));

          CtorRepns_85 = ((MR_Word) ((MR_hl_field(0, Repn_84, 0))));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts\'/4", (MR_String) "non-du type");
        return;
      }
      break;
  }
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), &PtagSectagMap0_91);
  backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0(CtorRepns_85, UINT8_C(0), MaxPtagUint8_28, PtagSectagMap0_91, &PtagSectagMap_29);
  {
    TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_62_62, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
    MR_hl_field(0, TypeInfo_62_62, 1) = ((MR_Box) (TypeInfo_for_CaseRep_55));
  }
  Var_49 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_62_62);
  Var_50 = mercury__map__init_0_f_0(TypeInfo_for_CaseRep_55, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
  backend_libs__tag_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_15_p_0(TypeInfo_for_CaseRep_55, PtagSectagMap_29, RepresentCase_18, TaggedCases_20, STATE_VARIABLE_StateA_0_37, STATE_VARIABLE_StateA_38, STATE_VARIABLE_StateB_0_39, STATE_VARIABLE_StateB_40, STATE_VARIABLE_StateC_0_41, STATE_VARIABLE_StateC_42, STATE_VARIABLE_StateD_0_43, STATE_VARIABLE_StateD_44, Var_49, &PtagCaseMap_30, Var_50, CaseRepGoalMap_26);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_62_62, PtagCaseMap_30, &PtagCaseList_31);
  {
    TypeInfo_65_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_65_65, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_65_65, 1) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0));
    MR_hl_field(0, TypeInfo_65_65, 2) = ((MR_Box) (TypeInfo_62_62));
  }
  mercury__list__length_2_p_0(TypeInfo_65_65, (MR_Word) (PtagCaseList_31), NumPtagsUsed_27);
  {
    TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_67_67, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1));
    MR_hl_field(0, TypeInfo_67_67, 1) = ((MR_Box) (TypeInfo_for_CaseRep_55));
  }
  Var_51 = mercury__map__init_0_f_0(TypeInfo_for_CaseRep_55, TypeInfo_67_67);
  backend_libs__tag_switch_util__build_ptag_groups_6_p_0(TypeInfo_for_CaseRep_55, PtagSectagMap_29, PtagCaseList_31, Var_51, &WholePtagsMap_32, (MR_Word) ((MR_Unsigned) 0U), &SharedPtagInfos_33);
  mercury__map__values_2_p_0(TypeInfo_for_CaseRep_55, TypeInfo_67_67, WholePtagsMap_32, &WholePtagsInfos_34);
  {
    TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_69_69, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_group_1));
    MR_hl_field(0, TypeInfo_69_69, 1) = ((MR_Box) (TypeInfo_for_CaseRep_55));
  }
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_6[1]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0_1));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (TypeInfo_for_CaseRep_55));
  }
  WholePtagGroups_35 = mercury__list__map_2_f_0(TypeInfo_67_67, TypeInfo_69_69, (MR_Word) (Var_53), (MR_Word) (WholePtagsInfos_34));
  {
    TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_73_73, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_ptag_info_1));
    MR_hl_field(0, TypeInfo_73_73, 1) = ((MR_Box) (TypeInfo_for_CaseRep_55));
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_6[2]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (backend_libs__tag_switch_util__group_cases_by_ptag_16_p_0_2));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (TypeInfo_for_CaseRep_55));
  }
  SharedPtagGroups_36 = mercury__list__map_2_f_0(TypeInfo_73_73, TypeInfo_69_69, (MR_Word) (Var_54), (MR_Word) (SharedPtagInfos_33));
  conv2_PtagGroups_25 = mercury__list__f_43_43_2_f_0(TypeInfo_69_69, (MR_Word) (WholePtagGroups_35), (MR_Word) (SharedPtagGroups_36));
  *PtagGroups_25 = (MR_Word) (conv2_PtagGroups_25);
}

static void MR_CALL 
backend_libs__tag_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_PtagCaseMap_54;

  backend_libs__tag_switch_util__group_case_by_ptag_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), (MR_hl_field(0, closure, 5)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_PtagCaseMap_54);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_PtagCaseMap_54));
}

static void MR_CALL 
backend_libs__tag_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_15_p_0(
  MR_Word TypeInfo_for_CaseRep_71,
  MR_Word PtagSectagMap_1,
  MR_Word RepresentCase_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_StateA_0_4,
  MR_Box * STATE_VARIABLE_StateA_5,
  MR_Box STATE_VARIABLE_StateB_0_6,
  MR_Box * STATE_VARIABLE_StateB_7,
  MR_Box STATE_VARIABLE_StateC_0_8,
  MR_Box * STATE_VARIABLE_StateC_9,
  MR_Box STATE_VARIABLE_StateD_0_10,
  MR_Box * STATE_VARIABLE_StateD_11,
  MR_Word STATE_VARIABLE_PtagCaseMap_0_12,
  MR_Word * STATE_VARIABLE_PtagCaseMap_13,
  MR_Word STATE_VARIABLE_CaseRepGoalMap_0_14,
  MR_Word * STATE_VARIABLE_CaseRepGoalMap_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CaseRepGoalMap_15 = STATE_VARIABLE_CaseRepGoalMap_0_14;
      *STATE_VARIABLE_PtagCaseMap_13 = STATE_VARIABLE_PtagCaseMap_0_12;
      *STATE_VARIABLE_StateD_11 = STATE_VARIABLE_StateD_0_10;
      *STATE_VARIABLE_StateC_9 = STATE_VARIABLE_StateC_0_8;
      *STATE_VARIABLE_StateB_7 = STATE_VARIABLE_StateB_0_6;
      *STATE_VARIABLE_StateA_5 = STATE_VARIABLE_StateA_0_4;
    }
    else
    {
      MR_Word TypeInfo_82_82;
      MR_Word TypeInfo_84_84;
      MR_Word TaggedCase_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TaggedCases_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word MainTaggedConsId_46 = ((MR_Word) ((MR_hl_field(0, TaggedCase_38, 0))));
      MR_Word OtherConsIds_47 = ((MR_Word) ((MR_hl_field(0, TaggedCase_38, 1))));
      MR_Word Goal_49 = ((MR_Word) ((MR_hl_field(0, TaggedCase_38, 3))));
      MR_Box CaseRep_50;
      MR_Box STATE_VARIABLE_StateA_1_63;
      MR_Box STATE_VARIABLE_StateB_1_64;
      MR_Box STATE_VARIABLE_StateC_1_65;
      MR_Box STATE_VARIABLE_StateD_1_66;
      MR_Word STATE_VARIABLE_PtagCaseMap_1_67;
      MR_Word Var_68;
      MR_Word STATE_VARIABLE_PtagCaseMap_2_69;
      MR_Word STATE_VARIABLE_CaseRepGoalMap_1_70;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, RepresentCase_2, 1))));
      MR_Box conv2_STATE_VARIABLE_PtagCaseMap_2_69;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_STATE_VARIABLE_StateA_0_4;
      MR_Box next_value_of_STATE_VARIABLE_StateB_0_6;
      MR_Box next_value_of_STATE_VARIABLE_StateC_0_8;
      MR_Box next_value_of_STATE_VARIABLE_StateD_0_10;
      MR_Word next_value_of_STATE_VARIABLE_PtagCaseMap_0_12;
      MR_Word next_value_of_STATE_VARIABLE_CaseRepGoalMap_0_14;

      func_0(((MR_Box) (RepresentCase_2)), ((MR_Box) (TaggedCase_38)), &CaseRep_50, STATE_VARIABLE_StateA_0_4, &STATE_VARIABLE_StateA_1_63, STATE_VARIABLE_StateB_0_6, &STATE_VARIABLE_StateB_1_64, STATE_VARIABLE_StateC_0_8, &STATE_VARIABLE_StateC_1_65, STATE_VARIABLE_StateD_0_10, &STATE_VARIABLE_StateD_1_66);
      backend_libs__tag_switch_util__group_case_by_ptag_5_p_0(TypeInfo_for_CaseRep_71, PtagSectagMap_1, CaseRep_50, MainTaggedConsId_46, STATE_VARIABLE_PtagCaseMap_0_12, &STATE_VARIABLE_PtagCaseMap_1_67);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_68, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_7[0]));
        MR_hl_field(0, Var_68, 1) = ((MR_Box) (backend_libs__tag_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_15_p_0_1));
        MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_68, 3) = ((MR_Box) (TypeInfo_for_CaseRep_71));
        MR_hl_field(0, Var_68, 4) = ((MR_Box) (PtagSectagMap_1));
        MR_hl_field(0, Var_68, 5) = CaseRep_50;
      }
      {
        TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_82_82, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
        MR_hl_field(0, TypeInfo_82_82, 1) = ((MR_Box) (TypeInfo_for_CaseRep_71));
      }
      {
        TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_84_84, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(0, TypeInfo_84_84, 1) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0));
        MR_hl_field(0, TypeInfo_84_84, 2) = ((MR_Box) (TypeInfo_82_82));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), TypeInfo_84_84, Var_68, OtherConsIds_47, ((MR_Box) (STATE_VARIABLE_PtagCaseMap_1_67)), &conv2_STATE_VARIABLE_PtagCaseMap_2_69);
      STATE_VARIABLE_PtagCaseMap_2_69 = ((MR_Word) (conv2_STATE_VARIABLE_PtagCaseMap_2_69));
      mercury__map__det_insert_4_p_0(TypeInfo_for_CaseRep_71, (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CaseRep_50, ((MR_Box) (Goal_49)), STATE_VARIABLE_CaseRepGoalMap_0_14, &STATE_VARIABLE_CaseRepGoalMap_1_70);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TaggedCases_39;
      next_value_of_STATE_VARIABLE_StateA_0_4 = STATE_VARIABLE_StateA_1_63;
      next_value_of_STATE_VARIABLE_StateB_0_6 = STATE_VARIABLE_StateB_1_64;
      next_value_of_STATE_VARIABLE_StateC_0_8 = STATE_VARIABLE_StateC_1_65;
      next_value_of_STATE_VARIABLE_StateD_0_10 = STATE_VARIABLE_StateD_1_66;
      next_value_of_STATE_VARIABLE_PtagCaseMap_0_12 = STATE_VARIABLE_PtagCaseMap_2_69;
      next_value_of_STATE_VARIABLE_CaseRepGoalMap_0_14 = STATE_VARIABLE_CaseRepGoalMap_1_70;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_StateA_0_4 = next_value_of_STATE_VARIABLE_StateA_0_4;
      STATE_VARIABLE_StateB_0_6 = next_value_of_STATE_VARIABLE_StateB_0_6;
      STATE_VARIABLE_StateC_0_8 = next_value_of_STATE_VARIABLE_StateC_0_8;
      STATE_VARIABLE_StateD_0_10 = next_value_of_STATE_VARIABLE_StateD_0_10;
      STATE_VARIABLE_PtagCaseMap_0_12 = next_value_of_STATE_VARIABLE_PtagCaseMap_0_12;
      STATE_VARIABLE_CaseRepGoalMap_0_14 = next_value_of_STATE_VARIABLE_CaseRepGoalMap_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__tag_switch_util__group_case_by_ptag_5_p_0(
  MR_Word TypeInfo_for_CaseRep_107,
  MR_Word PtagSectagMap_6,
  MR_Box CaseRep_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_PtagCaseMap_0_53,
  MR_Word * STATE_VARIABLE_PtagCaseMap_54)
{
  MR_bool succeeded;
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_8, 1))));

  switch (MR_tag((MR_Word) ConsTag_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.group_case_by_ptag\'/5", (MR_String) "non-du tag");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.group_case_by_ptag\'/5", (MR_String) "non-du tag");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalSectag_25 = ((MR_Word) ((MR_hl_field(3, ConsTag_11, 2))));
            MR_Word MustMask_26 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_11, 3))) & (MR_Integer) 1);
            MR_Word SectagBits_86 = ((MR_Word) ((MR_hl_field(0, LocalSectag_25, 2))));
            MR_Word Ptag_123 = ((MR_Word) ((MR_hl_field(3, ConsTag_11, 1))));
            MR_Unsigned Sectag_124 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_25, 0))));
            MR_Word SectagLocn_125;

            switch (MustMask_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                SectagLocn_125 = (MR_Word) ((MR_Unsigned) 8U);
                break;
              case (MR_Integer) 1:
                {
                  uint8_t NumSectagBits_82 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_86, 0)));
                  MR_Unsigned Mask_83 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_86, 1))));

                  {
                    SectagLocn_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SectagLocn_125, 0) = ((MR_Box) (MR_Word) (NumSectagBits_82));
                    MR_hl_field(1, SectagLocn_125, 1) = ((MR_Box) (Mask_83));
                  }
                }
                break;
            }
            backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0(TypeInfo_for_CaseRep_107, PtagSectagMap_6, Ptag_123, SectagLocn_125, Sectag_124, CaseRep_7, STATE_VARIABLE_PtagCaseMap_0_53, STATE_VARIABLE_PtagCaseMap_54);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_15 = ((MR_Word) ((MR_hl_field(3, ConsTag_11, 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Ptag_72 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                  MR_Word TypeInfo_116_116;
                  MR_Box conv1__Group_68;

                  {
                    TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_116_116, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
                    MR_hl_field(0, TypeInfo_116_116, 1) = ((MR_Box) (TypeInfo_for_CaseRep_107));
                  }
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_116_116, STATE_VARIABLE_PtagCaseMap_0_53, ((MR_Box) (Ptag_72)), &conv1__Group_68);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  if (succeeded)
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.group_case_by_ptag\'/5", (MR_String) "unshared tag is shared");
                      return;
                    }
                  else
                  {
                    MR_Word TypeInfo_119_119;
                    MR_Word PtagCase_69;

                    {
                      PtagCase_69 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PtagCase_69, 0) = CaseRep_7;
                    }
                    {
                      TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_119_119, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
                      MR_hl_field(0, TypeInfo_119_119, 1) = ((MR_Box) (TypeInfo_for_CaseRep_107));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_119_119, ((MR_Box) (Ptag_72)), ((MR_Box) (PtagCase_69)), STATE_VARIABLE_PtagCaseMap_0_53, STATE_VARIABLE_PtagCaseMap_54);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ptag_151 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_15, 0))));
                  MR_Word TypeInfo_116_130;
                  MR_Box conv2__Group_126;

                  {
                    TypeInfo_116_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_116_130, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
                    MR_hl_field(0, TypeInfo_116_130, 1) = ((MR_Box) (TypeInfo_for_CaseRep_107));
                  }
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_116_130, STATE_VARIABLE_PtagCaseMap_0_53, ((MR_Box) (Ptag_151)), &conv2__Group_126);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  if (succeeded)
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.group_case_by_ptag\'/5", (MR_String) "unshared tag is shared");
                      return;
                    }
                  else
                  {
                    MR_Word TypeInfo_119_136;
                    MR_Word PtagCase_133;

                    {
                      PtagCase_133 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, PtagCase_133, 0) = CaseRep_7;
                    }
                    {
                      TypeInfo_119_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_119_136, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
                      MR_hl_field(0, TypeInfo_119_136, 1) = ((MR_Box) (TypeInfo_for_CaseRep_107));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_119_136, ((MR_Box) (Ptag_151)), ((MR_Box) (PtagCase_133)), STATE_VARIABLE_PtagCaseMap_0_53, STATE_VARIABLE_PtagCaseMap_54);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_16 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_15, 1))));
                  MR_Word SectagSize_18 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_16, 1))));
                  MR_Unsigned Sectag_120 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_16, 0))));
                  MR_Word SectagLocn_121;
                  MR_Word Ptag_122 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_15, 0))));

                  if ((SectagSize_18 == (MR_Word) ((MR_Unsigned) 0U)))
                    SectagLocn_121 = (MR_Word) ((MR_Unsigned) 12U);
                  else
                  {
                    MR_Word SectagBits_20 = (MR_Word) (MR_body((MR_Word) (SectagSize_18), (MR_Integer) 1));
                    uint8_t NumSectagBits_21 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_20, 0)));
                    MR_Unsigned Mask_22 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_20, 1))));

                    {
                      SectagLocn_121 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SectagLocn_121, 0) = ((MR_Box) (MR_Word) (NumSectagBits_21));
                      MR_hl_field(2, SectagLocn_121, 1) = ((MR_Box) (Mask_22));
                    }
                  }
                  backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0(TypeInfo_for_CaseRep_107, PtagSectagMap_6, Ptag_122, SectagLocn_121, Sectag_120, CaseRep_7, STATE_VARIABLE_PtagCaseMap_0_53, STATE_VARIABLE_PtagCaseMap_54);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Unsigned Sectag_17 = ((MR_Unsigned) ((MR_hl_field(3, RemoteArgsTagInfo_15, 0))));

                  backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0(TypeInfo_for_CaseRep_107, PtagSectagMap_6, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Unsigned) 12U), Sectag_17, CaseRep_7, STATE_VARIABLE_PtagCaseMap_0_53, STATE_VARIABLE_PtagCaseMap_54);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_28 = ((MR_Word) ((MR_hl_field(3, ConsTag_11, 1))));
            MR_Word Ptag_104;
            MR_Unsigned Sectag_105;
            MR_Word SectagLocn_106;

            if ((LocalArgsTagInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.group_case_by_ptag\'/5", (MR_String) "local_args_only_functor");
                return;
              }
            else
            {
              MR_Word SectagBits_89;
              uint8_t NumSectagBits_90;
              MR_Unsigned Mask_91;
              MR_Word LocalSectag_92;

              Ptag_104 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_28, 0))));
              LocalSectag_92 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_28, 1))));
              Sectag_105 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_92, 0))));
              SectagBits_89 = ((MR_Word) ((MR_hl_field(0, LocalSectag_92, 2))));
              NumSectagBits_90 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_89, 0)));
              Mask_91 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_89, 1))));
              {
                SectagLocn_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SectagLocn_106, 0) = ((MR_Box) (MR_Word) (NumSectagBits_90));
                MR_hl_field(1, SectagLocn_106, 1) = ((MR_Box) (Mask_91));
              }
            }
            backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0(TypeInfo_for_CaseRep_107, PtagSectagMap_6, Ptag_104, SectagLocn_106, Sectag_105, CaseRep_7, STATE_VARIABLE_PtagCaseMap_0_53, STATE_VARIABLE_PtagCaseMap_54);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_12 = ((MR_Word) ((MR_hl_field(3, ConsTag_11, 1))));
            MR_Word TypeInfo_110_110;
            MR_Box conv0__Group_13;

            {
              TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_110_110, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
              MR_hl_field(0, TypeInfo_110_110, 1) = ((MR_Box) (TypeInfo_for_CaseRep_107));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_110_110, STATE_VARIABLE_PtagCaseMap_0_53, ((MR_Box) (Ptag_12)), &conv0__Group_13);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.group_case_by_ptag\'/5", (MR_String) "unshared tag is shared");
                return;
              }
            else
            {
              MR_Word TypeInfo_113_113;
              MR_Word PtagCase_14;

              {
                PtagCase_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PtagCase_14, 0) = CaseRep_7;
              }
              {
                TypeInfo_113_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_113_113, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
                MR_hl_field(0, TypeInfo_113_113, 1) = ((MR_Box) (TypeInfo_for_CaseRep_107));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_113_113, ((MR_Box) (Ptag_12)), ((MR_Box) (PtagCase_14)), STATE_VARIABLE_PtagCaseMap_0_53, STATE_VARIABLE_PtagCaseMap_54);
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__tag_switch_util__IntroducedFrom__pred__add_sectag_to_shared_ptag__441__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__tag_switch_util__IntroducedFrom__pred__add_sectag_to_shared_ptag__432__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0(
  MR_Word TypeInfo_for_CaseRep_40,
  MR_Word PtagSectagMap_8,
  MR_Word Ptag_9,
  MR_Word SectagLocn_10,
  MR_Unsigned Sectag_11,
  MR_Box CaseRep_12,
  MR_Word STATE_VARIABLE_PtagCaseMap_0_24,
  MR_Word * STATE_VARIABLE_PtagCaseMap_25)
{
  MR_bool succeeded;
  MR_Word TypeInfo_43_43;
  MR_Word PtagCase0_14;
  MR_Box conv0_PtagCase0_14;

  {
    TypeInfo_43_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_43_43, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
    MR_hl_field(0, TypeInfo_43_43, 1) = ((MR_Box) (TypeInfo_for_CaseRep_40));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_43_43, STATE_VARIABLE_PtagCaseMap_0_24, ((MR_Box) (Ptag_9)), &conv0_PtagCase0_14);
  if (succeeded)
  {
    PtagCase0_14 = ((MR_Word) (conv0_PtagCase0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    if (((MR_tag((MR_Word) PtagCase0_14)) == (MR_Integer) 1))
    {
      MR_Word SectagLocn0_16 = ((MR_Word) ((MR_hl_field(1, PtagCase0_14, 0))));
      MR_Unsigned MaxSectag_17 = ((MR_Unsigned) ((MR_hl_field(1, PtagCase0_14, 1))));
      MR_Word SectagGoalMap0_18 = ((MR_Word) ((MR_hl_field(1, PtagCase0_14, 2))));
      MR_Word SectagGoalMap_19;
      MR_Word PtagCase_20;
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[2]));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0_1));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_28, 3) = ((MR_Box) (SectagLocn_10));
        MR_hl_field(0, Var_28, 4) = ((MR_Box) (SectagLocn0_16));
      }
      mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140backend_libs.tag_switch_util.add_sectag_to_shared_ptag\'/7", (MR_String) "sectag locn mismatch");
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_CaseRep_40, ((MR_Box) (Sectag_11)), CaseRep_12, SectagGoalMap0_18, &SectagGoalMap_19);
      {
        PtagCase_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PtagCase_20, 0) = ((MR_Box) (SectagLocn_10));
        MR_hl_field(1, PtagCase_20, 1) = ((MR_Box) (MaxSectag_17));
        MR_hl_field(1, PtagCase_20, 2) = ((MR_Box) (SectagGoalMap_19));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_43_43, ((MR_Box) (Ptag_9)), ((MR_Box) (PtagCase_20)), STATE_VARIABLE_PtagCaseMap_0_24, STATE_VARIABLE_PtagCaseMap_25);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.add_sectag_to_shared_ptag\'/7", (MR_String) "adding shared to unshared");
        return;
      }
  else
  {
    MR_Word TypeInfo_54_54;
    MR_Word PtagSectagInfo_21;
    MR_Word InfoSectagLocn_22;
    MR_Integer MaxSectagInt_23;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Unsigned MaxSectag_37;
    MR_Word SectagGoalMap_38;
    MR_Word PtagCase_39;
    MR_Box conv1_PtagSectagInfo_21;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), PtagSectagMap_8, ((MR_Box) (Ptag_9)), &conv1_PtagSectagInfo_21);
    PtagSectagInfo_21 = ((MR_Word) (conv1_PtagSectagInfo_21));
    InfoSectagLocn_22 = ((MR_Word) ((MR_hl_field(0, PtagSectagInfo_21, 0))));
    MaxSectagInt_23 = ((MR_Integer) ((MR_hl_field(0, PtagSectagInfo_21, 1))));
    Var_35 = (MR_Word) (SectagLocn_10);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[0]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (backend_libs__tag_switch_util__add_sectag_to_shared_ptag_7_p_0_2));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (InfoSectagLocn_22));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) (Var_35));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140backend_libs.tag_switch_util.add_sectag_to_shared_ptag\'/7", (MR_String) "SectagLocn != InfoSectagLocn");
    MaxSectag_37 = mercury__uint__det_from_int_1_f_0(MaxSectagInt_23);
    SectagGoalMap_38 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_CaseRep_40, ((MR_Box) (Sectag_11)), CaseRep_12);
    {
      PtagCase_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PtagCase_39, 0) = ((MR_Box) (SectagLocn_10));
      MR_hl_field(1, PtagCase_39, 1) = ((MR_Box) (MaxSectag_37));
      MR_hl_field(1, PtagCase_39, 2) = ((MR_Box) (SectagGoalMap_38));
    }
    {
      TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_54_54, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1));
      MR_hl_field(0, TypeInfo_54_54, 1) = ((MR_Box) (TypeInfo_for_CaseRep_40));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TypeInfo_54_54, ((MR_Box) (Ptag_9)), ((MR_Box) (PtagCase_39)), STATE_VARIABLE_PtagCaseMap_0_24, STATE_VARIABLE_PtagCaseMap_25);
  }
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__873__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__873__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__915__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__tag_switch_util__IntroducedFrom__pred__get_ptag_counts_loop__915__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0(
  MR_Word HeadVar__1_1,
  uint8_t STATE_VARIABLE_MaxPrimary_0_2,
  uint8_t * STATE_VARIABLE_MaxPrimary_3,
  MR_Word STATE_VARIABLE_PtagSectagMap_0_4,
  MR_Word * STATE_VARIABLE_PtagSectagMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PtagSectagMap_5 = STATE_VARIABLE_PtagSectagMap_0_4;
      *STATE_VARIABLE_MaxPrimary_3 = STATE_VARIABLE_MaxPrimary_0_2;
    }
    else
    {
      MR_Word CtorRepn_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word CtorRepns_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ConsTag_16 = ((MR_Word) ((MR_hl_field(0, CtorRepn_12, 3))));
      uint8_t STATE_VARIABLE_MaxPrimary_1_68;
      MR_Word STATE_VARIABLE_PtagSectagMap_1_72;
      MR_Word next_value_of_HeadVar__1_1;
      uint8_t next_value_of_STATE_VARIABLE_MaxPrimary_0_2;
      MR_Word next_value_of_STATE_VARIABLE_PtagSectagMap_0_4;

      switch (MR_tag((MR_Word) ConsTag_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "non-du tag");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ConsTag_16, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 14:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "non-du tag");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LocalSectag_36 = ((MR_Word) ((MR_hl_field(3, ConsTag_16, 2))));
                MR_Word MustMask_37 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_16, 3))) & (MR_Integer) 1);
                MR_Word SectagBits_122 = ((MR_Word) ((MR_hl_field(0, LocalSectag_36, 2))));
                MR_Word Ptag_282 = ((MR_Word) ((MR_hl_field(3, ConsTag_16, 1))));
                MR_Word SectagLocn_283;
                uint8_t Primary_284;
                MR_Unsigned SecondaryUint_285 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_36, 0))));
                MR_Integer Secondary_286;
                MR_Word Info0_265;
                MR_Box conv2_Info0_265;

                switch (MustMask_37) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    SectagLocn_283 = (MR_Word) ((MR_Unsigned) 8U);
                    break;
                  case (MR_Integer) 1:
                    {
                      uint8_t NumSectagBits_118 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_122, 0)));
                      MR_Unsigned Mask_119 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_122, 1))));

                      {
                        SectagLocn_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SectagLocn_283, 0) = ((MR_Box) (MR_Word) (NumSectagBits_118));
                        MR_hl_field(1, SectagLocn_283, 1) = ((MR_Box) (Mask_119));
                      }
                    }
                    break;
                }
                Primary_284 = (uint8_t) (Ptag_282);
                Secondary_286 = mercury__uint__cast_to_int_1_f_0(SecondaryUint_285);
                STATE_VARIABLE_MaxPrimary_1_68 = mercury__uint8__max_2_f_0(Primary_284, STATE_VARIABLE_MaxPrimary_0_2);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), STATE_VARIABLE_PtagSectagMap_0_4, ((MR_Box) (Ptag_282)), &conv2_Info0_265);
                if (succeeded)
                {
                  Info0_265 = ((MR_Word) (conv2_Info0_265));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_244;
                  MR_Word Info_247;
                  MR_Word OldSectagLocn_248 = ((MR_Word) ((MR_hl_field(0, Info0_265, 0))));
                  MR_Integer MaxSoFar_249 = ((MR_Integer) ((MR_hl_field(0, Info0_265, 1))));
                  MR_Integer Max_250;

                  {
                    Var_244 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_244, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[0]));
                    MR_hl_field(0, Var_244, 1) = ((MR_Box) (backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_2));
                    MR_hl_field(0, Var_244, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_244, 3) = ((MR_Box) (OldSectagLocn_248));
                    MR_hl_field(0, Var_244, 4) = ((MR_Box) (SectagLocn_283));
                  }
                  mercury__require__expect_3_p_0(Var_244, (MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "local tag is shared with non-local");
                  mercury__int__max_3_p_0(Secondary_286, MaxSoFar_249, &Max_250);
                  {
                    Info_247 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Info_247, 0) = ((MR_Box) (SectagLocn_283));
                    MR_hl_field(0, Info_247, 1) = ((MR_Box) (Max_250));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_282)), ((MR_Box) (Info_247)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                }
                else
                {
                  MR_Word Info_254;

                  {
                    Info_254 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Info_254, 0) = ((MR_Box) (SectagLocn_283));
                    MR_hl_field(0, Info_254, 1) = ((MR_Box) (Secondary_286));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_282)), ((MR_Box) (Info_254)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word RemoteArgsTagInfo_22 = ((MR_Word) ((MR_hl_field(3, ConsTag_16, 1))));

                switch (MR_tag((MR_Word) RemoteArgsTagInfo_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Ptag_99 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                      uint8_t Primary_101 = (uint8_t) (Ptag_99);
                      MR_Box conv4_Var_23;

                      STATE_VARIABLE_MaxPrimary_1_68 = mercury__uint8__max_2_f_0(Primary_101, STATE_VARIABLE_MaxPrimary_0_2);
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), STATE_VARIABLE_PtagSectagMap_0_4, ((MR_Box) (Ptag_99)), &conv4_Var_23);
                      if (succeeded)
                        succeeded = MR_TRUE;
                      if (succeeded)
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
                          return;
                        }
                      else
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_99)), ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_1[4])), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Ptag_315 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_22, 0))));
                      uint8_t Primary_316 = (uint8_t) (Ptag_315);
                      MR_Box conv5_Var_294;

                      STATE_VARIABLE_MaxPrimary_1_68 = mercury__uint8__max_2_f_0(Primary_316, STATE_VARIABLE_MaxPrimary_0_2);
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), STATE_VARIABLE_PtagSectagMap_0_4, ((MR_Box) (Ptag_315)), &conv5_Var_294);
                      if (succeeded)
                        succeeded = MR_TRUE;
                      if (succeeded)
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
                          return;
                        }
                      else
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_315)), ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_1[4])), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word RemoteSectag_24 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_22, 1))));
                      MR_Unsigned SecondaryUint_25 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_24, 0))));
                      MR_Word SectagSize_26 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_24, 1))));
                      MR_Integer Secondary_220;
                      MR_Word Ptag_230 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_22, 0))));
                      MR_Word SectagLocn_231;
                      uint8_t Primary_232 = (uint8_t) (Ptag_230);
                      MR_Word Info0_204;
                      MR_Box conv6_Info0_204;

                      if ((SectagSize_26 == (MR_Word) ((MR_Unsigned) 0U)))
                        SectagLocn_231 = (MR_Word) ((MR_Unsigned) 12U);
                      else
                      {
                        MR_Word SectagBits_27 = (MR_Word) (MR_body((MR_Word) (SectagSize_26), (MR_Integer) 1));
                        uint8_t NumSectagBits_28 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_27, 0)));
                        MR_Unsigned Mask_29 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_27, 1))));

                        {
                          SectagLocn_231 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, SectagLocn_231, 0) = ((MR_Box) (MR_Word) (NumSectagBits_28));
                          MR_hl_field(2, SectagLocn_231, 1) = ((MR_Box) (Mask_29));
                        }
                      }
                      Secondary_220 = mercury__uint__cast_to_int_1_f_0(SecondaryUint_25);
                      STATE_VARIABLE_MaxPrimary_1_68 = mercury__uint8__max_2_f_0(Primary_232, STATE_VARIABLE_MaxPrimary_0_2);
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), STATE_VARIABLE_PtagSectagMap_0_4, ((MR_Box) (Ptag_230)), &conv6_Info0_204);
                      if (succeeded)
                      {
                        Info0_204 = ((MR_Word) (conv6_Info0_204));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_Word OldSectagLocn_191 = ((MR_Word) ((MR_hl_field(0, Info0_204, 0))));
                        MR_Integer MaxSoFar_192 = ((MR_Integer) ((MR_hl_field(0, Info0_204, 1))));
                        MR_Integer Max_193;
                        MR_Word Var_194;
                        MR_Word Info_197;

                        {
                          Var_194 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_194, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[0]));
                          MR_hl_field(0, Var_194, 1) = ((MR_Box) (backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_4));
                          MR_hl_field(0, Var_194, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(0, Var_194, 3) = ((MR_Box) (OldSectagLocn_191));
                          MR_hl_field(0, Var_194, 4) = ((MR_Box) (SectagLocn_231));
                        }
                        mercury__require__expect_3_p_0(Var_194, (MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "remote tag is shared with non-remote");
                        mercury__int__max_3_p_0(Secondary_220, MaxSoFar_192, &Max_193);
                        {
                          Info_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Info_197, 0) = ((MR_Box) (SectagLocn_231));
                          MR_hl_field(0, Info_197, 1) = ((MR_Box) (Max_193));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_230)), ((MR_Box) (Info_197)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                      }
                      else
                      {
                        MR_Word Info_201;

                        {
                          Info_201 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Info_201, 0) = ((MR_Box) (SectagLocn_231));
                          MR_hl_field(0, Info_201, 1) = ((MR_Box) (Secondary_220));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_230)), ((MR_Box) (Info_201)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Integer Secondary_30;
                      MR_Unsigned Data_31 = ((MR_Unsigned) ((MR_hl_field(3, RemoteArgsTagInfo_22, 0))));
                      MR_Word Ptag_106 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                      MR_Word Info0_32;
                      MR_Box conv3_Info0_32;

                      Secondary_30 = mercury__uint__cast_to_int_1_f_0(Data_31);
                      STATE_VARIABLE_MaxPrimary_1_68 = mercury__uint8__max_2_f_0(UINT8_C(0), STATE_VARIABLE_MaxPrimary_0_2);
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), STATE_VARIABLE_PtagSectagMap_0_4, ((MR_Box) (Ptag_106)), &conv3_Info0_32);
                      if (succeeded)
                      {
                        Info0_32 = ((MR_Word) (conv3_Info0_32));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_Word OldSectagLocn_33 = ((MR_Word) ((MR_hl_field(0, Info0_32, 0))));
                        MR_Integer MaxSoFar_34 = ((MR_Integer) ((MR_hl_field(0, Info0_32, 1))));
                        MR_Integer Max_35;
                        MR_Word Var_80;
                        MR_Word Info_103;

                        {
                          Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_80, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[0]));
                          MR_hl_field(0, Var_80, 1) = ((MR_Box) (backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_3));
                          MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(0, Var_80, 3) = ((MR_Box) (OldSectagLocn_33));
                          MR_hl_field(0, Var_80, 4) = ((MR_Box) ((MR_Unsigned) 12U));
                        }
                        mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "remote tag is shared with non-remote");
                        mercury__int__max_3_p_0(Secondary_30, MaxSoFar_34, &Max_35);
                        {
                          Info_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Info_103, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(0, Info_103, 1) = ((MR_Box) (Max_35));
                        }
                        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_106)), ((MR_Box) (Info_103)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                      }
                      else
                      {
                        MR_Word Info_104;

                        {
                          Info_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Info_104, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(0, Info_104, 1) = ((MR_Box) (Secondary_30));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_106)), ((MR_Box) (Info_104)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word LocalArgsTagInfo_39 = ((MR_Word) ((MR_hl_field(3, ConsTag_16, 1))));
                MR_Word Ptag_150;
                MR_Word SectagLocn_151;
                uint8_t Primary_152;
                MR_Unsigned SecondaryUint_154;
                MR_Integer Secondary_158;
                MR_Word Info0_146;
                MR_Box conv1_Info0_146;

                if ((LocalArgsTagInfo_39 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "local_args_only_functor");
                    return;
                  }
                else
                {
                  MR_Word SectagBits_125;
                  uint8_t NumSectagBits_126;
                  MR_Unsigned Mask_127;
                  MR_Word LocalSectag_128;

                  Ptag_150 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_39, 0))));
                  LocalSectag_128 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_39, 1))));
                  SecondaryUint_154 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_128, 0))));
                  SectagBits_125 = ((MR_Word) ((MR_hl_field(0, LocalSectag_128, 2))));
                  NumSectagBits_126 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_125, 0)));
                  Mask_127 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_125, 1))));
                  {
                    SectagLocn_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SectagLocn_151, 0) = ((MR_Box) (MR_Word) (NumSectagBits_126));
                    MR_hl_field(1, SectagLocn_151, 1) = ((MR_Box) (Mask_127));
                  }
                }
                Primary_152 = (uint8_t) (Ptag_150);
                Secondary_158 = mercury__uint__cast_to_int_1_f_0(SecondaryUint_154);
                STATE_VARIABLE_MaxPrimary_1_68 = mercury__uint8__max_2_f_0(Primary_152, STATE_VARIABLE_MaxPrimary_0_2);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), STATE_VARIABLE_PtagSectagMap_0_4, ((MR_Box) (Ptag_150)), &conv1_Info0_146);
                if (succeeded)
                {
                  Info0_146 = ((MR_Word) (conv1_Info0_146));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_88;
                  MR_Word Info_140;
                  MR_Word OldSectagLocn_141 = ((MR_Word) ((MR_hl_field(0, Info0_146, 0))));
                  MR_Integer MaxSoFar_142 = ((MR_Integer) ((MR_hl_field(0, Info0_146, 1))));
                  MR_Integer Max_143;

                  {
                    Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_88, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[0]));
                    MR_hl_field(0, Var_88, 1) = ((MR_Box) (backend_libs__tag_switch_util__get_ptag_counts_loop_5_p_0_1));
                    MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_88, 3) = ((MR_Box) (OldSectagLocn_141));
                    MR_hl_field(0, Var_88, 4) = ((MR_Box) (SectagLocn_151));
                  }
                  mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "local tag is shared with non-local");
                  mercury__int__max_3_p_0(Secondary_158, MaxSoFar_142, &Max_143);
                  {
                    Info_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Info_140, 0) = ((MR_Box) (SectagLocn_151));
                    MR_hl_field(0, Info_140, 1) = ((MR_Box) (Max_143));
                  }
                  mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_150)), ((MR_Box) (Info_140)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                }
                else
                {
                  MR_Word Info_144;

                  {
                    Info_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Info_144, 0) = ((MR_Box) (SectagLocn_151));
                    MR_hl_field(0, Info_144, 1) = ((MR_Box) (Secondary_158));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_150)), ((MR_Box) (Info_144)), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
                }
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Ptag_17 = ((MR_Word) ((MR_hl_field(3, ConsTag_16, 1))));
                uint8_t Primary_19 = (uint8_t) (Ptag_17);
                MR_Box conv0_Var_20;

                STATE_VARIABLE_MaxPrimary_1_68 = mercury__uint8__max_2_f_0(Primary_19, STATE_VARIABLE_MaxPrimary_0_2);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), STATE_VARIABLE_PtagSectagMap_0_4, ((MR_Box) (Ptag_17)), &conv0_Var_20);
                if (succeeded)
                  succeeded = MR_TRUE;
                if (succeeded)
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
                    return;
                  }
                else
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), ((MR_Box) (Ptag_17)), ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_1[3])), STATE_VARIABLE_PtagSectagMap_0_4, &STATE_VARIABLE_PtagSectagMap_1_72);
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CtorRepns_13;
      next_value_of_STATE_VARIABLE_MaxPrimary_0_2 = STATE_VARIABLE_MaxPrimary_1_68;
      next_value_of_STATE_VARIABLE_PtagSectagMap_0_4 = STATE_VARIABLE_PtagSectagMap_1_72;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxPrimary_0_2 = next_value_of_STATE_VARIABLE_MaxPrimary_0_2;
      STATE_VARIABLE_PtagSectagMap_0_4 = next_value_of_STATE_VARIABLE_PtagSectagMap_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__builtin__unify_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), (MR_hl_field(0, closure, 5)));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__builtin__unify_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), (MR_hl_field(0, closure, 5)));
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_OoM_4;

  conv5_OoM_4 = backend_libs__tag_switch_util__cord_to_one_or_more_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_OoM_4));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_SectagCaseCordMap_14;
  MR_Unsigned conv1_STATE_VARIABLE_NumFunctors_16;

  backend_libs__tag_switch_util__build_sectag_case_cord_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Unsigned) (wrapper_arg_1)), wrapper_arg_2, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_SectagCaseCordMap_14, ((MR_Unsigned) (wrapper_arg_5)), &conv1_STATE_VARIABLE_NumFunctors_16);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_SectagCaseCordMap_14));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_NumFunctors_16));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__tag_switch_util__IntroducedFrom__pred__build_ptag_groups__492__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util__build_ptag_groups_6_p_0(
  MR_Word TypeInfo_for_CaseRep_60,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_WholePtagsMap_0_3,
  MR_Word * STATE_VARIABLE_WholePtagsMap_4,
  MR_Word STATE_VARIABLE_SharedPtagInfos_0_5,
  MR_Word * STATE_VARIABLE_SharedPtagInfos_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SharedPtagInfos_6 = STATE_VARIABLE_SharedPtagInfos_0_5;
      *STATE_VARIABLE_WholePtagsMap_4 = STATE_VARIABLE_WholePtagsMap_0_3;
    }
    else
    {
      MR_Word Entry_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Entries_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Ptag_19 = ((MR_Word) ((MR_hl_field(0, Entry_15, 0))));
      MR_Word PtagCase_20 = ((MR_Word) ((MR_hl_field(0, Entry_15, 1))));
      MR_Word STATE_VARIABLE_WholePtagsMap_1_42;
      MR_Word STATE_VARIABLE_SharedPtagInfos_1_56;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_WholePtagsMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_SharedPtagInfos_0_5;

      if (((MR_tag((MR_Word) PtagCase_20)) == (MR_Integer) 1))
      {
        MR_Word TypeInfo_73_73;
        MR_Word SharedSectagLocn_22 = ((MR_Word) ((MR_hl_field(1, PtagCase_20, 0))));
        MR_Unsigned MaxSectag_23 = ((MR_Unsigned) ((MR_hl_field(1, PtagCase_20, 1))));
        MR_Word SectagGoalMap_24 = ((MR_Word) ((MR_hl_field(1, PtagCase_20, 2))));
        MR_Word SectagInfo_25;
        MR_Word SectagLocn_26;
        MR_Integer MaybeMaxSectag_27;
        MR_Word SectagCaseCordMap_29;
        MR_Unsigned NumFunctors_30;
        MR_Word SectagCaseMap_31;
        MR_Word SectagCaseList_32;
        MR_Word SectagSwitchComplete_33;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Box conv0_SectagInfo_25;
        MR_Unsigned MaxSectag0_28;
        MR_Box conv4_SectagCaseCordMap_29;
        MR_Box conv3_NumFunctors_30;
        MR_Unsigned Var_53;
        MR_Word OneSectagCase_34;
        MR_Word Var_54;

        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0), HeadVar__1_1, ((MR_Box) (Ptag_19)), &conv0_SectagInfo_25);
        SectagInfo_25 = ((MR_Word) (conv0_SectagInfo_25));
        SectagLocn_26 = ((MR_Word) ((MR_hl_field(0, SectagInfo_25, 0))));
        MaybeMaxSectag_27 = ((MR_Integer) ((MR_hl_field(0, SectagInfo_25, 1))));
        Var_46 = (MR_Word) (SharedSectagLocn_22);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_3[0]));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (backend_libs__tag_switch_util__build_ptag_groups_6_p_0_1));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_43, 3) = ((MR_Box) (SectagLocn_26));
          MR_hl_field(0, Var_43, 4) = ((MR_Box) (Var_46));
        }
        mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140backend_libs.tag_switch_util.build_ptag_groups\'/6", (MR_String) "SharedSectagLocn != SectagLocn");
        succeeded = mercury__uint__from_int_2_p_0(MaybeMaxSectag_27, &MaxSectag0_28);
        if (succeeded)
          succeeded = (MaxSectag0_28 != MaxSectag_23);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.tag_switch_util.build_ptag_groups\'/6", (MR_String) "MaxSectag0 != MaxSectag");
            return;
          }
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_5[0]));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (backend_libs__tag_switch_util__build_ptag_groups_6_p_0_2));
          MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_49, 3) = ((MR_Box) (TypeInfo_for_CaseRep_60));
        }
        Var_50 = mercury__map__init_0_f_0(TypeInfo_for_CaseRep_60, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[0]));
        {
          TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_73_73, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
          MR_hl_field(0, TypeInfo_73_73, 1) = ((MR_Box) (TypeInfo_for_CaseRep_60));
          MR_hl_field(0, TypeInfo_73_73, 2) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_1[0]));
        }
        mercury__map__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_CaseRep_60, TypeInfo_73_73, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_49, SectagGoalMap_24, ((MR_Box) (Var_50)), &conv4_SectagCaseCordMap_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NumFunctors_30);
        SectagCaseCordMap_29 = ((MR_Word) (conv4_SectagCaseCordMap_29));
        NumFunctors_30 = ((MR_Unsigned) (conv3_NumFunctors_30));
        SectagCaseMap_31 = mercury__map__map_values_only_2_f_0((MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[0]), (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), TypeInfo_for_CaseRep_60, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_2[1]), SectagCaseCordMap_29);
        mercury__map__to_sorted_assoc_list_2_p_0(TypeInfo_for_CaseRep_60, (MR_Word) (&backend_libs__tag_switch_util_scalar_common_1[1]), SectagCaseMap_31, &SectagCaseList_32);
        Var_53 = (NumFunctors_30 - MaxSectag_23);
        succeeded = (Var_53 == (MR_Unsigned) 1U);
        if (succeeded)
          SectagSwitchComplete_33 = (MR_Integer) 1;
        else
          SectagSwitchComplete_33 = (MR_Integer) 0;
        succeeded = (SectagSwitchComplete_33 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (SectagCaseList_32 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OneSectagCase_34 = ((MR_Word) ((MR_hl_field(1, SectagCaseList_32, 0))));
            Var_54 = ((MR_Word) ((MR_hl_field(1, SectagCaseList_32, 1))));
            succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Box CaseRep_59 = (MR_hl_field(0, OneSectagCase_34, 0));
          MR_Word TypeInfo_31_91;
          MR_Word Entry0_75;
          MR_Box conv6_Entry0_75;

          {
            TypeInfo_31_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_31_91, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1));
            MR_hl_field(0, TypeInfo_31_91, 1) = ((MR_Box) (TypeInfo_for_CaseRep_60));
          }
          succeeded = mercury__map__search_3_p_0(TypeInfo_for_CaseRep_60, TypeInfo_31_91, STATE_VARIABLE_WholePtagsMap_0_3, CaseRep_59, &conv6_Entry0_75);
          if (succeeded)
          {
            Entry0_75 = ((MR_Word) (conv6_Entry0_75));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word HeadPtag_76 = ((MR_Word) ((MR_hl_field(0, Entry0_75, 0))));
            MR_Word TailPtags0_77 = ((MR_Word) ((MR_hl_field(0, Entry0_75, 1))));
            MR_Unsigned NumFunctors0_78 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_75, 2))));
            MR_Box CaseRep0_79 = (MR_hl_field(0, Entry0_75, 3));
            MR_Word TailPtags_80;
            MR_Unsigned NumFunctors_81;
            MR_Word Entry_82;
            MR_Word Var_83;
            MR_Word Var_86;

            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_83, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_6[0]));
              MR_hl_field(0, Var_83, 1) = ((MR_Box) (backend_libs__tag_switch_util__build_ptag_groups_6_p_0_4));
              MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_83, 3) = ((MR_Box) (TypeInfo_for_CaseRep_60));
              MR_hl_field(0, Var_83, 4) = CaseRep_59;
              MR_hl_field(0, Var_83, 5) = CaseRep0_79;
            }
            mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140backend_libs.tag_switch_util.record_whole_ptag\'/5", (MR_String) "CaseRep != CaseRep0");
            {
              Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_86, 0) = ((MR_Box) (Ptag_19));
              MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            TailPtags_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TailPtags0_77, Var_86);
            NumFunctors_81 = (NumFunctors0_78 + NumFunctors_30);
            {
              Entry_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Entry_82, 0) = ((MR_Box) (HeadPtag_76));
              MR_hl_field(0, Entry_82, 1) = ((MR_Box) (TailPtags_80));
              MR_hl_field(0, Entry_82, 2) = ((MR_Box) (NumFunctors_81));
              MR_hl_field(0, Entry_82, 3) = CaseRep_59;
            }
            mercury__map__det_update_4_p_0(TypeInfo_for_CaseRep_60, TypeInfo_31_91, CaseRep_59, ((MR_Box) (Entry_82)), STATE_VARIABLE_WholePtagsMap_0_3, &STATE_VARIABLE_WholePtagsMap_1_42);
          }
          else
          {
            MR_Word TypeInfo_36_94;
            MR_Word Entry_89;

            {
              Entry_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Entry_89, 0) = ((MR_Box) (Ptag_19));
              MR_hl_field(0, Entry_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Entry_89, 2) = ((MR_Box) (NumFunctors_30));
              MR_hl_field(0, Entry_89, 3) = CaseRep_59;
            }
            {
              TypeInfo_36_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_36_94, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1));
              MR_hl_field(0, TypeInfo_36_94, 1) = ((MR_Box) (TypeInfo_for_CaseRep_60));
            }
            mercury__map__det_insert_4_p_0(TypeInfo_for_CaseRep_60, TypeInfo_36_94, CaseRep_59, ((MR_Box) (Entry_89)), STATE_VARIABLE_WholePtagsMap_0_3, &STATE_VARIABLE_WholePtagsMap_1_42);
          }
          STATE_VARIABLE_SharedPtagInfos_1_56 = STATE_VARIABLE_SharedPtagInfos_0_5;
        }
        else
        {
          MR_Word SharedPtagInfo_36;

          {
            SharedPtagInfo_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SharedPtagInfo_36, 0) = ((MR_Box) (Ptag_19));
            MR_hl_field(0, SharedPtagInfo_36, 1) = ((MR_Box) (SharedSectagLocn_22));
            MR_hl_field(0, SharedPtagInfo_36, 2) = ((MR_Box) (MaxSectag_23));
            MR_hl_field(0, SharedPtagInfo_36, 3) = (MR_Box) ((MR_Unsigned) (SectagSwitchComplete_33));
            MR_hl_field(0, SharedPtagInfo_36, 4) = ((MR_Box) (NumFunctors_30));
            MR_hl_field(0, SharedPtagInfo_36, 5) = ((MR_Box) (SectagGoalMap_24));
            MR_hl_field(0, SharedPtagInfo_36, 6) = ((MR_Box) (SectagCaseMap_31));
          }
          {
            STATE_VARIABLE_SharedPtagInfos_1_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_SharedPtagInfos_1_56, 0) = ((MR_Box) (SharedPtagInfo_36));
            MR_hl_field(1, STATE_VARIABLE_SharedPtagInfos_1_56, 1) = ((MR_Box) (STATE_VARIABLE_SharedPtagInfos_0_5));
          }
          STATE_VARIABLE_WholePtagsMap_1_42 = STATE_VARIABLE_WholePtagsMap_0_3;
        }
      }
      else
      {
        MR_Box CaseRep_21 = (MR_hl_field(0, PtagCase_20, 0));
        MR_Word TypeInfo_31_111;
        MR_Word Entry0_95;
        MR_Box conv7_Entry0_95;

        {
          TypeInfo_31_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_31_111, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1));
          MR_hl_field(0, TypeInfo_31_111, 1) = ((MR_Box) (TypeInfo_for_CaseRep_60));
        }
        succeeded = mercury__map__search_3_p_0(TypeInfo_for_CaseRep_60, TypeInfo_31_111, STATE_VARIABLE_WholePtagsMap_0_3, CaseRep_21, &conv7_Entry0_95);
        if (succeeded)
        {
          Entry0_95 = ((MR_Word) (conv7_Entry0_95));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word HeadPtag_96 = ((MR_Word) ((MR_hl_field(0, Entry0_95, 0))));
          MR_Word TailPtags0_97 = ((MR_Word) ((MR_hl_field(0, Entry0_95, 1))));
          MR_Unsigned NumFunctors0_98 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_95, 2))));
          MR_Box CaseRep0_99 = (MR_hl_field(0, Entry0_95, 3));
          MR_Word TailPtags_100;
          MR_Unsigned NumFunctors_101;
          MR_Word Entry_102;
          MR_Word Var_103;
          MR_Word Var_106;

          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_103, 0) = ((MR_Box) (&backend_libs__tag_switch_util_scalar_common_6[0]));
            MR_hl_field(0, Var_103, 1) = ((MR_Box) (backend_libs__tag_switch_util__build_ptag_groups_6_p_0_5));
            MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_103, 3) = ((MR_Box) (TypeInfo_for_CaseRep_60));
            MR_hl_field(0, Var_103, 4) = CaseRep_21;
            MR_hl_field(0, Var_103, 5) = CaseRep0_99;
          }
          mercury__require__expect_3_p_0(Var_103, (MR_String) "predicate \140backend_libs.tag_switch_util.record_whole_ptag\'/5", (MR_String) "CaseRep != CaseRep0");
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (Ptag_19));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          TailPtags_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), TailPtags0_97, Var_106);
          NumFunctors_101 = (NumFunctors0_98 + (MR_Unsigned) 1U);
          {
            Entry_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_102, 0) = ((MR_Box) (HeadPtag_96));
            MR_hl_field(0, Entry_102, 1) = ((MR_Box) (TailPtags_100));
            MR_hl_field(0, Entry_102, 2) = ((MR_Box) (NumFunctors_101));
            MR_hl_field(0, Entry_102, 3) = CaseRep_21;
          }
          mercury__map__det_update_4_p_0(TypeInfo_for_CaseRep_60, TypeInfo_31_111, CaseRep_21, ((MR_Box) (Entry_102)), STATE_VARIABLE_WholePtagsMap_0_3, &STATE_VARIABLE_WholePtagsMap_1_42);
        }
        else
        {
          MR_Word TypeInfo_36_114;
          MR_Word Entry_109;

          {
            Entry_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Entry_109, 0) = ((MR_Box) (Ptag_19));
            MR_hl_field(0, Entry_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Entry_109, 2) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(0, Entry_109, 3) = CaseRep_21;
          }
          {
            TypeInfo_36_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_36_114, 0) = ((MR_Box) (&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1));
            MR_hl_field(0, TypeInfo_36_114, 1) = ((MR_Box) (TypeInfo_for_CaseRep_60));
          }
          mercury__map__det_insert_4_p_0(TypeInfo_for_CaseRep_60, TypeInfo_36_114, CaseRep_21, ((MR_Box) (Entry_109)), STATE_VARIABLE_WholePtagsMap_0_3, &STATE_VARIABLE_WholePtagsMap_1_42);
        }
        STATE_VARIABLE_SharedPtagInfos_1_56 = STATE_VARIABLE_SharedPtagInfos_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Entries_16;
      next_value_of_STATE_VARIABLE_WholePtagsMap_0_3 = STATE_VARIABLE_WholePtagsMap_1_42;
      next_value_of_STATE_VARIABLE_SharedPtagInfos_0_5 = STATE_VARIABLE_SharedPtagInfos_1_56;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_WholePtagsMap_0_3 = next_value_of_STATE_VARIABLE_WholePtagsMap_0_3;
      STATE_VARIABLE_SharedPtagInfos_0_5 = next_value_of_STATE_VARIABLE_SharedPtagInfos_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____counted_ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____counted_ptag_case_group_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____counted_ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____counted_ptag_case_group_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____empty_ptag_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____empty_ptag_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____empty_ptag_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____empty_ptag_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____is_switch_complete_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____is_switch_complete_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____is_switch_complete_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____is_switch_complete_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____ptag_case_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____ptag_case_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____ptag_case_group_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____ptag_case_group_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____ptag_case_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____ptag_case_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____ptag_sectag_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____ptag_sectag_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____ptag_sectag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____ptag_sectag_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____ptag_sectag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____ptag_sectag_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____sectag_case_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____sectag_case_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_cord_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____sectag_case_cord_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_cord_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____sectag_case_cord_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____sectag_case_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____sectag_case_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____sectag_case_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_case_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____sectag_case_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_goal_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____sectag_goal_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_goal_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____sectag_goal_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____sectag_goal_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____sectag_goal_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____sectag_goal_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____sectag_goal_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____shared_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____shared_ptag_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____shared_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____shared_ptag_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____shared_sectag_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____shared_sectag_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____shared_sectag_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____shared_sectag_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____single_ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____single_ptag_case_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____single_ptag_case_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____single_ptag_case_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____whole_ptag_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptag_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____whole_ptag_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptags_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____whole_ptags_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptags_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____whole_ptags_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__tag_switch_util____Unify____whole_ptags_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__tag_switch_util____Unify____whole_ptags_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__tag_switch_util____Compare____whole_ptags_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__tag_switch_util____Compare____whole_ptags_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__tag_switch_util__init(void)
{
}

void mercury__backend_libs__tag_switch_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_counted_ptag_case_group_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_empty_ptag_list_0);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_is_switch_complete_0);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_group_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_case_map_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_info_0);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_ptag_sectag_map_0);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_cord_map_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_list_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_case_map_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_goal_list_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_sectag_goal_map_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_ptag_info_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_shared_sectag_locn_0);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_single_ptag_case_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptag_info_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_info_1);
  MR_register_type_ctor_info(&backend_libs__tag_switch_util__backend_libs__tag_switch_util__type_ctor_info_whole_ptags_map_1);
}

void mercury__backend_libs__tag_switch_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__tag_switch_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.tag_switch_util.
