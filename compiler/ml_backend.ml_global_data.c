/*
** Automatically generated from `ml_global_data.m'
** by the Mercury compiler,
** version rotd-2016-06-09
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


/* :- module ml_backend.ml_global_data. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_global_data__init
ENDINIT
*/

#include "ml_backend.ml_global_data.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.prog_out.mih"
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




static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4];

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[14];

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[14];

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5];

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0;

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5];

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5];

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2];

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
  MR_Word ml_backend__ml_global_data__ConsId_3);

static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_1,
  MR_Word ml_backend__ml_global_data__StructType_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3,
  MR_Word * ml_backend__ml_global_data__HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_Context_1,
  MR_Word ml_backend__ml_global_data__Flags_2,
  MR_String ml_backend__ml_global_data__FieldNamePrefix_3,
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7);

static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14);

static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
  MR_Word ml_backend__ml_global_data__Init0_4,
  MR_Word * ml_backend__ml_global_data__Init_5,
  MR_Word * ml_backend__ml_global_data__Type_6);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
  MR_Word ml_backend__ml_global_data__ConstType_9,
  MR_Word ml_backend__ml_global_data__Initializer_10,
  MR_Word ml_backend__ml_global_data__Context_11,
  MR_Word * ml_backend__ml_global_data__VarName_12,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
  MR_Word ml_backend__ml_global_data__ConstType_8,
  MR_Word ml_backend__ml_global_data__Initializer_9,
  MR_Word * ml_backend__ml_global_data__Common_10,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35);

static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
  MR_Word ml_backend__ml_global_data__Defns_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
  MR_Box ml_backend__ml_global_data__closure_arg,
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
  MR_Box ml_backend__ml_global_data__closure_arg,
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_3[1][6];




static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_global_data_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_global_data_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_global_data_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0 = {
  (MR_String) "have_unboxed_floats",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1 = {
  (MR_String) "do_not_have_unboxed_floats",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "have_unboxed_floats",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_alloc_id_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4] = {
  (MR_String) "masd_proc_label",
  (MR_String) "masd_context",
  (MR_String) "masd_type",
  (MR_String) "masd_size"
};

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0 = {
  (MR_String) "ml_alloc_site_data",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_alloc_site_data",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[14] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
};

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[14] = {
  (MR_String) "mgd_pdup_rval_type_map",
  (MR_String) "mgd_use_common_cells",
  (MR_String) "mgd_have_unboxed_floats",
  (MR_String) "mgd_const_counter",
  (MR_String) "mgd_rev_flat_cell_defns",
  (MR_String) "mgd_rev_flat_rtti_defns",
  (MR_String) "mgd_rev_maybe_nonflat_defns",
  (MR_String) "mgd_cell_type_counter",
  (MR_String) "mgd_scalar_type_num_map",
  (MR_String) "mgd_scalar_cell_group_map",
  (MR_String) "mgd_vector_type_num_map",
  (MR_String) "mgd_vector_cell_group_map",
  (MR_String) "mgd_alloc_id_counter",
  (MR_String) "mgd_alloc_id_map"
};

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0 = {
  (MR_String) "ml_global_data",
  (MR_Integer) 14,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_global_data",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rtti_rval_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_rtti_rval_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0 = {
  (MR_String) "ml_rval_and_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_rval_and_type",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5] = {
  (MR_String) "mscg_type",
  (MR_String) "mscg_array_size",
  (MR_String) "mscg_counter",
  (MR_String) "mscg_members",
  (MR_String) "mscg_rows"
};

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0 = {
  (MR_String) "ml_scalar_cell_group",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_group",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0
};

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0 = {
  (MR_String) "ml_scalar_cell_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_type",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5] = {
  (MR_String) "mvcg_type",
  (MR_String) "mvcg_type_defn",
  (MR_String) "mvcg_field_ids",
  (MR_String) "mvcg_next_row",
  (MR_String) "mvcg_rows"
};

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0 = {
  (MR_String) "ml_vector_cell_group",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_group",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0 = {
  (MR_String) "do_not_use_common_cells",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1 = {
  (MR_String) "use_common_cells",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "use_common_cells",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0
};

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_global_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    {
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____use_common_cells_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

    {
      ml_backend__ml_global_data____Compare____use_common_cells_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__Cast_HeadVar1_4, ml_backend__ml_global_data__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__2_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

    {
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

    {
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_18 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__CastY_19 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_18 == ml_backend__ml_global_data__CastY_19);
    if (ml_backend__ml_global_data__succeeded)
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_14_14;

        {
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
        else
          {
            MR_Word ml_backend__ml_global_data__V_15_15;

            {
              ml_backend__mlds____Compare____mlds_defn_0_0(&ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_15_15 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_15_15;
            else
              {
                MR_Word ml_backend__ml_global_data__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[3], &ml_backend__ml_global_data__V_16_16, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_16_16;
                else
                  {
                    MR_Word ml_backend__ml_global_data__V_17_17;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_17_17, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_12_12);
                    }
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_17_17 == (MR_Integer) 0);
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                    if (ml_backend__ml_global_data__succeeded)
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_13 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
    MR_Integer ml_backend__ml_global_data__CastY_14 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_13 == ml_backend__ml_global_data__CastY_14);
    if (ml_backend__ml_global_data__succeeded)
      ml_backend__ml_global_data__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_global_data__TypeInfo_17_17;
        MR_Word ml_backend__ml_global_data__TypeInfo_18_18;
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            {
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_defn_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
                {
                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_global_data__V_5_5)), ((MR_Box) (ml_backend__ml_global_data__V_10_10)));
                }
                if (ml_backend__ml_global_data__succeeded)
                  {
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_11_11);
                    if (ml_backend__ml_global_data__succeeded)
                      {
                        ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
                        {
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

    {
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
    if (ml_backend__ml_global_data__succeeded)
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_8_8;

        {
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
        else
          {
            ml_backend__mlds____Compare____initializer_array_size_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
    if (ml_backend__ml_global_data__succeeded)
      ml_backend__ml_global_data__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
      }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

    {
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_18 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__CastY_19 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_18 == ml_backend__ml_global_data__CastY_19);
    if (ml_backend__ml_global_data__succeeded)
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_14_14;

        {
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
        else
          {
            MR_Word ml_backend__ml_global_data__V_15_15;

            {
              ml_backend__mlds____Compare____initializer_array_size_0_0(&ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_15_15 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_15_15;
            else
              {
                MR_Word ml_backend__ml_global_data__V_16_16;

                {
                  mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_11_11);
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_16_16;
                else
                  {
                    MR_Word ml_backend__ml_global_data__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[6], &ml_backend__ml_global_data__V_17_17, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                    }
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_17_17 == (MR_Integer) 0);
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                    if (ml_backend__ml_global_data__succeeded)
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_13 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
    MR_Integer ml_backend__ml_global_data__CastY_14 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_13 == ml_backend__ml_global_data__CastY_14);
    if (ml_backend__ml_global_data__succeeded)
      ml_backend__ml_global_data__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_global_data__TypeInfo_18_18;
        MR_Word ml_backend__ml_global_data__TypeInfo_19_19;
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            {
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
            if (ml_backend__ml_global_data__succeeded)
              {
                {
                  ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
                }
                if (ml_backend__ml_global_data__succeeded)
                  {
                    ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[6];
                    {
                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                    }
                    if (ml_backend__ml_global_data__succeeded)
                      {
                        ml_backend__ml_global_data__TypeInfo_19_19 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
                        {
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_19_19, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
    if (ml_backend__ml_global_data__succeeded)
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_8_8;

        {
          ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
        else
          {
            ml_backend__mlds____Compare____mlds_type_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
    if (ml_backend__ml_global_data__succeeded)
      ml_backend__ml_global_data__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
      }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

    {
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_45 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__CastY_46 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_45 == ml_backend__ml_global_data__CastY_46);
    if (ml_backend__ml_global_data__succeeded)
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__V_32_32;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], &ml_backend__ml_global_data__V_32_32, ((MR_Box) (ml_backend__ml_global_data__V_4_4)), ((MR_Box) (ml_backend__ml_global_data__V_18_18)));
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_32_32 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_32_32;
        else
          {
            MR_Word ml_backend__ml_global_data__V_33_33;
            MR_Integer ml_backend__ml_global_data__V_61_61 = (MR_Integer) ml_backend__ml_global_data__V_5_5;
            MR_Integer ml_backend__ml_global_data__V_62_62 = (MR_Integer) ml_backend__ml_global_data__V_19_19;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_33_33, ml_backend__ml_global_data__V_61_61, ml_backend__ml_global_data__V_62_62);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_33_33 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_33_33;
            else
              {
                MR_Word ml_backend__ml_global_data__V_34_34;
                MR_Integer ml_backend__ml_global_data__V_63_63 = (MR_Integer) ml_backend__ml_global_data__V_6_6;
                MR_Integer ml_backend__ml_global_data__V_64_64 = (MR_Integer) ml_backend__ml_global_data__V_20_20;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_34_34, ml_backend__ml_global_data__V_63_63, ml_backend__ml_global_data__V_64_64);
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_34_34 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_34_34;
                else
                  {
                    MR_Word ml_backend__ml_global_data__V_35_35;

                    {
                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_35_35, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_21_21);
                    }
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_35_35 == (MR_Integer) 0);
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                    if (ml_backend__ml_global_data__succeeded)
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_35_35;
                    else
                      {
                        MR_Word ml_backend__ml_global_data__V_36_36;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                        }
                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_36_36 == (MR_Integer) 0);
                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                        if (ml_backend__ml_global_data__succeeded)
                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_36_36;
                        else
                          {
                            MR_Word ml_backend__ml_global_data__V_37_37;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                            }
                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_37_37 == (MR_Integer) 0);
                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                            if (ml_backend__ml_global_data__succeeded)
                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_37_37;
                            else
                              {
                                MR_Word ml_backend__ml_global_data__V_38_38;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_38_38, ((MR_Box) (ml_backend__ml_global_data__V_10_10)), ((MR_Box) (ml_backend__ml_global_data__V_24_24)));
                                }
                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_38_38 == (MR_Integer) 0);
                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                if (ml_backend__ml_global_data__succeeded)
                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_38_38;
                                else
                                  {
                                    MR_Word ml_backend__ml_global_data__V_39_39;

                                    {
                                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_39_39, ml_backend__ml_global_data__V_11_11, ml_backend__ml_global_data__V_25_25);
                                    }
                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_39_39 == (MR_Integer) 0);
                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                    if (ml_backend__ml_global_data__succeeded)
                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_39_39;
                                    else
                                      {
                                        MR_Word ml_backend__ml_global_data__V_40_40;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], &ml_backend__ml_global_data__V_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                        }
                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_40_40 == (MR_Integer) 0);
                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                        if (ml_backend__ml_global_data__succeeded)
                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_40_40;
                                        else
                                          {
                                            MR_Word ml_backend__ml_global_data__V_41_41;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], &ml_backend__ml_global_data__V_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                            }
                                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_41_41 == (MR_Integer) 0);
                                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                            if (ml_backend__ml_global_data__succeeded)
                                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_41_41;
                                            else
                                              {
                                                MR_Word ml_backend__ml_global_data__V_42_42;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], &ml_backend__ml_global_data__V_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                }
                                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_42_42 == (MR_Integer) 0);
                                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                                if (ml_backend__ml_global_data__succeeded)
                                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_42_42;
                                                else
                                                  {
                                                    MR_Word ml_backend__ml_global_data__V_43_43;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], &ml_backend__ml_global_data__V_43_43, ((MR_Box) (ml_backend__ml_global_data__V_15_15)), ((MR_Box) (ml_backend__ml_global_data__V_29_29)));
                                                    }
                                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_43_43 == (MR_Integer) 0);
                                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                                    if (ml_backend__ml_global_data__succeeded)
                                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_43_43;
                                                    else
                                                      {
                                                        MR_Word ml_backend__ml_global_data__V_44_44;

                                                        {
                                                          mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_44_44, ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_30_30);
                                                        }
                                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_44_44 == (MR_Integer) 0);
                                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                                        if (ml_backend__ml_global_data__succeeded)
                                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_44_44;
                                                        else
                                                          {
                                                            {
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_17_17)), ((MR_Box) (ml_backend__ml_global_data__V_31_31)));
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

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_31 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
    MR_Integer ml_backend__ml_global_data__CastY_32 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_31 == ml_backend__ml_global_data__CastY_32);
    if (ml_backend__ml_global_data__succeeded)
      ml_backend__ml_global_data__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_global_data__TypeInfo_35_35;
        MR_Word ml_backend__ml_global_data__TypeInfo_36_36;
        MR_Word ml_backend__ml_global_data__TypeInfo_37_37;
        MR_Word ml_backend__ml_global_data__TypeInfo_39_39;
        MR_Word ml_backend__ml_global_data__TypeInfo_40_40;
        MR_Word ml_backend__ml_global_data__TypeInfo_41_41;
        MR_Word ml_backend__ml_global_data__TypeInfo_42_42;
        MR_Word ml_backend__ml_global_data__TypeInfo_44_44;
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));

        {
          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__V_3_3)), ((MR_Box) (ml_backend__ml_global_data__V_17_17)));
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_4_4 == ml_backend__ml_global_data__V_18_18);
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_5_5 == ml_backend__ml_global_data__V_19_19);
                if (ml_backend__ml_global_data__succeeded)
                  {
                    {
                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_20_20);
                    }
                    if (ml_backend__ml_global_data__succeeded)
                      {
                        ml_backend__ml_global_data__TypeInfo_35_35 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
                        {
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_35_35, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_21_21)));
                        }
                        if (ml_backend__ml_global_data__succeeded)
                          {
                            ml_backend__ml_global_data__TypeInfo_36_36 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
                            {
                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                            }
                            if (ml_backend__ml_global_data__succeeded)
                              {
                                ml_backend__ml_global_data__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
                                {
                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                                }
                                if (ml_backend__ml_global_data__succeeded)
                                  {
                                    {
                                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__V_24_24);
                                    }
                                    if (ml_backend__ml_global_data__succeeded)
                                      {
                                        ml_backend__ml_global_data__TypeInfo_39_39 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[2];
                                        {
                                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_39_39, ((MR_Box) (ml_backend__ml_global_data__V_11_11)), ((MR_Box) (ml_backend__ml_global_data__V_25_25)));
                                        }
                                        if (ml_backend__ml_global_data__succeeded)
                                          {
                                            ml_backend__ml_global_data__TypeInfo_40_40 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[3];
                                            {
                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                            }
                                            if (ml_backend__ml_global_data__succeeded)
                                              {
                                                ml_backend__ml_global_data__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[4];
                                                {
                                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                                }
                                                if (ml_backend__ml_global_data__succeeded)
                                                  {
                                                    ml_backend__ml_global_data__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[5];
                                                    {
                                                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                    }
                                                    if (ml_backend__ml_global_data__succeeded)
                                                      {
                                                        {
                                                          ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_29_29);
                                                        }
                                                        if (ml_backend__ml_global_data__succeeded)
                                                          {
                                                            ml_backend__ml_global_data__TypeInfo_44_44 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[0];
                                                            {
                                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_44_44, ((MR_Box) (ml_backend__ml_global_data__V_16_16)), ((MR_Box) (ml_backend__ml_global_data__V_30_30)));
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
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_15 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__CastY_16 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_15 == ml_backend__ml_global_data__CastY_16);
    if (ml_backend__ml_global_data__succeeded)
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ml_backend__ml_global_data__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_String ml_backend__ml_global_data__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_12_12;

        {
          ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_global_data__V_12_12, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_12_12 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_12_12;
        else
          {
            MR_Word ml_backend__ml_global_data__V_13_13;

            {
              mercury__term____Compare____context_0_0(&ml_backend__ml_global_data__V_13_13, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_13_13 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_13_13;
            else
              {
                MR_Word ml_backend__ml_global_data__V_14_14;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_10_10);
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__CastX_11 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
    MR_Integer ml_backend__ml_global_data__CastY_12 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_11 == ml_backend__ml_global_data__CastY_12);
    if (ml_backend__ml_global_data__succeeded)
      ml_backend__ml_global_data__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ml_backend__ml_global_data__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ml_backend__ml_global_data__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_7_7);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            {
              ml_backend__ml_global_data__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
            }
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__succeeded = (strcmp(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9) == 0);
                if (ml_backend__ml_global_data__succeeded)
                  ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_10_10);
              }
          }
      }
    return ml_backend__ml_global_data__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

    {
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_global_data__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__Cast_HeadVar1_4, ml_backend__ml_global_data__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(
  MR_Word ml_backend__ml_global_data__HeadVar__2_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

    return ml_backend__ml_global_data__succeeded;
  }
}

static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
  MR_Word ml_backend__ml_global_data__ConsId_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_String ml_backend__ml_global_data__TypeStr_4;

    switch (MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info";
        break;
      case (MR_Integer) 1:
        ml_backend__ml_global_data__TypeStr_4 = (MR_String) "private_builtin.type_info/0";
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_global_data__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 2)));

              {
                ml_backend__ml_global_data__TypeStr_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(ml_backend__ml_global_data__TypeCtor_7);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ml_backend__ml_global_data__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
              MR_String ml_backend__ml_global_data__V_35_35;

              {
                ml_backend__ml_global_data__V_35_35 = mercury__string__from_int_1_f_0(ml_backend__ml_global_data__Arity_8);
              }
              {
                ml_backend__ml_global_data__TypeStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", ml_backend__ml_global_data__V_35_35);
              }
            }
            break;
          case (MR_Integer) 4:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "closure";
            break;
          case (MR_Integer) 12:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "type_info_const";
            break;
          case (MR_Integer) 13:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info_const";
            break;
          case (MR_Integer) 14:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "ground_term_const";
            break;
        }
        break;
    }
    return ml_backend__ml_global_data__TypeStr_4;
  }
}

static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_1,
  MR_Word ml_backend__ml_global_data__StructType_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3,
  MR_Word * ml_backend__ml_global_data__HeadVar__4_4)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    if ((ml_backend__ml_global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_global_data__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String ml_backend__ml_global_data__RawFieldName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__RawFieldNames_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__FieldName_11;
        MR_Word ml_backend__ml_global_data__FieldNames_12;
        MR_Word ml_backend__ml_global_data__QualName_13;

        {
          ml_backend__ml_global_data__QualName_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 2) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_9));
        }
        {
          ml_backend__ml_global_data__FieldName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_11, 0) = ((MR_Box) (ml_backend__ml_global_data__QualName_13));
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_11, 1) = ((MR_Box) (ml_backend__ml_global_data__StructType_2));
        }
        {
          ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ModuleName_1, ml_backend__ml_global_data__StructType_2, ml_backend__ml_global_data__RawFieldNames_10, &ml_backend__ml_global_data__FieldNames_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_global_data__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldName_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldNames_12));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_Context_1,
  MR_Word ml_backend__ml_global_data__Flags_2,
  MR_String ml_backend__ml_global_data__FieldNamePrefix_3,
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;

    if ((ml_backend__ml_global_data__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_global_data__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_global_data__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__ml_global_data__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 1)));
        MR_String ml_backend__ml_global_data__RawFieldName_18;
        MR_Word ml_backend__ml_global_data__RawFieldNames_19;
        MR_Word ml_backend__ml_global_data__FieldDefn_20;
        MR_Word ml_backend__ml_global_data__FieldDefns_21;
        MR_Word ml_backend__ml_global_data__FieldName_22;
        MR_Word ml_backend__ml_global_data__FieldEntityDefn_23;
        MR_String ml_backend__ml_global_data__V_24_24;
        MR_String ml_backend__ml_global_data__V_26_26;
        MR_Word ml_backend__ml_global_data__V_27_27;
        MR_Word ml_backend__ml_global_data__V_28_28;
        MR_Integer ml_backend__ml_global_data__V_32_32;

        {
          ml_backend__ml_global_data__V_26_26 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__FieldNum_4);
        }
        {
          ml_backend__ml_global_data__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_f_", ml_backend__ml_global_data__V_26_26);
        }
        {
          ml_backend__ml_global_data__RawFieldName_18 = mercury__string__f_43_43_2_f_0(ml_backend__ml_global_data__FieldNamePrefix_3, ml_backend__ml_global_data__V_24_24);
        }
        {
          ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_18));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__V_28_28);
        {
          ml_backend__ml_global_data__FieldName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_22, 0) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
        }
        {
          ml_backend__ml_global_data__FieldEntityDefn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 0) = ((MR_Box) (ml_backend__ml_global_data__Type_16));
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_global_data__FieldDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldName_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 2) = ((MR_Box) (ml_backend__ml_global_data__Flags_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 3) = ((MR_Box) (ml_backend__ml_global_data__FieldEntityDefn_23));
        }
        ml_backend__ml_global_data__V_32_32 = (ml_backend__ml_global_data__FieldNum_4 + (MR_Integer) 1);
        {
          ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(ml_backend__ml_global_data__MLDS_Context_1, ml_backend__ml_global_data__Flags_2, ml_backend__ml_global_data__FieldNamePrefix_3, ml_backend__ml_global_data__V_32_32, ml_backend__ml_global_data__Types_17, &ml_backend__ml_global_data__RawFieldNames_19, &ml_backend__ml_global_data__FieldDefns_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_global_data__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__RawFieldNames_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_global_data__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldDefn_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldDefns_21));
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_global_data__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13)) {
          default:
            ml_backend__ml_global_data__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 0)))) {
              default:
                ml_backend__ml_global_data__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
                  MR_Float ml_backend__ml_global_data__V_4_4;

                  ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (ml_backend__ml_global_data__succeeded)
                    {
                      ml_backend__ml_global_data__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 1)));
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_global_data__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_global_data__SubRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_global_data__Type_7;

                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_5)) {
                    default:
                      ml_backend__ml_global_data__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  if (ml_backend__ml_global_data__succeeded)
                    {
                      if ((ml_backend__ml_global_data__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
                        {
                          *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
                          ml_backend__ml_global_data__succeeded = MR_TRUE;
                        }
                      else
                      if (((MR_tag((MR_Word) ml_backend__ml_global_data__Type_7)) == (MR_mktag((MR_Integer) 2))))
                        {
                          MR_Word ml_backend__ml_global_data__CtorCat_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 1)));
                          MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 0)));
                          MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 2)));

                          if (((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 1))))
                            {
                              MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)));

                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_18_18 == (MR_Integer) 1);
                              if (ml_backend__ml_global_data__succeeded)
                                {
                                  *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
                                  ml_backend__ml_global_data__succeeded = MR_TRUE;
                                }
                            }
                          else
                          if (((((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
                            {
                              MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 1)));

                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 1);
                              if (ml_backend__ml_global_data__succeeded)
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13 = ml_backend__ml_global_data__SubRval_6;

                                    ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13;
                                  }
                                  continue;
                                }
                            }
                          else
                            ml_backend__ml_global_data__succeeded = MR_FALSE;
                        }
                      else
                        ml_backend__ml_global_data__succeeded = MR_FALSE;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_global_data__Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 3)));

                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_22)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ml_backend__ml_global_data__Op_22)) {
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
                        case (MR_Integer) 13:
                        case (MR_Integer) 14:
                        case (MR_Integer) 15:
                        case (MR_Integer) 16:
                        case (MR_Integer) 17:
                        case (MR_Integer) 18:
                        case (MR_Integer) 19:
                        case (MR_Integer) 20:
                        case (MR_Integer) 21:
                        case (MR_Integer) 22:
                        case (MR_Integer) 23:
                        case (MR_Integer) 24:
                        case (MR_Integer) 25:
                        case (MR_Integer) 26:
                        case (MR_Integer) 27:
                        case (MR_Integer) 32:
                        case (MR_Integer) 33:
                        case (MR_Integer) 34:
                        case (MR_Integer) 35:
                        case (MR_Integer) 36:
                        case (MR_Integer) 37:
                        case (MR_Integer) 38:
                        case (MR_Integer) 40:
                        case (MR_Integer) 41:
                        case (MR_Integer) 42:
                          {
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                          }
                          break;
                        case (MR_Integer) 28:
                        case (MR_Integer) 29:
                        case (MR_Integer) 30:
                        case (MR_Integer) 31:
                        case (MR_Integer) 39:
                          {
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                      }
                      break;
                  }
                  if (ml_backend__ml_global_data__succeeded)
                    {
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
                    }
                }
                break;
            }
            break;
        }
        return ml_backend__ml_global_data__succeeded;
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
  MR_Word ml_backend__ml_global_data__Init0_4,
  MR_Word * ml_backend__ml_global_data__Init_5,
  MR_Word * ml_backend__ml_global_data__Type_6)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Init0_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Rval_8;
    MR_Word ml_backend__ml_global_data__Rval0_7;

    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__Rval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Init0_4, (MR_Integer) 0)));
        {
          ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(ml_backend__ml_global_data__Rval0_7, &ml_backend__ml_global_data__Rval_8);
        }
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_global_data__Init_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Rval_8));
        }
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
      }
    else
      {
        *ml_backend__ml_global_data__Init_5 = ml_backend__ml_global_data__Init0_4;
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
      }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
  MR_Word ml_backend__ml_global_data__ConstType_9,
  MR_Word ml_backend__ml_global_data__Initializer_10,
  MR_Word ml_backend__ml_global_data__Context_11,
  MR_Word * ml_backend__ml_global_data__VarName_12,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__ConstCounter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
    MR_Integer ml_backend__ml_global_data__ConstNum_15;
    MR_Word ml_backend__ml_global_data__ConstCounter_16;
    MR_Word ml_backend__ml_global_data__EntityName_17;
    MR_Word ml_backend__ml_global_data__EntityDefn_19;
    MR_Word ml_backend__ml_global_data__DeclFlags_20;
    MR_Word ml_backend__ml_global_data__MLDS_Context_21;
    MR_Word ml_backend__ml_global_data__Defn_22;
    MR_Word ml_backend__ml_global_data__RevDefns0_23;
    MR_Word ml_backend__ml_global_data__RevDefns_24;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27;
    MR_Word ml_backend__ml_global_data__V_28_28;
    MR_Word ml_backend__ml_global_data__V_29_29;
    MR_Word ml_backend__ml_global_data__V_30_30;
    MR_Word ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__V_52_52;
    MR_Word ml_backend__ml_global_data__V_53_53;
    MR_Word ml_backend__ml_global_data__V_54_54;
    MR_Word ml_backend__ml_global_data__V_56_56;
    MR_Word ml_backend__ml_global_data__V_57_57;
    MR_Word ml_backend__ml_global_data__V_58_58;
    MR_Word ml_backend__ml_global_data__V_59_59;
    MR_Word ml_backend__ml_global_data__V_60_60;
    MR_Word ml_backend__ml_global_data__V_61_61;
    MR_Word ml_backend__ml_global_data__V_62_62;
    MR_Word ml_backend__ml_global_data__V_63_63;
    MR_Word ml_backend__ml_global_data__V_64_64;
    MR_Word ml_backend__ml_global_data__V_65_65;
    MR_Word ml_backend__ml_global_data__V_55_55;
    MR_Word ml_backend__ml_global_data__V_67_67;
    MR_Word ml_backend__ml_global_data__V_68_68;
    MR_Word ml_backend__ml_global_data__V_69_69;
    MR_Word ml_backend__ml_global_data__V_70_70;
    MR_Word ml_backend__ml_global_data__V_71_71;
    MR_Word ml_backend__ml_global_data__V_72_72;
    MR_Word ml_backend__ml_global_data__V_73_73;
    MR_Word ml_backend__ml_global_data__V_74_74;
    MR_Word ml_backend__ml_global_data__V_75_75;
    MR_Word ml_backend__ml_global_data__V_76_76;
    MR_Word ml_backend__ml_global_data__V_77_77;
    MR_Word ml_backend__ml_global_data__V_78_78;
    MR_Word ml_backend__ml_global_data__V_79_79;

    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__ConstNum_15, ml_backend__ml_global_data__ConstCounter0_14, &ml_backend__ml_global_data__ConstCounter_16);
    }
    ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
    {
      ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_52_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__ConstCounter_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 5) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 6) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 7) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 8) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 9) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 10) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 11) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 12) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 13) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
    }
    {
      ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstNum_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__VarName_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstBaseName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_28_28));
    }
    ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) *ml_backend__ml_global_data__VarName_12);
    {
      ml_backend__ml_global_data__EntityName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityName_17, 0) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
    }
    {
      ml_backend__ml_global_data__EntityDefn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_9));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 1) = ((MR_Box) (ml_backend__ml_global_data__Initializer_10));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_global_data__V_30_30 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
    }
    {
      ml_backend__ml_global_data__DeclFlags_20 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_global_data__V_30_30, (MR_Integer) 2);
    }
    {
      ml_backend__ml_global_data__MLDS_Context_21 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_global_data__Context_11);
    }
    {
      ml_backend__ml_global_data__Defn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 0) = ((MR_Box) (ml_backend__ml_global_data__EntityName_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 2) = ((MR_Box) (ml_backend__ml_global_data__DeclFlags_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 3) = ((MR_Box) (ml_backend__ml_global_data__EntityDefn_19));
    }
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 3)));
    ml_backend__ml_global_data__RevDefns0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 13)));
    {
      ml_backend__ml_global_data__RevDefns_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_22));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_23));
    }
    {
      ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(ml_backend__ml_global_data__RevDefns_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
  MR_Word ml_backend__ml_global_data__ConstType_8,
  MR_Word ml_backend__ml_global_data__Initializer_9,
  MR_Word * ml_backend__ml_global_data__Common_10,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_172_172;
    MR_Word ml_backend__ml_global_data__InitArraySize_12;
    MR_Word ml_backend__ml_global_data__CellType_13;
    MR_Word ml_backend__ml_global_data__TypeNumMap0_15;
    MR_Word ml_backend__ml_global_data__CellGroupMap0_16;
    MR_Word ml_backend__ml_global_data__TypeNum_18;
    MR_Word ml_backend__ml_global_data__RowCounter0_23;
    MR_Integer ml_backend__ml_global_data__RowNum_24;
    MR_Word ml_backend__ml_global_data__RowCounter_25;
    MR_Word ml_backend__ml_global_data__MembersMap0_26;
    MR_Word ml_backend__ml_global_data__NewCommon_27;
    MR_Word ml_backend__ml_global_data__MaybeOldCommon_28;
    MR_Word ml_backend__ml_global_data__MembersMap_29;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
    MR_Word ml_backend__ml_global_data__V_54_54;
    MR_Word ml_backend__ml_global_data__V_55_55;
    MR_Word ml_backend__ml_global_data__V_56_56;
    MR_Word ml_backend__ml_global_data__V_57_57;
    MR_Word ml_backend__ml_global_data__V_58_58;
    MR_Word ml_backend__ml_global_data__V_59_59;
    MR_Word ml_backend__ml_global_data__V_60_60;
    MR_Word ml_backend__ml_global_data__V_61_61;
    MR_Word ml_backend__ml_global_data__V_63_63;
    MR_Word ml_backend__ml_global_data__V_64_64;
    MR_Word ml_backend__ml_global_data__V_65_65;
    MR_Word ml_backend__ml_global_data__V_66_66;
    MR_Word ml_backend__ml_global_data__OldTypeNum_17;
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_17;
    MR_Word ml_backend__ml_global_data__V_121_121;
    MR_Word ml_backend__ml_global_data__V_122_122;
    MR_Word ml_backend__ml_global_data__V_123_123;
    MR_Word ml_backend__ml_global_data__V_124_124;
    MR_Word ml_backend__ml_global_data__V_125_125;
    MR_Word ml_backend__ml_global_data__V_126_126;
    MR_Word ml_backend__ml_global_data__V_127_127;
    MR_Word ml_backend__ml_global_data__V_128_128;

    {
      ml_backend__ml_global_data__InitArraySize_12 = ml_backend__mlds__get_initializer_array_size_1_f_0(ml_backend__ml_global_data__Initializer_9);
    }
    {
      ml_backend__ml_global_data__CellType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
    }
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
    ml_backend__ml_global_data__TypeNumMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
    ml_backend__ml_global_data__CellGroupMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
    {
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_15, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_17);
    }
    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__OldTypeNum_17 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_17);
        ml_backend__ml_global_data__succeeded = MR_TRUE;
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
        MR_Box ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36;

        ml_backend__ml_global_data__TypeNum_18 = ml_backend__ml_global_data__OldTypeNum_17;
        {
          ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ml_backend__ml_global_data__CellGroupMap0_16, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), &ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36 = ((MR_Word) ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
            ml_backend__ml_global_data__succeeded = MR_TRUE;
          }
        if (ml_backend__ml_global_data__succeeded)
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
        else
          {
            MR_Word ml_backend__ml_global_data__TypeCtorInfo_166_166;
            MR_Word ml_backend__ml_global_data__V_38_38;
            MR_Word ml_backend__ml_global_data__V_40_40;
            MR_Word ml_backend__ml_global_data__V_41_41;

            {
              ml_backend__ml_global_data__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 0);
            }
            ml_backend__ml_global_data__TypeCtorInfo_166_166 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
            {
              ml_backend__ml_global_data__V_40_40 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
            }
            {
              ml_backend__ml_global_data__V_41_41 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166);
            }
            {
              ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
            }
          }
        ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34;
      }
    else
      {
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_170_170;
        MR_Word ml_backend__ml_global_data__TypeNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
        MR_Integer ml_backend__ml_global_data__TypeRawNum_20;
        MR_Word ml_backend__ml_global_data__TypeNumCounter_21;
        MR_Word ml_backend__ml_global_data__TypeNumMap_22;
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42;
        MR_Word ml_backend__ml_global_data__V_45_45;
        MR_Word ml_backend__ml_global_data__V_47_47;
        MR_Word ml_backend__ml_global_data__V_48_48;
        MR_Word ml_backend__ml_global_data__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__V_93_93;
        MR_Word ml_backend__ml_global_data__V_94_94;
        MR_Word ml_backend__ml_global_data__V_95_95;
        MR_Word ml_backend__ml_global_data__V_96_96;
        MR_Word ml_backend__ml_global_data__V_97_97;
        MR_Word ml_backend__ml_global_data__V_98_98;
        MR_Word ml_backend__ml_global_data__V_99_99;
        MR_Word ml_backend__ml_global_data__V_101_101;
        MR_Word ml_backend__ml_global_data__V_102_102;
        MR_Word ml_backend__ml_global_data__V_103_103;
        MR_Word ml_backend__ml_global_data__V_104_104;
        MR_Word ml_backend__ml_global_data__V_105_105;
        MR_Word ml_backend__ml_global_data__V_106_106;
        MR_Word ml_backend__ml_global_data__V_100_100;
        MR_Word ml_backend__ml_global_data__V_107_107;
        MR_Word ml_backend__ml_global_data__V_108_108;
        MR_Word ml_backend__ml_global_data__V_109_109;
        MR_Word ml_backend__ml_global_data__V_110_110;
        MR_Word ml_backend__ml_global_data__V_111_111;
        MR_Word ml_backend__ml_global_data__V_112_112;
        MR_Word ml_backend__ml_global_data__V_113_113;
        MR_Word ml_backend__ml_global_data__V_114_114;
        MR_Word ml_backend__ml_global_data__V_116_116;
        MR_Word ml_backend__ml_global_data__V_117_117;
        MR_Word ml_backend__ml_global_data__V_118_118;
        MR_Word ml_backend__ml_global_data__V_119_119;
        MR_Word ml_backend__ml_global_data__V_120_120;
        MR_Word ml_backend__ml_global_data__V_115_115;

        {
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_20, ml_backend__ml_global_data__TypeNumCounter0_19, &ml_backend__ml_global_data__TypeNumCounter_21);
        }
        ml_backend__ml_global_data__TypeNum_18 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_20;
        ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
        ml_backend__ml_global_data__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 0) = ((MR_Box) (ml_backend__ml_global_data__V_93_93));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 1) = ((MR_Box) (ml_backend__ml_global_data__V_94_94));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 2) = ((MR_Box) (ml_backend__ml_global_data__V_95_95));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 3) = ((MR_Box) (ml_backend__ml_global_data__V_96_96));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 4) = ((MR_Box) (ml_backend__ml_global_data__V_97_97));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 5) = ((MR_Box) (ml_backend__ml_global_data__V_98_98));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 6) = ((MR_Box) (ml_backend__ml_global_data__V_99_99));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_21));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 8) = ((MR_Box) (ml_backend__ml_global_data__V_101_101));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 9) = ((MR_Box) (ml_backend__ml_global_data__V_102_102));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 10) = ((MR_Box) (ml_backend__ml_global_data__V_103_103));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 11) = ((MR_Box) (ml_backend__ml_global_data__V_104_104));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 12) = ((MR_Box) (ml_backend__ml_global_data__V_105_105));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 13) = ((MR_Box) (ml_backend__ml_global_data__V_106_106));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ml_backend__ml_global_data__TypeNumMap0_15, &ml_backend__ml_global_data__TypeNumMap_22);
        }
        ml_backend__ml_global_data__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 10)));
        ml_backend__ml_global_data__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 0) = ((MR_Box) (ml_backend__ml_global_data__V_107_107));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 1) = ((MR_Box) (ml_backend__ml_global_data__V_108_108));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 2) = ((MR_Box) (ml_backend__ml_global_data__V_109_109));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 3) = ((MR_Box) (ml_backend__ml_global_data__V_110_110));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 4) = ((MR_Box) (ml_backend__ml_global_data__V_111_111));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 5) = ((MR_Box) (ml_backend__ml_global_data__V_112_112));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 6) = ((MR_Box) (ml_backend__ml_global_data__V_113_113));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 7) = ((MR_Box) (ml_backend__ml_global_data__V_114_114));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 8) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 9) = ((MR_Box) (ml_backend__ml_global_data__V_116_116));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 10) = ((MR_Box) (ml_backend__ml_global_data__V_117_117));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 11) = ((MR_Box) (ml_backend__ml_global_data__V_118_118));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 12) = ((MR_Box) (ml_backend__ml_global_data__V_119_119));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 13) = ((MR_Box) (ml_backend__ml_global_data__V_120_120));
        }
        {
          ml_backend__ml_global_data__V_45_45 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
        ml_backend__ml_global_data__TypeCtorInfo_170_170 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
        {
          ml_backend__ml_global_data__V_47_47 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
        }
        {
          ml_backend__ml_global_data__V_48_48 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170);
        }
        {
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_48_48));
        }
      }
    ml_backend__ml_global_data__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
    ml_backend__ml_global_data__RowCounter0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__RowNum_24, ml_backend__ml_global_data__RowCounter0_23, &ml_backend__ml_global_data__RowCounter_25);
    }
    ml_backend__ml_global_data__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
    ml_backend__ml_global_data__MembersMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
    {
      ml_backend__ml_global_data__NewCommon_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 3) = ((MR_Box) (ml_backend__ml_global_data__RowNum_24));
    }
    ml_backend__ml_global_data__TypeCtorInfo_172_172 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    {
      mercury__bimap__search_insert_5_p_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)), ((MR_Box) (ml_backend__ml_global_data__NewCommon_27)), &ml_backend__ml_global_data__MaybeOldCommon_28, ml_backend__ml_global_data__MembersMap0_26, &ml_backend__ml_global_data__MembersMap_29);
    }
    if ((ml_backend__ml_global_data__MaybeOldCommon_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ml_backend__ml_global_data__Rows0_31;
        MR_Word ml_backend__ml_global_data__Rows_32;
        MR_Word ml_backend__ml_global_data__CellGroupMap_33;
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50;
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53;
        MR_Word ml_backend__ml_global_data__V_129_129;
        MR_Word ml_backend__ml_global_data__V_130_130;
        MR_Word ml_backend__ml_global_data__V_133_133;
        MR_Word ml_backend__ml_global_data__V_131_131;
        MR_Word ml_backend__ml_global_data__V_132_132;
        MR_Word ml_backend__ml_global_data__V_143_143;
        MR_Word ml_backend__ml_global_data__V_144_144;
        MR_Word ml_backend__ml_global_data__V_145_145;
        MR_Word ml_backend__ml_global_data__V_146_146;
        MR_Word ml_backend__ml_global_data__V_147_147;
        MR_Word ml_backend__ml_global_data__V_148_148;
        MR_Word ml_backend__ml_global_data__V_149_149;
        MR_Word ml_backend__ml_global_data__V_150_150;
        MR_Word ml_backend__ml_global_data__V_151_151;
        MR_Word ml_backend__ml_global_data__V_152_152;
        MR_Word ml_backend__ml_global_data__V_153_153;
        MR_Word ml_backend__ml_global_data__V_154_154;
        MR_Word ml_backend__ml_global_data__V_155_155;
        MR_Word ml_backend__ml_global_data__V_156_156;
        MR_Word ml_backend__ml_global_data__V_158_158;
        MR_Word ml_backend__ml_global_data__V_159_159;
        MR_Word ml_backend__ml_global_data__V_160_160;
        MR_Word ml_backend__ml_global_data__V_161_161;
        MR_Word ml_backend__ml_global_data__V_157_157;

        *ml_backend__ml_global_data__Common_10 = ml_backend__ml_global_data__NewCommon_27;
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
        ml_backend__ml_global_data__Rows0_31 = ml_backend__ml_global_data__V_133_133;
        {
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 0) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 1) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 2) = ((MR_Box) (ml_backend__ml_global_data__RowCounter_25));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 3) = ((MR_Box) (ml_backend__ml_global_data__MembersMap_29));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_31));
        }
        {
          ml_backend__ml_global_data__Rows_32 = mercury__cord__snoc_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, ml_backend__ml_global_data__Rows0_31, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)));
        }
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 4)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 0) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 1) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 2) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 3) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_32));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53)), ml_backend__ml_global_data__CellGroupMap0_16, &ml_backend__ml_global_data__CellGroupMap_33);
        }
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 10)));
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 13)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_150_150));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_154_154));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_155_155));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_156_156));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_33));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_158_158));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_159_159));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_160_160));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_161_161));
        }
      }
    else
      {
        *ml_backend__ml_global_data__Common_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeOldCommon_28, (MR_Integer) 0)));
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
      }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
  MR_Word ml_backend__ml_global_data__Defns_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(
  MR_Word ml_backend__ml_global_data__ProcLabel_8,
  MR_Word ml_backend__ml_global_data__MaybeConsId_9,
  MR_Integer ml_backend__ml_global_data__Size_10,
  MR_Word ml_backend__ml_global_data__Context_11,
  MR_Word * ml_backend__ml_global_data__AllocId_12,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_String ml_backend__ml_global_data__TypeStr_15;
    MR_Word ml_backend__ml_global_data__AllocData_16;
    MR_Word ml_backend__ml_global_data__Map0_17;
    MR_Word ml_backend__ml_global_data__V_27_27;
    MR_Word ml_backend__ml_global_data__V_28_28;
    MR_Word ml_backend__ml_global_data__V_29_29;
    MR_Word ml_backend__ml_global_data__V_30_30;
    MR_Word ml_backend__ml_global_data__V_31_31;
    MR_Word ml_backend__ml_global_data__V_32_32;
    MR_Word ml_backend__ml_global_data__V_33_33;
    MR_Word ml_backend__ml_global_data__V_34_34;
    MR_Word ml_backend__ml_global_data__V_35_35;
    MR_Word ml_backend__ml_global_data__V_36_36;
    MR_Word ml_backend__ml_global_data__V_37_37;
    MR_Word ml_backend__ml_global_data__V_38_38;
    MR_Word ml_backend__ml_global_data__V_39_39;
    MR_Word ml_backend__ml_global_data__AllocId0_18;
    MR_Box ml_backend__ml_global_data__conv0_AllocId0_18;

    if ((ml_backend__ml_global_data__MaybeConsId_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_global_data__TypeStr_15 = (MR_String) "unknown";
    else
      {
        MR_Word ml_backend__ml_global_data__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeConsId_9, (MR_Integer) 0)));

        {
          ml_backend__ml_global_data__TypeStr_15 = ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(ml_backend__ml_global_data__ConsId_14);
        }
      }
    {
      ml_backend__ml_global_data__AllocData_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 0) = ((MR_Box) (ml_backend__ml_global_data__ProcLabel_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Context_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeStr_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 3) = ((MR_Box) (ml_backend__ml_global_data__Size_10));
    }
    ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
    ml_backend__ml_global_data__Map0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
    {
      ml_backend__ml_global_data__succeeded = mercury__bimap__search_3_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__Map0_17, &ml_backend__ml_global_data__conv0_AllocId0_18, ((MR_Box) (ml_backend__ml_global_data__AllocData_16)));
    }
    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__AllocId0_18 = ((MR_Word) ml_backend__ml_global_data__conv0_AllocId0_18);
        ml_backend__ml_global_data__succeeded = MR_TRUE;
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        *ml_backend__ml_global_data__AllocId_12 = ml_backend__ml_global_data__AllocId0_18;
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23;
      }
    else
      {
        MR_Word ml_backend__ml_global_data__Counter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
        MR_Integer ml_backend__ml_global_data__AllocIdNum_20;
        MR_Word ml_backend__ml_global_data__Counter_21;
        MR_Word ml_backend__ml_global_data__Map_22;
        MR_Word ml_backend__ml_global_data__V_53_53;
        MR_Word ml_backend__ml_global_data__V_54_54;
        MR_Word ml_backend__ml_global_data__V_55_55;
        MR_Word ml_backend__ml_global_data__V_56_56;
        MR_Word ml_backend__ml_global_data__V_57_57;
        MR_Word ml_backend__ml_global_data__V_58_58;
        MR_Word ml_backend__ml_global_data__V_59_59;
        MR_Word ml_backend__ml_global_data__V_60_60;
        MR_Word ml_backend__ml_global_data__V_61_61;
        MR_Word ml_backend__ml_global_data__V_62_62;
        MR_Word ml_backend__ml_global_data__V_63_63;
        MR_Word ml_backend__ml_global_data__V_64_64;
        MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__V_65_65;
        MR_Word ml_backend__ml_global_data__V_66_66;

        {
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__AllocIdNum_20, ml_backend__ml_global_data__Counter0_19, &ml_backend__ml_global_data__Counter_21);
        }
        *ml_backend__ml_global_data__AllocId_12 = (MR_Word) ml_backend__ml_global_data__AllocIdNum_20;
        {
          mercury__bimap__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ((MR_Box) (*ml_backend__ml_global_data__AllocId_12)), ((MR_Box) (ml_backend__ml_global_data__AllocData_16)), ml_backend__ml_global_data__Map0_17, &ml_backend__ml_global_data__Map_22);
        }
        ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
        ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_55_55));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Counter_21));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Map_22));
        }
      }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
  MR_Word ml_backend__ml_global_data__TypeNum_8,
  MR_Word ml_backend__ml_global_data__RowInitializers_9,
  MR_Word * ml_backend__ml_global_data__Common_10,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_78_78 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_79_79;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_80_80;
    MR_Integer ml_backend__ml_global_data__NumRows_13;
    MR_Word ml_backend__ml_global_data__CellGroupMap0_14;
    MR_Integer ml_backend__ml_global_data__StartRowNum_16;
    MR_Integer ml_backend__ml_global_data__NextRow_17;
    MR_Word ml_backend__ml_global_data__StructType_18;
    MR_Word ml_backend__ml_global_data__Rows0_19;
    MR_Word ml_backend__ml_global_data__Rows_20;
    MR_Word ml_backend__ml_global_data__CellGroupMap_21;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25;
    MR_Word ml_backend__ml_global_data__V_26_26;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27;
    MR_Word ml_backend__ml_global_data__V_42_42;
    MR_Word ml_backend__ml_global_data__V_43_43;
    MR_Word ml_backend__ml_global_data__V_44_44;
    MR_Word ml_backend__ml_global_data__V_45_45;
    MR_Word ml_backend__ml_global_data__V_29_29;
    MR_Word ml_backend__ml_global_data__V_30_30;
    MR_Word ml_backend__ml_global_data__V_31_31;
    MR_Word ml_backend__ml_global_data__V_32_32;
    MR_Word ml_backend__ml_global_data__V_33_33;
    MR_Word ml_backend__ml_global_data__V_34_34;
    MR_Word ml_backend__ml_global_data__V_35_35;
    MR_Word ml_backend__ml_global_data__V_36_36;
    MR_Word ml_backend__ml_global_data__V_37_37;
    MR_Word ml_backend__ml_global_data__V_38_38;
    MR_Word ml_backend__ml_global_data__V_39_39;
    MR_Word ml_backend__ml_global_data__V_40_40;
    MR_Word ml_backend__ml_global_data__V_41_41;
    MR_Box ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24;
    MR_Word ml_backend__ml_global_data__V_59_59;
    MR_Word ml_backend__ml_global_data__V_60_60;
    MR_Word ml_backend__ml_global_data__V_61_61;
    MR_Integer ml_backend__ml_global_data__V_62_62;
    MR_Word ml_backend__ml_global_data__V_63_63;
    MR_Word ml_backend__ml_global_data__V_64_64;
    MR_Word ml_backend__ml_global_data__V_65_65;
    MR_Word ml_backend__ml_global_data__V_66_66;
    MR_Word ml_backend__ml_global_data__V_67_67;
    MR_Word ml_backend__ml_global_data__V_68_68;
    MR_Word ml_backend__ml_global_data__V_69_69;
    MR_Word ml_backend__ml_global_data__V_70_70;
    MR_Word ml_backend__ml_global_data__V_71_71;
    MR_Word ml_backend__ml_global_data__V_72_72;
    MR_Word ml_backend__ml_global_data__V_73_73;
    MR_Word ml_backend__ml_global_data__V_74_74;
    MR_Word ml_backend__ml_global_data__V_76_76;
    MR_Word ml_backend__ml_global_data__V_77_77;
    MR_Word ml_backend__ml_global_data__V_75_75;

    {
      mercury__list__length_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9, &ml_backend__ml_global_data__NumRows_13);
    }
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    ml_backend__ml_global_data__CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
    ml_backend__ml_global_data__TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    ml_backend__ml_global_data__TypeCtorInfo_80_80 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
    {
      mercury__map__lookup_3_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ml_backend__ml_global_data__CellGroupMap0_14, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), &ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
    }
    ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24 = ((MR_Word) ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 2)));
    ml_backend__ml_global_data__StartRowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 4)));
    ml_backend__ml_global_data__NextRow_17 = (ml_backend__ml_global_data__StartRowNum_16 + ml_backend__ml_global_data__NumRows_13);
    ml_backend__ml_global_data__StructType_18 = ml_backend__ml_global_data__V_42_42;
    ml_backend__ml_global_data__Rows0_19 = ml_backend__ml_global_data__V_45_45;
    {
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 0) = ((MR_Box) (ml_backend__ml_global_data__StructType_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 1) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 2) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 3) = ((MR_Box) (ml_backend__ml_global_data__NextRow_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__Common_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__StructType_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__StartRowNum_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__NumRows_13));
    }
    {
      ml_backend__ml_global_data__V_26_26 = mercury__cord__from_list_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9);
    }
    {
      ml_backend__ml_global_data__Rows_20 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__Rows0_19, ml_backend__ml_global_data__V_26_26);
    }
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 4)));
    {
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_20));
    }
    {
      mercury__map__det_update_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27)), ml_backend__ml_global_data__CellGroupMap0_14, &ml_backend__ml_global_data__CellGroupMap_21);
    }
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_66_66));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_67_67));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_68_68));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_69_69));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_70_70));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_71_71));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_72_72));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_73_73));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_74_74));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_21));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_76_76));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_77_77));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_10,
  MR_Word ml_backend__ml_global_data__MLDS_Context_11,
  MR_Word ml_backend__ml_global_data__Target_12,
  MR_Word ml_backend__ml_global_data__ArgTypes_13,
  MR_Word * ml_backend__ml_global_data__TypeNum_14,
  MR_Word * ml_backend__ml_global_data__StructType_15,
  MR_Word * ml_backend__ml_global_data__FieldIds_16,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__TypeNumMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__OldTypeNum_19;
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_19;

    {
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_18, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_19);
    }
    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__OldTypeNum_19 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_19);
        ml_backend__ml_global_data__succeeded = MR_TRUE;
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        MR_Word ml_backend__ml_global_data__CellGroup_21;
        MR_Box ml_backend__ml_global_data__conv1_CellGroup_21;
        MR_Word ml_backend__ml_global_data___TypeDefn_22;
        MR_Integer ml_backend__ml_global_data__V_23_23;
        MR_Word ml_backend__ml_global_data__V_24_24;

        *ml_backend__ml_global_data__TypeNum_14 = ml_backend__ml_global_data__OldTypeNum_19;
        {
          mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ml_backend__ml_global_data__V_97_97, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), &ml_backend__ml_global_data__conv1_CellGroup_21);
        }
        ml_backend__ml_global_data__CellGroup_21 = ((MR_Word) ml_backend__ml_global_data__conv1_CellGroup_21);
        *ml_backend__ml_global_data__StructType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 0)));
        ml_backend__ml_global_data___TypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 1)));
        *ml_backend__ml_global_data__FieldIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 4)));
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46;
      }
    else
      {
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_186_186;
        MR_Integer ml_backend__ml_global_data__TypeRawNum_26;
        MR_Word ml_backend__ml_global_data__TypeNumCounter_27;
        MR_String ml_backend__ml_global_data__TypeRawNumStr_28;
        MR_Word ml_backend__ml_global_data__TypeNumMap_29;
        MR_Word ml_backend__ml_global_data__FieldFlags_30;
        MR_String ml_backend__ml_global_data__FieldNamePrefix_31;
        MR_Word ml_backend__ml_global_data__FieldNames_32;
        MR_Word ml_backend__ml_global_data__FieldDefns_33;
        MR_Word ml_backend__ml_global_data__ClassKind_34;
        MR_Word ml_backend__ml_global_data__CtorDefns_35;
        MR_Word ml_backend__ml_global_data__ClassDefn_37;
        MR_String ml_backend__ml_global_data__StructTypeName_38;
        MR_Word ml_backend__ml_global_data__StructTypeEntityName_39;
        MR_Word ml_backend__ml_global_data__StructTypeEntityDefn_40;
        MR_Word ml_backend__ml_global_data__StructTypeFlags_41;
        MR_Word ml_backend__ml_global_data__StructTypeDefn_42;
        MR_Word ml_backend__ml_global_data__QualStructTypeName_43;
        MR_Word ml_backend__ml_global_data__MLDS_ClassModuleName_44;
        MR_Word ml_backend__ml_global_data__CellGroupMap0_45;
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48;
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49;
        MR_Word ml_backend__ml_global_data__V_83_83;
        MR_Word ml_backend__ml_global_data__CellGroupMap_85;
        MR_Word ml_backend__ml_global_data__CellGroup_86;
        MR_Word ml_backend__ml_global_data__V_126_126;
        MR_Word ml_backend__ml_global_data__V_127_127;
        MR_Word ml_backend__ml_global_data__V_128_128;
        MR_Word ml_backend__ml_global_data__V_129_129;
        MR_Word ml_backend__ml_global_data__V_130_130;
        MR_Word ml_backend__ml_global_data__V_131_131;
        MR_Word ml_backend__ml_global_data__V_132_132;
        MR_Word ml_backend__ml_global_data__V_134_134;
        MR_Word ml_backend__ml_global_data__V_135_135;
        MR_Word ml_backend__ml_global_data__V_136_136;
        MR_Word ml_backend__ml_global_data__V_137_137;
        MR_Word ml_backend__ml_global_data__V_138_138;
        MR_Word ml_backend__ml_global_data__V_139_139;
        MR_Word ml_backend__ml_global_data__V_133_133;
        MR_Word ml_backend__ml_global_data__V_140_140;
        MR_Word ml_backend__ml_global_data__V_141_141;
        MR_Word ml_backend__ml_global_data__V_142_142;
        MR_Word ml_backend__ml_global_data__V_143_143;
        MR_Word ml_backend__ml_global_data__V_144_144;
        MR_Word ml_backend__ml_global_data__V_145_145;
        MR_Word ml_backend__ml_global_data__V_146_146;
        MR_Word ml_backend__ml_global_data__V_147_147;
        MR_Word ml_backend__ml_global_data__V_148_148;
        MR_Word ml_backend__ml_global_data__V_149_149;
        MR_Word ml_backend__ml_global_data__V_151_151;
        MR_Word ml_backend__ml_global_data__V_152_152;
        MR_Word ml_backend__ml_global_data__V_153_153;
        MR_Word ml_backend__ml_global_data__V_150_150;
        MR_Word ml_backend__ml_global_data__V_154_154;
        MR_Word ml_backend__ml_global_data__V_155_155;
        MR_Word ml_backend__ml_global_data__V_156_156;
        MR_Word ml_backend__ml_global_data__V_157_157;
        MR_Word ml_backend__ml_global_data__V_158_158;
        MR_Word ml_backend__ml_global_data__V_159_159;
        MR_Word ml_backend__ml_global_data__V_160_160;
        MR_Word ml_backend__ml_global_data__V_161_161;
        MR_Word ml_backend__ml_global_data__V_162_162;
        MR_Word ml_backend__ml_global_data__V_163_163;
        MR_Word ml_backend__ml_global_data__V_164_164;
        MR_Word ml_backend__ml_global_data__V_165_165;
        MR_Word ml_backend__ml_global_data__V_166_166;
        MR_Word ml_backend__ml_global_data__V_167_167;
        MR_Word ml_backend__ml_global_data__V_168_168;
        MR_Word ml_backend__ml_global_data__V_169_169;
        MR_Word ml_backend__ml_global_data__V_170_170;
        MR_Word ml_backend__ml_global_data__V_171_171;
        MR_Word ml_backend__ml_global_data__V_172_172;
        MR_Word ml_backend__ml_global_data__V_173_173;
        MR_Word ml_backend__ml_global_data__V_174_174;
        MR_Word ml_backend__ml_global_data__V_175_175;
        MR_Word ml_backend__ml_global_data__V_176_176;
        MR_Word ml_backend__ml_global_data__V_177_177;
        MR_Word ml_backend__ml_global_data__V_179_179;
        MR_Word ml_backend__ml_global_data__V_180_180;
        MR_Word ml_backend__ml_global_data__V_178_178;

        {
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_26, ml_backend__ml_global_data__V_94_94, &ml_backend__ml_global_data__TypeNumCounter_27);
        }
        {
          ml_backend__ml_global_data__TypeRawNumStr_28 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__TypeRawNum_26);
        }
        *ml_backend__ml_global_data__TypeNum_14 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_26;
        ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
        ml_backend__ml_global_data__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 0) = ((MR_Box) (ml_backend__ml_global_data__V_126_126));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 1) = ((MR_Box) (ml_backend__ml_global_data__V_127_127));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 2) = ((MR_Box) (ml_backend__ml_global_data__V_128_128));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 3) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 4) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 5) = ((MR_Box) (ml_backend__ml_global_data__V_131_131));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 6) = ((MR_Box) (ml_backend__ml_global_data__V_132_132));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_27));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 8) = ((MR_Box) (ml_backend__ml_global_data__V_134_134));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 9) = ((MR_Box) (ml_backend__ml_global_data__V_135_135));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 10) = ((MR_Box) (ml_backend__ml_global_data__V_136_136));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 11) = ((MR_Box) (ml_backend__ml_global_data__V_137_137));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 12) = ((MR_Box) (ml_backend__ml_global_data__V_138_138));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 13) = ((MR_Box) (ml_backend__ml_global_data__V_139_139));
        }
        ml_backend__ml_global_data__TypeCtorInfo_186_186 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_186_186, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ml_backend__ml_global_data__TypeNumMap0_18, &ml_backend__ml_global_data__TypeNumMap_29);
        }
        ml_backend__ml_global_data__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 10)));
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 0) = ((MR_Box) (ml_backend__ml_global_data__V_140_140));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 1) = ((MR_Box) (ml_backend__ml_global_data__V_141_141));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 2) = ((MR_Box) (ml_backend__ml_global_data__V_142_142));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 3) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 4) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 5) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 6) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 7) = ((MR_Box) (ml_backend__ml_global_data__V_147_147));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 8) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 9) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 10) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_29));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 11) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 12) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 13) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
        }
        {
          ml_backend__ml_global_data__FieldFlags_30 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
        }
        {
          ml_backend__ml_global_data__FieldNamePrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "vct_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
        {
          ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(ml_backend__ml_global_data__MLDS_Context_11, ml_backend__ml_global_data__FieldFlags_30, ml_backend__ml_global_data__FieldNamePrefix_31, (MR_Integer) 0, ml_backend__ml_global_data__ArgTypes_13, &ml_backend__ml_global_data__FieldNames_32, &ml_backend__ml_global_data__FieldDefns_33);
        }
        {
          ml_backend__ml_global_data__StructTypeName_38 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_type_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
        {
          ml_backend__ml_global_data__StructTypeEntityName_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeEntityName_39, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_38));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeEntityName_39, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ml_backend__ml_global_data__StructTypeFlags_41 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0);
        }
        {
          ml_backend__ml_global_data__QualStructTypeName_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_10));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_global_data__StructType_15 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__QualStructTypeName_43));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 3));
        }
        switch (ml_backend__ml_global_data__Target_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
              ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_global_data__CtorDefn_36;

              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
              {
                ml_backend__ml_global_data__CtorDefn_36 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
              }
              {
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_36));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "predicate \140ml_backend.ml_global_data.ml_gen_static_vector_type\'/9", (MR_String) "unsupported target language");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_global_data__CtorDefn_189;

              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 0;
              {
                ml_backend__ml_global_data__CtorDefn_189 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
              }
              {
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_189));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
        }
        {
          ml_backend__ml_global_data__ClassDefn_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ClassKind_34));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 5) = ((MR_Box) (ml_backend__ml_global_data__CtorDefns_35));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 6) = ((MR_Box) (ml_backend__ml_global_data__FieldDefns_33));
        }
        ml_backend__ml_global_data__StructTypeEntityDefn_40 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__ClassDefn_37);
        {
          ml_backend__ml_global_data__StructTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeEntityName_39));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_11));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeFlags_41));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 3) = ((MR_Box) (ml_backend__ml_global_data__StructTypeEntityDefn_40));
        }
        {
          ml_backend__ml_global_data__MLDS_ClassModuleName_44 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_global_data__Target_12, ml_backend__ml_global_data__MLDS_ModuleName_10, (MR_Integer) 0, ml_backend__ml_global_data__StructTypeName_38, (MR_Integer) 0);
        }
        {
          ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ClassModuleName_44, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__FieldNames_32, ml_backend__ml_global_data__FieldIds_16);
        }
        {
          ml_backend__ml_global_data__V_83_83 = mercury__cord__empty_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
        }
        {
          ml_backend__ml_global_data__CellGroup_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 0) = ((MR_Box) (*ml_backend__ml_global_data__StructType_15));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 1) = ((MR_Box) (ml_backend__ml_global_data__StructTypeDefn_42));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 2) = ((MR_Box) (*ml_backend__ml_global_data__FieldIds_16));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 3) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 4) = ((MR_Box) (ml_backend__ml_global_data__V_83_83));
        }
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 10)));
        ml_backend__ml_global_data__CellGroupMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 13)));
        {
          mercury__map__det_insert_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_186_186, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ((MR_Box) (ml_backend__ml_global_data__CellGroup_86)), ml_backend__ml_global_data__CellGroupMap0_45, &ml_backend__ml_global_data__CellGroupMap_85);
        }
        ml_backend__ml_global_data__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 0)));
        ml_backend__ml_global_data__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 1)));
        ml_backend__ml_global_data__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 2)));
        ml_backend__ml_global_data__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 3)));
        ml_backend__ml_global_data__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 4)));
        ml_backend__ml_global_data__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 5)));
        ml_backend__ml_global_data__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 6)));
        ml_backend__ml_global_data__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 7)));
        ml_backend__ml_global_data__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 8)));
        ml_backend__ml_global_data__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 9)));
        ml_backend__ml_global_data__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 10)));
        ml_backend__ml_global_data__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 11)));
        ml_backend__ml_global_data__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 12)));
        ml_backend__ml_global_data__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 13)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_167_167));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_168_168));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_169_169));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_170_170));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_171_171));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_172_172));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_173_173));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_174_174));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_175_175));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_176_176));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_177_177));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_85));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_179_179));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_180_180));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
  MR_Box ml_backend__ml_global_data__closure_arg,
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

    {
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_9,
  MR_String ml_backend__ml_global_data__ConstBaseName_10,
  MR_Word ml_backend__ml_global_data__ConstType0_11,
  MR_Word ml_backend__ml_global_data__Initializer0_12,
  MR_Word ml_backend__ml_global_data__Context_13,
  MR_Word * ml_backend__ml_global_data__DataAddrRval_14,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__ConstType_16;
    MR_Word ml_backend__ml_global_data__Initializer_17;
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
    MR_Word ml_backend__ml_global_data__Inits_49;
    MR_Word ml_backend__ml_global_data__Types_50;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_57;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_58;
    MR_Word ml_backend__ml_global_data__Inits0_48;
    MR_Word ml_backend__ml_global_data__V_51_51;
    MR_Word ml_backend__ml_global_data__V_52_52;
    MR_Word ml_backend__ml_global_data__V_53_53;
    MR_Word ml_backend__ml_global_data__V_31_31;
    MR_Word ml_backend__ml_global_data__V_32_32;
    MR_Word ml_backend__ml_global_data__V_33_33;
    MR_Word ml_backend__ml_global_data__V_34_34;
    MR_Word ml_backend__ml_global_data__V_35_35;
    MR_Word ml_backend__ml_global_data__V_36_36;
    MR_Word ml_backend__ml_global_data__V_37_37;
    MR_Word ml_backend__ml_global_data__V_38_38;
    MR_Word ml_backend__ml_global_data__V_39_39;
    MR_Word ml_backend__ml_global_data__V_40_40;
    MR_Word ml_backend__ml_global_data__V_41_41;
    MR_Word ml_backend__ml_global_data__V_42_42;
    MR_Word ml_backend__ml_global_data__V_43_43;

    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__Inits0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
                ml_backend__ml_global_data__V_52_52 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[8];
                ml_backend__ml_global_data__TypeCtorInfo_18_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
                ml_backend__ml_global_data__TypeCtorInfo_19_58 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
                {
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_19_58, ml_backend__ml_global_data__V_52_52, ml_backend__ml_global_data__Inits0_48, &ml_backend__ml_global_data__Inits_49, &ml_backend__ml_global_data__Types_50);
                }
                ml_backend__ml_global_data__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                {
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_58, ((MR_Box) (ml_backend__ml_global_data__V_53_53)), ml_backend__ml_global_data__Types_50);
                }
              }
          }
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        {
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_50));
        }
        {
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_49));
        }
      }
    else
      {
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
      }
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 0)));
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 13)));
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_global_data__VarName_22;
          MR_Word ml_backend__ml_global_data__DataName_23;
          MR_Word ml_backend__ml_global_data__V_27_27;
          MR_Word ml_backend__ml_global_data__DataAddr_30;

          {
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_22, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
          ml_backend__ml_global_data__DataName_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__VarName_22);
          {
            ml_backend__ml_global_data__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 1) = ((MR_Box) (ml_backend__ml_global_data__DataName_23));
          }
          ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_30);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_global_data__Common_19;
          MR_Word ml_backend__ml_global_data__CommonDataName_20;
          MR_Word ml_backend__ml_global_data__DataAddr_21;
          MR_Word ml_backend__ml_global_data__V_29_29;

          {
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
          {
            ml_backend__ml_global_data__CommonDataName_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__CommonDataName_20, 0) = ((MR_Box) (ml_backend__ml_global_data__Common_19));
          }
          {
            ml_backend__ml_global_data__DataAddr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 1) = ((MR_Box) (ml_backend__ml_global_data__CommonDataName_20));
          }
          ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
  MR_Box ml_backend__ml_global_data__closure_arg,
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

    {
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_9,
  MR_String ml_backend__ml_global_data__ConstBaseName_10,
  MR_Word ml_backend__ml_global_data__ConstType0_11,
  MR_Word ml_backend__ml_global_data__Initializer0_12,
  MR_Word ml_backend__ml_global_data__Context_13,
  MR_Word * ml_backend__ml_global_data__DataRval_14,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__ConstType_16;
    MR_Word ml_backend__ml_global_data__Initializer_17;
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
    MR_Word ml_backend__ml_global_data__Inits_46;
    MR_Word ml_backend__ml_global_data__Types_47;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_54;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_55;
    MR_Word ml_backend__ml_global_data__Inits0_45;
    MR_Word ml_backend__ml_global_data__V_48_48;
    MR_Word ml_backend__ml_global_data__V_49_49;
    MR_Word ml_backend__ml_global_data__V_50_50;
    MR_Word ml_backend__ml_global_data__V_28_28;
    MR_Word ml_backend__ml_global_data__V_29_29;
    MR_Word ml_backend__ml_global_data__V_30_30;
    MR_Word ml_backend__ml_global_data__V_31_31;
    MR_Word ml_backend__ml_global_data__V_32_32;
    MR_Word ml_backend__ml_global_data__V_33_33;
    MR_Word ml_backend__ml_global_data__V_34_34;
    MR_Word ml_backend__ml_global_data__V_35_35;
    MR_Word ml_backend__ml_global_data__V_36_36;
    MR_Word ml_backend__ml_global_data__V_37_37;
    MR_Word ml_backend__ml_global_data__V_38_38;
    MR_Word ml_backend__ml_global_data__V_39_39;
    MR_Word ml_backend__ml_global_data__V_40_40;

    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__Inits0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
                ml_backend__ml_global_data__V_49_49 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[7];
                ml_backend__ml_global_data__TypeCtorInfo_18_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
                ml_backend__ml_global_data__TypeCtorInfo_19_55 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
                {
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_19_55, ml_backend__ml_global_data__V_49_49, ml_backend__ml_global_data__Inits0_45, &ml_backend__ml_global_data__Inits_46, &ml_backend__ml_global_data__Types_47);
                }
                ml_backend__ml_global_data__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                {
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_55, ((MR_Box) (ml_backend__ml_global_data__V_50_50)), ml_backend__ml_global_data__Types_47);
                }
              }
          }
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        {
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_47));
        }
        {
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_46));
        }
      }
    else
      {
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
      }
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_global_data__VarName_20;
          MR_Word ml_backend__ml_global_data__QualVarName_21;
          MR_Word ml_backend__ml_global_data__DataVar_22;

          {
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_20, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
          {
            ml_backend__ml_global_data__QualVarName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 2) = ((MR_Box) (ml_backend__ml_global_data__VarName_20));
          }
          {
            ml_backend__ml_global_data__DataVar_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 0) = ((MR_Box) (ml_backend__ml_global_data__QualVarName_21));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_global_data__DataRval_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__DataVar_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_global_data__Common_19;

          {
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
          *ml_backend__ml_global_data__DataRval_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__Common_19);
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(
  MR_Word ml_backend__ml_global_data__Defns_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__RevDefns_7;
    MR_Word ml_backend__ml_global_data__V_10_10;
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__V_32_32;
    MR_Word ml_backend__ml_global_data__V_33_33;
    MR_Word ml_backend__ml_global_data__V_34_34;
    MR_Word ml_backend__ml_global_data__V_35_35;
    MR_Word ml_backend__ml_global_data__V_36_36;
    MR_Word ml_backend__ml_global_data__V_37_37;
    MR_Word ml_backend__ml_global_data__V_39_39;
    MR_Word ml_backend__ml_global_data__V_40_40;
    MR_Word ml_backend__ml_global_data__V_41_41;
    MR_Word ml_backend__ml_global_data__V_42_42;
    MR_Word ml_backend__ml_global_data__V_43_43;
    MR_Word ml_backend__ml_global_data__V_44_44;
    MR_Word ml_backend__ml_global_data__V_45_45;
    MR_Word ml_backend__ml_global_data__V_38_38;

    {
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
    {
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defns_3_p_0(
  MR_Word ml_backend__ml_global_data__Defns_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__RevDefns_7;
    MR_Word ml_backend__ml_global_data__V_10_10;
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__V_32_32;
    MR_Word ml_backend__ml_global_data__V_33_33;
    MR_Word ml_backend__ml_global_data__V_34_34;
    MR_Word ml_backend__ml_global_data__V_35_35;
    MR_Word ml_backend__ml_global_data__V_36_36;
    MR_Word ml_backend__ml_global_data__V_38_38;
    MR_Word ml_backend__ml_global_data__V_39_39;
    MR_Word ml_backend__ml_global_data__V_40_40;
    MR_Word ml_backend__ml_global_data__V_41_41;
    MR_Word ml_backend__ml_global_data__V_42_42;
    MR_Word ml_backend__ml_global_data__V_43_43;
    MR_Word ml_backend__ml_global_data__V_44_44;
    MR_Word ml_backend__ml_global_data__V_45_45;
    MR_Word ml_backend__ml_global_data__V_37_37;

    {
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
    {
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defn_3_p_0(
  MR_Word ml_backend__ml_global_data__Defn_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__RevDefns_7;
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));

    {
      ml_backend__ml_global_data__RevDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_4));
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_23_23));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_24_24));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(
  MR_Word ml_backend__ml_global_data__RttiId_5,
  MR_Word ml_backend__ml_global_data__RvalType_6,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap_9;
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__V_35_35;
    MR_Word ml_backend__ml_global_data__V_36_36;
    MR_Word ml_backend__ml_global_data__V_37_37;
    MR_Word ml_backend__ml_global_data__V_38_38;
    MR_Word ml_backend__ml_global_data__V_39_39;
    MR_Word ml_backend__ml_global_data__V_40_40;
    MR_Word ml_backend__ml_global_data__V_41_41;
    MR_Word ml_backend__ml_global_data__V_42_42;
    MR_Word ml_backend__ml_global_data__V_43_43;
    MR_Word ml_backend__ml_global_data__V_44_44;
    MR_Word ml_backend__ml_global_data__V_45_45;
    MR_Word ml_backend__ml_global_data__V_46_46;
    MR_Word ml_backend__ml_global_data__V_47_47;
    MR_Word ml_backend__ml_global_data__V_34_34;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ((MR_Box) (ml_backend__ml_global_data__RttiId_5)), ((MR_Box) (ml_backend__ml_global_data__RvalType_6)), ml_backend__ml_global_data__PDupRvalTypeMap0_8, &ml_backend__ml_global_data__PDupRvalTypeMap_9);
    }
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__PDupRvalTypeMap_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_46_46));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_maybe_nonflat_defns_3_p_0(
  MR_Word ml_backend__ml_global_data__Defns_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(
  MR_Word ml_backend__ml_global_data__GlobalData_3,
  MR_Word * ml_backend__ml_global_data__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__V_4_4;
    MR_Word ml_backend__ml_global_data__V_5_5;
    MR_Word ml_backend__ml_global_data__V_6_6;
    MR_Word ml_backend__ml_global_data__V_7_7;
    MR_Word ml_backend__ml_global_data__V_8_8;
    MR_Word ml_backend__ml_global_data__V_9_9;
    MR_Word ml_backend__ml_global_data__V_10_10;
    MR_Word ml_backend__ml_global_data__V_11_11;
    MR_Word ml_backend__ml_global_data__V_12_12;
    MR_Word ml_backend__ml_global_data__V_13_13;
    MR_Word ml_backend__ml_global_data__V_14_14;
    MR_Word ml_backend__ml_global_data__V_15_15;
    MR_Word ml_backend__ml_global_data__V_16_16;

    *ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
    ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
    ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
    ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
    ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
    ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
    ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
    ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
    ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
    ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
    ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
    ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
    ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
    ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_p_0(
  MR_Word ml_backend__ml_global_data__GlobalData_6,
  MR_Word * ml_backend__ml_global_data__ScalarCellGroupMap_7,
  MR_Word * ml_backend__ml_global_data__VectorCellGroupMap_8,
  MR_Word * ml_backend__ml_global_data__AllocIds_9,
  MR_Word * ml_backend__ml_global_data__Defns_10)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_29_29;
    MR_Word ml_backend__ml_global_data__RevFlatCellDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__RevFlatRttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__RevMaybeNonFlatDefns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__AllocIdMap_22;
    MR_Word ml_backend__ml_global_data__V_23_23;
    MR_Word ml_backend__ml_global_data__V_24_24;
    MR_Word ml_backend__ml_global_data__V_25_25;
    MR_Word ml_backend__ml_global_data__V_26_26;
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data___UseCommonCells_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data___ConstCounter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data___TypeNumCounter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_20;
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_21;

    *ml_backend__ml_global_data__ScalarCellGroupMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 9)));
    ml_backend__ml_global_data___VectorTypeNumMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 10)));
    *ml_backend__ml_global_data__VectorCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 11)));
    ml_backend__ml_global_data___AllocIdNumCounter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 12)));
    ml_backend__ml_global_data__AllocIdMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 13)));
    {
      mercury__bimap__to_assoc_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__AllocIdMap_22, ml_backend__ml_global_data__AllocIds_9);
    }
    ml_backend__ml_global_data__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      ml_backend__ml_global_data__V_23_23 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatRttiDefns_16);
    }
    {
      ml_backend__ml_global_data__V_25_25 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevMaybeNonFlatDefns_17);
    }
    {
      ml_backend__ml_global_data__V_26_26 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatCellDefns_15);
    }
    {
      ml_backend__ml_global_data__V_24_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_25_25, ml_backend__ml_global_data__V_26_26);
    }
    {
      *ml_backend__ml_global_data__Defns_10 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_23_23, ml_backend__ml_global_data__V_24_24);
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_global_defns_6_p_0(
  MR_Word ml_backend__ml_global_data__GlobalData_7,
  MR_Word * ml_backend__ml_global_data__ScalarCellGroupMap_8,
  MR_Word * ml_backend__ml_global_data__VectorCellGroupMap_9,
  MR_Word * ml_backend__ml_global_data__RevFlatCellDefns_10,
  MR_Word * ml_backend__ml_global_data__RevFlatRttiDefns_11,
  MR_Word * ml_backend__ml_global_data__RevMaybeNonFlatDefns_12)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data___UseCommonCells_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data___ConstCounter_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data___TypeNumCounter_17;
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_18;
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_19;
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_20;
    MR_Word ml_backend__ml_global_data___AllocIdMap_21;

    *ml_backend__ml_global_data__RevFlatCellDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 4)));
    *ml_backend__ml_global_data__RevFlatRttiDefns_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 5)));
    *ml_backend__ml_global_data__RevMaybeNonFlatDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 6)));
    ml_backend__ml_global_data___TypeNumCounter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 7)));
    ml_backend__ml_global_data___ScalarTypeNumMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 8)));
    *ml_backend__ml_global_data__ScalarCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 9)));
    ml_backend__ml_global_data___VectorTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 10)));
    *ml_backend__ml_global_data__VectorCellGroupMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 11)));
    ml_backend__ml_global_data___AllocIdNumCounter_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 12)));
    ml_backend__ml_global_data___AllocIdMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 13)));
  }
}

MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_1_f_0(
  MR_Word ml_backend__ml_global_data__GlobalData_3)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));

    return ml_backend__ml_global_data__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_init_2_f_0(
  MR_Word ml_backend__ml_global_data__UseCommonCells_4,
  MR_Word ml_backend__ml_global_data__HaveUnboxedFloats_5)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__GlobalData_6;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_25_25;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_28_28;
    MR_Word ml_backend__ml_global_data__V_7_7;
    MR_Word ml_backend__ml_global_data__V_8_8;
    MR_Word ml_backend__ml_global_data__V_13_13;
    MR_Word ml_backend__ml_global_data__V_15_15;
    MR_Word ml_backend__ml_global_data__V_16_16;
    MR_Word ml_backend__ml_global_data__V_17_17;
    MR_Word ml_backend__ml_global_data__V_18_18;
    MR_Word ml_backend__ml_global_data__V_19_19;
    MR_Word ml_backend__ml_global_data__V_21_21;

    {
      ml_backend__ml_global_data__V_7_7 = mercury__map__init_0_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
    }
    {
      ml_backend__ml_global_data__V_8_8 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    {
      ml_backend__ml_global_data__V_13_13 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    ml_backend__ml_global_data__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
    {
      ml_backend__ml_global_data__V_15_15 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, ml_backend__ml_global_data__TypeCtorInfo_25_25);
    }
    {
      ml_backend__ml_global_data__V_16_16 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_25_25, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
    }
    ml_backend__ml_global_data__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    {
      ml_backend__ml_global_data__V_17_17 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_28_28);
    }
    {
      ml_backend__ml_global_data__V_18_18 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_28_28, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
    }
    {
      ml_backend__ml_global_data__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_global_data__V_21_21 = mercury__bimap__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
    }
    {
      ml_backend__ml_global_data__GlobalData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 0) = ((MR_Box) (ml_backend__ml_global_data__V_7_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 1) = ((MR_Box) (ml_backend__ml_global_data__UseCommonCells_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 2) = ((MR_Box) (ml_backend__ml_global_data__HaveUnboxedFloats_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 3) = ((MR_Box) (ml_backend__ml_global_data__V_8_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 7) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 8) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 9) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 10) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 11) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 12) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 13) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
    }
    return ml_backend__ml_global_data__GlobalData_6;
  }
}

void mercury__ml_backend__ml_global_data__init(void)
{
}

void mercury__ml_backend__ml_global_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_id_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rtti_rval_type_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_type_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0);
}

void mercury__ml_backend__ml_global_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_global_data. */
