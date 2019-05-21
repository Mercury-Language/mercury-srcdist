/*
** Automatically generated from `global_data.m'
** by the Mercury compiler,
** version rotd-2018-02-05
** configured for x86_64-pc-linux-gnu.
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


// :- module ll_backend.global_data.
// :- implementation.

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

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[4];

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[4];

static const MR_DuArgLocn ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0[4];

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
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__811__1_2_p_0(
  MR_Word SubInfoA_9,
  MR_Word SubInfoB_14);

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__544__1_1_p_0(
  MR_Word VectorData_7);

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__543__1_1_p_0(
  MR_Word LLDSTypes_6);

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
  MR_Word Remap_4,
  MR_Word Output0_5,
  MR_Word * Output_6);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
  MR_Word Remap_4,
  MR_Word Input0_5,
  MR_Word * Input_6);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
  MR_Word Remap_4,
  MR_Word Comp0_5,
  MR_Word * Comp_6);

static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_Instr_0_9,
  MR_Word * STATE_VARIABLE_Instr_10);

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
  MR_Word GlobalDataRemap_4,
  MR_Word Instr0_5,
  MR_Word * Instr_6);

static void MR_CALL 
ll_backend__global_data__remap_ts_table_index_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * HeadVar__3_3);

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_GroupedArgs_0_10,
  MR_Word * STATE_VARIABLE_GroupedArgs_11);

static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
  MR_Word Remap_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
  MR_Word Remap_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6);

static void MR_CALL 
ll_backend__global_data__remap_lval_3_p_0(
  MR_Word Remap_4,
  MR_Word Lval0_5,
  MR_Word * Lval_6);

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_CommonCellValue_0_10,
  MR_Word * STATE_VARIABLE_CommonCellValue_11);

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_Contents_0_8,
  MR_Word * STATE_VARIABLE_Contents_9);

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_VectorCellGroup_0_9,
  MR_Word * STATE_VARIABLE_VectorCellGroup_10);

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_ScalarCellGroup_0_8,
  MR_Word * STATE_VARIABLE_ScalarCellGroup_9);

static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
  MR_Word TypeNumRemap_6,
  MR_Word OldTypeNum_7,
  MR_Word VectorCellGroup_8,
  MR_Word STATE_VARIABLE_VectorCellGroupMap_0_11,
  MR_Word * STATE_VARIABLE_VectorCellGroupMap_12);

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
  MR_Word TypeNum_10,
  MR_Word ArrayB_11,
  MR_Word ArrayAB_12,
  MR_Word Rvals_13,
  MR_Word BDataId_14,
  MR_Word STATE_VARIABLE_GroupMembers_0_30,
  MR_Word * STATE_VARIABLE_GroupMembers_31,
  MR_Word STATE_VARIABLE_GroupRemap_0_32,
  MR_Word * STATE_VARIABLE_GroupRemap_33);

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
  MR_Word TypeNumRemap_8,
  MR_Word BTypeNum_9,
  MR_Word BScalarCellGroup_10,
  MR_Word STATE_VARIABLE_ScalarCellGroupMap_0_18,
  MR_Word * STATE_VARIABLE_ScalarCellGroupMap_19,
  MR_Word STATE_VARIABLE_Remap_0_20,
  MR_Word * STATE_VARIABLE_Remap_21);

static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
  MR_Word CellType_9,
  MR_Word BTypeNum_10,
  MR_Word STATE_VARIABLE_TypeCounter_0_17,
  MR_Word * STATE_VARIABLE_TypeCounter_18,
  MR_Word STATE_VARIABLE_CellTypeNumMap_0_19,
  MR_Word * STATE_VARIABLE_CellTypeNumMap_20,
  MR_Word STATE_VARIABLE_TypeNumRemap_0_21,
  MR_Word * STATE_VARIABLE_TypeNumRemap_22);

static void MR_CALL 
ll_backend__global_data__associate_natural_type_5_p_0(
  MR_Word UnboxFloat_6,
  MR_Word UnboxInt64s_7,
  MR_Word ArgWidth_8,
  MR_Word Rval_9,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
  MR_Word TypeNum_7,
  MR_Word CellType_8,
  MR_Integer CellNum_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Arrays_0_13,
  MR_Word * STATE_VARIABLE_Arrays_14);

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
  MR_Word TypeNumMap_6,
  MR_Word TypeNum_7,
  MR_Word CellGroup_8,
  MR_Word STATE_VARIABLE_Arrays_0_11,
  MR_Word * STATE_VARIABLE_Arrays_12);

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
  MR_Word TypeNumMap_6,
  MR_Word TypeNum_7,
  MR_Word CellGroup_8,
  MR_Word STATE_VARIABLE_Arrays_0_13,
  MR_Word * STATE_VARIABLE_Arrays_14);

static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
  MR_Word Types_4,
  MR_Word Args_5);

static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
  MR_Word AllocSite_6,
  MR_Integer Slot_7,
  MR_Integer * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Map_0_11,
  MR_Word * STATE_VARIABLE_Map_12);

static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
  MR_Word SCIa_5,
  MR_Word SCIb_6,
  MR_Word * SCI_7,
  MR_Word * Remap_8);

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_SCI_0_10,
  MR_Word * STATE_VARIABLE_SCI_11);

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void);

static void MR_CALL 
ll_backend__global_data__find_general_llds_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_LLDSTypes_0_5,
  MR_Word * STATE_VARIABLE_LLDSTypes_6);

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__global_data__natural_type_5_p_0(
  MR_Word UnboxFloat_6,
  MR_Word UnboxInt64s_7,
  MR_Word ArgWidth_8,
  MR_Word Rval_9,
  MR_Word * Type_10);

static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
  MR_Word CurType_6,
  MR_Word RevArgsSoFar_7,
  MR_Word LaterArgsTypes_8,
  MR_Word * TypeGroups_9,
  MR_Word * TypeAndArgGroups_10);

static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
  MR_Word TypedArgs_7,
  MR_Word CellType_8,
  MR_Word CellValue_9,
  MR_Word * DataId_10,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_Word MR_CALL 
ll_backend__global_data__init_scalar_cell_group_0_f_0(void);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__global_data_scalar_common_1[13][3];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_2[11][2];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_4[6][8];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_5[2][4];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_6[12][6];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_7[1][5];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_8[1][11];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_9[1][10];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_10[1][9];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_11[1][12];




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
    ((MR_Box) (&ll_backend__global_data_scalar_common_4[1])),
    ((MR_Box) (ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__global_data_scalar_common_8[0])),
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

static /* final */ const MR_Box ll_backend__global_data_scalar_common_4[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 1 */
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row 3 */
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
  /* row 4 */
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
  /* row 5 */
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

static /* final */ const MR_Box ll_backend__global_data_scalar_common_5[2][4] = {
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

static /* final */ const MR_Box ll_backend__global_data_scalar_common_6[12][6] = {
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

static /* final */ const MR_Box ll_backend__global_data_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_8[1][11] = {
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

static /* final */ const MR_Box ll_backend__global_data_scalar_common_9[1][10] = {
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

static /* final */ const MR_Box ll_backend__global_data_scalar_common_10[1][9] = {
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

static /* final */ const MR_Box ll_backend__global_data_scalar_common_11[1][12] = {
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

static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[4] = {
  (MR_String) "scsi_module_name",
  (MR_String) "scsi_unbox_float",
  (MR_String) "scsi_unbox_int64s",
  (MR_String) "scsi_common_data"
};

static const MR_DuArgLocn ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0[4] = {
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
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0 = {
  (MR_String) "static_cell_sub_info",
  (MR_Integer) 4,
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
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__811__1_2_p_0(
  MR_Word SubInfoA_9,
  MR_Word SubInfoB_14)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_54 = (MR_Integer) SubInfoA_9;
    MR_Integer CastY_55 = (MR_Integer) SubInfoB_14;

    succeeded = (CastX_54 == CastY_55);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoA_9, (MR_Integer) 0)));
      MR_Word ArgY1_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoB_14, (MR_Integer) 0)));
      MR_Word ArgX2_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoA_9, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgY2_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoB_14, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgX3_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoA_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoB_14, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX4_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoA_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY4_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SubInfoB_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_46, ArgY1_47);
      if (succeeded)
      {
        succeeded = (ArgX2_48 == ArgY2_49);
        if (succeeded)
        {
          succeeded = (ArgX3_50 == ArgY3_51);
          if (succeeded)
            succeeded = (ArgX4_52 == ArgY4_53);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__544__1_1_p_0(
  MR_Word VectorData_7)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], VectorData_7);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__543__1_1_p_0(
  MR_Word LLDSTypes_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, LLDSTypes_6);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
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

      mercury__counter____Compare____counter_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[10], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[10];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
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
      MR_Word ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_12;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_21 = (MR_Integer) ArgX2_6;
        MR_Integer Var_22 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, Var_21, Var_22);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;
          MR_Integer Var_23 = (MR_Integer) ArgX3_8;
          MR_Integer Var_24 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, Var_23, Var_24);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            MR_Integer Var_25 = (MR_Integer) ArgX4_10;
            MR_Integer Var_26 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_25, Var_26);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
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
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
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
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__counter____Compare____counter_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[6], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) &ll_backend__global_data_scalar_common_1[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &ll_backend__global_data_scalar_common_2[7];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        ll_backend__global_data____Compare____static_cell_remap_info_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[5];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
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
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], &Var_18, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], &Var_19, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[3], &Var_20, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_21, ArgX4_10, ArgY4_11);
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[4], &Var_22, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                ll_backend__global_data____Compare____static_cell_info_0_0(&Var_23, ArgX6_14, ArgY6_15);
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[5], HeadVar__1_1, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
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
      MR_Integer CastX_36 = (MR_Integer) ArgX1_4;
      MR_Integer CastY_37 = (MR_Integer) ArgY1_5;

      succeeded = (CastX_36 == CastY_37);
      if (succeeded)
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_14 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 0)));
        MR_Word ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 0)));
        MR_Word ArgX2_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ArgY2_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ArgX3_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ArgY3_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ArgX4_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ArgY4_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_33;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_33, ArgX1_25, ArgY1_26);
        succeeded = (Var_33 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_14 = Var_33;
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
        }
        else
        {
          MR_Word Var_34;
          MR_Integer Var_42 = (MR_Integer) ArgX2_27;
          MR_Integer Var_43 = (MR_Integer) ArgY2_28;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, Var_42, Var_43);
          succeeded = (Var_34 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_14 = Var_34;
            succeeded = (Var_14 == (MR_Integer) 0);
            succeeded = !(succeeded);
          }
          else
          {
            MR_Word Var_35;
            MR_Integer Var_44 = (MR_Integer) ArgX3_29;
            MR_Integer Var_45 = (MR_Integer) ArgY3_30;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, Var_44, Var_45);
            succeeded = (Var_35 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_14 = Var_35;
              succeeded = (Var_14 == (MR_Integer) 0);
              succeeded = !(succeeded);
            }
            else
            {
              MR_Integer Var_46 = (MR_Integer) ArgX4_31;
              MR_Integer Var_47 = (MR_Integer) ArgY4_32;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, Var_46, Var_47);
              succeeded = (Var_14 == (MR_Integer) 0);
              succeeded = !(succeeded);
            }
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__counter____Compare____counter_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], &Var_16, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) &ll_backend__global_data_scalar_common_1[9];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) &ll_backend__global_data_scalar_common_2[3];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) &ll_backend__global_data_scalar_common_2[4];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[5];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
ll_backend__global_data____Unify____static_cell_info_0_0(
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
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
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
      MR_Integer CastX_27 = (MR_Integer) ArgX1_3;
      MR_Integer CastY_28 = (MR_Integer) ArgY1_4;

      succeeded = (CastX_27 == CastY_28);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0)));
        MR_Word ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0)));
        MR_Word ArgX2_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ArgY2_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ArgX3_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ArgY3_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ArgX4_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ArgY4_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
        if (succeeded)
        {
          succeeded = (ArgX2_21 == ArgY2_22);
          if (succeeded)
          {
            succeeded = (ArgX3_23 == ArgY3_24);
            if (succeeded)
              succeeded = (ArgX4_25 == ArgY4_26);
          }
        }
      }
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) &ll_backend__global_data_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) &ll_backend__global_data_scalar_common_1[4];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) &ll_backend__global_data_scalar_common_1[7];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
  MR_Word Remap_4,
  MR_Word Output0_5,
  MR_Word * Output_6)
{
  {
    MR_Word Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output0_5, (MR_Integer) 0)));
    MR_Word A_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output0_5, (MR_Integer) 1)));
    MR_Word B_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output0_5, (MR_Integer) 2)));
    MR_Word C_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output0_5, (MR_Integer) 3)));
    MR_String D_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Output0_5, (MR_Integer) 4)));
    MR_Word E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output0_5, (MR_Integer) 5)));
    MR_Word F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output0_5, (MR_Integer) 6)));
    MR_Word Lval_14;

    ll_backend__global_data__remap_lval_3_p_0(Remap_4, Lval0_7, &Lval_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *Output_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (A_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (B_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (C_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (D_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (E_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (F_13));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
  MR_Word Remap_4,
  MR_Word Input0_5,
  MR_Word * Input_6)
{
  {
    MR_String A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), Input0_5, (MR_Integer) 0)));
    MR_Word B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input0_5, (MR_Integer) 1)));
    MR_Word C_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input0_5, (MR_Integer) 2)));
    MR_Word D_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input0_5, (MR_Integer) 3)));
    MR_Word Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input0_5, (MR_Integer) 4)));
    MR_Word E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input0_5, (MR_Integer) 5)));
    MR_Word F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input0_5, (MR_Integer) 6)));
    MR_Word Rval_14;

    ll_backend__global_data__remap_rval_3_p_0(Remap_4, Rval0_11, &Rval_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *Input_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (A_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (B_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (C_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (D_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Rval_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (E_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (F_13));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Output_6;

    ll_backend__global_data__remap_foreign_proc_output_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_Output_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Output_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Input_6;

    ll_backend__global_data__remap_foreign_proc_input_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Input_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Input_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
  MR_Word Remap_4,
  MR_Word Comp0_5,
  MR_Word * Comp_6)
{
  switch (MR_tag((MR_Word) Comp0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Comp_6 = Comp0_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorInfo_24_24;
        MR_Word Inputs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Comp0_5, (MR_Integer) 0)));
        MR_Word Inputs_8;
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[10]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Remap_4));
        }
        TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0;
        mercury__list__map_3_p_0(TypeCtorInfo_24_24, TypeCtorInfo_24_24, Var_21, Inputs0_7, &Inputs_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Comp_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inputs_8));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeCtorInfo_27_27;
        MR_Word Outputs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Comp0_5, (MR_Integer) 0)));
        MR_Word Outputs_10;
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[11]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Remap_4));
        }
        TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0;
        mercury__list__map_3_p_0(TypeCtorInfo_27_27, TypeCtorInfo_27_27, Var_20, Outputs0_9, &Outputs_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Comp_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Outputs_10));
        }
      }
      break;
    case (MR_Integer) 3:
      *Comp_6 = Comp0_5;
      break;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_Instr_0_9,
  MR_Word * STATE_VARIABLE_Instr_10)
{
  {
    MR_Word Uinstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Instr_0_9, (MR_Integer) 0)));
    MR_String Comment_7 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Instr_0_9, (MR_Integer) 1)));
    MR_Word Uinstr_8;

    ll_backend__global_data__remap_instr_3_p_0(Remap_4, Uinstr0_6, &Uinstr_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Instr_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Uinstr_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Comment_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Comp_6;

    ll_backend__global_data__remap_foreign_proc_component_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_Comp_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Comp_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Instr_10;

    ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Instr_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Instr_10));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
  MR_Word GlobalDataRemap_4,
  MR_Word Instr0_5,
  MR_Word * Instr_6)
{
  {
    MR_Word StaticCellRemap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataRemap_4, (MR_Integer) 1)));
    MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataRemap_4, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) Instr0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Instr_6 = Instr0_5;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Instr_6 = Instr0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_144_144;
              MR_Integer NumIntTemps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Integer NumFloatTemps_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Block0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));
              MR_Word Block_11;
              MR_Word Var_94;

              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[3]));
                MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (GlobalDataRemap_4));
              }
              TypeCtorInfo_144_144 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              mercury__list__map_3_p_0(TypeCtorInfo_144_144, TypeCtorInfo_144_144, Var_94, Block0_10, &Block_11);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NumIntTemps_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (NumFloatTemps_9));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Block_11));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Rval_14;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_13, &Rval_14);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_12));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Lval_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Rval_97;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_96, &Rval_97);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_95));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_97));
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
            *Instr_6 = Instr0_5;
            break;
          case (MR_Integer) 7:
            {
              MR_Word MaybeLabels_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Rval0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval_101;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_100, &Rval_101);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_101));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeLabels_27));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word CodeAddr_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Rval0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval_99;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_98, &Rval_99);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_99));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CodeAddr_15));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Lval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Lval_102;

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_28, &Lval_102);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_102));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Lval_103;
              MR_Word Lval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_104, &Lval_103);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_103));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word MaybeTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));
              MR_Word SizeRval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 4)));
              MR_Word Prof_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 5)));
              MR_Word Atomic_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 6)));
              MR_Word MaybeRegion0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 7)));
              MR_Word MaybeReuse0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 8)));
              MR_Word SizeRval_36;
              MR_Word MaybeRegion_39;
              MR_Word MaybeReuse_46;
              MR_Word Lval_105;
              MR_Word Lval0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_106, &Lval_105);
              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, SizeRval0_31, &SizeRval_36);
              if ((MaybeRegion0_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word Region0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRegion0_34, (MR_Integer) 0)));
                MR_Word Region_38;

                ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Region0_37, &Region_38);
                {
                  MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeRegion_39, 0) = ((MR_Box) (Region_38));
                }
              }
              if ((MaybeReuse0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word Reuse0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse0_35, (MR_Integer) 0)));
                MR_Word MaybeFlag0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse0_35, (MR_Integer) 1)));
                MR_Word Reuse_42;
                MR_Word MaybeFlag_45;

                ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Reuse0_40, &Reuse_42);
                if ((MaybeFlag0_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                {
                  MR_Word Flag0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFlag0_41, (MR_Integer) 0)));
                  MR_Word Flag_44;

                  ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Flag0_43, &Flag_44);
                  {
                    MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeFlag_45, 0) = ((MR_Box) (Flag_44));
                  }
                }
                {
                  MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeReuse_46, 0) = ((MR_Box) (Reuse_42));
                  MR_hl_field(MR_mktag(1), MaybeReuse_46, 1) = ((MR_Box) (MaybeFlag_45));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_105));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeTag_29));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybeOffset_30));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SizeRval_36));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Prof_32));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Atomic_33));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (MaybeRegion_39));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (MaybeReuse_46));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Lval_107;
              MR_Word Lval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_108, &Lval_107);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_107));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Rval0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval_110;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_109, &Rval_110);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_110));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Rval0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval_112;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_111, &Rval_112);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_112));
              }
            }
            break;
          case (MR_Integer) 16:
            *Instr_6 = Instr0_5;
            break;
          case (MR_Integer) 17:
            {
              MR_Word FillOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word IdRval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));
              MR_Word NumLval0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 4)));
              MR_Word AddrLval0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 5)));
              MR_Word IdRval_53;
              MR_Word NumLval_54;
              MR_Word AddrLval_55;
              MR_Word EmbeddedStackFrame_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, IdRval0_50, &IdRval_53);
              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, NumLval0_51, &NumLval_54);
              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, AddrLval0_52, &AddrLval_55);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FillOp_49));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_113));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (IdRval_53));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (NumLval_54));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (AddrLval_55));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SetOp_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word ValueRval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));
              MR_Word ValueRval_58;
              MR_Word EmbeddedStackFrame_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, ValueRval0_57, &ValueRval_58);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SetOp_56));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EmbeddedStackFrame_114));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ValueRval_58));
              }
            }
            break;
          case (MR_Integer) 19:
            *Instr_6 = Instr0_5;
            break;
          case (MR_Integer) 20:
            {
              MR_Word Lval_116;
              MR_Word Lval0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_117, &Lval_116);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_116));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Rval0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval_119;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_118, &Rval_119);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_119));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Reason_60));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word Lval_120;
              MR_Word Lval0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_121, &Lval_120);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_120));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word Rval0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval_123;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_122, &Rval_123);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_123));
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word TypeCtorInfo_147_147;
              MR_Word Decls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Comps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word MayCallMerc_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));
              MR_Word FixNoLayout_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 4)));
              MR_Word FixLayout_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 5)));
              MR_Word FixOnlyLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 6)));
              MR_Word NoFix_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 7)));
              MR_Word HashDefnLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 8)));
              MR_Word StackSlotRef_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 9)));
              MR_Word MaybeDup_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 10)));
              MR_Word Comps_26;
              MR_Word Var_93;

              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[9]));
                MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_2));
                MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (StaticCellRemap_7));
              }
              TypeCtorInfo_147_147 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
              mercury__list__map_3_p_0(TypeCtorInfo_147_147, TypeCtorInfo_147_147, Var_93, Comps0_17, &Comps_26);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Decls_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Comps_26));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MayCallMerc_18));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (FixNoLayout_19));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (FixLayout_20));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (FixOnlyLayout_21));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (NoFix_22));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (HashDefnLabel_23));
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (StackSlotRef_24));
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (MaybeDup_25));
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer NumJoins_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Integer ConjId0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));
              MR_Integer ConjId_63;
              MR_Word Var_92;
              MR_Word Lval_124;
              MR_Word Lval0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Var_141;

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_125, &Lval_124);
              Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataRemap_4, (MR_Integer) 0)));
              Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataRemap_4, (MR_Integer) 1)));
              ll_backend__global_data__remap_ts_table_index_3_p_0(Var_92, ConjId0_62, &ConjId_63);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_124));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (NumJoins_61));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConjId_63));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word Label_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Lval_126;
              MR_Word Lval0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_127, &Lval_126);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_126));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Label_64));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer NumSlots_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Lval_128;
              MR_Word Lval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));

              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_129, &Lval_128);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NumSlots_65));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lval_128));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word Lval_130;
              MR_Word Rval0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word Rval_132;
              MR_Word Lval0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word Label_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, Rval0_131, &Rval_132);
              ll_backend__global_data__remap_lval_3_p_0(StaticCellRemap_7, Lval0_133, &Lval_130);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_132));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Lval_130));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_134));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word LCRval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word LCSRval0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word LCRval_68;
              MR_Word LCSRval_69;
              MR_Word Label_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 3)));

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, LCRval0_66, &LCRval_68);
              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, LCSRval0_67, &LCSRval_69);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_68));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_69));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Label_135));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word LCRval0_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 1)));
              MR_Word LCSRval0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr0_5, (MR_Integer) 2)));
              MR_Word LCRval_138;
              MR_Word LCSRval_139;

              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, LCRval0_136, &LCRval_138);
              ll_backend__global_data__remap_rval_3_p_0(StaticCellRemap_7, LCSRval0_137, &LCSRval_139);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Instr_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LCRval_138));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (LCSRval_139));
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
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = HeadVar__2_2;
  else
  {
    MR_Integer Offset_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    *HeadVar__3_3 = (HeadVar__2_2 + Offset_7);
  }
}

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Rval_6;

    ll_backend__global_data__remap_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Rval_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Rval_6));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_GroupedArgs_0_10,
  MR_Word * STATE_VARIABLE_GroupedArgs_11)
{
  if (((MR_tag((MR_Word) STATE_VARIABLE_GroupedArgs_0_10)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Word TypeCtorInfo_20_20;
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
    MR_Integer Fields_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
    MR_Word Rvals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 2)));
    MR_Word Rvals_9;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[8]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ll_backend__global_data__remap_arg_group_value_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    mercury__list__map_3_p_0(TypeCtorInfo_20_20, TypeCtorInfo_20_20, Var_13, Rvals0_8, &Rvals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GroupedArgs_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Fields_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Rvals_9));
    }
  }
  else
  {
    MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
    MR_Word Rvals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
    MR_Word Rvals_17;

    ll_backend__global_data__remap_rval_3_p_0(Remap_4, Rvals0_16, &Rvals_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_GroupedArgs_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rvals_17));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
  MR_Word Remap_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Rval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Rval_7;

    ll_backend__global_data__remap_rval_3_p_0(Remap_4, Rval0_5, &Rval_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_6));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
  MR_Word Remap_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval0_5, (MR_Integer) 0)));
          MR_Word Lval_8;

          ll_backend__global_data__remap_lval_3_p_0(Remap_4, Lval0_7, &Lval_8);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Rval_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lval_8));
          }
        }
        break;
      case (MR_Integer) 1:
        *Rval_6 = Rval0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval0_5, (MR_Integer) 0)));
          MR_Word Ptr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval0_5, (MR_Integer) 1)));
          MR_Word Ptr_12;

          ll_backend__global_data__remap_rval_3_p_0(Remap_4, Ptr0_11, &Ptr_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Tag_10));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Ptr_12));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Rval_6 = Rval0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1)));
              MR_Word Const_15;

              switch (MR_tag((MR_Word) Const0_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Const_15 = Const0_14;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  Const_15 = Const0_14;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const0_14, (MR_Integer) 0)))) {
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
                    case (MR_Integer) 11:
                    case (MR_Integer) 12:
                      Const_15 = Const0_14;
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word DataId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const0_14, (MR_Integer) 1)));
                        MR_Word MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const0_14, (MR_Integer) 2)));
                        MR_Word DataId_36;

                        switch (MR_tag((MR_Word) DataId0_29)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            DataId_36 = DataId0_29;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word TypeNum0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), DataId0_29, (MR_Integer) 0)));
                              MR_Word TypeNumRemap_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Remap_4, (MR_Integer) 0)));
                              MR_Word ScalarCellGroupRemap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Remap_4, (MR_Integer) 1)));
                              MR_Integer _CellNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), DataId0_29, (MR_Integer) 1)));
                              MR_Word TypeCtorInfo_42_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

                              succeeded = mercury__map__contains_2_p_0(TypeCtorInfo_42_64, TypeCtorInfo_42_64, TypeNumRemap_33, ((MR_Box) (TypeNum0_31)));
                              if (succeeded)
                              {
                                MR_Word TypeCtorInfo_45_67;
                                MR_Word ScalarCellGroup_35;
                                MR_Box conv0_ScalarCellGroup_35;
                                MR_Box conv1_DataId_36;

                                mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ScalarCellGroupRemap_34, ((MR_Box) (TypeNum0_31)), &conv0_ScalarCellGroup_35);
                                ScalarCellGroup_35 = ((MR_Word) conv0_ScalarCellGroup_35);
                                TypeCtorInfo_45_67 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
                                mercury__map__lookup_3_p_0(TypeCtorInfo_45_67, TypeCtorInfo_45_67, ScalarCellGroup_35, ((MR_Box) (DataId0_29)), &conv1_DataId_36);
                                DataId_36 = ((MR_Word) conv1_DataId_36);
                              }
                              else
                                DataId_36 = DataId0_29;
                            }
                            break;
                          case (MR_Integer) 3:
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DataId0_29, (MR_Integer) 0)))) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Integer CellNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), DataId0_29, (MR_Integer) 2)));
                                  MR_Word TypeNum0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId0_29, (MR_Integer) 1)));
                                  MR_Word TypeNumRemap_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Remap_4, (MR_Integer) 0)));
                                  MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Remap_4, (MR_Integer) 1)));
                                  MR_Word TypeNum_39;
                                  MR_Word TypeCtorInfo_46_68 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
                                  MR_Box conv2_TypeNum_39;

                                  succeeded = mercury__map__search_3_p_0(TypeCtorInfo_46_68, TypeCtorInfo_46_68, TypeNumRemap_63, ((MR_Box) (TypeNum0_62)), &conv2_TypeNum_39);
                                  if (succeeded)
                                  {
                                    TypeNum_39 = ((MR_Word) conv2_TypeNum_39);
                                    succeeded = MR_TRUE;
                                  }
                                  if (succeeded)
                                    {
                                      DataId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), DataId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                      MR_hl_field(MR_mktag(3), DataId_36, 1) = ((MR_Box) (TypeNum_39));
                                      MR_hl_field(MR_mktag(3), DataId_36, 2) = ((MR_Box) (CellNum_37));
                                    }
                                  else
                                    DataId_36 = DataId0_29;
                                }
                                break;
                              case (MR_Integer) 1:
                              case (MR_Integer) 2:
                                DataId_36 = DataId0_29;
                                break;
                            }
                            break;
                        }
                        {
                          Const_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Const_15, 1) = ((MR_Box) (DataId_36));
                          MR_hl_field(MR_mktag(3), Const_15, 2) = ((MR_Box) (MaybeOffset_30));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Const_15));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Unop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1)));
              MR_Word A0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2)));
              MR_Word A_18;

              ll_backend__global_data__remap_rval_3_p_0(Remap_4, A0_17, &A_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Unop_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (A_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1)));
              MR_Word B0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 3)));
              MR_Word B_21;
              MR_Word A0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2)));
              MR_Word A_25;

              ll_backend__global_data__remap_rval_3_p_0(Remap_4, A0_24, &A_25);
              ll_backend__global_data__remap_rval_3_p_0(Remap_4, B0_20, &B_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Binop_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (A_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (B_21));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1)));
              MR_Word MemRef_23;

              switch (MR_tag((MR_Word) MemRef0_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  MemRef_23 = MemRef0_22;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Ptr0_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef0_22, (MR_Integer) 0)));
                    MR_Word MaybeTag_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef0_22, (MR_Integer) 1)));
                    MR_Word FieldNum_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef0_22, (MR_Integer) 2)));
                    MR_Word Ptr_77;

                    ll_backend__global_data__remap_rval_3_p_0(Remap_4, Ptr0_74, &Ptr_77);
                    {
                      MemRef_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), MemRef_23, 0) = ((MR_Box) (Ptr_77));
                      MR_hl_field(MR_mktag(2), MemRef_23, 1) = ((MR_Box) (MaybeTag_75));
                      MR_hl_field(MR_mktag(2), MemRef_23, 2) = ((MR_Box) (FieldNum_76));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MemRef_23));
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
  MR_Word Remap_4,
  MR_Word Lval0_5,
  MR_Word * Lval_6)
{
  switch (MR_tag((MR_Word) Lval0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Lval_6 = Lval0_5;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Lval_6 = Lval0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 0)))) {
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
          *Lval_6 = Lval0_5;
          break;
        case (MR_Integer) 9:
          {
            MR_Word MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
            MR_Word Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 2)));
            MR_Word FieldNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 3)));
            MR_Word Rval_10;

            ll_backend__global_data__remap_rval_3_p_0(Remap_4, Rval0_8, &Rval_10);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MaybeTag_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_10));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (FieldNum_9));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1)));
            MR_Word Rval_28;

            ll_backend__global_data__remap_rval_3_p_0(Remap_4, Rval0_27, &Rval_28);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_28));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    ll_backend__global_data__remap_plain_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_GroupedArgs_11;

    ll_backend__global_data__remap_arg_group_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_GroupedArgs_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_GroupedArgs_11));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_CommonCellValue_0_10,
  MR_Word * STATE_VARIABLE_CommonCellValue_11)
{
  if (((MR_tag((MR_Word) STATE_VARIABLE_CommonCellValue_0_10)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word TypeCtorInfo_21_21;
    MR_Word ArgGroup0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
    MR_Word ArgGroup_9;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
    mercury__list__map_3_p_0(TypeCtorInfo_21_21, TypeCtorInfo_21_21, Var_12, ArgGroup0_8, &ArgGroup_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_CommonCellValue_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgGroup_9));
    }
  }
  else
  {
    MR_Word TypeCtorInfo_18_18;
    MR_Word RvalsTypes0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
    MR_Word RvalsTypes_7;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
    mercury__list__map_3_p_0(TypeCtorInfo_18_18, TypeCtorInfo_18_18, Var_14, RvalsTypes0_6, &RvalsTypes_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CommonCellValue_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RvalsTypes_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CommonCellValue_11;

    ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_CommonCellValue_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_CommonCellValue_11));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_Contents_0_8,
  MR_Word * STATE_VARIABLE_Contents_9)
{
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word Values0_6 = (MR_Word) STATE_VARIABLE_Contents_0_8;
    MR_Word Values_7;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_contents_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    mercury__list__map_3_p_0(TypeCtorInfo_14_14, TypeCtorInfo_14_14, Var_10, Values0_6, &Values_7);
    *STATE_VARIABLE_Contents_9 = (MR_Word) Values_7;
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Contents_9;

    ll_backend__global_data__remap_vector_contents_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Contents_9);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Contents_9));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_VectorCellGroup_0_9,
  MR_Word * STATE_VARIABLE_VectorCellGroup_10)
{
  {
    MR_Word TypeCtorInfo_15_15;
    MR_Word Counter_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 0)));
    MR_Word Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 1)));
    MR_Word Map_8;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_cell_group_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_15_15 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_15_15, TypeCtorInfo_15_15, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, Var_11, Map0_7, &Map_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VectorCellGroup_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Counter_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Map_8));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CommonCellValue_11;

    ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_CommonCellValue_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_CommonCellValue_11));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_ScalarCellGroup_0_8,
  MR_Word * STATE_VARIABLE_ScalarCellGroup_9)
{
  {
    MR_Word TypeCtorInfo_19_19;
    MR_Word Array0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
    MR_Word Array_7;
    MR_Word Var_10;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ll_backend__global_data__remap_scalar_cell_group_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    mercury__list__map_3_p_0(TypeCtorInfo_19_19, TypeCtorInfo_19_19, Var_10, Array0_6, &Array_7);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ScalarCellGroup_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Array_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
  MR_Word TypeNumRemap_6,
  MR_Word OldTypeNum_7,
  MR_Word VectorCellGroup_8,
  MR_Word STATE_VARIABLE_VectorCellGroupMap_0_11,
  MR_Word * STATE_VARIABLE_VectorCellGroupMap_12)
{
  {
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    MR_Word NewTypeNum_10;
    MR_Box conv0_NewTypeNum_10;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, TypeCtorInfo_14_14, TypeNumRemap_6, ((MR_Box) (OldTypeNum_7)), &conv0_NewTypeNum_10);
    NewTypeNum_10 = ((MR_Word) conv0_NewTypeNum_10);
    mercury__map__det_insert_4_p_0(TypeCtorInfo_14_14, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (NewTypeNum_10)), ((MR_Box) (VectorCellGroup_8)), STATE_VARIABLE_VectorCellGroupMap_0_11, STATE_VARIABLE_VectorCellGroupMap_12);
  }
}

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
  MR_Word TypeNum_10,
  MR_Word ArrayB_11,
  MR_Word ArrayAB_12,
  MR_Word Rvals_13,
  MR_Word BDataId_14,
  MR_Word STATE_VARIABLE_GroupMembers_0_30,
  MR_Word * STATE_VARIABLE_GroupMembers_31,
  MR_Word STATE_VARIABLE_GroupRemap_0_32,
  MR_Word * STATE_VARIABLE_GroupRemap_33)
{
  {
    MR_bool succeeded;
    MR_Word DataId_17;
    MR_Box conv0_DataId_17;

    succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, STATE_VARIABLE_GroupMembers_0_30, ((MR_Box) (Rvals_13)), &conv0_DataId_17);
    if (succeeded)
    {
      DataId_17 = ((MR_Word) conv0_DataId_17);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;

      mercury__map__det_insert_4_p_0(TypeCtorInfo_44_44, TypeCtorInfo_44_44, ((MR_Box) (BDataId_14)), ((MR_Box) (DataId_17)), STATE_VARIABLE_GroupRemap_0_32, STATE_VARIABLE_GroupRemap_33);
      *STATE_VARIABLE_GroupMembers_31 = STATE_VARIABLE_GroupMembers_0_30;
    }
    else
      switch (MR_tag((MR_Word) BDataId_14)) {
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
            MR_Word TypeCtorInfo_45_45 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
            MR_Word TypeCtorInfo_47_47;
            MR_Integer BCellNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), BDataId_14, (MR_Integer) 1)));
            MR_Word CommonCellValue_20;
            MR_Integer CellNum_21;
            MR_Word DataId_40;
            MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), BDataId_14, (MR_Integer) 0)));
            MR_Box conv1_CommonCellValue_20;

            conv1_CommonCellValue_20 = mercury__list__det_index0_2_f_0(TypeCtorInfo_45_45, ArrayB_11, BCellNum_19);
            CommonCellValue_20 = ((MR_Word) conv1_CommonCellValue_20);
            CellNum_21 = mercury__list__det_index0_of_first_occurrence_2_f_0(TypeCtorInfo_45_45, ArrayAB_12, ((MR_Box) (CommonCellValue_20)));
            {
              DataId_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), DataId_40, 0) = ((MR_Box) (TypeNum_10));
              MR_hl_field(MR_mktag(2), DataId_40, 1) = ((MR_Box) (CellNum_21));
            }
            TypeCtorInfo_47_47 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
            mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], TypeCtorInfo_47_47, ((MR_Box) (Rvals_13)), ((MR_Box) (DataId_40)), STATE_VARIABLE_GroupMembers_0_30, STATE_VARIABLE_GroupMembers_31);
            mercury__map__det_insert_4_p_0(TypeCtorInfo_47_47, TypeCtorInfo_47_47, ((MR_Box) (BDataId_14)), ((MR_Box) (DataId_40)), STATE_VARIABLE_GroupRemap_0_32, STATE_VARIABLE_GroupRemap_33);
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
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_GroupMembers_31;
    MR_Word conv2_STATE_VARIABLE_GroupRemap_33;

    ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv3_STATE_VARIABLE_GroupMembers_31, ((MR_Word) wrapper_arg_5), &conv2_STATE_VARIABLE_GroupRemap_33);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_GroupMembers_31));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_GroupRemap_33));
  }
}

static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
  MR_Word TypeNumRemap_8,
  MR_Word BTypeNum_9,
  MR_Word BScalarCellGroup_10,
  MR_Word STATE_VARIABLE_ScalarCellGroupMap_0_18,
  MR_Word * STATE_VARIABLE_ScalarCellGroupMap_19,
  MR_Word STATE_VARIABLE_Remap_0_20,
  MR_Word * STATE_VARIABLE_Remap_21)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    MR_Word TypeCtorInfo_27_55;
    MR_Word TypeCtorInfo_34_62;
    MR_Word TypeNum_13;
    MR_Word ScalarCellGroup0_15;
    MR_Word ScalarCellGroup_16;
    MR_Word ScalarCellGroupRemap_17;
    MR_Word GroupMembersA_40;
    MR_Word RevArrayA_41;
    MR_Word GroupMembersB_43;
    MR_Word RevArrayB_44;
    MR_Word CounterAB_45;
    MR_Word GroupMembersAB_46;
    MR_Word RevArrayAB_47;
    MR_Word ArrayA_48;
    MR_Word ArrayB_49;
    MR_Word ArrayAB_50;
    MR_Integer Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Box conv0_TypeNum_13;
    MR_Word ScalarCellGroupPrime_14;
    MR_Box conv1_ScalarCellGroupPrime_14;
    MR_Word _CounterA_39;
    MR_Word _CounterB_42;
    MR_Box conv5_GroupMembersAB_46;
    MR_Box conv4_ScalarCellGroupRemap_17;

    mercury__map__lookup_3_p_0(TypeCtorInfo_28_28, TypeCtorInfo_28_28, TypeNumRemap_8, ((MR_Box) (BTypeNum_9)), &conv0_TypeNum_13);
    TypeNum_13 = ((MR_Word) conv0_TypeNum_13);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, STATE_VARIABLE_ScalarCellGroupMap_0_18, ((MR_Box) (TypeNum_13)), &conv1_ScalarCellGroupPrime_14);
    if (succeeded)
    {
      ScalarCellGroupPrime_14 = ((MR_Word) conv1_ScalarCellGroupPrime_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ScalarCellGroup0_15 = ScalarCellGroupPrime_14;
    else
    {
      MR_Word Var_22;
      MR_Word Var_24;

      Var_22 = mercury__counter__init_1_f_0((MR_Integer) 0);
      Var_24 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
      {
        ScalarCellGroup0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ScalarCellGroup0_15, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), ScalarCellGroup0_15, 1) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), ScalarCellGroup0_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    _CounterA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCellGroup0_15, (MR_Integer) 0)));
    GroupMembersA_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCellGroup0_15, (MR_Integer) 1)));
    RevArrayA_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCellGroup0_15, (MR_Integer) 2)));
    _CounterB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), BScalarCellGroup_10, (MR_Integer) 0)));
    GroupMembersB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), BScalarCellGroup_10, (MR_Integer) 1)));
    RevArrayB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), BScalarCellGroup_10, (MR_Integer) 2)));
    TypeCtorInfo_27_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    ArrayA_48 = mercury__list__reverse_1_f_0(TypeCtorInfo_27_55, RevArrayA_41);
    ArrayB_49 = mercury__list__reverse_1_f_0(TypeCtorInfo_27_55, RevArrayB_44);
    Var_52 = mercury__list__delete_elems_2_f_0(TypeCtorInfo_27_55, ArrayB_49, ArrayA_48);
    ArrayAB_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_27_55, ArrayA_48, Var_52);
    RevArrayAB_47 = mercury__list__reverse_1_f_0(TypeCtorInfo_27_55, ArrayAB_50);
    Var_51 = mercury__list__length_1_f_0(TypeCtorInfo_27_55, RevArrayAB_47);
    CounterAB_45 = mercury__counter__init_1_f_0(Var_51);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (TypeNum_13));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (ArrayB_49));
      MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (ArrayAB_50));
    }
    TypeCtorInfo_34_62 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
    Var_54 = mercury__map__init_0_f_0(TypeCtorInfo_34_62, TypeCtorInfo_34_62);
    mercury__bimap__foldl2_6_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], TypeCtorInfo_34_62, (MR_Word) &ll_backend__global_data_scalar_common_1[6], (MR_Word) &ll_backend__global_data_scalar_common_1[3], Var_53, GroupMembersB_43, ((MR_Box) (GroupMembersA_40)), &conv5_GroupMembersAB_46, ((MR_Box) (Var_54)), &conv4_ScalarCellGroupRemap_17);
    GroupMembersAB_46 = ((MR_Word) conv5_GroupMembersAB_46);
    ScalarCellGroupRemap_17 = ((MR_Word) conv4_ScalarCellGroupRemap_17);
    {
      ScalarCellGroup_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ScalarCellGroup_16, 0) = ((MR_Box) (CounterAB_45));
      MR_hl_field(MR_mktag(0), ScalarCellGroup_16, 1) = ((MR_Box) (GroupMembersAB_46));
      MR_hl_field(MR_mktag(0), ScalarCellGroup_16, 2) = ((MR_Box) (RevArrayAB_47));
    }
    mercury__map__set_4_p_0(TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (TypeNum_13)), ((MR_Box) (ScalarCellGroup_16)), STATE_VARIABLE_ScalarCellGroupMap_0_18, STATE_VARIABLE_ScalarCellGroupMap_19);
    mercury__map__det_insert_4_p_0(TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (BTypeNum_9)), ((MR_Box) (ScalarCellGroupRemap_17)), STATE_VARIABLE_Remap_0_20, STATE_VARIABLE_Remap_21);
  }
}

static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
  MR_Word CellType_9,
  MR_Word BTypeNum_10,
  MR_Word STATE_VARIABLE_TypeCounter_0_17,
  MR_Word * STATE_VARIABLE_TypeCounter_18,
  MR_Word STATE_VARIABLE_CellTypeNumMap_0_19,
  MR_Word * STATE_VARIABLE_CellTypeNumMap_20,
  MR_Word STATE_VARIABLE_TypeNumRemap_0_21,
  MR_Word * STATE_VARIABLE_TypeNumRemap_22)
{
  {
    MR_bool succeeded;
    MR_Word ATypeNum_14;
    MR_Box conv0_ATypeNum_14;

    succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, STATE_VARIABLE_CellTypeNumMap_0_19, ((MR_Box) (CellType_9)), &conv0_ATypeNum_14);
    if (succeeded)
    {
      ATypeNum_14 = ((MR_Word) conv0_ATypeNum_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

      mercury__map__det_insert_4_p_0(TypeCtorInfo_29_29, TypeCtorInfo_29_29, ((MR_Box) (BTypeNum_10)), ((MR_Box) (ATypeNum_14)), STATE_VARIABLE_TypeNumRemap_0_21, STATE_VARIABLE_TypeNumRemap_22);
      *STATE_VARIABLE_CellTypeNumMap_20 = STATE_VARIABLE_CellTypeNumMap_0_19;
      *STATE_VARIABLE_TypeCounter_18 = STATE_VARIABLE_TypeCounter_0_17;
    }
    else
    {
      MR_Word TypeCtorInfo_30_30;
      MR_Integer N_15;
      MR_Word NewTypeNum_16;

      mercury__counter__allocate_3_p_0(&N_15, STATE_VARIABLE_TypeCounter_0_17, STATE_VARIABLE_TypeCounter_18);
      NewTypeNum_16 = (MR_Word) N_15;
      TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
      mercury__map__det_insert_4_p_0(TypeCtorInfo_30_30, TypeCtorInfo_30_30, ((MR_Box) (BTypeNum_10)), ((MR_Box) (NewTypeNum_16)), STATE_VARIABLE_TypeNumRemap_0_21, STATE_VARIABLE_TypeNumRemap_22);
      mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, TypeCtorInfo_30_30, ((MR_Box) (CellType_9)), ((MR_Box) (NewTypeNum_16)), STATE_VARIABLE_CellTypeNumMap_0_19, STATE_VARIABLE_CellTypeNumMap_20);
    }
  }
}

static void MR_CALL 
ll_backend__global_data__associate_natural_type_5_p_0(
  MR_Word UnboxFloat_6,
  MR_Word UnboxInt64s_7,
  MR_Word ArgWidth_8,
  MR_Word Rval_9,
  MR_Word * HeadVar__5_5)
{
  {
    MR_Word Type_10;

    ll_backend__global_data__natural_type_5_p_0(UnboxFloat_6, UnboxInt64s_7, ArgWidth_8, Rval_9, &Type_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_10));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
  MR_Word TypeNum_7,
  MR_Word CellType_8,
  MR_Integer CellNum_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Arrays_0_13,
  MR_Word * STATE_VARIABLE_Arrays_14)
{
  {
    MR_Word VectorContents_10 = (MR_Word) HeadVar__4_4;
    MR_Word Array_12;

    {
      Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Array_12, 0) = ((MR_Box) (CellType_8));
      MR_hl_field(MR_mktag(0), Array_12, 1) = ((MR_Box) (TypeNum_7));
      MR_hl_field(MR_mktag(0), Array_12, 2) = ((MR_Box) (CellNum_9));
      MR_hl_field(MR_mktag(0), Array_12, 3) = ((MR_Box) (VectorContents_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Arrays_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Array_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Arrays_0_13));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Arrays_14;

    ll_backend__global_data__add_one_vector_static_cell_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_Arrays_14);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Arrays_14));
  }
}

static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
  MR_Word TypeNumMap_6,
  MR_Word TypeNum_7,
  MR_Word CellGroup_8,
  MR_Word STATE_VARIABLE_Arrays_0_11,
  MR_Word * STATE_VARIABLE_Arrays_12)
{
  {
    MR_Word CellType_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Box conv0_CellType_10;
    MR_Word Var_16;
    MR_Box conv2_STATE_VARIABLE_Arrays_12;

    mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, TypeNumMap_6, &conv0_CellType_10, ((MR_Box) (TypeNum_7)));
    CellType_10 = ((MR_Word) conv0_CellType_10);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeNum_7));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (CellType_10));
    }
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_8, (MR_Integer) 0)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_8, (MR_Integer) 1)));
    mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], Var_13, Var_14, ((MR_Box) (STATE_VARIABLE_Arrays_0_11)), &conv2_STATE_VARIABLE_Arrays_12);
    *STATE_VARIABLE_Arrays_12 = ((MR_Word) conv2_STATE_VARIABLE_Arrays_12);
  }
}

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
  MR_Word TypeNumMap_6,
  MR_Word TypeNum_7,
  MR_Word CellGroup_8,
  MR_Word STATE_VARIABLE_Arrays_0_13,
  MR_Word * STATE_VARIABLE_Arrays_14)
{
  {
    MR_Word CellType_10;
    MR_Word ArrayContents_11;
    MR_Word Array_12;
    MR_Word Var_15;
    MR_Box conv0_CellType_10;
    MR_Word Var_17;
    MR_Word Var_18;

    mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, TypeNumMap_6, &conv0_CellType_10, ((MR_Box) (TypeNum_7)));
    CellType_10 = ((MR_Word) conv0_CellType_10);
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_8, (MR_Integer) 0)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_8, (MR_Integer) 1)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_8, (MR_Integer) 2)));
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, Var_15, &ArrayContents_11);
    {
      Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Array_12, 0) = ((MR_Box) (CellType_10));
      MR_hl_field(MR_mktag(0), Array_12, 1) = ((MR_Box) (TypeNum_7));
      MR_hl_field(MR_mktag(0), Array_12, 2) = ((MR_Box) (ArrayContents_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Arrays_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Array_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Arrays_0_13));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
  MR_Word Types_4,
  MR_Word Args_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypedArgs_6;

    ll_backend__llds__build_typed_rvals_3_p_0(Args_5, Types_4, &TypedArgs_6);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (TypedArgs_6));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
  MR_Word AllocSite_6,
  MR_Integer Slot_7,
  MR_Integer * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Map_0_11,
  MR_Word * STATE_VARIABLE_Map_12)
{
  {
    MR_Word AllocId_9;
    MR_Word ArraySlot_10;

    *HeadVar__3_3 = (Slot_7 + (MR_Integer) 1);
    AllocId_9 = (MR_Word) AllocSite_6;
    {
      ArraySlot_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArraySlot_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
      MR_hl_field(MR_mktag(0), ArraySlot_10, 1) = ((MR_Box) (Slot_7));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (AllocId_9)), ((MR_Box) (ArraySlot_10)), STATE_VARIABLE_Map_0_11, STATE_VARIABLE_Map_12);
  }
}

static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Instr_10;

    ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Instr_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Instr_10));
  }
}

void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_Procedure_0_8,
  MR_Word * STATE_VARIABLE_Procedure_9)
{
  {
    MR_Word TypeCtorInfo_31_31;
    MR_Word Code0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
    MR_Word Code_7;
    MR_Word Var_10;
    MR_String Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
    MR_String Var_20;
    MR_Integer Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_25;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ll_backend__global_data__remap_references_to_global_data_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    mercury__list__map_3_p_0(TypeCtorInfo_31_31, TypeCtorInfo_31_31, Var_10, Code0_6, &Code_7);
    Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
    Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Procedure_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Code_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
ll_backend__global_data__merge_global_datas_4_p_0(
  MR_Word GlobalDataA_5,
  MR_Word GlobalDataB_6,
  MR_Word * GlobalData_7,
  MR_Word * GlobalDataRemap_8)
{
  {
    MR_Word TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word ProcVarMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataA_5, (MR_Integer) 0)));
    MR_Word ProcLayoutMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataA_5, (MR_Integer) 1)));
    MR_Word ClosureLayoutsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataA_5, (MR_Integer) 2)));
    MR_Integer TSStringSlotCounterA_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalDataA_5, (MR_Integer) 3)));
    MR_Word TSRevStringTableA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataA_5, (MR_Integer) 4)));
    MR_Word StaticCellInfoA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataA_5, (MR_Integer) 5)));
    MR_Word AllocSitesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataA_5, (MR_Integer) 6)));
    MR_Word ProcVarMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataB_6, (MR_Integer) 0)));
    MR_Word ProcLayoutMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataB_6, (MR_Integer) 1)));
    MR_Word ClosureLayoutsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataB_6, (MR_Integer) 2)));
    MR_Integer TSStringSlotCounterB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalDataB_6, (MR_Integer) 3)));
    MR_Word TSRevStringTableB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataB_6, (MR_Integer) 4)));
    MR_Word StaticCellInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataB_6, (MR_Integer) 5)));
    MR_Word AllocSitesB_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalDataB_6, (MR_Integer) 6)));
    MR_Word ProcVarMap_23;
    MR_Word ProcLayoutMap_24;
    MR_Word ClosureLayouts_25;
    MR_Word TSRevStringTable_26;
    MR_Integer TSStringSlotCounter_27;
    MR_Word MaybeTSStringTableRemap_28;
    MR_Word StaticCellInfo_29;
    MR_Word StaticCellRemap_30;
    MR_Word AllocSites_31;

    ProcVarMap_23 = mercury__map__old_merge_2_f_0(TypeCtorInfo_32_32, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ProcVarMapA_9, ProcVarMapB_16);
    ProcLayoutMap_24 = mercury__map__old_merge_2_f_0(TypeCtorInfo_32_32, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ProcLayoutMapA_10, ProcLayoutMapB_17);
    ClosureLayouts_25 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ClosureLayoutsA_11, ClosureLayoutsB_18);
    if ((TSRevStringTableA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        TSRevStringTable_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        TSStringSlotCounter_27 = (MR_Integer) 0;
        MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        TSRevStringTable_26 = TSRevStringTableB_20;
        TSStringSlotCounter_27 = TSStringSlotCounterB_19;
        MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
    if ((TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      TSRevStringTable_26 = TSRevStringTableA_13;
      TSStringSlotCounter_27 = TSStringSlotCounterA_12;
      MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      TSRevStringTable_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TSRevStringTableB_20, TSRevStringTableA_13);
      TSStringSlotCounter_27 = (TSStringSlotCounterA_12 + TSStringSlotCounterB_19);
      {
        MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTSStringTableRemap_28, 0) = ((MR_Box) (TSStringSlotCounterA_12));
      }
    }
    ll_backend__global_data__merge_static_cell_infos_4_p_0(StaticCellInfoA_14, StaticCellInfoB_21, &StaticCellInfo_29, &StaticCellRemap_30);
    mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, AllocSitesA_15, AllocSitesB_22, &AllocSites_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcVarMap_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcLayoutMap_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ClosureLayouts_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TSStringSlotCounter_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TSRevStringTable_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (StaticCellInfo_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (AllocSites_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *GlobalDataRemap_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeTSStringTableRemap_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StaticCellRemap_30));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_VectorCellGroupMap_12;

    ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv10_STATE_VARIABLE_VectorCellGroupMap_12);
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_VectorCellGroupMap_12));
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ScalarCellGroupMap_19;
    MR_Word conv6_STATE_VARIABLE_Remap_21;

    ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv7_STATE_VARIABLE_ScalarCellGroupMap_19, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_Remap_21);
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ScalarCellGroupMap_19));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Remap_21));
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TypeCounter_18;
    MR_Word conv1_STATE_VARIABLE_CellTypeNumMap_20;
    MR_Word conv0_STATE_VARIABLE_TypeNumRemap_22;

    ll_backend__global_data__merge_cell_type_num_maps_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_STATE_VARIABLE_TypeCounter_18, ((MR_Word) wrapper_arg_5), &conv1_STATE_VARIABLE_CellTypeNumMap_20, ((MR_Word) wrapper_arg_7), &conv0_STATE_VARIABLE_TypeNumRemap_22);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TypeCounter_18));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_CellTypeNumMap_20));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_TypeNumRemap_22));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__811__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
  MR_Word SCIa_5,
  MR_Word SCIb_6,
  MR_Word * SCI_7,
  MR_Word * Remap_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_41_41;
    MR_Word TypeCtorInfo_19_59;
    MR_Word SubInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIa_5, (MR_Integer) 0)));
    MR_Word TypeCounterA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIa_5, (MR_Integer) 1)));
    MR_Word CellTypeNumMapA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIa_5, (MR_Integer) 2)));
    MR_Word ScalarCellGroupMapA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIa_5, (MR_Integer) 3)));
    MR_Word VectorCellGroupMapA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIa_5, (MR_Integer) 4)));
    MR_Word SubInfoB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIb_6, (MR_Integer) 0)));
    MR_Word CellTypeNumMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIb_6, (MR_Integer) 2)));
    MR_Word ScalarCellGroupMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIb_6, (MR_Integer) 3)));
    MR_Word VectorCellGroupMapB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIb_6, (MR_Integer) 4)));
    MR_Word TypeCounter_19;
    MR_Word CellTypeNumMap_20;
    MR_Word CellTypeNumMapRemap_21;
    MR_Word ScalarCellGroupMap_22;
    MR_Word ScalarCellGroupRemap_23;
    MR_Word VectorCellGroupMap_24;
    MR_Word SCI0_25;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_68;
    MR_Word _TypeCounterB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), SCIb_6, (MR_Integer) 1)));
    MR_Box conv5_TypeCounter_19;
    MR_Box conv4_CellTypeNumMap_20;
    MR_Box conv3_CellTypeNumMapRemap_21;
    MR_Box conv9_ScalarCellGroupMap_22;
    MR_Box conv8_ScalarCellGroupRemap_23;
    MR_Box conv11_VectorCellGroupMap_24;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (SubInfoA_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (SubInfoB_14));
    }
    mercury__require__expect_4_p_0(Var_26, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_static_cell_infos\'/4", (MR_String) "mismatch");
    TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    Var_31 = mercury__map__init_0_f_0(TypeCtorInfo_41_41, TypeCtorInfo_41_41);
    mercury__bimap__foldl3_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, TypeCtorInfo_41_41, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__global_data_scalar_common_1[1], (MR_Word) &ll_backend__global_data_scalar_common_1[2], (MR_Word) &ll_backend__global_data_scalar_common_1[12], CellTypeNumMapB_16, ((MR_Box) (TypeCounterA_10)), &conv5_TypeCounter_19, ((MR_Box) (CellTypeNumMapA_11)), &conv4_CellTypeNumMap_20, ((MR_Box) (Var_31)), &conv3_CellTypeNumMapRemap_21);
    TypeCounter_19 = ((MR_Word) conv5_TypeCounter_19);
    CellTypeNumMap_20 = ((MR_Word) conv4_CellTypeNumMap_20);
    CellTypeNumMapRemap_21 = ((MR_Word) conv3_CellTypeNumMapRemap_21);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (CellTypeNumMapRemap_21));
    }
    TypeCtorInfo_19_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    Var_52 = mercury__map__init_0_f_0(TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data_scalar_common_1[3]);
    mercury__map__foldl2_6_p_0(TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[4], (MR_Word) &ll_backend__global_data_scalar_common_1[5], Var_51, ScalarCellGroupMapB_17, ((MR_Box) (ScalarCellGroupMapA_12)), &conv9_ScalarCellGroupMap_22, ((MR_Box) (Var_52)), &conv8_ScalarCellGroupRemap_23);
    ScalarCellGroupMap_22 = ((MR_Word) conv9_ScalarCellGroupMap_22);
    ScalarCellGroupRemap_23 = ((MR_Word) conv8_ScalarCellGroupRemap_23);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (CellTypeNumMapRemap_21));
    }
    mercury__map__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[7], Var_68, VectorCellGroupMapB_18, ((MR_Box) (VectorCellGroupMapA_13)), &conv11_VectorCellGroupMap_24);
    VectorCellGroupMap_24 = ((MR_Word) conv11_VectorCellGroupMap_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Remap_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CellTypeNumMapRemap_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ScalarCellGroupRemap_23));
    }
    {
      SCI0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SCI0_25, 0) = ((MR_Box) (SubInfoA_9));
      MR_hl_field(MR_mktag(0), SCI0_25, 1) = ((MR_Box) (TypeCounter_19));
      MR_hl_field(MR_mktag(0), SCI0_25, 2) = ((MR_Box) (CellTypeNumMap_20));
      MR_hl_field(MR_mktag(0), SCI0_25, 3) = ((MR_Box) (ScalarCellGroupMap_22));
      MR_hl_field(MR_mktag(0), SCI0_25, 4) = ((MR_Box) (VectorCellGroupMap_24));
    }
    ll_backend__global_data__remap_static_cell_info_3_p_0(*Remap_8, SCI0_25, SCI_7);
  }
}

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_VectorCellGroup_10;

    ll_backend__global_data__remap_vector_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_VectorCellGroup_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_VectorCellGroup_10));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ScalarCellGroup_9;

    ll_backend__global_data__remap_scalar_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_ScalarCellGroup_9);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ScalarCellGroup_9));
  }
}

static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
  MR_Word Remap_4,
  MR_Word STATE_VARIABLE_SCI_0_10,
  MR_Word * STATE_VARIABLE_SCI_11)
{
  {
    MR_Word TypeCtorInfo_36_36;
    MR_Word TypeCtorInfo_37_37;
    MR_Word TypeCtorInfo_40_40;
    MR_Word ScalarMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
    MR_Word VectorMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
    MR_Word ScalarMap_8;
    MR_Word VectorMap_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
    MR_Word Var_27;
    MR_Word Var_28;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_36_36 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
    TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_36_36, TypeCtorInfo_36_36, TypeCtorInfo_37_37, Var_12, ScalarMap0_6, &ScalarMap_8);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Remap_4));
    }
    TypeCtorInfo_40_40 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0;
    mercury__map__map_values_only_3_p_0(TypeCtorInfo_40_40, TypeCtorInfo_40_40, TypeCtorInfo_37_37, Var_13, VectorMap0_7, &VectorMap_9);
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SCI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ScalarMap_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VectorMap_9));
    }
  }
}

void MR_CALL 
ll_backend__global_data__bump_type_num_counter_3_p_0(
  MR_Integer Increment_4,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word Counter0_6;
    MR_Integer N_7;
    MR_Word Counter_9;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Integer Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Integer Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_8;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_34;

    Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 3)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4)));
    mercury__counter__allocate_3_p_0(&N_7, Counter0_6, &Var_8);
    Var_13 = (N_7 + Increment_4);
    Counter_9 = mercury__counter__init_1_f_0(Var_13);
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 3)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 4)));
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Counter_9));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
    }
  }
}

MR_Word MR_CALL 
ll_backend__global_data__rval_type_as_arg_4_f_0(
  MR_Word UnboxedFloat_6,
  MR_Word UnboxedInt64s_7,
  MR_Word ArgWidth_8,
  MR_Word Rval_9)
{
  {
    MR_Word Type_10;

    ll_backend__global_data__natural_type_5_p_0(UnboxedFloat_6, UnboxedInt64s_7, ArgWidth_8, Rval_9, &Type_10);
    return Type_10;
  }
}

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Arrays_12;

    ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_STATE_VARIABLE_Arrays_12);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Arrays_12));
  }
}

static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Arrays_14;

    ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Arrays_14);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Arrays_14));
  }
}

void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0(
  MR_Word Info_4,
  MR_Word * ScalarDatas_5,
  MR_Word * VectorDatas_6)
{
  {
    MR_Word TypeCtorInfo_32_32;
    MR_Word TypeNumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    MR_Word RevScalarDatas_8;
    MR_Word RevVectorDatas_9;
    MR_Word Var_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    MR_Box conv1_RevScalarDatas_8;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv3_RevVectorDatas_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeNumMap_7));
    }
    TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    mercury__map__foldl_4_p_0(TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[1], Var_10, Var_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_RevScalarDatas_8);
    RevScalarDatas_8 = ((MR_Word) conv1_RevScalarDatas_8);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0, RevScalarDatas_8, ScalarDatas_5);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeNumMap_7));
    }
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    mercury__map__foldl_4_p_0(TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], Var_13, Var_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_RevVectorDatas_9);
    RevVectorDatas_9 = ((MR_Word) conv3_RevVectorDatas_9);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0, RevVectorDatas_9, VectorDatas_6);
  }
}

MR_bool MR_CALL 
ll_backend__global_data__search_scalar_static_cell_offset_4_p_0(
  MR_Word Info_5,
  MR_Word DataId_6,
  MR_Integer Offset_7,
  MR_Word * Rval_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) DataId_6)) == (MR_mktag((MR_Integer) 2)));
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeCtorInfo_24_24;
    MR_Word TypeCtorInfo_25_25;
    MR_Word TypeNum_9;
    MR_Word CellGroupMap_11;
    MR_Word CellGroup_12;
    MR_Word CellGroupMembers_13;
    MR_Word Rvals_14;
    MR_Integer _CellNum_10;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv0_CellGroup_12;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv1_Rvals_14;
    MR_Box conv2_Rval_8;

    if (succeeded)
    {
      TypeNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), DataId_6, (MR_Integer) 0)));
      _CellNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), DataId_6, (MR_Integer) 1)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
      CellGroupMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
      TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
      TypeCtorInfo_22_22 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
      mercury__map__lookup_3_p_0(TypeCtorInfo_21_21, TypeCtorInfo_22_22, CellGroupMap_11, ((MR_Box) (TypeNum_9)), &conv0_CellGroup_12);
      CellGroup_12 = ((MR_Word) conv0_CellGroup_12);
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_12, (MR_Integer) 0)));
      CellGroupMembers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_12, (MR_Integer) 1)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_12, (MR_Integer) 2)));
      TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[0];
      TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
      mercury__bimap__reverse_lookup_3_p_0(TypeInfo_23_23, TypeCtorInfo_24_24, CellGroupMembers_13, &conv1_Rvals_14, ((MR_Box) (DataId_6)));
      Rvals_14 = ((MR_Word) conv1_Rvals_14);
      TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
      mercury__list__det_index0_3_p_0(TypeCtorInfo_25_25, Rvals_14, Offset_7, &conv2_Rval_8);
      *Rval_8 = ((MR_Word) conv2_Rval_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = ll_backend__global_data__pair_vector_element_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__544__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__543__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0(
  MR_Word LLDSTypes_6,
  MR_Word VectorData_7,
  MR_Word * DataId_8,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word CellType_10;
    MR_Word VectorCells_11;
    MR_Word TypeNumMap0_13;
    MR_Word CellGroupMap0_14;
    MR_Word TypeNum_16;
    MR_Word CellNumCounter0_21;
    MR_Integer CellNum_22;
    MR_Word CellNumCounter_23;
    MR_Word CellMap0_24;
    MR_Word VectorContents_25;
    MR_Word CellMap_26;
    MR_Word CellGroupMap_27;
    MR_Word Var_30;
    MR_Word Var_34;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_CellGroup_40_40;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_CellGroup_44_44;
    MR_Word STATE_VARIABLE_CellGroup_45_45;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word TypeNumPrime_15;
    MR_Box conv1_TypeNumPrime_15;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;

    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (LLDSTypes_6));
    }
    mercury__require__expect_4_p_0(Var_30, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.add_vector_static_cell\'/5", (MR_String) "no types");
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (VectorData_7));
    }
    mercury__require__expect_4_p_0(Var_34, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.add_vector_static_cell\'/5", (MR_String) "no data");
    {
      CellType_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CellType_10, 0) = ((MR_Box) (LLDSTypes_6));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (LLDSTypes_6));
    }
    VectorCells_11 = mercury__list__map_2_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, Var_38, VectorData_7);
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
    TypeNumMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
    CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
    succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, TypeNumMap0_13, ((MR_Box) (CellType_10)), &conv1_TypeNumPrime_15);
    if (succeeded)
    {
      TypeNumPrime_15 = ((MR_Word) conv1_TypeNumPrime_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_CellGroup_39_39;
      MR_Box conv2_STATE_VARIABLE_CellGroup_39_39;

      TypeNum_16 = TypeNumPrime_15;
      succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, CellGroupMap0_14, ((MR_Box) (TypeNum_16)), &conv2_STATE_VARIABLE_CellGroup_39_39);
      if (succeeded)
      {
        STATE_VARIABLE_CellGroup_39_39 = ((MR_Word) conv2_STATE_VARIABLE_CellGroup_39_39);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        STATE_VARIABLE_CellGroup_40_40 = STATE_VARIABLE_CellGroup_39_39;
      else
        STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__init_vector_cell_group_0_f_0();
      STATE_VARIABLE_Info_42_42 = STATE_VARIABLE_Info_0_28;
    }
    else
    {
      MR_Word TypeNumCounter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
      MR_Integer TypeNum0_18;
      MR_Word TypeNumCounter_19;
      MR_Word TypeNumMap_20;
      MR_Word STATE_VARIABLE_Info_41_41;
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
      MR_Word Var_59;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_60;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_66;

      mercury__counter__allocate_3_p_0(&TypeNum0_18, TypeNumCounter0_17, &TypeNumCounter_19);
      TypeNum_16 = (MR_Word) TypeNum0_18;
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
      {
        STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (TypeNumCounter_19));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 3) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, 4) = ((MR_Box) (Var_63));
      }
      mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (CellType_10)), ((MR_Box) (TypeNum_16)), TypeNumMap0_13, &TypeNumMap_20);
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
      {
        STATE_VARIABLE_Info_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, 1) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, 2) = ((MR_Box) (TypeNumMap_20));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, 3) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, 4) = ((MR_Box) (Var_68));
      }
      STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__init_vector_cell_group_0_f_0();
    }
    CellNumCounter0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 0)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 1)));
    mercury__counter__allocate_3_p_0(&CellNum_22, CellNumCounter0_21, &CellNumCounter_23);
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 0)));
    CellMap0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 1)));
    {
      STATE_VARIABLE_CellGroup_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_44_44, 0) = ((MR_Box) (CellNumCounter_23));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_44_44, 1) = ((MR_Box) (CellMap0_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *DataId_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TypeNum_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CellNum_22));
    }
    VectorContents_25 = (MR_Word) VectorCells_11;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, CellNum_22, ((MR_Box) (VectorContents_25)), CellMap0_24, &CellMap_26);
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_44_44, (MR_Integer) 0)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_44_44, (MR_Integer) 1)));
    {
      STATE_VARIABLE_CellGroup_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_45_45, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_45_45, 1) = ((MR_Box) (CellMap_26));
    }
    mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (TypeNum_16)), ((MR_Box) (STATE_VARIABLE_CellGroup_45_45)), CellGroupMap0_14, &CellGroupMap_27);
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 0)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_29 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CellGroupMap_27));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_4;

    Var_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_4 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_4));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
ll_backend__global_data__find_general_llds_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_10;

    ll_backend__global_data__natural_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_Type_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_10));
  }
}

MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_5_p_0(
  MR_Word UnboxFloat_6,
  MR_Word UnboxInt64s_7,
  MR_Word Types_8,
  MR_Word HeadVar__4_4,
  MR_Word * LLDSTypes_11)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word Vector_9;
    MR_Word Vectors_10;
    MR_Word ArgWidth_12;
    MR_Word LLDSTypes0_13;
    MR_Word Var_14;

    if (succeeded)
    {
      Vector_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      Vectors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      ArgWidth_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TypeCtorInfo_17_17 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
      TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ll_backend__global_data__find_general_llds_types_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (UnboxFloat_6));
        MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (UnboxInt64s_7));
        MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (ArgWidth_12));
      }
      mercury__list__map_3_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, Var_14, Vector_9, &LLDSTypes0_13);
      succeeded = ll_backend__global_data__find_general_llds_types_2_6_p_0(UnboxFloat_6, UnboxInt64s_7, Types_8, Vectors_10, LLDSTypes0_13, LLDSTypes_11);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_LLDSTypes_0_5,
  MR_Word * STATE_VARIABLE_LLDSTypes_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_LLDSTypes_6 = STATE_VARIABLE_LLDSTypes_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Vector_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Vectors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_LLDSTypes_21_21;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_LLDSTypes_0_5;

      succeeded = ll_backend__global_data__find_general_llds_types_in_cell_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Vector_16, STATE_VARIABLE_LLDSTypes_0_5, &STATE_VARIABLE_LLDSTypes_21_21);
      if (succeeded)
      {
        // direct tailcall eliminated
        next_value_of_HeadVar__4_4 = Vectors_17;
        next_value_of_STATE_VARIABLE_LLDSTypes_0_5 = STATE_VARIABLE_LLDSTypes_21_21;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_LLDSTypes_0_5 = next_value_of_STATE_VARIABLE_LLDSTypes_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Rval_13;
      MR_Word Rvals_14;
      MR_Word LLDSType0_15;
      MR_Word LLDSTypes0_16;
      MR_Word LLDSType_17;
      MR_Word LLDSTypes_18;
      MR_Word ArgWidth_19;
      MR_Word NaturalType_20;
      MR_Word _Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
        Rvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          LLDSType0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
          LLDSTypes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
          ArgWidth_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__global_data__natural_type_5_p_0(HeadVar__1_1, HeadVar__2_2, ArgWidth_19, Rval_13, &NaturalType_20);
          succeeded = ll_backend__llds____Unify____llds_type_0_0(NaturalType_20, LLDSType0_15);
          if (succeeded)
          {
            LLDSType_17 = LLDSType0_15;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_21;

            succeeded = (LLDSType0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) NaturalType_20)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), NaturalType_20, (MR_Integer) 0)));
                succeeded = (Var_21 == (MR_Integer) 0);
              }
            }
            if (succeeded)
            {
              LLDSType_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_22;

              succeeded = (NaturalType_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) LLDSType0_15)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), LLDSType0_15, (MR_Integer) 0)));
                  succeeded = (Var_22 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    LLDSType_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            succeeded = ll_backend__global_data__find_general_llds_types_in_cell_6_p_0(HeadVar__1_1, HeadVar__2_2, Types_12, Rvals_14, LLDSTypes0_16, &LLDSTypes_18);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LLDSType_17));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LLDSTypes_18));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data__natural_type_5_p_0(
  MR_Word UnboxFloat_6,
  MR_Word UnboxInt64s_7,
  MR_Word ArgWidth_8,
  MR_Word Rval_9,
  MR_Word * Type_10)
{
  {
    MR_bool succeeded;
    MR_Word Type0_11;

    ll_backend__llds__rval_type_2_p_0(Rval_9, &Type0_11);
    succeeded = (Type0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    if (succeeded)
    {
      succeeded = (UnboxFloat_6 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (ArgWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      *Type_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
    else
    {
      MR_Word Var_14;

      succeeded = ((MR_tag((MR_Word) Type0_11)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 0)));
        switch (Var_14) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 8:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 9:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          succeeded = (UnboxInt64s_7 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (ArgWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            succeeded = !(succeeded);
          }
        }
      }
      if (succeeded)
        *Type_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
      else
        *Type_10 = Type0_11;
    }
  }
}

static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;
    MR_Word conv0_STATE_VARIABLE_Map_12;

    ll_backend__global_data__make_alloc_id_map_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Map_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Map_12));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(
  MR_Word GlobalData_4,
  MR_Word * AllocSites_5,
  MR_Word * AllocIdMap_6)
{
  {
    MR_Word TypeCtorInfo_18_18 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0;
    MR_Word AllocSitesSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 6)));
    MR_Word Var_11;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 2)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 5)));
    MR_Integer _Slot_8;
    MR_Box conv3__Slot_8;
    MR_Box conv2_AllocIdMap_6;

    *AllocSites_5 = mercury__set_tree234__to_sorted_list_1_f_0(TypeCtorInfo_18_18, AllocSitesSet_7);
    Var_11 = mercury__map__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0);
    mercury__list__foldl2_6_p_0(TypeCtorInfo_18_18, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data_scalar_common_1[0], (MR_Word) &ll_backend__global_data_scalar_common_1[11], *AllocSites_5, ((MR_Box) ((MR_Integer) 0)), &conv3__Slot_8, ((MR_Box) (Var_11)), &conv2_AllocIdMap_6);
    _Slot_8 = ((MR_Integer) conv3__Slot_8);
    *AllocIdMap_6 = ((MR_Word) conv2_AllocIdMap_6);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(
  MR_Word NewAllocSites_4,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word AllocSites0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word AllocSites_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, NewAllocSites_4, AllocSites0_6, &AllocSites_7);
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (AllocSites_7));
    }
  }
}

static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    ll_backend__global_data__associate_natural_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(
  MR_Word Args_5,
  MR_Word * DataId_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word UnboxFloat_8;
    MR_Word UnboxInt64s_9;
    MR_Word TypedArgs_11;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
    MR_Word Var_16;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    MR_Word Var_24;

    UnboxFloat_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)))) & (MR_Integer) 1);
    UnboxInt64s_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (UnboxFloat_8));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (UnboxInt64s_9));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, Var_16, Args_5, &TypedArgs_11);
    ll_backend__global_data__add_scalar_static_cell_4_p_0(TypedArgs_11, DataId_6, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
  }
}

void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_4_p_0(
  MR_Word TypedArgs0_5,
  MR_Word * DataId_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word TypedArgs_8;
    MR_Word CellType_11;
    MR_Word CellTypeAndValue_12;
    MR_Word TypeGroups_29;
    MR_Word TypeAndArgGroups_30;
    MR_Word TypeCtorInfo_20_39;
    MR_Word TypeCtorInfo_21_40;
    MR_Word FirstArg_26;
    MR_Word FirstArgType_27;
    MR_Word LaterTypedArgs_28;
    MR_Integer OldLength_31;
    MR_Integer NewLength_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;
    MR_Integer Var_37;

    if ((TypedArgs0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      TypedArgs_8 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__global_data_scalar_common_2[10]);
    else
      TypedArgs_8 = TypedArgs0_5;
    succeeded = ((MR_tag((MR_Word) TypedArgs_8)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypedArgs_8, (MR_Integer) 0)));
      LaterTypedArgs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypedArgs_8, (MR_Integer) 1)));
      FirstArg_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0)));
      FirstArgType_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1)));
      Var_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (FirstArg_26));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
      }
      succeeded = ll_backend__global_data__threshold_group_types_5_p_0(FirstArgType_27, Var_34, LaterTypedArgs_28, &TypeGroups_29, &TypeAndArgGroups_30);
      if (succeeded)
      {
        TypeCtorInfo_20_39 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
        OldLength_31 = mercury__list__length_1_f_0(TypeCtorInfo_20_39, TypedArgs_8);
        TypeCtorInfo_21_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
        NewLength_32 = mercury__list__length_1_f_0(TypeCtorInfo_21_40, TypeAndArgGroups_30);
        Var_37 = (MR_Integer) 2;
        Var_36 = (NewLength_32 * Var_37);
        succeeded = (OldLength_31 >= Var_36);
      }
    }
    if (succeeded)
    {
      {
        CellType_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CellType_11, 0) = ((MR_Box) (TypeGroups_29));
      }
      {
        CellTypeAndValue_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CellTypeAndValue_12, 0) = ((MR_Box) (TypeAndArgGroups_30));
      }
    }
    else
    {
      MR_Word Var_38;

      Var_38 = ll_backend__llds__typed_rvals_project_types_1_f_0(TypedArgs_8);
      {
        CellType_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CellType_11, 0) = ((MR_Box) (Var_38));
      }
      {
        CellTypeAndValue_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CellTypeAndValue_12, 0) = ((MR_Box) (TypedArgs_8));
      }
    }
    ll_backend__global_data__do_add_scalar_static_cell_6_p_0(TypedArgs_8, CellType_11, CellTypeAndValue_12, DataId_6, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
  MR_Word CurType_6,
  MR_Word RevArgsSoFar_7,
  MR_Word LaterArgsTypes_8,
  MR_Word * TypeGroups_9,
  MR_Word * TypeAndArgGroups_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((LaterArgsTypes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeGroup_11;
      MR_Word TypeAndArgGroup_12;
      MR_Word Arg_35;
      MR_Word Var_38;

      succeeded = ((MR_tag((MR_Word) RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Arg_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), RevArgsSoFar_7, (MR_Integer) 0)));
        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), RevArgsSoFar_7, (MR_Integer) 1)));
        succeeded = (Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      if (succeeded)
      {
        {
          TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeGroup_11, 0) = ((MR_Box) (CurType_6));
          MR_hl_field(MR_mktag(0), TypeGroup_11, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          TypeAndArgGroup_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TypeAndArgGroup_12, 0) = ((MR_Box) (CurType_6));
          MR_hl_field(MR_mktag(1), TypeAndArgGroup_12, 1) = ((MR_Box) (Arg_35));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_14_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
        MR_Integer NumArgs_36;
        MR_Word Args_37;

        mercury__list__length_2_p_0(TypeCtorInfo_14_40, RevArgsSoFar_7, &NumArgs_36);
        mercury__list__reverse_2_p_0(TypeCtorInfo_14_40, RevArgsSoFar_7, &Args_37);
        {
          TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeGroup_11, 0) = ((MR_Box) (CurType_6));
          MR_hl_field(MR_mktag(0), TypeGroup_11, 1) = ((MR_Box) (NumArgs_36));
        }
        {
          TypeAndArgGroup_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeAndArgGroup_12, 0) = ((MR_Box) (CurType_6));
          MR_hl_field(MR_mktag(0), TypeAndArgGroup_12, 1) = ((MR_Box) (NumArgs_36));
          MR_hl_field(MR_mktag(0), TypeAndArgGroup_12, 2) = ((MR_Box) (Args_37));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *TypeGroups_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeGroup_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *TypeAndArgGroups_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAndArgGroup_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word NextArg_13;
      MR_Word NextType_14;
      MR_Word MoreArgsTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterArgsTypes_8, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterArgsTypes_8, (MR_Integer) 0)));

      NextArg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
      NextType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      succeeded = ll_backend__llds____Unify____llds_type_0_0(CurType_6, NextType_14);
      if (succeeded)
      {
        MR_Word Var_19;
        MR_Word next_value_of_RevArgsSoFar_7;
        MR_Word next_value_of_LaterArgsTypes_8;

        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (NextArg_13));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (RevArgsSoFar_7));
        }
        // direct tailcall eliminated
        next_value_of_RevArgsSoFar_7 = Var_19;
        next_value_of_LaterArgsTypes_8 = MoreArgsTypes_15;
        RevArgsSoFar_7 = next_value_of_RevArgsSoFar_7;
        LaterArgsTypes_8 = next_value_of_LaterArgsTypes_8;
        continue;
      }
      else
      {
        MR_Word TypeGroupsTail_16;
        MR_Word TypeAndArgGroupsTail_17;
        MR_Word Var_20;
        MR_Word TypeGroup_24;
        MR_Word TypeAndArgGroup_25;
        MR_Word Arg_45;
        MR_Word Var_48;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (NextArg_13));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        succeeded = ll_backend__global_data__threshold_group_types_5_p_0(NextType_14, Var_20, MoreArgsTypes_15, &TypeGroupsTail_16, &TypeAndArgGroupsTail_17);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Arg_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), RevArgsSoFar_7, (MR_Integer) 0)));
            Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), RevArgsSoFar_7, (MR_Integer) 1)));
            succeeded = (Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if (succeeded)
          {
            {
              TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeGroup_24, 0) = ((MR_Box) (CurType_6));
              MR_hl_field(MR_mktag(0), TypeGroup_24, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              TypeAndArgGroup_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeAndArgGroup_25, 0) = ((MR_Box) (CurType_6));
              MR_hl_field(MR_mktag(1), TypeAndArgGroup_25, 1) = ((MR_Box) (Arg_45));
            }
          }
          else
          {
            MR_Word TypeCtorInfo_14_50 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
            MR_Integer NumArgs_46;
            MR_Word Args_47;

            mercury__list__length_2_p_0(TypeCtorInfo_14_50, RevArgsSoFar_7, &NumArgs_46);
            mercury__list__reverse_2_p_0(TypeCtorInfo_14_50, RevArgsSoFar_7, &Args_47);
            {
              TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeGroup_24, 0) = ((MR_Box) (CurType_6));
              MR_hl_field(MR_mktag(0), TypeGroup_24, 1) = ((MR_Box) (NumArgs_46));
            }
            {
              TypeAndArgGroup_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeAndArgGroup_25, 0) = ((MR_Box) (CurType_6));
              MR_hl_field(MR_mktag(0), TypeAndArgGroup_25, 1) = ((MR_Box) (NumArgs_46));
              MR_hl_field(MR_mktag(0), TypeAndArgGroup_25, 2) = ((MR_Box) (Args_47));
            }
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *TypeGroups_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeGroup_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeGroupsTail_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *TypeAndArgGroups_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAndArgGroup_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeAndArgGroupsTail_17));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
  MR_Word TypedArgs_7,
  MR_Word CellType_8,
  MR_Word CellValue_9,
  MR_Word * DataId_10,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;
    MR_Word Args_12;
    MR_Word TypeNumMap0_14;
    MR_Word CellGroupMap0_15;
    MR_Word TypeNum_17;
    MR_Word InsertCommonData_22;
    MR_Word STATE_VARIABLE_CellGroup_38_38;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word Var_42;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word OldTypeNum_16;
    MR_Box conv0_OldTypeNum_16;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_155;

    Args_12 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(TypedArgs_7);
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
    TypeNumMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
    CellGroupMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
    succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, TypeNumMap0_14, ((MR_Box) (CellType_8)), &conv0_OldTypeNum_16);
    if (succeeded)
    {
      OldTypeNum_16 = ((MR_Word) conv0_OldTypeNum_16);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_CellGroup_37_37;
      MR_Box conv1_STATE_VARIABLE_CellGroup_37_37;

      TypeNum_17 = OldTypeNum_16;
      succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, CellGroupMap0_15, ((MR_Box) (TypeNum_17)), &conv1_STATE_VARIABLE_CellGroup_37_37);
      if (succeeded)
      {
        STATE_VARIABLE_CellGroup_37_37 = ((MR_Word) conv1_STATE_VARIABLE_CellGroup_37_37);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        STATE_VARIABLE_CellGroup_38_38 = STATE_VARIABLE_CellGroup_37_37;
      else
        STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
      STATE_VARIABLE_Info_40_40 = STATE_VARIABLE_Info_0_35;
    }
    else
    {
      MR_Word TypeNumCounter0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
      MR_Integer TypeRawNum_19;
      MR_Word TypeNumCounter_20;
      MR_Word TypeNumMap_21;
      MR_Word STATE_VARIABLE_Info_39_39;
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
      MR_Word Var_87;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_88;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_94;

      mercury__counter__allocate_3_p_0(&TypeRawNum_19, TypeNumCounter0_18, &TypeNumCounter_20);
      TypeNum_17 = (MR_Word) TypeRawNum_19;
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
      Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
      {
        STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (TypeNumCounter_20));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_91));
      }
      mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (CellType_8)), ((MR_Box) (TypeNum_17)), TypeNumMap0_14, &TypeNumMap_21);
      Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
      Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
      Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
      Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
      {
        STATE_VARIABLE_Info_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 1) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 2) = ((MR_Box) (TypeNumMap_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 3) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, 4) = ((MR_Box) (Var_96));
      }
      STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
    }
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0)));
    Var_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    InsertCommonData_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
    Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
    Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
    switch (InsertCommonData_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DataIdPrime_34;
          MR_Box conv2_DataIdPrime_34;

          succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, Var_156, ((MR_Box) (Args_12)), &conv2_DataIdPrime_34);
          if (succeeded)
          {
            DataIdPrime_34 = ((MR_Word) conv2_DataIdPrime_34);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            *DataId_10 = DataIdPrime_34;
            *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_40_40;
          }
          else
          {
            MR_Word CellNumCounter0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
            MR_Integer CellNum_54;
            MR_Word CellNumCounter_55;
            MR_Word RevArray0_56;
            MR_Word RevArray_57;
            MR_Word CellGroupMap_58;
            MR_Word STATE_VARIABLE_CellGroup_48_59;
            MR_Word Var_129;
            MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
            MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
            MR_Word Var_128;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_140;
            MR_Word Var_139;

            mercury__counter__allocate_3_p_0(&CellNum_54, CellNumCounter0_53, &CellNumCounter_55);
            Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
            Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
            RevArray0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *DataId_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (TypeNum_17));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (CellNum_54));
            }
            {
              RevArray_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RevArray_57, 0) = ((MR_Box) (CellValue_9));
              MR_hl_field(MR_mktag(1), RevArray_57, 1) = ((MR_Box) (RevArray0_56));
            }
            {
              STATE_VARIABLE_CellGroup_48_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_48_59, 0) = ((MR_Box) (CellNumCounter_55));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_48_59, 1) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_48_59, 2) = ((MR_Box) (RevArray_57));
            }
            mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (TypeNum_17)), ((MR_Box) (STATE_VARIABLE_CellGroup_48_59)), CellGroupMap0_15, &CellGroupMap_58);
            Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
            Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
            Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
            Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
            Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_36 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_136));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_137));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_138));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CellGroupMap_58));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_140));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer CellNum_25;
          MR_Word CellNumCounter_26;
          MR_Word NewDataId_27;
          MR_Word MaybeOldDataId_28;
          MR_Word MembersMap_29;

          mercury__counter__allocate_3_p_0(&CellNum_25, Var_157, &CellNumCounter_26);
          {
            NewDataId_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), NewDataId_27, 0) = ((MR_Box) (TypeNum_17));
            MR_hl_field(MR_mktag(2), NewDataId_27, 1) = ((MR_Box) (CellNum_25));
          }
          mercury__bimap__search_insert_5_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ((MR_Box) (Args_12)), ((MR_Box) (NewDataId_27)), &MaybeOldDataId_28, Var_156, &MembersMap_29);
          if ((MaybeOldDataId_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word RevArray0_31;
            MR_Word RevArray_32;
            MR_Word CellGroupMap_33;
            MR_Word STATE_VARIABLE_CellGroup_48_50;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_119;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_123;
            MR_Word Var_122;

            *DataId_10 = NewDataId_27;
            Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
            Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
            Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
            Var_111 = CellNumCounter_26;
            RevArray0_31 = Var_110;
            {
              RevArray_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RevArray_32, 0) = ((MR_Box) (CellValue_9));
              MR_hl_field(MR_mktag(1), RevArray_32, 1) = ((MR_Box) (RevArray0_31));
            }
            {
              STATE_VARIABLE_CellGroup_48_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_48_50, 0) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_48_50, 1) = ((MR_Box) (MembersMap_29));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_48_50, 2) = ((MR_Box) (RevArray_32));
            }
            mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (TypeNum_17)), ((MR_Box) (STATE_VARIABLE_CellGroup_48_50)), CellGroupMap0_15, &CellGroupMap_33);
            Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
            Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
            Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
            Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
            Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_36 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CellGroupMap_33));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_123));
            }
          }
          else
          {
            *DataId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOldDataId_28, (MR_Integer) 0)));
            *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_40_40;
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
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_4;

    Var_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_4 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
ll_backend__global_data__init_static_cell_info_4_f_0(
  MR_Word BaseName_6,
  MR_Word UnboxFloat_7,
  MR_Word UnboxInt64s_8,
  MR_Word CommonData_9)
{
  {
    MR_Word Info0_10;
    MR_Word TypeCtorInfo_18_18;
    MR_Word SubInfo0_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    {
      SubInfo0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo0_11, 0) = ((MR_Box) (BaseName_6));
      MR_hl_field(MR_mktag(0), SubInfo0_11, 1) = ((MR_Box) ((UnboxFloat_7 | ((((UnboxInt64s_8 << (MR_Integer) 1)) | ((CommonData_9 << (MR_Integer) 2)))))));
    }
    Var_12 = mercury__counter__init_1_f_0((MR_Integer) 0);
    TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
    Var_14 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, TypeCtorInfo_18_18);
    Var_15 = mercury__map__init_0_f_0(TypeCtorInfo_18_18, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0);
    Var_16 = mercury__map__init_0_f_0(TypeCtorInfo_18_18, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0);
    {
      Info0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_10, 0) = ((MR_Box) (SubInfo0_11));
      MR_hl_field(MR_mktag(0), Info0_10, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Info0_10, 2) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Info0_10, 3) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Info0_10, 4) = ((MR_Box) (Var_16));
    }
    return Info0_10;
  }
}

void MR_CALL 
ll_backend__global_data__global_data_set_static_cell_info_3_p_0(
  MR_Word StaticCellInfo_4,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (StaticCellInfo_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_static_cell_info_2_p_0(
  MR_Word GlobalData_3,
  MR_Word * StaticCellInfo_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    MR_Word Var_10;

    *StaticCellInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(
  MR_Word RevTable_5,
  MR_Integer TableSize_6,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TableSize_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (RevTable_5));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(
  MR_Word GlobalData_4,
  MR_Word * RevTable_5,
  MR_Integer * TableSize_6)
{
  {
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 0)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 1)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 2)));
    MR_Word Var_11;
    MR_Word Var_12;

    *TableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 3)));
    *RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 4)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 5)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 6)));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(
  MR_Word GlobalData_3,
  MR_Word * Table_4)
{
  {
    MR_Word RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));

    *Table_4 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, RevTable_5);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(
  MR_Word GlobalData_3,
  MR_Word * ClosureLayouts_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)));
    MR_Integer Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    *ClosureLayouts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_proc_layouts_2_p_0(
  MR_Word GlobalData_3,
  MR_Word * ProcLayouts_4)
{
  {
    MR_Word ProcLayoutMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));

    mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ProcLayoutMap_5, ProcLayouts_4);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(
  MR_Word GlobalData_3,
  MR_Word * ProcVars_4)
{
  {
    MR_Word ProcVarMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));

    mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ProcVarMap_5, ProcVars_4);
  }
}

void MR_CALL 
ll_backend__global_data__global_data_get_proc_layout_3_p_0(
  MR_Word GlobalData_4,
  MR_Word PredProcId_5,
  MR_Word * ProcLayout_6)
{
  {
    MR_Word ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 2)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 4)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 5)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 6)));
    MR_Box conv0_ProcLayout_6;

    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ProcLayoutMap_7, ((MR_Box) (PredProcId_5)), &conv0_ProcLayout_6);
    *ProcLayout_6 = ((MR_Word) conv0_ProcLayout_6);
  }
}

MR_bool MR_CALL 
ll_backend__global_data__global_data_maybe_get_proc_layout_3_p_0(
  MR_Word GlobalData_4,
  MR_Word PredProcId_5,
  MR_Word * ProcLayout_6)
{
  {
    MR_bool succeeded;
    MR_Word ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 2)));
    MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 4)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 5)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_4, (MR_Integer) 6)));
    MR_Box conv0_ProcLayout_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ProcLayoutMap_7, ((MR_Box) (PredProcId_5)), &conv0_ProcLayout_6);
    if (succeeded)
    {
      *ProcLayout_6 = ((MR_Word) conv0_ProcLayout_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(
  MR_Word NewClosureLayouts_4,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word ClosureLayouts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ClosureLayouts_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_19;

    mercury__list__append_3_p_1((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, NewClosureLayouts_4, ClosureLayouts0_6, &ClosureLayouts_7);
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ClosureLayouts_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_update_proc_layout_4_p_0(
  MR_Word PredProcId_5,
  MR_Word ProcLayout_6,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ProcLayoutMap_9;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_20;

    mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (PredProcId_5)), ((MR_Box) (ProcLayout_6)), ProcLayoutMap0_8, &ProcLayoutMap_9);
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcLayoutMap_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(
  MR_Word PredProcId_5,
  MR_Word ProcLayout_6,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ProcLayoutMap_9;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_20;

    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (PredProcId_5)), ((MR_Box) (ProcLayout_6)), ProcLayoutMap0_8, &ProcLayoutMap_9);
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcLayoutMap_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_add_new_proc_var_4_p_0(
  MR_Word PredProcId_5,
  MR_Word ProcVar_6,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ProcVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word ProcVarMap_9;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_19;

    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ((MR_Box) (PredProcId_5)), ((MR_Box) (ProcVar_6)), ProcVarMap0_8, &ProcVarMap_9);
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcVarMap_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
ll_backend__global_data__global_data_init_4_p_0(
  MR_Word StaticCellInfo_5,
  MR_Integer TSStringTableSize_6,
  MR_Word TSRevStringTable_7,
  MR_Word * GlobalData_8)
{
  {
    MR_Word TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word EmptyDataMap_9;
    MR_Word EmptyLayoutMap_10;
    MR_Word Var_12;

    mercury__map__init_1_p_0(TypeCtorInfo_13_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, &EmptyDataMap_9);
    mercury__map__init_1_p_0(TypeCtorInfo_13_13, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, &EmptyLayoutMap_10);
    Var_12 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *GlobalData_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (EmptyDataMap_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EmptyLayoutMap_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TSStringTableSize_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TSRevStringTable_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (StaticCellInfo_5));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_12));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____cell_type_bimap_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____cell_type_bimap_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____cell_type_num_remap_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____cell_type_num_remap_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____global_data_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____global_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____global_data_remapping_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____global_data_remapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____proc_layout_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____proc_layout_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____proc_var_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____proc_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____scalar_cell_group_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____scalar_cell_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____scalar_type_cell_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____scalar_type_cell_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____static_cell_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____static_cell_remap_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____static_cell_sub_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____static_cell_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____vector_cell_group_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____vector_cell_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____vector_contents_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____vector_contents_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__global_data____Unify____vector_type_cell_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__global_data____Compare____vector_type_cell_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.global_data.
