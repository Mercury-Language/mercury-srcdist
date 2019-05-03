/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version rotd-2019-05-03
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5];

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5];

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3];

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1];

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1];

static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0;

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

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3];

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3];

static const MR_DuArgLocn backend_libs__interval__backend_libs__interval__field_locns_interval_params_0_0[3];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1];

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2];

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2];

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0;

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1];

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1];

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1];

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1;

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2];

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2];

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0;

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1;

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2];

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

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2];

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2];

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2];

static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1];

static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1];

static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1;

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1335__1_2_p_0(
  MR_Word HeadVar__1_31,
  MR_Integer * HeadVar__2_32);

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1322__1_2_p_0(
  MR_Word HeadVar__1_16,
  MR_Integer * HeadVar__2_17);

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1302__1_2_p_0(
  MR_Word HeadVar__1_154,
  MR_Integer * HeadVar__2_155);

static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
  MR_Word Vars_4);

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
  MR_Word IntervalInfo_5,
  MR_Word IntervalId_6);

static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
  MR_Word IntervalVarMap_5,
  MR_Word IntervalId_6,
  MR_Word STATE_VARIABLE_OpenIntervalVars_0_9,
  MR_Word * STATE_VARIABLE_OpenIntervalVars_10);

static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
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
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4,
  MR_Word Inserts_6,
  MR_Word InsertMap_7,
  MR_Word MaybeFeature_8);

static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4,
  MR_Word VarRename0_5,
  MR_Word InsertMap_6,
  MR_Word MaybeFeature_7);

static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4,
  MR_Word STATE_VARIABLE_VarRename_0_5,
  MR_Word * STATE_VARIABLE_VarRename_6,
  MR_Word ConjType_7,
  MR_Word InsertMap_8,
  MR_Word MaybeFeature_9);

static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarInfo_0_116,
  MR_Word * STATE_VARIABLE_VarInfo_117,
  MR_Word STATE_VARIABLE_VarRename_0_118,
  MR_Word * STATE_VARIABLE_VarRename_119,
  MR_Word InsertMap_13,
  MR_Word MaybeFeature_14);

static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
  MR_Word Construct_5,
  MR_Word Goal_6,
  MR_Word * StartAnchor_7,
  MR_Word * EndAnchor_8);

static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_VarInfo_0_25,
  MR_Word * STATE_VARIABLE_VarInfo_26,
  MR_Word STATE_VARIABLE_VarRename_0_27,
  MR_Word * STATE_VARIABLE_VarRename_28,
  MR_Word MustHaveMap_14,
  MR_Word InsertMap_15,
  MR_Word MaybeFeature_16);

static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
  MR_Word BranchesGoal_8,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_VarInfo_0_17,
  MR_Word * STATE_VARIABLE_VarInfo_18,
  MR_Word * VarRename_11,
  MR_Word Inserts_12,
  MR_Word MaybeFeature_13);

static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
  MR_Word STATE_VARIABLE_VarInfo_0_1,
  MR_Word * STATE_VARIABLE_VarInfo_2,
  MR_Word STATE_VARIABLE_VarRename_0_3,
  MR_Word * STATE_VARIABLE_VarRename_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarsToExtract_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_VarRename_0_7,
  MR_Word * STATE_VARIABLE_VarRename_8,
  MR_Word STATE_VARIABLE_VoidRename_0_9,
  MR_Word * STATE_VARIABLE_VoidRename_10);

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
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27,
  MR_Word tscc_proc_2_input_2_HeadVar__1_1,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_113,
  MR_Box tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5,
  MR_Box * tscc_output_ptr_2_STATE_VARIABLE_Acc_115);

static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_46,
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
  MR_Word TypeClassInfo_for_build_interval_info_acc_46,
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
backend_libs__interval__record_branch_end_info_3_p_0(
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
backend_libs__interval__set_open_intervals_3_p_0(
  MR_Word OpenIntervals_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7);

static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
  MR_Word IntervalInfo_3,
  MR_Word * OpenIntervals_4);

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
backend_libs__interval__set_cur_interval_3_p_0(
  MR_Word CurInterval_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7);

static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
  MR_Word IntervalId_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7);

static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

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
backend_libs__interval____Unify____branch_end_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
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
backend_libs__interval____Unify____interval_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
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


static /* final */ const MR_Box backend_libs__interval_scalar_common_1[8][2];

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[24][3];

static /* final */ const MR_Box backend_libs__interval_scalar_common_3[2][7];

static /* final */ const MR_Box backend_libs__interval_scalar_common_4[3][5];

static /* final */ const MR_Box backend_libs__interval_scalar_common_5[3][6];




static /* final */ const MR_Box backend_libs__interval_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[2]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0]))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_4[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_4[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[0])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__write_int_list_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_4[1])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_4[2])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[2])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_4[2])),
    ((MR_Box) (backend_libs__interval__dump_deletion_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_deletion_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_4[2])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_4[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

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

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

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

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0 },
  (MR_Integer) 6,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)
  }
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

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_follow_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_follow_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor_follow_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0
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

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____branch_construct_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____branch_construct_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "branch_construct",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)
};

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3] = {
  (MR_String) "flushed_after_branch",
  (MR_String) "accessed_after_branch",
  (MR_String) "interval_after_branch"
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0 = {
  (MR_String) "branch_end_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0,
  backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____branch_end_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____branch_end_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "branch_end_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____insert_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____insert_spec_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_spec_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_spec",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 = {
  (MR_String) "interval_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____interval_id_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_id_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_id",
  {     &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 },
  {     &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0)
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
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)
  }
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
  {
    (MR_TypeInfo) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)
  }
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
  {
    (MR_TypeInfo) (&backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0),
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

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0
};

static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3] = {
  (MR_String) "ip_module_info",
  (MR_String) "ip_var_types",
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

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_params_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_params_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_params",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0
};

static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2] = {
  (MR_String) "ivi_varset",
  (MR_String) "ivi_vartypes"
};

static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0 = {
  (MR_String) "interval_var_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0,
  backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_var_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_var_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_var_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
  (MR_String) "needs_flush",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
  (MR_String) "doesnt_need_flush",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____maybe_needs_flush_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____maybe_needs_flush_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "maybe_needs_flush",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____rename_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____rename_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "rename_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
  (MR_String) "has_resume_save",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
  (MR_String) "has_no_resume_save",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____resume_save_status_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____resume_save_status_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "resume_save_status",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0
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

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____save_point_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
  (MR_String) "save_point_call_site",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
  (MR_String) "save_point_resume_point",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____save_point_type_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_type_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point_type",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0
};

static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1] = {
  (MR_String) "T"
};

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
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1335__1_2_p_0(
  MR_Word HeadVar__1_31,
  MR_Integer * HeadVar__2_32)
{
  {
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_31, HeadVar__2_32);
  }
}

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1322__1_2_p_0(
  MR_Word HeadVar__1_16,
  MR_Integer * HeadVar__2_17)
{
  {
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_16, HeadVar__2_17);
  }
}

static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1302__1_2_p_0(
  MR_Word HeadVar__1_154,
  MR_Integer * HeadVar__2_155)
{
  {
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_154, HeadVar__2_155);
  }
}

void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0(
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
backend_libs__interval____Unify____save_point_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____save_point_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
        MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

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
}

MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_10;
      MR_Integer Var_11;

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        Var_10 = (MR_Integer) (ArgX2_5);
        Var_11 = (MR_Integer) (ArgY2_6);
        succeeded = (Var_10 == Var_11);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0(
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
backend_libs__interval____Unify____resume_save_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0(
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
backend_libs__interval____Unify____maybe_needs_flush_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
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
    {
      MR_Word TypeCtorInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_10_10 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_51 == CastY_52);
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
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
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
                                  {
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
  }
}

void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
}

MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
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
}

MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0(
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
      MR_Word TypeCtorInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_12_12 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0(
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
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&backend_libs__interval_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
}

MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
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
}

void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0(
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
backend_libs__interval____Unify____branch_construct_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0(
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
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&backend_libs__interval_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__interval____Compare____anchor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_78 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_79 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_78 == CastY_79);
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
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_22;
                  MR_Integer Var_96 = (MR_Integer) (Var_89);
                  MR_Integer Var_97 = (MR_Integer) (ArgY1_21);

                  succeeded = (Var_96 < Var_97);
                  if (succeeded)
                  {
                    SubResult1_22 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_96 > Var_97);
                    if (succeeded)
                    {
                      SubResult1_22 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_22 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_22;
                  else
                  {
                    MR_Integer Var_98 = (MR_Integer) (Var_88);
                    MR_Integer Var_99 = (MR_Integer) (ArgY2_24);

                    succeeded = (Var_98 < Var_99);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_98 > Var_99);
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
            MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_102 = (MR_Integer) (Var_91);
                  MR_Integer Var_103 = (MR_Integer) (ArgY1_41);

                  succeeded = (Var_102 < Var_103);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_102 > Var_103);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
                MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);

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
                    }
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
                          MR_Word ArgY1_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word ArgY2_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_60;
                          MR_Integer Var_92 = (MR_Integer) (Var_87);
                          MR_Integer Var_93 = (MR_Integer) (ArgY1_59);

                          succeeded = (Var_92 < Var_93);
                          if (succeeded)
                          {
                            SubResult1_60 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_92 > Var_93);
                            if (succeeded)
                            {
                              SubResult1_60 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult1_60 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_60;
                          else
                          {
                            MR_Integer Var_94 = (MR_Integer) (Var_86);
                            MR_Integer Var_95 = (MR_Integer) (ArgY2_62);

                            succeeded = (Var_94 < Var_95);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_94 > Var_95);
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
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    }
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
                          MR_Word ArgY1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer Var_100 = (MR_Integer) (Var_90);
                          MR_Integer Var_101 = (MR_Integer) (ArgY1_77);

                          succeeded = (Var_100 < Var_101);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_100 > Var_101);
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
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;
            MR_Integer Var_27;
            MR_Integer Var_28;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_7 == ArgY1_8);
              if (succeeded)
              {
                Var_27 = (MR_Integer) (ArgX2_9);
                Var_28 = (MR_Integer) (ArgY2_10);
                succeeded = (Var_27 == Var_28);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Integer Var_31;
            MR_Integer Var_32;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              Var_31 = (MR_Integer) (ArgX1_11);
              Var_32 = (MR_Integer) (ArgY1_12);
              succeeded = (Var_31 == Var_32);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word ArgY1_14;
                MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_16;
                MR_Integer Var_25;
                MR_Integer Var_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                  ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_13 == ArgY1_14);
                  if (succeeded)
                  {
                    Var_25 = (MR_Integer) (ArgX2_15);
                    Var_26 = (MR_Integer) (ArgY2_16);
                    succeeded = (Var_25 == Var_26);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_18;
                MR_Integer Var_29;
                MR_Integer Var_30;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  Var_29 = (MR_Integer) (ArgX1_17);
                  Var_30 = (MR_Integer) (ArgY1_18);
                  succeeded = (Var_29 == Var_30);
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
backend_libs__interval__dump_anchor_follow_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv1_Num_3;

    conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Num_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_32;

    backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1335__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_32);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_32));
  }
}

static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Anchor_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word AnchorFollowInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AnchorFollowInfo_5, (MR_Integer) 0))));
    MR_Word Intervals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AnchorFollowInfo_5, (MR_Integer) 1))));
    MR_Word VarNums_9;
    MR_Word IntervalList_10;
    MR_Word Var_19;
    MR_Word Var_25;

    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Anchor_4)));
    mercury__io__write_string_3_p_0((MR_String) " =>\n");
    Var_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_7);
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[20]), Var_19, &VarNums_9);
    mercury__io__write_string_3_p_0((MR_String) "vars [");
    mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNums_9, (MR_String) ", ", (MR_Word) (&backend_libs__interval_scalar_common_2[21]));
    mercury__io__write_string_3_p_0((MR_String) "]\nintervals: ");
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), Intervals_8, &IntervalList_10);
    Var_25 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[22]), IntervalList_10);
    mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_25, (MR_String) ", ", (MR_Word) (&backend_libs__interval_scalar_common_2[23]));
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_17;

    backend_libs__interval__IntroducedFrom__pred__dump_deletion__1322__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_17);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_17));
  }
}

static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
  MR_Word Vars_4)
{
  {
    MR_Word VarNums_6;
    MR_Word Var_10;

    Var_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_4);
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[18]), Var_10, &VarNums_6);
    mercury__io__write_string_3_p_0((MR_String) " [");
    mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNums_6, (MR_String) ", ", (MR_Word) (&backend_libs__interval_scalar_common_2[19]));
    mercury__io__write_string_3_p_0((MR_String) "]");
  }
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    backend_libs__interval__dump_deletion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv5_HeadVar__2_155;

    backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1302__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_155);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_155));
  }
}

static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv1_Num_3;

    conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Num_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
  MR_Word IntervalInfo_5,
  MR_Word IntervalId_6)
{
  {
    MR_bool succeeded;
    MR_Integer Var_19;
    MR_Word SuccIds_8;
    MR_Word Var_23;
    MR_Box conv0_SuccIds_8;
    MR_Word Start_10;
    MR_Word Var_32;
    MR_Box conv2_Start_10;
    MR_Word End_11;
    MR_Word Var_40;
    MR_Box conv3_End_11;
    MR_Word Vars_12;
    MR_Word Var_48;
    MR_Box conv4_Vars_12;
    MR_Word Deletions_14;
    MR_Word Var_58;
    MR_Box conv6_Deletions_14;

    mercury__io__write_string_3_p_0((MR_String) "\ninterval ");
    Var_19 = backend_libs__interval__interval_id_to_int_1_f_0(IntervalId_6);
    mercury__io__write_int_3_p_0(Var_19);
    mercury__io__write_string_3_p_0((MR_String) ": ");
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_5, (MR_Integer) 13))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), Var_23, ((MR_Box) (IntervalId_6)), &conv0_SuccIds_8);
    if (succeeded)
    {
      SuccIds_8 = ((MR_Word) (conv0_SuccIds_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SuccNums_9;

      SuccNums_9 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[15]), SuccIds_8);
      mercury__io__write_string_3_p_0((MR_String) "succ [");
      backend_libs__interval__write_int_list_3_p_0(SuccNums_9);
      mercury__io__write_string_3_p_0((MR_String) "]\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "no succ\n");
    }
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_5, (MR_Integer) 11))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_32, ((MR_Box) (IntervalId_6)), &conv2_Start_10);
    if (succeeded)
    {
      Start_10 = ((MR_Word) (conv2_Start_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "start ");
      mercury__io__write_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Start_10)));
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "no start\n");
    }
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_5, (MR_Integer) 12))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_40, ((MR_Box) (IntervalId_6)), &conv3_End_11);
    if (succeeded)
    {
      End_11 = ((MR_Word) (conv3_End_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "end ");
      mercury__io__write_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (End_11)));
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "no end\n");
    }
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_5, (MR_Integer) 14))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), Var_48, ((MR_Box) (IntervalId_6)), &conv4_Vars_12);
    if (succeeded)
    {
      Vars_12 = ((MR_Word) (conv4_Vars_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word VarNums_13;
      MR_Word Var_50;

      Var_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_12);
      mercury__list__map_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__interval_scalar_common_2[16]), Var_50, &VarNums_13);
      mercury__io__write_string_3_p_0((MR_String) "vars [");
      backend_libs__interval__write_int_list_3_p_0(VarNums_13);
      mercury__io__write_string_3_p_0((MR_String) "]\n");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "no vars\n");
    }
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_5, (MR_Integer) 15))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[2]), Var_58, ((MR_Box) (IntervalId_6)), &conv6_Deletions_14);
    if (succeeded)
    {
      Deletions_14 = ((MR_Word) (conv6_Deletions_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv7_STATE_VARIABLE_IO_62_62;

      mercury__io__write_string_3_p_0((MR_String) "deletions");
      mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__interval_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&backend_libs__interval_scalar_common_2[17]), Deletions_14, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_62_62);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
  MR_Word IntervalVarMap_5,
  MR_Word IntervalId_6,
  MR_Word STATE_VARIABLE_OpenIntervalVars_0_9,
  MR_Word * STATE_VARIABLE_OpenIntervalVars_10)
{
  {
    MR_Word IntervalVars_8;
    MR_Box conv0_IntervalVars_8;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), IntervalVarMap_5, ((MR_Box) (IntervalId_6)), &conv0_IntervalVars_8);
    IntervalVars_8 = ((MR_Word) (conv0_IntervalVars_8));
    *STATE_VARIABLE_OpenIntervalVars_10 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_OpenIntervalVars_0_9, IntervalVars_8);
  }
}

MR_Integer MR_CALL 
backend_libs__interval__interval_id_to_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer Num_3 = (MR_Integer) (HeadVar__1_1);

    return Num_3;
  }
}

static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

void MR_CALL 
backend_libs__interval__write_int_list_3_p_0(
  MR_Word List_4)
{
  {
    mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), List_4, (MR_String) ", ", (MR_Word) (&backend_libs__interval_scalar_common_2[14]));
  }
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    backend_libs__interval__dump_anchor_follow_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    backend_libs__interval__dump_interval_info_id_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0(
  MR_Word IntervalInfo_4)
{
  {
    MR_Word StartIds_6;
    MR_Word EndIds_7;
    MR_Word VarsIds_8;
    MR_Word SuccIds_9;
    MR_Word IntervalIds0_10;
    MR_Word IntervalIds_11;
    MR_Word AnchorFollows_12;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_4, (MR_Integer) 11))));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Box conv0_STATE_VARIABLE_IO_27_27;
    MR_Box conv1_STATE_VARIABLE_IO_14;

    mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_15, &StartIds_6);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_4, (MR_Integer) 12))));
    mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), Var_16, &EndIds_7);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_4, (MR_Integer) 14))));
    mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), Var_17, &VarsIds_8);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_4, (MR_Integer) 13))));
    mercury__map__keys_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), Var_18, &SuccIds_9);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (SuccIds_9));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (VarsIds_8));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (EndIds_7));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (StartIds_6));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    mercury__list__condense_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), Var_19, &IntervalIds0_10);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), IntervalIds0_10, &IntervalIds_11);
    mercury__io__write_string_3_p_0((MR_String) "INTERVALS:\n");
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (IntervalInfo_4));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, IntervalIds_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_27_27);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_4, (MR_Integer) 9))));
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), Var_28, &AnchorFollows_12);
    mercury__io__write_string_3_p_0((MR_String) "\nANCHOR FOLLOW:\n");
    mercury__list__foldl_4_p_2((MR_Word) (&backend_libs__interval_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&backend_libs__interval_scalar_common_2[13]), AnchorFollows_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
  }
}

void MR_CALL 
backend_libs__interval__apply_headvar_correction_4_p_0(
  MR_Word HeadVarSet_5,
  MR_Word RenameMap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
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
      MR_Word HeadVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word HeadVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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

void MR_CALL 
backend_libs__interval__make_inserted_goal_9_p_0(
  MR_Word VarSet0_10,
  MR_Word * VarSet_11,
  MR_Word VarTypes0_12,
  MR_Word * VarTypes_13,
  MR_Word STATE_VARIABLE_RenameMap_0_20,
  MR_Word * STATE_VARIABLE_RenameMap_21,
  MR_Word InsertSpec_15,
  MR_Word MaybeFeature_16,
  MR_Word * Goal_17)
{
  {
    MR_bool succeeded;
    MR_Word Info0_18;
    MR_Word Info_19;
    MR_Word Goal0_32;
    MR_Word VarsToExtract_33;
    MR_Word GoalExpr0_34;
    MR_Word GoalInfo0_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word ArgVars_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Unification0_39;

    {
      Info0_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_18, 0) = ((MR_Box) (VarSet0_10));
      MR_hl_field(MR_mktag(0), Info0_18, 1) = ((MR_Box) (VarTypes0_12));
    }
    Goal0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InsertSpec_15, (MR_Integer) 0))));
    VarsToExtract_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InsertSpec_15, (MR_Integer) 1))));
    GoalExpr0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_32, (MR_Integer) 0))));
    GoalInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_32, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) GoalExpr0_34)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 0))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 1))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 2))));
      Unification0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 3))));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_34, (MR_Integer) 4))));
      succeeded = ((MR_tag((MR_Word) Unification0_39)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_39, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_39, (MR_Integer) 1))));
        ArgVars_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_39, (MR_Integer) 2))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_39, (MR_Integer) 3))));
        Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification0_39, (MR_Integer) 4))) & (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word Unification1_47;
      MR_Word GoalExpr1_48;
      MR_Word GoalInfo1_49;
      MR_Word GoalInfo2_51;
      MR_Word Goal2_52;
      MR_Word VarSet0_53;
      MR_Word VarTypes0_54;
      MR_Word VarSet_55;
      MR_Word VarTypes_56;
      MR_Word NewRename_57;
      MR_Word VoidRename_58;
      MR_Word Goal3_59;
      MR_Word Var_62;
      MR_Word Var_63;

      {
        Unification1_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unification1_47, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Unification1_47, 1) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Unification1_47, 2) = ((MR_Box) (ArgVars_43));
        MR_hl_field(MR_mktag(1), Unification1_47, 3) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Unification1_47, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_46)));
      }
      {
        GoalExpr1_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr1_48, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), GoalExpr1_48, 1) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), GoalExpr1_48, 2) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), GoalExpr1_48, 3) = ((MR_Box) (Unification1_47));
        MR_hl_field(MR_mktag(1), GoalExpr1_48, 4) = ((MR_Box) (Var_40));
      }
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo0_35, &GoalInfo1_49);
      if ((MaybeFeature_16 == (MR_Word) ((MR_Unsigned) 0U)))
        GoalInfo2_51 = GoalInfo1_49;
      else
      {
        MR_Word Feature_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFeature_16, (MR_Integer) 0))));

        hlds__hlds_goal__goal_info_add_feature_3_p_0(Feature_50, GoalInfo1_49, &GoalInfo2_51);
      }
      {
        Goal2_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal2_52, 0) = ((MR_Box) (GoalExpr1_48));
        MR_hl_field(MR_mktag(0), Goal2_52, 1) = ((MR_Box) (GoalInfo2_51));
      }
      VarSet0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 0))));
      VarTypes0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 1))));
      Var_62 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
      Var_63 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
      backend_libs__interval__create_shadow_vars_10_p_0(ArgVars_43, VarsToExtract_33, VarSet0_53, &VarSet_55, VarTypes0_54, &VarTypes_56, Var_62, &NewRename_57, Var_63, &VoidRename_58);
      {
        Info_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info_19, 0) = ((MR_Box) (VarSet_55));
        MR_hl_field(MR_mktag(0), Info_19, 1) = ((MR_Box) (VarTypes_56));
      }
      mercury__map__old_merge_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), STATE_VARIABLE_RenameMap_0_20, NewRename_57, STATE_VARIABLE_RenameMap_21);
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*STATE_VARIABLE_RenameMap_21, Goal2_52, &Goal3_59);
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VoidRename_58, Goal3_59, Goal_17);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
        return;
      }
    }
    *VarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_19, (MR_Integer) 0))));
    *VarTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_19, (MR_Integer) 1))));
  }
}

void MR_CALL 
backend_libs__interval__record_decisions_in_goal_10_p_0(
  MR_Word STATE_VARIABLE_Goal_0_21,
  MR_Word * STATE_VARIABLE_Goal_22,
  MR_Word VarSet0_12,
  MR_Word * VarSet_13,
  MR_Word VarTypes0_14,
  MR_Word * VarTypes_15,
  MR_Word STATE_VARIABLE_VarRename_0_23,
  MR_Word * STATE_VARIABLE_VarRename_24,
  MR_Word InsertMap_17,
  MR_Word MaybeFeature_18)
{
  {
    MR_Word Info0_19;
    MR_Word Info_20;

    {
      Info0_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_19, 0) = ((MR_Box) (VarSet0_12));
      MR_hl_field(MR_mktag(0), Info0_19, 1) = ((MR_Box) (VarTypes0_14));
    }
    backend_libs__interval__record_decisions_in_goal_8_p_0(STATE_VARIABLE_Goal_0_21, STATE_VARIABLE_Goal_22, Info0_19, &Info_20, STATE_VARIABLE_VarRename_0_23, STATE_VARIABLE_VarRename_24, InsertMap_17, MaybeFeature_18);
    *VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_20, (MR_Integer) 0))));
    *VarTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_20, (MR_Integer) 1))));
  }
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4,
  MR_Word Inserts_6,
  MR_Word InsertMap_7,
  MR_Word MaybeFeature_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarInfo_4 = STATE_VARIABLE_VarInfo_0_3;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word VarRename1_25;
    MR_Word InsertGoals_26;
    MR_Word GoalInfo0_28;
    MR_Word Goal1_29;
    MR_Word STATE_VARIABLE_VarInfo_33_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_VarInfo_35_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_30;

    Var_34 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
    backend_libs__interval__make_inserted_goals_7_p_0(STATE_VARIABLE_VarInfo_0_3, &STATE_VARIABLE_VarInfo_33_33, Var_34, &VarRename1_25, Inserts_6, MaybeFeature_8, &InsertGoals_26);
    GoalInfo0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 1))));
    backend_libs__interval__record_decisions_in_goal_8_p_0(Goal0_16, &Goal1_29, STATE_VARIABLE_VarInfo_33_33, &STATE_VARIABLE_VarInfo_35_35, VarRename1_25, &Var_30, InsertMap_7, MaybeFeature_8);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Goal1_29));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_36 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), InsertGoals_26, Var_37);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_36, GoalInfo0_28, &Goal_18);
    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(Goals0_17, &Goals_19, STATE_VARIABLE_VarInfo_35_35, STATE_VARIABLE_VarInfo_4, Inserts_6, InsertMap_7, MaybeFeature_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4,
  MR_Word VarRename0_5,
  MR_Word InsertMap_6,
  MR_Word MaybeFeature_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarInfo_4 = STATE_VARIABLE_VarInfo_0_3;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_VarInfo_29_29;
    MR_Word Var_26;

    backend_libs__interval__record_decisions_in_goal_8_p_0(Goal0_24, &Goal_25, STATE_VARIABLE_VarInfo_0_3, &STATE_VARIABLE_VarInfo_29_29, VarRename0_5, &Var_26, InsertMap_6, MaybeFeature_7);
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_16, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(MR_mktag(0), Case_16, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(MR_mktag(0), Case_16, 2) = ((MR_Box) (Goal_25));
    }
    backend_libs__interval__record_decisions_in_cases_7_p_0(Cases0_15, &Cases_17, STATE_VARIABLE_VarInfo_29_29, STATE_VARIABLE_VarInfo_4, VarRename0_5, InsertMap_6, MaybeFeature_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarInfo_0_3,
  MR_Word * STATE_VARIABLE_VarInfo_4,
  MR_Word STATE_VARIABLE_VarRename_0_5,
  MR_Word * STATE_VARIABLE_VarRename_6,
  MR_Word ConjType_7,
  MR_Word InsertMap_8,
  MR_Word MaybeFeature_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarRename_6 = STATE_VARIABLE_VarRename_0_5;
      *STATE_VARIABLE_VarInfo_4 = STATE_VARIABLE_VarInfo_0_3;
    }
    else
    {
      MR_Word Goal0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word TailGoals_28;
      MR_Word STATE_VARIABLE_VarInfo_36_36;
      MR_Word STATE_VARIABLE_VarRename_37_37;
      MR_Word SubGoals_30;
      MR_Word InnerConjType_29;
      MR_Word Var_40;

      backend_libs__interval__record_decisions_in_goal_8_p_0(Goal0_19, &Goal_27, STATE_VARIABLE_VarInfo_0_3, &STATE_VARIABLE_VarInfo_36_36, STATE_VARIABLE_VarRename_0_5, &STATE_VARIABLE_VarRename_37_37, InsertMap_8, MaybeFeature_9);
      backend_libs__interval__record_decisions_in_conj_9_p_0(Goals0_20, &TailGoals_28, STATE_VARIABLE_VarInfo_36_36, STATE_VARIABLE_VarInfo_4, STATE_VARIABLE_VarRename_37_37, STATE_VARIABLE_VarRename_6, ConjType_7, InsertMap_8, MaybeFeature_9);
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_27, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        InnerConjType_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 1))) & (MR_Integer) 1);
        SubGoals_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 2))));
        succeeded = (ConjType_7 == InnerConjType_29);
      }
      if (succeeded)
      {
        *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_30, TailGoals_28);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_28));
        }
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarInfo_0_116,
  MR_Word * STATE_VARIABLE_VarInfo_117,
  MR_Word STATE_VARIABLE_VarRename_0_118,
  MR_Word * STATE_VARIABLE_VarRename_119,
  MR_Word InsertMap_13,
  MR_Word MaybeFeature_14)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
    MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_37 = (MR_Word) ((MR_Word) (GoalExpr0_15));
          MR_Word NegGoal_38;
          MR_Word STATE_VARIABLE_VarInfo_148_148;
          MR_Word Var_149;
          MR_Word EndAnchor_178;
          MR_Word Goal1_179;
          MR_Word Inserts_180;
          MR_Word Var_39;
          MR_Word _StartAnchor_177;

          backend_libs__interval__record_decisions_in_goal_8_p_0(NegGoal0_37, &NegGoal_38, STATE_VARIABLE_VarInfo_0_116, &STATE_VARIABLE_VarInfo_148_148, STATE_VARIABLE_VarRename_0_118, &Var_39, InsertMap_13, MaybeFeature_14);
          Var_149 = (MR_Word) ((MR_Word) (NegGoal_38));
          {
            Goal1_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal1_179, 0) = ((MR_Box) (Var_149));
            MR_hl_field(MR_mktag(0), Goal1_179, 1) = ((MR_Box) (GoalInfo0_16));
          }
          backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 3, Goal0_9, &_StartAnchor_177, &EndAnchor_178);
          backend_libs__interval__lookup_inserts_3_p_0(InsertMap_13, EndAnchor_178, &Inserts_180);
          backend_libs__interval__insert_goals_after_7_p_0(Goal1_179, Goal_10, STATE_VARIABLE_VarInfo_148_148, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_119, Inserts_180, MaybeFeature_14);
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(STATE_VARIABLE_VarRename_0_118, Goal0_9, Goal_10);
          *STATE_VARIABLE_VarInfo_117 = STATE_VARIABLE_VarInfo_0_116;
          *STATE_VARIABLE_VarRename_119 = STATE_VARIABLE_VarRename_0_118;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Builtin_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word MustHaveMap_201;

          switch (Builtin_100) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              MustHaveMap_201 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              MustHaveMap_201 = (MR_Integer) 1;
              break;
          }
          backend_libs__interval__record_decisions_at_call_site_9_p_0(Goal0_9, Goal_10, STATE_VARIABLE_VarInfo_0_116, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_0_118, STATE_VARIABLE_VarRename_119, MustHaveMap_201, InsertMap_13, MaybeFeature_14);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word MustHaveMap_87;

              switch (MR_tag((MR_Word) GenericCall_81)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  MustHaveMap_87 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  MustHaveMap_87 = (MR_Integer) 0;
                  break;
              }
              backend_libs__interval__record_decisions_at_call_site_9_p_0(Goal0_9, Goal_10, STATE_VARIABLE_VarInfo_0_116, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_0_118, STATE_VARIABLE_VarRename_119, MustHaveMap_87, InsertMap_13, MaybeFeature_14);
            }
            break;
          case (MR_Integer) 1:
            {
              backend_libs__interval__record_decisions_at_call_site_9_p_0(Goal0_9, Goal_10, STATE_VARIABLE_VarInfo_0_116, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_0_118, STATE_VARIABLE_VarRename_119, (MR_Integer) 0, InsertMap_13, MaybeFeature_14);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Goals_19;
              MR_Word GoalExpr_20;

              backend_libs__interval__record_decisions_in_conj_9_p_0(Goals0_18, &Goals_19, STATE_VARIABLE_VarInfo_0_116, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_0_118, STATE_VARIABLE_VarRename_119, ConjType_17, InsertMap_13, MaybeFeature_14);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (Goals_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word StartAnchor_21;
              MR_Word EndAnchor_22;
              MR_Word Goals0_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));

              backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 1, Goal0_9, &StartAnchor_21, &EndAnchor_22);
              if ((Goals0_171 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Goal_10 = Goal0_9;
                *STATE_VARIABLE_VarInfo_117 = STATE_VARIABLE_VarInfo_0_116;
                *STATE_VARIABLE_VarRename_119 = STATE_VARIABLE_VarRename_0_118;
              }
              else
              {
                MR_Word FirstGoal0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals0_171, (MR_Integer) 0))));
                MR_Word LaterGoals0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals0_171, (MR_Integer) 1))));
                MR_Word FirstGoal_25;
                MR_Word StartInserts_27;
                MR_Word LaterGoals_28;
                MR_Word Goal1_29;
                MR_Word Inserts_30;
                MR_Word STATE_VARIABLE_VarInfo_160_160;
                MR_Word STATE_VARIABLE_VarInfo_161_161;
                MR_Word Var_162;
                MR_Word Goals_167;
                MR_Word Var_26;

                backend_libs__interval__record_decisions_in_goal_8_p_0(FirstGoal0_23, &FirstGoal_25, STATE_VARIABLE_VarInfo_0_116, &STATE_VARIABLE_VarInfo_160_160, STATE_VARIABLE_VarRename_0_118, &Var_26, InsertMap_13, MaybeFeature_14);
                backend_libs__interval__lookup_inserts_3_p_0(InsertMap_13, StartAnchor_21, &StartInserts_27);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(LaterGoals0_24, &LaterGoals_28, STATE_VARIABLE_VarInfo_160_160, &STATE_VARIABLE_VarInfo_161_161, StartInserts_27, InsertMap_13, MaybeFeature_14);
                {
                  Goals_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Goals_167, 0) = ((MR_Box) (FirstGoal_25));
                  MR_hl_field(MR_mktag(1), Goals_167, 1) = ((MR_Box) (LaterGoals_28));
                }
                {
                  Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (Goals_167));
                }
                {
                  Goal1_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal1_29, 0) = ((MR_Box) (Var_162));
                  MR_hl_field(MR_mktag(0), Goal1_29, 1) = ((MR_Box) (GoalInfo0_16));
                }
                backend_libs__interval__lookup_inserts_3_p_0(InsertMap_13, EndAnchor_22, &Inserts_30);
                backend_libs__interval__insert_goals_after_7_p_0(Goal1_29, Goal_10, STATE_VARIABLE_VarInfo_161_161, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_119, Inserts_30, MaybeFeature_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word Det_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word Cases_34;
              MR_Word Var_35;
              MR_Word STATE_VARIABLE_VarInfo_153_153;
              MR_Word Var_155;
              MR_Word EndAnchor_174;
              MR_Word Goal1_175;
              MR_Word Inserts_176;
              MR_Word _StartAnchor_36;

              backend_libs__interval__record_decisions_in_cases_7_p_0(Cases0_33, &Cases_34, STATE_VARIABLE_VarInfo_0_116, &STATE_VARIABLE_VarInfo_153_153, STATE_VARIABLE_VarRename_0_118, InsertMap_13, MaybeFeature_14);
              parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_118, Var0_31, &Var_35);
              {
                Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (Var_35));
                MR_hl_field(MR_mktag(3), Var_155, 2) = (MR_Box) ((MR_Unsigned) (Det_32));
                MR_hl_field(MR_mktag(3), Var_155, 3) = ((MR_Box) (Cases_34));
              }
              {
                Goal1_175 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal1_175, 0) = ((MR_Box) (Var_155));
                MR_hl_field(MR_mktag(0), Goal1_175, 1) = ((MR_Box) (GoalInfo0_16));
              }
              backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 2, Goal0_9, &_StartAnchor_36, &EndAnchor_174);
              backend_libs__interval__lookup_inserts_3_p_0(InsertMap_13, EndAnchor_174, &Inserts_176);
              backend_libs__interval__insert_goals_after_7_p_0(Goal1_175, Goal_10, STATE_VARIABLE_VarInfo_153_153, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_119, Inserts_176, MaybeFeature_14);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word SubGoal0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Reason_58;
              MR_Word Var_131;

              switch (MR_tag((MR_Word) Reason0_56)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars0_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason0_56, (MR_Integer) 0))));
                    MR_Word Vars_187;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_118, Vars0_186, &Vars_187);
                    {
                      Reason_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Reason_58, 0) = ((MR_Box) (Vars_187));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  Reason_58 = Reason0_56;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_56, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      Reason_58 = Reason0_56;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Kind_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_56, (MR_Integer) 2))) & (MR_Integer) 3);
                        MR_Word Var0_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_56, (MR_Integer) 1))));
                        MR_Word Var_189;

                        parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_118, Var0_188, &Var_189);
                        {
                          Reason_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Reason_58, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(MR_mktag(3), Reason_58, 1) = ((MR_Box) (Var_189));
                          MR_hl_field(MR_mktag(3), Reason_58, 2) = (MR_Box) ((MR_Unsigned) (Kind_59));
                        }
                      }
                      break;
                  }
                  break;
              }
              succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_131 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *Goal_10 = Goal0_9;
                *STATE_VARIABLE_VarRename_119 = STATE_VARIABLE_VarRename_0_118;
                *STATE_VARIABLE_VarInfo_117 = STATE_VARIABLE_VarInfo_0_116;
              }
              else
              {
                MR_Word SubGoal_80;
                MR_Word GoalExpr_194;

                backend_libs__interval__record_decisions_in_goal_8_p_0(SubGoal0_57, &SubGoal_80, STATE_VARIABLE_VarInfo_0_116, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_0_118, STATE_VARIABLE_VarRename_119, InsertMap_13, MaybeFeature_14);
                {
                  GoalExpr_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_194, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_194, 1) = ((MR_Box) (Reason_58));
                  MR_hl_field(MR_mktag(3), GoalExpr_194, 2) = ((MR_Box) (SubGoal_80));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_194));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word Cond0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Then0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word Else0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 4))));
              MR_Word Vars_44;
              MR_Word Cond_45;
              MR_Word Then_46;
              MR_Word VarRenameElse_48;
              MR_Word StartInsertGoals_49;
              MR_Word Else1_50;
              MR_Word ElseGoalInfo0_53;
              MR_Word Else_54;
              MR_Word EndInserts_55;
              MR_Word STATE_VARIABLE_VarInfo_136_136;
              MR_Word STATE_VARIABLE_VarRename_137_137;
              MR_Word STATE_VARIABLE_VarInfo_138_138;
              MR_Word STATE_VARIABLE_VarInfo_139_139;
              MR_Word Var_140;
              MR_Word STATE_VARIABLE_VarInfo_141_141;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_145;
              MR_Word StartAnchor_182;
              MR_Word EndAnchor_183;
              MR_Word StartInserts_184;
              MR_Word Goal1_185;
              MR_Word Var_47;
              MR_Word Var_51;

              backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 0, Goal0_9, &StartAnchor_182, &EndAnchor_183);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, STATE_VARIABLE_VarRename_0_118, Vars0_40, &Vars_44);
              backend_libs__interval__record_decisions_in_goal_8_p_0(Cond0_41, &Cond_45, STATE_VARIABLE_VarInfo_0_116, &STATE_VARIABLE_VarInfo_136_136, STATE_VARIABLE_VarRename_0_118, &STATE_VARIABLE_VarRename_137_137, InsertMap_13, MaybeFeature_14);
              backend_libs__interval__record_decisions_in_goal_8_p_0(Then0_42, &Then_46, STATE_VARIABLE_VarInfo_136_136, &STATE_VARIABLE_VarInfo_138_138, STATE_VARIABLE_VarRename_137_137, &Var_47, InsertMap_13, MaybeFeature_14);
              backend_libs__interval__lookup_inserts_3_p_0(InsertMap_13, StartAnchor_182, &StartInserts_184);
              Var_140 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
              backend_libs__interval__make_inserted_goals_7_p_0(STATE_VARIABLE_VarInfo_138_138, &STATE_VARIABLE_VarInfo_139_139, Var_140, &VarRenameElse_48, StartInserts_184, MaybeFeature_14, &StartInsertGoals_49);
              backend_libs__interval__record_decisions_in_goal_8_p_0(Else0_43, &Else1_50, STATE_VARIABLE_VarInfo_139_139, &STATE_VARIABLE_VarInfo_141_141, VarRenameElse_48, &Var_51, InsertMap_13, MaybeFeature_14);
              ElseGoalInfo0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else0_43, (MR_Integer) 1))));
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Else1_50));
                MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_142 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), StartInsertGoals_49, Var_143);
              hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_142, ElseGoalInfo0_53, &Else_54);
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (Vars_44));
                MR_hl_field(MR_mktag(3), Var_145, 2) = ((MR_Box) (Cond_45));
                MR_hl_field(MR_mktag(3), Var_145, 3) = ((MR_Box) (Then_46));
                MR_hl_field(MR_mktag(3), Var_145, 4) = ((MR_Box) (Else_54));
              }
              {
                Goal1_185 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal1_185, 0) = ((MR_Box) (Var_145));
                MR_hl_field(MR_mktag(0), Goal1_185, 1) = ((MR_Box) (GoalInfo0_16));
              }
              backend_libs__interval__lookup_inserts_3_p_0(InsertMap_13, EndAnchor_183, &EndInserts_55);
              backend_libs__interval__insert_goals_after_7_p_0(Goal1_185, Goal_10, STATE_VARIABLE_VarInfo_141_141, STATE_VARIABLE_VarInfo_117, STATE_VARIABLE_VarRename_119, EndInserts_55, MaybeFeature_14);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.record_decisions_in_goal\'/8", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
  MR_Word Construct_5,
  MR_Word Goal_6,
  MR_Word * StartAnchor_7,
  MR_Word * EndAnchor_8)
{
  {
    MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
    MR_Word GoalId_11;

    GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *StartAnchor_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Construct_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalId_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *EndAnchor_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Construct_5));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (GoalId_11));
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word STATE_VARIABLE_VarInfo_0_25,
  MR_Word * STATE_VARIABLE_VarInfo_26,
  MR_Word STATE_VARIABLE_VarRename_0_27,
  MR_Word * STATE_VARIABLE_VarRename_28,
  MR_Word MustHaveMap_14,
  MR_Word InsertMap_15,
  MR_Word MaybeFeature_16)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
    MR_Word Goal1_19;
    MR_Word MaybeNeedAcrossCall_20;

    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(STATE_VARIABLE_VarRename_0_27, Goal0_10, &Goal1_19);
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
      MR_Word Inserts_24;
      MR_Word InsertGoals_47;
      MR_Word BranchesGoalInfo_49;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word InsertsPrime_36;
      MR_Box conv0_InsertsPrime_36;

      GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_18);
      {
        Anchor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Anchor_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Anchor_23, 1) = ((MR_Box) (GoalId_22));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval_scalar_common_1[4]), InsertMap_15, ((MR_Box) (Anchor_23)), &conv0_InsertsPrime_36);
      if (succeeded)
      {
        InsertsPrime_36 = ((MR_Word) (conv0_InsertsPrime_36));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Inserts_24 = InsertsPrime_36;
      else
        Inserts_24 = (MR_Word) ((MR_Unsigned) 0U);
      Var_51 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
      backend_libs__interval__make_inserted_goals_7_p_0(STATE_VARIABLE_VarInfo_0_25, STATE_VARIABLE_VarInfo_26, Var_51, STATE_VARIABLE_VarRename_28, Inserts_24, MaybeFeature_16, &InsertGoals_47);
      BranchesGoalInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_19, (MR_Integer) 1))));
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Goal1_19));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (InsertGoals_47));
      }
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_52, BranchesGoalInfo_49, Goal_11);
    }
    else
    {
      switch (MustHaveMap_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Goal_11 = Goal1_19;
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", (MR_String) "no save map");
              return;
            }
          }
          break;
      }
      *STATE_VARIABLE_VarRename_28 = STATE_VARIABLE_VarRename_0_27;
      *STATE_VARIABLE_VarInfo_26 = STATE_VARIABLE_VarInfo_0_25;
    }
  }
}

static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
  MR_Word BranchesGoal_8,
  MR_Word * Goal_9,
  MR_Word STATE_VARIABLE_VarInfo_0_17,
  MR_Word * STATE_VARIABLE_VarInfo_18,
  MR_Word * VarRename_11,
  MR_Word Inserts_12,
  MR_Word MaybeFeature_13)
{
  {
    MR_Word InsertGoals_14;
    MR_Word BranchesGoalInfo_16;
    MR_Word Var_20;
    MR_Word Var_21;

    Var_20 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
    backend_libs__interval__make_inserted_goals_7_p_0(STATE_VARIABLE_VarInfo_0_17, STATE_VARIABLE_VarInfo_18, Var_20, VarRename_11, Inserts_12, MaybeFeature_13, &InsertGoals_14);
    BranchesGoalInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BranchesGoal_8, (MR_Integer) 1))));
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (BranchesGoal_8));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (InsertGoals_14));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_21, BranchesGoalInfo_16, Goal_9);
  }
}

static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
  MR_Word STATE_VARIABLE_VarInfo_0_1,
  MR_Word * STATE_VARIABLE_VarInfo_2,
  MR_Word STATE_VARIABLE_VarRename_0_3,
  MR_Word * STATE_VARIABLE_VarRename_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarRename_4 = STATE_VARIABLE_VarRename_0_3;
      *STATE_VARIABLE_VarInfo_2 = STATE_VARIABLE_VarInfo_0_1;
    }
    else
    {
      MR_Word Spec_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Goal_20;
      MR_Word Goals_21;
      MR_Word STATE_VARIABLE_VarInfo_26_26;
      MR_Word STATE_VARIABLE_VarRename_27_27;
      MR_Word Goal0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec_17, (MR_Integer) 0))));
      MR_Word VarsToExtract_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec_17, (MR_Integer) 1))));
      MR_Word GoalExpr0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_39, (MR_Integer) 0))));
      MR_Word GoalInfo0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_39, (MR_Integer) 1))));
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word ArgVars_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Unification0_46;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_41)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_41, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_41, (MR_Integer) 1))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_41, (MR_Integer) 2))));
        Unification0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_41, (MR_Integer) 3))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_41, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Unification0_46)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_46, (MR_Integer) 0))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_46, (MR_Integer) 1))));
          ArgVars_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_46, (MR_Integer) 2))));
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_46, (MR_Integer) 3))));
          Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification0_46, (MR_Integer) 4))) & (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word Unification1_54;
        MR_Word GoalExpr1_55;
        MR_Word GoalInfo1_56;
        MR_Word GoalInfo2_58;
        MR_Word Goal2_59;
        MR_Word VarSet0_60;
        MR_Word VarTypes0_61;
        MR_Word VarSet_62;
        MR_Word VarTypes_63;
        MR_Word NewRename_64;
        MR_Word VoidRename_65;
        MR_Word Goal3_66;
        MR_Word Var_69;
        MR_Word Var_70;

        {
          Unification1_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Unification1_54, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Unification1_54, 1) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Unification1_54, 2) = ((MR_Box) (ArgVars_50));
          MR_hl_field(MR_mktag(1), Unification1_54, 3) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Unification1_54, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_53)));
        }
        {
          GoalExpr1_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr1_55, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), GoalExpr1_55, 1) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(1), GoalExpr1_55, 2) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), GoalExpr1_55, 3) = ((MR_Box) (Unification1_54));
          MR_hl_field(MR_mktag(1), GoalExpr1_55, 4) = ((MR_Box) (Var_47));
        }
        hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo0_42, &GoalInfo1_56);
        if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
          GoalInfo2_58 = GoalInfo1_56;
        else
        {
          MR_Word Feature_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));

          hlds__hlds_goal__goal_info_add_feature_3_p_0(Feature_57, GoalInfo1_56, &GoalInfo2_58);
        }
        {
          Goal2_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal2_59, 0) = ((MR_Box) (GoalExpr1_55));
          MR_hl_field(MR_mktag(0), Goal2_59, 1) = ((MR_Box) (GoalInfo2_58));
        }
        VarSet0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 0))));
        VarTypes0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 1))));
        Var_69 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
        Var_70 = mercury__map__init_0_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]));
        backend_libs__interval__create_shadow_vars_10_p_0(ArgVars_50, VarsToExtract_40, VarSet0_60, &VarSet_62, VarTypes0_61, &VarTypes_63, Var_69, &NewRename_64, Var_70, &VoidRename_65);
        {
          STATE_VARIABLE_VarInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_26_26, 0) = ((MR_Box) (VarSet_62));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarInfo_26_26, 1) = ((MR_Box) (VarTypes_63));
        }
        mercury__map__old_merge_3_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), STATE_VARIABLE_VarRename_0_3, NewRename_64, &STATE_VARIABLE_VarRename_27_27);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(STATE_VARIABLE_VarRename_27_27, Goal2_59, &Goal3_66);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(VoidRename_65, Goal3_66, &Goal_20);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
          return;
        }
      }
      backend_libs__interval__make_inserted_goals_7_p_0(STATE_VARIABLE_VarInfo_26_26, STATE_VARIABLE_VarInfo_2, STATE_VARIABLE_VarRename_27_27, STATE_VARIABLE_VarRename_4, Specs_18, HeadVar__6_6, &Goals_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_21));
      }
    }
  }
}

static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarsToExtract_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word STATE_VARIABLE_VarRename_0_7,
  MR_Word * STATE_VARIABLE_VarRename_8,
  MR_Word STATE_VARIABLE_VoidRename_0_9,
  MR_Word * STATE_VARIABLE_VoidRename_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_VoidRename_10 = STATE_VARIABLE_VoidRename_0_9;
      *STATE_VARIABLE_VarRename_8 = STATE_VARIABLE_VarRename_0_7;
      *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
      *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
    }
    else
    {
      MR_Word Arg_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarSet_39_39;
      MR_Word STATE_VARIABLE_VarTypes_40_40;
      MR_Word STATE_VARIABLE_VarRename_41_41;
      MR_Word STATE_VARIABLE_VoidRename_42_42;
      MR_String Name_61;
      MR_Word Shadow_62;
      MR_Word Type_63;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarTypes_0_5;
      MR_Word next_value_of_STATE_VARIABLE_VarRename_0_7;
      MR_Word next_value_of_STATE_VARIABLE_VoidRename_0_9;

      mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_3, Arg_24, &Name_61);
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_61, &Shadow_62, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_39_39);
      hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_5, Arg_24, &Type_63);
      hlds__vartypes__add_var_type_4_p_0(Shadow_62, Type_63, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_40_40);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsToExtract_2, Arg_24);
      if (succeeded)
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), ((MR_Box) (Arg_24)), ((MR_Box) (Shadow_62)), STATE_VARIABLE_VarRename_0_7, &STATE_VARIABLE_VarRename_41_41);
        STATE_VARIABLE_VoidRename_42_42 = STATE_VARIABLE_VoidRename_0_9;
      }
      else
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), ((MR_Box) (Arg_24)), ((MR_Box) (Shadow_62)), STATE_VARIABLE_VoidRename_0_9, &STATE_VARIABLE_VoidRename_42_42);
        STATE_VARIABLE_VarRename_41_41 = STATE_VARIABLE_VarRename_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_25;
      next_value_of_STATE_VARIABLE_VarSet_0_3 = STATE_VARIABLE_VarSet_39_39;
      next_value_of_STATE_VARIABLE_VarTypes_0_5 = STATE_VARIABLE_VarTypes_40_40;
      next_value_of_STATE_VARIABLE_VarRename_0_7 = STATE_VARIABLE_VarRename_41_41;
      next_value_of_STATE_VARIABLE_VoidRename_0_9 = STATE_VARIABLE_VoidRename_42_42;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarSet_0_3 = next_value_of_STATE_VARIABLE_VarSet_0_3;
      STATE_VARIABLE_VarTypes_0_5 = next_value_of_STATE_VARIABLE_VarTypes_0_5;
      STATE_VARIABLE_VarRename_0_7 = next_value_of_STATE_VARIABLE_VarRename_0_7;
      STATE_VARIABLE_VoidRename_0_9 = next_value_of_STATE_VARIABLE_VoidRename_0_9;
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
}

void MR_CALL 
backend_libs__interval__delete_interval_vars_5_p_0(
  MR_Word Id_6,
  MR_Word ToDeleteVars_7,
  MR_Word * DeletedVars_8,
  MR_Word STATE_VARIABLE_IntervalInfo_0_18,
  MR_Word * STATE_VARIABLE_IntervalInfo_19)
{
  {
    MR_bool succeeded;
    MR_Word VarsMap0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14))));
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
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13))));
    DeleteMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (VarsMap_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (DeleteMap0_14));
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
        Deletions_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Deletions_16, 0) = ((MR_Box) (*DeletedVars_8));
        MR_hl_field(MR_mktag(1), Deletions_16, 1) = ((MR_Box) (Deletions0_15));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[2]), ((MR_Box) (Id_6)), ((MR_Box) (Deletions_16)), DeleteMap0_14, &DeleteMap_17);
    }
    else
    {
      MR_Word Deletions_23;

      {
        Deletions_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Deletions_23, 0) = ((MR_Box) (*DeletedVars_8));
        MR_hl_field(MR_mktag(1), Deletions_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[2]), ((MR_Box) (Id_6)), ((MR_Box) (Deletions_23)), DeleteMap0_14, &DeleteMap_17);
    }
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 0))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 1))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 2))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 3))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 4))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 5))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 6))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 7))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 8))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 9))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 10))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 11))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 12))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 13))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 14))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (DeleteMap_17));
    }
  }
}

static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_113,
  MR_Box tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114,
  MR_Box * tscc_output_ptr_2_STATE_VARIABLE_Acc_115)
{
  {
    MR_Word tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27;
    MR_Word tscc_proc_2_input_2_HeadVar__1_1;
    MR_Word tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
    MR_Box tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
    MR_Word tscc_output_1_STATE_VARIABLE_IntervalInfo_113;
    MR_Box tscc_output_2_STATE_VARIABLE_Acc_115;

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
      MR_Word TypeClassInfo_for_build_interval_info_acc_357 = tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
      MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word STATE_VARIABLE_IntervalInfo_0_112 = tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
      MR_Word STATE_VARIABLE_IntervalInfo_113;
      MR_Box STATE_VARIABLE_Acc_0_114 = tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;
      MR_Box STATE_VARIABLE_Acc_115;
      MR_bool succeeded;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_24 = (MR_Word) ((MR_Word) (GoalExpr_6));
            MR_Word Var_192;
            MR_Word STATE_VARIABLE_IntervalInfo_194_194;
            MR_Box STATE_VARIABLE_Acc_195_195;
            MR_Word STATE_VARIABLE_IntervalInfo_196_196;
            MR_Word STATE_VARIABLE_IntervalInfo_197_197;
            MR_Box STATE_VARIABLE_Acc_198_198;
            MR_Word STATE_VARIABLE_IntervalInfo_200_200;
            MR_Word StartAnchor_237;
            MR_Word EndAnchor_238;
            MR_Word BeforeId_239;
            MR_Word AfterId_240;
            MR_Word MaybeResumeVars_241;
            MR_Word OpenIntervals_242;

            {
              Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (SubGoal_24));
            }
            backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_192, (MR_Integer) 3, &StartAnchor_237, &EndAnchor_238, &BeforeId_239, &AfterId_240, &MaybeResumeVars_241, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_194_194, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_195_195);
            backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_238, AfterId_240, STATE_VARIABLE_IntervalInfo_194_194, &STATE_VARIABLE_IntervalInfo_196_196);
            backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, SubGoal_24, STATE_VARIABLE_IntervalInfo_196_196, &STATE_VARIABLE_IntervalInfo_197_197, STATE_VARIABLE_Acc_195_195, &STATE_VARIABLE_Acc_198_198);
            backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_237, BeforeId_239, &OpenIntervals_242, STATE_VARIABLE_IntervalInfo_197_197, &STATE_VARIABLE_IntervalInfo_200_200, STATE_VARIABLE_Acc_198_198, &STATE_VARIABLE_Acc_115);
            backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_237, BeforeId_239, MaybeResumeVars_241, OpenIntervals_242, STATE_VARIABLE_IntervalInfo_200_200, &STATE_VARIABLE_IntervalInfo_113);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Unification_90)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellVar_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_90, (MR_Integer) 0))));
                  MR_Word HowToConstruct_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_90, (MR_Integer) 4))));
                  MR_Word STATE_VARIABLE_IntervalInfo_146_146;
                  MR_Word Var_147;
                  MR_Word ArgVars_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_90, (MR_Integer) 2))));

                  switch (MR_tag((MR_Word) HowToConstruct_95)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(HowToConstruct_95)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "construct in region");
                          return;
                        }
                      }
                      break;
                  }
                  backend_libs__interval__require_in_regs_3_p_0(ArgVars_269, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_146_146);
                  {
                    Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (CellVar_92));
                    MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (ArgVars_269));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_147, STATE_VARIABLE_IntervalInfo_146_146, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ConsId_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_IntervalInfo_135_135;
                  MR_Word Var_137;
                  MR_Word STATE_VARIABLE_IntervalInfo_138_138;
                  MR_Word Var_140;
                  MR_Word ArgVars_270 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 2))));
                  MR_Word ArgModes_271 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 3))));
                  MR_Word IntParams_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
                  MR_Word ModuleInfo_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_272, (MR_Integer) 0))));
                  MR_Word CellVar_274 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 0))));

                  succeeded = backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(ModuleInfo_273, ArgModes_271);
                  if (succeeded)
                    backend_libs__interval__use_cell_8_p_0(TypeClassInfo_for_build_interval_info_acc_357, CellVar_274, ArgVars_270, ConsId_100, HeadVar__1_1, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_135_135, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                  else
                  {
                    STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                    STATE_VARIABLE_IntervalInfo_135_135 = STATE_VARIABLE_IntervalInfo_0_112;
                  }
                  {
                    Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (CellVar_274));
                    MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  backend_libs__interval__require_in_regs_3_p_0(Var_137, STATE_VARIABLE_IntervalInfo_135_135, &STATE_VARIABLE_IntervalInfo_138_138);
                  {
                    Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (CellVar_274));
                    MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (ArgVars_270));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_140, STATE_VARIABLE_IntervalInfo_138_138, &STATE_VARIABLE_IntervalInfo_113);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ToVar_104 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_90, (MR_Integer) 0))));
                  MR_Word FromVar_105 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_90, (MR_Integer) 1))));
                  MR_Word Var_128;
                  MR_Word STATE_VARIABLE_IntervalInfo_129_129;
                  MR_Word Var_131;
                  MR_Word Var_133;

                  {
                    Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (FromVar_105));
                    MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  backend_libs__interval__require_in_regs_3_p_0(Var_128, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_129_129);
                  {
                    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (ToVar_104));
                    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (FromVar_105));
                    MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_133));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_131, STATE_VARIABLE_IntervalInfo_129_129, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_90, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var1_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_90, (MR_Integer) 1))));
                      MR_Word Var2_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_90, (MR_Integer) 2))));
                      MR_Word Var_120;
                      MR_Word STATE_VARIABLE_IntervalInfo_121_121;
                      MR_Word Var_122;

                      {
                        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var2_107));
                        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var1_106));
                        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_122));
                      }
                      backend_libs__interval__require_in_regs_3_p_0(Var_120, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_121_121);
                      backend_libs__interval__require_access_3_p_0(Var_120, STATE_VARIABLE_IntervalInfo_121_121, &STATE_VARIABLE_IntervalInfo_113);
                      STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
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
          {
            MR_Word PredId_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
            MR_Integer ProcId_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Builtin_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word ProcInfo_72;
            MR_Word ArgVars_251 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
            MR_Word IntParams_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
            MR_Word ModuleInfo_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_253, (MR_Integer) 0))));
            MR_Word VarTypes_255;
            MR_Word InputArgs_256;
            MR_Word Inputs_257;
            MR_Word _PredInfo_71;
            MR_Word Var_73;
            MR_Word Var_74;

            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_254, PredId_66, ProcId_67, &_PredInfo_71, &ProcInfo_72);
            VarTypes_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_253, (MR_Integer) 1))));
            hlds__arg_info__partition_proc_call_args_7_p_0(ProcInfo_72, VarTypes_255, ModuleInfo_254, ArgVars_251, &InputArgs_256, &Var_73, &Var_74);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgs_256, &Inputs_257);
            switch (Builtin_68) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_IntervalInfo_157_157;

                  backend_libs__interval__require_in_regs_3_p_0(Inputs_257, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_157_157);
                  backend_libs__interval__require_access_3_p_0(Inputs_257, STATE_VARIABLE_IntervalInfo_157_157, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MaybeNeedAcrossCall_249;

                  hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_249);
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_257, MaybeNeedAcrossCall_249, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word ArgVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word ArgModes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word MaybeArgRegs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word MaybeNeedAcrossCall_38;
                MR_Word IntParams_39;
                MR_Word ModuleInfo_40;
                MR_Word VarTypes_41;
                MR_Word ArgTypes_42;
                MR_Word ArgRegTypes_43;
                MR_Word InputArgsR_44;
                MR_Word InputArgsF_45;
                MR_Word InputArgs_48;
                MR_Word _OutputArgsR_46;
                MR_Word _OutputArgsF_47;

                hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_38);
                IntParams_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
                ModuleInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_39, (MR_Integer) 0))));
                VarTypes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_39, (MR_Integer) 1))));
                hlds__vartypes__lookup_var_types_3_p_0(VarTypes_41, ArgVars_34, &ArgTypes_42);
                hlds__arg_info__generic_call_arg_reg_types_6_p_0(ModuleInfo_40, VarTypes_41, GenericCall_33, ArgVars_34, MaybeArgRegs_36, &ArgRegTypes_43);
                hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_40, ArgVars_34, ArgModes_35, ArgTypes_42, ArgRegTypes_43, &InputArgsR_44, &InputArgsF_45, &_OutputArgsR_46, &_OutputArgsF_47);
                mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_44, InputArgsF_45, &InputArgs_48);
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
                      MR_Integer Var_159;
                      MR_Integer Var_160;
                      MR_Word Var_60;
                      MR_Integer Var_62;
                      MR_Word Var_63;

                      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_40, &Globals_59);
                      Var_159 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_44);
                      Var_160 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsF_45);
                      ll_backend__call_gen__generic_call_info_8_p_0(Globals_59, GenericCall_33, Var_159, Var_160, &Var_60, &GenericVarsArgInfos_61, &Var_62, &Var_63);
                      mercury__assoc_list__keys_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), GenericVarsArgInfos_61, &GenericVars_64);
                      mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), GenericVars_64, InputArgs_48, &Inputs_65);
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_65, MaybeNeedAcrossCall_38, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word STATE_VARIABLE_IntervalInfo_163_163;

                      backend_libs__interval__require_in_regs_3_p_0(InputArgs_48, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_163_163);
                      backend_libs__interval__require_access_3_p_0(InputArgs_48, STATE_VARIABLE_IntervalInfo_163_163, &STATE_VARIABLE_IntervalInfo_113);
                      STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word ExtraArgs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
                MR_Word ExtraVars_80;
                MR_Word InputArgVarSet_81;
                MR_Word InputArgVars_84;
                MR_Word InputVars_85;
                MR_Word ArgVars_260;
                MR_Word IntParams_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
                MR_Word ModuleInfo_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_262, (MR_Integer) 0))));
                MR_Word VarTypes_264;
                MR_Word PredId_265 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Integer ProcId_266 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word ProcInfo_268;
                MR_Word _PredInfo_258;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word MaybeNeedAcrossCall_259;

                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_263, PredId_265, ProcId_266, &_PredInfo_258, &ProcInfo_268);
                VarTypes_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_262, (MR_Integer) 1))));
                ArgVars_260 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[11]), Args_76);
                ExtraVars_80 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[12]), ExtraArgs_77);
                hlds__arg_info__partition_proc_call_args_7_p_0(ProcInfo_268, VarTypes_264, ModuleInfo_263, ArgVars_260, &InputArgVarSet_81, &Var_82, &Var_83);
                mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVarSet_81, &InputArgVars_84);
                mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVars_84, ExtraVars_80, &InputVars_85);
                succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_259);
                if (succeeded)
                {
                  succeeded = (MaybeNeedAcrossCall_259 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(InputVars_85, MaybeNeedAcrossCall_259, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                else
                {
                  MR_Word STATE_VARIABLE_IntervalInfo_153_153;

                  backend_libs__interval__require_in_regs_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_153_153);
                  backend_libs__interval__require_access_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_153_153, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27 = TypeClassInfo_for_build_interval_info_acc_357;
                MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__1_1 = Goals_11;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = STATE_VARIABLE_IntervalInfo_0_112;
                MR_Box next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_0_114;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27;
                tscc_proc_2_input_2_HeadVar__1_1 = next_value_of_tscc_proc_2_input_2_HeadVar__1_1;
                tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
                tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_230 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                if ((Goals_230 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  backend_libs__interval__no_open_intervals_2_p_0(STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                else
                {
                  MR_Word FirstDisjunct_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_230, (MR_Integer) 0))));
                  MR_Word StartAnchor_14;
                  MR_Word EndAnchor_15;
                  MR_Word BeforeId_16;
                  MR_Word AfterId_17;
                  MR_Word MaybeResumeVars_18;
                  MR_Word OpenIntervals_19;
                  MR_Word Var_219;
                  MR_Word STATE_VARIABLE_IntervalInfo_221_221;
                  MR_Box STATE_VARIABLE_Acc_222_222;
                  MR_Word STATE_VARIABLE_IntervalInfo_224_224;

                  {
                    Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (FirstDisjunct_12));
                  }
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_219, (MR_Integer) 1, &StartAnchor_14, &EndAnchor_15, &BeforeId_16, &AfterId_17, &MaybeResumeVars_18, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_221_221, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_222_222);
                  backend_libs__interval__build_interval_info_in_disj_11_p_0(TypeClassInfo_for_build_interval_info_acc_357, Goals_230, (MR_Integer) 1, StartAnchor_14, EndAnchor_15, BeforeId_16, AfterId_17, &OpenIntervals_19, STATE_VARIABLE_IntervalInfo_221_221, &STATE_VARIABLE_IntervalInfo_224_224, STATE_VARIABLE_Acc_222_222, &STATE_VARIABLE_Acc_115);
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_14, BeforeId_16, MaybeResumeVars_18, OpenIntervals_19, STATE_VARIABLE_IntervalInfo_224_224, &STATE_VARIABLE_IntervalInfo_113);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word OpenIntervalsList_23;
                MR_Word STATE_VARIABLE_IntervalInfo_206_206;
                MR_Box STATE_VARIABLE_Acc_207_207;
                MR_Word STATE_VARIABLE_IntervalInfo_208_208;
                MR_Word STATE_VARIABLE_IntervalInfo_211_211;
                MR_Word Var_212;
                MR_Word STATE_VARIABLE_IntervalInfo_213_213;
                MR_Word StartAnchor_231;
                MR_Word EndAnchor_232;
                MR_Word BeforeId_233;
                MR_Word AfterId_234;
                MR_Word MaybeResumeVars_235;
                MR_Word OpenIntervals_236;

                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, &StartAnchor_231, &EndAnchor_232, &BeforeId_233, &AfterId_234, &MaybeResumeVars_235, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_206_206, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_207_207);
                backend_libs__interval__build_interval_info_in_cases_10_p_0(TypeClassInfo_for_build_interval_info_acc_357, Cases_22, StartAnchor_231, EndAnchor_232, BeforeId_233, AfterId_234, &OpenIntervalsList_23, STATE_VARIABLE_IntervalInfo_206_206, &STATE_VARIABLE_IntervalInfo_208_208, STATE_VARIABLE_Acc_207_207, &STATE_VARIABLE_Acc_115);
                OpenIntervals_236 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), OpenIntervalsList_23);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_231, BeforeId_233, MaybeResumeVars_235, OpenIntervals_236, STATE_VARIABLE_IntervalInfo_208_208, &STATE_VARIABLE_IntervalInfo_211_211);
                {
                  Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_20));
                  MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_in_regs_3_p_0(Var_212, STATE_VARIABLE_IntervalInfo_211_211, &STATE_VARIABLE_IntervalInfo_213_213);
                backend_libs__interval__require_access_3_p_0(Var_212, STATE_VARIABLE_IntervalInfo_213_213, &STATE_VARIABLE_IntervalInfo_113);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word SubGoal_248 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word TermVar_32;
                MR_Word Var_165;

                succeeded = ((((MR_tag((MR_Word) Reason_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_31, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  TermVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_31, (MR_Integer) 1))));
                  Var_165 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_31, (MR_Integer) 2))) & (MR_Integer) 3);
                  succeeded = (Var_165 == (MR_Integer) 1);
                }
                if (succeeded)
                {
                  MR_Word Var_166;

                  {
                    Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (TermVar_32));
                    MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_166, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = TypeClassInfo_for_build_interval_info_acc_357;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = SubGoal_248;
                  MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = STATE_VARIABLE_IntervalInfo_0_112;
                  MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = STATE_VARIABLE_Acc_0_114;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
                  tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                  tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
                  tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word Then_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Else_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word CondOpenIntervals_29;
                MR_Word Var_171;
                MR_Word STATE_VARIABLE_IntervalInfo_173_173;
                MR_Box STATE_VARIABLE_Acc_174_174;
                MR_Word STATE_VARIABLE_IntervalInfo_175_175;
                MR_Word STATE_VARIABLE_IntervalInfo_176_176;
                MR_Box STATE_VARIABLE_Acc_177_177;
                MR_Word STATE_VARIABLE_IntervalInfo_178_178;
                MR_Word STATE_VARIABLE_IntervalInfo_179_179;
                MR_Box STATE_VARIABLE_Acc_180_180;
                MR_Word STATE_VARIABLE_IntervalInfo_182_182;
                MR_Box STATE_VARIABLE_Acc_183_183;
                MR_Word STATE_VARIABLE_IntervalInfo_184_184;
                MR_Word STATE_VARIABLE_IntervalInfo_185_185;
                MR_Box STATE_VARIABLE_Acc_186_186;
                MR_Word STATE_VARIABLE_IntervalInfo_188_188;
                MR_Word StartAnchor_243;
                MR_Word EndAnchor_244;
                MR_Word BeforeId_245;
                MR_Word AfterId_246;
                MR_Word MaybeResumeVars_247;
                MR_Word _ElseOpenIntervals_30;

                {
                  Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Cond_26));
                }
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_171, (MR_Integer) 0, &StartAnchor_243, &EndAnchor_244, &BeforeId_245, &AfterId_246, &MaybeResumeVars_247, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_173_173, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_174_174);
                backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_244, AfterId_246, STATE_VARIABLE_IntervalInfo_173_173, &STATE_VARIABLE_IntervalInfo_175_175);
                backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, Then_27, STATE_VARIABLE_IntervalInfo_175_175, &STATE_VARIABLE_IntervalInfo_176_176, STATE_VARIABLE_Acc_174_174, &STATE_VARIABLE_Acc_177_177);
                backend_libs__interval__reached_cond_then_3_p_0(GoalInfo_7, STATE_VARIABLE_IntervalInfo_176_176, &STATE_VARIABLE_IntervalInfo_178_178);
                backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, Cond_26, STATE_VARIABLE_IntervalInfo_178_178, &STATE_VARIABLE_IntervalInfo_179_179, STATE_VARIABLE_Acc_177_177, &STATE_VARIABLE_Acc_180_180);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, StartAnchor_243, BeforeId_245, &CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_179_179, &STATE_VARIABLE_IntervalInfo_182_182, STATE_VARIABLE_Acc_180_180, &STATE_VARIABLE_Acc_183_183);
                backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_244, AfterId_246, STATE_VARIABLE_IntervalInfo_182_182, &STATE_VARIABLE_IntervalInfo_184_184);
                backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, Else_28, STATE_VARIABLE_IntervalInfo_184_184, &STATE_VARIABLE_IntervalInfo_185_185, STATE_VARIABLE_Acc_183_183, &STATE_VARIABLE_Acc_186_186);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_243, BeforeId_245, &_ElseOpenIntervals_30, STATE_VARIABLE_IntervalInfo_185_185, &STATE_VARIABLE_IntervalInfo_188_188, STATE_VARIABLE_Acc_186_186, &STATE_VARIABLE_Acc_115);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_243, BeforeId_245, MaybeResumeVars_247, CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_188_188, &STATE_VARIABLE_IntervalInfo_113);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_IntervalInfo_113 = STATE_VARIABLE_IntervalInfo_113;
      tscc_output_2_STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_115;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_build_interval_info_acc_27 = tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27;
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
        MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_IntervalInfo_23_23;
        MR_Box STATE_VARIABLE_Acc_24_24;
        MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
        MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
        MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
        MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;

        backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(TypeClassInfo_for_build_interval_info_acc_27, Goals_15, STATE_VARIABLE_IntervalInfo_0_3, &STATE_VARIABLE_IntervalInfo_23_23, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = TypeClassInfo_for_build_interval_info_acc_27;
        next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Goal_14;
        next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = STATE_VARIABLE_IntervalInfo_23_23;
        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = STATE_VARIABLE_Acc_24_24;
        tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
        tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
        tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
        tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_IntervalInfo_113 = STATE_VARIABLE_IntervalInfo_4;
      tscc_output_2_STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_6;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_113 = tscc_output_1_STATE_VARIABLE_IntervalInfo_113;
    *tscc_output_ptr_2_STATE_VARIABLE_Acc_115 = tscc_output_2_STATE_VARIABLE_Acc_115;
    return;
  }
}

static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27,
  MR_Word tscc_proc_2_input_2_HeadVar__1_1,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_113,
  MR_Box tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5,
  MR_Box * tscc_output_ptr_2_STATE_VARIABLE_Acc_115)
{
  {
    MR_Word tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
    MR_Word tscc_proc_1_input_2_HeadVar__1_1;
    MR_Word tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
    MR_Box tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;
    MR_Word tscc_output_1_STATE_VARIABLE_IntervalInfo_113;
    MR_Box tscc_output_2_STATE_VARIABLE_Acc_115;

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
      MR_Word TypeClassInfo_for_build_interval_info_acc_357 = tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
      MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word STATE_VARIABLE_IntervalInfo_0_112 = tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
      MR_Word STATE_VARIABLE_IntervalInfo_113;
      MR_Box STATE_VARIABLE_Acc_0_114 = tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;
      MR_Box STATE_VARIABLE_Acc_115;
      MR_bool succeeded;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_24 = (MR_Word) ((MR_Word) (GoalExpr_6));
            MR_Word Var_192;
            MR_Word STATE_VARIABLE_IntervalInfo_194_194;
            MR_Box STATE_VARIABLE_Acc_195_195;
            MR_Word STATE_VARIABLE_IntervalInfo_196_196;
            MR_Word STATE_VARIABLE_IntervalInfo_197_197;
            MR_Box STATE_VARIABLE_Acc_198_198;
            MR_Word STATE_VARIABLE_IntervalInfo_200_200;
            MR_Word StartAnchor_237;
            MR_Word EndAnchor_238;
            MR_Word BeforeId_239;
            MR_Word AfterId_240;
            MR_Word MaybeResumeVars_241;
            MR_Word OpenIntervals_242;

            {
              Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (SubGoal_24));
            }
            backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_192, (MR_Integer) 3, &StartAnchor_237, &EndAnchor_238, &BeforeId_239, &AfterId_240, &MaybeResumeVars_241, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_194_194, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_195_195);
            backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_238, AfterId_240, STATE_VARIABLE_IntervalInfo_194_194, &STATE_VARIABLE_IntervalInfo_196_196);
            backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, SubGoal_24, STATE_VARIABLE_IntervalInfo_196_196, &STATE_VARIABLE_IntervalInfo_197_197, STATE_VARIABLE_Acc_195_195, &STATE_VARIABLE_Acc_198_198);
            backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_237, BeforeId_239, &OpenIntervals_242, STATE_VARIABLE_IntervalInfo_197_197, &STATE_VARIABLE_IntervalInfo_200_200, STATE_VARIABLE_Acc_198_198, &STATE_VARIABLE_Acc_115);
            backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_237, BeforeId_239, MaybeResumeVars_241, OpenIntervals_242, STATE_VARIABLE_IntervalInfo_200_200, &STATE_VARIABLE_IntervalInfo_113);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Unification_90)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellVar_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_90, (MR_Integer) 0))));
                  MR_Word HowToConstruct_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_90, (MR_Integer) 4))));
                  MR_Word STATE_VARIABLE_IntervalInfo_146_146;
                  MR_Word Var_147;
                  MR_Word ArgVars_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_90, (MR_Integer) 2))));

                  switch (MR_tag((MR_Word) HowToConstruct_95)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(HowToConstruct_95)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "construct in region");
                          return;
                        }
                      }
                      break;
                  }
                  backend_libs__interval__require_in_regs_3_p_0(ArgVars_269, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_146_146);
                  {
                    Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (CellVar_92));
                    MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (ArgVars_269));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_147, STATE_VARIABLE_IntervalInfo_146_146, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ConsId_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_IntervalInfo_135_135;
                  MR_Word Var_137;
                  MR_Word STATE_VARIABLE_IntervalInfo_138_138;
                  MR_Word Var_140;
                  MR_Word ArgVars_270 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 2))));
                  MR_Word ArgModes_271 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 3))));
                  MR_Word IntParams_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
                  MR_Word ModuleInfo_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_272, (MR_Integer) 0))));
                  MR_Word CellVar_274 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_90, (MR_Integer) 0))));

                  succeeded = backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(ModuleInfo_273, ArgModes_271);
                  if (succeeded)
                    backend_libs__interval__use_cell_8_p_0(TypeClassInfo_for_build_interval_info_acc_357, CellVar_274, ArgVars_270, ConsId_100, HeadVar__1_1, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_135_135, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                  else
                  {
                    STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                    STATE_VARIABLE_IntervalInfo_135_135 = STATE_VARIABLE_IntervalInfo_0_112;
                  }
                  {
                    Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (CellVar_274));
                    MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  backend_libs__interval__require_in_regs_3_p_0(Var_137, STATE_VARIABLE_IntervalInfo_135_135, &STATE_VARIABLE_IntervalInfo_138_138);
                  {
                    Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (CellVar_274));
                    MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (ArgVars_270));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_140, STATE_VARIABLE_IntervalInfo_138_138, &STATE_VARIABLE_IntervalInfo_113);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ToVar_104 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_90, (MR_Integer) 0))));
                  MR_Word FromVar_105 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_90, (MR_Integer) 1))));
                  MR_Word Var_128;
                  MR_Word STATE_VARIABLE_IntervalInfo_129_129;
                  MR_Word Var_131;
                  MR_Word Var_133;

                  {
                    Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (FromVar_105));
                    MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  backend_libs__interval__require_in_regs_3_p_0(Var_128, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_129_129);
                  {
                    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (ToVar_104));
                    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (FromVar_105));
                    MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_133));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_131, STATE_VARIABLE_IntervalInfo_129_129, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_90, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var1_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_90, (MR_Integer) 1))));
                      MR_Word Var2_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_90, (MR_Integer) 2))));
                      MR_Word Var_120;
                      MR_Word STATE_VARIABLE_IntervalInfo_121_121;
                      MR_Word Var_122;

                      {
                        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var2_107));
                        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var1_106));
                        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_122));
                      }
                      backend_libs__interval__require_in_regs_3_p_0(Var_120, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_121_121);
                      backend_libs__interval__require_access_3_p_0(Var_120, STATE_VARIABLE_IntervalInfo_121_121, &STATE_VARIABLE_IntervalInfo_113);
                      STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
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
          {
            MR_Word PredId_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
            MR_Integer ProcId_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Builtin_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word ProcInfo_72;
            MR_Word ArgVars_251 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));
            MR_Word IntParams_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
            MR_Word ModuleInfo_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_253, (MR_Integer) 0))));
            MR_Word VarTypes_255;
            MR_Word InputArgs_256;
            MR_Word Inputs_257;
            MR_Word _PredInfo_71;
            MR_Word Var_73;
            MR_Word Var_74;

            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_254, PredId_66, ProcId_67, &_PredInfo_71, &ProcInfo_72);
            VarTypes_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_253, (MR_Integer) 1))));
            hlds__arg_info__partition_proc_call_args_7_p_0(ProcInfo_72, VarTypes_255, ModuleInfo_254, ArgVars_251, &InputArgs_256, &Var_73, &Var_74);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgs_256, &Inputs_257);
            switch (Builtin_68) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_IntervalInfo_157_157;

                  backend_libs__interval__require_in_regs_3_p_0(Inputs_257, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_157_157);
                  backend_libs__interval__require_access_3_p_0(Inputs_257, STATE_VARIABLE_IntervalInfo_157_157, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MaybeNeedAcrossCall_249;

                  hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_249);
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_257, MaybeNeedAcrossCall_249, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word ArgVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word ArgModes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word MaybeArgRegs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word MaybeNeedAcrossCall_38;
                MR_Word IntParams_39;
                MR_Word ModuleInfo_40;
                MR_Word VarTypes_41;
                MR_Word ArgTypes_42;
                MR_Word ArgRegTypes_43;
                MR_Word InputArgsR_44;
                MR_Word InputArgsF_45;
                MR_Word InputArgs_48;
                MR_Word _OutputArgsR_46;
                MR_Word _OutputArgsF_47;

                hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_38);
                IntParams_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
                ModuleInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_39, (MR_Integer) 0))));
                VarTypes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_39, (MR_Integer) 1))));
                hlds__vartypes__lookup_var_types_3_p_0(VarTypes_41, ArgVars_34, &ArgTypes_42);
                hlds__arg_info__generic_call_arg_reg_types_6_p_0(ModuleInfo_40, VarTypes_41, GenericCall_33, ArgVars_34, MaybeArgRegs_36, &ArgRegTypes_43);
                hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_40, ArgVars_34, ArgModes_35, ArgTypes_42, ArgRegTypes_43, &InputArgsR_44, &InputArgsF_45, &_OutputArgsR_46, &_OutputArgsF_47);
                mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_44, InputArgsF_45, &InputArgs_48);
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
                      MR_Integer Var_159;
                      MR_Integer Var_160;
                      MR_Word Var_60;
                      MR_Integer Var_62;
                      MR_Word Var_63;

                      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_40, &Globals_59);
                      Var_159 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsR_44);
                      Var_160 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgsF_45);
                      ll_backend__call_gen__generic_call_info_8_p_0(Globals_59, GenericCall_33, Var_159, Var_160, &Var_60, &GenericVarsArgInfos_61, &Var_62, &Var_63);
                      mercury__assoc_list__keys_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), GenericVarsArgInfos_61, &GenericVars_64);
                      mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), GenericVars_64, InputArgs_48, &Inputs_65);
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Inputs_65, MaybeNeedAcrossCall_38, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word STATE_VARIABLE_IntervalInfo_163_163;

                      backend_libs__interval__require_in_regs_3_p_0(InputArgs_48, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_163_163);
                      backend_libs__interval__require_access_3_p_0(InputArgs_48, STATE_VARIABLE_IntervalInfo_163_163, &STATE_VARIABLE_IntervalInfo_113);
                      STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word ExtraArgs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
                MR_Word ExtraVars_80;
                MR_Word InputArgVarSet_81;
                MR_Word InputArgVars_84;
                MR_Word InputVars_85;
                MR_Word ArgVars_260;
                MR_Word IntParams_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0))));
                MR_Word ModuleInfo_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_262, (MR_Integer) 0))));
                MR_Word VarTypes_264;
                MR_Word PredId_265 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Integer ProcId_266 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word ProcInfo_268;
                MR_Word _PredInfo_258;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word MaybeNeedAcrossCall_259;

                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_263, PredId_265, ProcId_266, &_PredInfo_258, &ProcInfo_268);
                VarTypes_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntParams_262, (MR_Integer) 1))));
                ArgVars_260 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[11]), Args_76);
                ExtraVars_80 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&backend_libs__interval_scalar_common_1[0]), (MR_Word) (&backend_libs__interval_scalar_common_2[12]), ExtraArgs_77);
                hlds__arg_info__partition_proc_call_args_7_p_0(ProcInfo_268, VarTypes_264, ModuleInfo_263, ArgVars_260, &InputArgVarSet_81, &Var_82, &Var_83);
                mercury__set__to_sorted_list_2_p_0((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVarSet_81, &InputArgVars_84);
                mercury__list__append_3_p_1((MR_Word) (&backend_libs__interval_scalar_common_1[0]), InputArgVars_84, ExtraVars_80, &InputVars_85);
                succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(GoalInfo_7, &MaybeNeedAcrossCall_259);
                if (succeeded)
                {
                  succeeded = (MaybeNeedAcrossCall_259 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(InputVars_85, MaybeNeedAcrossCall_259, GoalInfo_7, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_115);
                else
                {
                  MR_Word STATE_VARIABLE_IntervalInfo_153_153;

                  backend_libs__interval__require_in_regs_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_153_153);
                  backend_libs__interval__require_access_3_p_0(InputVars_85, STATE_VARIABLE_IntervalInfo_153_153, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27 = TypeClassInfo_for_build_interval_info_acc_357;
                MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__1_1 = Goals_11;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = STATE_VARIABLE_IntervalInfo_0_112;
                MR_Box next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = STATE_VARIABLE_Acc_0_114;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27;
                tscc_proc_2_input_2_HeadVar__1_1 = next_value_of_tscc_proc_2_input_2_HeadVar__1_1;
                tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_IntervalInfo_0_3;
                tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Acc_0_5;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_230 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                if ((Goals_230 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  backend_libs__interval__no_open_intervals_2_p_0(STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                else
                {
                  MR_Word FirstDisjunct_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_230, (MR_Integer) 0))));
                  MR_Word StartAnchor_14;
                  MR_Word EndAnchor_15;
                  MR_Word BeforeId_16;
                  MR_Word AfterId_17;
                  MR_Word MaybeResumeVars_18;
                  MR_Word OpenIntervals_19;
                  MR_Word Var_219;
                  MR_Word STATE_VARIABLE_IntervalInfo_221_221;
                  MR_Box STATE_VARIABLE_Acc_222_222;
                  MR_Word STATE_VARIABLE_IntervalInfo_224_224;

                  {
                    Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (FirstDisjunct_12));
                  }
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_219, (MR_Integer) 1, &StartAnchor_14, &EndAnchor_15, &BeforeId_16, &AfterId_17, &MaybeResumeVars_18, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_221_221, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_222_222);
                  backend_libs__interval__build_interval_info_in_disj_11_p_0(TypeClassInfo_for_build_interval_info_acc_357, Goals_230, (MR_Integer) 1, StartAnchor_14, EndAnchor_15, BeforeId_16, AfterId_17, &OpenIntervals_19, STATE_VARIABLE_IntervalInfo_221_221, &STATE_VARIABLE_IntervalInfo_224_224, STATE_VARIABLE_Acc_222_222, &STATE_VARIABLE_Acc_115);
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_14, BeforeId_16, MaybeResumeVars_18, OpenIntervals_19, STATE_VARIABLE_IntervalInfo_224_224, &STATE_VARIABLE_IntervalInfo_113);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word OpenIntervalsList_23;
                MR_Word STATE_VARIABLE_IntervalInfo_206_206;
                MR_Box STATE_VARIABLE_Acc_207_207;
                MR_Word STATE_VARIABLE_IntervalInfo_208_208;
                MR_Word STATE_VARIABLE_IntervalInfo_211_211;
                MR_Word Var_212;
                MR_Word STATE_VARIABLE_IntervalInfo_213_213;
                MR_Word StartAnchor_231;
                MR_Word EndAnchor_232;
                MR_Word BeforeId_233;
                MR_Word AfterId_234;
                MR_Word MaybeResumeVars_235;
                MR_Word OpenIntervals_236;

                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, &StartAnchor_231, &EndAnchor_232, &BeforeId_233, &AfterId_234, &MaybeResumeVars_235, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_206_206, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_207_207);
                backend_libs__interval__build_interval_info_in_cases_10_p_0(TypeClassInfo_for_build_interval_info_acc_357, Cases_22, StartAnchor_231, EndAnchor_232, BeforeId_233, AfterId_234, &OpenIntervalsList_23, STATE_VARIABLE_IntervalInfo_206_206, &STATE_VARIABLE_IntervalInfo_208_208, STATE_VARIABLE_Acc_207_207, &STATE_VARIABLE_Acc_115);
                OpenIntervals_236 = mercury__set__union_list_1_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), OpenIntervalsList_23);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_231, BeforeId_233, MaybeResumeVars_235, OpenIntervals_236, STATE_VARIABLE_IntervalInfo_208_208, &STATE_VARIABLE_IntervalInfo_211_211);
                {
                  Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_20));
                  MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                backend_libs__interval__require_in_regs_3_p_0(Var_212, STATE_VARIABLE_IntervalInfo_211_211, &STATE_VARIABLE_IntervalInfo_213_213);
                backend_libs__interval__require_access_3_p_0(Var_212, STATE_VARIABLE_IntervalInfo_213_213, &STATE_VARIABLE_IntervalInfo_113);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word SubGoal_248 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word TermVar_32;
                MR_Word Var_165;

                succeeded = ((((MR_tag((MR_Word) Reason_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_31, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  TermVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_31, (MR_Integer) 1))));
                  Var_165 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_31, (MR_Integer) 2))) & (MR_Integer) 3);
                  succeeded = (Var_165 == (MR_Integer) 1);
                }
                if (succeeded)
                {
                  MR_Word Var_166;

                  {
                    Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (TermVar_32));
                    MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  backend_libs__interval__require_access_3_p_0(Var_166, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_113);
                  STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_0_114;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = TypeClassInfo_for_build_interval_info_acc_357;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = SubGoal_248;
                  MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = STATE_VARIABLE_IntervalInfo_0_112;
                  MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = STATE_VARIABLE_Acc_0_114;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
                  tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                  tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
                  tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word Then_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Else_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word CondOpenIntervals_29;
                MR_Word Var_171;
                MR_Word STATE_VARIABLE_IntervalInfo_173_173;
                MR_Box STATE_VARIABLE_Acc_174_174;
                MR_Word STATE_VARIABLE_IntervalInfo_175_175;
                MR_Word STATE_VARIABLE_IntervalInfo_176_176;
                MR_Box STATE_VARIABLE_Acc_177_177;
                MR_Word STATE_VARIABLE_IntervalInfo_178_178;
                MR_Word STATE_VARIABLE_IntervalInfo_179_179;
                MR_Box STATE_VARIABLE_Acc_180_180;
                MR_Word STATE_VARIABLE_IntervalInfo_182_182;
                MR_Box STATE_VARIABLE_Acc_183_183;
                MR_Word STATE_VARIABLE_IntervalInfo_184_184;
                MR_Word STATE_VARIABLE_IntervalInfo_185_185;
                MR_Box STATE_VARIABLE_Acc_186_186;
                MR_Word STATE_VARIABLE_IntervalInfo_188_188;
                MR_Word StartAnchor_243;
                MR_Word EndAnchor_244;
                MR_Word BeforeId_245;
                MR_Word AfterId_246;
                MR_Word MaybeResumeVars_247;
                MR_Word _ElseOpenIntervals_30;

                {
                  Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Cond_26));
                }
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(GoalInfo_7, Var_171, (MR_Integer) 0, &StartAnchor_243, &EndAnchor_244, &BeforeId_245, &AfterId_246, &MaybeResumeVars_247, STATE_VARIABLE_IntervalInfo_0_112, &STATE_VARIABLE_IntervalInfo_173_173, STATE_VARIABLE_Acc_0_114, &STATE_VARIABLE_Acc_174_174);
                backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_244, AfterId_246, STATE_VARIABLE_IntervalInfo_173_173, &STATE_VARIABLE_IntervalInfo_175_175);
                backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, Then_27, STATE_VARIABLE_IntervalInfo_175_175, &STATE_VARIABLE_IntervalInfo_176_176, STATE_VARIABLE_Acc_174_174, &STATE_VARIABLE_Acc_177_177);
                backend_libs__interval__reached_cond_then_3_p_0(GoalInfo_7, STATE_VARIABLE_IntervalInfo_176_176, &STATE_VARIABLE_IntervalInfo_178_178);
                backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, Cond_26, STATE_VARIABLE_IntervalInfo_178_178, &STATE_VARIABLE_IntervalInfo_179_179, STATE_VARIABLE_Acc_177_177, &STATE_VARIABLE_Acc_180_180);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, StartAnchor_243, BeforeId_245, &CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_179_179, &STATE_VARIABLE_IntervalInfo_182_182, STATE_VARIABLE_Acc_180_180, &STATE_VARIABLE_Acc_183_183);
                backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_244, AfterId_246, STATE_VARIABLE_IntervalInfo_182_182, &STATE_VARIABLE_IntervalInfo_184_184);
                backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_357, Else_28, STATE_VARIABLE_IntervalInfo_184_184, &STATE_VARIABLE_IntervalInfo_185_185, STATE_VARIABLE_Acc_183_183, &STATE_VARIABLE_Acc_186_186);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, StartAnchor_243, BeforeId_245, &_ElseOpenIntervals_30, STATE_VARIABLE_IntervalInfo_185_185, &STATE_VARIABLE_IntervalInfo_188_188, STATE_VARIABLE_Acc_186_186, &STATE_VARIABLE_Acc_115);
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(StartAnchor_243, BeforeId_245, MaybeResumeVars_247, CondOpenIntervals_29, STATE_VARIABLE_IntervalInfo_188_188, &STATE_VARIABLE_IntervalInfo_113);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_IntervalInfo_113 = STATE_VARIABLE_IntervalInfo_113;
      tscc_output_2_STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_115;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_build_interval_info_acc_27 = tscc_proc_2_input_1_TypeClassInfo_for_build_interval_info_acc_27;
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
        MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_IntervalInfo_23_23;
        MR_Box STATE_VARIABLE_Acc_24_24;
        MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
        MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
        MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
        MR_Box next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;

        backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(TypeClassInfo_for_build_interval_info_acc_27, Goals_15, STATE_VARIABLE_IntervalInfo_0_3, &STATE_VARIABLE_IntervalInfo_23_23, STATE_VARIABLE_Acc_0_5, &STATE_VARIABLE_Acc_24_24);
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = TypeClassInfo_for_build_interval_info_acc_27;
        next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Goal_14;
        next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = STATE_VARIABLE_IntervalInfo_23_23;
        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = STATE_VARIABLE_Acc_24_24;
        tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_build_interval_info_acc_357;
        tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
        tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_IntervalInfo_0_112;
        tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Acc_0_114;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_IntervalInfo_113 = STATE_VARIABLE_IntervalInfo_4;
      tscc_output_2_STATE_VARIABLE_Acc_115 = STATE_VARIABLE_Acc_6;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_IntervalInfo_113 = tscc_output_1_STATE_VARIABLE_IntervalInfo_113;
    *tscc_output_ptr_2_STATE_VARIABLE_Acc_115 = tscc_output_2_STATE_VARIABLE_Acc_115;
    return;
  }
}

static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_46,
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
    MR_Word Case_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word OpenIntervals_27;
    MR_Word OpenIntervalsList_28;
    MR_Word Goal_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_21, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_IntervalInfo_38_38;
    MR_Word STATE_VARIABLE_IntervalInfo_39_39;
    MR_Box STATE_VARIABLE_Acc_40_40;
    MR_Word STATE_VARIABLE_IntervalInfo_42_42;
    MR_Box STATE_VARIABLE_Acc_43_43;

    backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_3, AfterId_5, STATE_VARIABLE_IntervalInfo_0_7, &STATE_VARIABLE_IntervalInfo_38_38);
    backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_46, Goal_33, STATE_VARIABLE_IntervalInfo_38_38, &STATE_VARIABLE_IntervalInfo_39_39, STATE_VARIABLE_Acc_0_9, &STATE_VARIABLE_Acc_40_40);
    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, StartAnchor_2, BeforeId_4, &OpenIntervals_27, STATE_VARIABLE_IntervalInfo_39_39, &STATE_VARIABLE_IntervalInfo_42_42, STATE_VARIABLE_Acc_40_40, &STATE_VARIABLE_Acc_43_43);
    backend_libs__interval__build_interval_info_in_cases_10_p_0(TypeClassInfo_for_build_interval_info_acc_46, Cases_22, StartAnchor_2, EndAnchor_3, BeforeId_4, AfterId_5, &OpenIntervalsList_28, STATE_VARIABLE_IntervalInfo_42_42, STATE_VARIABLE_IntervalInfo_8, STATE_VARIABLE_Acc_43_43, STATE_VARIABLE_Acc_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OpenIntervals_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OpenIntervalsList_28));
    }
  }
}

static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
  MR_Word TypeClassInfo_for_build_interval_info_acc_46,
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
    MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_IntervalInfo_38_38;
    MR_Word STATE_VARIABLE_IntervalInfo_39_39;
    MR_Box STATE_VARIABLE_Acc_40_40;
    MR_Word STATE_VARIABLE_IntervalInfo_41_41;
    MR_Box STATE_VARIABLE_Acc_42_42;
    MR_Word _OpenIntervals_33;

    backend_libs__interval__enter_branch_tail_4_p_0(EndAnchor_4, AfterId_6, STATE_VARIABLE_IntervalInfo_0_8, &STATE_VARIABLE_IntervalInfo_38_38);
    backend_libs__interval__build_interval_info_in_goal_5_p_0(TypeClassInfo_for_build_interval_info_acc_46, Goal_23, STATE_VARIABLE_IntervalInfo_38_38, &STATE_VARIABLE_IntervalInfo_39_39, STATE_VARIABLE_Acc_0_10, &STATE_VARIABLE_Acc_40_40);
    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(MaybeNeedsFlush_2, StartAnchor_3, BeforeId_5, HeadVar__7_7, STATE_VARIABLE_IntervalInfo_39_39, &STATE_VARIABLE_IntervalInfo_41_41, STATE_VARIABLE_Acc_40_40, &STATE_VARIABLE_Acc_42_42);
    backend_libs__interval__build_interval_info_in_disj_11_p_0(TypeClassInfo_for_build_interval_info_acc_46, Goals_24, (MR_Integer) 0, StartAnchor_3, EndAnchor_4, BeforeId_5, AfterId_6, &_OpenIntervals_33, STATE_VARIABLE_IntervalInfo_41_41, STATE_VARIABLE_IntervalInfo_9, STATE_VARIABLE_Acc_42_42, STATE_VARIABLE_Acc_11);
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
  {
    MR_Word STATE_VARIABLE_IntervalInfo_17_17;
    MR_Word STATE_VARIABLE_IntervalInfo_18_18;
    MR_Word STATE_VARIABLE_IntervalInfo_19_19;
    MR_Word EndMap0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12))));
    MR_Word EndMap_27;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
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

    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (BeforeId_10)), ((MR_Box) (StartArchor_9)), EndMap0_26, &EndMap_27);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 8) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 9) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 10) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 11) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 12) = ((MR_Box) (EndMap_27));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 13) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 14) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_17_17, 15) = ((MR_Box) (Var_59));
    }
    if ((MaybeResumeVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_IntervalInfo_18_18 = STATE_VARIABLE_IntervalInfo_17_17;
    else
    {
      MR_Word ResumeVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResumeVars_11, (MR_Integer) 0))));

      backend_libs__interval__require_flushed_3_p_0(ResumeVars_14, STATE_VARIABLE_IntervalInfo_17_17, &STATE_VARIABLE_IntervalInfo_18_18);
    }
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 0))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 1))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 2))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 3))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 4))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 5))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 7))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 8))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 9))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 10))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 11))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 12))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 13))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 14))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 1) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 2) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 3) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 4) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 5) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 6) = ((MR_Box) (BeforeId_10));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 7) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 8) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 9) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 10) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 11) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 12) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 13) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 14) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_19_19, 15) = ((MR_Box) (Var_82));
    }
    backend_libs__interval__set_open_intervals_3_p_0(OpenIntervals_12, STATE_VARIABLE_IntervalInfo_19_19, STATE_VARIABLE_IntervalInfo_16);
  }
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
    MR_Word BranchResumeMap0_58;
    MR_Word BranchResumeMap_59;
    MR_Word ResumeVars_27;
    MR_Word ResumeGoalInfo_25;
    MR_Word ResumePoint_26;
    MR_Word ResumeLocs_28;
    MR_Word Var_39;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
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
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word StoreMap_30;

    GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_13);
    backend_libs__interval__record_branch_end_info_3_p_0(GoalId_23, STATE_VARIABLE_IntervalInfo_0_34, &STATE_VARIABLE_IntervalInfo_38_38);
    succeeded = (MaybeResumeGoal_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResumeGoal_14, (MR_Integer) 0))));
      ResumeGoalInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
      succeeded = hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(ResumeGoalInfo_25, &ResumePoint_26);
      if (succeeded)
      {
        succeeded = (ResumePoint_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ResumeVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_26, (MR_Integer) 0))));
          ResumeLocs_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_26, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (ResumeLocs_28 != (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
    {
      HasResumeSave_29 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeResumeVars_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ResumeVars_27));
      }
    }
    else
    {
      HasResumeSave_29 = (MR_Integer) 1;
      *MaybeResumeVars_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
    BranchResumeMap0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3))));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0), ((MR_Box) (GoalId_23)), ((MR_Box) (HasResumeSave_29)), BranchResumeMap0_58, &BranchResumeMap_59);
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 2) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 3) = ((MR_Box) (BranchResumeMap_59));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 4) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 5) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 6) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 7) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 8) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 9) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 10) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 11) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 12) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 13) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 14) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_40_40, 15) = ((MR_Box) (Var_91));
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.reached_branch_end\'/12", (MR_String) "no store map");
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *EndAnchor_17 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Construct_15));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (GoalId_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *StartAnchor_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Construct_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalId_23));
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
    backend_libs__interval__no_open_intervals_2_p_0(STATE_VARIABLE_IntervalInfo_45_45, &STATE_VARIABLE_IntervalInfo_46_46);
    backend_libs__interval__get_cur_interval_2_p_0(AfterIntervalId_19, STATE_VARIABLE_IntervalInfo_46_46);
    backend_libs__interval__record_interval_start_4_p_0(*AfterIntervalId_19, *EndAnchor_17, STATE_VARIABLE_IntervalInfo_46_46, &STATE_VARIABLE_IntervalInfo_47_47);
    backend_libs__interval__new_interval_id_3_p_0(BeforeIntervalId_18, STATE_VARIABLE_IntervalInfo_47_47, STATE_VARIABLE_IntervalInfo_35);
    *STATE_VARIABLE_Acc_37 = STATE_VARIABLE_Acc_0_36;
  }
}

static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
  MR_Word GoalId_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13)
{
  {
    MR_Word FlushedLater_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
    MR_Word AccessedLater_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
    MR_Word CurInterval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
    MR_Word BranchEndMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4))));
    MR_Word BranchEndInfo_10;
    MR_Word BranchEndMap_11;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
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
    MR_Word Var_90;

    {
      BranchEndInfo_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BranchEndInfo_10, 0) = ((MR_Box) (FlushedLater_6));
      MR_hl_field(MR_mktag(0), BranchEndInfo_10, 1) = ((MR_Box) (AccessedLater_7));
      MR_hl_field(MR_mktag(0), BranchEndInfo_10, 2) = ((MR_Box) (CurInterval_8));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0), ((MR_Box) (GoalId_4)), ((MR_Box) (BranchEndInfo_10)), BranchEndMap0_9, &BranchEndMap_11);
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (BranchEndMap_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_90));
    }
  }
}

static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word IntervalInfo_3)
{
  *HeadVar__1_1 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_3, (MR_Integer) 6))));
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
  {
    MR_bool succeeded;

    if ((MaybeNeedAcrossCall_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.build_interval_info_at_call\'/7", (MR_String) "no need across call");
        return;
      }
    }
    else
    {
      MR_Word NeedAcrossCall_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNeedAcrossCall_9, (MR_Integer) 0))));
      MR_Word ForwardVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_13, (MR_Integer) 0))));
      MR_Word ResumeVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_13, (MR_Integer) 1))));
      MR_Word NondetLiveVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_13, (MR_Integer) 2))));
      MR_Word VarsOnStack0_17;
      MR_Word GoalId_18;
      MR_Word CallAnchor_19;
      MR_Word AfterCallId_20;
      MR_Word BeforeCallId_21;
      MR_Word InstMapDelta_22;
      MR_Word IntParams_23;
      MR_Word VarsOnStack_24;
      MR_Word CodeModel_25;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_IntervalInfo_36_36;
      MR_Word STATE_VARIABLE_IntervalInfo_37_37;
      MR_Word STATE_VARIABLE_IntervalInfo_38_38;
      MR_Word STATE_VARIABLE_IntervalInfo_40_40;
      MR_Word STATE_VARIABLE_IntervalInfo_42_42;
      MR_Word STATE_VARIABLE_IntervalInfo_43_43;
      MR_Word STATE_VARIABLE_IntervalInfo_44_44;
      MR_Word STATE_VARIABLE_IntervalInfo_45_45;
      MR_Word STATE_VARIABLE_IntervalInfo_46_46;
      MR_Word STATE_VARIABLE_IntervalInfo_47_47;

      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (NondetLiveVars_16));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ResumeVars_15));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ForwardVars_14));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
      }
      VarsOnStack0_17 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32);
      GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
      {
        CallAnchor_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CallAnchor_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), CallAnchor_19, 1) = ((MR_Box) (GoalId_18));
      }
      AfterCallId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 6))));
      backend_libs__interval__new_interval_id_3_p_0(&BeforeCallId_21, STATE_VARIABLE_IntervalInfo_0_26, &STATE_VARIABLE_IntervalInfo_36_36);
      backend_libs__interval__record_interval_start_4_p_0(AfterCallId_20, CallAnchor_19, STATE_VARIABLE_IntervalInfo_36_36, &STATE_VARIABLE_IntervalInfo_37_37);
      backend_libs__interval__record_interval_end_4_p_0(BeforeCallId_21, CallAnchor_19, STATE_VARIABLE_IntervalInfo_37_37, &STATE_VARIABLE_IntervalInfo_38_38);
      InstMapDelta_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
      IntParams_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0))));
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_22);
      if (!(succeeded))
      {
        MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntParams_23, (MR_Integer) 2))) & (MR_Integer) 1);

        succeeded = (Var_39 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        backend_libs__interval__record_interval_succ_4_p_0(BeforeCallId_21, AfterCallId_20, STATE_VARIABLE_IntervalInfo_38_38, &STATE_VARIABLE_IntervalInfo_40_40);
        VarsOnStack_24 = VarsOnStack0_17;
      }
      else
      {
        backend_libs__interval__record_interval_no_succ_3_p_0(BeforeCallId_21, STATE_VARIABLE_IntervalInfo_38_38, &STATE_VARIABLE_IntervalInfo_40_40);
        VarsOnStack_24 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      }
      backend_libs__interval__set_cur_interval_3_p_0(BeforeCallId_21, STATE_VARIABLE_IntervalInfo_40_40, &STATE_VARIABLE_IntervalInfo_42_42);
      backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(CallAnchor_19, STATE_VARIABLE_IntervalInfo_42_42, &STATE_VARIABLE_IntervalInfo_43_43);
      CodeModel_25 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_10);
      switch (CodeModel_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_IntervalInfo_44_44 = STATE_VARIABLE_IntervalInfo_43_43;
          break;
        case (MR_Integer) 2:
          backend_libs__interval__record_model_non_anchor_3_p_0(CallAnchor_19, STATE_VARIABLE_IntervalInfo_43_43, &STATE_VARIABLE_IntervalInfo_44_44);
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_IntervalInfo_44_44 = STATE_VARIABLE_IntervalInfo_43_43;
          break;
      }
      backend_libs__interval__one_open_interval_3_p_0(BeforeCallId_21, STATE_VARIABLE_IntervalInfo_44_44, &STATE_VARIABLE_IntervalInfo_45_45);
      backend_libs__interval__require_flushed_3_p_0(VarsOnStack_24, STATE_VARIABLE_IntervalInfo_45_45, &STATE_VARIABLE_IntervalInfo_46_46);
      backend_libs__interval__require_in_regs_3_p_0(Inputs_8, STATE_VARIABLE_IntervalInfo_46_46, &STATE_VARIABLE_IntervalInfo_47_47);
      backend_libs__interval__require_access_3_p_0(Inputs_8, STATE_VARIABLE_IntervalInfo_47_47, STATE_VARIABLE_IntervalInfo_27);
    }
    *STATE_VARIABLE_Acc_29 = STATE_VARIABLE_Acc_0_28;
  }
}

static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9)
{
  {
    MR_Word ModelNonAnchors0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10))));
    MR_Word ModelNonAnchors_7;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;

    mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Anchor_4)), ModelNonAnchors0_6, &ModelNonAnchors_7);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ModelNonAnchors_7));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_41));
    }
  }
}

static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9)
{
  {
    MR_Word FlushedLater0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1))));
    MR_Word FlushedLater_7;
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
    MR_Word Var_41;

    FlushedLater_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FlushedLater0_6, Vars_4);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FlushedLater_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_41));
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
  MR_Word Id_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_9,
  MR_Word * STATE_VARIABLE_IntervalInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word SuccMap0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13))));
    MR_Word SuccMap_8;
    MR_Box conv0__Succ0_7;
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
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), SuccMap0_6, ((MR_Box) (Id_4)), &conv0__Succ0_7);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.interval.record_interval_no_succ\'/3", (MR_String) "already in succ map");
        return;
      }
    }
    else
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), ((MR_Box) (Id_4)), ((MR_Box) ((MR_Unsigned) 0U)), SuccMap0_6, &SuccMap_8);
    }
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (SuccMap_8));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_45));
    }
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
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_build_interval_info_acc_9, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__6_6;

    func_0(((MR_Box) (TypeClassInfo_for_build_interval_info_acc_9)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), ((MR_Box) (HeadVar__5_5)), &conv1_HeadVar__6_6, HeadVar__7_7, HeadVar__8_8);
    *HeadVar__6_6 = ((MR_Word) (conv1_HeadVar__6_6));
  }
}

static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_8,
  MR_Word * STATE_VARIABLE_IntervalInfo_9)
{
  {
    MR_Word AccessedLater0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2))));
    MR_Word AccessedLater_7;
    MR_Word Var_26;
    MR_Word Var_27;
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

    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_4, AccessedLater0_6, &AccessedLater_7);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AccessedLater_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_41));
    }
  }
}

static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_7,
  MR_Word * STATE_VARIABLE_IntervalInfo_8)
{
  {
    MR_Word CurIntervalId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 6))));

    backend_libs__interval__record_interval_vars_4_p_0(CurIntervalId_6, Vars_4, STATE_VARIABLE_IntervalInfo_0_7, STATE_VARIABLE_IntervalInfo_8);
  }
}

void MR_CALL 
backend_libs__interval__record_interval_vars_4_p_0(
  MR_Word Id_5,
  MR_Word NewVars_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13)
{
  {
    MR_bool succeeded;
    MR_Word VarsMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14))));
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
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (VarsMap_11));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_46));
    }
  }
}

static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
  MR_Word STATE_VARIABLE_IntervalInfo_0_4,
  MR_Word * STATE_VARIABLE_IntervalInfo_5)
{
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
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 1))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 2))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 3))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 4))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 5))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 6))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 7))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 9))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 10))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 11))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 12))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 13))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 14))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
  MR_Word GoalInfo_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_12,
  MR_Word * STATE_VARIABLE_IntervalInfo_13)
{
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
    MR_Word CurInterval_26;
    MR_Word CondEndMap0_27;
    MR_Word CondEndMap_28;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;

    GoalId_6 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_4);
    CondEndMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5))));
    CurInterval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (GoalId_6)), ((MR_Box) (CurInterval_26)), CondEndMap0_27, &CondEndMap_28);
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4))));
    ThenStartId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 1) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 2) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 3) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 4) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 5) = ((MR_Box) (CondEndMap_28));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 6) = ((MR_Box) (ThenStartId_7));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 7) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 8) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 9) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 10) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 11) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 12) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 13) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 14) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_14_14, 15) = ((MR_Box) (Var_75));
    }
    {
      CondThenAnchor_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), CondThenAnchor_8, 0) = ((MR_Box) (GoalId_6));
    }
    backend_libs__interval__record_interval_start_4_p_0(ThenStartId_7, CondThenAnchor_8, STATE_VARIABLE_IntervalInfo_14_14, &STATE_VARIABLE_IntervalInfo_15_15);
    backend_libs__interval__new_interval_id_3_p_0(&CondTailId_9, STATE_VARIABLE_IntervalInfo_15_15, &STATE_VARIABLE_IntervalInfo_16_16);
    backend_libs__interval__record_interval_end_4_p_0(CondTailId_9, CondThenAnchor_8, STATE_VARIABLE_IntervalInfo_16_16, &STATE_VARIABLE_IntervalInfo_17_17);
    backend_libs__interval__record_interval_succ_4_p_0(CondTailId_9, ThenStartId_7, STATE_VARIABLE_IntervalInfo_17_17, &STATE_VARIABLE_IntervalInfo_18_18);
    backend_libs__interval__set_cur_interval_3_p_0(CondTailId_9, STATE_VARIABLE_IntervalInfo_18_18, &STATE_VARIABLE_IntervalInfo_19_19);
    backend_libs__interval__get_open_intervals_2_p_0(STATE_VARIABLE_IntervalInfo_19_19, &OpenIntervals0_10);
    mercury__set__insert_3_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), ((MR_Box) (CondTailId_9)), OpenIntervals0_10, &OpenIntervals_11);
    backend_libs__interval__set_open_intervals_3_p_0(OpenIntervals_11, STATE_VARIABLE_IntervalInfo_19_19, STATE_VARIABLE_IntervalInfo_13);
  }
}

static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
  MR_Word Id_5,
  MR_Word Start_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_10,
  MR_Word * STATE_VARIABLE_IntervalInfo_11)
{
  {
    MR_Word StartMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11))));
    MR_Word StartMap_9;
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
    MR_Word Var_43;

    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Id_5)), ((MR_Box) (Start_6)), StartMap0_8, &StartMap_9);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (StartMap_9));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
  MR_Word * Id_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_11,
  MR_Word * STATE_VARIABLE_IntervalInfo_12)
{
  {
    MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7))));
    MR_Word IntervalVars0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14))));
    MR_Integer Num_8;
    MR_Word Counter_9;
    MR_Word IntervalVars_10;
    MR_Word Var_13;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;

    mercury__counter__allocate_3_p_0(&Num_8, Counter0_6, &Counter_9);
    *Id_4 = (MR_Word) (Num_8);
    Var_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (*Id_4)), ((MR_Box) (Var_13)), IntervalVars0_7, &IntervalVars_10);
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Counter_9));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntervalVars_10));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_61));
    }
  }
}

static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
  MR_Word OpenIntervals_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (OpenIntervals_4));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
    }
  }
}

static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
  MR_Word IntervalInfo_3,
  MR_Word * OpenIntervals_4)
{
  *OpenIntervals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntervalInfo_3, (MR_Integer) 8))));
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
  {
    MR_Word BranchStartId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6))));
    MR_Word STATE_VARIABLE_IntervalInfo_20_20;
    MR_Word STATE_VARIABLE_IntervalInfo_21_21;
    MR_Word StartMap0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11))));
    MR_Word StartMap_46;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (BranchStartId_15)), ((MR_Box) (StartAnchor_10)), StartMap0_45, &StartMap_46);
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (StartMap_46));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (Var_78));
    }
    backend_libs__interval__record_interval_succ_4_p_0(BeforeId_11, BranchStartId_15, STATE_VARIABLE_IntervalInfo_20_20, &STATE_VARIABLE_IntervalInfo_21_21);
    *OpenIntervals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 8))));
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
}

static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_OpenIntervalVars_10;

    backend_libs__interval__gather_interval_vars_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_OpenIntervalVars_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_OpenIntervalVars_10));
  }
}

static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
  MR_Word Anchor_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_17,
  MR_Word * STATE_VARIABLE_IntervalInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word AnchorFollowMap0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9))));
    MR_Word IntervalVarMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14))));
    MR_Word CurOpenIntervals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8))));
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
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (IntervalVarMap_7));
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
      MR_Word OpenIntervalVars0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AnchorFollowInfo0_10, (MR_Integer) 0))));
      MR_Word OpenIntervals0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AnchorFollowInfo0_10, (MR_Integer) 1))));
      MR_Word OpenIntervalVars_13;
      MR_Word OpenIntervals_14;
      MR_Word AnchorFollowInfo_15;

      OpenIntervalVars_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OpenIntervalVars0_11, CurOpenIntervalVars_9);
      OpenIntervals_14 = mercury__set__union_2_f_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), OpenIntervals0_12, CurOpenIntervals_8);
      {
        AnchorFollowInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AnchorFollowInfo_15, 0) = ((MR_Box) (OpenIntervalVars_13));
        MR_hl_field(MR_mktag(0), AnchorFollowInfo_15, 1) = ((MR_Box) (OpenIntervals_14));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), ((MR_Box) (Anchor_4)), ((MR_Box) (AnchorFollowInfo_15)), AnchorFollowMap0_6, &AnchorFollowMap_16);
    }
    else
    {
      MR_Word AnchorFollowInfo_22;

      {
        AnchorFollowInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AnchorFollowInfo_22, 0) = ((MR_Box) (CurOpenIntervalVars_9));
        MR_hl_field(MR_mktag(0), AnchorFollowInfo_22, 1) = ((MR_Box) (CurOpenIntervals_8));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0), ((MR_Box) (Anchor_4)), ((MR_Box) (AnchorFollowInfo_22)), AnchorFollowMap0_6, &AnchorFollowMap_16);
    }
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (AnchorFollowMap_16));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_83));
    }
  }
}

static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
  MR_Word EndAnchor_5,
  MR_Word AfterId_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_9,
  MR_Word * STATE_VARIABLE_IntervalInfo_10)
{
  {
    MR_Word BranchTailId_8;
    MR_Word STATE_VARIABLE_IntervalInfo_11_11;
    MR_Word STATE_VARIABLE_IntervalInfo_12_12;
    MR_Word STATE_VARIABLE_IntervalInfo_13_13;
    MR_Word STATE_VARIABLE_IntervalInfo_14_14;
    MR_Word Counter0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7))));
    MR_Word IntervalVars0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14))));
    MR_Integer Num_22;
    MR_Word Counter_23;
    MR_Word IntervalVars_24;
    MR_Word Var_25;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;

    mercury__counter__allocate_3_p_0(&Num_22, Counter0_20, &Counter_23);
    BranchTailId_8 = (MR_Word) (Num_22);
    Var_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[1]), ((MR_Box) (BranchTailId_8)), ((MR_Box) (Var_25)), IntervalVars0_21, &IntervalVars_24);
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15))));
    {
      STATE_VARIABLE_IntervalInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 2) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 3) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 4) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 5) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 6) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 7) = ((MR_Box) (Counter_23));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 8) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 9) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 10) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 11) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 12) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 13) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 14) = ((MR_Box) (IntervalVars_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_11_11, 15) = ((MR_Box) (Var_73));
    }
    backend_libs__interval__record_interval_end_4_p_0(BranchTailId_8, EndAnchor_5, STATE_VARIABLE_IntervalInfo_11_11, &STATE_VARIABLE_IntervalInfo_12_12);
    backend_libs__interval__record_interval_succ_4_p_0(BranchTailId_8, AfterId_6, STATE_VARIABLE_IntervalInfo_12_12, &STATE_VARIABLE_IntervalInfo_13_13);
    backend_libs__interval__set_cur_interval_3_p_0(BranchTailId_8, STATE_VARIABLE_IntervalInfo_13_13, &STATE_VARIABLE_IntervalInfo_14_14);
    backend_libs__interval__one_open_interval_3_p_0(BranchTailId_8, STATE_VARIABLE_IntervalInfo_14_14, STATE_VARIABLE_IntervalInfo_10);
  }
}

static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
  MR_Word Id_5,
  MR_Word Succ_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_11,
  MR_Word * STATE_VARIABLE_IntervalInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word SuccMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13))));
    MR_Word SuccMap_10;
    MR_Word Succ0_9;
    MR_Box conv0_Succ0_9;
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
    MR_Word Var_47;

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
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Succ_6));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Succ0_9));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), ((MR_Box) (Id_5)), ((MR_Box) (Var_13)), SuccMap0_8, &SuccMap_10);
    }
    else
    {
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Succ_6));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval_scalar_common_1[3]), ((MR_Box) (Id_5)), ((MR_Box) (Var_14)), SuccMap0_8, &SuccMap_10);
    }
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (SuccMap_10));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
  MR_Word Id_5,
  MR_Word End_6,
  MR_Word STATE_VARIABLE_IntervalInfo_0_10,
  MR_Word * STATE_VARIABLE_IntervalInfo_11)
{
  {
    MR_Word EndMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12))));
    MR_Word EndMap_9;
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
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0), (MR_Word) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0), ((MR_Box) (Id_5)), ((MR_Box) (End_6)), EndMap0_8, &EndMap_9);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (EndMap_9));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
  MR_Word CurInterval_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (CurInterval_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_24));
    }
  }
}

static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
  MR_Word IntervalId_4,
  MR_Word STATE_VARIABLE_IntervalInfo_0_6,
  MR_Word * STATE_VARIABLE_IntervalInfo_7)
{
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
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6))));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntervalInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_25));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgMode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgsModes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CellFromToInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_5, (MR_Integer) 0))));
      MR_Word ArgFromToInsts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_5, (MR_Integer) 1))));
      MR_Word FinalCellInst_10;
      MR_Word FinalArgInst_12;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__mode_util__from_to_insts_is_fully_input_2_p_0(ModuleInfo_1, CellFromToInsts_7);
      if (succeeded)
      {
        succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(ModuleInfo_1, ArgFromToInsts_8);
        if (succeeded)
        {
          FinalCellInst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellFromToInsts_7, (MR_Integer) 1))));
          FinalArgInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgFromToInsts_8, (MR_Integer) 1))));
          succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, FinalCellInst_10);
          if (succeeded)
          {
            succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, FinalArgInst_12);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = ArgsModes_6;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
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
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____anchor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____anchor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____anchor_follow_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____anchor_follow_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____branch_construct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____branch_construct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____branch_end_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____branch_end_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____insert_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____insert_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____insert_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____insert_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____interval_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____interval_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____interval_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____interval_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____interval_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____interval_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____interval_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____interval_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____maybe_needs_flush_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____maybe_needs_flush_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____rename_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____rename_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____resume_save_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____resume_save_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____save_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____save_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__interval____Unify____save_point_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__interval____Compare____save_point_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_map_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_var_info_0);
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
