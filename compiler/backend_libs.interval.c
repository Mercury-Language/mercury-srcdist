/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version rotd-2024-12-13
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


// :- module backend_libs.interval.
// :- implementation.

/*
INIT mercury__backend_libs__interval__init
ENDINIT
*/

#include "backend_libs.interval.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0;

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0;

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2];

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_anchor_0_2[2];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2];

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_anchor_0_4[2];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6];

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1];

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4;

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_branch_construct_0[5];

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5];

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1];

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_branch_end_0_0[3];

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_branch_end_0_0[3];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_branch_end_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_branch_end_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_branch_end_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_branch_end_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_branch_end_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1];

static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_branch_end_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16];

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1];

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3];

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3];

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_interval_params_0_0[3];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1];

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1;

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_maybe_needs_flush_0[2];

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2];

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1;

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_resume_save_status_0[2];

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2];

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2];

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_save_point_0_0[2];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1];

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1;

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_save_point_type_0[2];

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2];

static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1];

static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1];

static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1;

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1299__1_2_p_0(
  MR_Word HeadVar__1_36,
  MR_Integer * HeadVar__2_37);

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1291__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Integer * HeadVar__2_20);

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1271__1_2_p_0(
  MR_Word HeadVar__1_153,
  MR_Integer * HeadVar__2_154);

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
backend_libs__interval__dump_deletion_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__interval__dump_deletion_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__interval__dump_deletion_4_p_0(
  MR_Word Stream_5,
  MR_Word Vars_6);

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0(
  MR_Word Stream_6,
  MR_Word IntervalInfo_7,
  MR_Word IntervalId_8);

static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
  MR_Word IntervalVarMap_5,
  MR_Word IntervalId_6,
  MR_Word STATE_VARIABLE_OpenIntervalVars_0_9,
  MR_Word * STATE_VARIABLE_OpenIntervalVars_10);

static MR_Box MR_CALL 
backend_libs__interval__int_list_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__interval__dump_interval_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__dump_interval_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4);

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
  MR_Word MaybeFeature_1,
  MR_Word InsertMap_2,
  MR_Word Inserts_3,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarTable_0_7,
  MR_Word * STATE_VARIABLE_VarTable_8);

static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
  MR_Word MaybeFeature_1,
  MR_Word InsertMap_2,
  MR_Word VarRename0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7);

static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
  MR_Word MaybeFeature_1,
  MR_Word ConjType_2,
  MR_Word InsertMap_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarInfo_0_6,
  MR_Word * STATE_VARIABLE_VarInfo_7,
  MR_Word STATE_VARIABLE_VarRename_0_8,
  MR_Word * STATE_VARIABLE_VarRename_9);

static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
  MR_Word Construct_5,
  MR_Word Goal_6,
  MR_Word * StartAnchor_7,
  MR_Word * EndAnchor_8);

static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
  MR_Word MaybeFeature_10,
  MR_Word InsertMap_11,
  MR_Word MustHaveMap_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarTable_0_25,
  MR_Word * STATE_VARIABLE_VarTable_26,
  MR_Word STATE_VARIABLE_VarRename_0_27,
  MR_Word * STATE_VARIABLE_VarRename_28);

static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
  MR_Word MaybeFeature_8,
  MR_Word Specs_9,
  MR_Word BranchesGoal_10,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word * VarRename_13);

static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
  MR_Word MaybeFeature_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_VarRename_0_6,
  MR_Word * STATE_VARIABLE_VarRename_7);

static void MR_CALL 
backend_libs__interval__create_shadow_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarsToExtract_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_VarRename_0_5,
  MR_Word * STATE_VARIABLE_VarRename_6,
  MR_Word STATE_VARIABLE_VoidRename_0_7,
  MR_Word * STATE_VARIABLE_VoidRename_8);

static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
  MR_Word InsertMap_4,
  MR_Word Anchor_5,
  MR_Word * Inserts_6);

static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25,
  MR_Word tscc_proc_2_input_2_HeadVar__1_1,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_114,
  MR_Box tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5,
  MR_Box * tscc_output_ptr_2_STATE_VARIABLE_Acc_116);

static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_44,
  MR_Word HeadVar__1_1,
  MR_Word StartAnchor_2,
  MR_Word EndAnchor_3,
  MR_Word BeforeId_4,
  MR_Word AfterId_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_7,
  MR_Word * STATE_VARIABLE_IntervalInfo_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10);

static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_44,
  MR_Word HeadVar__1_1,
  MR_Word MaybeNeedsFlush_2,
  MR_Word StartAnchor_3,
  MR_Word EndAnchor_4,
  MR_Word BeforeId_5,
  MR_Word AfterId_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11);

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word StartArchor_9,
  MR_Word BeforeId_10,
  MR_Word MaybeResumeVars_11,
  MR_Word OpenIntervals_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_15,
  MR_Word * STATE_VARIABLE_IntervalInfo_16);

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
  MR_Word GoalInfo_13,
  MR_Word MaybeResumeGoal_14,
  MR_Word Construct_15,
  MR_Word * StartAnchor_16,
  MR_Word * EndAnchor_17,
  MR_Word * BeforeIntervalId_18,
  MR_Word * AfterIntervalId_19,
  MR_Word * MaybeResumeVars_20,
  MR_Word STATE_VARIABLE_IntervalInfo_0_34,
  MR_Word * STATE_VARIABLE_IntervalInfo_35,
  MR_Box STATE_VARIABLE_Acc_0_36,
  MR_Box * STATE_VARIABLE_Acc_37);

static void MR_CALL 
backend_libs__interval__record_branch_end_3_p_0(
  MR_Word GoalId_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13);

static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word IntervalInfo_3);

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word Inputs_8,
  MR_Word MaybeNeedAcrossCall_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_IntervalInfo_0_26,
  MR_Word * STATE_VARIABLE_IntervalInfo_27,
  MR_Box STATE_VARIABLE_Acc_0_28,
  MR_Box * STATE_VARIABLE_Acc_29);

static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9);

static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9);

static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
  MR_Word Id_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_9,
  MR_Word * STATE_VARIABLE_IntervalInfo_10);

static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9);

static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_7,
  MR_Word * STATE_VARIABLE_IntervalInfo_8);

static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
  MR_Word STATE_VARIABLE_IntervalInfo_0_4,
  MR_Word * STATE_VARIABLE_IntervalInfo_5);

static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13);

static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
  MR_Word Id_5,
  MR_Word Start_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_10,
  MR_Word * STATE_VARIABLE_IntervalInfo_11);

static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
  MR_Word * Id_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_11,
  MR_Word * STATE_VARIABLE_IntervalInfo_12);

static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
  MR_Word CurInterval_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7);

static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
  MR_Word OpenIntervals_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7);

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word MaybeNeedsFlush_9,
  MR_Word StartAnchor_10,
  MR_Word BeforeId_11,
  MR_Word * OpenIntervals_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_16,
  MR_Word * STATE_VARIABLE_IntervalInfo_17,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19);

static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_17,
  MR_Word * STATE_VARIABLE_IntervalInfo_18);

static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
  MR_Word EndAnchor_5,
  MR_Word AfterId_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_9,
  MR_Word * STATE_VARIABLE_IntervalInfo_10);

static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
  MR_Word Id_5,
  MR_Word Succ_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_11,
  MR_Word * STATE_VARIABLE_IntervalInfo_12);

static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
  MR_Word Id_5,
  MR_Word End_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_10,
  MR_Word * STATE_VARIABLE_IntervalInfo_11);

static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
  MR_Word IntervalId_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7);

static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_branch_end_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____interval_branch_end_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__interval_scalar_common_1[7][2];

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[22][3];

static /* final */ const MR_Box backend_libs__interval_scalar_common_3[1][1];

static /* final */ const MR_Box backend_libs__interval_scalar_common_4[3][7];

static /* final */ const MR_Box backend_libs__interval_scalar_common_5[4][5];

static /* final */ const MR_Box backend_libs__interval_scalar_common_6[1][8];




static /* final */ const MR_Box backend_libs__interval_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[22][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[4]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_branch_end_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[3]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[1]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[2]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0]))
  },
  /* row  11 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__int_list_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[2])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[3])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[3])),
    ((MR_Box) (backend_libs__interval__dump_deletion_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_deletion_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[3])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[2])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_4[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_5[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0),
    (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0),
    (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0)
  }
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0 = {
  (MR_String) "anchor_proc_start",
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

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1 = {
  (MR_String) "anchor_proc_end",
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

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_anchor_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2 = {
  (MR_String) "anchor_branch_start",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_2,
  NULL,
  backend_libs__interval__backend_libs__interval__field_locns_anchor_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1] = { (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) };

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3 = {
  (MR_String) "anchor_cond_then",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_anchor_0_4[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4 = {
  (MR_String) "anchor_branch_end",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_4,
  NULL,
  backend_libs__interval__backend_libs__interval__field_locns_anchor_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1] = { (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) };

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5 = {
  (MR_String) "anchor_call_site",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2 };

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3 };

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor",
  { backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0 },
  { backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0) }
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0)
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0 = {
  (MR_String) "anchor_follow_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0 };

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0 };

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_follow_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_follow_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor_follow_info",
  { backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0 },
  { backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0,

};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0 = {
  (MR_String) "branch_ite",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1 = {
  (MR_String) "branch_disj",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2 = {
  (MR_String) "branch_switch",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3 = {
  (MR_String) "branch_neg",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4 = {
  (MR_String) "branch_par_conj",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____branch_construct_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____branch_construct_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "branch_construct",
  { backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0 },
  { backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_branch_construct_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0),
    (MR_TypeInfo) (&backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_insert_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____insert_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0 = {
  (MR_String) "insert_spec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0 };

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0 };

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____insert_spec_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_spec_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_spec",
  { backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0 },
  { backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0,

};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_branch_end_0_0[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)
};

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_branch_end_0_0[3] = {
  (MR_String) "flushed_after_branch",
  (MR_String) "accessed_after_branch",
  (MR_String) "interval_after_branch"
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_branch_end_0_0 = {
  (MR_String) "interval_branch_end",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_interval_branch_end_0_0,
  backend_libs__interval__backend_libs__interval__field_names_interval_branch_end_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_branch_end_0_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_branch_end_0_0 };

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_branch_end_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_branch_end_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_branch_end_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_branch_end_0_0 };

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_branch_end_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_branch_end_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_branch_end_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_branch_end_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_branch_end",
  { backend_libs__interval__backend_libs__interval__du_name_ordered_interval_branch_end_0 },
  { backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_branch_end_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_branch_end_0,

};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 = {
  (MR_String) "interval_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____interval_id_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_id_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_id",
  { &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 },
  { &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0,

};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_branch_end_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_branch_end_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0),
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0) }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0),
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0) }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0),
    (MR_TypeInfo) (&backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0),
    (MR_TypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0),
    (MR_TypeInfo) (&backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_branch_end_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16] = {
  (MR_String) "ii_interval_params",
  (MR_String) "ii_flushed_later",
  (MR_String) "ii_accessed_later",
  (MR_String) "ii_branch_resume_map",
  (MR_String) "ii_branch_end_map",
  (MR_String) "ii_cond_end_map",
  (MR_String) "ii_cur_interval",
  (MR_String) "ii_interval_counter",
  (MR_String) "ii_open_intervals",
  (MR_String) "ii_anchor_follow_map",
  (MR_String) "ii_model_non_anchors",
  (MR_String) "ii_interval_start",
  (MR_String) "ii_interval_end",
  (MR_String) "ii_interval_succ",
  (MR_String) "ii_interval_vars",
  (MR_String) "ii_interval_delvars"
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0 = {
  (MR_String) "interval_info",
  INT16_C(16),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0,
  backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0 };

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0 };

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_info",
  { backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0 },
  { backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0,

};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3] = {
  (MR_String) "ip_module_info",
  (MR_String) "ip_var_table",
  (MR_String) "ip_at_most_zero_calls"
};

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_interval_params_0_0[3] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0 = {
  (MR_String) "interval_params",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0,
  backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0,
  backend_libs__interval__backend_libs__interval__field_locns_interval_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0 };

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0 };

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_params_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_params_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_params",
  { backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0 },
  { backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0,

};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
  (MR_String) "needs_flush",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
  (MR_String) "doesnt_need_flush",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_maybe_needs_flush_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____maybe_needs_flush_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____maybe_needs_flush_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "maybe_needs_flush",
  { backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0 },
  { backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_maybe_needs_flush_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0,

};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_rename_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____rename_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____rename_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "rename_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
  (MR_String) "has_resume_save",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
  (MR_String) "has_no_resume_save",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____resume_save_status_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____resume_save_status_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "resume_save_status",
  { backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0 },
  { backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_resume_save_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0,

};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_save_point_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0 = {
  (MR_String) "save_point",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_save_point_0_0,
  NULL,
  backend_libs__interval__backend_libs__interval__field_locns_save_point_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0 };

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1] = { &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0 };

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____save_point_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point",
  { backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0 },
  { backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0,

};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
  (MR_String) "save_point_call_site",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
  (MR_String) "save_point_resume_point",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____save_point_type_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_type_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point_type",
  { backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0 },
  { backend_libs__interval__backend_libs__interval__enum_ordinal_ordered_save_point_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0,

};

static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1] = { (MR_String) "T" };

static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1] = {
  {
    (MR_String) "use_cell",
    (MR_Integer) 8,
    MR_PREDICATE
  }
};

static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1 = {
  (MR_String) "backend_libs.interval",
  (MR_String) "build_interval_info_acc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1,
  backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1
};

const MR_TypeClassDeclStruct backend_libs__interval__backend_libs__interval__type_class_decl_build_interval_info_acc_1 = {
  &backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1299__1_2_p_0(
  MR_Word HeadVar__1_36,
  MR_Integer * HeadVar__2_37)
{
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_36, HeadVar__2_37);
}

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1291__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Integer * HeadVar__2_20)
{
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_19, HeadVar__2_20);
}

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1271__1_2_p_0(
  MR_Word HeadVar__1_153,
  MR_Integer * HeadVar__2_154)
{
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_153, HeadVar__2_154);
}

void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0(
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
backend_libs__interval____Unify____save_point_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____save_point_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
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
      MR_Unsigned Var_15 = (MR_Unsigned) (ArgX2_7);
      MR_Unsigned Var_16 = (MR_Unsigned) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned Var_10;
    MR_Unsigned Var_11;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      Var_10 = (MR_Unsigned) (ArgX2_5);
      Var_11 = (MR_Unsigned) (ArgY2_6);
      succeeded = (Var_10 == Var_11);
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0(
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
backend_libs__interval____Unify____resume_save_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0(
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
backend_libs__interval____Unify____maybe_needs_flush_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_51 == CastY_52);
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
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word SubResult1_6;

    backend_libs__interval____Compare____interval_params_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[4]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_69 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_70 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_69 < Var_70);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_69 > Var_70);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
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

                    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[5]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[5]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[6]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[6]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[6]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[7]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[8]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
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
    }
  }
}

void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
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
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
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
backend_libs__interval____Unify____interval_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_37_37;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_41_41;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_45_45;
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word TypeInfo_50_50;
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
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer CastX_53;
    MR_Integer CastY_54;

    succeeded = backend_libs__interval____Unify____interval_params_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_37_37 = (MR_Word) (&backend_libs__interval_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_38_38 = (MR_Word) (&backend_libs__interval_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_39_39 = (MR_Word) (&backend_libs__interval_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_40_40 = (MR_Word) (&backend_libs__interval_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_41_41 = (MR_Word) (&backend_libs__interval_scalar_common_2[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                CastX_53 = (MR_Integer) (ArgX7_15);
                CastY_54 = (MR_Integer) (ArgY7_16);
                succeeded = (CastX_53 == CastY_54);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Integer ArgX1_51 = (MR_Integer) (ArgX7_15);
                  MR_Integer ArgY1_52 = (MR_Integer) (ArgY7_16);

                  succeeded = (ArgX1_51 == ArgY1_52);
                }
                if (succeeded)
                {
                  succeeded = mercury__counter____Unify____counter_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    TypeInfo_43_43 = (MR_Word) (&backend_libs__interval_scalar_common_1[5]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_44_44 = (MR_Word) (&backend_libs__interval_scalar_common_2[5]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_45_45 = (MR_Word) (&backend_libs__interval_scalar_common_1[6]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_46_46 = (MR_Word) (&backend_libs__interval_scalar_common_2[6]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_47_47 = (MR_Word) (&backend_libs__interval_scalar_common_2[6]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_48_48 = (MR_Word) (&backend_libs__interval_scalar_common_2[7]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_49_49 = (MR_Word) (&backend_libs__interval_scalar_common_2[8]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  TypeInfo_50_50 = (MR_Word) (&backend_libs__interval_scalar_common_2[9]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
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
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0(
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____interval_branch_end_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
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
backend_libs__interval____Unify____interval_branch_end_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer CastX_15;
    MR_Integer CastY_16;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&backend_libs__interval_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        CastX_15 = (MR_Integer) (ArgX3_7);
        CastY_16 = (MR_Integer) (ArgY3_8);
        succeeded = (CastX_15 == CastY_16);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_13 = (MR_Integer) (ArgX3_7);
          MR_Integer ArgY1_14 = (MR_Integer) (ArgY3_8);

          succeeded = (ArgX1_13 == ArgY1_14);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0(
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

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&backend_libs__interval_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0(
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
backend_libs__interval____Unify____branch_construct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&backend_libs__interval_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__interval____Compare____anchor_0_0(
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
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_34 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_35 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_34 < Var_35);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_34 > Var_35);
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
                MR_Unsigned Var_36 = (MR_Unsigned) (ArgX2_7);
                MR_Unsigned Var_37 = (MR_Unsigned) (ArgY2_8);

                succeeded = (Var_36 < Var_37);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_36 > Var_37);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Unsigned Var_32 = (MR_Unsigned) (ArgX1_9);
              MR_Unsigned Var_33 = (MR_Unsigned) (ArgY1_10);

              succeeded = (Var_32 < Var_33);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_32 > Var_33);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_13;
                      MR_Integer Var_28 = (MR_Integer) (ArgX1_11);
                      MR_Integer Var_29 = (MR_Integer) (ArgY1_12);

                      succeeded = (Var_28 < Var_29);
                      if (succeeded)
                      {
                        SubResult1_13 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_28 > Var_29);
                        if (succeeded)
                        {
                          SubResult1_13 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult1_13 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_13;
                      else
                      {
                        MR_Unsigned Var_30 = (MR_Unsigned) (ArgX2_14);
                        MR_Unsigned Var_31 = (MR_Unsigned) (ArgY2_15);

                        succeeded = (Var_30 < Var_31);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_30 > Var_31);
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
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
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
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Unsigned Var_26 = (MR_Unsigned) (ArgX1_16);
                      MR_Unsigned Var_27 = (MR_Unsigned) (ArgY1_17);

                      succeeded = (Var_26 < Var_27);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_26 > Var_27);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0(
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
        {
          MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_16 == CastX_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Unsigned Var_25;
          MR_Unsigned Var_26;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              Var_25 = (MR_Unsigned) (ArgX2_5);
              Var_26 = (MR_Unsigned) (ArgY2_6);
              succeeded = (Var_25 == Var_26);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Unsigned Var_29;
          MR_Unsigned Var_30;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            Var_29 = (MR_Unsigned) (ArgX1_7);
            Var_30 = (MR_Unsigned) (ArgY1_8);
            succeeded = (Var_29 == Var_30);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ArgY1_10;
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_12;
              MR_Unsigned Var_23;
              MR_Unsigned Var_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                ArgY2_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_9 == ArgY1_10);
                if (succeeded)
                {
                  Var_23 = (MR_Unsigned) (ArgX2_11);
                  Var_24 = (MR_Unsigned) (ArgY2_12);
                  succeeded = (Var_23 == Var_24);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;
              MR_Unsigned Var_27;
              MR_Unsigned Var_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                Var_27 = (MR_Unsigned) (ArgX1_13);
                Var_28 = (MR_Unsigned) (ArgY1_14);
                succeeded = (Var_27 == Var_28);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_Num_3;

  conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Num_3));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_37;

  backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1299__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_37);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_37));
}

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word Anchor_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word AnchorFollowInfo_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(0, AnchorFollowInfo_7, (MR_Integer) 0))));
  MR_Word Intervals_10 = ((MR_Word) ((MR_hl_field(0, AnchorFollowInfo_7, (MR_Integer) 1))));
  MR_Word VarNums_11;
  MR_Word IntervalList_12;
  MR_Word IntervalIntList_13;
  MR_Word Var_17;
  MR_String Var_28;
  MR_String Var_34;
  MR_Word IntStrs_54;
  MR_Word IntStrs_59;

  Var_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_9);
  mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[18]), Var_17, &VarNums_11);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), Intervals_10, &IntervalList_12);
  IntervalIntList_13 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[19]), IntervalList_12);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__io__write_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Stream_5, ((MR_Box) (Anchor_6)));
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) " =>\n");
  IntStrs_54 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__interval_scalar_common_2[20]), VarNums_11);
  Var_28 = mercury__string__join_list_2_f_0((MR_String) ", ", IntStrs_54);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "vars [");
  mercury__io__write_string_4_p_0(Stream_5, Var_28);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]\n");
  IntStrs_59 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__interval_scalar_common_2[21]), IntervalIntList_13);
  Var_34 = mercury__string__join_list_2_f_0((MR_String) ", ", IntStrs_59);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "intervals: ");
  mercury__io__write_string_4_p_0(Stream_5, Var_34);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
}

static MR_Box MR_CALL 
backend_libs__interval__dump_deletion_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__interval__dump_deletion_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_20;

  backend_libs__interval__IntroducedFrom__pred__dump_deletion__1291__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_20);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_20));
}

static void MR_CALL 
backend_libs__interval__dump_deletion_4_p_0(
  MR_Word Stream_5,
  MR_Word Vars_6)
{
  MR_Word VarNums_8;
  MR_Word Var_12;
  MR_String Var_17;
  MR_Word IntStrs_29;

  Var_12 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_6);
  mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[16]), Var_12, &VarNums_8);
  IntStrs_29 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__interval_scalar_common_2[17]), VarNums_8);
  Var_17 = mercury__string__join_list_2_f_0((MR_String) ", ", IntStrs_29);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) " [");
  mercury__io__write_string_4_p_0(Stream_5, Var_17);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "]");
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  backend_libs__interval__dump_deletion_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv5_HeadVar__2_154;

  backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1271__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_154);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_154));
}

static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_Num_3;

  conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Num_3));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_5_p_0(
  MR_Word Stream_6,
  MR_Word IntervalInfo_7,
  MR_Word IntervalId_8)
{
  MR_bool succeeded;
  MR_Integer Var_23;
  MR_String Var_169;
  MR_Word SuccIds_10;
  MR_Word Var_25;
  MR_Box conv0_SuccIds_10;
  MR_Word Start_12;
  MR_Word Var_35;
  MR_Box conv2_Start_12;
  MR_Word End_13;
  MR_Word Var_41;
  MR_Box conv3_End_13;
  MR_Word Vars_14;
  MR_Word Var_47;
  MR_Box conv4_Vars_14;
  MR_Word Deletions_16;
  MR_Word Var_58;
  MR_Box conv6_Deletions_16;

  Var_23 = backend_libs__interval__interval_id_to_int_1_f_0(IntervalId_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\ninterval ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_3[0]), Var_23, &Var_169);
  mercury__io__write_string_4_p_0(Stream_6, Var_169);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":");
  Var_25 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_7, (MR_Integer) 13))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), Var_25, ((MR_Box) (IntervalId_8)), &conv0_SuccIds_10);
  if (succeeded)
  {
    SuccIds_10 = ((MR_Word) (conv0_SuccIds_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SuccNums_11;
    MR_String Var_31;

    SuccNums_11 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[14]), SuccIds_10);
    Var_31 = backend_libs__interval__int_list_to_string_1_f_0(SuccNums_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "succ [");
    mercury__io__write_string_4_p_0(Stream_6, Var_31);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]\n");
  }
  else
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "no succ\n");
  Var_35 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_7, (MR_Integer) 11))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_35, ((MR_Box) (IntervalId_8)), &conv2_Start_12);
  if (succeeded)
  {
    Start_12 = ((MR_Word) (conv2_Start_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "start ");
    mercury__io__write_line_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Stream_6, ((MR_Box) (Start_12)));
  }
  else
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "no start\n");
  Var_41 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_7, (MR_Integer) 12))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_41, ((MR_Box) (IntervalId_8)), &conv3_End_13);
  if (succeeded)
  {
    End_13 = ((MR_Word) (conv3_End_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "end ");
    mercury__io__write_line_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Stream_6, ((MR_Box) (End_13)));
  }
  else
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "no end\n");
  Var_47 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_7, (MR_Integer) 14))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), Var_47, ((MR_Box) (IntervalId_8)), &conv4_Vars_14);
  if (succeeded)
  {
    Vars_14 = ((MR_Word) (conv4_Vars_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word VarNums_15;
    MR_Word Var_49;
    MR_String Var_54;

    Var_49 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_14);
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[15]), Var_49, &VarNums_15);
    Var_54 = backend_libs__interval__int_list_to_string_1_f_0(VarNums_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "vars [");
    mercury__io__write_string_4_p_0(Stream_6, Var_54);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]\n");
  }
  else
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "no vars\n");
  Var_58 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_7, (MR_Integer) 15))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[2]), Var_58, ((MR_Box) (IntervalId_8)), &conv6_Deletions_16);
  if (succeeded)
  {
    Deletions_16 = ((MR_Word) (conv6_Deletions_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_61;
    MR_Box conv7_STATE_VARIABLE_IO_62_62;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "deletions");
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[2]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_id_5_p_0_3));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (Stream_6));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__interval_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, Deletions_16, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_62_62);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
  MR_Word IntervalVarMap_5,
  MR_Word IntervalId_6,
  MR_Word STATE_VARIABLE_OpenIntervalVars_0_9,
  MR_Word * STATE_VARIABLE_OpenIntervalVars_10)
{
  MR_Word IntervalVars_8;
  MR_Box conv0_IntervalVars_8;

  mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), IntervalVarMap_5, ((MR_Box) (IntervalId_6)), &conv0_IntervalVars_8);
  IntervalVars_8 = ((MR_Word) (conv0_IntervalVars_8));
  *STATE_VARIABLE_OpenIntervalVars_10 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_OpenIntervalVars_0_9, IntervalVars_8);
}

MR_Integer MR_CALL 
backend_libs__interval__interval_id_to_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Num_3 = (MR_Integer) (HeadVar__1_1);

  return Num_3;
}

static MR_Box MR_CALL 
backend_libs__interval__int_list_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_String MR_CALL 
backend_libs__interval__int_list_to_string_1_f_0(
  MR_Word Ints_3)
{
  MR_String IntsStr_4;
  MR_Word IntStrs_5;

  IntStrs_5 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__interval_scalar_common_2[13]), Ints_3);
  IntsStr_4 = mercury__string__join_list_2_f_0((MR_String) ", ", IntStrs_5);
  return IntsStr_4;
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  backend_libs__interval__dump_anchor_follow_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  backend_libs__interval__dump_interval_info_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
backend_libs__interval__dump_interval_info_4_p_0(
  MR_Word Stream_5,
  MR_Word IntervalInfo_6)
{
  MR_Word StartIds_8;
  MR_Word EndIds_9;
  MR_Word VarsIds_10;
  MR_Word SuccIds_11;
  MR_Word IntervalIds0_12;
  MR_Word IntervalIds_13;
  MR_Word AnchorFollows_14;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_6, (MR_Integer) 11))));
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Box conv0_STATE_VARIABLE_IO_29_29;
  MR_Box conv1_STATE_VARIABLE_IO_16;

  mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_17, &StartIds_8);
  Var_18 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_6, (MR_Integer) 12))));
  mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_18, &EndIds_9);
  Var_19 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_6, (MR_Integer) 14))));
  mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), Var_19, &VarsIds_10);
  Var_20 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_6, (MR_Integer) 13))));
  mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), Var_20, &SuccIds_11);
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (SuccIds_11));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (VarsIds_10));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (EndIds_9));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (StartIds_8));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
  }
  mercury__list__condense_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), Var_21, &IntervalIds0_12);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), IntervalIds0_12, &IntervalIds_13);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INTERVALS:\n");
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_6[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_4_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (Stream_5));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (IntervalInfo_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, IntervalIds_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_29_29);
  Var_30 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_6, (MR_Integer) 9))));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), Var_30, &AnchorFollows_14);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\nANCHOR FOLLOW:\n");
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_4_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__interval_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, AnchorFollows_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
}

void MR_CALL 
backend_libs__interval__apply_headvar_correction_4_p_0(
  MR_Word HeadVarSet_5,
  MR_Word RenameMap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word HeadVars_9;
  MR_Word Subst_10;
  MR_Word Var_11;

  HeadVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVarSet_5);
  Var_11 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
  backend_libs__interval__build_headvar_subst_4_p_0(HeadVars_9, RenameMap_6, Var_11, &Subst_10);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), Subst_10);
  if (succeeded)
    *Goal_8 = Goal0_7;
  else
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_10, Goal0_7, Goal_8);
}

static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
    else
    {
      MR_Word HeadVar_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word HeadVars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Subst_17_17;
      MR_Word Replacement_13;
      MR_Box conv0_Replacement_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), HeadVar__2_2, ((MR_Box) (HeadVar_9)), &conv0_Replacement_13);
      if (succeeded)
      {
        Replacement_13 = ((MR_Word) (conv0_Replacement_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Subst_16_16;

        mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), ((MR_Box) (Replacement_13)), ((MR_Box) (HeadVar_9)), STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_16_16);
        mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), ((MR_Box) (HeadVar_9)), ((MR_Box) (Replacement_13)), STATE_VARIABLE_Subst_16_16, &STATE_VARIABLE_Subst_17_17);
      }
      else
        STATE_VARIABLE_Subst_17_17 = STATE_VARIABLE_Subst_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = HeadVars_10;
      next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
  MR_Word MaybeFeature_1,
  MR_Word InsertMap_2,
  MR_Word Inserts_3,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarTable_0_7,
  MR_Word * STATE_VARIABLE_VarTable_8)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_8 = STATE_VARIABLE_VarTable_0_7;
  }
  else
  {
    MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Goals0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Goal_22;
    MR_Word Goals_23;
    MR_Word InsertGoals_25;
    MR_Word VarRename1_26;
    MR_Word GoalInfo0_28;
    MR_Word Goal1_29;
    MR_Word STATE_VARIABLE_VarTable_33_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_VarTable_35_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_30;

    Var_34 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
    backend_libs__interval__make_inserted_goals_7_p_0(MaybeFeature_1, Inserts_3, &InsertGoals_25, STATE_VARIABLE_VarTable_0_7, &STATE_VARIABLE_VarTable_33_33, Var_34, &VarRename1_26);
    GoalInfo0_28 = ((MR_Word) ((MR_hl_field(0, Goal0_20, (MR_Integer) 1))));
    backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_1, InsertMap_2, Goal0_20, &Goal1_29, STATE_VARIABLE_VarTable_33_33, &STATE_VARIABLE_VarTable_35_35, VarRename1_26, &Var_30);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Goal1_29));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_36 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), InsertGoals_25, Var_37);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_36, GoalInfo0_28, &Goal_22);
    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(MaybeFeature_1, InsertMap_2, Inserts_3, Goals0_21, &Goals_23, STATE_VARIABLE_VarTable_35_35, STATE_VARIABLE_VarTable_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_23));
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
  MR_Word MaybeFeature_1,
  MR_Word InsertMap_2,
  MR_Word VarRename0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word Case0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Case_19;
    MR_Word Cases_20;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_VarTable_29_29;
    MR_Word Var_26;

    backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_1, InsertMap_2, Goal0_24, &Goal_25, STATE_VARIABLE_VarTable_0_6, &STATE_VARIABLE_VarTable_29_29, VarRename0_3, &Var_26);
    {
      Case_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_19, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_19, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_19, 2) = ((MR_Box) (Goal_25));
    }
    backend_libs__interval__record_decisions_in_cases_7_p_0(MaybeFeature_1, InsertMap_2, VarRename0_3, Cases0_18, &Cases_20, STATE_VARIABLE_VarTable_29_29, STATE_VARIABLE_VarTable_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_20));
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
  MR_Word MaybeFeature_1,
  MR_Word ConjType_2,
  MR_Word InsertMap_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarInfo_0_6,
  MR_Word * STATE_VARIABLE_VarInfo_7,
  MR_Word STATE_VARIABLE_VarRename_0_8,
  MR_Word * STATE_VARIABLE_VarRename_9)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarRename_9 = STATE_VARIABLE_VarRename_0_8;
    *STATE_VARIABLE_VarInfo_7 = STATE_VARIABLE_VarInfo_0_6;
  }
  else
  {
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_27;
    MR_Word TailGoals_28;
    MR_Word STATE_VARIABLE_VarInfo_36_36;
    MR_Word STATE_VARIABLE_VarRename_37_37;
    MR_Word SubGoals_30;
    MR_Word InnerConjType_29;
    MR_Word Var_40;

    backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_1, InsertMap_3, Goal0_22, &Goal_27, STATE_VARIABLE_VarInfo_0_6, &STATE_VARIABLE_VarInfo_36_36, STATE_VARIABLE_VarRename_0_8, &STATE_VARIABLE_VarRename_37_37);
    backend_libs__interval__record_decisions_in_conj_9_p_0(MaybeFeature_1, ConjType_2, InsertMap_3, Goals0_23, &TailGoals_28, STATE_VARIABLE_VarInfo_36_36, STATE_VARIABLE_VarInfo_7, STATE_VARIABLE_VarRename_37_37, STATE_VARIABLE_VarRename_9);
    Var_40 = ((MR_Word) ((MR_hl_field(0, Goal_27, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      InnerConjType_29 = ((MR_Unsigned) ((MR_hl_field(3, Var_40, (MR_Integer) 1))) & (MR_Integer) 1);
      SubGoals_30 = ((MR_Word) ((MR_hl_field(3, Var_40, (MR_Integer) 2))));
      succeeded = (ConjType_2 == InnerConjType_29);
    }
    if (succeeded)
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_30, TailGoals_28);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_28));
      }
  }
}

void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
  MR_Word MaybeFeature_9,
  MR_Word InsertMap_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_118,
  MR_Word * STATE_VARIABLE_VarTable_119,
  MR_Word STATE_VARIABLE_VarRename_0_120,
  MR_Word * STATE_VARIABLE_VarRename_121)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_37 = (MR_Word) ((MR_Word) (GoalExpr0_15));
        MR_Word NegGoal_38;
        MR_Word STATE_VARIABLE_VarTable_136_136;
        MR_Word Var_137;
        MR_Word EndAnchor_180;
        MR_Word Goal1_181;
        MR_Word Inserts_182;
        MR_Word Var_39;
        MR_Word _StartAnchor_179;

        backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_9, InsertMap_10, NegGoal0_37, &NegGoal_38, STATE_VARIABLE_VarTable_0_118, &STATE_VARIABLE_VarTable_136_136, STATE_VARIABLE_VarRename_0_120, &Var_39);
        Var_137 = (MR_Word) ((MR_Word) (NegGoal_38));
        {
          Goal1_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal1_181, 0) = ((MR_Box) (Var_137));
          MR_hl_field(0, Goal1_181, 1) = ((MR_Box) (GoalInfo0_16));
        }
        backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 3, Goal0_11, &_StartAnchor_179, &EndAnchor_180);
        backend_libs__interval__lookup_inserts_3_p_0(InsertMap_10, EndAnchor_180, &Inserts_182);
        backend_libs__interval__insert_goals_after_7_p_0(MaybeFeature_9, Inserts_182, Goal1_181, Goal_12, STATE_VARIABLE_VarTable_136_136, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_121);
      }
      break;
    case (MR_Integer) 1:
      {
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(STATE_VARIABLE_VarRename_0_120, Goal0_11, Goal_12);
        *STATE_VARIABLE_VarTable_119 = STATE_VARIABLE_VarTable_0_118;
        *STATE_VARIABLE_VarRename_121 = STATE_VARIABLE_VarRename_0_120;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Builtin_102 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_15, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word MustHaveMap_203;

        switch (Builtin_102) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MustHaveMap_203 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            MustHaveMap_203 = (MR_Integer) 1;
            break;
        }
        backend_libs__interval__record_decisions_at_call_site_9_p_0(MaybeFeature_9, InsertMap_10, MustHaveMap_203, Goal0_11, Goal_12, STATE_VARIABLE_VarTable_0_118, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_0_120, STATE_VARIABLE_VarRename_121);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word MustHaveMap_88;

            switch (MR_tag((MR_Word) GenericCall_82)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                MustHaveMap_88 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                MustHaveMap_88 = (MR_Integer) 0;
                break;
            }
            backend_libs__interval__record_decisions_at_call_site_9_p_0(MaybeFeature_9, InsertMap_10, MustHaveMap_88, Goal0_11, Goal_12, STATE_VARIABLE_VarTable_0_118, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_0_120, STATE_VARIABLE_VarRename_121);
          }
          break;
        case (MR_Integer) 1:
          backend_libs__interval__record_decisions_at_call_site_9_p_0(MaybeFeature_9, InsertMap_10, (MR_Integer) 0, Goal0_11, Goal_12, STATE_VARIABLE_VarTable_0_118, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_0_120, STATE_VARIABLE_VarRename_121);
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))));
            MR_Word Goals_19;
            MR_Word GoalExpr_20;

            backend_libs__interval__record_decisions_in_conj_9_p_0(MaybeFeature_9, ConjType_17, InsertMap_10, Goals0_18, &Goals_19, STATE_VARIABLE_VarTable_0_118, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_0_120, STATE_VARIABLE_VarRename_121);
            {
              GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
              MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (Goals_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_20));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StartAnchor_21;
            MR_Word EndAnchor_22;
            MR_Word Goals0_173 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));

            backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 1, Goal0_11, &StartAnchor_21, &EndAnchor_22);
            if ((Goals0_173 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Goal_12 = Goal0_11;
              *STATE_VARIABLE_VarTable_119 = STATE_VARIABLE_VarTable_0_118;
              *STATE_VARIABLE_VarRename_121 = STATE_VARIABLE_VarRename_0_120;
            }
            else
            {
              MR_Word FirstGoal0_23 = ((MR_Word) ((MR_hl_field(1, Goals0_173, (MR_Integer) 0))));
              MR_Word LaterGoals0_24 = ((MR_Word) ((MR_hl_field(1, Goals0_173, (MR_Integer) 1))));
              MR_Word FirstGoal_25;
              MR_Word StartInserts_27;
              MR_Word LaterGoals_28;
              MR_Word Goal1_29;
              MR_Word Inserts_30;
              MR_Word STATE_VARIABLE_VarTable_125_125;
              MR_Word STATE_VARIABLE_VarTable_126_126;
              MR_Word Var_127;
              MR_Word Goals_169;
              MR_Word Var_26;

              backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_9, InsertMap_10, FirstGoal0_23, &FirstGoal_25, STATE_VARIABLE_VarTable_0_118, &STATE_VARIABLE_VarTable_125_125, STATE_VARIABLE_VarRename_0_120, &Var_26);
              backend_libs__interval__lookup_inserts_3_p_0(InsertMap_10, StartAnchor_21, &StartInserts_27);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(MaybeFeature_9, InsertMap_10, StartInserts_27, LaterGoals0_24, &LaterGoals_28, STATE_VARIABLE_VarTable_125_125, &STATE_VARIABLE_VarTable_126_126);
              {
                Goals_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goals_169, 0) = ((MR_Box) (FirstGoal_25));
                MR_hl_field(1, Goals_169, 1) = ((MR_Box) (LaterGoals_28));
              }
              {
                Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Var_127, 1) = ((MR_Box) (Goals_169));
              }
              {
                Goal1_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal1_29, 0) = ((MR_Box) (Var_127));
                MR_hl_field(0, Goal1_29, 1) = ((MR_Box) (GoalInfo0_16));
              }
              backend_libs__interval__lookup_inserts_3_p_0(InsertMap_10, EndAnchor_22, &Inserts_30);
              backend_libs__interval__insert_goals_after_7_p_0(MaybeFeature_9, Inserts_30, Goal1_29, Goal_12, STATE_VARIABLE_VarTable_126_126, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_121);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word Det_32 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 3))));
            MR_Word Cases_34;
            MR_Word Var_35;
            MR_Word STATE_VARIABLE_VarTable_130_130;
            MR_Word Var_132;
            MR_Word EndAnchor_176;
            MR_Word Goal1_177;
            MR_Word Inserts_178;
            MR_Word _StartAnchor_36;

            backend_libs__interval__record_decisions_in_cases_7_p_0(MaybeFeature_9, InsertMap_10, STATE_VARIABLE_VarRename_0_120, Cases0_33, &Cases_34, STATE_VARIABLE_VarTable_0_118, &STATE_VARIABLE_VarTable_130_130);
            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_120, Var0_31, &Var_35);
            {
              Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_132, 1) = ((MR_Box) (Var_35));
              MR_hl_field(3, Var_132, 2) = (MR_Box) ((MR_Unsigned) (Det_32));
              MR_hl_field(3, Var_132, 3) = ((MR_Box) (Cases_34));
            }
            {
              Goal1_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal1_177, 0) = ((MR_Box) (Var_132));
              MR_hl_field(0, Goal1_177, 1) = ((MR_Box) (GoalInfo0_16));
            }
            backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 2, Goal0_11, &_StartAnchor_36, &EndAnchor_176);
            backend_libs__interval__lookup_inserts_3_p_0(InsertMap_10, EndAnchor_176, &Inserts_178);
            backend_libs__interval__insert_goals_after_7_p_0(MaybeFeature_9, Inserts_178, Goal1_177, Goal_12, STATE_VARIABLE_VarTable_130_130, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_121);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word SubGoal0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))));
            MR_Word Reason_59;
            MR_Word Var_157;

            switch (MR_tag((MR_Word) Reason0_56)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Creator_58 = ((MR_Unsigned) ((MR_hl_field(0, Reason0_56, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Vars0_188 = ((MR_Word) ((MR_hl_field(0, Reason0_56, (MR_Integer) 0))));
                  MR_Word Vars_189;

                  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_120, Vars0_188, &Vars_189);
                  {
                    Reason_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Reason_59, 0) = ((MR_Box) (Vars_189));
                    MR_hl_field(0, Reason_59, 1) = (MR_Box) ((MR_Unsigned) (Creator_58));
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                Reason_59 = Reason0_56;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_56, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    Reason_59 = Reason0_56;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Kind_60 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_56, (MR_Integer) 2))) & (MR_Integer) 3);
                      MR_Word Var0_190 = ((MR_Word) ((MR_hl_field(3, Reason0_56, (MR_Integer) 1))));
                      MR_Word Var_191;

                      parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_120, Var0_190, &Var_191);
                      {
                        Reason_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Reason_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, Reason_59, 1) = ((MR_Box) (Var_191));
                        MR_hl_field(3, Reason_59, 2) = (MR_Box) ((MR_Unsigned) (Kind_60));
                      }
                    }
                    break;
                }
                break;
            }
            succeeded = ((((MR_tag((MR_Word) Reason_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_59, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_157 = ((MR_Unsigned) ((MR_hl_field(3, Reason_59, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_157 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *Goal_12 = Goal0_11;
              *STATE_VARIABLE_VarRename_121 = STATE_VARIABLE_VarRename_0_120;
              *STATE_VARIABLE_VarTable_119 = STATE_VARIABLE_VarTable_0_118;
            }
            else
            {
              MR_Word SubGoal_81;
              MR_Word GoalExpr_196;

              backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_9, InsertMap_10, SubGoal0_57, &SubGoal_81, STATE_VARIABLE_VarTable_0_118, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_0_120, STATE_VARIABLE_VarRename_121);
              {
                GoalExpr_196 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_196, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_196, 1) = ((MR_Box) (Reason_59));
                MR_hl_field(3, GoalExpr_196, 2) = ((MR_Box) (SubGoal_81));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_196));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word Cond0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))));
            MR_Word Then0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 3))));
            MR_Word Else0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 4))));
            MR_Word Vars_44;
            MR_Word Cond_45;
            MR_Word Then_46;
            MR_Word StartInsertGoals_48;
            MR_Word VarRenameElse_49;
            MR_Word Else1_50;
            MR_Word ElseGoalInfo0_53;
            MR_Word Else_54;
            MR_Word EndInserts_55;
            MR_Word STATE_VARIABLE_VarTable_143_143;
            MR_Word STATE_VARIABLE_VarRename_144_144;
            MR_Word STATE_VARIABLE_VarTable_145_145;
            MR_Word STATE_VARIABLE_VarTable_146_146;
            MR_Word Var_147;
            MR_Word STATE_VARIABLE_VarTable_148_148;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_152;
            MR_Word StartAnchor_184;
            MR_Word EndAnchor_185;
            MR_Word StartInserts_186;
            MR_Word Goal1_187;
            MR_Word Var_47;
            MR_Word Var_51;

            backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 0, Goal0_11, &StartAnchor_184, &EndAnchor_185);
            parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_120, Vars0_40, &Vars_44);
            backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_9, InsertMap_10, Cond0_41, &Cond_45, STATE_VARIABLE_VarTable_0_118, &STATE_VARIABLE_VarTable_143_143, STATE_VARIABLE_VarRename_0_120, &STATE_VARIABLE_VarRename_144_144);
            backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_9, InsertMap_10, Then0_42, &Then_46, STATE_VARIABLE_VarTable_143_143, &STATE_VARIABLE_VarTable_145_145, STATE_VARIABLE_VarRename_144_144, &Var_47);
            backend_libs__interval__lookup_inserts_3_p_0(InsertMap_10, StartAnchor_184, &StartInserts_186);
            Var_147 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
            backend_libs__interval__make_inserted_goals_7_p_0(MaybeFeature_9, StartInserts_186, &StartInsertGoals_48, STATE_VARIABLE_VarTable_145_145, &STATE_VARIABLE_VarTable_146_146, Var_147, &VarRenameElse_49);
            backend_libs__interval__record_decisions_in_goal_8_p_0(MaybeFeature_9, InsertMap_10, Else0_43, &Else1_50, STATE_VARIABLE_VarTable_146_146, &STATE_VARIABLE_VarTable_148_148, VarRenameElse_49, &Var_51);
            ElseGoalInfo0_53 = ((MR_Word) ((MR_hl_field(0, Else0_43, (MR_Integer) 1))));
            {
              Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_150, 0) = ((MR_Box) (Else1_50));
              MR_hl_field(1, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_149 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), StartInsertGoals_48, Var_150);
            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_149, ElseGoalInfo0_53, &Else_54);
            {
              Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_152, 1) = ((MR_Box) (Vars_44));
              MR_hl_field(3, Var_152, 2) = ((MR_Box) (Cond_45));
              MR_hl_field(3, Var_152, 3) = ((MR_Box) (Then_46));
              MR_hl_field(3, Var_152, 4) = ((MR_Box) (Else_54));
            }
            {
              Goal1_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal1_187, 0) = ((MR_Box) (Var_152));
              MR_hl_field(0, Goal1_187, 1) = ((MR_Box) (GoalInfo0_16));
            }
            backend_libs__interval__lookup_inserts_3_p_0(InsertMap_10, EndAnchor_185, &EndInserts_55);
            backend_libs__interval__insert_goals_after_7_p_0(MaybeFeature_9, EndInserts_55, Goal1_187, Goal_12, STATE_VARIABLE_VarTable_148_148, STATE_VARIABLE_VarTable_119, STATE_VARIABLE_VarRename_121);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.record_decisions_in_goal\'/8", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
  MR_Word Construct_5,
  MR_Word Goal_6,
  MR_Word * StartAnchor_7,
  MR_Word * EndAnchor_8)
{
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
  MR_Word GoalId_11;

  GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *StartAnchor_7 = base;
    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Construct_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (GoalId_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *EndAnchor_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Construct_5));
    MR_hl_field(3, base, 2) = ((MR_Box) (GoalId_11));
  }
}

static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
  MR_Word MaybeFeature_10,
  MR_Word InsertMap_11,
  MR_Word MustHaveMap_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarTable_0_25,
  MR_Word * STATE_VARIABLE_VarTable_26,
  MR_Word STATE_VARIABLE_VarRename_0_27,
  MR_Word * STATE_VARIABLE_VarRename_28)
{
  MR_bool succeeded;
  MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 1))));
  MR_Word Goal1_19;
  MR_Word MaybeNeedAcrossCall_20;

  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(STATE_VARIABLE_VarRename_0_27, Goal0_13, &Goal1_19);
  succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(GoalInfo0_18, &MaybeNeedAcrossCall_20);
  if (succeeded)
  {
    succeeded = (MaybeNeedAcrossCall_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word GoalId_22;
    MR_Word Anchor_23;
    MR_Word InsertGoals_36;
    MR_Word BranchesGoalInfo_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word InsertsPrime_33;
    MR_Box conv0_InsertsPrime_33;

    GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_18);
    {
      Anchor_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Anchor_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Anchor_23, 1) = ((MR_Box) (GoalId_22));
    }
    Var_39 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval_scalar_common_1[4]), InsertMap_11, ((MR_Box) (Anchor_23)), &conv0_InsertsPrime_33);
    if (succeeded)
    {
      InsertsPrime_33 = ((MR_Word) (conv0_InsertsPrime_33));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      backend_libs__interval__make_inserted_goals_7_p_0(MaybeFeature_10, InsertsPrime_33, &InsertGoals_36, STATE_VARIABLE_VarTable_0_25, STATE_VARIABLE_VarTable_26, Var_39, STATE_VARIABLE_VarRename_28);
    else
    {
      InsertGoals_36 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarRename_28 = Var_39;
      *STATE_VARIABLE_VarTable_26 = STATE_VARIABLE_VarTable_0_25;
    }
    BranchesGoalInfo_38 = ((MR_Word) ((MR_hl_field(0, Goal1_19, (MR_Integer) 1))));
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Goal1_19));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (InsertGoals_36));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_40, BranchesGoalInfo_38, Goal_14);
  }
  else
  {
    switch (MustHaveMap_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Goal_14 = Goal1_19;
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", (MR_String) "no save map");
          return;
        }
        break;
    }
    *STATE_VARIABLE_VarRename_28 = STATE_VARIABLE_VarRename_0_27;
    *STATE_VARIABLE_VarTable_26 = STATE_VARIABLE_VarTable_0_25;
  }
}

static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
  MR_Word MaybeFeature_8,
  MR_Word Specs_9,
  MR_Word BranchesGoal_10,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_VarTable_0_17,
  MR_Word * STATE_VARIABLE_VarTable_18,
  MR_Word * VarRename_13)
{
  MR_Word InsertGoals_14;
  MR_Word BranchesGoalInfo_16;
  MR_Word Var_20;
  MR_Word Var_21;

  Var_20 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
  backend_libs__interval__make_inserted_goals_7_p_0(MaybeFeature_8, Specs_9, &InsertGoals_14, STATE_VARIABLE_VarTable_0_17, STATE_VARIABLE_VarTable_18, Var_20, VarRename_13);
  BranchesGoalInfo_16 = ((MR_Word) ((MR_hl_field(0, BranchesGoal_10, (MR_Integer) 1))));
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (BranchesGoal_10));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (InsertGoals_14));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_21, BranchesGoalInfo_16, Goal_11);
}

static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
  MR_Word MaybeFeature_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5,
  MR_Word STATE_VARIABLE_VarRename_0_6,
  MR_Word * STATE_VARIABLE_VarRename_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarRename_7 = STATE_VARIABLE_VarRename_0_6;
    *STATE_VARIABLE_VarTable_5 = STATE_VARIABLE_VarTable_0_4;
  }
  else
  {
    MR_Word Spec_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_VarTable_26_26;
    MR_Word STATE_VARIABLE_VarRename_27_27;

    backend_libs__interval__make_inserted_goal_7_p_0(MaybeFeature_1, Spec_16, &Goal_18, STATE_VARIABLE_VarTable_0_4, &STATE_VARIABLE_VarTable_26_26, STATE_VARIABLE_VarRename_0_6, &STATE_VARIABLE_VarRename_27_27);
    backend_libs__interval__make_inserted_goals_7_p_0(MaybeFeature_1, Specs_17, &Goals_19, STATE_VARIABLE_VarTable_26_26, STATE_VARIABLE_VarTable_5, STATE_VARIABLE_VarRename_27_27, STATE_VARIABLE_VarRename_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

void MR_CALL 
backend_libs__interval__make_inserted_goal_7_p_0(
  MR_Word MaybeFeature_8,
  MR_Word Spec_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_37,
  MR_Word * STATE_VARIABLE_VarTable_38,
  MR_Word STATE_VARIABLE_VarRename_0_39,
  MR_Word * STATE_VARIABLE_VarRename_40)
{
  MR_bool succeeded;
  MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(0, Spec_9, (MR_Integer) 0))));
  MR_Word VarsToExtract_14 = ((MR_Word) ((MR_hl_field(0, Spec_9, (MR_Integer) 1))));
  MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 1))));
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word ArgVars_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Unification0_20;

  succeeded = ((MR_tag((MR_Word) GoalExpr0_15)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 2))));
    Unification0_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 4))));
    succeeded = ((MR_tag((MR_Word) Unification0_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(1, Unification0_20, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(1, Unification0_20, (MR_Integer) 1))));
      ArgVars_24 = ((MR_Word) ((MR_hl_field(1, Unification0_20, (MR_Integer) 2))));
      Var_25 = ((MR_Word) ((MR_hl_field(1, Unification0_20, (MR_Integer) 3))));
      Var_27 = ((MR_Unsigned) ((MR_hl_field(1, Unification0_20, (MR_Integer) 4))) & (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word Unification1_28;
    MR_Word GoalExpr1_29;
    MR_Word GoalInfo1_30;
    MR_Word GoalInfo2_32;
    MR_Word Goal2_33;
    MR_Word NewRename_34;
    MR_Word VoidRename_35;
    MR_Word Goal3_36;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      Unification1_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Unification1_28, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, Unification1_28, 1) = ((MR_Box) (Var_23));
      MR_hl_field(1, Unification1_28, 2) = ((MR_Box) (ArgVars_24));
      MR_hl_field(1, Unification1_28, 3) = ((MR_Box) (Var_25));
      MR_hl_field(1, Unification1_28, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_27)));
    }
    {
      GoalExpr1_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalExpr1_29, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, GoalExpr1_29, 1) = ((MR_Box) (Var_18));
      MR_hl_field(1, GoalExpr1_29, 2) = ((MR_Box) (Var_19));
      MR_hl_field(1, GoalExpr1_29, 3) = ((MR_Box) (Unification1_28));
      MR_hl_field(1, GoalExpr1_29, 4) = ((MR_Box) (Var_21));
    }
    hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo0_16, &GoalInfo1_30);
    if ((MaybeFeature_8 == (MR_Word) ((MR_Unsigned) 0U)))
      GoalInfo2_32 = GoalInfo1_30;
    else
    {
      MR_Word Feature_31 = ((MR_Word) ((MR_hl_field(1, MaybeFeature_8, (MR_Integer) 0))));

      hlds__hlds_goal__goal_info_add_feature_3_p_0(Feature_31, GoalInfo1_30, &GoalInfo2_32);
    }
    {
      Goal2_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal2_33, 0) = ((MR_Box) (GoalExpr1_29));
      MR_hl_field(0, Goal2_33, 1) = ((MR_Box) (GoalInfo2_32));
    }
    Var_44 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
    Var_45 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
    backend_libs__interval__create_shadow_vars_8_p_0(ArgVars_24, VarsToExtract_14, STATE_VARIABLE_VarTable_0_37, STATE_VARIABLE_VarTable_38, Var_44, &NewRename_34, Var_45, &VoidRename_35);
    mercury__map__old_merge_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), STATE_VARIABLE_VarRename_0_39, NewRename_34, STATE_VARIABLE_VarRename_40);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*STATE_VARIABLE_VarRename_40, Goal2_33, &Goal3_36);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VoidRename_35, Goal3_36, Goal_10);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
      return;
    }
}

static void MR_CALL 
backend_libs__interval__create_shadow_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarsToExtract_2,
  MR_Word STATE_VARIABLE_VarTable_0_3,
  MR_Word * STATE_VARIABLE_VarTable_4,
  MR_Word STATE_VARIABLE_VarRename_0_5,
  MR_Word * STATE_VARIABLE_VarRename_6,
  MR_Word STATE_VARIABLE_VoidRename_0_7,
  MR_Word * STATE_VARIABLE_VoidRename_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_VoidRename_8 = STATE_VARIABLE_VoidRename_0_7;
      *STATE_VARIABLE_VarRename_6 = STATE_VARIABLE_VarRename_0_5;
      *STATE_VARIABLE_VarTable_4 = STATE_VARIABLE_VarTable_0_3;
    }
    else
    {
      MR_Word Arg_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarTable_31_31;
      MR_Word STATE_VARIABLE_VarRename_32_32;
      MR_Word STATE_VARIABLE_VoidRename_33_33;
      MR_Word ArgEntry_34;
      MR_Word Shadow_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarTable_0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarRename_0_5;
      MR_Word next_value_of_STATE_VARIABLE_VoidRename_0_7;

      parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_3, Arg_19, &ArgEntry_34);
      parse_tree__var_table__add_var_entry_4_p_0(ArgEntry_34, &Shadow_35, STATE_VARIABLE_VarTable_0_3, &STATE_VARIABLE_VarTable_31_31);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsToExtract_2, Arg_19);
      if (succeeded)
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), ((MR_Box) (Arg_19)), ((MR_Box) (Shadow_35)), STATE_VARIABLE_VarRename_0_5, &STATE_VARIABLE_VarRename_32_32);
        STATE_VARIABLE_VoidRename_33_33 = STATE_VARIABLE_VoidRename_0_7;
      }
      else
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), ((MR_Box) (Arg_19)), ((MR_Box) (Shadow_35)), STATE_VARIABLE_VoidRename_0_7, &STATE_VARIABLE_VoidRename_33_33);
        STATE_VARIABLE_VarRename_32_32 = STATE_VARIABLE_VarRename_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_20;
      next_value_of_STATE_VARIABLE_VarTable_0_3 = STATE_VARIABLE_VarTable_31_31;
      next_value_of_STATE_VARIABLE_VarRename_0_5 = STATE_VARIABLE_VarRename_32_32;
      next_value_of_STATE_VARIABLE_VoidRename_0_7 = STATE_VARIABLE_VoidRename_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarTable_0_3 = next_value_of_STATE_VARIABLE_VarTable_0_3;
      STATE_VARIABLE_VarRename_0_5 = next_value_of_STATE_VARIABLE_VarRename_0_5;
      STATE_VARIABLE_VoidRename_0_7 = next_value_of_STATE_VARIABLE_VoidRename_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
  MR_Word InsertMap_4,
  MR_Word Anchor_5,
  MR_Word * Inserts_6)
{
  MR_bool succeeded;
  MR_Word InsertsPrime_7;
  MR_Box conv0_InsertsPrime_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval_scalar_common_1[4]), InsertMap_4, ((MR_Box) (Anchor_5)), &conv0_InsertsPrime_7);
  if (succeeded)
  {
    InsertsPrime_7 = ((MR_Word) (conv0_InsertsPrime_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Inserts_6 = InsertsPrime_7;
  else
    *Inserts_6 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
backend_libs__interval__delete_interval_vars_5_p_0(
  MR_Word Id_6,
  MR_Word ToDeleteVars_7,
  MR_Word * DeletedVars_8,
  MR_Word STATE_VARIABLE_IntervalInfo_0_18,
  MR_Word * STATE_VARIABLE_IntervalInfo_19)
{
  MR_bool succeeded;
  MR_Word VarsMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14))));
  MR_Word Vars0_11;
  MR_Word Vars_12;
  MR_Word VarsMap_13;
  MR_Word DeleteMap0_14;
  MR_Word DeleteMap_17;
  MR_Word STATE_VARIABLE_IntervalInfo_20_20;
  MR_Box conv0_Vars0_11;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Deletions0_15;
  MR_Box conv1_Deletions0_15;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;

  mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), VarsMap0_10, ((MR_Box) (Id_6)), &conv0_Vars0_11);
  Vars0_11 = ((MR_Word) (conv0_Vars0_11));
  *DeletedVars_8 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_11, ToDeleteVars_7);
  Vars_12 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_11, *DeletedVars_8);
  mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (Id_6)), ((MR_Box) (Vars_12)), VarsMap0_10, &VarsMap_13);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13))));
  DeleteMap0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (Var_41));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (Var_44));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (Var_46));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (VarsMap_13));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (DeleteMap0_14));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[2]), DeleteMap0_14, ((MR_Box) (Id_6)), &conv1_Deletions0_15);
  if (succeeded)
  {
    Deletions0_15 = ((MR_Word) (conv1_Deletions0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Deletions_16;

    {
      Deletions_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Deletions_16, 0) = ((MR_Box) (*DeletedVars_8));
      MR_hl_field(1, Deletions_16, 1) = ((MR_Box) (Deletions0_15));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[2]), ((MR_Box) (Id_6)), ((MR_Box) (Deletions_16)), DeleteMap0_14, &DeleteMap_17);
  }
  else
  {
    MR_Word Deletions_23;

    {
      Deletions_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Deletions_23, 0) = ((MR_Box) (*DeletedVars_8));
      MR_hl_field(1, Deletions_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[2]), ((MR_Box) (Id_6)), ((MR_Box) (Deletions_23)), DeleteMap0_14, &DeleteMap_17);
  }
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 0))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 1))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 2))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 3))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 4))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 5))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 6))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 7))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 8))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 9))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 10))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 11))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 12))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 13))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 14))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 15) = ((MR_Box) (DeleteMap_17));
  }
}

static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_114,
  MR_Box tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115,
  MR_Box * tscc_output_ptr_2_STATE_VARIABLE_Acc_116)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25;
  MR_Word tscc_proc_2_input_2_HeadVar__1_1;
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
  MR_Box tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
  MR_Word tscc_output_1_STATE_VARIABLE_IntervalInfo_114;
  MR_Box tscc_output_2_STATE_VARIABLE_Acc_116;

  // The code for TSCC PROC 1: pred backend_libs.interval.build_interval_info_in_goal/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred backend_libs.interval.build_interval_info_in_goal/5-0
  ;
  // proc 2 in TSCC: pred backend_libs.interval.UnusedArgs__pred__build_interval_info_in_conj__[3]_0/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_build_interval_info_acc_353 = tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
    MR_Word STATE_VARIABLE_IntervalInfo_0_113 = tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
    MR_Word STATE_VARIABLE_IntervalInfo_114;
    MR_Box STATE_VARIABLE_Acc_0_115 = tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;
    MR_Box STATE_VARIABLE_Acc_116;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalInfo_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_24 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word Var_143;
          MR_Word STATE_VARIABLE_IntervalInfo_145_145;
          MR_Box STATE_VARIABLE_Acc_146_146;
          MR_Word STATE_VARIABLE_IntervalInfo_147_147;
          MR_Word STATE_VARIABLE_IntervalInfo_148_148;
          MR_Box STATE_VARIABLE_Acc_149_149;
          MR_Word STATE_VARIABLE_IntervalInfo_151_151;
          MR_Word StartAnchor_238;
          MR_Word EndAnchor_239;
          MR_Word BeforeId_240;
          MR_Word AfterId_241;
          MR_Word MaybeResumeVars_242;
          MR_Word OpenIntervals_243;

          {
            Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_143, 0) = ((MR_Box) (SubGoal_24));
          }
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_143, (MR_Integer) 3, &StartAnchor_238, &EndAnchor_239, &BeforeId_240, &AfterId_241, &MaybeResumeVars_242, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_145_145, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_146_146);
          backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_239, AfterId_241, STATE_VARIABLE_IntervalInfo_145_145, &STATE_VARIABLE_IntervalInfo_147_147);
          backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, SubGoal_24, STATE_VARIABLE_IntervalInfo_147_147, &STATE_VARIABLE_IntervalInfo_148_148, STATE_VARIABLE_Acc_146_146, &STATE_VARIABLE_Acc_149_149);
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_238, BeforeId_240, &OpenIntervals_243, STATE_VARIABLE_IntervalInfo_148_148, &STATE_VARIABLE_IntervalInfo_151_151, STATE_VARIABLE_Acc_149_149, &STATE_VARIABLE_Acc_116);
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_238, BeforeId_240, MaybeResumeVars_242, OpenIntervals_243, STATE_VARIABLE_IntervalInfo_151_151, &STATE_VARIABLE_IntervalInfo_114);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_90 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_90)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellVar_92 = ((MR_Word) ((MR_hl_field(0, Unification_90, (MR_Integer) 0))));
                MR_Word HowToConstruct_95 = ((MR_Word) ((MR_hl_field(0, Unification_90, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_IntervalInfo_202_202;
                MR_Word Var_203;
                MR_Word ArgVars_270 = ((MR_Word) ((MR_hl_field(0, Unification_90, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) HowToConstruct_95)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
                      return;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "NYI: construct in region");
                      return;
                    }
                    break;
                }
                backend_libs__interval__require_in_regs_3_p_0(ArgVars_270, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_202_202);
                {
                  Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_203, 0) = ((MR_Box) (CellVar_92));
                  MR_hl_field(1, Var_203, 1) = ((MR_Box) (ArgVars_270));
                }
                backend_libs__interval__require_access_3_p_0(Var_203, STATE_VARIABLE_IntervalInfo_202_202, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_101 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_IntervalInfo_205_205;
                MR_Word Var_207;
                MR_Word STATE_VARIABLE_IntervalInfo_208_208;
                MR_Word Var_210;
                MR_Word ArgVars_271 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 2))));
                MR_Word ArgModes_272 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 3))));
                MR_Word IntParams_273 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
                MR_Word ModuleInfo_274 = ((MR_Word) ((MR_hl_field(0, IntParams_273, (MR_Integer) 0))));
                MR_Word VarTable_275 = ((MR_Word) ((MR_hl_field(0, IntParams_273, (MR_Integer) 1))));
                MR_Word CellVar_276 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 0))));

                succeeded = backend_libs__interval__shared_left_to_right_deconstruct_4_p_0(ModuleInfo_274, VarTable_275, ArgVars_271, ArgModes_272);
                if (succeeded)
                  backend_libs__interval__use_cell_8_p_0(TypeClassInfo_for_build_interval_info_acc_353, CellVar_276, ArgVars_271, ConsId_101, HeadVar__1_1, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_205_205, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
                else
                {
                  STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
                  STATE_VARIABLE_IntervalInfo_205_205 = STATE_VARIABLE_IntervalInfo_0_113;
                }
                {
                  Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_207, 0) = ((MR_Box) (CellVar_276));
                  MR_hl_field(1, Var_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_in_regs_3_p_0(Var_207, STATE_VARIABLE_IntervalInfo_205_205, &STATE_VARIABLE_IntervalInfo_208_208);
                {
                  Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_210, 0) = ((MR_Box) (CellVar_276));
                  MR_hl_field(1, Var_210, 1) = ((MR_Box) (ArgVars_271));
                }
                backend_libs__interval__require_access_3_p_0(Var_210, STATE_VARIABLE_IntervalInfo_208_208, &STATE_VARIABLE_IntervalInfo_114);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ToVar_105 = ((MR_Word) ((MR_hl_field(2, Unification_90, (MR_Integer) 0))));
                MR_Word FromVar_106 = ((MR_Word) ((MR_hl_field(2, Unification_90, (MR_Integer) 1))));
                MR_Word Var_212;
                MR_Word STATE_VARIABLE_IntervalInfo_213_213;
                MR_Word Var_215;
                MR_Word Var_217;

                {
                  Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_212, 0) = ((MR_Box) (FromVar_106));
                  MR_hl_field(1, Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_in_regs_3_p_0(Var_212, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_213_213);
                {
                  Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_217, 0) = ((MR_Box) (ToVar_105));
                  MR_hl_field(1, Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_215, 0) = ((MR_Box) (FromVar_106));
                  MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_217));
                }
                backend_libs__interval__require_access_3_p_0(Var_215, STATE_VARIABLE_IntervalInfo_213_213, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_90, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var1_107 = ((MR_Word) ((MR_hl_field(3, Unification_90, (MR_Integer) 1))));
                    MR_Word Var2_108 = ((MR_Word) ((MR_hl_field(3, Unification_90, (MR_Integer) 2))));
                    MR_Word Var_219;
                    MR_Word STATE_VARIABLE_IntervalInfo_220_220;
                    MR_Word Var_221;

                    {
                      Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_221, 0) = ((MR_Box) (Var2_108));
                      MR_hl_field(1, Var_221, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_219, 0) = ((MR_Box) (Var1_107));
                      MR_hl_field(1, Var_219, 1) = ((MR_Box) (Var_221));
                    }
                    backend_libs__interval__require_in_regs_3_p_0(Var_219, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_220_220);
                    backend_libs__interval__require_access_3_p_0(Var_219, STATE_VARIABLE_IntervalInfo_220_220, &STATE_VARIABLE_IntervalInfo_114);
                    STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
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
          MR_Word PredId_66 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));
          MR_Integer ProcId_67 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Builtin_68 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word ProcInfo_72;
          MR_Word ArgVars_252 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 2))));
          MR_Word IntParams_254 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
          MR_Word ModuleInfo_255 = ((MR_Word) ((MR_hl_field(0, IntParams_254, (MR_Integer) 0))));
          MR_Word VarTable_256;
          MR_Word InputArgs_257;
          MR_Word Inputs_258;
          MR_Word _PredInfo_71;
          MR_Word Var_73;
          MR_Word Var_74;

          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_255, PredId_66, ProcId_67, &_PredInfo_71, &ProcInfo_72);
          VarTable_256 = ((MR_Word) ((MR_hl_field(0, IntParams_254, (MR_Integer) 1))));
          hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_255, ProcInfo_72, VarTable_256, ArgVars_252, &InputArgs_257, &Var_73, &Var_74);
          mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgs_257, &Inputs_258);
          switch (Builtin_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_IntervalInfo_188_188;

                backend_libs__interval__require_in_regs_3_p_0(Inputs_258, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_188_188);
                backend_libs__interval__require_access_3_p_0(Inputs_258, STATE_VARIABLE_IntervalInfo_188_188, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeNeedAcrossCall_250;

                hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_250);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_258, MaybeNeedAcrossCall_250, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgModes_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word MaybeArgRegs_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word MaybeNeedAcrossCall_38;
              MR_Word IntParams_39;
              MR_Word ModuleInfo_40;
              MR_Word VarTable_41;
              MR_Word ArgRegTypes_42;
              MR_Word InputArgsR_43;
              MR_Word InputArgsF_44;
              MR_Word InputArgs_47;
              MR_Word _OutputArgsR_45;
              MR_Word _OutputArgsF_46;

              hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_38);
              IntParams_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
              ModuleInfo_40 = ((MR_Word) ((MR_hl_field(0, IntParams_39, (MR_Integer) 0))));
              VarTable_41 = ((MR_Word) ((MR_hl_field(0, IntParams_39, (MR_Integer) 1))));
              hlds__arg_info__generic_call_arg_reg_types_5_p_0(ModuleInfo_40, GenericCall_33, ArgVars_34, MaybeArgRegs_36, &ArgRegTypes_42);
              hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_40, VarTable_41, ArgVars_34, ArgModes_35, ArgRegTypes_42, &InputArgsR_43, &InputArgsF_44, &_OutputArgsR_45, &_OutputArgsF_46);
              InputArgs_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_43, InputArgsF_44);
              switch (MR_tag((MR_Word) GenericCall_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word Globals_59;
                    MR_Word GenericVarsArgInfos_61;
                    MR_Word GenericVars_64;
                    MR_Word Inputs_65;
                    MR_Integer Var_184;
                    MR_Integer Var_185;
                    MR_Word Var_60;
                    MR_Integer Var_62;
                    MR_Word Var_63;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_40, &Globals_59);
                    Var_184 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_43);
                    Var_185 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsF_44);
                    ll_backend__call_gen__generic_call_info_8_p_0(Globals_59, GenericCall_33, Var_184, Var_185, &Var_60, &GenericVarsArgInfos_61, &Var_62, &Var_63);
                    mercury__assoc_list__keys_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), GenericVarsArgInfos_61, &GenericVars_64);
                    Inputs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), GenericVars_64, InputArgs_47);
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_65, MaybeNeedAcrossCall_38, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word STATE_VARIABLE_IntervalInfo_182_182;

                    backend_libs__interval__require_in_regs_3_p_0(InputArgs_47, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_182_182);
                    backend_libs__interval__require_access_3_p_0(InputArgs_47, STATE_VARIABLE_IntervalInfo_182_182, &STATE_VARIABLE_IntervalInfo_114);
                    STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 5))));
              MR_Word ExtraVars_80;
              MR_Word InputArgVarSet_81;
              MR_Word InputArgVars_84;
              MR_Word InputVars_85;
              MR_Word ArgVars_261;
              MR_Word IntParams_263 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
              MR_Word ModuleInfo_264 = ((MR_Word) ((MR_hl_field(0, IntParams_263, (MR_Integer) 0))));
              MR_Word VarTable_265;
              MR_Word PredId_266 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Integer ProcId_267 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word ProcInfo_269;
              MR_Word _PredInfo_259;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word MaybeNeedAcrossCall_260;

              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_264, PredId_266, ProcId_267, &_PredInfo_259, &ProcInfo_269);
              VarTable_265 = ((MR_Word) ((MR_hl_field(0, IntParams_263, (MR_Integer) 1))));
              ArgVars_261 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[11]), Args_76);
              ExtraVars_80 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[12]), ExtraArgs_77);
              hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_264, ProcInfo_269, VarTable_265, ArgVars_261, &InputArgVarSet_81, &Var_82, &Var_83);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVarSet_81, &InputArgVars_84);
              mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVars_84, ExtraVars_80, &InputVars_85);
              succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_260);
              if (succeeded)
              {
                succeeded = (MaybeNeedAcrossCall_260 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
              if (succeeded)
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(InputVars_85, MaybeNeedAcrossCall_260, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
              else
              {
                MR_Word STATE_VARIABLE_IntervalInfo_196_196;

                backend_libs__interval__require_in_regs_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_196_196);
                backend_libs__interval__require_access_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_196_196, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25 = TypeClassInfo_for_build_interval_info_acc_353;
              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__1_1 = Goals_11;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = STATE_VARIABLE_IntervalInfo_0_113;
              MR_Box next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_0_115;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25;
              tscc_proc_2_input_2_HeadVar__1_1 = next_value_of_tscc_proc_2_input_2_HeadVar__1_1;
              tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
              tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_231 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              if ((Goals_231 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                backend_libs__interval__no_open_intervals_2_p_0(STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              else
              {
                MR_Word FirstDisjunct_12 = ((MR_Word) ((MR_hl_field(1, Goals_231, (MR_Integer) 0))));
                MR_Word StartAnchor_14;
                MR_Word EndAnchor_15;
                MR_Word BeforeId_16;
                MR_Word AfterId_17;
                MR_Word MaybeResumeVars_18;
                MR_Word OpenIntervals_19;
                MR_Word Var_119;
                MR_Word STATE_VARIABLE_IntervalInfo_121_121;
                MR_Box STATE_VARIABLE_Acc_122_122;
                MR_Word STATE_VARIABLE_IntervalInfo_124_124;

                {
                  Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_119, 0) = ((MR_Box) (FirstDisjunct_12));
                }
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_119, (MR_Integer) 1, &StartAnchor_14, &EndAnchor_15, &BeforeId_16, &AfterId_17, &MaybeResumeVars_18, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_121_121, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_122_122);
                backend_libs__interval__build_interval_info_in_disj_11_p_0(TypeClassInfo_for_build_interval_info_acc_353, Goals_231, (MR_Integer) 1, StartAnchor_14, EndAnchor_15, BeforeId_16, AfterId_17, &OpenIntervals_19, STATE_VARIABLE_IntervalInfo_121_121, &STATE_VARIABLE_IntervalInfo_124_124, STATE_VARIABLE_Acc_122_122, &STATE_VARIABLE_Acc_116);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_14, BeforeId_16, MaybeResumeVars_18, OpenIntervals_19, STATE_VARIABLE_IntervalInfo_124_124, &STATE_VARIABLE_IntervalInfo_114);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word OpenIntervalsList_23;
              MR_Word STATE_VARIABLE_IntervalInfo_131_131;
              MR_Box STATE_VARIABLE_Acc_132_132;
              MR_Word STATE_VARIABLE_IntervalInfo_133_133;
              MR_Word STATE_VARIABLE_IntervalInfo_136_136;
              MR_Word Var_137;
              MR_Word STATE_VARIABLE_IntervalInfo_138_138;
              MR_Word StartAnchor_232;
              MR_Word EndAnchor_233;
              MR_Word BeforeId_234;
              MR_Word AfterId_235;
              MR_Word MaybeResumeVars_236;
              MR_Word OpenIntervals_237;

              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, &StartAnchor_232, &EndAnchor_233, &BeforeId_234, &AfterId_235, &MaybeResumeVars_236, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_131_131, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_132_132);
              backend_libs__interval__build_interval_info_in_cases_10_p_0(TypeClassInfo_for_build_interval_info_acc_353, Cases_22, StartAnchor_232, EndAnchor_233, BeforeId_234, AfterId_235, &OpenIntervalsList_23, STATE_VARIABLE_IntervalInfo_131_131, &STATE_VARIABLE_IntervalInfo_133_133, STATE_VARIABLE_Acc_132_132, &STATE_VARIABLE_Acc_116);
              OpenIntervals_237 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), OpenIntervalsList_23);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_232, BeforeId_234, MaybeResumeVars_236, OpenIntervals_237, STATE_VARIABLE_IntervalInfo_133_133, &STATE_VARIABLE_IntervalInfo_136_136);
              {
                Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_20));
                MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              backend_libs__interval__require_in_regs_3_p_0(Var_137, STATE_VARIABLE_IntervalInfo_136_136, &STATE_VARIABLE_IntervalInfo_138_138);
              backend_libs__interval__require_access_3_p_0(Var_137, STATE_VARIABLE_IntervalInfo_138_138, &STATE_VARIABLE_IntervalInfo_114);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_249 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word TermVar_32;
              MR_Word Var_176;

              succeeded = ((((MR_tag((MR_Word) Reason_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_31, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_32 = ((MR_Word) ((MR_hl_field(3, Reason_31, (MR_Integer) 1))));
                Var_176 = ((MR_Unsigned) ((MR_hl_field(3, Reason_31, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_176 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_Word Var_177;

                {
                  Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_177, 0) = ((MR_Box) (TermVar_32));
                  MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_access_3_p_0(Var_177, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = TypeClassInfo_for_build_interval_info_acc_353;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = SubGoal_249;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = STATE_VARIABLE_IntervalInfo_0_113;
                MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = STATE_VARIABLE_Acc_0_115;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
                tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
                tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word CondOpenIntervals_29;
              MR_Word Var_155;
              MR_Word STATE_VARIABLE_IntervalInfo_157_157;
              MR_Box STATE_VARIABLE_Acc_158_158;
              MR_Word STATE_VARIABLE_IntervalInfo_159_159;
              MR_Word STATE_VARIABLE_IntervalInfo_160_160;
              MR_Box STATE_VARIABLE_Acc_161_161;
              MR_Word STATE_VARIABLE_IntervalInfo_162_162;
              MR_Word STATE_VARIABLE_IntervalInfo_163_163;
              MR_Box STATE_VARIABLE_Acc_164_164;
              MR_Word STATE_VARIABLE_IntervalInfo_166_166;
              MR_Box STATE_VARIABLE_Acc_167_167;
              MR_Word STATE_VARIABLE_IntervalInfo_168_168;
              MR_Word STATE_VARIABLE_IntervalInfo_169_169;
              MR_Box STATE_VARIABLE_Acc_170_170;
              MR_Word STATE_VARIABLE_IntervalInfo_172_172;
              MR_Word StartAnchor_244;
              MR_Word EndAnchor_245;
              MR_Word BeforeId_246;
              MR_Word AfterId_247;
              MR_Word MaybeResumeVars_248;
              MR_Word _ElseOpenIntervals_30;

              {
                Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_155, 0) = ((MR_Box) (Cond_26));
              }
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_155, (MR_Integer) 0, &StartAnchor_244, &EndAnchor_245, &BeforeId_246, &AfterId_247, &MaybeResumeVars_248, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_157_157, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_158_158);
              backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_245, AfterId_247, STATE_VARIABLE_IntervalInfo_157_157, &STATE_VARIABLE_IntervalInfo_159_159);
              backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, Then_27, STATE_VARIABLE_IntervalInfo_159_159, &STATE_VARIABLE_IntervalInfo_160_160, STATE_VARIABLE_Acc_158_158, &STATE_VARIABLE_Acc_161_161);
              backend_libs__interval__reached_cond_then_3_p_0(GoalInfo_7, STATE_VARIABLE_IntervalInfo_160_160, &STATE_VARIABLE_IntervalInfo_162_162);
              backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, Cond_26, STATE_VARIABLE_IntervalInfo_162_162, &STATE_VARIABLE_IntervalInfo_163_163, STATE_VARIABLE_Acc_161_161, &STATE_VARIABLE_Acc_164_164);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, StartAnchor_244, BeforeId_246, &CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_163_163, &STATE_VARIABLE_IntervalInfo_166_166, STATE_VARIABLE_Acc_164_164, &STATE_VARIABLE_Acc_167_167);
              backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_245, AfterId_247, STATE_VARIABLE_IntervalInfo_166_166, &STATE_VARIABLE_IntervalInfo_168_168);
              backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, Else_28, STATE_VARIABLE_IntervalInfo_168_168, &STATE_VARIABLE_IntervalInfo_169_169, STATE_VARIABLE_Acc_167_167, &STATE_VARIABLE_Acc_170_170);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_244, BeforeId_246, &_ElseOpenIntervals_30, STATE_VARIABLE_IntervalInfo_169_169, &STATE_VARIABLE_IntervalInfo_172_172, STATE_VARIABLE_Acc_170_170, &STATE_VARIABLE_Acc_116);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_244, BeforeId_246, MaybeResumeVars_248, CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_172_172, &STATE_VARIABLE_IntervalInfo_114);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_IntervalInfo_114 = STATE_VARIABLE_IntervalInfo_114;
    tscc_output_2_STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_116;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_build_interval_info_acc_25 = tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25;
    MR_Word HeadVar__1_1 = tscc_proc_2_input_2_HeadVar__1_1;
    MR_Word STATE_VARIABLE_IntervalInfo_0_3 = tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
    MR_Word STATE_VARIABLE_IntervalInfo_4;
    MR_Box STATE_VARIABLE_Acc_0_5 = tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
    MR_Box STATE_VARIABLE_Acc_6;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
      STATE_VARIABLE_IntervalInfo_4 = STATE_VARIABLE_IntervalInfo_0_3;
    }
    else
    {
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IntervalInfo_23_23;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
      MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;

      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(TypeClassInfo_for_build_interval_info_acc_25, Goals_15, STATE_VARIABLE_IntervalInfo_0_3, &STATE_VARIABLE_IntervalInfo_23_23, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = TypeClassInfo_for_build_interval_info_acc_25;
      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Goal_14;
      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = STATE_VARIABLE_IntervalInfo_23_23;
      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = STATE_VARIABLE_Acc_24_24;
      tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
      tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_IntervalInfo_114 = STATE_VARIABLE_IntervalInfo_4;
    tscc_output_2_STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_6;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_114 = tscc_output_1_STATE_VARIABLE_IntervalInfo_114;
  *tscc_output_ptr_2_STATE_VARIABLE_Acc_116 = tscc_output_2_STATE_VARIABLE_Acc_116;
  return;
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25,
  MR_Word tscc_proc_2_input_2_HeadVar__1_1,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_114,
  MR_Box tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5,
  MR_Box * tscc_output_ptr_2_STATE_VARIABLE_Acc_116)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
  MR_Word tscc_proc_1_input_2_HeadVar__1_1;
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
  MR_Box tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;
  MR_Word tscc_output_1_STATE_VARIABLE_IntervalInfo_114;
  MR_Box tscc_output_2_STATE_VARIABLE_Acc_116;

  // The code for TSCC PROC 2: pred backend_libs.interval.UnusedArgs__pred__build_interval_info_in_conj__[3]_0/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred backend_libs.interval.build_interval_info_in_goal/5-0
  ;
  // proc 2 in TSCC: pred backend_libs.interval.UnusedArgs__pred__build_interval_info_in_conj__[3]_0/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_build_interval_info_acc_353 = tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
    MR_Word STATE_VARIABLE_IntervalInfo_0_113 = tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
    MR_Word STATE_VARIABLE_IntervalInfo_114;
    MR_Box STATE_VARIABLE_Acc_0_115 = tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;
    MR_Box STATE_VARIABLE_Acc_116;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalInfo_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_24 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word Var_143;
          MR_Word STATE_VARIABLE_IntervalInfo_145_145;
          MR_Box STATE_VARIABLE_Acc_146_146;
          MR_Word STATE_VARIABLE_IntervalInfo_147_147;
          MR_Word STATE_VARIABLE_IntervalInfo_148_148;
          MR_Box STATE_VARIABLE_Acc_149_149;
          MR_Word STATE_VARIABLE_IntervalInfo_151_151;
          MR_Word StartAnchor_238;
          MR_Word EndAnchor_239;
          MR_Word BeforeId_240;
          MR_Word AfterId_241;
          MR_Word MaybeResumeVars_242;
          MR_Word OpenIntervals_243;

          {
            Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_143, 0) = ((MR_Box) (SubGoal_24));
          }
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_143, (MR_Integer) 3, &StartAnchor_238, &EndAnchor_239, &BeforeId_240, &AfterId_241, &MaybeResumeVars_242, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_145_145, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_146_146);
          backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_239, AfterId_241, STATE_VARIABLE_IntervalInfo_145_145, &STATE_VARIABLE_IntervalInfo_147_147);
          backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, SubGoal_24, STATE_VARIABLE_IntervalInfo_147_147, &STATE_VARIABLE_IntervalInfo_148_148, STATE_VARIABLE_Acc_146_146, &STATE_VARIABLE_Acc_149_149);
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_238, BeforeId_240, &OpenIntervals_243, STATE_VARIABLE_IntervalInfo_148_148, &STATE_VARIABLE_IntervalInfo_151_151, STATE_VARIABLE_Acc_149_149, &STATE_VARIABLE_Acc_116);
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_238, BeforeId_240, MaybeResumeVars_242, OpenIntervals_243, STATE_VARIABLE_IntervalInfo_151_151, &STATE_VARIABLE_IntervalInfo_114);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_90 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_90)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellVar_92 = ((MR_Word) ((MR_hl_field(0, Unification_90, (MR_Integer) 0))));
                MR_Word HowToConstruct_95 = ((MR_Word) ((MR_hl_field(0, Unification_90, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_IntervalInfo_202_202;
                MR_Word Var_203;
                MR_Word ArgVars_270 = ((MR_Word) ((MR_hl_field(0, Unification_90, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) HowToConstruct_95)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
                      return;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "NYI: construct in region");
                      return;
                    }
                    break;
                }
                backend_libs__interval__require_in_regs_3_p_0(ArgVars_270, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_202_202);
                {
                  Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_203, 0) = ((MR_Box) (CellVar_92));
                  MR_hl_field(1, Var_203, 1) = ((MR_Box) (ArgVars_270));
                }
                backend_libs__interval__require_access_3_p_0(Var_203, STATE_VARIABLE_IntervalInfo_202_202, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_101 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_IntervalInfo_205_205;
                MR_Word Var_207;
                MR_Word STATE_VARIABLE_IntervalInfo_208_208;
                MR_Word Var_210;
                MR_Word ArgVars_271 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 2))));
                MR_Word ArgModes_272 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 3))));
                MR_Word IntParams_273 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
                MR_Word ModuleInfo_274 = ((MR_Word) ((MR_hl_field(0, IntParams_273, (MR_Integer) 0))));
                MR_Word VarTable_275 = ((MR_Word) ((MR_hl_field(0, IntParams_273, (MR_Integer) 1))));
                MR_Word CellVar_276 = ((MR_Word) ((MR_hl_field(1, Unification_90, (MR_Integer) 0))));

                succeeded = backend_libs__interval__shared_left_to_right_deconstruct_4_p_0(ModuleInfo_274, VarTable_275, ArgVars_271, ArgModes_272);
                if (succeeded)
                  backend_libs__interval__use_cell_8_p_0(TypeClassInfo_for_build_interval_info_acc_353, CellVar_276, ArgVars_271, ConsId_101, HeadVar__1_1, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_205_205, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
                else
                {
                  STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
                  STATE_VARIABLE_IntervalInfo_205_205 = STATE_VARIABLE_IntervalInfo_0_113;
                }
                {
                  Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_207, 0) = ((MR_Box) (CellVar_276));
                  MR_hl_field(1, Var_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_in_regs_3_p_0(Var_207, STATE_VARIABLE_IntervalInfo_205_205, &STATE_VARIABLE_IntervalInfo_208_208);
                {
                  Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_210, 0) = ((MR_Box) (CellVar_276));
                  MR_hl_field(1, Var_210, 1) = ((MR_Box) (ArgVars_271));
                }
                backend_libs__interval__require_access_3_p_0(Var_210, STATE_VARIABLE_IntervalInfo_208_208, &STATE_VARIABLE_IntervalInfo_114);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ToVar_105 = ((MR_Word) ((MR_hl_field(2, Unification_90, (MR_Integer) 0))));
                MR_Word FromVar_106 = ((MR_Word) ((MR_hl_field(2, Unification_90, (MR_Integer) 1))));
                MR_Word Var_212;
                MR_Word STATE_VARIABLE_IntervalInfo_213_213;
                MR_Word Var_215;
                MR_Word Var_217;

                {
                  Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_212, 0) = ((MR_Box) (FromVar_106));
                  MR_hl_field(1, Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_in_regs_3_p_0(Var_212, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_213_213);
                {
                  Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_217, 0) = ((MR_Box) (ToVar_105));
                  MR_hl_field(1, Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_215, 0) = ((MR_Box) (FromVar_106));
                  MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_217));
                }
                backend_libs__interval__require_access_3_p_0(Var_215, STATE_VARIABLE_IntervalInfo_213_213, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_90, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var1_107 = ((MR_Word) ((MR_hl_field(3, Unification_90, (MR_Integer) 1))));
                    MR_Word Var2_108 = ((MR_Word) ((MR_hl_field(3, Unification_90, (MR_Integer) 2))));
                    MR_Word Var_219;
                    MR_Word STATE_VARIABLE_IntervalInfo_220_220;
                    MR_Word Var_221;

                    {
                      Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_221, 0) = ((MR_Box) (Var2_108));
                      MR_hl_field(1, Var_221, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_219, 0) = ((MR_Box) (Var1_107));
                      MR_hl_field(1, Var_219, 1) = ((MR_Box) (Var_221));
                    }
                    backend_libs__interval__require_in_regs_3_p_0(Var_219, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_220_220);
                    backend_libs__interval__require_access_3_p_0(Var_219, STATE_VARIABLE_IntervalInfo_220_220, &STATE_VARIABLE_IntervalInfo_114);
                    STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
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
          MR_Word PredId_66 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));
          MR_Integer ProcId_67 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Builtin_68 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word ProcInfo_72;
          MR_Word ArgVars_252 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 2))));
          MR_Word IntParams_254 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
          MR_Word ModuleInfo_255 = ((MR_Word) ((MR_hl_field(0, IntParams_254, (MR_Integer) 0))));
          MR_Word VarTable_256;
          MR_Word InputArgs_257;
          MR_Word Inputs_258;
          MR_Word _PredInfo_71;
          MR_Word Var_73;
          MR_Word Var_74;

          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_255, PredId_66, ProcId_67, &_PredInfo_71, &ProcInfo_72);
          VarTable_256 = ((MR_Word) ((MR_hl_field(0, IntParams_254, (MR_Integer) 1))));
          hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_255, ProcInfo_72, VarTable_256, ArgVars_252, &InputArgs_257, &Var_73, &Var_74);
          mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgs_257, &Inputs_258);
          switch (Builtin_68) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_IntervalInfo_188_188;

                backend_libs__interval__require_in_regs_3_p_0(Inputs_258, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_188_188);
                backend_libs__interval__require_access_3_p_0(Inputs_258, STATE_VARIABLE_IntervalInfo_188_188, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeNeedAcrossCall_250;

                hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_250);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_258, MaybeNeedAcrossCall_250, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word ArgVars_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word ArgModes_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word MaybeArgRegs_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word MaybeNeedAcrossCall_38;
              MR_Word IntParams_39;
              MR_Word ModuleInfo_40;
              MR_Word VarTable_41;
              MR_Word ArgRegTypes_42;
              MR_Word InputArgsR_43;
              MR_Word InputArgsF_44;
              MR_Word InputArgs_47;
              MR_Word _OutputArgsR_45;
              MR_Word _OutputArgsF_46;

              hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_38);
              IntParams_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
              ModuleInfo_40 = ((MR_Word) ((MR_hl_field(0, IntParams_39, (MR_Integer) 0))));
              VarTable_41 = ((MR_Word) ((MR_hl_field(0, IntParams_39, (MR_Integer) 1))));
              hlds__arg_info__generic_call_arg_reg_types_5_p_0(ModuleInfo_40, GenericCall_33, ArgVars_34, MaybeArgRegs_36, &ArgRegTypes_42);
              hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_40, VarTable_41, ArgVars_34, ArgModes_35, ArgRegTypes_42, &InputArgsR_43, &InputArgsF_44, &_OutputArgsR_45, &_OutputArgsF_46);
              InputArgs_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_43, InputArgsF_44);
              switch (MR_tag((MR_Word) GenericCall_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word Globals_59;
                    MR_Word GenericVarsArgInfos_61;
                    MR_Word GenericVars_64;
                    MR_Word Inputs_65;
                    MR_Integer Var_184;
                    MR_Integer Var_185;
                    MR_Word Var_60;
                    MR_Integer Var_62;
                    MR_Word Var_63;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_40, &Globals_59);
                    Var_184 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_43);
                    Var_185 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsF_44);
                    ll_backend__call_gen__generic_call_info_8_p_0(Globals_59, GenericCall_33, Var_184, Var_185, &Var_60, &GenericVarsArgInfos_61, &Var_62, &Var_63);
                    mercury__assoc_list__keys_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), GenericVarsArgInfos_61, &GenericVars_64);
                    Inputs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), GenericVars_64, InputArgs_47);
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_65, MaybeNeedAcrossCall_38, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word STATE_VARIABLE_IntervalInfo_182_182;

                    backend_libs__interval__require_in_regs_3_p_0(InputArgs_47, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_182_182);
                    backend_libs__interval__require_access_3_p_0(InputArgs_47, STATE_VARIABLE_IntervalInfo_182_182, &STATE_VARIABLE_IntervalInfo_114);
                    STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 5))));
              MR_Word ExtraVars_80;
              MR_Word InputArgVarSet_81;
              MR_Word InputArgVars_84;
              MR_Word InputVars_85;
              MR_Word ArgVars_261;
              MR_Word IntParams_263 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_113, (MR_Integer) 0))));
              MR_Word ModuleInfo_264 = ((MR_Word) ((MR_hl_field(0, IntParams_263, (MR_Integer) 0))));
              MR_Word VarTable_265;
              MR_Word PredId_266 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Integer ProcId_267 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word ProcInfo_269;
              MR_Word _PredInfo_259;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word MaybeNeedAcrossCall_260;

              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_264, PredId_266, ProcId_267, &_PredInfo_259, &ProcInfo_269);
              VarTable_265 = ((MR_Word) ((MR_hl_field(0, IntParams_263, (MR_Integer) 1))));
              ArgVars_261 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[11]), Args_76);
              ExtraVars_80 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[12]), ExtraArgs_77);
              hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_264, ProcInfo_269, VarTable_265, ArgVars_261, &InputArgVarSet_81, &Var_82, &Var_83);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVarSet_81, &InputArgVars_84);
              mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVars_84, ExtraVars_80, &InputVars_85);
              succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_260);
              if (succeeded)
              {
                succeeded = (MaybeNeedAcrossCall_260 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
              if (succeeded)
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(InputVars_85, MaybeNeedAcrossCall_260, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_116);
              else
              {
                MR_Word STATE_VARIABLE_IntervalInfo_196_196;

                backend_libs__interval__require_in_regs_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_196_196);
                backend_libs__interval__require_access_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_196_196, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25 = TypeClassInfo_for_build_interval_info_acc_353;
              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__1_1 = Goals_11;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = STATE_VARIABLE_IntervalInfo_0_113;
              MR_Box next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_0_115;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25;
              tscc_proc_2_input_2_HeadVar__1_1 = next_value_of_tscc_proc_2_input_2_HeadVar__1_1;
              tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
              tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_231 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              if ((Goals_231 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                backend_libs__interval__no_open_intervals_2_p_0(STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              else
              {
                MR_Word FirstDisjunct_12 = ((MR_Word) ((MR_hl_field(1, Goals_231, (MR_Integer) 0))));
                MR_Word StartAnchor_14;
                MR_Word EndAnchor_15;
                MR_Word BeforeId_16;
                MR_Word AfterId_17;
                MR_Word MaybeResumeVars_18;
                MR_Word OpenIntervals_19;
                MR_Word Var_119;
                MR_Word STATE_VARIABLE_IntervalInfo_121_121;
                MR_Box STATE_VARIABLE_Acc_122_122;
                MR_Word STATE_VARIABLE_IntervalInfo_124_124;

                {
                  Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_119, 0) = ((MR_Box) (FirstDisjunct_12));
                }
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_119, (MR_Integer) 1, &StartAnchor_14, &EndAnchor_15, &BeforeId_16, &AfterId_17, &MaybeResumeVars_18, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_121_121, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_122_122);
                backend_libs__interval__build_interval_info_in_disj_11_p_0(TypeClassInfo_for_build_interval_info_acc_353, Goals_231, (MR_Integer) 1, StartAnchor_14, EndAnchor_15, BeforeId_16, AfterId_17, &OpenIntervals_19, STATE_VARIABLE_IntervalInfo_121_121, &STATE_VARIABLE_IntervalInfo_124_124, STATE_VARIABLE_Acc_122_122, &STATE_VARIABLE_Acc_116);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_14, BeforeId_16, MaybeResumeVars_18, OpenIntervals_19, STATE_VARIABLE_IntervalInfo_124_124, &STATE_VARIABLE_IntervalInfo_114);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word OpenIntervalsList_23;
              MR_Word STATE_VARIABLE_IntervalInfo_131_131;
              MR_Box STATE_VARIABLE_Acc_132_132;
              MR_Word STATE_VARIABLE_IntervalInfo_133_133;
              MR_Word STATE_VARIABLE_IntervalInfo_136_136;
              MR_Word Var_137;
              MR_Word STATE_VARIABLE_IntervalInfo_138_138;
              MR_Word StartAnchor_232;
              MR_Word EndAnchor_233;
              MR_Word BeforeId_234;
              MR_Word AfterId_235;
              MR_Word MaybeResumeVars_236;
              MR_Word OpenIntervals_237;

              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, &StartAnchor_232, &EndAnchor_233, &BeforeId_234, &AfterId_235, &MaybeResumeVars_236, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_131_131, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_132_132);
              backend_libs__interval__build_interval_info_in_cases_10_p_0(TypeClassInfo_for_build_interval_info_acc_353, Cases_22, StartAnchor_232, EndAnchor_233, BeforeId_234, AfterId_235, &OpenIntervalsList_23, STATE_VARIABLE_IntervalInfo_131_131, &STATE_VARIABLE_IntervalInfo_133_133, STATE_VARIABLE_Acc_132_132, &STATE_VARIABLE_Acc_116);
              OpenIntervals_237 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), OpenIntervalsList_23);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_232, BeforeId_234, MaybeResumeVars_236, OpenIntervals_237, STATE_VARIABLE_IntervalInfo_133_133, &STATE_VARIABLE_IntervalInfo_136_136);
              {
                Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_20));
                MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              backend_libs__interval__require_in_regs_3_p_0(Var_137, STATE_VARIABLE_IntervalInfo_136_136, &STATE_VARIABLE_IntervalInfo_138_138);
              backend_libs__interval__require_access_3_p_0(Var_137, STATE_VARIABLE_IntervalInfo_138_138, &STATE_VARIABLE_IntervalInfo_114);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_249 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word TermVar_32;
              MR_Word Var_176;

              succeeded = ((((MR_tag((MR_Word) Reason_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_31, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_32 = ((MR_Word) ((MR_hl_field(3, Reason_31, (MR_Integer) 1))));
                Var_176 = ((MR_Unsigned) ((MR_hl_field(3, Reason_31, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_176 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_Word Var_177;

                {
                  Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_177, 0) = ((MR_Box) (TermVar_32));
                  MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_access_3_p_0(Var_177, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_114);
                STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_0_115;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = TypeClassInfo_for_build_interval_info_acc_353;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = SubGoal_249;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = STATE_VARIABLE_IntervalInfo_0_113;
                MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = STATE_VARIABLE_Acc_0_115;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
                tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
                tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word CondOpenIntervals_29;
              MR_Word Var_155;
              MR_Word STATE_VARIABLE_IntervalInfo_157_157;
              MR_Box STATE_VARIABLE_Acc_158_158;
              MR_Word STATE_VARIABLE_IntervalInfo_159_159;
              MR_Word STATE_VARIABLE_IntervalInfo_160_160;
              MR_Box STATE_VARIABLE_Acc_161_161;
              MR_Word STATE_VARIABLE_IntervalInfo_162_162;
              MR_Word STATE_VARIABLE_IntervalInfo_163_163;
              MR_Box STATE_VARIABLE_Acc_164_164;
              MR_Word STATE_VARIABLE_IntervalInfo_166_166;
              MR_Box STATE_VARIABLE_Acc_167_167;
              MR_Word STATE_VARIABLE_IntervalInfo_168_168;
              MR_Word STATE_VARIABLE_IntervalInfo_169_169;
              MR_Box STATE_VARIABLE_Acc_170_170;
              MR_Word STATE_VARIABLE_IntervalInfo_172_172;
              MR_Word StartAnchor_244;
              MR_Word EndAnchor_245;
              MR_Word BeforeId_246;
              MR_Word AfterId_247;
              MR_Word MaybeResumeVars_248;
              MR_Word _ElseOpenIntervals_30;

              {
                Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_155, 0) = ((MR_Box) (Cond_26));
              }
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_155, (MR_Integer) 0, &StartAnchor_244, &EndAnchor_245, &BeforeId_246, &AfterId_247, &MaybeResumeVars_248, STATE_VARIABLE_IntervalInfo_0_113, &STATE_VARIABLE_IntervalInfo_157_157, STATE_VARIABLE_Acc_0_115, &STATE_VARIABLE_Acc_158_158);
              backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_245, AfterId_247, STATE_VARIABLE_IntervalInfo_157_157, &STATE_VARIABLE_IntervalInfo_159_159);
              backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, Then_27, STATE_VARIABLE_IntervalInfo_159_159, &STATE_VARIABLE_IntervalInfo_160_160, STATE_VARIABLE_Acc_158_158, &STATE_VARIABLE_Acc_161_161);
              backend_libs__interval__reached_cond_then_3_p_0(GoalInfo_7, STATE_VARIABLE_IntervalInfo_160_160, &STATE_VARIABLE_IntervalInfo_162_162);
              backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, Cond_26, STATE_VARIABLE_IntervalInfo_162_162, &STATE_VARIABLE_IntervalInfo_163_163, STATE_VARIABLE_Acc_161_161, &STATE_VARIABLE_Acc_164_164);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, StartAnchor_244, BeforeId_246, &CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_163_163, &STATE_VARIABLE_IntervalInfo_166_166, STATE_VARIABLE_Acc_164_164, &STATE_VARIABLE_Acc_167_167);
              backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_245, AfterId_247, STATE_VARIABLE_IntervalInfo_166_166, &STATE_VARIABLE_IntervalInfo_168_168);
              backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_353, Else_28, STATE_VARIABLE_IntervalInfo_168_168, &STATE_VARIABLE_IntervalInfo_169_169, STATE_VARIABLE_Acc_167_167, &STATE_VARIABLE_Acc_170_170);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_244, BeforeId_246, &_ElseOpenIntervals_30, STATE_VARIABLE_IntervalInfo_169_169, &STATE_VARIABLE_IntervalInfo_172_172, STATE_VARIABLE_Acc_170_170, &STATE_VARIABLE_Acc_116);
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_244, BeforeId_246, MaybeResumeVars_248, CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_172_172, &STATE_VARIABLE_IntervalInfo_114);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_IntervalInfo_114 = STATE_VARIABLE_IntervalInfo_114;
    tscc_output_2_STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_116;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_build_interval_info_acc_25 = tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_25;
    MR_Word HeadVar__1_1 = tscc_proc_2_input_2_HeadVar__1_1;
    MR_Word STATE_VARIABLE_IntervalInfo_0_3 = tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
    MR_Word STATE_VARIABLE_IntervalInfo_4;
    MR_Box STATE_VARIABLE_Acc_0_5 = tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
    MR_Box STATE_VARIABLE_Acc_6;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      STATE_VARIABLE_Acc_6 = STATE_VARIABLE_Acc_0_5;
      STATE_VARIABLE_IntervalInfo_4 = STATE_VARIABLE_IntervalInfo_0_3;
    }
    else
    {
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IntervalInfo_23_23;
      MR_Box STATE_VARIABLE_Acc_24_24;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
      MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;

      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(TypeClassInfo_for_build_interval_info_acc_25, Goals_15, STATE_VARIABLE_IntervalInfo_0_3, &STATE_VARIABLE_IntervalInfo_23_23, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = TypeClassInfo_for_build_interval_info_acc_25;
      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Goal_14;
      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = STATE_VARIABLE_IntervalInfo_23_23;
      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = STATE_VARIABLE_Acc_24_24;
      tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_353;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_113;
      tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_115;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_IntervalInfo_114 = STATE_VARIABLE_IntervalInfo_4;
    tscc_output_2_STATE_VARIABLE_Acc_116 = STATE_VARIABLE_Acc_6;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_114 = tscc_output_1_STATE_VARIABLE_IntervalInfo_114;
  *tscc_output_ptr_2_STATE_VARIABLE_Acc_116 = tscc_output_2_STATE_VARIABLE_Acc_116;
  return;
}

static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_44,
  MR_Word HeadVar__1_1,
  MR_Word StartAnchor_2,
  MR_Word EndAnchor_3,
  MR_Word BeforeId_4,
  MR_Word AfterId_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_7,
  MR_Word * STATE_VARIABLE_IntervalInfo_8,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Acc_10 = STATE_VARIABLE_Acc_0_9;
    *STATE_VARIABLE_IntervalInfo_8 = STATE_VARIABLE_IntervalInfo_0_7;
  }
  else
  {
    MR_Word Case_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word OpenIntervals_27;
    MR_Word OpenIntervalsList_28;
    MR_Word Goal_33 = ((MR_Word) ((MR_hl_field(0, Case_21, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_IntervalInfo_38_38;
    MR_Word STATE_VARIABLE_IntervalInfo_39_39;
    MR_Box STATE_VARIABLE_Acc_40_40;
    MR_Word STATE_VARIABLE_IntervalInfo_42_42;
    MR_Box STATE_VARIABLE_Acc_43_43;

    backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_3, AfterId_5, STATE_VARIABLE_IntervalInfo_0_7, &STATE_VARIABLE_IntervalInfo_38_38);
    backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_44, Goal_33, STATE_VARIABLE_IntervalInfo_38_38, &STATE_VARIABLE_IntervalInfo_39_39, STATE_VARIABLE_Acc_0_9, &STATE_VARIABLE_Acc_40_40);
    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, StartAnchor_2, BeforeId_4, &OpenIntervals_27, STATE_VARIABLE_IntervalInfo_39_39, &STATE_VARIABLE_IntervalInfo_42_42, STATE_VARIABLE_Acc_40_40, &STATE_VARIABLE_Acc_43_43);
    backend_libs__interval__build_interval_info_in_cases_10_p_0(TypeClassInfo_for_build_interval_info_acc_44, Cases_22, StartAnchor_2, EndAnchor_3, BeforeId_4, AfterId_5, &OpenIntervalsList_28, STATE_VARIABLE_IntervalInfo_42_42, STATE_VARIABLE_IntervalInfo_8, STATE_VARIABLE_Acc_43_43, STATE_VARIABLE_Acc_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OpenIntervals_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (OpenIntervalsList_28));
    }
  }
}

static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_44,
  MR_Word HeadVar__1_1,
  MR_Word MaybeNeedsFlush_2,
  MR_Word StartAnchor_3,
  MR_Word EndAnchor_4,
  MR_Word BeforeId_5,
  MR_Word AfterId_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9,
  MR_Box STATE_VARIABLE_Acc_0_10,
  MR_Box * STATE_VARIABLE_Acc_11)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
    *STATE_VARIABLE_Acc_11 = STATE_VARIABLE_Acc_0_10;
    *STATE_VARIABLE_IntervalInfo_9 = STATE_VARIABLE_IntervalInfo_0_8;
  }
  else
  {
    MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_IntervalInfo_38_38;
    MR_Word STATE_VARIABLE_IntervalInfo_39_39;
    MR_Box STATE_VARIABLE_Acc_40_40;
    MR_Word STATE_VARIABLE_IntervalInfo_41_41;
    MR_Box STATE_VARIABLE_Acc_42_42;
    MR_Word _OpenIntervals_33;

    backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_4, AfterId_6, STATE_VARIABLE_IntervalInfo_0_8, &STATE_VARIABLE_IntervalInfo_38_38);
    backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_44, Goal_23, STATE_VARIABLE_IntervalInfo_38_38, &STATE_VARIABLE_IntervalInfo_39_39, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_40_40);
    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(MaybeNeedsFlush_2, StartAnchor_3, BeforeId_5, HeadVar__7_7, STATE_VARIABLE_IntervalInfo_39_39, &STATE_VARIABLE_IntervalInfo_41_41, STATE_VARIABLE_Acc_40_40, &STATE_VARIABLE_Acc_42_42);
    backend_libs__interval__build_interval_info_in_disj_11_p_0(TypeClassInfo_for_build_interval_info_acc_44, Goals_24, (MR_Integer) 0, StartAnchor_3, EndAnchor_4, BeforeId_5, AfterId_6, &_OpenIntervals_33, STATE_VARIABLE_IntervalInfo_41_41, STATE_VARIABLE_IntervalInfo_9, STATE_VARIABLE_Acc_42_42, STATE_VARIABLE_Acc_11);
  }
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word StartArchor_9,
  MR_Word BeforeId_10,
  MR_Word MaybeResumeVars_11,
  MR_Word OpenIntervals_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_15,
  MR_Word * STATE_VARIABLE_IntervalInfo_16)
{
  MR_Word STATE_VARIABLE_IntervalInfo_17_17;
  MR_Word STATE_VARIABLE_IntervalInfo_18_18;
  MR_Word STATE_VARIABLE_IntervalInfo_19_19;
  MR_Word EndMap0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12))));
  MR_Word EndMap_21;
  MR_Word Var_38;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;

  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (BeforeId_10)), ((MR_Box) (StartArchor_9)), EndMap0_20, &EndMap_21);
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 0) = ((MR_Box) (Var_37));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 1) = ((MR_Box) (Var_38));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 2) = ((MR_Box) (Var_39));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 3) = ((MR_Box) (Var_40));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 4) = ((MR_Box) (Var_41));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 5) = ((MR_Box) (Var_42));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 6) = ((MR_Box) (Var_43));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 7) = ((MR_Box) (Var_44));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 8) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 9) = ((MR_Box) (Var_46));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 10) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 11) = ((MR_Box) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 12) = ((MR_Box) (EndMap_21));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 13) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 14) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, 15) = ((MR_Box) (Var_52));
  }
  if ((MaybeResumeVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_IntervalInfo_18_18 = STATE_VARIABLE_IntervalInfo_17_17;
  else
  {
    MR_Word ResumeVars_14 = ((MR_Word) ((MR_hl_field(1, MaybeResumeVars_11, (MR_Integer) 0))));
    MR_Word FlushedLater_56;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;

    FlushedLater_56 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_38, ResumeVars_14);
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 0))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 2))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 3))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 4))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 5))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 6))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 7))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 8))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 9))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 10))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 11))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 12))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 13))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 14))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_17_17, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 0) = ((MR_Box) (Var_72));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 1) = ((MR_Box) (FlushedLater_56));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 2) = ((MR_Box) (Var_74));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 3) = ((MR_Box) (Var_75));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 4) = ((MR_Box) (Var_76));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 5) = ((MR_Box) (Var_77));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 6) = ((MR_Box) (Var_78));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 7) = ((MR_Box) (Var_79));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 8) = ((MR_Box) (Var_80));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 9) = ((MR_Box) (Var_81));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 10) = ((MR_Box) (Var_82));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 11) = ((MR_Box) (Var_83));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 12) = ((MR_Box) (Var_84));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 13) = ((MR_Box) (Var_85));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 14) = ((MR_Box) (Var_86));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, 15) = ((MR_Box) (Var_87));
    }
  }
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 0))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 1))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 2))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 3))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 4))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 5))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 7))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 8))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 9))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 10))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 11))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 12))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 13))));
  Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 14))));
  Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 0) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 1) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 2) = ((MR_Box) (Var_91));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 3) = ((MR_Box) (Var_92));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 4) = ((MR_Box) (Var_93));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 5) = ((MR_Box) (Var_94));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 6) = ((MR_Box) (BeforeId_10));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 7) = ((MR_Box) (Var_96));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 8) = ((MR_Box) (Var_97));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 9) = ((MR_Box) (Var_98));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 10) = ((MR_Box) (Var_99));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 11) = ((MR_Box) (Var_100));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 12) = ((MR_Box) (Var_101));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 13) = ((MR_Box) (Var_102));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 14) = ((MR_Box) (Var_103));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, 15) = ((MR_Box) (Var_104));
  }
  backend_libs__interval__set_open_intervals_3_p_0(OpenIntervals_12, STATE_VARIABLE_IntervalInfo_19_19, STATE_VARIABLE_IntervalInfo_16);
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
  MR_Word GoalInfo_13,
  MR_Word MaybeResumeGoal_14,
  MR_Word Construct_15,
  MR_Word * StartAnchor_16,
  MR_Word * EndAnchor_17,
  MR_Word * BeforeIntervalId_18,
  MR_Word * AfterIntervalId_19,
  MR_Word * MaybeResumeVars_20,
  MR_Word STATE_VARIABLE_IntervalInfo_0_34,
  MR_Word * STATE_VARIABLE_IntervalInfo_35,
  MR_Box STATE_VARIABLE_Acc_0_36,
  MR_Box * STATE_VARIABLE_Acc_37)
{
  MR_bool succeeded;
  MR_Word GoalId_23;
  MR_Word HasResumeSave_29;
  MR_Word CodeModel_33;
  MR_Word STATE_VARIABLE_IntervalInfo_38_38;
  MR_Word STATE_VARIABLE_IntervalInfo_40_40;
  MR_Word STATE_VARIABLE_IntervalInfo_41_41;
  MR_Word STATE_VARIABLE_IntervalInfo_44_44;
  MR_Word STATE_VARIABLE_IntervalInfo_45_45;
  MR_Word STATE_VARIABLE_IntervalInfo_46_46;
  MR_Word STATE_VARIABLE_IntervalInfo_47_47;
  MR_Word BranchResumeMap0_52;
  MR_Word BranchResumeMap_53;
  MR_Word Var_87;
  MR_Word ResumeVars_27;
  MR_Word ResumeGoalInfo_25;
  MR_Word ResumePoint_26;
  MR_Word ResumeLocs_28;
  MR_Word Var_39;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word StoreMap_30;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;

  GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_13);
  backend_libs__interval__record_branch_end_3_p_0(GoalId_23, STATE_VARIABLE_IntervalInfo_0_34, &STATE_VARIABLE_IntervalInfo_38_38);
  succeeded = (MaybeResumeGoal_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_39 = ((MR_Word) ((MR_hl_field(1, MaybeResumeGoal_14, (MR_Integer) 0))));
    ResumeGoalInfo_25 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
    succeeded = hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(ResumeGoalInfo_25, &ResumePoint_26);
    if (succeeded)
    {
      succeeded = (ResumePoint_26 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ResumeVars_27 = ((MR_Word) ((MR_hl_field(1, ResumePoint_26, (MR_Integer) 0))));
        ResumeLocs_28 = ((MR_Unsigned) ((MR_hl_field(1, ResumePoint_26, (MR_Integer) 1))) & (MR_Integer) 3);
        succeeded = (ResumeLocs_28 != (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
  {
    HasResumeSave_29 = (MR_Integer) 0;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeResumeVars_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ResumeVars_27));
    }
  }
  else
  {
    HasResumeSave_29 = (MR_Integer) 1;
    *MaybeResumeVars_20 = (MR_Word) ((MR_Unsigned) 0U);
  }
  BranchResumeMap0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3))));
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0), ((MR_Box) (GoalId_23)), ((MR_Box) (HasResumeSave_29)), BranchResumeMap0_52, &BranchResumeMap_53);
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 1) = ((MR_Box) (Var_70));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 2) = ((MR_Box) (Var_71));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 3) = ((MR_Box) (BranchResumeMap_53));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 4) = ((MR_Box) (Var_73));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 5) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 6) = ((MR_Box) (Var_75));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 7) = ((MR_Box) (Var_76));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 8) = ((MR_Box) (Var_77));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 9) = ((MR_Box) (Var_78));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 10) = ((MR_Box) (Var_79));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 11) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 12) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 13) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 14) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 15) = ((MR_Box) (Var_84));
  }
  succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(GoalInfo_13, &StoreMap_30);
  if (succeeded)
  {
    MR_Word StoreMapVarList_31;
    MR_Word StoreMapVars_32;

    mercury__map__sorted_keys_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), StoreMap_30, &StoreMapVarList_31);
    StoreMapVars_32 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StoreMapVarList_31);
    backend_libs__interval__require_flushed_3_p_0(StoreMapVars_32, STATE_VARIABLE_IntervalInfo_40_40, &STATE_VARIABLE_IntervalInfo_41_41);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.reached_branch_end\'/12", (MR_String) "no store map");
      return;
    }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *EndAnchor_17 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Construct_15));
    MR_hl_field(3, base, 2) = ((MR_Box) (GoalId_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *StartAnchor_16 = base;
    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Construct_15));
    MR_hl_field(1, base, 1) = ((MR_Box) (GoalId_23));
  }
  backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(*EndAnchor_17, STATE_VARIABLE_IntervalInfo_41_41, &STATE_VARIABLE_IntervalInfo_44_44);
  CodeModel_33 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_13);
  switch (CodeModel_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_IntervalInfo_45_45 = STATE_VARIABLE_IntervalInfo_44_44;
      break;
    case (MR_Integer) 2:
      backend_libs__interval__record_model_non_anchor_3_p_0(*EndAnchor_17, STATE_VARIABLE_IntervalInfo_44_44, &STATE_VARIABLE_IntervalInfo_45_45);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_IntervalInfo_45_45 = STATE_VARIABLE_IntervalInfo_44_44;
      break;
  }
  Var_87 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 0))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 1))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 2))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 3))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 4))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 5))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 6))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 7))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 9))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 10))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 11))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 12))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 13))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 14))));
  Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_45_45, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_46_46 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 0) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 1) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 2) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 3) = ((MR_Box) (Var_91));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 4) = ((MR_Box) (Var_92));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 5) = ((MR_Box) (Var_93));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 6) = ((MR_Box) (Var_94));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 7) = ((MR_Box) (Var_95));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 8) = ((MR_Box) (Var_87));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 9) = ((MR_Box) (Var_97));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 10) = ((MR_Box) (Var_98));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 11) = ((MR_Box) (Var_99));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 12) = ((MR_Box) (Var_100));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 13) = ((MR_Box) (Var_101));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 14) = ((MR_Box) (Var_102));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_46_46, 15) = ((MR_Box) (Var_103));
  }
  backend_libs__interval__get_cur_interval_2_p_0(AfterIntervalId_19, STATE_VARIABLE_IntervalInfo_46_46);
  backend_libs__interval__record_interval_start_4_p_0(*AfterIntervalId_19, *EndAnchor_17, STATE_VARIABLE_IntervalInfo_46_46, &STATE_VARIABLE_IntervalInfo_47_47);
  backend_libs__interval__new_interval_id_3_p_0(BeforeIntervalId_18, STATE_VARIABLE_IntervalInfo_47_47, STATE_VARIABLE_IntervalInfo_35);
  *STATE_VARIABLE_Acc_37 = STATE_VARIABLE_Acc_0_36;
}

static void MR_CALL 
backend_libs__interval__record_branch_end_3_p_0(
  MR_Word GoalId_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13)
{
  MR_Word FlushedLater_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
  MR_Word AccessedLater_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
  MR_Word CurInterval_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
  MR_Word BranchEndMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4))));
  MR_Word IntervalBranchEnd_10;
  MR_Word BranchEndMap_11;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;

  {
    IntervalBranchEnd_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntervalBranchEnd_10, 0) = ((MR_Box) (FlushedLater_6));
    MR_hl_field(0, IntervalBranchEnd_10, 1) = ((MR_Box) (AccessedLater_7));
    MR_hl_field(0, IntervalBranchEnd_10, 2) = ((MR_Box) (CurInterval_8));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_branch_end_0), ((MR_Box) (GoalId_4)), ((MR_Box) (IntervalBranchEnd_10)), BranchEndMap0_9, &BranchEndMap_11);
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 4) = ((MR_Box) (BranchEndMap_11));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_89));
  }
}

static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word IntervalInfo_3)
{
  *HeadVar__1_1 = ((MR_Word) ((MR_hl_field(0, IntervalInfo_3, (MR_Integer) 6))));
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word Inputs_8,
  MR_Word MaybeNeedAcrossCall_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_IntervalInfo_0_26,
  MR_Word * STATE_VARIABLE_IntervalInfo_27,
  MR_Box STATE_VARIABLE_Acc_0_28,
  MR_Box * STATE_VARIABLE_Acc_29)
{
  MR_bool succeeded;

  if ((MaybeNeedAcrossCall_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_at_call\'/7", (MR_String) "no need across call");
      return;
    }
  else
  {
    MR_Word NeedAcrossCall_13 = ((MR_Word) ((MR_hl_field(1, MaybeNeedAcrossCall_9, (MR_Integer) 0))));
    MR_Word ForwardVars_14 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_13, (MR_Integer) 0))));
    MR_Word ResumeVars_15 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_13, (MR_Integer) 1))));
    MR_Word NondetLiveVars_16 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_13, (MR_Integer) 2))));
    MR_Word VarsOnStack0_17;
    MR_Word GoalId_18;
    MR_Word CallAnchor_19;
    MR_Word AfterCallId_20;
    MR_Word BeforeCallId_21;
    MR_Word InstMapDelta_22;
    MR_Word IntParams_23;
    MR_Word VarsOnStack_24;
    MR_Word CodeModel_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_IntervalInfo_34_34;
    MR_Word STATE_VARIABLE_IntervalInfo_35_35;
    MR_Word STATE_VARIABLE_IntervalInfo_36_36;
    MR_Word STATE_VARIABLE_IntervalInfo_38_38;
    MR_Word STATE_VARIABLE_IntervalInfo_40_40;
    MR_Word STATE_VARIABLE_IntervalInfo_41_41;
    MR_Word STATE_VARIABLE_IntervalInfo_42_42;
    MR_Word STATE_VARIABLE_IntervalInfo_43_43;
    MR_Word STATE_VARIABLE_IntervalInfo_44_44;
    MR_Word STATE_VARIABLE_IntervalInfo_45_45;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;

    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (NondetLiveVars_16));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (ResumeVars_15));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (ForwardVars_14));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
    }
    VarsOnStack0_17 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_30);
    GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
    {
      CallAnchor_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CallAnchor_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, CallAnchor_19, 1) = ((MR_Box) (GoalId_18));
    }
    AfterCallId_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 6))));
    backend_libs__interval__new_interval_id_3_p_0(&BeforeCallId_21, STATE_VARIABLE_IntervalInfo_0_26, &STATE_VARIABLE_IntervalInfo_34_34);
    backend_libs__interval__record_interval_start_4_p_0(AfterCallId_20, CallAnchor_19, STATE_VARIABLE_IntervalInfo_34_34, &STATE_VARIABLE_IntervalInfo_35_35);
    backend_libs__interval__record_interval_end_4_p_0(BeforeCallId_21, CallAnchor_19, STATE_VARIABLE_IntervalInfo_35_35, &STATE_VARIABLE_IntervalInfo_36_36);
    InstMapDelta_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
    IntParams_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_36_36, (MR_Integer) 0))));
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_22);
    if (!(succeeded))
    {
      MR_Word Var_37 = ((MR_Unsigned) ((MR_hl_field(0, IntParams_23, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = (Var_37 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      backend_libs__interval__record_interval_succ_4_p_0(BeforeCallId_21, AfterCallId_20, STATE_VARIABLE_IntervalInfo_36_36, &STATE_VARIABLE_IntervalInfo_38_38);
      VarsOnStack_24 = VarsOnStack0_17;
    }
    else
    {
      backend_libs__interval__record_interval_no_succ_3_p_0(BeforeCallId_21, STATE_VARIABLE_IntervalInfo_36_36, &STATE_VARIABLE_IntervalInfo_38_38);
      VarsOnStack_24 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    }
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 1) = ((MR_Box) (Var_84));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 2) = ((MR_Box) (Var_85));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 3) = ((MR_Box) (Var_86));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 4) = ((MR_Box) (Var_87));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 5) = ((MR_Box) (Var_88));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 6) = ((MR_Box) (BeforeCallId_21));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 7) = ((MR_Box) (Var_90));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 8) = ((MR_Box) (Var_91));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 9) = ((MR_Box) (Var_92));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 10) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 11) = ((MR_Box) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 12) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 13) = ((MR_Box) (Var_96));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 14) = ((MR_Box) (Var_97));
      MR_hl_field(0, STATE_VARIABLE_IntervalInfo_40_40, 15) = ((MR_Box) (Var_98));
    }
    backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(CallAnchor_19, STATE_VARIABLE_IntervalInfo_40_40, &STATE_VARIABLE_IntervalInfo_41_41);
    CodeModel_25 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_10);
    switch (CodeModel_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_IntervalInfo_42_42 = STATE_VARIABLE_IntervalInfo_41_41;
        break;
      case (MR_Integer) 2:
        backend_libs__interval__record_model_non_anchor_3_p_0(CallAnchor_19, STATE_VARIABLE_IntervalInfo_41_41, &STATE_VARIABLE_IntervalInfo_42_42);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_IntervalInfo_42_42 = STATE_VARIABLE_IntervalInfo_41_41;
        break;
    }
    backend_libs__interval__one_open_interval_3_p_0(BeforeCallId_21, STATE_VARIABLE_IntervalInfo_42_42, &STATE_VARIABLE_IntervalInfo_43_43);
    backend_libs__interval__require_flushed_3_p_0(VarsOnStack_24, STATE_VARIABLE_IntervalInfo_43_43, &STATE_VARIABLE_IntervalInfo_44_44);
    backend_libs__interval__require_in_regs_3_p_0(Inputs_8, STATE_VARIABLE_IntervalInfo_44_44, &STATE_VARIABLE_IntervalInfo_45_45);
    backend_libs__interval__require_access_3_p_0(Inputs_8, STATE_VARIABLE_IntervalInfo_45_45, STATE_VARIABLE_IntervalInfo_27);
  }
  *STATE_VARIABLE_Acc_29 = STATE_VARIABLE_Acc_0_28;
}

static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9)
{
  MR_Word ModelNonAnchors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10))));
  MR_Word ModelNonAnchors_7;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Anchor_4)), ModelNonAnchors0_6, &ModelNonAnchors_7);
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModelNonAnchors_7));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_40));
  }
}

static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9)
{
  MR_Word FlushedLater0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1))));
  MR_Word FlushedLater_7;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  FlushedLater_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FlushedLater0_6, Vars_4);
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (FlushedLater_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_40));
  }
}

static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
  MR_Word Id_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_9,
  MR_Word * STATE_VARIABLE_IntervalInfo_10)
{
  MR_bool succeeded;
  MR_Word SuccMap0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13))));
  MR_Word SuccMap_8;
  MR_Box conv0__Succ0_7;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), SuccMap0_6, ((MR_Box) (Id_4)), &conv0__Succ0_7);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.record_interval_no_succ\'/3", (MR_String) "already in succ map");
      return;
    }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), ((MR_Box) (Id_4)), ((MR_Box) ((MR_Unsigned) 0U)), SuccMap0_6, &SuccMap_8);
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 13) = ((MR_Box) (SuccMap_8));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_44));
  }
}

void MR_CALL 
backend_libs__interval__use_cell_8_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_build_interval_info_acc_9, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__6_6;

  func_0(((MR_Box) (TypeClassInfo_for_build_interval_info_acc_9)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), ((MR_Box) (HeadVar__5_5)), &conv1_HeadVar__6_6, HeadVar__7_7, HeadVar__8_8);
  *HeadVar__6_6 = ((MR_Word) (conv1_HeadVar__6_6));
}

static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9)
{
  MR_Word AccessedLater0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2))));
  MR_Word AccessedLater_7;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_4, AccessedLater0_6, &AccessedLater_7);
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccessedLater_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_40));
  }
}

static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_7,
  MR_Word * STATE_VARIABLE_IntervalInfo_8)
{
  MR_Word CurIntervalId_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 6))));

  backend_libs__interval__record_interval_vars_4_p_0(CurIntervalId_6, Vars_4, STATE_VARIABLE_IntervalInfo_0_7, STATE_VARIABLE_IntervalInfo_8);
}

void MR_CALL 
backend_libs__interval__record_interval_vars_4_p_0(
  MR_Word Id_5,
  MR_Word NewVars_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13)
{
  MR_bool succeeded;
  MR_Word VarsMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14))));
  MR_Word VarsMap_11;
  MR_Word Vars0_9;
  MR_Box conv0_Vars0_9;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), VarsMap0_8, ((MR_Box) (Id_5)), &conv0_Vars0_9);
  if (succeeded)
  {
    Vars0_9 = ((MR_Word) (conv0_Vars0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Vars_10;

    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewVars_6, Vars0_9, &Vars_10);
    mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (Id_5)), ((MR_Box) (Vars_10)), VarsMap0_8, &VarsMap_11);
  }
  else
  {
    MR_Word Vars_15;

    Vars_15 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewVars_6);
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (Id_5)), ((MR_Box) (Vars_15)), VarsMap0_8, &VarsMap_11);
  }
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 14) = ((MR_Box) (VarsMap_11));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_46));
  }
}

static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
  MR_Word STATE_VARIABLE_IntervalInfo_0_4,
  MR_Word * STATE_VARIABLE_IntervalInfo_5)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  Var_7 = mercury__set__init_0_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0));
  Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 0))));
  Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 1))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 2))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 3))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 4))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 5))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 6))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 7))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 9))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 10))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 11))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 12))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 13))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 14))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
  }
}

static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13)
{
  MR_Word GoalId_6;
  MR_Word ThenStartId_7;
  MR_Word CondThenAnchor_8;
  MR_Word CondTailId_9;
  MR_Word OpenIntervals0_10;
  MR_Word OpenIntervals_11;
  MR_Word STATE_VARIABLE_IntervalInfo_14_14;
  MR_Word STATE_VARIABLE_IntervalInfo_15_15;
  MR_Word STATE_VARIABLE_IntervalInfo_16_16;
  MR_Word STATE_VARIABLE_IntervalInfo_17_17;
  MR_Word STATE_VARIABLE_IntervalInfo_18_18;
  MR_Word STATE_VARIABLE_IntervalInfo_19_19;
  MR_Word CurInterval_21;
  MR_Word CondEndMap0_22;
  MR_Word CondEndMap_23;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;

  GoalId_6 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_4);
  CondEndMap0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5))));
  CurInterval_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (GoalId_6)), ((MR_Box) (CurInterval_21)), CondEndMap0_22, &CondEndMap_23);
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4))));
  ThenStartId_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 1) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 2) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 3) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 4) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 5) = ((MR_Box) (CondEndMap_23));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 6) = ((MR_Box) (ThenStartId_7));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 7) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 8) = ((MR_Box) (Var_62));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 9) = ((MR_Box) (Var_63));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 10) = ((MR_Box) (Var_64));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 11) = ((MR_Box) (Var_65));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 12) = ((MR_Box) (Var_66));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 13) = ((MR_Box) (Var_67));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 14) = ((MR_Box) (Var_68));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 15) = ((MR_Box) (Var_69));
  }
  {
    CondThenAnchor_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, CondThenAnchor_8, 0) = ((MR_Box) (GoalId_6));
  }
  backend_libs__interval__record_interval_start_4_p_0(ThenStartId_7, CondThenAnchor_8, STATE_VARIABLE_IntervalInfo_14_14, &STATE_VARIABLE_IntervalInfo_15_15);
  backend_libs__interval__new_interval_id_3_p_0(&CondTailId_9, STATE_VARIABLE_IntervalInfo_15_15, &STATE_VARIABLE_IntervalInfo_16_16);
  backend_libs__interval__record_interval_end_4_p_0(CondTailId_9, CondThenAnchor_8, STATE_VARIABLE_IntervalInfo_16_16, &STATE_VARIABLE_IntervalInfo_17_17);
  backend_libs__interval__record_interval_succ_4_p_0(CondTailId_9, ThenStartId_7, STATE_VARIABLE_IntervalInfo_17_17, &STATE_VARIABLE_IntervalInfo_18_18);
  backend_libs__interval__set_cur_interval_3_p_0(CondTailId_9, STATE_VARIABLE_IntervalInfo_18_18, &STATE_VARIABLE_IntervalInfo_19_19);
  OpenIntervals0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_19_19, (MR_Integer) 8))));
  mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (CondTailId_9)), OpenIntervals0_10, &OpenIntervals_11);
  backend_libs__interval__set_open_intervals_3_p_0(OpenIntervals_11, STATE_VARIABLE_IntervalInfo_19_19, STATE_VARIABLE_IntervalInfo_13);
}

static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
  MR_Word Id_5,
  MR_Word Start_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_10,
  MR_Word * STATE_VARIABLE_IntervalInfo_11)
{
  MR_Word StartMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11))));
  MR_Word StartMap_9;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Id_5)), ((MR_Box) (Start_6)), StartMap0_8, &StartMap_9);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 11) = ((MR_Box) (StartMap_9));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_42));
  }
}

static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
  MR_Word * Id_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_11,
  MR_Word * STATE_VARIABLE_IntervalInfo_12)
{
  MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7))));
  MR_Word IntervalVars0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14))));
  MR_Integer Num_8;
  MR_Word Counter_9;
  MR_Word IntervalVars_10;
  MR_Word Var_13;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;

  mercury__counter__allocate_3_p_0(&Num_8, Counter0_6, &Counter_9);
  *Id_4 = (MR_Word) (Num_8);
  Var_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (*Id_4)), ((MR_Box) (Var_13)), IntervalVars0_7, &IntervalVars_10);
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 7) = ((MR_Box) (Counter_9));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntervalVars_10));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_60));
  }
}

static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
  MR_Word CurInterval_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (CurInterval_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
  }
}

static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
  MR_Word OpenIntervals_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (OpenIntervals_4));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
  }
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word MaybeNeedsFlush_9,
  MR_Word StartAnchor_10,
  MR_Word BeforeId_11,
  MR_Word * OpenIntervals_12,
  MR_Word STATE_VARIABLE_IntervalInfo_0_16,
  MR_Word * STATE_VARIABLE_IntervalInfo_17,
  MR_Box STATE_VARIABLE_Acc_0_18,
  MR_Box * STATE_VARIABLE_Acc_19)
{
  MR_Word BranchStartId_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6))));
  MR_Word STATE_VARIABLE_IntervalInfo_20_20;
  MR_Word STATE_VARIABLE_IntervalInfo_21_21;
  MR_Word StartMap0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11))));
  MR_Word StartMap_39;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;

  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (BranchStartId_15)), ((MR_Box) (StartAnchor_10)), StartMap0_38, &StartMap_39);
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (Var_59));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (Var_60));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (Var_62));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (Var_63));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (Var_64));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (Var_65));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (StartMap_39));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (Var_67));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (Var_68));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (Var_69));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (Var_70));
  }
  backend_libs__interval__record_interval_succ_4_p_0(BeforeId_11, BranchStartId_15, STATE_VARIABLE_IntervalInfo_20_20, &STATE_VARIABLE_IntervalInfo_21_21);
  *OpenIntervals_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 8))));
  switch (MaybeNeedsFlush_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_IntervalInfo_17 = STATE_VARIABLE_IntervalInfo_21_21;
      break;
    case (MR_Integer) 0:
      backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(StartAnchor_10, STATE_VARIABLE_IntervalInfo_21_21, STATE_VARIABLE_IntervalInfo_17);
      break;
  }
  *STATE_VARIABLE_Acc_19 = STATE_VARIABLE_Acc_0_18;
}

static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_OpenIntervalVars_10;

  backend_libs__interval__gather_interval_vars_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_OpenIntervalVars_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_OpenIntervalVars_10));
}

static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_17,
  MR_Word * STATE_VARIABLE_IntervalInfo_18)
{
  MR_bool succeeded;
  MR_Word AnchorFollowMap0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9))));
  MR_Word IntervalVarMap_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14))));
  MR_Word CurOpenIntervals_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8))));
  MR_Word CurOpenIntervalVars_9;
  MR_Word AnchorFollowMap_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Box conv1_CurOpenIntervalVars_9;
  MR_Word AnchorFollowInfo0_10;
  MR_Box conv2_AnchorFollowInfo0_10;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (IntervalVarMap_7));
  }
  Var_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__set__fold_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), Var_19, CurOpenIntervals_8, ((MR_Box) (Var_20)), &conv1_CurOpenIntervalVars_9);
  CurOpenIntervalVars_9 = ((MR_Word) (conv1_CurOpenIntervalVars_9));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), AnchorFollowMap0_6, ((MR_Box) (Anchor_4)), &conv2_AnchorFollowInfo0_10);
  if (succeeded)
  {
    AnchorFollowInfo0_10 = ((MR_Word) (conv2_AnchorFollowInfo0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OpenIntervalVars0_11 = ((MR_Word) ((MR_hl_field(0, AnchorFollowInfo0_10, (MR_Integer) 0))));
    MR_Word OpenIntervals0_12 = ((MR_Word) ((MR_hl_field(0, AnchorFollowInfo0_10, (MR_Integer) 1))));
    MR_Word OpenIntervalVars_13;
    MR_Word OpenIntervals_14;
    MR_Word AnchorFollowInfo_15;

    OpenIntervalVars_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OpenIntervalVars0_11, CurOpenIntervalVars_9);
    OpenIntervals_14 = mercury__set__union_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), OpenIntervals0_12, CurOpenIntervals_8);
    {
      AnchorFollowInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AnchorFollowInfo_15, 0) = ((MR_Box) (OpenIntervalVars_13));
      MR_hl_field(0, AnchorFollowInfo_15, 1) = ((MR_Box) (OpenIntervals_14));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), ((MR_Box) (Anchor_4)), ((MR_Box) (AnchorFollowInfo_15)), AnchorFollowMap0_6, &AnchorFollowMap_16);
  }
  else
  {
    MR_Word AnchorFollowInfo_22;

    {
      AnchorFollowInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AnchorFollowInfo_22, 0) = ((MR_Box) (CurOpenIntervalVars_9));
      MR_hl_field(0, AnchorFollowInfo_22, 1) = ((MR_Box) (CurOpenIntervals_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), ((MR_Box) (Anchor_4)), ((MR_Box) (AnchorFollowInfo_22)), AnchorFollowMap0_6, &AnchorFollowMap_16);
  }
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 9) = ((MR_Box) (AnchorFollowMap_16));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_83));
  }
}

static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
  MR_Word EndAnchor_5,
  MR_Word AfterId_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_9,
  MR_Word * STATE_VARIABLE_IntervalInfo_10)
{
  MR_Word BranchTailId_8;
  MR_Word STATE_VARIABLE_IntervalInfo_11_11;
  MR_Word STATE_VARIABLE_IntervalInfo_12_12;
  MR_Word STATE_VARIABLE_IntervalInfo_13_13;
  MR_Word STATE_VARIABLE_IntervalInfo_14_14;
  MR_Word Counter0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7))));
  MR_Word IntervalVars0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14))));
  MR_Integer Num_17;
  MR_Word Counter_18;
  MR_Word IntervalVars_19;
  MR_Word Var_20;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;

  mercury__counter__allocate_3_p_0(&Num_17, Counter0_15, &Counter_18);
  BranchTailId_8 = (MR_Word) (Num_17);
  Var_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (BranchTailId_8)), ((MR_Box) (Var_20)), IntervalVars0_16, &IntervalVars_19);
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 0) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 1) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 3) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 4) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 5) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 6) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 7) = ((MR_Box) (Counter_18));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 8) = ((MR_Box) (Var_60));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 9) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 10) = ((MR_Box) (Var_62));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 11) = ((MR_Box) (Var_63));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 12) = ((MR_Box) (Var_64));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 13) = ((MR_Box) (Var_65));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 14) = ((MR_Box) (IntervalVars_19));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_11_11, 15) = ((MR_Box) (Var_67));
  }
  backend_libs__interval__record_interval_end_4_p_0(BranchTailId_8, EndAnchor_5, STATE_VARIABLE_IntervalInfo_11_11, &STATE_VARIABLE_IntervalInfo_12_12);
  backend_libs__interval__record_interval_succ_4_p_0(BranchTailId_8, AfterId_6, STATE_VARIABLE_IntervalInfo_12_12, &STATE_VARIABLE_IntervalInfo_13_13);
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 0))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 1))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 2))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 3))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 4))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 5))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 7))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 8))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 9))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 10))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 11))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 12))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 13))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 14))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_13_13, (MR_Integer) 15))));
  {
    STATE_VARIABLE_IntervalInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 0) = ((MR_Box) (Var_87));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 1) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 2) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 3) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 4) = ((MR_Box) (Var_91));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 5) = ((MR_Box) (Var_92));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 6) = ((MR_Box) (BranchTailId_8));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 7) = ((MR_Box) (Var_94));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 8) = ((MR_Box) (Var_95));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 9) = ((MR_Box) (Var_96));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 10) = ((MR_Box) (Var_97));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 11) = ((MR_Box) (Var_98));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 12) = ((MR_Box) (Var_99));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 13) = ((MR_Box) (Var_100));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 14) = ((MR_Box) (Var_101));
    MR_hl_field(0, STATE_VARIABLE_IntervalInfo_14_14, 15) = ((MR_Box) (Var_102));
  }
  backend_libs__interval__one_open_interval_3_p_0(BranchTailId_8, STATE_VARIABLE_IntervalInfo_14_14, STATE_VARIABLE_IntervalInfo_10);
}

static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
  MR_Word Id_5,
  MR_Word Succ_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_11,
  MR_Word * STATE_VARIABLE_IntervalInfo_12)
{
  MR_bool succeeded;
  MR_Word SuccMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13))));
  MR_Word SuccMap_10;
  MR_Word Succ0_9;
  MR_Box conv0_Succ0_9;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_46;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), SuccMap0_8, ((MR_Box) (Id_5)), &conv0_Succ0_9);
  if (succeeded)
  {
    Succ0_9 = ((MR_Word) (conv0_Succ0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (Succ_6));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) (Succ0_9));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), ((MR_Box) (Id_5)), ((MR_Box) (Var_13)), SuccMap0_8, &SuccMap_10);
  }
  else
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Succ_6));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), ((MR_Box) (Id_5)), ((MR_Box) (Var_14)), SuccMap0_8, &SuccMap_10);
  }
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 13) = ((MR_Box) (SuccMap_10));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_46));
  }
}

static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
  MR_Word Id_5,
  MR_Word End_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_10,
  MR_Word * STATE_VARIABLE_IntervalInfo_11)
{
  MR_Word EndMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12))));
  MR_Word EndMap_9;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Id_5)), ((MR_Box) (End_6)), EndMap0_8, &EndMap_9);
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 12) = ((MR_Box) (EndMap_9));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_42));
  }
}

static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
  MR_Word IntervalId_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7)
{
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  Var_9 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (IntervalId_4)));
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntervalInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_25));
  }
}

static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.shared_left_to_right_deconstruct\'/4", (MR_String) "list length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.shared_left_to_right_deconstruct\'/4", (MR_String) "list length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ArgMode_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word ArgsModes_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word ArgType_25;
        MR_Word CellInitInst_26;
        MR_Word CellFinalInst_27;
        MR_Word ArgInitInst_28;
        MR_Word ArgFinalInst_29;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_31, &ArgType_25);
        CellInitInst_26 = ((MR_Word) ((MR_hl_field(0, ArgMode_23, (MR_Integer) 0))));
        CellFinalInst_27 = ((MR_Word) ((MR_hl_field(0, ArgMode_23, (MR_Integer) 1))));
        ArgInitInst_28 = ((MR_Word) ((MR_hl_field(0, ArgMode_23, (MR_Integer) 2))));
        ArgFinalInst_29 = ((MR_Word) ((MR_hl_field(0, ArgMode_23, (MR_Integer) 3))));
        succeeded = check_hlds__mode_test__init_inst_is_fully_input_3_p_0(ModuleInfo_1, ArgType_25, CellInitInst_26);
        if (succeeded)
        {
          succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo_1, ArgInitInst_28, ArgFinalInst_29);
          if (succeeded)
          {
            succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, CellFinalInst_27);
            if (succeeded)
            {
              succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, ArgFinalInst_29);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__3_3 = Var_30;
                next_value_of_HeadVar__4_4 = ArgsModes_24;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____anchor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____anchor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____anchor_follow_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____anchor_follow_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____branch_construct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____branch_construct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____insert_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____insert_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____insert_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____insert_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_branch_end_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____interval_branch_end_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____interval_branch_end_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____interval_branch_end_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____interval_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____interval_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____interval_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____interval_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____interval_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____interval_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____maybe_needs_flush_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____maybe_needs_flush_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____rename_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____rename_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____resume_save_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____resume_save_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____save_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____save_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__interval____Unify____save_point_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__interval____Compare____save_point_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__interval__init(void)
{
}

void mercury__backend_libs__interval__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_map_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_branch_end_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_maybe_needs_flush_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_rename_map_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0);
}

void mercury__backend_libs__interval__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__interval__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.interval.
