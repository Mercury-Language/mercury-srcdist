/*
** Automatically generated from `global_data.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module ll_backend.global_data. */
/* :- implementation. */

/*
INIT mercury__ll_backend__global_data__init
ENDINIT
*/

#include "ll_backend.global_data.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0;

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0[7];

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0[7];

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0;

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0[1];

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0[1];

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0[2];

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0[2];

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0;

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0[1];

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0[1];

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0;

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0[3];

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0[3];

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0;

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0[1];

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0[1];

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0;

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0[5];

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0[5];

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0[1];

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0[1];

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0[1];

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[3];

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[3];

static const MR_DuArgLocn ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0[1];

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0;

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0[2];

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0[2];

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0;

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0[1];

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0[1];

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0[1];

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0[1];

static const MR_NotagFunctorDesc ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0;

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__792__1_2_p_0(
  MR_Word ll_backend__global_data__SubInfoA_9,
  MR_Word ll_backend__global_data__SubInfoB_14);

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__534__1_1_p_0(
  MR_Word ll_backend__global_data__VectorData_7);

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__533__1_1_p_0(
  MR_Word ll_backend__global_data__LLDSTypes_6);

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Output0_5,
  MR_Word * ll_backend__global_data__Output_6);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Input0_5,
  MR_Word * ll_backend__global_data__Input_6);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Comp0_5,
  MR_Word * ll_backend__global_data__Comp_6);

static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Instr_0_9,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Instr_10);

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
  MR_Word ll_backend__global_data__GlobalDataRemap_4,
  MR_Word ll_backend__global_data__Instr0_5,
  MR_Word * ll_backend__global_data__Instr_6);

static void MR_CALL 
ll_backend__global_data__remap_ts_table_index_3_p_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Integer ll_backend__global_data__HeadVar__2_2,
  MR_Integer * ll_backend__global_data__HeadVar__3_3);

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11);

static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word * ll_backend__global_data__HeadVar__3_3);

static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Rval0_5,
  MR_Word * ll_backend__global_data__Rval_6);

static void MR_CALL 
ll_backend__global_data__remap_lval_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Lval0_5,
  MR_Word * ll_backend__global_data__Lval_6);

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11);

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Contents_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Contents_9);

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10);

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9);

static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
  MR_Word ll_backend__global_data__TypeNumRemap_6,
  MR_Word ll_backend__global_data__OldTypeNum_7,
  MR_Word ll_backend__global_data__VectorCellGroup_8,
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12);

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
  MR_Word ll_backend__global_data__TypeNum_10,
  MR_Word ll_backend__global_data__ArrayB_11,
  MR_Word ll_backend__global_data__ArrayAB_12,
  MR_Word ll_backend__global_data__Rvals_13,
  MR_Word ll_backend__global_data__BDataId_14,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupMembers_31,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4,
  MR_Box ll_backend__global_data__wrapper_arg_5,
  MR_Box * ll_backend__global_data__wrapper_arg_6);

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
  MR_Word ll_backend__global_data__TypeNumRemap_8,
  MR_Word ll_backend__global_data__BTypeNum_9,
  MR_Word ll_backend__global_data__BScalarCellGroup_10,
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Remap_0_20,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Remap_21);

static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
  MR_Word ll_backend__global_data__CellType_9,
  MR_Word ll_backend__global_data__BTypeNum_10,
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeCounter_18,
  MR_Word ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20,
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);

static void MR_CALL 
ll_backend__global_data__associate_natural_type_4_p_0(
  MR_Word ll_backend__global_data__UnboxFloat_5,
  MR_Word ll_backend__global_data__ArgWidth_6,
  MR_Word ll_backend__global_data__Rval_7,
  MR_Word * ll_backend__global_data__HeadVar__4_4);

static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
  MR_Word ll_backend__global_data__TypeNum_7,
  MR_Word ll_backend__global_data__CellType_8,
  MR_Integer ll_backend__global_data__CellNum_9,
  MR_Word ll_backend__global_data__HeadVar__4_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14);

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4);

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
  MR_Word ll_backend__global_data__TypeNumMap_6,
  MR_Word ll_backend__global_data__TypeNum_7,
  MR_Word ll_backend__global_data__CellGroup_8,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_11,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_12);

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
  MR_Word ll_backend__global_data__TypeNumMap_6,
  MR_Word ll_backend__global_data__TypeNum_7,
  MR_Word ll_backend__global_data__CellGroup_8,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14);

static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
  MR_Word ll_backend__global_data__Types_4,
  MR_Word ll_backend__global_data__Args_5);

static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
  MR_Word ll_backend__global_data__AllocSite_6,
  MR_Integer ll_backend__global_data__Slot_7,
  MR_Integer * ll_backend__global_data__HeadVar__3_3,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Map_0_11,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Map_12);

static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4,
  MR_Box ll_backend__global_data__wrapper_arg_5,
  MR_Box * ll_backend__global_data__wrapper_arg_6);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4,
  MR_Box ll_backend__global_data__wrapper_arg_5,
  MR_Box * ll_backend__global_data__wrapper_arg_6,
  MR_Box ll_backend__global_data__wrapper_arg_7,
  MR_Box * ll_backend__global_data__wrapper_arg_8);

static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
  MR_Box ll_backend__global_data__closure_arg);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
  MR_Word ll_backend__global_data__SCIa_5,
  MR_Word ll_backend__global_data__SCIb_6,
  MR_Word * ll_backend__global_data__SCI_7,
  MR_Word * ll_backend__global_data__Remap_8);

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_SCI_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_SCI_11);

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4);

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
  MR_Box ll_backend__global_data__closure_arg);

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
  MR_Box ll_backend__global_data__closure_arg);

static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void);

static void MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_5_p_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3,
  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5);

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3,
  MR_Word ll_backend__global_data__HeadVar__4_4,
  MR_Word * ll_backend__global_data__HeadVar__5_5);

static void MR_CALL 
ll_backend__global_data__natural_type_4_p_0(
  MR_Word ll_backend__global_data__UnboxFloat_5,
  MR_Word ll_backend__global_data__ArgWidth_6,
  MR_Word ll_backend__global_data__Rval_7,
  MR_Word * ll_backend__global_data__Type_8);

static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box * ll_backend__global_data__wrapper_arg_3,
  MR_Box ll_backend__global_data__wrapper_arg_4,
  MR_Box * ll_backend__global_data__wrapper_arg_5);

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
  MR_Word ll_backend__global_data__CurType_6,
  MR_Word ll_backend__global_data__RevArgsSoFar_7,
  MR_Word ll_backend__global_data__LaterArgsTypes_8,
  MR_Word * ll_backend__global_data__TypeGroups_9,
  MR_Word * ll_backend__global_data__TypeAndArgGroups_10);

static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
  MR_Word ll_backend__global_data__TypedArgs_7,
  MR_Word ll_backend__global_data__CellType_8,
  MR_Word ll_backend__global_data__CellValue_9,
  MR_Word * ll_backend__global_data__DataId_10,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_35,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_36);

static MR_Word MR_CALL 
ll_backend__global_data__init_scalar_cell_group_0_f_0(void);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__global_data_scalar_common_1[13][3];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_2[11][2];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_4[2][7];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_5[4][8];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_6[2][4];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_7[12][6];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_8[1][5];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_9[1][11];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_10[1][10];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_11[1][9];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_12[1][12];




static /* final */ const MR_Box ll_backend__global_data_scalar_common_1[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ll_backend__global_data_scalar_common_2[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__global_data_scalar_common_5[0])),
    ((MR_Box) (ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__global_data_scalar_common_9[0])),
    ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_2[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__global_data_scalar_common_3[1])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__global_data_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__global_data_scalar_common_3[0])))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__global_data_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_5[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_6[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_7[12][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_11[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_12[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0,
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_bimap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____cell_type_bimap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____cell_type_bimap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "cell_type_bimap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_num_remap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "cell_type_num_remap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0
  }
};

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0[7] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0
};

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0[7] = {
  (MR_String) "gd_proc_var_map",
  (MR_String) "gd_proc_layout_map",
  (MR_String) "gd_closure_layouts",
  (MR_String) "gd_ts_string_table_size",
  (MR_String) "gd_ts_rev_string_table",
  (MR_String) "gd_static_cell_info",
  (MR_String) "gd_alloc_sites"
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0 = {
  (MR_String) "global_data",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0
};

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____global_data_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____global_data_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "global_data",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0
};

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0[2] = {
  (MR_String) "gdr_maybe_ts_table_offset",
  (MR_String) "gdr_static_cell_remap_info"
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0 = {
  (MR_String) "global_data_remapping",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0
};

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____global_data_remapping_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____global_data_remapping_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "global_data_remapping",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_layout_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____proc_layout_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____proc_layout_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "proc_layout_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____proc_var_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____proc_var_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "proc_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0
  }
};

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0
};

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0[3] = {
  (MR_String) "scalar_cell_counter",
  (MR_String) "scalar_cell_group_members",
  (MR_String) "scalar_cell_rev_array"
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0 = {
  (MR_String) "scalar_cell_group",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0
};

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_cell_group_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_cell_group_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_cell_group",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_remap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_cell_group_remap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_type_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_type_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0
  }
};

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0
};

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0[5] = {
  (MR_String) "sci_sub_info",
  (MR_String) "sci_type_counter",
  (MR_String) "sci_cell_type_num_map",
  (MR_String) "sci_scalar_cell_group_map",
  (MR_String) "sci_vector_cell_group_map"
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0 = {
  (MR_String) "static_cell_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0
};

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_info",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
  }
};

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0 = {
  (MR_String) "static_cell_remap_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0
};

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_remap_info",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0
};

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[3] = {
  (MR_String) "scsi_module_name",
  (MR_String) "scsi_unbox_float",
  (MR_String) "scsi_common_data"
};

static const MR_DuArgLocn ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0 = {
  (MR_String) "static_cell_sub_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0,
  ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0
};

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_sub_info",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0
  }
};

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0
};

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0[2] = {
  (MR_String) "vector_cell_counter",
  (MR_String) "vector_cell_map"
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0 = {
  (MR_String) "vector_cell_group",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0
};

static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____vector_cell_group_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_cell_group_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_cell_group",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0
};

static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0 = {
  (MR_String) "vector_contents",
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____vector_contents_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_contents_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_contents",
  {     &ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0 },
  {     &ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0
};

const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_type_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_type_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__792__1_2_p_0(
  MR_Word ll_backend__global_data__SubInfoA_9,
  MR_Word ll_backend__global_data__SubInfoB_14)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_52 = (MR_Integer) ll_backend__global_data__SubInfoA_9;
    MR_Integer ll_backend__global_data__CastY_53 = (MR_Integer) ll_backend__global_data__SubInfoB_14;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_52 == ll_backend__global_data__CastY_53);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgY2_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgX3_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgY3_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

      ll_backend__global_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__global_data__ArgX1_46, ll_backend__global_data__ArgY1_47);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__succeeded = (ll_backend__global_data__ArgX2_48 == ll_backend__global_data__ArgY2_49);
        if (ll_backend__global_data__succeeded)
          ll_backend__global_data__succeeded = (ll_backend__global_data__ArgX3_50 == ll_backend__global_data__ArgY3_51);
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__534__1_1_p_0(
  MR_Word ll_backend__global_data__VectorData_7)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__VectorData_7);
    return ll_backend__global_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__533__1_1_p_0(
  MR_Word ll_backend__global_data__LLDSTypes_6)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, ll_backend__global_data__LLDSTypes_6);
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_6 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_7 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_6 == ll_backend__global_data__CastY_7);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = (MR_Word) ll_backend__global_data__HeadVar__2_2;
      MR_Word ll_backend__global_data__ArgY1_5 = (MR_Word) ll_backend__global_data__HeadVar__3_3;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__ArgX1_4)), ((MR_Box) (ll_backend__global_data__ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_5 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_6 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_5 == ll_backend__global_data__CastY_6);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_3 = (MR_Word) ll_backend__global_data__HeadVar__1_1;
      MR_Word ll_backend__global_data__ArgY1_4 = (MR_Word) ll_backend__global_data__HeadVar__2_2;

      ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ((MR_Box) (ll_backend__global_data__ArgX1_3)), ((MR_Box) (ll_backend__global_data__ArgY1_4)));
    }
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__Var_8;

      mercury__counter____Compare____counter_0_0(&ll_backend__global_data__Var_8, ll_backend__global_data__ArgX1_4, ll_backend__global_data__ArgY1_5);
      ll_backend__global_data__succeeded = (ll_backend__global_data__Var_8 == (MR_Integer) 0);
      ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
      if (ll_backend__global_data__succeeded)
        *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[10], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__ArgX2_6)), ((MR_Box) (ll_backend__global_data__ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__TypeInfo_10_10;
      MR_Word ll_backend__global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

      ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__ArgX1_3, ll_backend__global_data__ArgY1_4);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[10];
        ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_10_10, ((MR_Box) (ll_backend__global_data__ArgX2_5)), ((MR_Box) (ll_backend__global_data__ArgY2_6)));
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_12 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_13 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_12 == ll_backend__global_data__CastY_13);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__Var_10;

      mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__global_data__Var_10, ll_backend__global_data__ArgX1_4, ll_backend__global_data__ArgY1_5);
      ll_backend__global_data__succeeded = (ll_backend__global_data__Var_10 == (MR_Integer) 0);
      ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
      if (ll_backend__global_data__succeeded)
        *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_10;
      else
      {
        MR_Word ll_backend__global_data__Var_11;
        MR_Integer ll_backend__global_data__Var_17 = (MR_Integer) ll_backend__global_data__ArgX2_6;
        MR_Integer ll_backend__global_data__Var_18 = (MR_Integer) ll_backend__global_data__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__Var_11, ll_backend__global_data__Var_17, ll_backend__global_data__Var_18);
        ll_backend__global_data__succeeded = (ll_backend__global_data__Var_11 == (MR_Integer) 0);
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
        if (ll_backend__global_data__succeeded)
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_11;
        else
        {
          MR_Integer ll_backend__global_data__Var_19 = (MR_Integer) ll_backend__global_data__ArgX3_8;
          MR_Integer ll_backend__global_data__Var_20 = (MR_Integer) ll_backend__global_data__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__Var_19, ll_backend__global_data__Var_20);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ll_backend__global_data__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

      ll_backend__global_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__global_data__ArgX1_3, ll_backend__global_data__ArgY1_4);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__succeeded = (ll_backend__global_data__ArgX2_5 == ll_backend__global_data__ArgY2_6);
        if (ll_backend__global_data__succeeded)
          ll_backend__global_data__succeeded = (ll_backend__global_data__ArgX3_7 == ll_backend__global_data__ArgY3_8);
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_12 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_13 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_12 == ll_backend__global_data__CastY_13);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__Var_10;

      mercury__counter____Compare____counter_0_0(&ll_backend__global_data__Var_10, ll_backend__global_data__ArgX1_4, ll_backend__global_data__ArgY1_5);
      ll_backend__global_data__succeeded = (ll_backend__global_data__Var_10 == (MR_Integer) 0);
      ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
      if (ll_backend__global_data__succeeded)
        *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_10;
      else
      {
        MR_Word ll_backend__global_data__Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[6], &ll_backend__global_data__Var_11, ((MR_Box) (ll_backend__global_data__ArgX2_6)), ((MR_Box) (ll_backend__global_data__ArgY2_7)));
        ll_backend__global_data__succeeded = (ll_backend__global_data__Var_11 == (MR_Integer) 0);
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
        if (ll_backend__global_data__succeeded)
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__ArgX3_8)), ((MR_Box) (ll_backend__global_data__ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__TypeInfo_12_12;
      MR_Word ll_backend__global_data__TypeInfo_13_13;
      MR_Word ll_backend__global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));

      ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__ArgX1_3, ll_backend__global_data__ArgY1_4);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__TypeInfo_12_12 = (MR_Word) &ll_backend__global_data_scalar_common_1[6];
        ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_12_12, ((MR_Box) (ll_backend__global_data__ArgX2_5)), ((MR_Box) (ll_backend__global_data__ArgY2_6)));
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__TypeInfo_13_13 = (MR_Word) &ll_backend__global_data_scalar_common_2[7];
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_13_13, ((MR_Box) (ll_backend__global_data__ArgX3_7)), ((MR_Box) (ll_backend__global_data__ArgY3_8)));
        }
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    return ll_backend__global_data__succeeded;
  }
}

void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], &ll_backend__global_data__Var_8, ((MR_Box) (ll_backend__global_data__ArgX1_4)), ((MR_Box) (ll_backend__global_data__ArgY1_5)));
      ll_backend__global_data__succeeded = (ll_backend__global_data__Var_8 == (MR_Integer) 0);
      ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
      if (ll_backend__global_data__succeeded)
        *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_8;
      else
        ll_backend__global_data____Compare____static_cell_remap_info_0_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__ArgX2_6, ll_backend__global_data__ArgY2_7);
    }
  }
}

void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], &ll_backend__global_data__Var_8, ((MR_Box) (ll_backend__global_data__ArgX1_4)), ((MR_Box) (ll_backend__global_data__ArgY1_5)));
      ll_backend__global_data__succeeded = (ll_backend__global_data__Var_8 == (MR_Integer) 0);
      ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
      if (ll_backend__global_data__succeeded)
        *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[5], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__ArgX2_6)), ((MR_Box) (ll_backend__global_data__ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

      ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], ((MR_Box) (ll_backend__global_data__ArgX1_3)), ((MR_Box) (ll_backend__global_data__ArgY1_4)));
      if (ll_backend__global_data__succeeded)
        ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(ll_backend__global_data__ArgX2_5, ll_backend__global_data__ArgY2_6);
    }
    return ll_backend__global_data__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__TypeInfo_10_10;
      MR_Word ll_backend__global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

      ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (ll_backend__global_data__ArgX1_3)), ((MR_Box) (ll_backend__global_data__ArgY1_4)));
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[5];
        ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_10_10, ((MR_Box) (ll_backend__global_data__ArgX2_5)), ((MR_Box) (ll_backend__global_data__ArgY2_6)));
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_24 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_25 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_24 == ll_backend__global_data__CastY_25);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ll_backend__global_data__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ll_backend__global_data__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ll_backend__global_data__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ll_backend__global_data__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ll_backend__global_data__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ll_backend__global_data__Var_18;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], &ll_backend__global_data__Var_18, ((MR_Box) (ll_backend__global_data__ArgX1_4)), ((MR_Box) (ll_backend__global_data__ArgY1_5)));
      ll_backend__global_data__succeeded = (ll_backend__global_data__Var_18 == (MR_Integer) 0);
      ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
      if (ll_backend__global_data__succeeded)
        *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_18;
      else
      {
        MR_Word ll_backend__global_data__Var_19;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], &ll_backend__global_data__Var_19, ((MR_Box) (ll_backend__global_data__ArgX2_6)), ((MR_Box) (ll_backend__global_data__ArgY2_7)));
        ll_backend__global_data__succeeded = (ll_backend__global_data__Var_19 == (MR_Integer) 0);
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
        if (ll_backend__global_data__succeeded)
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_19;
        else
        {
          MR_Word ll_backend__global_data__Var_20;

          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[3], &ll_backend__global_data__Var_20, ((MR_Box) (ll_backend__global_data__ArgX3_8)), ((MR_Box) (ll_backend__global_data__ArgY3_9)));
          ll_backend__global_data__succeeded = (ll_backend__global_data__Var_20 == (MR_Integer) 0);
          ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
          if (ll_backend__global_data__succeeded)
            *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_20;
          else
          {
            MR_Word ll_backend__global_data__Var_21;

            mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__Var_21, ll_backend__global_data__ArgX4_10, ll_backend__global_data__ArgY4_11);
            ll_backend__global_data__succeeded = (ll_backend__global_data__Var_21 == (MR_Integer) 0);
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
            if (ll_backend__global_data__succeeded)
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_21;
            else
            {
              MR_Word ll_backend__global_data__Var_22;

              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[4], &ll_backend__global_data__Var_22, ((MR_Box) (ll_backend__global_data__ArgX5_12)), ((MR_Box) (ll_backend__global_data__ArgY5_13)));
              ll_backend__global_data__succeeded = (ll_backend__global_data__Var_22 == (MR_Integer) 0);
              ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
              if (ll_backend__global_data__succeeded)
                *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_22;
              else
              {
                MR_Word ll_backend__global_data__Var_23;

                ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__global_data__Var_23, ll_backend__global_data__ArgX6_14, ll_backend__global_data__ArgY6_15);
                ll_backend__global_data__succeeded = (ll_backend__global_data__Var_23 == (MR_Integer) 0);
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
                if (ll_backend__global_data__succeeded)
                  *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[5], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__ArgX7_16)), ((MR_Box) (ll_backend__global_data__ArgY7_17)));
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
ll_backend__global_data____Compare____static_cell_info_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_18 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
    MR_Integer ll_backend__global_data__CastY_19 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_18 == ll_backend__global_data__CastY_19);
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ll_backend__global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__Var_14;
      MR_Integer ll_backend__global_data__CastX_33 = (MR_Integer) ll_backend__global_data__ArgX1_4;
      MR_Integer ll_backend__global_data__CastY_34 = (MR_Integer) ll_backend__global_data__ArgY1_5;

      ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_33 == ll_backend__global_data__CastY_34);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__Var_14 = (MR_Integer) 0;
          ll_backend__global_data__succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word ll_backend__global_data__ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgX1_4, (MR_Integer) 0)));
        MR_Word ll_backend__global_data__ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgY1_5, (MR_Integer) 0)));
        MR_Word ll_backend__global_data__ArgX2_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgX1_4, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__global_data__ArgY2_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgY1_5, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__global_data__ArgX3_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgX1_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__global_data__ArgY3_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgY1_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__global_data__Var_31;

        mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__global_data__Var_31, ll_backend__global_data__ArgX1_25, ll_backend__global_data__ArgY1_26);
        ll_backend__global_data__succeeded = (ll_backend__global_data__Var_31 == (MR_Integer) 0);
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__Var_14 = ll_backend__global_data__Var_31;
          ll_backend__global_data__succeeded = (ll_backend__global_data__Var_14 == (MR_Integer) 0);
          ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
        }
        else
        {
          MR_Word ll_backend__global_data__Var_32;
          MR_Integer ll_backend__global_data__Var_38 = (MR_Integer) ll_backend__global_data__ArgX2_27;
          MR_Integer ll_backend__global_data__Var_39 = (MR_Integer) ll_backend__global_data__ArgY2_28;

          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__Var_32, ll_backend__global_data__Var_38, ll_backend__global_data__Var_39);
          ll_backend__global_data__succeeded = (ll_backend__global_data__Var_32 == (MR_Integer) 0);
          ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
          if (ll_backend__global_data__succeeded)
          {
            ll_backend__global_data__Var_14 = ll_backend__global_data__Var_32;
            ll_backend__global_data__succeeded = (ll_backend__global_data__Var_14 == (MR_Integer) 0);
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
          }
          else
          {
            MR_Integer ll_backend__global_data__Var_40 = (MR_Integer) ll_backend__global_data__ArgX3_29;
            MR_Integer ll_backend__global_data__Var_41 = (MR_Integer) ll_backend__global_data__ArgY3_30;

            mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__Var_14, ll_backend__global_data__Var_40, ll_backend__global_data__Var_41);
            ll_backend__global_data__succeeded = (ll_backend__global_data__Var_14 == (MR_Integer) 0);
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
          }
        }
      }
      if (ll_backend__global_data__succeeded)
        *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_14;
      else
      {
        MR_Word ll_backend__global_data__Var_15;

        mercury__counter____Compare____counter_0_0(&ll_backend__global_data__Var_15, ll_backend__global_data__ArgX2_6, ll_backend__global_data__ArgY2_7);
        ll_backend__global_data__succeeded = (ll_backend__global_data__Var_15 == (MR_Integer) 0);
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
        if (ll_backend__global_data__succeeded)
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_15;
        else
        {
          MR_Word ll_backend__global_data__Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], &ll_backend__global_data__Var_16, ((MR_Box) (ll_backend__global_data__ArgX3_8)), ((MR_Box) (ll_backend__global_data__ArgY3_9)));
          ll_backend__global_data__succeeded = (ll_backend__global_data__Var_16 == (MR_Integer) 0);
          ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
          if (ll_backend__global_data__succeeded)
            *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_16;
          else
          {
            MR_Word ll_backend__global_data__Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], &ll_backend__global_data__Var_17, ((MR_Box) (ll_backend__global_data__ArgX4_10)), ((MR_Box) (ll_backend__global_data__ArgY4_11)));
            ll_backend__global_data__succeeded = (ll_backend__global_data__Var_17 == (MR_Integer) 0);
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
            if (ll_backend__global_data__succeeded)
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__ArgX5_12)), ((MR_Box) (ll_backend__global_data__ArgY5_13)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_17 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_18 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_17 == ll_backend__global_data__CastY_18);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__TypeInfo_20_20;
      MR_Word ll_backend__global_data__TypeInfo_21_21;
      MR_Word ll_backend__global_data__TypeInfo_22_22;
      MR_Word ll_backend__global_data__TypeInfo_23_23;
      MR_Word ll_backend__global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ll_backend__global_data__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ll_backend__global_data__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ll_backend__global_data__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ll_backend__global_data__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ll_backend__global_data__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 6)));

      ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (ll_backend__global_data__ArgX1_3)), ((MR_Box) (ll_backend__global_data__ArgY1_4)));
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__TypeInfo_20_20 = (MR_Word) &ll_backend__global_data_scalar_common_1[9];
        ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_20_20, ((MR_Box) (ll_backend__global_data__ArgX2_5)), ((MR_Box) (ll_backend__global_data__ArgY2_6)));
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__TypeInfo_21_21 = (MR_Word) &ll_backend__global_data_scalar_common_2[3];
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_21_21, ((MR_Box) (ll_backend__global_data__ArgX3_7)), ((MR_Box) (ll_backend__global_data__ArgY3_8)));
          if (ll_backend__global_data__succeeded)
          {
            ll_backend__global_data__succeeded = (ll_backend__global_data__ArgX4_9 == ll_backend__global_data__ArgY4_10);
            if (ll_backend__global_data__succeeded)
            {
              ll_backend__global_data__TypeInfo_22_22 = (MR_Word) &ll_backend__global_data_scalar_common_2[4];
              ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_22_22, ((MR_Box) (ll_backend__global_data__ArgX5_11)), ((MR_Box) (ll_backend__global_data__ArgY5_12)));
              if (ll_backend__global_data__succeeded)
              {
                ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ll_backend__global_data__ArgX6_13, ll_backend__global_data__ArgY6_14);
                if (ll_backend__global_data__succeeded)
                {
                  ll_backend__global_data__TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[5];
                  ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_23_23, ((MR_Box) (ll_backend__global_data__ArgX7_15)), ((MR_Box) (ll_backend__global_data__ArgY7_16)));
                }
              }
            }
          }
        }
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Integer ll_backend__global_data__CastX_13 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
    MR_Integer ll_backend__global_data__CastY_14 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_13 == ll_backend__global_data__CastY_14);
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__succeeded = MR_TRUE;
    else
    {
      MR_Word ll_backend__global_data__TypeInfo_16_16;
      MR_Word ll_backend__global_data__TypeInfo_17_17;
      MR_Word ll_backend__global_data__TypeInfo_18_18;
      MR_Word ll_backend__global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ll_backend__global_data__CastX_25 = (MR_Integer) ll_backend__global_data__ArgX1_3;
      MR_Integer ll_backend__global_data__CastY_26 = (MR_Integer) ll_backend__global_data__ArgY1_4;

      ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_25 == ll_backend__global_data__CastY_26);
      if (ll_backend__global_data__succeeded)
        ll_backend__global_data__succeeded = MR_TRUE;
      else
      {
        MR_Word ll_backend__global_data__ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgX1_3, (MR_Integer) 0)));
        MR_Word ll_backend__global_data__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgY1_4, (MR_Integer) 0)));
        MR_Word ll_backend__global_data__ArgX2_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgX1_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__global_data__ArgY2_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgY1_4, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__global_data__ArgX3_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgX1_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__global_data__ArgY3_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ArgY1_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        ll_backend__global_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__global_data__ArgX1_19, ll_backend__global_data__ArgY1_20);
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__succeeded = (ll_backend__global_data__ArgX2_21 == ll_backend__global_data__ArgY2_22);
          if (ll_backend__global_data__succeeded)
            ll_backend__global_data__succeeded = (ll_backend__global_data__ArgX3_23 == ll_backend__global_data__ArgY3_24);
        }
      }
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__ArgX2_5, ll_backend__global_data__ArgY2_6);
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__TypeInfo_16_16 = (MR_Word) &ll_backend__global_data_scalar_common_1[1];
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_16_16, ((MR_Box) (ll_backend__global_data__ArgX3_7)), ((MR_Box) (ll_backend__global_data__ArgY3_8)));
          if (ll_backend__global_data__succeeded)
          {
            ll_backend__global_data__TypeInfo_17_17 = (MR_Word) &ll_backend__global_data_scalar_common_1[4];
            ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_17_17, ((MR_Box) (ll_backend__global_data__ArgX4_9)), ((MR_Box) (ll_backend__global_data__ArgY4_10)));
            if (ll_backend__global_data__succeeded)
            {
              ll_backend__global_data__TypeInfo_18_18 = (MR_Word) &ll_backend__global_data_scalar_common_1[7];
              ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_18_18, ((MR_Box) (ll_backend__global_data__ArgX5_11)), ((MR_Box) (ll_backend__global_data__ArgY5_12)));
            }
          }
        }
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
  MR_Word * ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

    ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Output0_5,
  MR_Word * ll_backend__global_data__Output_6)
{
  {
    MR_Word ll_backend__global_data__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__A_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__B_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__C_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 3)));
    MR_String ll_backend__global_data__D_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Lval_14;

    ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Lval0_7, &ll_backend__global_data__Lval_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__Output_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Lval_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__A_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__B_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__C_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__D_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__E_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__F_13));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Input0_5,
  MR_Word * ll_backend__global_data__Input_6)
{
  {
    MR_String ll_backend__global_data__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__C_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__D_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Rval_14;

    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_11, &ll_backend__global_data__Rval_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__Input_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__A_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__B_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__C_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__D_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Rval_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__E_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__F_13));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv1_Output_6;

    ll_backend__global_data__remap_foreign_proc_output_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_Output_6);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_Output_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_Input_6;

    ll_backend__global_data__remap_foreign_proc_input_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Input_6);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Input_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Comp0_5,
  MR_Word * ll_backend__global_data__Comp_6)
{
  switch (MR_tag((MR_Word) ll_backend__global_data__Comp0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ll_backend__global_data__Comp_6 = ll_backend__global_data__Comp0_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ll_backend__global_data__TypeCtorInfo_24_24;
        MR_Word ll_backend__global_data__Inputs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__Comp0_5, (MR_Integer) 0)));
        MR_Word ll_backend__global_data__Inputs_8;
        MR_Word ll_backend__global_data__Var_21;

        {
          ll_backend__global_data__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_21, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[10]));
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_21, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_21, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
        }
        ll_backend__global_data__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0;
        mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__Var_21, ll_backend__global_data__Inputs0_7, &ll_backend__global_data__Inputs_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__global_data__Comp_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Inputs_8));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ll_backend__global_data__TypeCtorInfo_27_27;
        MR_Word ll_backend__global_data__Outputs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Comp0_5, (MR_Integer) 0)));
        MR_Word ll_backend__global_data__Outputs_10;
        MR_Word ll_backend__global_data__Var_20;

        {
          ll_backend__global_data__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_20, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[11]));
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_20, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_20, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
        }
        ll_backend__global_data__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0;
        mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_27_27, ll_backend__global_data__TypeCtorInfo_27_27, ll_backend__global_data__Var_20, ll_backend__global_data__Outputs0_9, &ll_backend__global_data__Outputs_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__global_data__Comp_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Outputs_10));
        }
      }
      break;
    case (MR_Integer) 3:
      *ll_backend__global_data__Comp_6 = ll_backend__global_data__Comp0_5;
      break;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Instr_0_9,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Instr_10)
{
  {
    MR_Word ll_backend__global_data__Uinstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Instr_0_9, (MR_Integer) 0)));
    MR_String ll_backend__global_data__Comment_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Instr_0_9, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Uinstr_8;

    ll_backend__global_data__remap_instr_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Uinstr0_6, &ll_backend__global_data__Uinstr_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_Instr_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Uinstr_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Comment_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv1_Comp_6;

    ll_backend__global_data__remap_foreign_proc_component_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_Comp_6);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_Comp_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10;

    ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
  MR_Word ll_backend__global_data__GlobalDataRemap_4,
  MR_Word ll_backend__global_data__Instr0_5,
  MR_Word * ll_backend__global_data__Instr_6)
{
  {
    MR_Word ll_backend__global_data__StaticCellRemap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__global_data__TypeCtorInfo_144_144;
              MR_Integer ll_backend__global_data__NumIntTemps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Integer ll_backend__global_data__NumFloatTemps_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Block0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__global_data__Block_11;
              MR_Word ll_backend__global_data__Var_94;

              {
                ll_backend__global_data__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_94, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[3]));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_94, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_94, 3) = ((MR_Box) (ll_backend__global_data__GlobalDataRemap_4));
              }
              ll_backend__global_data__TypeCtorInfo_144_144 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_144_144, ll_backend__global_data__TypeCtorInfo_144_144, ll_backend__global_data__Var_94, ll_backend__global_data__Block0_10, &ll_backend__global_data__Block_11);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__NumIntTemps_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__NumFloatTemps_9));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Block_11));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__global_data__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Rval_14;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_13, &ll_backend__global_data__Rval_14);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_12));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__global_data__Lval_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Rval_97;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_96, &ll_backend__global_data__Rval_97);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_95));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_97));
              }
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 29:
            *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__global_data__MaybeLabels_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Rval0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval_101;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_100, &ll_backend__global_data__Rval_101);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_101));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__MaybeLabels_27));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__global_data__CodeAddr_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Rval0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval_99;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_98, &ll_backend__global_data__Rval_99);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_99));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__CodeAddr_15));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__global_data__Lval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Lval_102;

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_28, &ll_backend__global_data__Lval_102);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_102));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__global_data__Lval_103;
              MR_Word ll_backend__global_data__Lval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_104, &ll_backend__global_data__Lval_103);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_103));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__global_data__MaybeTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__global_data__SizeRval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
              MR_Word ll_backend__global_data__Prof_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
              MR_Word ll_backend__global_data__Atomic_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 6)));
              MR_Word ll_backend__global_data__MaybeRegion0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 7)));
              MR_Word ll_backend__global_data__MaybeReuse0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 8)));
              MR_Word ll_backend__global_data__SizeRval_36;
              MR_Word ll_backend__global_data__MaybeRegion_39;
              MR_Word ll_backend__global_data__MaybeReuse_46;
              MR_Word ll_backend__global_data__Lval_105;
              MR_Word ll_backend__global_data__Lval0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_106, &ll_backend__global_data__Lval_105);
              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__SizeRval0_31, &ll_backend__global_data__SizeRval_36);
              if ((ll_backend__global_data__MaybeRegion0_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__global_data__MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word ll_backend__global_data__Region0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeRegion0_34, (MR_Integer) 0)));
                MR_Word ll_backend__global_data__Region_38;

                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Region0_37, &ll_backend__global_data__Region_38);
                {
                  ll_backend__global_data__MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeRegion_39, 0) = ((MR_Box) (ll_backend__global_data__Region_38));
                }
              }
              if ((ll_backend__global_data__MaybeReuse0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__global_data__MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word ll_backend__global_data__Reuse0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse0_35, (MR_Integer) 0)));
                MR_Word ll_backend__global_data__MaybeFlag0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse0_35, (MR_Integer) 1)));
                MR_Word ll_backend__global_data__Reuse_42;
                MR_Word ll_backend__global_data__MaybeFlag_45;

                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Reuse0_40, &ll_backend__global_data__Reuse_42);
                if ((ll_backend__global_data__MaybeFlag0_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  ll_backend__global_data__MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                {
                  MR_Word ll_backend__global_data__Flag0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeFlag0_41, (MR_Integer) 0)));
                  MR_Word ll_backend__global_data__Flag_44;

                  ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Flag0_43, &ll_backend__global_data__Flag_44);
                  {
                    ll_backend__global_data__MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeFlag_45, 0) = ((MR_Box) (ll_backend__global_data__Flag_44));
                  }
                }
                {
                  ll_backend__global_data__MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse_46, 0) = ((MR_Box) (ll_backend__global_data__Reuse_42));
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse_46, 1) = ((MR_Box) (ll_backend__global_data__MaybeFlag_45));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_105));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__MaybeTag_29));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__MaybeOffset_30));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__SizeRval_36));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__Prof_32));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__global_data__Atomic_33));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__global_data__MaybeRegion_39));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__global_data__MaybeReuse_46));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__global_data__Lval_107;
              MR_Word ll_backend__global_data__Lval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_108, &ll_backend__global_data__Lval_107);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_107));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__global_data__Rval0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval_110;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_109, &ll_backend__global_data__Rval_110);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_110));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__global_data__Rval0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval_112;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_111, &ll_backend__global_data__Rval_112);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_112));
              }
            }
            break;
          case (MR_Integer) 16:
            *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__global_data__FillOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__IdRval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__global_data__NumLval0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
              MR_Word ll_backend__global_data__AddrLval0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
              MR_Word ll_backend__global_data__IdRval_53;
              MR_Word ll_backend__global_data__NumLval_54;
              MR_Word ll_backend__global_data__AddrLval_55;
              MR_Word ll_backend__global_data__EmbeddedStackFrame_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__IdRval0_50, &ll_backend__global_data__IdRval_53);
              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__NumLval0_51, &ll_backend__global_data__NumLval_54);
              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__AddrLval0_52, &ll_backend__global_data__AddrLval_55);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__FillOp_49));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__EmbeddedStackFrame_113));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__IdRval_53));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__NumLval_54));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__AddrLval_55));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__global_data__SetOp_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__ValueRval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__global_data__ValueRval_58;
              MR_Word ll_backend__global_data__EmbeddedStackFrame_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__ValueRval0_57, &ll_backend__global_data__ValueRval_58);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__SetOp_56));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__EmbeddedStackFrame_114));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__ValueRval_58));
              }
            }
            break;
          case (MR_Integer) 19:
            *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__global_data__Lval_116;
              MR_Word ll_backend__global_data__Lval0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_117, &ll_backend__global_data__Lval_116);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_116));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__global_data__Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Rval0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval_119;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_118, &ll_backend__global_data__Rval_119);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_119));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Reason_60));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__global_data__Lval_120;
              MR_Word ll_backend__global_data__Lval0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_121, &ll_backend__global_data__Lval_120);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_120));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__global_data__Rval0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval_123;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_122, &ll_backend__global_data__Rval_123);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_123));
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__global_data__TypeCtorInfo_147_147;
              MR_Word ll_backend__global_data__Decls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Comps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__MayCallMerc_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
              MR_Word ll_backend__global_data__FixNoLayout_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
              MR_Word ll_backend__global_data__FixLayout_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
              MR_Word ll_backend__global_data__FixOnlyLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 6)));
              MR_Word ll_backend__global_data__NoFix_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 7)));
              MR_Word ll_backend__global_data__HashDefnLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 8)));
              MR_Word ll_backend__global_data__StackSlotRef_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 9)));
              MR_Word ll_backend__global_data__MaybeDup_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 10)));
              MR_Word ll_backend__global_data__Comps_26;
              MR_Word ll_backend__global_data__Var_93;

              {
                ll_backend__global_data__Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_93, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[9]));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_93, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_2));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_93, 3) = ((MR_Box) (ll_backend__global_data__StaticCellRemap_7));
              }
              ll_backend__global_data__TypeCtorInfo_147_147 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
              mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_147_147, ll_backend__global_data__TypeCtorInfo_147_147, ll_backend__global_data__Var_93, ll_backend__global_data__Comps0_17, &ll_backend__global_data__Comps_26);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Decls_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Comps_26));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__MayCallMerc_18));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__FixNoLayout_19));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__FixLayout_20));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__global_data__FixOnlyLayout_21));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__global_data__NoFix_22));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__global_data__HashDefnLabel_23));
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ll_backend__global_data__StackSlotRef_24));
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ll_backend__global_data__MaybeDup_25));
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer ll_backend__global_data__NumJoins_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Integer ll_backend__global_data__ConjId0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
              MR_Integer ll_backend__global_data__ConjId_63;
              MR_Word ll_backend__global_data__Var_92;
              MR_Word ll_backend__global_data__Lval_124;
              MR_Word ll_backend__global_data__Lval0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Var_141;

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_125, &ll_backend__global_data__Lval_124);
              ll_backend__global_data__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 0)));
              ll_backend__global_data__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 1)));
              ll_backend__global_data__remap_ts_table_index_3_p_0(ll_backend__global_data__Var_92, ll_backend__global_data__ConjId0_62, &ll_backend__global_data__ConjId_63);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_124));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__NumJoins_61));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__ConjId_63));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__global_data__Label_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Lval_126;
              MR_Word ll_backend__global_data__Lval0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_127, &ll_backend__global_data__Lval_126);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_126));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Label_64));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer ll_backend__global_data__NumSlots_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Lval_128;
              MR_Word ll_backend__global_data__Lval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_129, &ll_backend__global_data__Lval_128);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__NumSlots_65));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Lval_128));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__global_data__Lval_130;
              MR_Word ll_backend__global_data__Rval0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Rval_132;
              MR_Word ll_backend__global_data__Lval0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__Label_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_131, &ll_backend__global_data__Rval_132);
              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_133, &ll_backend__global_data__Lval_130);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_132));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Lval_130));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Label_134));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__global_data__LCRval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__LCSRval0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__LCRval_68;
              MR_Word ll_backend__global_data__LCSRval_69;
              MR_Word ll_backend__global_data__Label_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCRval0_66, &ll_backend__global_data__LCRval_68);
              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCSRval0_67, &ll_backend__global_data__LCSRval_69);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__LCRval_68));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__LCSRval_69));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Label_135));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__global_data__LCRval0_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__LCSRval0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__LCRval_138;
              MR_Word ll_backend__global_data__LCSRval_139;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCRval0_136, &ll_backend__global_data__LCRval_138);
              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCSRval0_137, &ll_backend__global_data__LCSRval_139);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__LCRval_138));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__LCSRval_139));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_ts_table_index_3_p_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Integer ll_backend__global_data__HeadVar__2_2,
  MR_Integer * ll_backend__global_data__HeadVar__3_3)
{
  if ((ll_backend__global_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ll_backend__global_data__HeadVar__3_3 = ll_backend__global_data__HeadVar__2_2;
  else
  {
    MR_Integer ll_backend__global_data__Offset_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));

    *ll_backend__global_data__HeadVar__3_3 = (ll_backend__global_data__HeadVar__2_2 + ll_backend__global_data__Offset_7);
  }
}

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_Rval_6;

    ll_backend__global_data__remap_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Rval_6);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Rval_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11)
{
  if (((MR_tag((MR_Word) ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_20_20;
    MR_Word ll_backend__global_data__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
    MR_Integer ll_backend__global_data__Fields_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Rvals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Rvals_9;
    MR_Word ll_backend__global_data__Var_13;

    {
      ll_backend__global_data__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[8]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 1) = ((MR_Box) (ll_backend__global_data__remap_arg_group_value_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_20_20, ll_backend__global_data__TypeCtorInfo_20_20, ll_backend__global_data__Var_13, ll_backend__global_data__Rvals0_8, &ll_backend__global_data__Rvals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Type_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Fields_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Rvals_9));
    }
  }
  else
  {
    MR_Word ll_backend__global_data__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Rvals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Rvals_17;

    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rvals0_16, &ll_backend__global_data__Rvals_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Type_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__Rvals_17));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word * ll_backend__global_data__HeadVar__3_3)
{
  {
    MR_Word ll_backend__global_data__Rval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Rval_7;

    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_5, &ll_backend__global_data__Rval_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Rval_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Type_6));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Rval0_5,
  MR_Word * ll_backend__global_data__Rval_6)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__global_data__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Rval0_5, (MR_Integer) 0)));
          MR_Word ll_backend__global_data__Lval_8;

          ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Lval0_7, &ll_backend__global_data__Lval_8);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__global_data__Rval_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Lval_8));
          }
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__global_data__Rval_6 = ll_backend__global_data__Rval0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__global_data__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Rval0_5, (MR_Integer) 0)));
          MR_Word ll_backend__global_data__Ptr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
          MR_Word ll_backend__global_data__Ptr_12;

          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Ptr0_11, &ll_backend__global_data__Ptr_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__global_data__Rval_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Tag_10));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__Ptr_12));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__global_data__Rval_6 = ll_backend__global_data__Rval0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__global_data__Const0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__Const_15;

              switch (MR_tag((MR_Word) ll_backend__global_data__Const0_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__global_data__Const_15 = ll_backend__global_data__Const0_14;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ll_backend__global_data__Const_15 = ll_backend__global_data__Const0_14;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                    case (MR_Integer) 10:
                      ll_backend__global_data__Const_15 = ll_backend__global_data__Const0_14;
                      break;
                    case (MR_Integer) 11:
                      {
                        MR_Word ll_backend__global_data__DataId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 1)));
                        MR_Word ll_backend__global_data__MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 2)));
                        MR_Word ll_backend__global_data__DataId_36;

                        switch (MR_tag((MR_Word) ll_backend__global_data__DataId0_29)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word ll_backend__global_data__TypeNum0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId0_29, (MR_Integer) 0)));
                              MR_Word ll_backend__global_data__TypeNumRemap_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 0)));
                              MR_Word ll_backend__global_data__ScalarCellGroupRemap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 1)));
                              MR_Integer ll_backend__global_data___CellNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId0_29, (MR_Integer) 1)));
                              MR_Word ll_backend__global_data__TypeCtorInfo_40_62 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

                              ll_backend__global_data__succeeded = mercury__map__contains_2_p_0(ll_backend__global_data__TypeCtorInfo_40_62, ll_backend__global_data__TypeCtorInfo_40_62, ll_backend__global_data__TypeNumRemap_33, ((MR_Box) (ll_backend__global_data__TypeNum0_31)));
                              if (ll_backend__global_data__succeeded)
                              {
                                MR_Word ll_backend__global_data__TypeCtorInfo_43_65;
                                MR_Word ll_backend__global_data__ScalarCellGroup_35;
                                MR_Box ll_backend__global_data__conv0_ScalarCellGroup_35;
                                MR_Box ll_backend__global_data__conv1_DataId_36;

                                mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__ScalarCellGroupRemap_34, ((MR_Box) (ll_backend__global_data__TypeNum0_31)), &ll_backend__global_data__conv0_ScalarCellGroup_35);
                                ll_backend__global_data__ScalarCellGroup_35 = ((MR_Word) ll_backend__global_data__conv0_ScalarCellGroup_35);
                                ll_backend__global_data__TypeCtorInfo_43_65 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
                                mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_43_65, ll_backend__global_data__TypeCtorInfo_43_65, ll_backend__global_data__ScalarCellGroup_35, ((MR_Box) (ll_backend__global_data__DataId0_29)), &ll_backend__global_data__conv1_DataId_36);
                                ll_backend__global_data__DataId_36 = ((MR_Word) ll_backend__global_data__conv1_DataId_36);
                              }
                              else
                                ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
                            }
                            break;
                          case (MR_Integer) 3:
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 0)))) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Integer ll_backend__global_data__CellNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 2)));
                                  MR_Word ll_backend__global_data__TypeNum0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 1)));
                                  MR_Word ll_backend__global_data__TypeNumRemap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 0)));
                                  MR_Word ll_backend__global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 1)));
                                  MR_Word ll_backend__global_data__TypeNum_39;
                                  MR_Word ll_backend__global_data__TypeCtorInfo_44_66 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
                                  MR_Box ll_backend__global_data__conv2_TypeNum_39;

                                  ll_backend__global_data__succeeded = mercury__map__search_3_p_0(ll_backend__global_data__TypeCtorInfo_44_66, ll_backend__global_data__TypeCtorInfo_44_66, ll_backend__global_data__TypeNumRemap_61, ((MR_Box) (ll_backend__global_data__TypeNum0_60)), &ll_backend__global_data__conv2_TypeNum_39);
                                  if (ll_backend__global_data__succeeded)
                                  {
                                    ll_backend__global_data__TypeNum_39 = ((MR_Word) ll_backend__global_data__conv2_TypeNum_39);
                                    ll_backend__global_data__succeeded = MR_TRUE;
                                  }
                                  if (ll_backend__global_data__succeeded)
                                    {
                                      ll_backend__global_data__DataId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                      MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_39));
                                      MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 2) = ((MR_Box) (ll_backend__global_data__CellNum_37));
                                    }
                                  else
                                    ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
                                }
                                break;
                              case (MR_Integer) 1:
                              case (MR_Integer) 2:
                                ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
                                break;
                            }
                            break;
                        }
                        {
                          ll_backend__global_data__Const_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                          MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 1) = ((MR_Box) (ll_backend__global_data__DataId_36));
                          MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 2) = ((MR_Box) (ll_backend__global_data__MaybeOffset_30));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Const_15));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__global_data__Unop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__A0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__A_18;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__A0_17, &ll_backend__global_data__A_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Unop_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__A_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__global_data__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__B0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 3)));
              MR_Word ll_backend__global_data__B_21;
              MR_Word ll_backend__global_data__A0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 2)));
              MR_Word ll_backend__global_data__A_25;

              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__A0_24, &ll_backend__global_data__A_25);
              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__B0_20, &ll_backend__global_data__B_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Binop_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__A_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__B_21));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__global_data__MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
              MR_Word ll_backend__global_data__MemRef_23;

              switch (MR_tag((MR_Word) ll_backend__global_data__MemRef0_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  ll_backend__global_data__MemRef_23 = ll_backend__global_data__MemRef0_22;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__global_data__Ptr0_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_22, (MR_Integer) 0)));
                    MR_Word ll_backend__global_data__MaybeTag_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_22, (MR_Integer) 1)));
                    MR_Word ll_backend__global_data__FieldNum_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_22, (MR_Integer) 2)));
                    MR_Word ll_backend__global_data__Ptr_75;

                    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Ptr0_72, &ll_backend__global_data__Ptr_75);
                    {
                      ll_backend__global_data__MemRef_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef_23, 0) = ((MR_Box) (ll_backend__global_data__Ptr_75));
                      MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef_23, 1) = ((MR_Box) (ll_backend__global_data__MaybeTag_73));
                      MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef_23, 2) = ((MR_Box) (ll_backend__global_data__FieldNum_74));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__MemRef_23));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_lval_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__Lval0_5,
  MR_Word * ll_backend__global_data__Lval_6)
{
  switch (MR_tag((MR_Word) ll_backend__global_data__Lval0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ll_backend__global_data__Lval_6 = ll_backend__global_data__Lval0_5;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ll_backend__global_data__Lval_6 = ll_backend__global_data__Lval0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
          *ll_backend__global_data__Lval_6 = ll_backend__global_data__Lval0_5;
          break;
        case (MR_Integer) 9:
          {
            MR_Word ll_backend__global_data__MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 1)));
            MR_Word ll_backend__global_data__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 2)));
            MR_Word ll_backend__global_data__FieldNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 3)));
            MR_Word ll_backend__global_data__Rval_10;

            ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_8, &ll_backend__global_data__Rval_10);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__global_data__Lval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__MaybeTag_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_10));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__FieldNum_9));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ll_backend__global_data__Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 1)));
            MR_Word ll_backend__global_data__Rval_28;

            ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_27, &ll_backend__global_data__Rval_28);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__global_data__Lval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_28));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv1_HeadVar__3_3;

    ll_backend__global_data__remap_plain_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_HeadVar__3_3);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11;

    ll_backend__global_data__remap_arg_group_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11)
{
  if (((MR_tag((MR_Word) ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_21_21;
    MR_Word ll_backend__global_data__ArgGroup0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__ArgGroup_9;
    MR_Word ll_backend__global_data__Var_12;

    {
      ll_backend__global_data__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
    mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__Var_12, ll_backend__global_data__ArgGroup0_8, &ll_backend__global_data__ArgGroup_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__ArgGroup_9));
    }
  }
  else
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_18_18;
    MR_Word ll_backend__global_data__RvalsTypes0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__RvalsTypes_7;
    MR_Word ll_backend__global_data__Var_14;

    {
      ll_backend__global_data__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[7]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
    mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__Var_14, ll_backend__global_data__RvalsTypes0_6, &ll_backend__global_data__RvalsTypes_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__RvalsTypes_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11;

    ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Contents_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Contents_9)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_14_14;
    MR_Word ll_backend__global_data__Values0_6 = (MR_Word) ll_backend__global_data__STATE_VARIABLE_Contents_0_8;
    MR_Word ll_backend__global_data__Values_7;
    MR_Word ll_backend__global_data__Var_10;

    {
      ll_backend__global_data__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_contents_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__Var_10, ll_backend__global_data__Values0_6, &ll_backend__global_data__Values_7);
    *ll_backend__global_data__STATE_VARIABLE_Contents_9 = (MR_Word) ll_backend__global_data__Values_7;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9;

    ll_backend__global_data__remap_vector_contents_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_15_15;
    MR_Word ll_backend__global_data__Counter_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Map_8;
    MR_Word ll_backend__global_data__Var_11;

    {
      ll_backend__global_data__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_11, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_11, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_cell_group_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_11, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0;
    mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_15_15, ll_backend__global_data__TypeCtorInfo_15_15, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__global_data__Var_11, ll_backend__global_data__Map0_7, &ll_backend__global_data__Map_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Counter_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Map_8));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11;

    ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_19_19;
    MR_Word ll_backend__global_data__Array0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Array_7;
    MR_Word ll_backend__global_data__Var_10;
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_14;
    MR_Word ll_backend__global_data__Var_15;
    MR_Word ll_backend__global_data__Var_16;

    {
      ll_backend__global_data__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 1) = ((MR_Box) (ll_backend__global_data__remap_scalar_cell_group_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_19_19, ll_backend__global_data__TypeCtorInfo_19_19, ll_backend__global_data__Var_10, ll_backend__global_data__Array0_6, &ll_backend__global_data__Array_7);
    ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
    ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
    ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Array_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
  MR_Word ll_backend__global_data__TypeNumRemap_6,
  MR_Word ll_backend__global_data__OldTypeNum_7,
  MR_Word ll_backend__global_data__VectorCellGroup_8,
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    MR_Word ll_backend__global_data__NewTypeNum_10;
    MR_Box ll_backend__global_data__conv0_NewTypeNum_10;

    mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeNumRemap_6, ((MR_Box) (ll_backend__global_data__OldTypeNum_7)), &ll_backend__global_data__conv0_NewTypeNum_10);
    ll_backend__global_data__NewTypeNum_10 = ((MR_Word) ll_backend__global_data__conv0_NewTypeNum_10);
    mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_14_14, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (ll_backend__global_data__NewTypeNum_10)), ((MR_Box) (ll_backend__global_data__VectorCellGroup_8)), ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11, ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12);
  }
}

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
  MR_Word ll_backend__global_data__TypeNum_10,
  MR_Word ll_backend__global_data__ArrayB_11,
  MR_Word ll_backend__global_data__ArrayAB_12,
  MR_Word ll_backend__global_data__Rvals_13,
  MR_Word ll_backend__global_data__BDataId_14,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupMembers_31,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupRemap_33)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__DataId_17;
    MR_Box ll_backend__global_data__conv0_DataId_17;

    ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30, ((MR_Box) (ll_backend__global_data__Rvals_13)), &ll_backend__global_data__conv0_DataId_17);
    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__DataId_17 = ((MR_Word) ll_backend__global_data__conv0_DataId_17);
      ll_backend__global_data__succeeded = MR_TRUE;
    }
    if (ll_backend__global_data__succeeded)
    {
      MR_Word ll_backend__global_data__TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;

      mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_44_44, ll_backend__global_data__TypeCtorInfo_44_44, ((MR_Box) (ll_backend__global_data__BDataId_14)), ((MR_Box) (ll_backend__global_data__DataId_17)), ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32, ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);
      *ll_backend__global_data__STATE_VARIABLE_GroupMembers_31 = ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30;
    }
    else
      switch (MR_tag((MR_Word) ll_backend__global_data__BDataId_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_scalar_cell_groups_2\'/9", (MR_String) "unexpected BDataId");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__global_data__TypeCtorInfo_45_45 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
            MR_Word ll_backend__global_data__TypeCtorInfo_47_47;
            MR_Integer ll_backend__global_data__BCellNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__BDataId_14, (MR_Integer) 1)));
            MR_Word ll_backend__global_data__CommonCellValue_20;
            MR_Integer ll_backend__global_data__CellNum_21;
            MR_Word ll_backend__global_data__DataId_40;
            MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__BDataId_14, (MR_Integer) 0)));
            MR_Box ll_backend__global_data__conv1_CommonCellValue_20;

            ll_backend__global_data__conv1_CommonCellValue_20 = mercury__list__det_index0_2_f_0(ll_backend__global_data__TypeCtorInfo_45_45, ll_backend__global_data__ArrayB_11, ll_backend__global_data__BCellNum_19);
            ll_backend__global_data__CommonCellValue_20 = ((MR_Word) ll_backend__global_data__conv1_CommonCellValue_20);
            ll_backend__global_data__CellNum_21 = mercury__list__det_index0_of_first_occurrence_2_f_0(ll_backend__global_data__TypeCtorInfo_45_45, ll_backend__global_data__ArrayAB_12, ((MR_Box) (ll_backend__global_data__CommonCellValue_20)));
            {
              ll_backend__global_data__DataId_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_40, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_10));
              MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_40, 1) = ((MR_Box) (ll_backend__global_data__CellNum_21));
            }
            ll_backend__global_data__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
            mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__TypeCtorInfo_47_47, ((MR_Box) (ll_backend__global_data__Rvals_13)), ((MR_Box) (ll_backend__global_data__DataId_40)), ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30, ll_backend__global_data__STATE_VARIABLE_GroupMembers_31);
            mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_47_47, ll_backend__global_data__TypeCtorInfo_47_47, ((MR_Box) (ll_backend__global_data__BDataId_14)), ((MR_Box) (ll_backend__global_data__DataId_40)), ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32, ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_scalar_cell_groups_2\'/9", (MR_String) "unexpected BDataId");
              return;
            }
          }
          break;
      }
  }
}

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4,
  MR_Box ll_backend__global_data__wrapper_arg_5,
  MR_Box * ll_backend__global_data__wrapper_arg_6)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31;
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33;

    ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33);
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31));
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33));
  }
}

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
  MR_Word ll_backend__global_data__TypeNumRemap_8,
  MR_Word ll_backend__global_data__BTypeNum_9,
  MR_Word ll_backend__global_data__BScalarCellGroup_10,
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Remap_0_20,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Remap_21)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    MR_Word ll_backend__global_data__TypeCtorInfo_27_55;
    MR_Word ll_backend__global_data__TypeCtorInfo_34_62;
    MR_Word ll_backend__global_data__TypeNum_13;
    MR_Word ll_backend__global_data__ScalarCellGroup0_15;
    MR_Word ll_backend__global_data__ScalarCellGroup_16;
    MR_Word ll_backend__global_data__ScalarCellGroupRemap_17;
    MR_Word ll_backend__global_data__GroupMembersA_40;
    MR_Word ll_backend__global_data__RevArrayA_41;
    MR_Word ll_backend__global_data__GroupMembersB_43;
    MR_Word ll_backend__global_data__RevArrayB_44;
    MR_Word ll_backend__global_data__CounterAB_45;
    MR_Word ll_backend__global_data__GroupMembersAB_46;
    MR_Word ll_backend__global_data__RevArrayAB_47;
    MR_Word ll_backend__global_data__ArrayA_48;
    MR_Word ll_backend__global_data__ArrayB_49;
    MR_Word ll_backend__global_data__ArrayAB_50;
    MR_Integer ll_backend__global_data__Var_51;
    MR_Word ll_backend__global_data__Var_52;
    MR_Word ll_backend__global_data__Var_53;
    MR_Word ll_backend__global_data__Var_54;
    MR_Box ll_backend__global_data__conv0_TypeNum_13;
    MR_Word ll_backend__global_data__ScalarCellGroupPrime_14;
    MR_Box ll_backend__global_data__conv1_ScalarCellGroupPrime_14;
    MR_Word ll_backend__global_data___CounterA_39;
    MR_Word ll_backend__global_data___CounterB_42;
    MR_Box ll_backend__global_data__conv5_GroupMembersAB_46;
    MR_Box ll_backend__global_data__conv4_ScalarCellGroupRemap_17;

    mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_28_28, ll_backend__global_data__TypeCtorInfo_28_28, ll_backend__global_data__TypeNumRemap_8, ((MR_Box) (ll_backend__global_data__BTypeNum_9)), &ll_backend__global_data__conv0_TypeNum_13);
    ll_backend__global_data__TypeNum_13 = ((MR_Word) ll_backend__global_data__conv0_TypeNum_13);
    ll_backend__global_data__succeeded = mercury__map__search_3_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18, ((MR_Box) (ll_backend__global_data__TypeNum_13)), &ll_backend__global_data__conv1_ScalarCellGroupPrime_14);
    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__ScalarCellGroupPrime_14 = ((MR_Word) ll_backend__global_data__conv1_ScalarCellGroupPrime_14);
      ll_backend__global_data__succeeded = MR_TRUE;
    }
    if (ll_backend__global_data__succeeded)
      ll_backend__global_data__ScalarCellGroup0_15 = ll_backend__global_data__ScalarCellGroupPrime_14;
    else
    {
      MR_Word ll_backend__global_data__Var_22;
      MR_Word ll_backend__global_data__Var_24;

      ll_backend__global_data__Var_22 = mercury__counter__init_1_f_0((MR_Integer) 0);
      ll_backend__global_data__Var_24 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
      {
        ll_backend__global_data__ScalarCellGroup0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 0) = ((MR_Box) (ll_backend__global_data__Var_22));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 1) = ((MR_Box) (ll_backend__global_data__Var_24));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    ll_backend__global_data___CounterA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 0)));
    ll_backend__global_data__GroupMembersA_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 1)));
    ll_backend__global_data__RevArrayA_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 2)));
    ll_backend__global_data___CounterB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 0)));
    ll_backend__global_data__GroupMembersB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 1)));
    ll_backend__global_data__RevArrayB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 2)));
    ll_backend__global_data__TypeCtorInfo_27_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    ll_backend__global_data__ArrayA_48 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayA_41);
    ll_backend__global_data__ArrayB_49 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayB_44);
    ll_backend__global_data__Var_52 = mercury__list__delete_elems_2_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayB_49, ll_backend__global_data__ArrayA_48);
    ll_backend__global_data__ArrayAB_50 = mercury__list__f_43_43_2_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayA_48, ll_backend__global_data__Var_52);
    ll_backend__global_data__RevArrayAB_47 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayAB_50);
    ll_backend__global_data__Var_51 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayAB_47);
    ll_backend__global_data__CounterAB_45 = mercury__counter__init_1_f_0(ll_backend__global_data__Var_51);
    {
      ll_backend__global_data__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_53, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_53, 1) = ((MR_Box) (ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_53, 3) = ((MR_Box) (ll_backend__global_data__TypeNum_13));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_53, 4) = ((MR_Box) (ll_backend__global_data__ArrayB_49));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_53, 5) = ((MR_Box) (ll_backend__global_data__ArrayAB_50));
    }
    ll_backend__global_data__TypeCtorInfo_34_62 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
    ll_backend__global_data__Var_54 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_34_62, ll_backend__global_data__TypeCtorInfo_34_62);
    mercury__bimap__foldl2_6_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__TypeCtorInfo_34_62, (MR_Word) &ll_backend__global_data_scalar_common_1[6], (MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__Var_53, ll_backend__global_data__GroupMembersB_43, ((MR_Box) (ll_backend__global_data__GroupMembersA_40)), &ll_backend__global_data__conv5_GroupMembersAB_46, ((MR_Box) (ll_backend__global_data__Var_54)), &ll_backend__global_data__conv4_ScalarCellGroupRemap_17);
    ll_backend__global_data__GroupMembersAB_46 = ((MR_Word) ll_backend__global_data__conv5_GroupMembersAB_46);
    ll_backend__global_data__ScalarCellGroupRemap_17 = ((MR_Word) ll_backend__global_data__conv4_ScalarCellGroupRemap_17);
    {
      ll_backend__global_data__ScalarCellGroup_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 0) = ((MR_Box) (ll_backend__global_data__CounterAB_45));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 1) = ((MR_Box) (ll_backend__global_data__GroupMembersAB_46));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 2) = ((MR_Box) (ll_backend__global_data__RevArrayAB_47));
    }
    mercury__map__set_4_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_13)), ((MR_Box) (ll_backend__global_data__ScalarCellGroup_16)), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18, ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19);
    mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (ll_backend__global_data__BTypeNum_9)), ((MR_Box) (ll_backend__global_data__ScalarCellGroupRemap_17)), ll_backend__global_data__STATE_VARIABLE_Remap_0_20, ll_backend__global_data__STATE_VARIABLE_Remap_21);
  }
}

static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
  MR_Word ll_backend__global_data__CellType_9,
  MR_Word ll_backend__global_data__BTypeNum_10,
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeCounter_18,
  MR_Word ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20,
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__ATypeNum_14;
    MR_Box ll_backend__global_data__conv0_ATypeNum_14;

    ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19, ((MR_Box) (ll_backend__global_data__CellType_9)), &ll_backend__global_data__conv0_ATypeNum_14);
    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__ATypeNum_14 = ((MR_Word) ll_backend__global_data__conv0_ATypeNum_14);
      ll_backend__global_data__succeeded = MR_TRUE;
    }
    if (ll_backend__global_data__succeeded)
    {
      MR_Word ll_backend__global_data__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

      mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_29_29, ll_backend__global_data__TypeCtorInfo_29_29, ((MR_Box) (ll_backend__global_data__BTypeNum_10)), ((MR_Box) (ll_backend__global_data__ATypeNum_14)), ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21, ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);
      *ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20 = ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19;
      *ll_backend__global_data__STATE_VARIABLE_TypeCounter_18 = ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17;
    }
    else
    {
      MR_Word ll_backend__global_data__TypeCtorInfo_30_30;
      MR_Integer ll_backend__global_data__N_15;
      MR_Word ll_backend__global_data__NewTypeNum_16;

      mercury__counter__allocate_3_p_0(&ll_backend__global_data__N_15, ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17, ll_backend__global_data__STATE_VARIABLE_TypeCounter_18);
      ll_backend__global_data__NewTypeNum_16 = (MR_Word) ll_backend__global_data__N_15;
      ll_backend__global_data__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
      mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_30_30, ll_backend__global_data__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__global_data__BTypeNum_10)), ((MR_Box) (ll_backend__global_data__NewTypeNum_16)), ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21, ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);
      mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__global_data__CellType_9)), ((MR_Box) (ll_backend__global_data__NewTypeNum_16)), ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19, ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20);
    }
  }
}

static void MR_CALL 
ll_backend__global_data__associate_natural_type_4_p_0(
  MR_Word ll_backend__global_data__UnboxFloat_5,
  MR_Word ll_backend__global_data__ArgWidth_6,
  MR_Word ll_backend__global_data__Rval_7,
  MR_Word * ll_backend__global_data__HeadVar__4_4)
{
  {
    MR_Word ll_backend__global_data__Type_8;

    ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__UnboxFloat_5, ll_backend__global_data__ArgWidth_6, ll_backend__global_data__Rval_7, &ll_backend__global_data__Type_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Rval_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Type_8));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
  MR_Word ll_backend__global_data__TypeNum_7,
  MR_Word ll_backend__global_data__CellType_8,
  MR_Integer ll_backend__global_data__CellNum_9,
  MR_Word ll_backend__global_data__HeadVar__4_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14)
{
  {
    MR_Word ll_backend__global_data__VectorContents_10 = (MR_Word) ll_backend__global_data__HeadVar__4_4;
    MR_Word ll_backend__global_data__Array_12;

    {
      ll_backend__global_data__Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 0) = ((MR_Box) (ll_backend__global_data__CellType_8));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 2) = ((MR_Box) (ll_backend__global_data__CellNum_9));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 3) = ((MR_Box) (ll_backend__global_data__VectorContents_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__global_data__STATE_VARIABLE_Arrays_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Array_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_13));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14;

    ll_backend__global_data__add_one_vector_static_cell_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14);
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14));
  }
}

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
  MR_Word ll_backend__global_data__TypeNumMap_6,
  MR_Word ll_backend__global_data__TypeNum_7,
  MR_Word ll_backend__global_data__CellGroup_8,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_11,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_12)
{
  {
    MR_Word ll_backend__global_data__CellType_10;
    MR_Word ll_backend__global_data__Var_13;
    MR_Word ll_backend__global_data__Var_14;
    MR_Box ll_backend__global_data__conv0_CellType_10;
    MR_Word ll_backend__global_data__Var_16;
    MR_Box ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12;

    mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap_6, &ll_backend__global_data__conv0_CellType_10, ((MR_Box) (ll_backend__global_data__TypeNum_7)));
    ll_backend__global_data__CellType_10 = ((MR_Word) ll_backend__global_data__conv0_CellType_10);
    {
      ll_backend__global_data__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 1) = ((MR_Box) (ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 3) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 4) = ((MR_Box) (ll_backend__global_data__CellType_10));
    }
    ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 0)));
    ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 1)));
    mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], ll_backend__global_data__Var_13, ll_backend__global_data__Var_14, ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_11)), &ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
    *ll_backend__global_data__STATE_VARIABLE_Arrays_12 = ((MR_Word) ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
  }
}

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
  MR_Word ll_backend__global_data__TypeNumMap_6,
  MR_Word ll_backend__global_data__TypeNum_7,
  MR_Word ll_backend__global_data__CellGroup_8,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14)
{
  {
    MR_Word ll_backend__global_data__CellType_10;
    MR_Word ll_backend__global_data__ArrayContents_11;
    MR_Word ll_backend__global_data__Array_12;
    MR_Word ll_backend__global_data__Var_15;
    MR_Box ll_backend__global_data__conv0_CellType_10;
    MR_Word ll_backend__global_data__Var_17;
    MR_Word ll_backend__global_data__Var_18;

    mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap_6, &ll_backend__global_data__conv0_CellType_10, ((MR_Box) (ll_backend__global_data__TypeNum_7)));
    ll_backend__global_data__CellType_10 = ((MR_Word) ll_backend__global_data__conv0_CellType_10);
    ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 0)));
    ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 1)));
    ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 2)));
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, ll_backend__global_data__Var_15, &ll_backend__global_data__ArrayContents_11);
    {
      ll_backend__global_data__Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 0) = ((MR_Box) (ll_backend__global_data__CellType_10));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 2) = ((MR_Box) (ll_backend__global_data__ArrayContents_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__global_data__STATE_VARIABLE_Arrays_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Array_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_13));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
  MR_Word ll_backend__global_data__Types_4,
  MR_Word ll_backend__global_data__Args_5)
{
  {
    MR_Word ll_backend__global_data__HeadVar__3_3;
    MR_Word ll_backend__global_data__TypedArgs_6;

    ll_backend__llds__build_typed_rvals_3_p_0(ll_backend__global_data__Args_5, ll_backend__global_data__Types_4, &ll_backend__global_data__TypedArgs_6);
    {
      ll_backend__global_data__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__global_data__TypedArgs_6));
    }
    return ll_backend__global_data__HeadVar__3_3;
  }
}

static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
  MR_Word ll_backend__global_data__AllocSite_6,
  MR_Integer ll_backend__global_data__Slot_7,
  MR_Integer * ll_backend__global_data__HeadVar__3_3,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Map_0_11,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Map_12)
{
  {
    MR_Word ll_backend__global_data__AllocId_9;
    MR_Word ll_backend__global_data__ArraySlot_10;

    *ll_backend__global_data__HeadVar__3_3 = (ll_backend__global_data__Slot_7 + (MR_Integer) 1);
    ll_backend__global_data__AllocId_9 = (MR_Word) ll_backend__global_data__AllocSite_6;
    {
      ll_backend__global_data__ArraySlot_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ArraySlot_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ArraySlot_10, 1) = ((MR_Box) (ll_backend__global_data__Slot_7));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (ll_backend__global_data__AllocId_9)), ((MR_Box) (ll_backend__global_data__ArraySlot_10)), ll_backend__global_data__STATE_VARIABLE_Map_0_11, ll_backend__global_data__STATE_VARIABLE_Map_12);
  }
}

static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10;

    ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10));
  }
}

void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Procedure_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Procedure_9)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_31_31;
    MR_Word ll_backend__global_data__Code0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Code_7;
    MR_Word ll_backend__global_data__Var_10;
    MR_String ll_backend__global_data__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
    MR_Integer ll_backend__global_data__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
    MR_Word ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
    MR_String ll_backend__global_data__Var_20;
    MR_Integer ll_backend__global_data__Var_21;
    MR_Word ll_backend__global_data__Var_22;
    MR_Word ll_backend__global_data__Var_23;
    MR_Word ll_backend__global_data__Var_24;
    MR_Word ll_backend__global_data__Var_26;
    MR_Word ll_backend__global_data__Var_27;
    MR_Word ll_backend__global_data__Var_28;
    MR_Word ll_backend__global_data__Var_25;

    {
      ll_backend__global_data__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 1) = ((MR_Box) (ll_backend__global_data__remap_references_to_global_data_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_31_31, ll_backend__global_data__TypeCtorInfo_31_31, ll_backend__global_data__Var_10, ll_backend__global_data__Code0_6, &ll_backend__global_data__Code_7);
    ll_backend__global_data__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
    ll_backend__global_data__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
    ll_backend__global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
    ll_backend__global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
    ll_backend__global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
    ll_backend__global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
    ll_backend__global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
    ll_backend__global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
    ll_backend__global_data__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_Procedure_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Code_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__global_data__Var_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__global_data__Var_28));
    }
  }
}

void MR_CALL 
ll_backend__global_data__merge_global_datas_4_p_0(
  MR_Word ll_backend__global_data__GlobalDataA_5,
  MR_Word ll_backend__global_data__GlobalDataB_6,
  MR_Word * ll_backend__global_data__GlobalData_7,
  MR_Word * ll_backend__global_data__GlobalDataRemap_8)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word ll_backend__global_data__ProcVarMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__ProcLayoutMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__ClosureLayoutsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__TSStringSlotCounterA_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__TSRevStringTableA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__StaticCellInfoA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__AllocSitesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__ProcVarMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__ProcLayoutMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__ClosureLayoutsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__TSStringSlotCounterB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__TSRevStringTableB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__StaticCellInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__AllocSitesB_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__ProcVarMap_23;
    MR_Word ll_backend__global_data__ProcLayoutMap_24;
    MR_Word ll_backend__global_data__ClosureLayouts_25;
    MR_Word ll_backend__global_data__TSRevStringTable_26;
    MR_Integer ll_backend__global_data__TSStringSlotCounter_27;
    MR_Word ll_backend__global_data__MaybeTSStringTableRemap_28;
    MR_Word ll_backend__global_data__StaticCellInfo_29;
    MR_Word ll_backend__global_data__StaticCellRemap_30;
    MR_Word ll_backend__global_data__AllocSites_31;

    ll_backend__global_data__ProcVarMap_23 = mercury__map__old_merge_2_f_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__global_data__ProcVarMapA_9, ll_backend__global_data__ProcVarMapB_16);
    ll_backend__global_data__ProcLayoutMap_24 = mercury__map__old_merge_2_f_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMapA_10, ll_backend__global_data__ProcLayoutMapB_17);
    ll_backend__global_data__ClosureLayouts_25 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__global_data__ClosureLayoutsA_11, ll_backend__global_data__ClosureLayoutsB_18);
    if ((ll_backend__global_data__TSRevStringTableA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__global_data__TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__global_data__TSRevStringTable_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__global_data__TSStringSlotCounter_27 = (MR_Integer) 0;
        ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        ll_backend__global_data__TSRevStringTable_26 = ll_backend__global_data__TSRevStringTableB_20;
        ll_backend__global_data__TSStringSlotCounter_27 = ll_backend__global_data__TSStringSlotCounterB_19;
        ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
    if ((ll_backend__global_data__TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ll_backend__global_data__TSRevStringTable_26 = ll_backend__global_data__TSRevStringTableA_13;
      ll_backend__global_data__TSStringSlotCounter_27 = ll_backend__global_data__TSStringSlotCounterA_12;
      ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      ll_backend__global_data__TSRevStringTable_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__global_data__TSRevStringTableB_20, ll_backend__global_data__TSRevStringTableA_13);
      ll_backend__global_data__TSStringSlotCounter_27 = (ll_backend__global_data__TSStringSlotCounterA_12 + ll_backend__global_data__TSStringSlotCounterB_19);
      {
        ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeTSStringTableRemap_28, 0) = ((MR_Box) (ll_backend__global_data__TSStringSlotCounterA_12));
      }
    }
    ll_backend__global_data__merge_static_cell_infos_4_p_0(ll_backend__global_data__StaticCellInfoA_14, ll_backend__global_data__StaticCellInfoB_21, &ll_backend__global_data__StaticCellInfo_29, &ll_backend__global_data__StaticCellRemap_30);
    mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__global_data__AllocSitesA_15, ll_backend__global_data__AllocSitesB_22, &ll_backend__global_data__AllocSites_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__ProcVarMap_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__ClosureLayouts_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TSStringSlotCounter_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__TSRevStringTable_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__AllocSites_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__GlobalDataRemap_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__MaybeTSStringTableRemap_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__StaticCellRemap_30));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12;

    ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12);
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12));
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4,
  MR_Box ll_backend__global_data__wrapper_arg_5,
  MR_Box * ll_backend__global_data__wrapper_arg_6)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19;
    MR_Word ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21;

    ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21);
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19));
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21));
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4,
  MR_Box ll_backend__global_data__wrapper_arg_5,
  MR_Box * ll_backend__global_data__wrapper_arg_6,
  MR_Box ll_backend__global_data__wrapper_arg_7,
  MR_Box * ll_backend__global_data__wrapper_arg_8)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18;
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22;

    ll_backend__global_data__merge_cell_type_num_maps_8_p_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20, ((MR_Word) ll_backend__global_data__wrapper_arg_7), &ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22);
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18));
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20));
    *ll_backend__global_data__wrapper_arg_8 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
  MR_Box ll_backend__global_data__closure_arg)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

    ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__792__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
  MR_Word ll_backend__global_data__SCIa_5,
  MR_Word ll_backend__global_data__SCIb_6,
  MR_Word * ll_backend__global_data__SCI_7,
  MR_Word * ll_backend__global_data__Remap_8)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__TypeCtorInfo_41_41;
    MR_Word ll_backend__global_data__TypeCtorInfo_19_59;
    MR_Word ll_backend__global_data__SubInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__TypeCounterA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__CellTypeNumMapA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__ScalarCellGroupMapA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__VectorCellGroupMapA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__SubInfoB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__CellTypeNumMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__ScalarCellGroupMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__VectorCellGroupMapB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__TypeCounter_19;
    MR_Word ll_backend__global_data__CellTypeNumMap_20;
    MR_Word ll_backend__global_data__CellTypeNumMapRemap_21;
    MR_Word ll_backend__global_data__ScalarCellGroupMap_22;
    MR_Word ll_backend__global_data__ScalarCellGroupRemap_23;
    MR_Word ll_backend__global_data__VectorCellGroupMap_24;
    MR_Word ll_backend__global_data__SCI0_25;
    MR_Word ll_backend__global_data__Var_26;
    MR_Word ll_backend__global_data__Var_31;
    MR_Word ll_backend__global_data__Var_51;
    MR_Word ll_backend__global_data__Var_52;
    MR_Word ll_backend__global_data__Var_68;
    MR_Word ll_backend__global_data___TypeCounterB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 1)));
    MR_Box ll_backend__global_data__conv5_TypeCounter_19;
    MR_Box ll_backend__global_data__conv4_CellTypeNumMap_20;
    MR_Box ll_backend__global_data__conv3_CellTypeNumMapRemap_21;
    MR_Box ll_backend__global_data__conv9_ScalarCellGroupMap_22;
    MR_Box ll_backend__global_data__conv8_ScalarCellGroupRemap_23;
    MR_Box ll_backend__global_data__conv11_VectorCellGroupMap_24;

    {
      ll_backend__global_data__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_26, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_26, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_26, 3) = ((MR_Box) (ll_backend__global_data__SubInfoA_9));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_26, 4) = ((MR_Box) (ll_backend__global_data__SubInfoB_14));
    }
    mercury__require__expect_4_p_0(ll_backend__global_data__Var_26, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_static_cell_infos\'/4", (MR_String) "mismatch");
    ll_backend__global_data__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    ll_backend__global_data__Var_31 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_41_41, ll_backend__global_data__TypeCtorInfo_41_41);
    mercury__bimap__foldl3_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_41_41, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__global_data_scalar_common_1[1], (MR_Word) &ll_backend__global_data_scalar_common_1[2], (MR_Word) &ll_backend__global_data_scalar_common_1[12], ll_backend__global_data__CellTypeNumMapB_16, ((MR_Box) (ll_backend__global_data__TypeCounterA_10)), &ll_backend__global_data__conv5_TypeCounter_19, ((MR_Box) (ll_backend__global_data__CellTypeNumMapA_11)), &ll_backend__global_data__conv4_CellTypeNumMap_20, ((MR_Box) (ll_backend__global_data__Var_31)), &ll_backend__global_data__conv3_CellTypeNumMapRemap_21);
    ll_backend__global_data__TypeCounter_19 = ((MR_Word) ll_backend__global_data__conv5_TypeCounter_19);
    ll_backend__global_data__CellTypeNumMap_20 = ((MR_Word) ll_backend__global_data__conv4_CellTypeNumMap_20);
    ll_backend__global_data__CellTypeNumMapRemap_21 = ((MR_Word) ll_backend__global_data__conv3_CellTypeNumMapRemap_21);
    {
      ll_backend__global_data__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_51, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_51, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_3));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_51, 3) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
    }
    ll_backend__global_data__TypeCtorInfo_19_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    ll_backend__global_data__Var_52 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data_scalar_common_1[3]);
    mercury__map__foldl2_6_p_0(ll_backend__global_data__TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[4], (MR_Word) &ll_backend__global_data_scalar_common_1[5], ll_backend__global_data__Var_51, ll_backend__global_data__ScalarCellGroupMapB_17, ((MR_Box) (ll_backend__global_data__ScalarCellGroupMapA_12)), &ll_backend__global_data__conv9_ScalarCellGroupMap_22, ((MR_Box) (ll_backend__global_data__Var_52)), &ll_backend__global_data__conv8_ScalarCellGroupRemap_23);
    ll_backend__global_data__ScalarCellGroupMap_22 = ((MR_Word) ll_backend__global_data__conv9_ScalarCellGroupMap_22);
    ll_backend__global_data__ScalarCellGroupRemap_23 = ((MR_Word) ll_backend__global_data__conv8_ScalarCellGroupRemap_23);
    {
      ll_backend__global_data__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_68, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_68, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_4));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_68, 3) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
    }
    mercury__map__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__Var_68, ll_backend__global_data__VectorCellGroupMapB_18, ((MR_Box) (ll_backend__global_data__VectorCellGroupMapA_13)), &ll_backend__global_data__conv11_VectorCellGroupMap_24);
    ll_backend__global_data__VectorCellGroupMap_24 = ((MR_Word) ll_backend__global_data__conv11_VectorCellGroupMap_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__Remap_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ScalarCellGroupRemap_23));
    }
    {
      ll_backend__global_data__SCI0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 0) = ((MR_Box) (ll_backend__global_data__SubInfoA_9));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 1) = ((MR_Box) (ll_backend__global_data__TypeCounter_19));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 2) = ((MR_Box) (ll_backend__global_data__CellTypeNumMap_20));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 3) = ((MR_Box) (ll_backend__global_data__ScalarCellGroupMap_22));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 4) = ((MR_Box) (ll_backend__global_data__VectorCellGroupMap_24));
    }
    ll_backend__global_data__remap_static_cell_info_3_p_0(*ll_backend__global_data__Remap_8, ll_backend__global_data__SCI0_25, ll_backend__global_data__SCI_7);
  }
}

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10;

    ll_backend__global_data__remap_vector_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9;

    ll_backend__global_data__remap_scalar_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
  MR_Word ll_backend__global_data__Remap_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_SCI_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_SCI_11)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_36_36;
    MR_Word ll_backend__global_data__TypeCtorInfo_37_37;
    MR_Word ll_backend__global_data__TypeCtorInfo_40_40;
    MR_Word ll_backend__global_data__ScalarMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__VectorMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__ScalarMap_8;
    MR_Word ll_backend__global_data__VectorMap_9;
    MR_Word ll_backend__global_data__Var_12;
    MR_Word ll_backend__global_data__Var_13;
    MR_Word ll_backend__global_data__Var_24;
    MR_Word ll_backend__global_data__Var_25;
    MR_Word ll_backend__global_data__Var_26;
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Var_27;
    MR_Word ll_backend__global_data__Var_28;

    {
      ll_backend__global_data__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_36_36 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
    ll_backend__global_data__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_36_36, ll_backend__global_data__TypeCtorInfo_36_36, ll_backend__global_data__TypeCtorInfo_37_37, ll_backend__global_data__Var_12, ll_backend__global_data__ScalarMap0_6, &ll_backend__global_data__ScalarMap_8);
    {
      ll_backend__global_data__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
    }
    ll_backend__global_data__TypeCtorInfo_40_40 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0;
    mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_40_40, ll_backend__global_data__TypeCtorInfo_40_40, ll_backend__global_data__TypeCtorInfo_37_37, ll_backend__global_data__Var_13, ll_backend__global_data__VectorMap0_7, &ll_backend__global_data__VectorMap_9);
    ll_backend__global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
    ll_backend__global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
    ll_backend__global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
    ll_backend__global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
    ll_backend__global_data__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_SCI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__ScalarMap_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__VectorMap_9));
    }
  }
}

void MR_CALL 
ll_backend__global_data__bump_type_num_counter_3_p_0(
  MR_Integer ll_backend__global_data__Increment_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ll_backend__global_data__Counter0_6;
    MR_Integer ll_backend__global_data__N_7;
    MR_Word ll_backend__global_data__Counter_9;
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Integer ll_backend__global_data__Var_13;
    MR_Word ll_backend__global_data__Var_15;
    MR_Word ll_backend__global_data__Var_16;
    MR_Word ll_backend__global_data__Var_27;
    MR_Word ll_backend__global_data__Var_28;
    MR_Word ll_backend__global_data__Var_29;
    MR_Integer ll_backend__global_data__Var_30;
    MR_Word ll_backend__global_data__Var_31;
    MR_Word ll_backend__global_data__Var_32;
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_24;
    MR_Word ll_backend__global_data__Var_25;
    MR_Word ll_backend__global_data__Var_26;
    MR_Word ll_backend__global_data__Var_8;
    MR_Word ll_backend__global_data__Var_33;
    MR_Word ll_backend__global_data__Var_35;
    MR_Word ll_backend__global_data__Var_36;
    MR_Word ll_backend__global_data__Var_37;
    MR_Word ll_backend__global_data__Var_34;

    ll_backend__global_data__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, (MR_Integer) 1)));
    ll_backend__global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, (MR_Integer) 2)));
    ll_backend__global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, (MR_Integer) 3)));
    ll_backend__global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, (MR_Integer) 4)));
    mercury__counter__allocate_3_p_0(&ll_backend__global_data__N_7, ll_backend__global_data__Counter0_6, &ll_backend__global_data__Var_8);
    ll_backend__global_data__Var_13 = (ll_backend__global_data__N_7 + ll_backend__global_data__Increment_4);
    ll_backend__global_data__Counter_9 = mercury__counter__init_1_f_0(ll_backend__global_data__Var_13);
    ll_backend__global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    ll_backend__global_data__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    ll_backend__global_data__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    ll_backend__global_data__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    ll_backend__global_data__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    ll_backend__global_data__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    ll_backend__global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_15, (MR_Integer) 0)));
    ll_backend__global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_15, (MR_Integer) 1)));
    ll_backend__global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_15, (MR_Integer) 2)));
    ll_backend__global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_15, (MR_Integer) 3)));
    ll_backend__global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_15, (MR_Integer) 4)));
    {
      ll_backend__global_data__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_16, 0) = ((MR_Box) (ll_backend__global_data__Var_33));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_16, 1) = ((MR_Box) (ll_backend__global_data__Counter_9));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_16, 2) = ((MR_Box) (ll_backend__global_data__Var_35));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_16, 3) = ((MR_Box) (ll_backend__global_data__Var_36));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_16, 4) = ((MR_Box) (ll_backend__global_data__Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_32));
    }
  }
}

MR_Word MR_CALL 
ll_backend__global_data__rval_type_as_arg_3_f_0(
  MR_Word ll_backend__global_data__UnboxedFloat_5,
  MR_Word ll_backend__global_data__ArgWidth_6,
  MR_Word ll_backend__global_data__Rval_7)
{
  {
    MR_Word ll_backend__global_data__Type_8;

    ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__UnboxedFloat_5, ll_backend__global_data__ArgWidth_6, ll_backend__global_data__Rval_7, &ll_backend__global_data__Type_8);
    return ll_backend__global_data__Type_8;
  }
}

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12;

    ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12));
  }
}

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3,
  MR_Box * ll_backend__global_data__wrapper_arg_4)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14;

    ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14);
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14));
  }
}

void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0(
  MR_Word ll_backend__global_data__Info_4,
  MR_Word * ll_backend__global_data__ScalarDatas_5,
  MR_Word * ll_backend__global_data__VectorDatas_6)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_32_32;
    MR_Word ll_backend__global_data__TypeNumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__RevScalarDatas_8;
    MR_Word ll_backend__global_data__RevVectorDatas_9;
    MR_Word ll_backend__global_data__Var_10;
    MR_Word ll_backend__global_data__Var_13;
    MR_Word ll_backend__global_data__Var_14;
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 4)));
    MR_Box ll_backend__global_data__conv1_RevScalarDatas_8;
    MR_Word ll_backend__global_data__Var_24;
    MR_Word ll_backend__global_data__Var_25;
    MR_Word ll_backend__global_data__Var_26;
    MR_Word ll_backend__global_data__Var_27;
    MR_Box ll_backend__global_data__conv3_RevVectorDatas_9;

    {
      ll_backend__global_data__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_10, 3) = ((MR_Box) (ll_backend__global_data__TypeNumMap_7));
    }
    ll_backend__global_data__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    mercury__map__foldl_4_p_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[1], ll_backend__global_data__Var_10, ll_backend__global_data__Var_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__global_data__conv1_RevScalarDatas_8);
    ll_backend__global_data__RevScalarDatas_8 = ((MR_Word) ll_backend__global_data__conv1_RevScalarDatas_8);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0, ll_backend__global_data__RevScalarDatas_8, ll_backend__global_data__ScalarDatas_5);
    {
      ll_backend__global_data__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, 3) = ((MR_Box) (ll_backend__global_data__TypeNumMap_7));
    }
    ll_backend__global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 0)));
    ll_backend__global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 1)));
    ll_backend__global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 2)));
    ll_backend__global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 3)));
    ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 4)));
    mercury__map__foldl_4_p_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], ll_backend__global_data__Var_13, ll_backend__global_data__Var_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__global_data__conv3_RevVectorDatas_9);
    ll_backend__global_data__RevVectorDatas_9 = ((MR_Word) ll_backend__global_data__conv3_RevVectorDatas_9);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0, ll_backend__global_data__RevVectorDatas_9, ll_backend__global_data__VectorDatas_6);
  }
}

MR_bool MR_CALL 
ll_backend__global_data__search_scalar_static_cell_offset_4_p_0(
  MR_Word ll_backend__global_data__Info_5,
  MR_Word ll_backend__global_data__DataId_6,
  MR_Integer ll_backend__global_data__Offset_7,
  MR_Word * ll_backend__global_data__Rval_8)
{
  {
    MR_bool ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__DataId_6)) == (MR_mktag((MR_Integer) 2)));
    MR_Word ll_backend__global_data__TypeCtorInfo_21_21;
    MR_Word ll_backend__global_data__TypeCtorInfo_22_22;
    MR_Word ll_backend__global_data__TypeInfo_23_23;
    MR_Word ll_backend__global_data__TypeCtorInfo_24_24;
    MR_Word ll_backend__global_data__TypeCtorInfo_25_25;
    MR_Word ll_backend__global_data__TypeNum_9;
    MR_Word ll_backend__global_data__CellGroupMap_11;
    MR_Word ll_backend__global_data__CellGroup_12;
    MR_Word ll_backend__global_data__CellGroupMembers_13;
    MR_Word ll_backend__global_data__Rvals_14;
    MR_Integer ll_backend__global_data___CellNum_10;
    MR_Word ll_backend__global_data__Var_15;
    MR_Word ll_backend__global_data__Var_16;
    MR_Word ll_backend__global_data__Var_17;
    MR_Word ll_backend__global_data__Var_18;
    MR_Box ll_backend__global_data__conv0_CellGroup_12;
    MR_Word ll_backend__global_data__Var_19;
    MR_Word ll_backend__global_data__Var_20;
    MR_Box ll_backend__global_data__conv1_Rvals_14;
    MR_Box ll_backend__global_data__conv2_Rval_8;

    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__TypeNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_6, (MR_Integer) 0)));
      ll_backend__global_data___CellNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_6, (MR_Integer) 1)));
      ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 0)));
      ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 1)));
      ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 2)));
      ll_backend__global_data__CellGroupMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 3)));
      ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 4)));
      ll_backend__global_data__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
      ll_backend__global_data__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
      mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__TypeCtorInfo_22_22, ll_backend__global_data__CellGroupMap_11, ((MR_Box) (ll_backend__global_data__TypeNum_9)), &ll_backend__global_data__conv0_CellGroup_12);
      ll_backend__global_data__CellGroup_12 = ((MR_Word) ll_backend__global_data__conv0_CellGroup_12);
      ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 0)));
      ll_backend__global_data__CellGroupMembers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 1)));
      ll_backend__global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 2)));
      ll_backend__global_data__TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[0];
      ll_backend__global_data__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
      mercury__bimap__reverse_lookup_3_p_0(ll_backend__global_data__TypeInfo_23_23, ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__CellGroupMembers_13, &ll_backend__global_data__conv1_Rvals_14, ((MR_Box) (ll_backend__global_data__DataId_6)));
      ll_backend__global_data__Rvals_14 = ((MR_Word) ll_backend__global_data__conv1_Rvals_14);
      ll_backend__global_data__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
      mercury__list__det_index0_3_p_0(ll_backend__global_data__TypeCtorInfo_25_25, ll_backend__global_data__Rvals_14, ll_backend__global_data__Offset_7, &ll_backend__global_data__conv2_Rval_8);
      *ll_backend__global_data__Rval_8 = ((MR_Word) ll_backend__global_data__conv2_Rval_8);
      ll_backend__global_data__succeeded = MR_TRUE;
    }
    return ll_backend__global_data__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1)
{
  {
    MR_Box ll_backend__global_data__wrapper_arg_2;
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_HeadVar__3_3;

    ll_backend__global_data__conv0_HeadVar__3_3 = ll_backend__global_data__pair_vector_element_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1));
    ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__3_3));
    return ll_backend__global_data__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
  MR_Box ll_backend__global_data__closure_arg)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

    ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__534__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))));
    return ll_backend__global_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
  MR_Box ll_backend__global_data__closure_arg)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

    ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__533__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))));
    return ll_backend__global_data__succeeded;
  }
}

void MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0(
  MR_Word ll_backend__global_data__LLDSTypes_6,
  MR_Word ll_backend__global_data__VectorData_7,
  MR_Word * ll_backend__global_data__DataId_8,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_28,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_29)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__CellType_10;
    MR_Word ll_backend__global_data__VectorCells_11;
    MR_Word ll_backend__global_data__TypeNumMap0_13;
    MR_Word ll_backend__global_data__CellGroupMap0_14;
    MR_Word ll_backend__global_data__TypeNum_16;
    MR_Word ll_backend__global_data__CellNumCounter0_21;
    MR_Integer ll_backend__global_data__CellNum_22;
    MR_Word ll_backend__global_data__CellNumCounter_23;
    MR_Word ll_backend__global_data__CellMap0_24;
    MR_Word ll_backend__global_data__VectorContents_25;
    MR_Word ll_backend__global_data__CellMap_26;
    MR_Word ll_backend__global_data__CellGroupMap_27;
    MR_Word ll_backend__global_data__Var_30;
    MR_Word ll_backend__global_data__Var_34;
    MR_Word ll_backend__global_data__Var_38;
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40;
    MR_Word ll_backend__global_data__STATE_VARIABLE_Info_42_42;
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44;
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45;
    MR_Word ll_backend__global_data__Var_47;
    MR_Word ll_backend__global_data__Var_48;
    MR_Word ll_backend__global_data__Var_49;
    MR_Word ll_backend__global_data__TypeNumPrime_15;
    MR_Box ll_backend__global_data__conv1_TypeNumPrime_15;
    MR_Word ll_backend__global_data__Var_69;
    MR_Word ll_backend__global_data__Var_70;
    MR_Word ll_backend__global_data__Var_73;
    MR_Word ll_backend__global_data__Var_74;
    MR_Word ll_backend__global_data__Var_75;
    MR_Word ll_backend__global_data__Var_76;
    MR_Word ll_backend__global_data__Var_77;
    MR_Word ll_backend__global_data__Var_78;
    MR_Word ll_backend__global_data__Var_79;

    {
      ll_backend__global_data__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_30, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_30, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_30, 3) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
    }
    mercury__require__expect_4_p_0(ll_backend__global_data__Var_30, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.add_vector_static_cell\'/5", (MR_String) "no types");
    {
      ll_backend__global_data__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_34, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_34, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_34, 3) = ((MR_Box) (ll_backend__global_data__VectorData_7));
    }
    mercury__require__expect_4_p_0(ll_backend__global_data__Var_34, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.add_vector_static_cell\'/5", (MR_String) "no data");
    {
      ll_backend__global_data__CellType_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__CellType_10, 0) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
    }
    {
      ll_backend__global_data__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_38, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_38, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_3));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_38, 3) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
    }
    ll_backend__global_data__VectorCells_11 = mercury__list__map_2_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, ll_backend__global_data__Var_38, ll_backend__global_data__VectorData_7);
    ll_backend__global_data__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
    ll_backend__global_data__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
    ll_backend__global_data__TypeNumMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
    ll_backend__global_data__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
    ll_backend__global_data__CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
    ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap0_13, ((MR_Box) (ll_backend__global_data__CellType_10)), &ll_backend__global_data__conv1_TypeNumPrime_15);
    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__TypeNumPrime_15 = ((MR_Word) ll_backend__global_data__conv1_TypeNumPrime_15);
      ll_backend__global_data__succeeded = MR_TRUE;
    }
    if (ll_backend__global_data__succeeded)
    {
      MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_39_39;
      MR_Box ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_39_39;

      ll_backend__global_data__TypeNum_16 = ll_backend__global_data__TypeNumPrime_15;
      ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ll_backend__global_data__CellGroupMap0_14, ((MR_Box) (ll_backend__global_data__TypeNum_16)), &ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_39_39);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__STATE_VARIABLE_CellGroup_39_39 = ((MR_Word) ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_39_39);
        ll_backend__global_data__succeeded = MR_TRUE;
      }
      if (ll_backend__global_data__succeeded)
        ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__STATE_VARIABLE_CellGroup_39_39;
      else
        ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__init_vector_cell_group_0_f_0();
      ll_backend__global_data__STATE_VARIABLE_Info_42_42 = ll_backend__global_data__STATE_VARIABLE_Info_0_28;
    }
    else
    {
      MR_Word ll_backend__global_data__TypeNumCounter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
      MR_Integer ll_backend__global_data__TypeNum0_18;
      MR_Word ll_backend__global_data__TypeNumCounter_19;
      MR_Word ll_backend__global_data__TypeNumMap_20;
      MR_Word ll_backend__global_data__STATE_VARIABLE_Info_41_41;
      MR_Word ll_backend__global_data__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__Var_59;
      MR_Word ll_backend__global_data__Var_61;
      MR_Word ll_backend__global_data__Var_62;
      MR_Word ll_backend__global_data__Var_63;
      MR_Word ll_backend__global_data__Var_60;
      MR_Word ll_backend__global_data__Var_64;
      MR_Word ll_backend__global_data__Var_65;
      MR_Word ll_backend__global_data__Var_67;
      MR_Word ll_backend__global_data__Var_68;
      MR_Word ll_backend__global_data__Var_66;

      mercury__counter__allocate_3_p_0(&ll_backend__global_data__TypeNum0_18, ll_backend__global_data__TypeNumCounter0_17, &ll_backend__global_data__TypeNumCounter_19);
      ll_backend__global_data__TypeNum_16 = (MR_Word) ll_backend__global_data__TypeNum0_18;
      ll_backend__global_data__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
      ll_backend__global_data__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
      ll_backend__global_data__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
      ll_backend__global_data__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
      ll_backend__global_data__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
      {
        ll_backend__global_data__STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (ll_backend__global_data__Var_59));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (ll_backend__global_data__TypeNumCounter_19));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (ll_backend__global_data__Var_61));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 3) = ((MR_Box) (ll_backend__global_data__Var_62));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 4) = ((MR_Box) (ll_backend__global_data__Var_63));
      }
      mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (ll_backend__global_data__CellType_10)), ((MR_Box) (ll_backend__global_data__TypeNum_16)), ll_backend__global_data__TypeNumMap0_13, &ll_backend__global_data__TypeNumMap_20);
      ll_backend__global_data__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
      ll_backend__global_data__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
      ll_backend__global_data__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
      ll_backend__global_data__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
      ll_backend__global_data__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
      {
        ll_backend__global_data__STATE_VARIABLE_Info_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 0) = ((MR_Box) (ll_backend__global_data__Var_64));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 1) = ((MR_Box) (ll_backend__global_data__Var_65));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 2) = ((MR_Box) (ll_backend__global_data__TypeNumMap_20));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 3) = ((MR_Box) (ll_backend__global_data__Var_67));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 4) = ((MR_Box) (ll_backend__global_data__Var_68));
      }
      ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__init_vector_cell_group_0_f_0();
    }
    ll_backend__global_data__CellNumCounter0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 0)));
    ll_backend__global_data__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 1)));
    mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_22, ll_backend__global_data__CellNumCounter0_21, &ll_backend__global_data__CellNumCounter_23);
    ll_backend__global_data__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 0)));
    ll_backend__global_data__CellMap0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 1)));
    {
      ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, 0) = ((MR_Box) (ll_backend__global_data__CellNumCounter_23));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, 1) = ((MR_Box) (ll_backend__global_data__CellMap0_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__global_data__DataId_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__CellNum_22));
    }
    ll_backend__global_data__VectorContents_25 = (MR_Word) ll_backend__global_data__VectorCells_11;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, ll_backend__global_data__CellNum_22, ((MR_Box) (ll_backend__global_data__VectorContents_25)), ll_backend__global_data__CellMap0_24, &ll_backend__global_data__CellMap_26);
    ll_backend__global_data__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, (MR_Integer) 0)));
    ll_backend__global_data__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, (MR_Integer) 1)));
    {
      ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45, 0) = ((MR_Box) (ll_backend__global_data__Var_73));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45, 1) = ((MR_Box) (ll_backend__global_data__CellMap_26));
    }
    mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_16)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45)), ll_backend__global_data__CellGroupMap0_14, &ll_backend__global_data__CellGroupMap_27);
    ll_backend__global_data__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)));
    ll_backend__global_data__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
    ll_backend__global_data__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
    ll_backend__global_data__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
    ll_backend__global_data__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_Info_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_75));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_76));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_77));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_78));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__CellGroupMap_27));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void)
{
  {
    MR_Word ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Var_2;
    MR_Word ll_backend__global_data__Var_4;

    ll_backend__global_data__Var_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    ll_backend__global_data__Var_4 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0);
    {
      ll_backend__global_data__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__global_data__Var_2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__global_data__Var_4));
    }
    return ll_backend__global_data__HeadVar__1_1;
  }
}

static void MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_Type_8;

    ll_backend__global_data__natural_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Type_8);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Type_8));
  }
}

MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0(
  MR_Word ll_backend__global_data__UnboxFloat_5,
  MR_Word ll_backend__global_data__Types_6,
  MR_Word ll_backend__global_data__HeadVar__3_3,
  MR_Word * ll_backend__global_data__LLDSTypes_9)
{
  {
    MR_bool ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ll_backend__global_data__TypeCtorInfo_15_15;
    MR_Word ll_backend__global_data__TypeCtorInfo_16_16;
    MR_Word ll_backend__global_data__Vector_7;
    MR_Word ll_backend__global_data__Vectors_8;
    MR_Word ll_backend__global_data__ArgWidth_10;
    MR_Word ll_backend__global_data__LLDSTypes0_11;
    MR_Word ll_backend__global_data__Var_12;

    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__Vector_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
      ll_backend__global_data__Vectors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
      ll_backend__global_data__ArgWidth_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ll_backend__global_data__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
      ll_backend__global_data__TypeCtorInfo_16_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
      {
        ll_backend__global_data__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 1) = ((MR_Box) (ll_backend__global_data__find_general_llds_types_4_p_0_1));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 3) = ((MR_Box) (ll_backend__global_data__UnboxFloat_5));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_12, 4) = ((MR_Box) (ll_backend__global_data__ArgWidth_10));
      }
      mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_15_15, ll_backend__global_data__TypeCtorInfo_16_16, ll_backend__global_data__Var_12, ll_backend__global_data__Vector_7, &ll_backend__global_data__LLDSTypes0_11);
      ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_2_5_p_0(ll_backend__global_data__UnboxFloat_5, ll_backend__global_data__Types_6, ll_backend__global_data__Vectors_8, ll_backend__global_data__LLDSTypes0_11, ll_backend__global_data__LLDSTypes_9);
    }
    return ll_backend__global_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_5_p_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3,
  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__global_data__succeeded;

      if ((ll_backend__global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4;
        ll_backend__global_data__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ll_backend__global_data__Vector_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__global_data__Vectors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18;

        ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__HeadVar__2_2, ll_backend__global_data__Vector_13, ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4, &ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18);
        if (ll_backend__global_data__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__global_data__next_value_of_HeadVar__3_3 = ll_backend__global_data__Vectors_14;
            MR_Word ll_backend__global_data__next_value_of_STATE_VARIABLE_LLDSTypes_0_4 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18;

            ll_backend__global_data__HeadVar__3_3 = ll_backend__global_data__next_value_of_HeadVar__3_3;
            ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4 = ll_backend__global_data__next_value_of_STATE_VARIABLE_LLDSTypes_0_4;
          }
          continue;
        }
      }
      return ll_backend__global_data__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(
  MR_Word ll_backend__global_data__HeadVar__1_1,
  MR_Word ll_backend__global_data__HeadVar__2_2,
  MR_Word ll_backend__global_data__HeadVar__3_3,
  MR_Word ll_backend__global_data__HeadVar__4_4,
  MR_Word * ll_backend__global_data__HeadVar__5_5)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    if ((ll_backend__global_data__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ll_backend__global_data__succeeded = (ll_backend__global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__succeeded = (ll_backend__global_data__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__global_data__succeeded)
        {
          *ll_backend__global_data__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__global_data__succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word ll_backend__global_data__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__global_data__Rval_10;
      MR_Word ll_backend__global_data__Rvals_11;
      MR_Word ll_backend__global_data__LLDSType0_12;
      MR_Word ll_backend__global_data__LLDSTypes0_13;
      MR_Word ll_backend__global_data__LLDSType_14;
      MR_Word ll_backend__global_data__LLDSTypes_15;
      MR_Word ll_backend__global_data__ArgWidth_16;
      MR_Word ll_backend__global_data__NaturalType_17;
      MR_Word ll_backend__global_data___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));

      ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
        ll_backend__global_data__Rvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
        ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__LLDSType0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__4_4, (MR_Integer) 0)));
          ll_backend__global_data__LLDSTypes0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__4_4, (MR_Integer) 1)));
          ll_backend__global_data__ArgWidth_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__ArgWidth_16, ll_backend__global_data__Rval_10, &ll_backend__global_data__NaturalType_17);
          ll_backend__global_data__succeeded = ll_backend__llds____Unify____llds_type_0_0(ll_backend__global_data__NaturalType_17, ll_backend__global_data__LLDSType0_12);
          if (ll_backend__global_data__succeeded)
          {
            ll_backend__global_data__LLDSType_14 = ll_backend__global_data__LLDSType0_12;
            ll_backend__global_data__succeeded = MR_TRUE;
          }
          else
          {
            MR_Word ll_backend__global_data__Var_18;

            ll_backend__global_data__succeeded = (ll_backend__global_data__LLDSType0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            if (ll_backend__global_data__succeeded)
            {
              ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__NaturalType_17)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__global_data__succeeded)
              {
                ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__NaturalType_17, (MR_Integer) 0)));
                ll_backend__global_data__succeeded = (ll_backend__global_data__Var_18 == (MR_Integer) 0);
              }
            }
            if (ll_backend__global_data__succeeded)
            {
              ll_backend__global_data__LLDSType_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              ll_backend__global_data__succeeded = MR_TRUE;
            }
            else
            {
              MR_Word ll_backend__global_data__Var_19;

              ll_backend__global_data__succeeded = (ll_backend__global_data__NaturalType_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              if (ll_backend__global_data__succeeded)
              {
                ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__LLDSType0_12)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__global_data__succeeded)
                {
                  ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__LLDSType0_12, (MR_Integer) 0)));
                  ll_backend__global_data__succeeded = (ll_backend__global_data__Var_19 == (MR_Integer) 0);
                  if (ll_backend__global_data__succeeded)
                  {
                    ll_backend__global_data__LLDSType_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
                    ll_backend__global_data__succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          if (ll_backend__global_data__succeeded)
          {
            ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__Types_9, ll_backend__global_data__Rvals_11, ll_backend__global_data__LLDSTypes0_13, &ll_backend__global_data__LLDSTypes_15);
            if (ll_backend__global_data__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__global_data__HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__LLDSType_14));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__LLDSTypes_15));
              }
              ll_backend__global_data__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data__natural_type_4_p_0(
  MR_Word ll_backend__global_data__UnboxFloat_5,
  MR_Word ll_backend__global_data__ArgWidth_6,
  MR_Word ll_backend__global_data__Rval_7,
  MR_Word * ll_backend__global_data__Type_8)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Type0_9;

    ll_backend__llds__rval_type_2_p_0(ll_backend__global_data__Rval_7, &ll_backend__global_data__Type0_9);
    ll_backend__global_data__succeeded = (ll_backend__global_data__Type0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__succeeded = (ll_backend__global_data__UnboxFloat_5 == (MR_Integer) 1);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__succeeded = (ll_backend__global_data__ArgWidth_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
      }
    }
    if (ll_backend__global_data__succeeded)
      *ll_backend__global_data__Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
    else
      *ll_backend__global_data__Type_8 = ll_backend__global_data__Type0_9;
  }
}

static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box * ll_backend__global_data__wrapper_arg_3,
  MR_Box ll_backend__global_data__wrapper_arg_4,
  MR_Box * ll_backend__global_data__wrapper_arg_5)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Integer ll_backend__global_data__conv1_HeadVar__3_3;
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Map_12;

    ll_backend__global_data__make_alloc_id_map_5_p_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Integer) ll_backend__global_data__wrapper_arg_2), &ll_backend__global_data__conv1_HeadVar__3_3, ((MR_Word) ll_backend__global_data__wrapper_arg_4), &ll_backend__global_data__conv0_STATE_VARIABLE_Map_12);
    *ll_backend__global_data__wrapper_arg_3 = ((MR_Box) (ll_backend__global_data__conv1_HeadVar__3_3));
    *ll_backend__global_data__wrapper_arg_5 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Map_12));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(
  MR_Word ll_backend__global_data__GlobalData_4,
  MR_Word * ll_backend__global_data__AllocSites_5,
  MR_Word * ll_backend__global_data__AllocIdMap_6)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0;
    MR_Word ll_backend__global_data__AllocSitesSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_11;
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
    MR_Integer ll_backend__global_data___Slot_8;
    MR_Box ll_backend__global_data__conv3__Slot_8;
    MR_Box ll_backend__global_data__conv2_AllocIdMap_6;

    *ll_backend__global_data__AllocSites_5 = mercury__set_tree234__to_sorted_list_1_f_0(ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__AllocSitesSet_7);
    ll_backend__global_data__Var_11 = mercury__map__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0);
    mercury__list__foldl2_6_p_0(ll_backend__global_data__TypeCtorInfo_18_18, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data_scalar_common_1[0], (MR_Word) &ll_backend__global_data_scalar_common_1[11], *ll_backend__global_data__AllocSites_5, ((MR_Box) ((MR_Integer) 0)), &ll_backend__global_data__conv3__Slot_8, ((MR_Box) (ll_backend__global_data__Var_11)), &ll_backend__global_data__conv2_AllocIdMap_6);
    ll_backend__global_data___Slot_8 = ((MR_Integer) ll_backend__global_data__conv3__Slot_8);
    *ll_backend__global_data__AllocIdMap_6 = ((MR_Word) ll_backend__global_data__conv2_AllocIdMap_6);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(
  MR_Word ll_backend__global_data__NewAllocSites_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word ll_backend__global_data__AllocSites0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__AllocSites_7;
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_17;
    MR_Word ll_backend__global_data__Var_18;
    MR_Word ll_backend__global_data__Var_19;
    MR_Integer ll_backend__global_data__Var_20;
    MR_Word ll_backend__global_data__Var_21;
    MR_Word ll_backend__global_data__Var_22;
    MR_Word ll_backend__global_data__Var_23;

    mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__global_data__NewAllocSites_4, ll_backend__global_data__AllocSites0_6, &ll_backend__global_data__AllocSites_7);
    ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    ll_backend__global_data__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    ll_backend__global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    ll_backend__global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    ll_backend__global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__AllocSites_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
  MR_Box ll_backend__global_data__closure_arg,
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box * ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
    MR_Word ll_backend__global_data__conv0_HeadVar__4_4;

    ll_backend__global_data__associate_natural_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_HeadVar__4_4);
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(
  MR_Word ll_backend__global_data__Args_5,
  MR_Word * ll_backend__global_data__DataId_6,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_11,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_12)
{
  {
    MR_Word ll_backend__global_data__UnboxFloat_8;
    MR_Word ll_backend__global_data__TypedArgs_10;
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_14;
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_21;

    ll_backend__global_data__UnboxFloat_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, (MR_Integer) 1)))) & (MR_Integer) 1);
    ll_backend__global_data__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_13, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      ll_backend__global_data__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 1) = ((MR_Box) (ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 3) = ((MR_Box) (ll_backend__global_data__UnboxFloat_8));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__global_data__Var_14, ll_backend__global_data__Args_5, &ll_backend__global_data__TypedArgs_10);
    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__global_data__TypedArgs_10, ll_backend__global_data__DataId_6, ll_backend__global_data__STATE_VARIABLE_Info_0_11, ll_backend__global_data__STATE_VARIABLE_Info_12);
  }
}

void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_4_p_0(
  MR_Word ll_backend__global_data__TypedArgs0_5,
  MR_Word * ll_backend__global_data__DataId_6,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_13,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_14)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__TypedArgs_8;
    MR_Word ll_backend__global_data__CellType_11;
    MR_Word ll_backend__global_data__CellTypeAndValue_12;
    MR_Word ll_backend__global_data__TypeGroups_29;
    MR_Word ll_backend__global_data__TypeAndArgGroups_30;
    MR_Word ll_backend__global_data__TypeCtorInfo_20_39;
    MR_Word ll_backend__global_data__TypeCtorInfo_21_40;
    MR_Word ll_backend__global_data__FirstArg_26;
    MR_Word ll_backend__global_data__FirstArgType_27;
    MR_Word ll_backend__global_data__LaterTypedArgs_28;
    MR_Integer ll_backend__global_data__OldLength_31;
    MR_Integer ll_backend__global_data__NewLength_32;
    MR_Word ll_backend__global_data__Var_33;
    MR_Word ll_backend__global_data__Var_34;
    MR_Word ll_backend__global_data__Var_35;
    MR_Integer ll_backend__global_data__Var_36;
    MR_Integer ll_backend__global_data__Var_37;

    if ((ll_backend__global_data__TypedArgs0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__global_data__TypedArgs_8 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__global_data_scalar_common_2[10]);
    else
      ll_backend__global_data__TypedArgs_8 = ll_backend__global_data__TypedArgs0_5;
    ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__TypedArgs_8)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__TypedArgs_8, (MR_Integer) 0)));
      ll_backend__global_data__LaterTypedArgs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__TypedArgs_8, (MR_Integer) 1)));
      ll_backend__global_data__FirstArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_33, (MR_Integer) 0)));
      ll_backend__global_data__FirstArgType_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_33, (MR_Integer) 1)));
      ll_backend__global_data__Var_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        ll_backend__global_data__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__global_data__Var_34, 0) = ((MR_Box) (ll_backend__global_data__FirstArg_26));
        MR_hl_field(MR_mktag(1), ll_backend__global_data__Var_34, 1) = ((MR_Box) (ll_backend__global_data__Var_35));
      }
      ll_backend__global_data__succeeded = ll_backend__global_data__threshold_group_types_5_p_0(ll_backend__global_data__FirstArgType_27, ll_backend__global_data__Var_34, ll_backend__global_data__LaterTypedArgs_28, &ll_backend__global_data__TypeGroups_29, &ll_backend__global_data__TypeAndArgGroups_30);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__TypeCtorInfo_20_39 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
        ll_backend__global_data__OldLength_31 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_20_39, ll_backend__global_data__TypedArgs_8);
        ll_backend__global_data__TypeCtorInfo_21_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
        ll_backend__global_data__NewLength_32 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_21_40, ll_backend__global_data__TypeAndArgGroups_30);
        ll_backend__global_data__Var_37 = (MR_Integer) 2;
        ll_backend__global_data__Var_36 = (ll_backend__global_data__NewLength_32 * ll_backend__global_data__Var_37);
        ll_backend__global_data__succeeded = (ll_backend__global_data__OldLength_31 >= ll_backend__global_data__Var_36);
      }
    }
    if (ll_backend__global_data__succeeded)
    {
      {
        ll_backend__global_data__CellType_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__global_data__CellType_11, 0) = ((MR_Box) (ll_backend__global_data__TypeGroups_29));
      }
      {
        ll_backend__global_data__CellTypeAndValue_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__global_data__CellTypeAndValue_12, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroups_30));
      }
    }
    else
    {
      MR_Word ll_backend__global_data__Var_38;

      ll_backend__global_data__Var_38 = ll_backend__llds__typed_rvals_project_types_1_f_0(ll_backend__global_data__TypedArgs_8);
      {
        ll_backend__global_data__CellType_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__CellType_11, 0) = ((MR_Box) (ll_backend__global_data__Var_38));
      }
      {
        ll_backend__global_data__CellTypeAndValue_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__CellTypeAndValue_12, 0) = ((MR_Box) (ll_backend__global_data__TypedArgs_8));
      }
    }
    ll_backend__global_data__do_add_scalar_static_cell_6_p_0(ll_backend__global_data__TypedArgs_8, ll_backend__global_data__CellType_11, ll_backend__global_data__CellTypeAndValue_12, ll_backend__global_data__DataId_6, ll_backend__global_data__STATE_VARIABLE_Info_0_13, ll_backend__global_data__STATE_VARIABLE_Info_14);
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
  MR_Word ll_backend__global_data__CurType_6,
  MR_Word ll_backend__global_data__RevArgsSoFar_7,
  MR_Word ll_backend__global_data__LaterArgsTypes_8,
  MR_Word * ll_backend__global_data__TypeGroups_9,
  MR_Word * ll_backend__global_data__TypeAndArgGroups_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__global_data__succeeded;

      if ((ll_backend__global_data__LaterArgsTypes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__global_data__TypeGroup_11;
        MR_Word ll_backend__global_data__TypeAndArgGroup_12;
        MR_Word ll_backend__global_data__Arg_35;
        MR_Word ll_backend__global_data__Var_38;

        ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__global_data__succeeded)
        {
          ll_backend__global_data__Arg_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 0)));
          ll_backend__global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 1)));
          ll_backend__global_data__succeeded = (ll_backend__global_data__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (ll_backend__global_data__succeeded)
        {
          {
            ll_backend__global_data__TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
            MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            ll_backend__global_data__TypeAndArgGroup_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_12, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
            MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_12, 1) = ((MR_Box) (ll_backend__global_data__Arg_35));
          }
        }
        else
        {
          MR_Word ll_backend__global_data__TypeCtorInfo_14_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
          MR_Integer ll_backend__global_data__NumArgs_36;
          MR_Word ll_backend__global_data__Args_37;

          mercury__list__length_2_p_0(ll_backend__global_data__TypeCtorInfo_14_40, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__NumArgs_36);
          mercury__list__reverse_2_p_0(ll_backend__global_data__TypeCtorInfo_14_40, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__Args_37);
          {
            ll_backend__global_data__TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
            MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_36));
          }
          {
            ll_backend__global_data__TypeAndArgGroup_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
            MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_36));
            MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 2) = ((MR_Box) (ll_backend__global_data__Args_37));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__global_data__TypeGroups_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeGroup_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__global_data__TypeAndArgGroups_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroup_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ll_backend__global_data__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ll_backend__global_data__NextArg_13;
        MR_Word ll_backend__global_data__NextType_14;
        MR_Word ll_backend__global_data__MoreArgsTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__LaterArgsTypes_8, (MR_Integer) 1)));
        MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__LaterArgsTypes_8, (MR_Integer) 0)));

        ll_backend__global_data__NextArg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_18, (MR_Integer) 0)));
        ll_backend__global_data__NextType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_18, (MR_Integer) 1)));
        ll_backend__global_data__succeeded = ll_backend__llds____Unify____llds_type_0_0(ll_backend__global_data__CurType_6, ll_backend__global_data__NextType_14);
        if (ll_backend__global_data__succeeded)
        {
          MR_Word ll_backend__global_data__Var_19;

          {
            ll_backend__global_data__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__global_data__Var_19, 0) = ((MR_Box) (ll_backend__global_data__NextArg_13));
            MR_hl_field(MR_mktag(1), ll_backend__global_data__Var_19, 1) = ((MR_Box) (ll_backend__global_data__RevArgsSoFar_7));
          }
          /* direct tailcall eliminated */
          {
            MR_Word ll_backend__global_data__next_value_of_RevArgsSoFar_7 = ll_backend__global_data__Var_19;
            MR_Word ll_backend__global_data__next_value_of_LaterArgsTypes_8 = ll_backend__global_data__MoreArgsTypes_15;

            ll_backend__global_data__RevArgsSoFar_7 = ll_backend__global_data__next_value_of_RevArgsSoFar_7;
            ll_backend__global_data__LaterArgsTypes_8 = ll_backend__global_data__next_value_of_LaterArgsTypes_8;
          }
          continue;
        }
        else
        {
          MR_Word ll_backend__global_data__TypeGroupsTail_16;
          MR_Word ll_backend__global_data__TypeAndArgGroupsTail_17;
          MR_Word ll_backend__global_data__Var_20;
          MR_Word ll_backend__global_data__TypeGroup_24;
          MR_Word ll_backend__global_data__TypeAndArgGroup_25;
          MR_Word ll_backend__global_data__Arg_45;
          MR_Word ll_backend__global_data__Var_48;

          {
            ll_backend__global_data__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__global_data__Var_20, 0) = ((MR_Box) (ll_backend__global_data__NextArg_13));
            MR_hl_field(MR_mktag(1), ll_backend__global_data__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ll_backend__global_data__succeeded = ll_backend__global_data__threshold_group_types_5_p_0(ll_backend__global_data__NextType_14, ll_backend__global_data__Var_20, ll_backend__global_data__MoreArgsTypes_15, &ll_backend__global_data__TypeGroupsTail_16, &ll_backend__global_data__TypeAndArgGroupsTail_17);
          if (ll_backend__global_data__succeeded)
          {
            ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__global_data__succeeded)
            {
              ll_backend__global_data__Arg_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 0)));
              ll_backend__global_data__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 1)));
              ll_backend__global_data__succeeded = (ll_backend__global_data__Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            if (ll_backend__global_data__succeeded)
            {
              {
                ll_backend__global_data__TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 1) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                ll_backend__global_data__TypeAndArgGroup_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_25, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
                MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_25, 1) = ((MR_Box) (ll_backend__global_data__Arg_45));
              }
            }
            else
            {
              MR_Word ll_backend__global_data__TypeCtorInfo_14_50 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
              MR_Integer ll_backend__global_data__NumArgs_46;
              MR_Word ll_backend__global_data__Args_47;

              mercury__list__length_2_p_0(ll_backend__global_data__TypeCtorInfo_14_50, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__NumArgs_46);
              mercury__list__reverse_2_p_0(ll_backend__global_data__TypeCtorInfo_14_50, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__Args_47);
              {
                ll_backend__global_data__TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_46));
              }
              {
                ll_backend__global_data__TypeAndArgGroup_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_46));
                MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 2) = ((MR_Box) (ll_backend__global_data__Args_47));
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__global_data__TypeGroups_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeGroup_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__TypeGroupsTail_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__global_data__TypeAndArgGroups_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroup_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroupsTail_17));
            }
            ll_backend__global_data__succeeded = MR_TRUE;
          }
        }
      }
      return ll_backend__global_data__succeeded;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
  MR_Word ll_backend__global_data__TypedArgs_7,
  MR_Word ll_backend__global_data__CellType_8,
  MR_Word ll_backend__global_data__CellValue_9,
  MR_Word * ll_backend__global_data__DataId_10,
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_35,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_36)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__Args_12;
    MR_Word ll_backend__global_data__TypeNumMap0_14;
    MR_Word ll_backend__global_data__CellGroupMap0_15;
    MR_Word ll_backend__global_data__TypeNum_17;
    MR_Word ll_backend__global_data__InsertCommonData_22;
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38;
    MR_Word ll_backend__global_data__STATE_VARIABLE_Info_40_40;
    MR_Word ll_backend__global_data__Var_42;
    MR_Word ll_backend__global_data__Var_155;
    MR_Word ll_backend__global_data__Var_156;
    MR_Word ll_backend__global_data__Var_75;
    MR_Word ll_backend__global_data__Var_76;
    MR_Word ll_backend__global_data__Var_78;
    MR_Word ll_backend__global_data__OldTypeNum_16;
    MR_Box ll_backend__global_data__conv0_OldTypeNum_16;
    MR_Word ll_backend__global_data__Var_97;
    MR_Word ll_backend__global_data__Var_98;
    MR_Word ll_backend__global_data__Var_99;
    MR_Word ll_backend__global_data__Var_100;
    MR_Word ll_backend__global_data__Var_101;
    MR_Word ll_backend__global_data__Var_102;
    MR_Word ll_backend__global_data__Var_154;

    ll_backend__global_data__Args_12 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(ll_backend__global_data__TypedArgs_7);
    ll_backend__global_data__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
    ll_backend__global_data__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
    ll_backend__global_data__TypeNumMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
    ll_backend__global_data__CellGroupMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
    ll_backend__global_data__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
    ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap0_14, ((MR_Box) (ll_backend__global_data__CellType_8)), &ll_backend__global_data__conv0_OldTypeNum_16);
    if (ll_backend__global_data__succeeded)
    {
      ll_backend__global_data__OldTypeNum_16 = ((MR_Word) ll_backend__global_data__conv0_OldTypeNum_16);
      ll_backend__global_data__succeeded = MR_TRUE;
    }
    if (ll_backend__global_data__succeeded)
    {
      MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37;
      MR_Box ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37;

      ll_backend__global_data__TypeNum_17 = ll_backend__global_data__OldTypeNum_16;
      ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ll_backend__global_data__CellGroupMap0_15, ((MR_Box) (ll_backend__global_data__TypeNum_17)), &ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37);
      if (ll_backend__global_data__succeeded)
      {
        ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37 = ((MR_Word) ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37);
        ll_backend__global_data__succeeded = MR_TRUE;
      }
      if (ll_backend__global_data__succeeded)
        ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37;
      else
        ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
      ll_backend__global_data__STATE_VARIABLE_Info_40_40 = ll_backend__global_data__STATE_VARIABLE_Info_0_35;
    }
    else
    {
      MR_Word ll_backend__global_data__TypeNumCounter0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
      MR_Integer ll_backend__global_data__TypeRawNum_19;
      MR_Word ll_backend__global_data__TypeNumCounter_20;
      MR_Word ll_backend__global_data__TypeNumMap_21;
      MR_Word ll_backend__global_data__STATE_VARIABLE_Info_39_39;
      MR_Word ll_backend__global_data__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
      MR_Word ll_backend__global_data__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
      MR_Word ll_backend__global_data__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
      MR_Word ll_backend__global_data__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
      MR_Word ll_backend__global_data__Var_87;
      MR_Word ll_backend__global_data__Var_89;
      MR_Word ll_backend__global_data__Var_90;
      MR_Word ll_backend__global_data__Var_91;
      MR_Word ll_backend__global_data__Var_88;
      MR_Word ll_backend__global_data__Var_92;
      MR_Word ll_backend__global_data__Var_93;
      MR_Word ll_backend__global_data__Var_95;
      MR_Word ll_backend__global_data__Var_96;
      MR_Word ll_backend__global_data__Var_94;

      mercury__counter__allocate_3_p_0(&ll_backend__global_data__TypeRawNum_19, ll_backend__global_data__TypeNumCounter0_18, &ll_backend__global_data__TypeNumCounter_20);
      ll_backend__global_data__TypeNum_17 = (MR_Word) ll_backend__global_data__TypeRawNum_19;
      ll_backend__global_data__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
      ll_backend__global_data__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
      ll_backend__global_data__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
      ll_backend__global_data__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
      ll_backend__global_data__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
      {
        ll_backend__global_data__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (ll_backend__global_data__Var_87));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (ll_backend__global_data__TypeNumCounter_20));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (ll_backend__global_data__Var_89));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (ll_backend__global_data__Var_90));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (ll_backend__global_data__Var_91));
      }
      mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (ll_backend__global_data__CellType_8)), ((MR_Box) (ll_backend__global_data__TypeNum_17)), ll_backend__global_data__TypeNumMap0_14, &ll_backend__global_data__TypeNumMap_21);
      ll_backend__global_data__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
      ll_backend__global_data__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
      ll_backend__global_data__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
      ll_backend__global_data__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
      ll_backend__global_data__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
      {
        ll_backend__global_data__STATE_VARIABLE_Info_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 0) = ((MR_Box) (ll_backend__global_data__Var_92));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 1) = ((MR_Box) (ll_backend__global_data__Var_93));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 2) = ((MR_Box) (ll_backend__global_data__TypeNumMap_21));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 3) = ((MR_Box) (ll_backend__global_data__Var_95));
        MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 4) = ((MR_Box) (ll_backend__global_data__Var_96));
      }
      ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
    }
    ll_backend__global_data__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
    ll_backend__global_data__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
    ll_backend__global_data__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
    ll_backend__global_data__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
    ll_backend__global_data__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
    ll_backend__global_data__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_42, (MR_Integer) 0)));
    ll_backend__global_data__Var_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_42, (MR_Integer) 1)))) & (MR_Integer) 1);
    ll_backend__global_data__InsertCommonData_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Var_42, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__global_data__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
    ll_backend__global_data__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
    ll_backend__global_data__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
    switch (ll_backend__global_data__InsertCommonData_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__global_data__DataIdPrime_34;
          MR_Box ll_backend__global_data__conv2_DataIdPrime_34;

          ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__global_data__Var_155, ((MR_Box) (ll_backend__global_data__Args_12)), &ll_backend__global_data__conv2_DataIdPrime_34);
          if (ll_backend__global_data__succeeded)
          {
            ll_backend__global_data__DataIdPrime_34 = ((MR_Word) ll_backend__global_data__conv2_DataIdPrime_34);
            ll_backend__global_data__succeeded = MR_TRUE;
          }
          if (ll_backend__global_data__succeeded)
          {
            *ll_backend__global_data__DataId_10 = ll_backend__global_data__DataIdPrime_34;
            *ll_backend__global_data__STATE_VARIABLE_Info_36 = ll_backend__global_data__STATE_VARIABLE_Info_40_40;
          }
          else
          {
            MR_Word ll_backend__global_data__CellNumCounter0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
            MR_Integer ll_backend__global_data__CellNum_54;
            MR_Word ll_backend__global_data__CellNumCounter_55;
            MR_Word ll_backend__global_data__RevArray0_56;
            MR_Word ll_backend__global_data__RevArray_57;
            MR_Word ll_backend__global_data__CellGroupMap_58;
            MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59;
            MR_Word ll_backend__global_data__Var_128;
            MR_Word ll_backend__global_data__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
            MR_Word ll_backend__global_data__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
            MR_Word ll_backend__global_data__Var_127;
            MR_Word ll_backend__global_data__Var_135;
            MR_Word ll_backend__global_data__Var_136;
            MR_Word ll_backend__global_data__Var_137;
            MR_Word ll_backend__global_data__Var_139;
            MR_Word ll_backend__global_data__Var_138;

            mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_54, ll_backend__global_data__CellNumCounter0_53, &ll_backend__global_data__CellNumCounter_55);
            ll_backend__global_data__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
            ll_backend__global_data__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
            ll_backend__global_data__RevArray0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__global_data__DataId_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_17));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__CellNum_54));
            }
            {
              ll_backend__global_data__RevArray_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_57, 0) = ((MR_Box) (ll_backend__global_data__CellValue_9));
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_57, 1) = ((MR_Box) (ll_backend__global_data__RevArray0_56));
            }
            {
              ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 0) = ((MR_Box) (ll_backend__global_data__CellNumCounter_55));
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 1) = ((MR_Box) (ll_backend__global_data__Var_128));
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 2) = ((MR_Box) (ll_backend__global_data__RevArray_57));
            }
            mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_17)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59)), ll_backend__global_data__CellGroupMap0_15, &ll_backend__global_data__CellGroupMap_58);
            ll_backend__global_data__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
            ll_backend__global_data__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
            ll_backend__global_data__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
            ll_backend__global_data__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
            ll_backend__global_data__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *ll_backend__global_data__STATE_VARIABLE_Info_36 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_135));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_136));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_137));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__CellGroupMap_58));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_139));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__global_data__CellNum_25;
          MR_Word ll_backend__global_data__CellNumCounter_26;
          MR_Word ll_backend__global_data__NewDataId_27;
          MR_Word ll_backend__global_data__MaybeOldDataId_28;
          MR_Word ll_backend__global_data__MembersMap_29;

          mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_25, ll_backend__global_data__Var_156, &ll_backend__global_data__CellNumCounter_26);
          {
            ll_backend__global_data__NewDataId_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ll_backend__global_data__NewDataId_27, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_17));
            MR_hl_field(MR_mktag(2), ll_backend__global_data__NewDataId_27, 1) = ((MR_Box) (ll_backend__global_data__CellNum_25));
          }
          mercury__bimap__search_insert_5_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ((MR_Box) (ll_backend__global_data__Args_12)), ((MR_Box) (ll_backend__global_data__NewDataId_27)), &ll_backend__global_data__MaybeOldDataId_28, ll_backend__global_data__Var_155, &ll_backend__global_data__MembersMap_29);
          if ((ll_backend__global_data__MaybeOldDataId_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__global_data__RevArray0_31;
            MR_Word ll_backend__global_data__RevArray_32;
            MR_Word ll_backend__global_data__CellGroupMap_33;
            MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50;
            MR_Word ll_backend__global_data__Var_109;
            MR_Word ll_backend__global_data__Var_110;
            MR_Word ll_backend__global_data__Var_107;
            MR_Word ll_backend__global_data__Var_108;
            MR_Word ll_backend__global_data__Var_118;
            MR_Word ll_backend__global_data__Var_119;
            MR_Word ll_backend__global_data__Var_120;
            MR_Word ll_backend__global_data__Var_122;
            MR_Word ll_backend__global_data__Var_121;

            *ll_backend__global_data__DataId_10 = ll_backend__global_data__NewDataId_27;
            ll_backend__global_data__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
            ll_backend__global_data__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
            ll_backend__global_data__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
            ll_backend__global_data__Var_110 = ll_backend__global_data__CellNumCounter_26;
            ll_backend__global_data__RevArray0_31 = ll_backend__global_data__Var_109;
            {
              ll_backend__global_data__RevArray_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_32, 0) = ((MR_Box) (ll_backend__global_data__CellValue_9));
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_32, 1) = ((MR_Box) (ll_backend__global_data__RevArray0_31));
            }
            {
              ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 0) = ((MR_Box) (ll_backend__global_data__Var_110));
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 1) = ((MR_Box) (ll_backend__global_data__MembersMap_29));
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 2) = ((MR_Box) (ll_backend__global_data__RevArray_32));
            }
            mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_17)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50)), ll_backend__global_data__CellGroupMap0_15, &ll_backend__global_data__CellGroupMap_33);
            ll_backend__global_data__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
            ll_backend__global_data__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
            ll_backend__global_data__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
            ll_backend__global_data__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
            ll_backend__global_data__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *ll_backend__global_data__STATE_VARIABLE_Info_36 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_118));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_119));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_120));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__CellGroupMap_33));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_122));
            }
          }
          else
          {
            *ll_backend__global_data__DataId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeOldDataId_28, (MR_Integer) 0)));
            *ll_backend__global_data__STATE_VARIABLE_Info_36 = ll_backend__global_data__STATE_VARIABLE_Info_40_40;
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__global_data__init_scalar_cell_group_0_f_0(void)
{
  {
    MR_Word ll_backend__global_data__HeadVar__1_1;
    MR_Word ll_backend__global_data__Var_2;
    MR_Word ll_backend__global_data__Var_4;

    ll_backend__global_data__Var_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    ll_backend__global_data__Var_4 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
    {
      ll_backend__global_data__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__global_data__Var_2));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__global_data__Var_4));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ll_backend__global_data__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
ll_backend__global_data__init_static_cell_info_3_f_0(
  MR_Word ll_backend__global_data__BaseName_5,
  MR_Word ll_backend__global_data__UnboxFloat_6,
  MR_Word ll_backend__global_data__CommonData_7)
{
  {
    MR_Word ll_backend__global_data__Info0_8;
    MR_Word ll_backend__global_data__TypeCtorInfo_16_16;
    MR_Word ll_backend__global_data__SubInfo0_9;
    MR_Word ll_backend__global_data__Var_10;
    MR_Word ll_backend__global_data__Var_12;
    MR_Word ll_backend__global_data__Var_13;
    MR_Word ll_backend__global_data__Var_14;

    {
      ll_backend__global_data__SubInfo0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfo0_9, 0) = ((MR_Box) (ll_backend__global_data__BaseName_5));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfo0_9, 1) = ((MR_Box) ((ll_backend__global_data__UnboxFloat_6 | ((ll_backend__global_data__CommonData_7 << (MR_Integer) 1)))));
    }
    ll_backend__global_data__Var_10 = mercury__counter__init_1_f_0((MR_Integer) 0);
    ll_backend__global_data__TypeCtorInfo_16_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    ll_backend__global_data__Var_12 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_16_16);
    ll_backend__global_data__Var_13 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_16_16, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0);
    ll_backend__global_data__Var_14 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_16_16, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0);
    {
      ll_backend__global_data__Info0_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 0) = ((MR_Box) (ll_backend__global_data__SubInfo0_9));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 1) = ((MR_Box) (ll_backend__global_data__Var_10));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 2) = ((MR_Box) (ll_backend__global_data__Var_12));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 3) = ((MR_Box) (ll_backend__global_data__Var_13));
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 4) = ((MR_Box) (ll_backend__global_data__Var_14));
    }
    return ll_backend__global_data__Info0_8;
  }
}

void MR_CALL 
ll_backend__global_data__global_data_set_static_cell_info_3_p_0(
  MR_Word ll_backend__global_data__StaticCellInfo_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_7)
{
  {
    MR_Word ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_15));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_static_cell_info_2_p_0(
  MR_Word ll_backend__global_data__GlobalData_3,
  MR_Word * ll_backend__global_data__StaticCellInfo_4)
{
  {
    MR_Word ll_backend__global_data__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_10;

    *ll_backend__global_data__StaticCellInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
    ll_backend__global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(
  MR_Word ll_backend__global_data__RevTable_5,
  MR_Integer ll_backend__global_data__TableSize_6,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Integer ll_backend__global_data__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TableSize_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__RevTable_5));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Var_17));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_18));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(
  MR_Word ll_backend__global_data__GlobalData_4,
  MR_Word * ll_backend__global_data__RevTable_5,
  MR_Integer * ll_backend__global_data__TableSize_6)
{
  {
    MR_Word ll_backend__global_data__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Var_11;
    MR_Word ll_backend__global_data__Var_12;

    *ll_backend__global_data__TableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
    *ll_backend__global_data__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
    ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
    ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(
  MR_Word ll_backend__global_data__GlobalData_3,
  MR_Word * ll_backend__global_data__Table_4)
{
  {
    MR_Word ll_backend__global_data__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
    MR_Integer ll_backend__global_data__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

    *ll_backend__global_data__Table_4 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__global_data__RevTable_5);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(
  MR_Word ll_backend__global_data__GlobalData_3,
  MR_Word * ll_backend__global_data__ClosureLayouts_4)
{
  {
    MR_Word ll_backend__global_data__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Integer ll_backend__global_data__Var_7;
    MR_Word ll_backend__global_data__Var_8;
    MR_Word ll_backend__global_data__Var_9;
    MR_Word ll_backend__global_data__Var_10;

    *ll_backend__global_data__ClosureLayouts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
    ll_backend__global_data__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
    ll_backend__global_data__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
    ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
    ll_backend__global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_proc_layouts_2_p_0(
  MR_Word ll_backend__global_data__GlobalData_3,
  MR_Word * ll_backend__global_data__ProcLayouts_4)
{
  {
    MR_Word ll_backend__global_data__ProcLayoutMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

    mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_5, ll_backend__global_data__ProcLayouts_4);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(
  MR_Word ll_backend__global_data__GlobalData_3,
  MR_Word * ll_backend__global_data__ProcVars_4)
{
  {
    MR_Word ll_backend__global_data__ProcVarMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

    mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__global_data__ProcVarMap_5, ll_backend__global_data__ProcVars_4);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_proc_layout_3_p_0(
  MR_Word ll_backend__global_data__GlobalData_4,
  MR_Word ll_backend__global_data__PredProcId_5,
  MR_Word * ll_backend__global_data__ProcLayout_6)
{
  {
    MR_Word ll_backend__global_data__ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
    MR_Box ll_backend__global_data__conv0_ProcLayout_6;

    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_7, ((MR_Box) (ll_backend__global_data__PredProcId_5)), &ll_backend__global_data__conv0_ProcLayout_6);
    *ll_backend__global_data__ProcLayout_6 = ((MR_Word) ll_backend__global_data__conv0_ProcLayout_6);
  }
}

MR_bool MR_CALL 
ll_backend__global_data__global_data_maybe_get_proc_layout_3_p_0(
  MR_Word ll_backend__global_data__GlobalData_4,
  MR_Word ll_backend__global_data__PredProcId_5,
  MR_Word * ll_backend__global_data__ProcLayout_6)
{
  {
    MR_bool ll_backend__global_data__succeeded;
    MR_Word ll_backend__global_data__ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
    MR_Box ll_backend__global_data__conv0_ProcLayout_6;

    ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_7, ((MR_Box) (ll_backend__global_data__PredProcId_5)), &ll_backend__global_data__conv0_ProcLayout_6);
    if (ll_backend__global_data__succeeded)
    {
      *ll_backend__global_data__ProcLayout_6 = ((MR_Word) ll_backend__global_data__conv0_ProcLayout_6);
      ll_backend__global_data__succeeded = MR_TRUE;
    }
    return ll_backend__global_data__succeeded;
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(
  MR_Word ll_backend__global_data__NewClosureLayouts_4,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word ll_backend__global_data__ClosureLayouts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ll_backend__global_data__ClosureLayouts_7;
    MR_Word ll_backend__global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Integer ll_backend__global_data__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_17;
    MR_Word ll_backend__global_data__Var_18;
    MR_Integer ll_backend__global_data__Var_20;
    MR_Word ll_backend__global_data__Var_21;
    MR_Word ll_backend__global_data__Var_22;
    MR_Word ll_backend__global_data__Var_23;
    MR_Word ll_backend__global_data__Var_19;

    mercury__list__append_3_p_1((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__global_data__NewClosureLayouts_4, ll_backend__global_data__ClosureLayouts0_6, &ll_backend__global_data__ClosureLayouts_7);
    ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    ll_backend__global_data__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    ll_backend__global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    ll_backend__global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    ll_backend__global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__ClosureLayouts_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_23));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_update_proc_layout_4_p_0(
  MR_Word ll_backend__global_data__PredProcId_5,
  MR_Word ll_backend__global_data__ProcLayout_6,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ll_backend__global_data__ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__ProcLayoutMap_9;
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_19;
    MR_Word ll_backend__global_data__Var_21;
    MR_Integer ll_backend__global_data__Var_22;
    MR_Word ll_backend__global_data__Var_23;
    MR_Word ll_backend__global_data__Var_24;
    MR_Word ll_backend__global_data__Var_25;
    MR_Word ll_backend__global_data__Var_20;

    mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcLayout_6)), ll_backend__global_data__ProcLayoutMap0_8, &ll_backend__global_data__ProcLayoutMap_9);
    ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    ll_backend__global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    ll_backend__global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    ll_backend__global_data__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    ll_backend__global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    ll_backend__global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    ll_backend__global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_25));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(
  MR_Word ll_backend__global_data__PredProcId_5,
  MR_Word ll_backend__global_data__ProcLayout_6,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ll_backend__global_data__ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__ProcLayoutMap_9;
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_19;
    MR_Word ll_backend__global_data__Var_21;
    MR_Integer ll_backend__global_data__Var_22;
    MR_Word ll_backend__global_data__Var_23;
    MR_Word ll_backend__global_data__Var_24;
    MR_Word ll_backend__global_data__Var_25;
    MR_Word ll_backend__global_data__Var_20;

    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcLayout_6)), ll_backend__global_data__ProcLayoutMap0_8, &ll_backend__global_data__ProcLayoutMap_9);
    ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    ll_backend__global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    ll_backend__global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    ll_backend__global_data__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    ll_backend__global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    ll_backend__global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    ll_backend__global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Var_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_25));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_proc_var_4_p_0(
  MR_Word ll_backend__global_data__PredProcId_5,
  MR_Word ll_backend__global_data__ProcVar_6,
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ll_backend__global_data__ProcVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__global_data__ProcVarMap_9;
    MR_Word ll_backend__global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer ll_backend__global_data__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word ll_backend__global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word ll_backend__global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word ll_backend__global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word ll_backend__global_data__Var_20;
    MR_Word ll_backend__global_data__Var_21;
    MR_Integer ll_backend__global_data__Var_22;
    MR_Word ll_backend__global_data__Var_23;
    MR_Word ll_backend__global_data__Var_24;
    MR_Word ll_backend__global_data__Var_25;
    MR_Word ll_backend__global_data__Var_19;

    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcVar_6)), ll_backend__global_data__ProcVarMap0_8, &ll_backend__global_data__ProcVarMap_9);
    ll_backend__global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    ll_backend__global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    ll_backend__global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    ll_backend__global_data__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    ll_backend__global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    ll_backend__global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    ll_backend__global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__ProcVarMap_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_25));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_init_4_p_0(
  MR_Word ll_backend__global_data__StaticCellInfo_5,
  MR_Integer ll_backend__global_data__TSStringTableSize_6,
  MR_Word ll_backend__global_data__TSRevStringTable_7,
  MR_Word * ll_backend__global_data__GlobalData_8)
{
  {
    MR_Word ll_backend__global_data__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word ll_backend__global_data__EmptyDataMap_9;
    MR_Word ll_backend__global_data__EmptyLayoutMap_10;
    MR_Word ll_backend__global_data__Var_12;

    mercury__map__init_1_p_0(ll_backend__global_data__TypeCtorInfo_13_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, &ll_backend__global_data__EmptyDataMap_9);
    mercury__map__init_1_p_0(ll_backend__global_data__TypeCtorInfo_13_13, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, &ll_backend__global_data__EmptyLayoutMap_10);
    ll_backend__global_data__Var_12 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__global_data__GlobalData_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__EmptyDataMap_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__EmptyLayoutMap_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TSStringTableSize_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__TSRevStringTable_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_5));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__Var_12));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____cell_type_bimap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____cell_type_bimap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____cell_type_num_remap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____cell_type_num_remap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____global_data_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____global_data_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____global_data_remapping_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____global_data_remapping_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____proc_layout_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____proc_layout_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____proc_var_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____proc_var_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_cell_group_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____scalar_cell_group_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_type_cell_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____scalar_type_cell_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____static_cell_remap_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_sub_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____static_cell_sub_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_cell_group_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____vector_cell_group_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_contents_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____vector_contents_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
  MR_Box ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2)
{
  {
    MR_bool ll_backend__global_data__succeeded;

    ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_type_cell_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    return ll_backend__global_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
  MR_Box * ll_backend__global_data__wrapper_arg_1,
  MR_Box ll_backend__global_data__wrapper_arg_2,
  MR_Box ll_backend__global_data__wrapper_arg_3)
{
  {
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____vector_type_cell_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__global_data__init(void)
{
}

void mercury__ll_backend__global_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_bimap_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_num_remap_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_layout_map_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_var_map_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_remap_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_type_cell_map_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_type_cell_map_0);
}

void mercury__ll_backend__global_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__global_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.global_data. */
