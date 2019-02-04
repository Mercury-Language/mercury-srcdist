/*
** Automatically generated from `ml_global_data.m'
** by the Mercury compiler,
** version DEV
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
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

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

static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
  MR_Word ml_backend__ml_global_data__Init0_4,
  MR_Word * ml_backend__ml_global_data__Init_5,
  MR_Word * ml_backend__ml_global_data__Type_6);

static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_15);

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
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(
  MR_Word ml_backend__ml_global_data__Context_1,
  MR_Word ml_backend__ml_global_data__Flags_2,
  MR_Integer ml_backend__ml_global_data__TypeRawNum_3,
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7,
  MR_Word * ml_backend__ml_global_data__HeadVar__8_8);

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

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
  MR_Word ml_backend__ml_global_data__ConstVarKind_8,
  MR_Word ml_backend__ml_global_data__ConstType_9,
  MR_Word ml_backend__ml_global_data__Initializer_10,
  MR_Word ml_backend__ml_global_data__Context_11,
  MR_Word * ml_backend__ml_global_data__VarName_12,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
  MR_Word ml_backend__ml_global_data__ConstType_8,
  MR_Word ml_backend__ml_global_data__Initializer_9,
  MR_Word * ml_backend__ml_global_data__Common_10,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35);

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


static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_3[1][6];




static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_name_0,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
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
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0,
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
  (MR_String) "mgd_cell_defns",
  (MR_String) "mgd_rtti_defns",
  (MR_String) "mgd_closure_wrapper_funcs",
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0(
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
{
  {
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
        MR_Word ml_backend__ml_global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ml_backend__ml_global_data__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__Var_14;

        {
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__Var_14, ml_backend__ml_global_data__ArgX1_4, ml_backend__ml_global_data__ArgY1_5);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_14 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_14;
        else
          {
            MR_Word ml_backend__ml_global_data__Var_15;

            {
              ml_backend__mlds____Compare____mlds_class_defn_0_0(&ml_backend__ml_global_data__Var_15, ml_backend__ml_global_data__ArgX2_6, ml_backend__ml_global_data__ArgY2_7);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_15 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_15;
            else
              {
                MR_Word ml_backend__ml_global_data__Var_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[4], &ml_backend__ml_global_data__Var_16, ((MR_Box) (ml_backend__ml_global_data__ArgX3_8)), ((MR_Box) (ml_backend__ml_global_data__ArgY3_9)));
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_16 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_16;
                else
                  {
                    MR_Word ml_backend__ml_global_data__Var_17;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__Var_17, ml_backend__ml_global_data__ArgX4_10, ml_backend__ml_global_data__ArgY4_11);
                    }
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_17 == (MR_Integer) 0);
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                    if (ml_backend__ml_global_data__succeeded)
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[3], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__ArgX5_12)), ((MR_Box) (ml_backend__ml_global_data__ArgY5_13)));
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
        MR_Word ml_backend__ml_global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer ml_backend__ml_global_data__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__ArgX1_3, ml_backend__ml_global_data__ArgY1_4);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            {
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_class_defn_0_0(ml_backend__ml_global_data__ArgX2_5, ml_backend__ml_global_data__ArgY2_6);
            }
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[4];
                {
                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_global_data__ArgX3_7)), ((MR_Box) (ml_backend__ml_global_data__ArgY3_8)));
                }
                if (ml_backend__ml_global_data__succeeded)
                  {
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__ArgX4_9 == ml_backend__ml_global_data__ArgY4_10);
                    if (ml_backend__ml_global_data__succeeded)
                      {
                        ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
                        {
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__ArgX5_11)), ((MR_Box) (ml_backend__ml_global_data__ArgY5_12)));
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
        MR_Word ml_backend__ml_global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__Var_8;

        {
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__Var_8, ml_backend__ml_global_data__ArgX1_4, ml_backend__ml_global_data__ArgY1_5);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_8 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_8;
        else
          {
            ml_backend__mlds____Compare____initializer_array_size_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__ArgX2_6, ml_backend__ml_global_data__ArgY2_7);
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
        MR_Word ml_backend__ml_global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__ArgX1_3, ml_backend__ml_global_data__ArgY1_4);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__ArgX2_5, ml_backend__ml_global_data__ArgY2_6);
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
        MR_Word ml_backend__ml_global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__Var_14;

        {
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__Var_14, ml_backend__ml_global_data__ArgX1_4, ml_backend__ml_global_data__ArgY1_5);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_14 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_14;
        else
          {
            MR_Word ml_backend__ml_global_data__Var_15;

            {
              ml_backend__mlds____Compare____initializer_array_size_0_0(&ml_backend__ml_global_data__Var_15, ml_backend__ml_global_data__ArgX2_6, ml_backend__ml_global_data__ArgY2_7);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_15 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_15;
            else
              {
                MR_Word ml_backend__ml_global_data__Var_16;

                {
                  mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__Var_16, ml_backend__ml_global_data__ArgX3_8, ml_backend__ml_global_data__ArgY3_9);
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_16 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_16;
                else
                  {
                    MR_Word ml_backend__ml_global_data__Var_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[6], &ml_backend__ml_global_data__Var_17, ((MR_Box) (ml_backend__ml_global_data__ArgX4_10)), ((MR_Box) (ml_backend__ml_global_data__ArgY4_11)));
                    }
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_17 == (MR_Integer) 0);
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                    if (ml_backend__ml_global_data__succeeded)
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[3], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__ArgX5_12)), ((MR_Box) (ml_backend__ml_global_data__ArgY5_13)));
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
        MR_Word ml_backend__ml_global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__ArgX1_3, ml_backend__ml_global_data__ArgY1_4);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            {
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__ArgX2_5, ml_backend__ml_global_data__ArgY2_6);
            }
            if (ml_backend__ml_global_data__succeeded)
              {
                {
                  ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__ArgX3_7, ml_backend__ml_global_data__ArgY3_8);
                }
                if (ml_backend__ml_global_data__succeeded)
                  {
                    ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[6];
                    {
                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__ArgX4_9)), ((MR_Box) (ml_backend__ml_global_data__ArgY4_10)));
                    }
                    if (ml_backend__ml_global_data__succeeded)
                      {
                        ml_backend__ml_global_data__TypeInfo_19_19 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
                        {
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_19_19, ((MR_Box) (ml_backend__ml_global_data__ArgX5_11)), ((MR_Box) (ml_backend__ml_global_data__ArgY5_12)));
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
        MR_Word ml_backend__ml_global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__Var_8;

        {
          ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_global_data__Var_8, ml_backend__ml_global_data__ArgX1_4, ml_backend__ml_global_data__ArgY1_5);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_8 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_8;
        else
          {
            ml_backend__mlds____Compare____mlds_type_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__ArgX2_6, ml_backend__ml_global_data__ArgY2_7);
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
        MR_Word ml_backend__ml_global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_global_data__ArgX1_3, ml_backend__ml_global_data__ArgY1_4);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__ArgX2_5, ml_backend__ml_global_data__ArgY2_6);
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
        MR_Word ml_backend__ml_global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__Var_32;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], &ml_backend__ml_global_data__Var_32, ((MR_Box) (ml_backend__ml_global_data__ArgX1_4)), ((MR_Box) (ml_backend__ml_global_data__ArgY1_5)));
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_32 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_32;
        else
          {
            MR_Word ml_backend__ml_global_data__Var_33;
            MR_Integer ml_backend__ml_global_data__Var_61 = (MR_Integer) ml_backend__ml_global_data__ArgX2_6;
            MR_Integer ml_backend__ml_global_data__Var_62 = (MR_Integer) ml_backend__ml_global_data__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__Var_33, ml_backend__ml_global_data__Var_61, ml_backend__ml_global_data__Var_62);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_33 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_33;
            else
              {
                MR_Word ml_backend__ml_global_data__Var_34;
                MR_Integer ml_backend__ml_global_data__Var_63 = (MR_Integer) ml_backend__ml_global_data__ArgX3_8;
                MR_Integer ml_backend__ml_global_data__Var_64 = (MR_Integer) ml_backend__ml_global_data__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__Var_34, ml_backend__ml_global_data__Var_63, ml_backend__ml_global_data__Var_64);
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_34 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_34;
                else
                  {
                    MR_Word ml_backend__ml_global_data__Var_35;

                    {
                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__Var_35, ml_backend__ml_global_data__ArgX4_10, ml_backend__ml_global_data__ArgY4_11);
                    }
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_35 == (MR_Integer) 0);
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                    if (ml_backend__ml_global_data__succeeded)
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_35;
                    else
                      {
                        MR_Word ml_backend__ml_global_data__Var_36;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__Var_36, ((MR_Box) (ml_backend__ml_global_data__ArgX5_12)), ((MR_Box) (ml_backend__ml_global_data__ArgY5_13)));
                        }
                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_36 == (MR_Integer) 0);
                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                        if (ml_backend__ml_global_data__succeeded)
                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_36;
                        else
                          {
                            MR_Word ml_backend__ml_global_data__Var_37;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__Var_37, ((MR_Box) (ml_backend__ml_global_data__ArgX6_14)), ((MR_Box) (ml_backend__ml_global_data__ArgY6_15)));
                            }
                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_37 == (MR_Integer) 0);
                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                            if (ml_backend__ml_global_data__succeeded)
                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_37;
                            else
                              {
                                MR_Word ml_backend__ml_global_data__Var_38;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], &ml_backend__ml_global_data__Var_38, ((MR_Box) (ml_backend__ml_global_data__ArgX7_16)), ((MR_Box) (ml_backend__ml_global_data__ArgY7_17)));
                                }
                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_38 == (MR_Integer) 0);
                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                if (ml_backend__ml_global_data__succeeded)
                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_38;
                                else
                                  {
                                    MR_Word ml_backend__ml_global_data__Var_39;

                                    {
                                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__Var_39, ml_backend__ml_global_data__ArgX8_18, ml_backend__ml_global_data__ArgY8_19);
                                    }
                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_39 == (MR_Integer) 0);
                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                    if (ml_backend__ml_global_data__succeeded)
                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_39;
                                    else
                                      {
                                        MR_Word ml_backend__ml_global_data__Var_40;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], &ml_backend__ml_global_data__Var_40, ((MR_Box) (ml_backend__ml_global_data__ArgX9_20)), ((MR_Box) (ml_backend__ml_global_data__ArgY9_21)));
                                        }
                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_40 == (MR_Integer) 0);
                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                        if (ml_backend__ml_global_data__succeeded)
                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_40;
                                        else
                                          {
                                            MR_Word ml_backend__ml_global_data__Var_41;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], &ml_backend__ml_global_data__Var_41, ((MR_Box) (ml_backend__ml_global_data__ArgX10_22)), ((MR_Box) (ml_backend__ml_global_data__ArgY10_23)));
                                            }
                                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_41 == (MR_Integer) 0);
                                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                            if (ml_backend__ml_global_data__succeeded)
                                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_41;
                                            else
                                              {
                                                MR_Word ml_backend__ml_global_data__Var_42;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], &ml_backend__ml_global_data__Var_42, ((MR_Box) (ml_backend__ml_global_data__ArgX11_24)), ((MR_Box) (ml_backend__ml_global_data__ArgY11_25)));
                                                }
                                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_42 == (MR_Integer) 0);
                                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                                if (ml_backend__ml_global_data__succeeded)
                                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_42;
                                                else
                                                  {
                                                    MR_Word ml_backend__ml_global_data__Var_43;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], &ml_backend__ml_global_data__Var_43, ((MR_Box) (ml_backend__ml_global_data__ArgX12_26)), ((MR_Box) (ml_backend__ml_global_data__ArgY12_27)));
                                                    }
                                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_43 == (MR_Integer) 0);
                                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                                    if (ml_backend__ml_global_data__succeeded)
                                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_43;
                                                    else
                                                      {
                                                        MR_Word ml_backend__ml_global_data__Var_44;

                                                        {
                                                          mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__Var_44, ml_backend__ml_global_data__ArgX13_28, ml_backend__ml_global_data__ArgY13_29);
                                                        }
                                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_44 == (MR_Integer) 0);
                                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                                                        if (ml_backend__ml_global_data__succeeded)
                                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_44;
                                                        else
                                                          {
                                                            {
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__ArgX14_30)), ((MR_Box) (ml_backend__ml_global_data__ArgY14_31)));
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
        MR_Word ml_backend__ml_global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));

        {
          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__ArgX1_3)), ((MR_Box) (ml_backend__ml_global_data__ArgY1_4)));
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__ArgX2_5 == ml_backend__ml_global_data__ArgY2_6);
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__ArgX3_7 == ml_backend__ml_global_data__ArgY3_8);
                if (ml_backend__ml_global_data__succeeded)
                  {
                    {
                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__ArgX4_9, ml_backend__ml_global_data__ArgY4_10);
                    }
                    if (ml_backend__ml_global_data__succeeded)
                      {
                        ml_backend__ml_global_data__TypeInfo_35_35 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
                        {
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_35_35, ((MR_Box) (ml_backend__ml_global_data__ArgX5_11)), ((MR_Box) (ml_backend__ml_global_data__ArgY5_12)));
                        }
                        if (ml_backend__ml_global_data__succeeded)
                          {
                            ml_backend__ml_global_data__TypeInfo_36_36 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
                            {
                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_36_36, ((MR_Box) (ml_backend__ml_global_data__ArgX6_13)), ((MR_Box) (ml_backend__ml_global_data__ArgY6_14)));
                            }
                            if (ml_backend__ml_global_data__succeeded)
                              {
                                ml_backend__ml_global_data__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
                                {
                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_37_37, ((MR_Box) (ml_backend__ml_global_data__ArgX7_15)), ((MR_Box) (ml_backend__ml_global_data__ArgY7_16)));
                                }
                                if (ml_backend__ml_global_data__succeeded)
                                  {
                                    {
                                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__ArgX8_17, ml_backend__ml_global_data__ArgY8_18);
                                    }
                                    if (ml_backend__ml_global_data__succeeded)
                                      {
                                        ml_backend__ml_global_data__TypeInfo_39_39 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[2];
                                        {
                                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_39_39, ((MR_Box) (ml_backend__ml_global_data__ArgX9_19)), ((MR_Box) (ml_backend__ml_global_data__ArgY9_20)));
                                        }
                                        if (ml_backend__ml_global_data__succeeded)
                                          {
                                            ml_backend__ml_global_data__TypeInfo_40_40 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[3];
                                            {
                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_40_40, ((MR_Box) (ml_backend__ml_global_data__ArgX10_21)), ((MR_Box) (ml_backend__ml_global_data__ArgY10_22)));
                                            }
                                            if (ml_backend__ml_global_data__succeeded)
                                              {
                                                ml_backend__ml_global_data__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[4];
                                                {
                                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_global_data__ArgX11_23)), ((MR_Box) (ml_backend__ml_global_data__ArgY11_24)));
                                                }
                                                if (ml_backend__ml_global_data__succeeded)
                                                  {
                                                    ml_backend__ml_global_data__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[5];
                                                    {
                                                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_global_data__ArgX12_25)), ((MR_Box) (ml_backend__ml_global_data__ArgY12_26)));
                                                    }
                                                    if (ml_backend__ml_global_data__succeeded)
                                                      {
                                                        {
                                                          ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__ArgX13_27, ml_backend__ml_global_data__ArgY13_28);
                                                        }
                                                        if (ml_backend__ml_global_data__succeeded)
                                                          {
                                                            ml_backend__ml_global_data__TypeInfo_44_44 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[0];
                                                            {
                                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_44_44, ((MR_Box) (ml_backend__ml_global_data__ArgX14_29)), ((MR_Box) (ml_backend__ml_global_data__ArgY14_30)));
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
        MR_Word ml_backend__ml_global_data__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_String ml_backend__ml_global_data__ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_String ml_backend__ml_global_data__ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ml_backend__ml_global_data__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__Var_12;

        {
          ml_backend__mlds____Compare____mlds_function_name_0_0(&ml_backend__ml_global_data__Var_12, ml_backend__ml_global_data__ArgX1_4, ml_backend__ml_global_data__ArgY1_5);
        }
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_12 == (MR_Integer) 0);
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
        if (ml_backend__ml_global_data__succeeded)
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_12;
        else
          {
            MR_Word ml_backend__ml_global_data__Var_13;

            {
              mercury__term____Compare____context_0_0(&ml_backend__ml_global_data__Var_13, ml_backend__ml_global_data__ArgX2_6, ml_backend__ml_global_data__ArgY2_7);
            }
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_13 == (MR_Integer) 0);
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
            if (ml_backend__ml_global_data__succeeded)
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_13;
            else
              {
                MR_Word ml_backend__ml_global_data__Var_14;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ml_backend__ml_global_data__Var_14, ml_backend__ml_global_data__ArgX3_8, ml_backend__ml_global_data__ArgY3_9);
                }
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_14 == (MR_Integer) 0);
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
                if (ml_backend__ml_global_data__succeeded)
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__Var_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__ArgX4_10, ml_backend__ml_global_data__ArgY4_11);
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
        MR_Word ml_backend__ml_global_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ml_backend__ml_global_data__ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_String ml_backend__ml_global_data__ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ml_backend__ml_global_data__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer ml_backend__ml_global_data__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));

        {
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ml_backend__ml_global_data__ArgX1_3, ml_backend__ml_global_data__ArgY1_4);
        }
        if (ml_backend__ml_global_data__succeeded)
          {
            {
              ml_backend__ml_global_data__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_global_data__ArgX2_5, ml_backend__ml_global_data__ArgY2_6);
            }
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__succeeded = (strcmp(ml_backend__ml_global_data__ArgX3_7, ml_backend__ml_global_data__ArgY3_8) == 0);
                if (ml_backend__ml_global_data__succeeded)
                  ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__ArgX4_9 == ml_backend__ml_global_data__ArgY4_10);
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
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
      }
    else
      {
        *ml_backend__ml_global_data__Init_5 = ml_backend__ml_global_data__Init0_4;
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_global_data__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14)) {
          default:
            ml_backend__ml_global_data__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14, (MR_Integer) 0)))) {
              default:
                ml_backend__ml_global_data__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14, (MR_Integer) 1)));
                  MR_Float ml_backend__ml_global_data__Var_4;

                  ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Var_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (ml_backend__ml_global_data__succeeded)
                    {
                      ml_backend__ml_global_data__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Var_22, (MR_Integer) 1)));
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_15 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14;
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_global_data__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_global_data__SubRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14, (MR_Integer) 2)));
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
                      if ((ml_backend__ml_global_data__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
                        {
                          *ml_backend__ml_global_data__STATE_VARIABLE_Rval_15 = ml_backend__ml_global_data__SubRval_6;
                          ml_backend__ml_global_data__succeeded = MR_TRUE;
                        }
                      else
                      if (((MR_tag((MR_Word) ml_backend__ml_global_data__Type_7)) == (MR_mktag((MR_Integer) 2))))
                        {
                          MR_Word ml_backend__ml_global_data__CtorCat_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 1)));
                          MR_Word ml_backend__ml_global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 0)));
                          MR_Word ml_backend__ml_global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 2)));

                          if (((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_10)) == (MR_mktag((MR_Integer) 1))))
                            {
                              MR_Word ml_backend__ml_global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorCat_10, (MR_Integer) 0)));

                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (ml_backend__ml_global_data__succeeded)
                                {
                                  *ml_backend__ml_global_data__STATE_VARIABLE_Rval_15 = ml_backend__ml_global_data__SubRval_6;
                                  ml_backend__ml_global_data__succeeded = MR_TRUE;
                                }
                            }
                          else
                          if (((((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
                            {
                              MR_Word ml_backend__ml_global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_10, (MR_Integer) 1)));

                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_17 == (MR_Integer) 1);
                              if (ml_backend__ml_global_data__succeeded)
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word ml_backend__ml_global_data__next_value_of_STATE_VARIABLE_Rval_0_14 = ml_backend__ml_global_data__SubRval_6;

                                    ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14 = ml_backend__ml_global_data__next_value_of_STATE_VARIABLE_Rval_0_14;
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
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_global_data__Op_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14, (MR_Integer) 3)));

                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ml_backend__ml_global_data__Op_23)) {
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
                        case (MR_Integer) 16:
                        case (MR_Integer) 17:
                        case (MR_Integer) 18:
                        case (MR_Integer) 19:
                        case (MR_Integer) 20:
                        case (MR_Integer) 21:
                        case (MR_Integer) 22:
                        case (MR_Integer) 24:
                        case (MR_Integer) 25:
                        case (MR_Integer) 26:
                          {
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                          }
                          break;
                        case (MR_Integer) 12:
                        case (MR_Integer) 13:
                        case (MR_Integer) 14:
                        case (MR_Integer) 15:
                        case (MR_Integer) 23:
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
                    case (MR_Integer) 3:
                      {
                        ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                      }
                      break;
                  }
                  if (ml_backend__ml_global_data__succeeded)
                    {
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_15 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_14;
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
    MR_Word ml_backend__ml_global_data__Var_27;
    MR_Word ml_backend__ml_global_data__Var_28;
    MR_Word ml_backend__ml_global_data__Var_29;
    MR_Word ml_backend__ml_global_data__Var_30;
    MR_Word ml_backend__ml_global_data__Var_31;
    MR_Word ml_backend__ml_global_data__Var_32;
    MR_Word ml_backend__ml_global_data__Var_33;
    MR_Word ml_backend__ml_global_data__Var_34;
    MR_Word ml_backend__ml_global_data__Var_35;
    MR_Word ml_backend__ml_global_data__Var_36;
    MR_Word ml_backend__ml_global_data__Var_37;
    MR_Word ml_backend__ml_global_data__Var_38;
    MR_Word ml_backend__ml_global_data__Var_39;
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
    ml_backend__ml_global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
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
        MR_Word ml_backend__ml_global_data__Var_53;
        MR_Word ml_backend__ml_global_data__Var_54;
        MR_Word ml_backend__ml_global_data__Var_55;
        MR_Word ml_backend__ml_global_data__Var_56;
        MR_Word ml_backend__ml_global_data__Var_57;
        MR_Word ml_backend__ml_global_data__Var_58;
        MR_Word ml_backend__ml_global_data__Var_59;
        MR_Word ml_backend__ml_global_data__Var_60;
        MR_Word ml_backend__ml_global_data__Var_61;
        MR_Word ml_backend__ml_global_data__Var_62;
        MR_Word ml_backend__ml_global_data__Var_63;
        MR_Word ml_backend__ml_global_data__Var_64;
        MR_Word ml_backend__ml_global_data__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
        MR_Word ml_backend__ml_global_data__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__Var_65;
        MR_Word ml_backend__ml_global_data__Var_66;

        {
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__AllocIdNum_20, ml_backend__ml_global_data__Counter0_19, &ml_backend__ml_global_data__Counter_21);
        }
        *ml_backend__ml_global_data__AllocId_12 = (MR_Word) ml_backend__ml_global_data__AllocIdNum_20;
        {
          mercury__bimap__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ((MR_Box) (*ml_backend__ml_global_data__AllocId_12)), ((MR_Box) (ml_backend__ml_global_data__AllocData_16)), ml_backend__ml_global_data__Map0_17, &ml_backend__ml_global_data__Map_22);
        }
        ml_backend__ml_global_data__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
        ml_backend__ml_global_data__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_53));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_54));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_55));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_56));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_57));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_58));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_59));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_60));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_61));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_62));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_63));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_64));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Counter_21));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Map_22));
        }
      }
  }
}

static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
  MR_Word ml_backend__ml_global_data__ConsId_3)
{
  {
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
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_global_data__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_global_data__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_global_data__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 2)));

              {
                ml_backend__ml_global_data__TypeStr_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(ml_backend__ml_global_data__TypeCtor_7);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ml_backend__ml_global_data__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
              MR_String ml_backend__ml_global_data__Var_42;

              {
                ml_backend__ml_global_data__Var_42 = mercury__string__from_int_1_f_0(ml_backend__ml_global_data__Arity_8);
              }
              {
                ml_backend__ml_global_data__TypeStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", ml_backend__ml_global_data__Var_42);
              }
            }
            break;
          case (MR_Integer) 4:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "closure";
            break;
          case (MR_Integer) 19:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "type_info_const";
            break;
          case (MR_Integer) 20:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info_const";
            break;
          case (MR_Integer) 21:
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "ground_term_const";
            break;
        }
        break;
    }
    return ml_backend__ml_global_data__TypeStr_4;
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
    MR_Word ml_backend__ml_global_data__Var_26;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27;
    MR_Word ml_backend__ml_global_data__Var_42;
    MR_Word ml_backend__ml_global_data__Var_43;
    MR_Word ml_backend__ml_global_data__Var_44;
    MR_Word ml_backend__ml_global_data__Var_45;
    MR_Word ml_backend__ml_global_data__Var_29;
    MR_Word ml_backend__ml_global_data__Var_30;
    MR_Word ml_backend__ml_global_data__Var_31;
    MR_Word ml_backend__ml_global_data__Var_32;
    MR_Word ml_backend__ml_global_data__Var_33;
    MR_Word ml_backend__ml_global_data__Var_34;
    MR_Word ml_backend__ml_global_data__Var_35;
    MR_Word ml_backend__ml_global_data__Var_36;
    MR_Word ml_backend__ml_global_data__Var_37;
    MR_Word ml_backend__ml_global_data__Var_38;
    MR_Word ml_backend__ml_global_data__Var_39;
    MR_Word ml_backend__ml_global_data__Var_40;
    MR_Word ml_backend__ml_global_data__Var_41;
    MR_Box ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24;
    MR_Word ml_backend__ml_global_data__Var_59;
    MR_Word ml_backend__ml_global_data__Var_60;
    MR_Word ml_backend__ml_global_data__Var_61;
    MR_Integer ml_backend__ml_global_data__Var_62;
    MR_Word ml_backend__ml_global_data__Var_63;
    MR_Word ml_backend__ml_global_data__Var_64;
    MR_Word ml_backend__ml_global_data__Var_65;
    MR_Word ml_backend__ml_global_data__Var_66;
    MR_Word ml_backend__ml_global_data__Var_67;
    MR_Word ml_backend__ml_global_data__Var_68;
    MR_Word ml_backend__ml_global_data__Var_69;
    MR_Word ml_backend__ml_global_data__Var_70;
    MR_Word ml_backend__ml_global_data__Var_71;
    MR_Word ml_backend__ml_global_data__Var_72;
    MR_Word ml_backend__ml_global_data__Var_73;
    MR_Word ml_backend__ml_global_data__Var_74;
    MR_Word ml_backend__ml_global_data__Var_76;
    MR_Word ml_backend__ml_global_data__Var_77;
    MR_Word ml_backend__ml_global_data__Var_75;

    {
      mercury__list__length_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9, &ml_backend__ml_global_data__NumRows_13);
    }
    ml_backend__ml_global_data__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    ml_backend__ml_global_data__CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
    ml_backend__ml_global_data__TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    ml_backend__ml_global_data__TypeCtorInfo_80_80 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
    {
      mercury__map__lookup_3_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ml_backend__ml_global_data__CellGroupMap0_14, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), &ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
    }
    ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24 = ((MR_Word) ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
    ml_backend__ml_global_data__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 2)));
    ml_backend__ml_global_data__StartRowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 4)));
    ml_backend__ml_global_data__NextRow_17 = (ml_backend__ml_global_data__StartRowNum_16 + ml_backend__ml_global_data__NumRows_13);
    ml_backend__ml_global_data__StructType_18 = ml_backend__ml_global_data__Var_42;
    ml_backend__ml_global_data__Rows0_19 = ml_backend__ml_global_data__Var_45;
    {
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 0) = ((MR_Box) (ml_backend__ml_global_data__StructType_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_43));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_44));
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
      ml_backend__ml_global_data__Var_26 = mercury__cord__from_list_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9);
    }
    {
      ml_backend__ml_global_data__Rows_20 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__Rows0_19, ml_backend__ml_global_data__Var_26);
    }
    ml_backend__ml_global_data__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 4)));
    {
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_62));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_20));
    }
    {
      mercury__map__det_update_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27)), ml_backend__ml_global_data__CellGroupMap0_14, &ml_backend__ml_global_data__CellGroupMap_21);
    }
    ml_backend__ml_global_data__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_64));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_65));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_66));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_67));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_68));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_69));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_70));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_71));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_72));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_73));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_74));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_21));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_76));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_77));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_10,
  MR_Word ml_backend__ml_global_data__Context_11,
  MR_Word ml_backend__ml_global_data__Target_12,
  MR_Word ml_backend__ml_global_data__ArgTypes_13,
  MR_Word * ml_backend__ml_global_data__TypeNum_14,
  MR_Word * ml_backend__ml_global_data__StructType_15,
  MR_Word * ml_backend__ml_global_data__FieldIds_16,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_45)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded;
    MR_Word ml_backend__ml_global_data__TypeNumMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 13)));
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
        MR_Integer ml_backend__ml_global_data__Var_23;
        MR_Word ml_backend__ml_global_data__Var_24;

        *ml_backend__ml_global_data__TypeNum_14 = ml_backend__ml_global_data__OldTypeNum_19;
        {
          mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ml_backend__ml_global_data__Var_85, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), &ml_backend__ml_global_data__conv1_CellGroup_21);
        }
        ml_backend__ml_global_data__CellGroup_21 = ((MR_Word) ml_backend__ml_global_data__conv1_CellGroup_21);
        *ml_backend__ml_global_data__StructType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 0)));
        ml_backend__ml_global_data___TypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 1)));
        *ml_backend__ml_global_data__FieldIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 4)));
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_45 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44;
      }
    else
      {
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_174_174;
        MR_Integer ml_backend__ml_global_data__TypeRawNum_26;
        MR_Word ml_backend__ml_global_data__TypeNumCounter_27;
        MR_String ml_backend__ml_global_data__TypeRawNumStr_28;
        MR_Word ml_backend__ml_global_data__TypeNumMap_29;
        MR_Word ml_backend__ml_global_data__FieldNames_31;
        MR_Word ml_backend__ml_global_data__FieldDefns_32;
        MR_Word ml_backend__ml_global_data__FieldInfos_33;
        MR_Word ml_backend__ml_global_data__ClassKind_34;
        MR_Word ml_backend__ml_global_data__CtorDefns_35;
        MR_String ml_backend__ml_global_data__StructTypeName_37;
        MR_Word ml_backend__ml_global_data__StructTypeClassName_38;
        MR_Word ml_backend__ml_global_data__StructTypeFlags_39;
        MR_Word ml_backend__ml_global_data__StructTypeDefn_40;
        MR_Word ml_backend__ml_global_data__QualStructTypeName_41;
        MR_Word ml_backend__ml_global_data__MLDS_ClassModuleName_42;
        MR_Word ml_backend__ml_global_data__CellGroupMap0_43;
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46;
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47;
        MR_Word ml_backend__ml_global_data__Var_71;
        MR_Word ml_backend__ml_global_data__CellGroupMap_73;
        MR_Word ml_backend__ml_global_data__CellGroup_74;
        MR_Word ml_backend__ml_global_data__Var_114;
        MR_Word ml_backend__ml_global_data__Var_115;
        MR_Word ml_backend__ml_global_data__Var_116;
        MR_Word ml_backend__ml_global_data__Var_117;
        MR_Word ml_backend__ml_global_data__Var_118;
        MR_Word ml_backend__ml_global_data__Var_119;
        MR_Word ml_backend__ml_global_data__Var_120;
        MR_Word ml_backend__ml_global_data__Var_122;
        MR_Word ml_backend__ml_global_data__Var_123;
        MR_Word ml_backend__ml_global_data__Var_124;
        MR_Word ml_backend__ml_global_data__Var_125;
        MR_Word ml_backend__ml_global_data__Var_126;
        MR_Word ml_backend__ml_global_data__Var_127;
        MR_Word ml_backend__ml_global_data__Var_121;
        MR_Word ml_backend__ml_global_data__Var_128;
        MR_Word ml_backend__ml_global_data__Var_129;
        MR_Word ml_backend__ml_global_data__Var_130;
        MR_Word ml_backend__ml_global_data__Var_131;
        MR_Word ml_backend__ml_global_data__Var_132;
        MR_Word ml_backend__ml_global_data__Var_133;
        MR_Word ml_backend__ml_global_data__Var_134;
        MR_Word ml_backend__ml_global_data__Var_135;
        MR_Word ml_backend__ml_global_data__Var_136;
        MR_Word ml_backend__ml_global_data__Var_137;
        MR_Word ml_backend__ml_global_data__Var_139;
        MR_Word ml_backend__ml_global_data__Var_140;
        MR_Word ml_backend__ml_global_data__Var_141;
        MR_Word ml_backend__ml_global_data__Var_138;
        MR_Word ml_backend__ml_global_data__Var_142;
        MR_Word ml_backend__ml_global_data__Var_143;
        MR_Word ml_backend__ml_global_data__Var_144;
        MR_Word ml_backend__ml_global_data__Var_145;
        MR_Word ml_backend__ml_global_data__Var_146;
        MR_Word ml_backend__ml_global_data__Var_147;
        MR_Word ml_backend__ml_global_data__Var_148;
        MR_Word ml_backend__ml_global_data__Var_149;
        MR_Word ml_backend__ml_global_data__Var_150;
        MR_Word ml_backend__ml_global_data__Var_151;
        MR_Word ml_backend__ml_global_data__Var_152;
        MR_Word ml_backend__ml_global_data__Var_153;
        MR_Word ml_backend__ml_global_data__Var_154;
        MR_Word ml_backend__ml_global_data__Var_155;
        MR_Word ml_backend__ml_global_data__Var_156;
        MR_Word ml_backend__ml_global_data__Var_157;
        MR_Word ml_backend__ml_global_data__Var_158;
        MR_Word ml_backend__ml_global_data__Var_159;
        MR_Word ml_backend__ml_global_data__Var_160;
        MR_Word ml_backend__ml_global_data__Var_161;
        MR_Word ml_backend__ml_global_data__Var_162;
        MR_Word ml_backend__ml_global_data__Var_163;
        MR_Word ml_backend__ml_global_data__Var_164;
        MR_Word ml_backend__ml_global_data__Var_165;
        MR_Word ml_backend__ml_global_data__Var_167;
        MR_Word ml_backend__ml_global_data__Var_168;
        MR_Word ml_backend__ml_global_data__Var_166;

        {
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_26, ml_backend__ml_global_data__Var_82, &ml_backend__ml_global_data__TypeNumCounter_27);
        }
        {
          ml_backend__ml_global_data__TypeRawNumStr_28 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__TypeRawNum_26);
        }
        *ml_backend__ml_global_data__TypeNum_14 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_26;
        ml_backend__ml_global_data__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 10)));
        ml_backend__ml_global_data__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_114));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_115));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_116));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_117));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_118));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_119));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_120));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_27));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_122));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_123));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_124));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_125));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_126));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_127));
        }
        ml_backend__ml_global_data__TypeCtorInfo_174_174 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_174_174, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ml_backend__ml_global_data__TypeNumMap0_18, &ml_backend__ml_global_data__TypeNumMap_29);
        }
        ml_backend__ml_global_data__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 10)));
        ml_backend__ml_global_data__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_128));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_129));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_130));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_131));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_132));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_133));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_134));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_135));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_136));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_137));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 10) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_29));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_139));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_140));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_141));
        }
        {
          ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(ml_backend__ml_global_data__Context_11, (MR_Word) &ml_backend__ml_global_data_scalar_common_1[6], ml_backend__ml_global_data__TypeRawNum_26, (MR_Integer) 0, ml_backend__ml_global_data__ArgTypes_13, &ml_backend__ml_global_data__FieldNames_31, &ml_backend__ml_global_data__FieldDefns_32, &ml_backend__ml_global_data__FieldInfos_33);
        }
        {
          ml_backend__ml_global_data__StructTypeName_37 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_type_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
        {
          ml_backend__ml_global_data__StructTypeClassName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeClassName_38, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_37));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeClassName_38, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ml_backend__ml_global_data__StructTypeFlags_39 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0);
        }
        {
          ml_backend__ml_global_data__QualStructTypeName_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_41, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_10));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_41, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_41, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_37));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_global_data__StructType_15 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__QualStructTypeName_41));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 2));
        }
        switch (ml_backend__ml_global_data__Target_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 2;
              ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_global_data__CtorDefn_36;

              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 2;
              {
                ml_backend__ml_global_data__CtorDefn_36 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldInfos_33, ml_backend__ml_global_data__Context_11);
              }
              {
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_36));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_global_data__CtorDefn_177;

              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 0;
              {
                ml_backend__ml_global_data__CtorDefn_177 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldInfos_33, ml_backend__ml_global_data__Context_11);
              }
              {
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_177));
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
        }
        {
          ml_backend__ml_global_data__StructTypeDefn_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeClassName_38));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 1) = ((MR_Box) (ml_backend__ml_global_data__Context_11));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeFlags_39));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 3) = ((MR_Box) (ml_backend__ml_global_data__ClassKind_34));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 8) = ((MR_Box) (ml_backend__ml_global_data__FieldDefns_32));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_40, 11) = ((MR_Box) (ml_backend__ml_global_data__CtorDefns_35));
        }
        {
          ml_backend__ml_global_data__MLDS_ClassModuleName_42 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(ml_backend__ml_global_data__MLDS_ModuleName_10, ml_backend__ml_global_data__StructTypeName_37, (MR_Integer) 0);
        }
        {
          ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ClassModuleName_42, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__FieldNames_31, ml_backend__ml_global_data__FieldIds_16);
        }
        {
          ml_backend__ml_global_data__Var_71 = mercury__cord__empty_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
        }
        {
          ml_backend__ml_global_data__CellGroup_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_74, 0) = ((MR_Box) (*ml_backend__ml_global_data__StructType_15));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_74, 1) = ((MR_Box) (ml_backend__ml_global_data__StructTypeDefn_40));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_74, 2) = ((MR_Box) (*ml_backend__ml_global_data__FieldIds_16));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_74, 3) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_74, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_71));
        }
        ml_backend__ml_global_data__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 10)));
        ml_backend__ml_global_data__CellGroupMap0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 13)));
        {
          mercury__map__det_insert_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_174_174, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ((MR_Box) (ml_backend__ml_global_data__CellGroup_74)), ml_backend__ml_global_data__CellGroupMap0_43, &ml_backend__ml_global_data__CellGroupMap_73);
        }
        ml_backend__ml_global_data__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 10)));
        ml_backend__ml_global_data__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 13)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_45 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_155));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_156));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_157));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_158));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_159));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_160));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_161));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_162));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_163));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_164));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_165));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_73));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_167));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_168));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_1,
  MR_Word ml_backend__ml_global_data__StructType_2,
  MR_Word ml_backend__ml_global_data__HeadVar__3_3,
  MR_Word * ml_backend__ml_global_data__HeadVar__4_4)
{
  if ((ml_backend__ml_global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ml_backend__ml_global_data__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
    {
      MR_Word ml_backend__ml_global_data__FieldName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_global_data__FieldNames_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_global_data__FieldId_11;
      MR_Word ml_backend__ml_global_data__FieldIds_12;
      MR_Word ml_backend__ml_global_data__QualName_13;

      {
        ml_backend__ml_global_data__QualName_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 2) = ((MR_Box) (ml_backend__ml_global_data__FieldName_9));
      }
      {
        ml_backend__ml_global_data__FieldId_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldId_11, 0) = ((MR_Box) (ml_backend__ml_global_data__QualName_13));
        MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldId_11, 1) = ((MR_Box) (ml_backend__ml_global_data__StructType_2));
      }
      {
        ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ModuleName_1, ml_backend__ml_global_data__StructType_2, ml_backend__ml_global_data__FieldNames_10, &ml_backend__ml_global_data__FieldIds_12);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_global_data__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldId_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldIds_12));
      }
    }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(
  MR_Word ml_backend__ml_global_data__Context_1,
  MR_Word ml_backend__ml_global_data__Flags_2,
  MR_Integer ml_backend__ml_global_data__TypeRawNum_3,
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7,
  MR_Word * ml_backend__ml_global_data__HeadVar__8_8)
{
  if ((ml_backend__ml_global_data__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ml_backend__ml_global_data__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_global_data__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_global_data__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  else
    {
      MR_Word ml_backend__ml_global_data__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 0)));
      MR_Word ml_backend__ml_global_data__Types_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 1)));
      MR_Word ml_backend__ml_global_data__FieldVarName_19;
      MR_Word ml_backend__ml_global_data__FieldVarNames_20;
      MR_Word ml_backend__ml_global_data__FieldDataDefn_21;
      MR_Word ml_backend__ml_global_data__FieldDataDefns_22;
      MR_Word ml_backend__ml_global_data__FieldInfo_23;
      MR_Word ml_backend__ml_global_data__FieldInfos_24;
      MR_Integer ml_backend__ml_global_data__Var_28;

      {
        ml_backend__ml_global_data__FieldVarName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldVarName_19, 0) = ((MR_Box) (ml_backend__ml_global_data__TypeRawNum_3));
        MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldVarName_19, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldNum_4));
      }
      {
        ml_backend__ml_global_data__FieldDataDefn_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDataDefn_21, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldVarName_19));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDataDefn_21, 1) = ((MR_Box) (ml_backend__ml_global_data__Context_1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDataDefn_21, 2) = ((MR_Box) (ml_backend__ml_global_data__Flags_2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDataDefn_21, 3) = ((MR_Box) (ml_backend__ml_global_data__Type_17));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDataDefn_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDataDefn_21, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__ml_global_data__FieldInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldInfo_23, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldVarName_19));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldInfo_23, 1) = ((MR_Box) (ml_backend__ml_global_data__Type_17));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldInfo_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldInfo_23, 3) = ((MR_Box) (ml_backend__ml_global_data__Context_1));
      }
      ml_backend__ml_global_data__Var_28 = (ml_backend__ml_global_data__FieldNum_4 + (MR_Integer) 1);
      {
        ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(ml_backend__ml_global_data__Context_1, ml_backend__ml_global_data__Flags_2, ml_backend__ml_global_data__TypeRawNum_3, ml_backend__ml_global_data__Var_28, ml_backend__ml_global_data__Types_18, &ml_backend__ml_global_data__FieldVarNames_20, &ml_backend__ml_global_data__FieldDataDefns_22, &ml_backend__ml_global_data__FieldInfos_24);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_global_data__HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldVarName_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldVarNames_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_global_data__HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldDataDefn_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldDataDefns_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_global_data__HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldInfo_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldInfos_24));
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
  MR_Word ml_backend__ml_global_data__ConstVarKind_10,
  MR_Word ml_backend__ml_global_data__ConstType0_11,
  MR_Word ml_backend__ml_global_data__Initializer0_12,
  MR_Word ml_backend__ml_global_data__Context_13,
  MR_Word * ml_backend__ml_global_data__DataAddrRval_14,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_22)
{
  {
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__ConstType_16;
    MR_Word ml_backend__ml_global_data__Initializer_17;
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
    MR_Word ml_backend__ml_global_data__Inits_44;
    MR_Word ml_backend__ml_global_data__Types_45;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_52;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_53;
    MR_Word ml_backend__ml_global_data__Inits0_43;
    MR_Word ml_backend__ml_global_data__Var_46;
    MR_Word ml_backend__ml_global_data__Var_47;
    MR_Word ml_backend__ml_global_data__Var_48;
    MR_Word ml_backend__ml_global_data__Var_26;
    MR_Word ml_backend__ml_global_data__Var_27;
    MR_Word ml_backend__ml_global_data__Var_28;
    MR_Word ml_backend__ml_global_data__Var_29;
    MR_Word ml_backend__ml_global_data__Var_30;
    MR_Word ml_backend__ml_global_data__Var_31;
    MR_Word ml_backend__ml_global_data__Var_32;
    MR_Word ml_backend__ml_global_data__Var_33;
    MR_Word ml_backend__ml_global_data__Var_34;
    MR_Word ml_backend__ml_global_data__Var_35;
    MR_Word ml_backend__ml_global_data__Var_36;
    MR_Word ml_backend__ml_global_data__Var_37;
    MR_Word ml_backend__ml_global_data__Var_38;

    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__Inits0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
                ml_backend__ml_global_data__Var_47 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[8];
                ml_backend__ml_global_data__TypeCtorInfo_18_52 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
                ml_backend__ml_global_data__TypeCtorInfo_19_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
                {
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_52, ml_backend__ml_global_data__TypeCtorInfo_18_52, ml_backend__ml_global_data__TypeCtorInfo_19_53, ml_backend__ml_global_data__Var_47, ml_backend__ml_global_data__Inits0_43, &ml_backend__ml_global_data__Inits_44, &ml_backend__ml_global_data__Types_45);
                }
                ml_backend__ml_global_data__Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                {
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_53, ((MR_Box) (ml_backend__ml_global_data__Var_48)), ml_backend__ml_global_data__Types_45);
                }
              }
          }
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        {
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_45));
        }
        {
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_44));
        }
      }
    else
      {
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
      }
    ml_backend__ml_global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 0)));
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 13)));
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_global_data__VarName_20;
          MR_Word ml_backend__ml_global_data__Var_24;

          {
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstVarKind_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_20, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_22);
          }
          {
            ml_backend__ml_global_data__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Var_24, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Var_24, 2) = ((MR_Box) (ml_backend__ml_global_data__VarName_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_24));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_global_data__Common_19;

          {
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_21, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_22);
          }
          *ml_backend__ml_global_data__DataAddrRval_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__Common_19);
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
  MR_Word ml_backend__ml_global_data__ConstVarKind_10,
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
    MR_Word ml_backend__ml_global_data__Inits_45;
    MR_Word ml_backend__ml_global_data__Types_46;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_53;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_54;
    MR_Word ml_backend__ml_global_data__Inits0_44;
    MR_Word ml_backend__ml_global_data__Var_47;
    MR_Word ml_backend__ml_global_data__Var_48;
    MR_Word ml_backend__ml_global_data__Var_49;
    MR_Word ml_backend__ml_global_data__Var_27;
    MR_Word ml_backend__ml_global_data__Var_28;
    MR_Word ml_backend__ml_global_data__Var_29;
    MR_Word ml_backend__ml_global_data__Var_30;
    MR_Word ml_backend__ml_global_data__Var_31;
    MR_Word ml_backend__ml_global_data__Var_32;
    MR_Word ml_backend__ml_global_data__Var_33;
    MR_Word ml_backend__ml_global_data__Var_34;
    MR_Word ml_backend__ml_global_data__Var_35;
    MR_Word ml_backend__ml_global_data__Var_36;
    MR_Word ml_backend__ml_global_data__Var_37;
    MR_Word ml_backend__ml_global_data__Var_38;
    MR_Word ml_backend__ml_global_data__Var_39;

    if (ml_backend__ml_global_data__succeeded)
      {
        ml_backend__ml_global_data__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        if (ml_backend__ml_global_data__succeeded)
          {
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
            if (ml_backend__ml_global_data__succeeded)
              {
                ml_backend__ml_global_data__Inits0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
                ml_backend__ml_global_data__Var_48 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[7];
                ml_backend__ml_global_data__TypeCtorInfo_18_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
                ml_backend__ml_global_data__TypeCtorInfo_19_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
                {
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_53, ml_backend__ml_global_data__TypeCtorInfo_18_53, ml_backend__ml_global_data__TypeCtorInfo_19_54, ml_backend__ml_global_data__Var_48, ml_backend__ml_global_data__Inits0_44, &ml_backend__ml_global_data__Inits_45, &ml_backend__ml_global_data__Types_46);
                }
                ml_backend__ml_global_data__Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                {
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_54, ((MR_Box) (ml_backend__ml_global_data__Var_49)), ml_backend__ml_global_data__Types_46);
                }
              }
          }
      }
    if (ml_backend__ml_global_data__succeeded)
      {
        {
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_46));
        }
        {
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_45));
        }
      }
    else
      {
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
      }
    ml_backend__ml_global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_global_data__VarName_20;
          MR_Word ml_backend__ml_global_data__QualVarName_21;
          MR_Word ml_backend__ml_global_data__DataVar_22;

          {
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstVarKind_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_20, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
          {
            ml_backend__ml_global_data__QualVarName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 1) = ((MR_Box) (ml_backend__ml_global_data__VarName_20));
          }
          {
            ml_backend__ml_global_data__DataVar_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 1) = ((MR_Box) (ml_backend__ml_global_data__QualVarName_21));
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 2) = ((MR_Box) (ml_backend__ml_global_data__ConstType_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_global_data__DataRval_14 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_global_data__DataVar_22));
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

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
  MR_Word ml_backend__ml_global_data__ConstVarKind_8,
  MR_Word ml_backend__ml_global_data__ConstType_9,
  MR_Word ml_backend__ml_global_data__Initializer_10,
  MR_Word ml_backend__ml_global_data__Context_11,
  MR_Word * ml_backend__ml_global_data__VarName_12,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23)
{
  {
    MR_Word ml_backend__ml_global_data__ConstCounter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    MR_Integer ml_backend__ml_global_data__ConstNum_15;
    MR_Word ml_backend__ml_global_data__ConstCounter_16;
    MR_Word ml_backend__ml_global_data__DataDefn_19;
    MR_Word ml_backend__ml_global_data__CellDefns0_20;
    MR_Word ml_backend__ml_global_data__CellDefns_21;
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24;
    MR_Word ml_backend__ml_global_data__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__Var_49;
    MR_Word ml_backend__ml_global_data__Var_50;
    MR_Word ml_backend__ml_global_data__Var_51;
    MR_Word ml_backend__ml_global_data__Var_54;
    MR_Word ml_backend__ml_global_data__Var_55;
    MR_Word ml_backend__ml_global_data__Var_56;
    MR_Word ml_backend__ml_global_data__Var_57;
    MR_Word ml_backend__ml_global_data__Var_58;
    MR_Word ml_backend__ml_global_data__Var_59;
    MR_Word ml_backend__ml_global_data__Var_60;
    MR_Word ml_backend__ml_global_data__Var_61;
    MR_Word ml_backend__ml_global_data__Var_62;
    MR_Word ml_backend__ml_global_data__Var_52;
    MR_Word ml_backend__ml_global_data__Var_83;
    MR_Word ml_backend__ml_global_data__Var_84;
    MR_Word ml_backend__ml_global_data__Var_85;
    MR_Word ml_backend__ml_global_data__Var_86;
    MR_Word ml_backend__ml_global_data__Var_88;
    MR_Word ml_backend__ml_global_data__Var_89;
    MR_Word ml_backend__ml_global_data__Var_90;
    MR_Word ml_backend__ml_global_data__Var_91;
    MR_Word ml_backend__ml_global_data__Var_92;
    MR_Word ml_backend__ml_global_data__Var_93;
    MR_Word ml_backend__ml_global_data__Var_94;
    MR_Word ml_backend__ml_global_data__Var_95;
    MR_Word ml_backend__ml_global_data__Var_96;
    MR_Word ml_backend__ml_global_data__Var_87;

    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__ConstNum_15, ml_backend__ml_global_data__ConstCounter0_14, &ml_backend__ml_global_data__ConstCounter_16);
    }
    ml_backend__ml_global_data__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    ml_backend__ml_global_data__CellDefns0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
    {
      ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_49));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_50));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 3) = ((MR_Box) (ml_backend__ml_global_data__ConstCounter_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 4) = ((MR_Box) (ml_backend__ml_global_data__CellDefns0_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_59));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_global_data__VarName_12 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstVarKind_8));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstNum_15));
    }
    {
      ml_backend__ml_global_data__DataDefn_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataDefn_19, 0) = ((MR_Box) (*ml_backend__ml_global_data__VarName_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataDefn_19, 1) = ((MR_Box) (ml_backend__ml_global_data__Context_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataDefn_19, 2) = ((MR_Box) (&ml_backend__ml_global_data_scalar_common_1[5]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataDefn_19, 3) = ((MR_Box) (ml_backend__ml_global_data__ConstType_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataDefn_19, 4) = ((MR_Box) (ml_backend__ml_global_data__Initializer_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataDefn_19, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_global_data__CellDefns_21 = mercury__cord__snoc_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, ml_backend__ml_global_data__CellDefns0_20, ((MR_Box) (ml_backend__ml_global_data__DataDefn_19)));
    }
    ml_backend__ml_global_data__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24_24, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_83));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_84));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_85));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_86));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__CellDefns_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_88));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_89));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_90));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_91));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_92));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_93));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_94));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_95));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_96));
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
    MR_Word ml_backend__ml_global_data__Var_54;
    MR_Word ml_backend__ml_global_data__Var_55;
    MR_Word ml_backend__ml_global_data__Var_56;
    MR_Word ml_backend__ml_global_data__Var_57;
    MR_Word ml_backend__ml_global_data__Var_58;
    MR_Word ml_backend__ml_global_data__Var_59;
    MR_Word ml_backend__ml_global_data__Var_60;
    MR_Word ml_backend__ml_global_data__Var_61;
    MR_Word ml_backend__ml_global_data__Var_63;
    MR_Word ml_backend__ml_global_data__Var_64;
    MR_Word ml_backend__ml_global_data__Var_65;
    MR_Word ml_backend__ml_global_data__Var_66;
    MR_Word ml_backend__ml_global_data__OldTypeNum_17;
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_17;
    MR_Word ml_backend__ml_global_data__Var_121;
    MR_Word ml_backend__ml_global_data__Var_122;
    MR_Word ml_backend__ml_global_data__Var_123;
    MR_Word ml_backend__ml_global_data__Var_124;
    MR_Word ml_backend__ml_global_data__Var_125;
    MR_Word ml_backend__ml_global_data__Var_126;
    MR_Word ml_backend__ml_global_data__Var_127;
    MR_Word ml_backend__ml_global_data__Var_128;

    {
      ml_backend__ml_global_data__InitArraySize_12 = ml_backend__mlds__get_initializer_array_size_1_f_0(ml_backend__ml_global_data__Initializer_9);
    }
    {
      ml_backend__ml_global_data__CellType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
    }
    ml_backend__ml_global_data__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
    ml_backend__ml_global_data__TypeNumMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
    ml_backend__ml_global_data__CellGroupMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
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
            MR_Word ml_backend__ml_global_data__Var_38;
            MR_Word ml_backend__ml_global_data__Var_40;
            MR_Word ml_backend__ml_global_data__Var_41;

            {
              ml_backend__ml_global_data__Var_38 = mercury__counter__init_1_f_0((MR_Integer) 0);
            }
            ml_backend__ml_global_data__TypeCtorInfo_166_166 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
            {
              ml_backend__ml_global_data__Var_40 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
            }
            {
              ml_backend__ml_global_data__Var_41 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166);
            }
            {
              ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_38));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_40));
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_41));
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
        MR_Word ml_backend__ml_global_data__Var_45;
        MR_Word ml_backend__ml_global_data__Var_47;
        MR_Word ml_backend__ml_global_data__Var_48;
        MR_Word ml_backend__ml_global_data__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
        MR_Word ml_backend__ml_global_data__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
        MR_Word ml_backend__ml_global_data__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
        MR_Word ml_backend__ml_global_data__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
        MR_Word ml_backend__ml_global_data__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
        MR_Word ml_backend__ml_global_data__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
        MR_Word ml_backend__ml_global_data__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
        MR_Word ml_backend__ml_global_data__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
        MR_Word ml_backend__ml_global_data__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
        MR_Word ml_backend__ml_global_data__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
        MR_Word ml_backend__ml_global_data__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
        MR_Word ml_backend__ml_global_data__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
        MR_Word ml_backend__ml_global_data__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
        MR_Word ml_backend__ml_global_data__Var_93;
        MR_Word ml_backend__ml_global_data__Var_94;
        MR_Word ml_backend__ml_global_data__Var_95;
        MR_Word ml_backend__ml_global_data__Var_96;
        MR_Word ml_backend__ml_global_data__Var_97;
        MR_Word ml_backend__ml_global_data__Var_98;
        MR_Word ml_backend__ml_global_data__Var_99;
        MR_Word ml_backend__ml_global_data__Var_101;
        MR_Word ml_backend__ml_global_data__Var_102;
        MR_Word ml_backend__ml_global_data__Var_103;
        MR_Word ml_backend__ml_global_data__Var_104;
        MR_Word ml_backend__ml_global_data__Var_105;
        MR_Word ml_backend__ml_global_data__Var_106;
        MR_Word ml_backend__ml_global_data__Var_100;
        MR_Word ml_backend__ml_global_data__Var_107;
        MR_Word ml_backend__ml_global_data__Var_108;
        MR_Word ml_backend__ml_global_data__Var_109;
        MR_Word ml_backend__ml_global_data__Var_110;
        MR_Word ml_backend__ml_global_data__Var_111;
        MR_Word ml_backend__ml_global_data__Var_112;
        MR_Word ml_backend__ml_global_data__Var_113;
        MR_Word ml_backend__ml_global_data__Var_114;
        MR_Word ml_backend__ml_global_data__Var_116;
        MR_Word ml_backend__ml_global_data__Var_117;
        MR_Word ml_backend__ml_global_data__Var_118;
        MR_Word ml_backend__ml_global_data__Var_119;
        MR_Word ml_backend__ml_global_data__Var_120;
        MR_Word ml_backend__ml_global_data__Var_115;

        {
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_20, ml_backend__ml_global_data__TypeNumCounter0_19, &ml_backend__ml_global_data__TypeNumCounter_21);
        }
        ml_backend__ml_global_data__TypeNum_18 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_20;
        ml_backend__ml_global_data__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
        ml_backend__ml_global_data__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_93));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_94));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_95));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_96));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_97));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_98));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_99));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_21));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_101));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_102));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_103));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_104));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_105));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_106));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ml_backend__ml_global_data__TypeNumMap0_15, &ml_backend__ml_global_data__TypeNumMap_22);
        }
        ml_backend__ml_global_data__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 10)));
        ml_backend__ml_global_data__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 13)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_107));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_108));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_109));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_110));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_111));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_112));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_113));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_114));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 8) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_116));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_117));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_118));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_119));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_120));
        }
        {
          ml_backend__ml_global_data__Var_45 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
        ml_backend__ml_global_data__TypeCtorInfo_170_170 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
        {
          ml_backend__ml_global_data__Var_47 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
        }
        {
          ml_backend__ml_global_data__Var_48 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170);
        }
        {
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_45));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_47));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_48));
        }
      }
    ml_backend__ml_global_data__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
    ml_backend__ml_global_data__RowCounter0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
    {
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__RowNum_24, ml_backend__ml_global_data__RowCounter0_23, &ml_backend__ml_global_data__RowCounter_25);
    }
    ml_backend__ml_global_data__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
    ml_backend__ml_global_data__MembersMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
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
        MR_Word ml_backend__ml_global_data__Var_129;
        MR_Word ml_backend__ml_global_data__Var_130;
        MR_Word ml_backend__ml_global_data__Var_133;
        MR_Word ml_backend__ml_global_data__Var_131;
        MR_Word ml_backend__ml_global_data__Var_132;
        MR_Word ml_backend__ml_global_data__Var_143;
        MR_Word ml_backend__ml_global_data__Var_144;
        MR_Word ml_backend__ml_global_data__Var_145;
        MR_Word ml_backend__ml_global_data__Var_146;
        MR_Word ml_backend__ml_global_data__Var_147;
        MR_Word ml_backend__ml_global_data__Var_148;
        MR_Word ml_backend__ml_global_data__Var_149;
        MR_Word ml_backend__ml_global_data__Var_150;
        MR_Word ml_backend__ml_global_data__Var_151;
        MR_Word ml_backend__ml_global_data__Var_152;
        MR_Word ml_backend__ml_global_data__Var_153;
        MR_Word ml_backend__ml_global_data__Var_154;
        MR_Word ml_backend__ml_global_data__Var_155;
        MR_Word ml_backend__ml_global_data__Var_156;
        MR_Word ml_backend__ml_global_data__Var_158;
        MR_Word ml_backend__ml_global_data__Var_159;
        MR_Word ml_backend__ml_global_data__Var_160;
        MR_Word ml_backend__ml_global_data__Var_161;
        MR_Word ml_backend__ml_global_data__Var_157;

        *ml_backend__ml_global_data__Common_10 = ml_backend__ml_global_data__NewCommon_27;
        ml_backend__ml_global_data__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
        ml_backend__ml_global_data__Rows0_31 = ml_backend__ml_global_data__Var_133;
        {
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_129));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_130));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 2) = ((MR_Box) (ml_backend__ml_global_data__RowCounter_25));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 3) = ((MR_Box) (ml_backend__ml_global_data__MembersMap_29));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_31));
        }
        {
          ml_backend__ml_global_data__Rows_32 = mercury__cord__snoc_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, ml_backend__ml_global_data__Rows0_31, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)));
        }
        ml_backend__ml_global_data__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 4)));
        {
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_143));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_144));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_145));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_146));
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_32));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53)), ml_backend__ml_global_data__CellGroupMap0_16, &ml_backend__ml_global_data__CellGroupMap_33);
        }
        ml_backend__ml_global_data__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 0)));
        ml_backend__ml_global_data__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)));
        ml_backend__ml_global_data__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 2)));
        ml_backend__ml_global_data__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 3)));
        ml_backend__ml_global_data__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 4)));
        ml_backend__ml_global_data__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 5)));
        ml_backend__ml_global_data__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 6)));
        ml_backend__ml_global_data__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 7)));
        ml_backend__ml_global_data__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 8)));
        ml_backend__ml_global_data__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 9)));
        ml_backend__ml_global_data__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 10)));
        ml_backend__ml_global_data__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 11)));
        ml_backend__ml_global_data__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 12)));
        ml_backend__ml_global_data__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 13)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_148));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_149));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_150));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_151));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_152));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_153));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_154));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_155));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_156));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_33));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_158));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_159));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_160));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_161));
        }
      }
    else
      {
        *ml_backend__ml_global_data__Common_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeOldCommon_28, (MR_Integer) 0)));
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
      }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_closure_wrapper_func_defns_3_p_0(
  MR_Word ml_backend__ml_global_data__FuncDefns_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    MR_Word ml_backend__ml_global_data__ClosureWrapperDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__ClosureWrapperDefns_7;
    MR_Word ml_backend__ml_global_data__Var_10;
    MR_Word ml_backend__ml_global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__Var_33;
    MR_Word ml_backend__ml_global_data__Var_34;
    MR_Word ml_backend__ml_global_data__Var_35;
    MR_Word ml_backend__ml_global_data__Var_36;
    MR_Word ml_backend__ml_global_data__Var_37;
    MR_Word ml_backend__ml_global_data__Var_38;
    MR_Word ml_backend__ml_global_data__Var_40;
    MR_Word ml_backend__ml_global_data__Var_41;
    MR_Word ml_backend__ml_global_data__Var_42;
    MR_Word ml_backend__ml_global_data__Var_43;
    MR_Word ml_backend__ml_global_data__Var_44;
    MR_Word ml_backend__ml_global_data__Var_45;
    MR_Word ml_backend__ml_global_data__Var_46;
    MR_Word ml_backend__ml_global_data__Var_39;

    {
      ml_backend__ml_global_data__Var_10 = mercury__cord__from_list_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__FuncDefns_4);
    }
    {
      ml_backend__ml_global_data__ClosureWrapperDefns_7 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__ClosureWrapperDefns0_6, ml_backend__ml_global_data__Var_10);
    }
    ml_backend__ml_global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__ClosureWrapperDefns_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_41));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_42));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_43));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_44));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_45));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_46));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_rtti_defn_3_p_0(
  MR_Word ml_backend__ml_global_data__Defn_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word ml_backend__ml_global_data__RttiDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__RttiDefns_7;
    MR_Word ml_backend__ml_global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__Var_32;
    MR_Word ml_backend__ml_global_data__Var_33;
    MR_Word ml_backend__ml_global_data__Var_34;
    MR_Word ml_backend__ml_global_data__Var_35;
    MR_Word ml_backend__ml_global_data__Var_36;
    MR_Word ml_backend__ml_global_data__Var_38;
    MR_Word ml_backend__ml_global_data__Var_39;
    MR_Word ml_backend__ml_global_data__Var_40;
    MR_Word ml_backend__ml_global_data__Var_41;
    MR_Word ml_backend__ml_global_data__Var_42;
    MR_Word ml_backend__ml_global_data__Var_43;
    MR_Word ml_backend__ml_global_data__Var_44;
    MR_Word ml_backend__ml_global_data__Var_45;
    MR_Word ml_backend__ml_global_data__Var_37;

    {
      ml_backend__ml_global_data__RttiDefns_7 = mercury__cord__snoc_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, ml_backend__ml_global_data__RttiDefns0_6, ((MR_Box) (ml_backend__ml_global_data__Defn_4)));
    }
    ml_backend__ml_global_data__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RttiDefns_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_42));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_43));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_44));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_45));
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
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap_9;
    MR_Word ml_backend__ml_global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__Var_36;
    MR_Word ml_backend__ml_global_data__Var_37;
    MR_Word ml_backend__ml_global_data__Var_38;
    MR_Word ml_backend__ml_global_data__Var_39;
    MR_Word ml_backend__ml_global_data__Var_40;
    MR_Word ml_backend__ml_global_data__Var_41;
    MR_Word ml_backend__ml_global_data__Var_42;
    MR_Word ml_backend__ml_global_data__Var_43;
    MR_Word ml_backend__ml_global_data__Var_44;
    MR_Word ml_backend__ml_global_data__Var_45;
    MR_Word ml_backend__ml_global_data__Var_46;
    MR_Word ml_backend__ml_global_data__Var_47;
    MR_Word ml_backend__ml_global_data__Var_48;
    MR_Word ml_backend__ml_global_data__Var_35;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ((MR_Box) (ml_backend__ml_global_data__RttiId_5)), ((MR_Box) (ml_backend__ml_global_data__RvalType_6)), ml_backend__ml_global_data__PDupRvalTypeMap0_8, &ml_backend__ml_global_data__PDupRvalTypeMap_9);
    }
    ml_backend__ml_global_data__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__PDupRvalTypeMap_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_38));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_40));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_41));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_42));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_43));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_44));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_45));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_46));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_47));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_48));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_closure_wrapper_func_defns_3_p_0(
  MR_Word ml_backend__ml_global_data__X_4,
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
{
  {
    MR_Word ml_backend__ml_global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
    MR_Word ml_backend__ml_global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__X_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_19));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_22));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_closure_wrapper_func_defns_2_p_0(
  MR_Word ml_backend__ml_global_data__GlobalData_3,
  MR_Word * ml_backend__ml_global_data__X_4)
{
  {
    MR_Word ml_backend__ml_global_data__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__Var_11;
    MR_Word ml_backend__ml_global_data__Var_12;
    MR_Word ml_backend__ml_global_data__Var_13;
    MR_Word ml_backend__ml_global_data__Var_14;
    MR_Word ml_backend__ml_global_data__Var_15;
    MR_Word ml_backend__ml_global_data__Var_16;
    MR_Word ml_backend__ml_global_data__Var_17;

    *ml_backend__ml_global_data__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(
  MR_Word ml_backend__ml_global_data__GlobalData_3,
  MR_Word * ml_backend__ml_global_data__X_4)
{
  {
    MR_Word ml_backend__ml_global_data__Var_5;
    MR_Word ml_backend__ml_global_data__Var_6;
    MR_Word ml_backend__ml_global_data__Var_7;
    MR_Word ml_backend__ml_global_data__Var_8;
    MR_Word ml_backend__ml_global_data__Var_9;
    MR_Word ml_backend__ml_global_data__Var_10;
    MR_Word ml_backend__ml_global_data__Var_11;
    MR_Word ml_backend__ml_global_data__Var_12;
    MR_Word ml_backend__ml_global_data__Var_13;
    MR_Word ml_backend__ml_global_data__Var_14;
    MR_Word ml_backend__ml_global_data__Var_15;
    MR_Word ml_backend__ml_global_data__Var_16;
    MR_Word ml_backend__ml_global_data__Var_17;

    *ml_backend__ml_global_data__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
    ml_backend__ml_global_data__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
    ml_backend__ml_global_data__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
    ml_backend__ml_global_data__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
    ml_backend__ml_global_data__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
    ml_backend__ml_global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
    ml_backend__ml_global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
    ml_backend__ml_global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
    ml_backend__ml_global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
    ml_backend__ml_global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
    ml_backend__ml_global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
    ml_backend__ml_global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
    ml_backend__ml_global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
    ml_backend__ml_global_data__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(
  MR_Word ml_backend__ml_global_data__GlobalData_8,
  MR_Word * ml_backend__ml_global_data__ScalarCellGroupMap_9,
  MR_Word * ml_backend__ml_global_data__VectorCellGroupMap_10,
  MR_Word * ml_backend__ml_global_data__AllocIds_11,
  MR_Word * ml_backend__ml_global_data__RttiDefns_12,
  MR_Word * ml_backend__ml_global_data__CellDefns_13,
  MR_Word * ml_backend__ml_global_data__ClosureWrapperFuncDefns_14)
{
  {
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_29_29;
    MR_Word ml_backend__ml_global_data__CellDefnsCord_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__RttiDefnsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__ClosureWrapperFuncDefnsCord_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__AllocIdMap_26;
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data___UseCommonCells_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data___ConstCounter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data___TypeNumCounter_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_24;
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_25;

    *ml_backend__ml_global_data__ScalarCellGroupMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 9)));
    ml_backend__ml_global_data___VectorTypeNumMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 10)));
    *ml_backend__ml_global_data__VectorCellGroupMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 11)));
    ml_backend__ml_global_data___AllocIdNumCounter_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 12)));
    ml_backend__ml_global_data__AllocIdMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_8, (MR_Integer) 13)));
    {
      mercury__bimap__to_assoc_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__AllocIdMap_26, ml_backend__ml_global_data__AllocIds_11);
    }
    ml_backend__ml_global_data__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    {
      *ml_backend__ml_global_data__RttiDefns_12 = mercury__cord__to_list_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RttiDefnsCord_20);
    }
    {
      *ml_backend__ml_global_data__CellDefns_13 = mercury__cord__to_list_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__CellDefnsCord_19);
    }
    {
      *ml_backend__ml_global_data__ClosureWrapperFuncDefns_14 = mercury__cord__to_list_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ml_backend__ml_global_data__ClosureWrapperFuncDefnsCord_21);
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_1_f_0(
  MR_Word ml_backend__ml_global_data__GlobalData_3)
{
  {
    MR_Word ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_global_data__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_global_data__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_global_data__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_global_data__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_global_data__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_global_data__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
    MR_Word ml_backend__ml_global_data__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
    MR_Word ml_backend__ml_global_data__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
    MR_Word ml_backend__ml_global_data__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
    MR_Word ml_backend__ml_global_data__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
    MR_Word ml_backend__ml_global_data__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
    MR_Word ml_backend__ml_global_data__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
    MR_Word ml_backend__ml_global_data__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));

    return ml_backend__ml_global_data__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_init_2_f_0(
  MR_Word ml_backend__ml_global_data__UseCommonCells_4,
  MR_Word ml_backend__ml_global_data__HaveUnboxedFloats_5)
{
  {
    MR_Word ml_backend__ml_global_data__GlobalData_6;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_24_24;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_27_27;
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_30_30;
    MR_Word ml_backend__ml_global_data__Var_7;
    MR_Word ml_backend__ml_global_data__Var_8;
    MR_Word ml_backend__ml_global_data__Var_10;
    MR_Word ml_backend__ml_global_data__Var_11;
    MR_Word ml_backend__ml_global_data__Var_12;
    MR_Word ml_backend__ml_global_data__Var_13;
    MR_Word ml_backend__ml_global_data__Var_15;
    MR_Word ml_backend__ml_global_data__Var_16;
    MR_Word ml_backend__ml_global_data__Var_17;
    MR_Word ml_backend__ml_global_data__Var_18;
    MR_Word ml_backend__ml_global_data__Var_19;
    MR_Word ml_backend__ml_global_data__Var_21;

    {
      ml_backend__ml_global_data__Var_7 = mercury__map__init_0_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
    }
    {
      ml_backend__ml_global_data__Var_8 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    ml_backend__ml_global_data__TypeCtorInfo_24_24 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    {
      ml_backend__ml_global_data__Var_10 = mercury__cord__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_24_24);
    }
    {
      ml_backend__ml_global_data__Var_11 = mercury__cord__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_24_24);
    }
    {
      ml_backend__ml_global_data__Var_12 = mercury__cord__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0);
    }
    {
      ml_backend__ml_global_data__Var_13 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
    ml_backend__ml_global_data__TypeCtorInfo_27_27 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
    {
      ml_backend__ml_global_data__Var_15 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, ml_backend__ml_global_data__TypeCtorInfo_27_27);
    }
    {
      ml_backend__ml_global_data__Var_16 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_27_27, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
    }
    ml_backend__ml_global_data__TypeCtorInfo_30_30 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    {
      ml_backend__ml_global_data__Var_17 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_30_30);
    }
    {
      ml_backend__ml_global_data__Var_18 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_30_30, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
    }
    {
      ml_backend__ml_global_data__Var_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_global_data__Var_21 = mercury__bimap__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
    }
    {
      ml_backend__ml_global_data__GlobalData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 0) = ((MR_Box) (ml_backend__ml_global_data__Var_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 1) = ((MR_Box) (ml_backend__ml_global_data__UseCommonCells_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 2) = ((MR_Box) (ml_backend__ml_global_data__HaveUnboxedFloats_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 3) = ((MR_Box) (ml_backend__ml_global_data__Var_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 4) = ((MR_Box) (ml_backend__ml_global_data__Var_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 5) = ((MR_Box) (ml_backend__ml_global_data__Var_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 6) = ((MR_Box) (ml_backend__ml_global_data__Var_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 7) = ((MR_Box) (ml_backend__ml_global_data__Var_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 8) = ((MR_Box) (ml_backend__ml_global_data__Var_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 9) = ((MR_Box) (ml_backend__ml_global_data__Var_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 10) = ((MR_Box) (ml_backend__ml_global_data__Var_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 11) = ((MR_Box) (ml_backend__ml_global_data__Var_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 12) = ((MR_Box) (ml_backend__ml_global_data__Var_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 13) = ((MR_Box) (ml_backend__ml_global_data__Var_21));
    }
    return ml_backend__ml_global_data__GlobalData_6;
  }
}

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

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_global_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_global_data. */
