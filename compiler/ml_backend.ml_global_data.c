/*
** Automatically generated from `ml_global_data.m'
** by the Mercury compiler,
** version rotd-2018-02-18
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


// :- module ml_backend.ml_global_data.
// :- implementation.

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

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_int64s_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_int64s_0[2];

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_int64s_0[2];

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

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[15];

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[15];

static const MR_DuArgLocn ml_backend__ml_global_data__ml_backend__ml_global_data__field_locns_ml_global_data_0_0[15];

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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
  MR_Word Init0_4,
  MR_Word * Init_5,
  MR_Word * Type_6);

static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
  MR_Word STATE_VARIABLE_Rval_0_14,
  MR_Word * STATE_VARIABLE_Rval_15);

static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
  MR_Word ConsId_3);

static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
  MR_Word MLDS_ModuleName_1,
  MR_Word StructType_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(
  MR_Word Context_1,
  MR_Word Flags_2,
  MR_Integer TypeRawNum_3,
  MR_Integer FieldNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
  MR_Word ConstVarKind_8,
  MR_Word ConstType_9,
  MR_Word Initializer_10,
  MR_Word Context_11,
  MR_Word * VarName_12,
  MR_Word STATE_VARIABLE_GlobalData_0_22,
  MR_Word * STATE_VARIABLE_GlobalData_23);

static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_cell_defns_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7);

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
  MR_Word MLDS_ModuleName_7,
  MR_Word ConstType_8,
  MR_Word Initializer_9,
  MR_Word * Common_10,
  MR_Word STATE_VARIABLE_GlobalData_0_34,
  MR_Word * STATE_VARIABLE_GlobalData_35);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_int64s_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_int64s_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_3[1][6];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_4[1][1];




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

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
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

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_0 = {
  (MR_String) "have_unboxed_int64s",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_1 = {
  (MR_String) "do_not_have_unboxed_int64s",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_int64s_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_int64s_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_1,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_int64s_0_0
};

static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_int64s_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_int64s_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_global_data____Unify____have_unboxed_int64s_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____have_unboxed_int64s_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "have_unboxed_int64s",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_int64s_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_int64s_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_int64s_0
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

static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[15] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_int64s_0,
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

static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[15] = {
  (MR_String) "mgd_pdup_rval_type_map",
  (MR_String) "mgd_use_common_cells",
  (MR_String) "mgd_have_unboxed_floats",
  (MR_String) "mgd_have_unboxed_int64s",
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

static const MR_DuArgLocn ml_backend__ml_global_data__ml_backend__ml_global_data__field_locns_ml_global_data_0_0[15] = {
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
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0 = {
  (MR_String) "ml_global_data",
  (MR_Integer) 15,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_locns_ml_global_data_0_0,
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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(
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
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      ml_backend__mlds____Compare____mlds_type_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        ml_backend__mlds____Compare____mlds_class_defn_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[4], &Var_16, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(
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
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
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

      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_class_defn_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[4];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
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
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
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

      ml_backend__mlds____Compare____mlds_type_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        ml_backend__mlds____Compare____initializer_array_size_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
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

      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(
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

      ml_backend__mlds____Compare____mlds_type_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        ml_backend__mlds____Compare____initializer_array_size_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__counter____Compare____counter_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[6], &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(
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
      MR_Word TypeInfo_19_19;
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

      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[6];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
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
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(
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

      ml_backend__mlds____Compare____mlds_rval_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        ml_backend__mlds____Compare____mlds_type_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(
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

      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_48 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_49 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_48 == CastY_49);
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
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10)));
      MR_Word ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11)));
      MR_Word ArgX15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));
      MR_Word ArgY15_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12)));
      MR_Word Var_34;

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], &Var_34, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_34 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_34;
      else
      {
        MR_Word Var_35;
        MR_Integer Var_65 = (MR_Integer) ArgX2_6;
        MR_Integer Var_66 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, Var_65, Var_66);
        succeeded = (Var_35 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_35;
        else
        {
          MR_Word Var_36;
          MR_Integer Var_67 = (MR_Integer) ArgX3_8;
          MR_Integer Var_68 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, Var_67, Var_68);
          succeeded = (Var_36 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_36;
          else
          {
            MR_Word Var_37;
            MR_Integer Var_69 = (MR_Integer) ArgX4_10;
            MR_Integer Var_70 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, Var_69, Var_70);
            succeeded = (Var_37 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_37;
            else
            {
              MR_Word Var_38;

              mercury__counter____Compare____counter_0_0(&Var_38, ArgX5_12, ArgY5_13);
              succeeded = (Var_38 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_38;
              else
              {
                MR_Word Var_39;

                mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &Var_39, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_39 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_39;
                else
                {
                  MR_Word Var_40;

                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &Var_40, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_40 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_40;
                  else
                  {
                    MR_Word Var_41;

                    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], &Var_41, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_41 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_41;
                    else
                    {
                      MR_Word Var_42;

                      mercury__counter____Compare____counter_0_0(&Var_42, ArgX9_20, ArgY9_21);
                      succeeded = (Var_42 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_42;
                      else
                      {
                        MR_Word Var_43;

                        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], &Var_43, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
                        succeeded = (Var_43 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_43;
                        else
                        {
                          MR_Word Var_44;

                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], &Var_44, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
                          succeeded = (Var_44 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_44;
                          else
                          {
                            MR_Word Var_45;

                            mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], &Var_45, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
                            succeeded = (Var_45 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_45;
                            else
                            {
                              MR_Word Var_46;

                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], &Var_46, ((MR_Box) (ArgX13_28)), ((MR_Box) (ArgY13_29)));
                              succeeded = (Var_46 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_46;
                              else
                              {
                                MR_Word Var_47;

                                mercury__counter____Compare____counter_0_0(&Var_47, ArgX14_30, ArgY14_31);
                                succeeded = (Var_47 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_47;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (ArgX15_32)), ((MR_Box) (ArgY15_33)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_34 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_37_37;
      MR_Word TypeInfo_38_38;
      MR_Word TypeInfo_39_39;
      MR_Word TypeInfo_41_41;
      MR_Word TypeInfo_42_42;
      MR_Word TypeInfo_43_43;
      MR_Word TypeInfo_44_44;
      MR_Word TypeInfo_46_46;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10)));
      MR_Word ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11)));
      MR_Word ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgX15_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12)));
      MR_Word ArgY15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_37_37 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_38_38 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_39_39 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      succeeded = mercury__counter____Unify____counter_0_0(ArgX9_19, ArgY9_20);
                      if (succeeded)
                      {
                        TypeInfo_41_41 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[2];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_42_42 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[3];
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_43_43 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[4];
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_44_44 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[5];
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                succeeded = mercury__counter____Unify____counter_0_0(ArgX14_29, ArgY14_30);
                                if (succeeded)
                                {
                                  TypeInfo_46_46 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[0];
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
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

void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(
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
      MR_String ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_String ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      ml_backend__mlds____Compare____mlds_function_name_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__term____Compare____context_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_14, ArgX3_8, ArgY3_9);
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

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(
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
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_String ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_int64s_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_int64s_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
  MR_Word Init0_4,
  MR_Word * Init_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Init0_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Rval_8;
    MR_Word Rval0_7;

    if (succeeded)
    {
      Rval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Init0_4, (MR_Integer) 0)));
      succeeded = ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(Rval0_7, &Rval_8);
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Init_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_8));
      }
      *Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
    }
    else
    {
      *Init_5 = Init0_4;
      *Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
  MR_Word STATE_VARIABLE_Rval_0_14,
  MR_Word * STATE_VARIABLE_Rval_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    switch (MR_tag((MR_Word) STATE_VARIABLE_Rval_0_14)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_14, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_14, (MR_Integer) 1)));
              MR_Float Var_4;

              succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1)));
                *STATE_VARIABLE_Rval_15 = STATE_VARIABLE_Rval_0_14;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_14, (MR_Integer) 1)));
              MR_Word SubRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_14, (MR_Integer) 2)));
              MR_Word Type_7;

              switch (MR_tag((MR_Word) Op_5)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Op_5, (MR_Integer) 0)));
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Op_5, (MR_Integer) 0)));
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), Op_5, (MR_Integer) 0)));
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                if ((Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
                {
                  *STATE_VARIABLE_Rval_15 = SubRval_6;
                  succeeded = MR_TRUE;
                }
                else
                if (((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
                {
                  MR_Word CtorCat_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2)));
                  MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 1)));
                  MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3)));

                  if (((MR_tag((MR_Word) CtorCat_10)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorCat_10, (MR_Integer) 0)));

                    succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      *STATE_VARIABLE_Rval_15 = SubRval_6;
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  if (((((MR_tag((MR_Word) CtorCat_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  {
                    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_10, (MR_Integer) 1)));
                    MR_Word next_value_of_STATE_VARIABLE_Rval_0_14;

                    succeeded = (Var_17 == (MR_Integer) 2);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      next_value_of_STATE_VARIABLE_Rval_0_14 = SubRval_6;
                      STATE_VARIABLE_Rval_0_14 = next_value_of_STATE_VARIABLE_Rval_0_14;
                      continue;
                    }
                  }
                  else
                    succeeded = MR_FALSE;
                }
                else
                  succeeded = MR_FALSE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Op_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_14, (MR_Integer) 1)));
              MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_14, (MR_Integer) 2)));
              MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_14, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) Op_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_23)) {
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
                        succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                      }
                      break;
                    case (MR_Integer) 12:
                    case (MR_Integer) 13:
                    case (MR_Integer) 14:
                    case (MR_Integer) 15:
                    case (MR_Integer) 23:
                      {
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                  }
                  break;
              }
              if (succeeded)
              {
                *STATE_VARIABLE_Rval_15 = STATE_VARIABLE_Rval_0_14;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(
  MR_Word ProcLabel_8,
  MR_Word MaybeConsId_9,
  MR_Integer Size_10,
  MR_Word Context_11,
  MR_Word * AllocId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_23,
  MR_Word * STATE_VARIABLE_GlobalData_24)
{
  {
    MR_bool succeeded;
    MR_String TypeStr_15;
    MR_Word AllocData_16;
    MR_Word Map0_17;
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
    MR_Word AllocId0_18;
    MR_Box conv0_AllocId0_18;

    if ((MaybeConsId_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      TypeStr_15 = (MR_String) "unknown";
    else
    {
      MR_Word ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_9, (MR_Integer) 0)));

      TypeStr_15 = ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(ConsId_14);
    }
    {
      AllocData_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AllocData_16, 0) = ((MR_Box) (ProcLabel_8));
      MR_hl_field(MR_mktag(0), AllocData_16, 1) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), AllocData_16, 2) = ((MR_Box) (TypeStr_15));
      MR_hl_field(MR_mktag(0), AllocData_16, 3) = ((MR_Box) (Size_10));
    }
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
    Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
    Map0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
    succeeded = mercury__bimap__search_3_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, Map0_17, &conv0_AllocId0_18, ((MR_Box) (AllocData_16)));
    if (succeeded)
    {
      AllocId0_18 = ((MR_Word) conv0_AllocId0_18);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *AllocId_12 = AllocId0_18;
      *STATE_VARIABLE_GlobalData_24 = STATE_VARIABLE_GlobalData_0_23;
    }
    else
    {
      MR_Word Counter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
      MR_Integer AllocIdNum_20;
      MR_Word Counter_21;
      MR_Word Map_22;
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
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
      MR_Word Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
      MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
      MR_Word Var_68;
      MR_Word Var_69;

      mercury__counter__allocate_3_p_0(&AllocIdNum_20, Counter0_19, &Counter_21);
      *AllocId_12 = (MR_Word) AllocIdNum_20;
      mercury__bimap__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ((MR_Box) (*AllocId_12)), ((MR_Box) (AllocData_16)), Map0_17, &Map_22);
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
      Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_GlobalData_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_56 | ((((Var_57 << (MR_Integer) 1)) | ((Var_58 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Counter_21));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Map_22));
      }
    }
  }
}

static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
  MR_Word ConsId_3)
{
  {
    MR_String TypeStr_4;

    switch (MR_tag((MR_Word) ConsId_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeStr_4 = (MR_String) "typeclass_info";
        break;
      case (MR_Integer) 1:
        TypeStr_4 = (MR_String) "private_builtin.type_info/0";
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 0)))) {
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
          case (MR_Integer) 19:
          case (MR_Integer) 20:
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 3)));
              MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 1)));
              MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 2)));

              TypeStr_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(TypeCtor_7);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 1)));
              MR_String Var_44;

              Var_44 = mercury__string__from_int_1_f_0(Arity_8);
              TypeStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_44);
            }
            break;
          case (MR_Integer) 4:
            TypeStr_4 = (MR_String) "closure";
            break;
          case (MR_Integer) 21:
            TypeStr_4 = (MR_String) "type_info_const";
            break;
          case (MR_Integer) 22:
            TypeStr_4 = (MR_String) "typeclass_info_const";
            break;
          case (MR_Integer) 23:
            TypeStr_4 = (MR_String) "ground_term_const";
            break;
        }
        break;
    }
    return TypeStr_4;
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(
  MR_Word MLDS_ModuleName_7,
  MR_Word TypeNum_8,
  MR_Word RowInitializers_9,
  MR_Word * Common_10,
  MR_Word STATE_VARIABLE_GlobalData_0_22,
  MR_Word * STATE_VARIABLE_GlobalData_23)
{
  {
    MR_Word TypeCtorInfo_80_80 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    MR_Word TypeCtorInfo_81_81;
    MR_Word TypeCtorInfo_82_82;
    MR_Integer NumRows_13;
    MR_Word CellGroupMap0_14;
    MR_Integer StartRowNum_16;
    MR_Integer NextRow_17;
    MR_Word StructType_18;
    MR_Word Rows0_19;
    MR_Word Rows_20;
    MR_Word CellGroupMap_21;
    MR_Word STATE_VARIABLE_CellGroup_24_24;
    MR_Word STATE_VARIABLE_CellGroup_25_25;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_CellGroup_27_27;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
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
    MR_Word Var_42;
    MR_Box conv0_STATE_VARIABLE_CellGroup_24_24;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Integer Var_63;
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
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_77;

    mercury__list__length_2_p_0(TypeCtorInfo_80_80, RowInitializers_9, &NumRows_13);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    TypeCtorInfo_81_81 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    TypeCtorInfo_82_82 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_81_81, TypeCtorInfo_82_82, CellGroupMap0_14, ((MR_Box) (TypeNum_8)), &conv0_STATE_VARIABLE_CellGroup_24_24);
    STATE_VARIABLE_CellGroup_24_24 = ((MR_Word) conv0_STATE_VARIABLE_CellGroup_24_24);
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 0)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 1)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 2)));
    StartRowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 3)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 4)));
    NextRow_17 = (StartRowNum_16 + NumRows_13);
    StructType_18 = Var_43;
    Rows0_19 = Var_46;
    {
      STATE_VARIABLE_CellGroup_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, 0) = ((MR_Box) (StructType_18));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, 1) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, 2) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, 3) = ((MR_Box) (NextRow_17));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, 4) = ((MR_Box) (Rows0_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Common_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MLDS_ModuleName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StructType_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeNum_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (StartRowNum_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NumRows_13));
    }
    Var_26 = mercury__cord__from_list_1_f_0(TypeCtorInfo_80_80, RowInitializers_9);
    Rows_20 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_80_80, Rows0_19, Var_26);
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 0)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 1)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 2)));
    Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 3)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 4)));
    {
      STATE_VARIABLE_CellGroup_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_27_27, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_27_27, 1) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_27_27, 2) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_27_27, 3) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_27_27, 4) = ((MR_Box) (Rows_20));
    }
    mercury__map__det_update_4_p_0(TypeCtorInfo_81_81, TypeCtorInfo_82_82, ((MR_Box) (TypeNum_8)), ((MR_Box) (STATE_VARIABLE_CellGroup_27_27)), CellGroupMap0_14, &CellGroupMap_21);
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    Var_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_66 | ((((Var_67 << (MR_Integer) 1)) | ((Var_68 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (CellGroupMap_21));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_79));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(
  MR_Word MLDS_ModuleName_10,
  MR_Word Context_11,
  MR_Word Target_12,
  MR_Word ArgTypes_13,
  MR_Word * TypeNum_14,
  MR_Word * StructType_15,
  MR_Word * FieldIds_16,
  MR_Word STATE_VARIABLE_GlobalData_0_44,
  MR_Word * STATE_VARIABLE_GlobalData_45)
{
  {
    MR_bool succeeded;
    MR_Word TypeNumMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 9)));
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 6)));
    MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 10)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 0)));
    MR_Word Var_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 2)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 3)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 4)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 5)));
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 7)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 8)));
    MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 11)));
    MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 12)));
    MR_Word OldTypeNum_19;
    MR_Box conv0_OldTypeNum_19;

    succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, TypeNumMap0_18, ((MR_Box) (ArgTypes_13)), &conv0_OldTypeNum_19);
    if (succeeded)
    {
      OldTypeNum_19 = ((MR_Word) conv0_OldTypeNum_19);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word CellGroup_21;
      MR_Box conv1_CellGroup_21;
      MR_Word _TypeDefn_22;
      MR_Integer Var_23;
      MR_Word Var_24;

      *TypeNum_14 = OldTypeNum_19;
      mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, Var_86, ((MR_Box) (*TypeNum_14)), &conv1_CellGroup_21);
      CellGroup_21 = ((MR_Word) conv1_CellGroup_21);
      *StructType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_21, (MR_Integer) 0)));
      _TypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_21, (MR_Integer) 1)));
      *FieldIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_21, (MR_Integer) 2)));
      Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CellGroup_21, (MR_Integer) 3)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_21, (MR_Integer) 4)));
      *STATE_VARIABLE_GlobalData_45 = STATE_VARIABLE_GlobalData_0_44;
    }
    else
    {
      MR_Word TypeCtorInfo_181_181;
      MR_Integer TypeRawNum_26;
      MR_Word TypeNumCounter_27;
      MR_String TypeRawNumStr_28;
      MR_Word TypeNumMap_29;
      MR_Word FieldNames_31;
      MR_Word FieldDefns_32;
      MR_Word FieldInfos_33;
      MR_String StructClassName_34;
      MR_Word QualStructClassName_35;
      MR_Word StructClassId_36;
      MR_Word ClassKind_38;
      MR_Word CtorDefns_39;
      MR_Word StructClassDefn_41;
      MR_Word MLDS_ClassModuleName_42;
      MR_Word CellGroupMap0_43;
      MR_Word STATE_VARIABLE_GlobalData_46_46;
      MR_Word STATE_VARIABLE_GlobalData_47_47;
      MR_Word Var_71;
      MR_Word CellGroupMap_73;
      MR_Word CellGroup_74;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_125;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_142;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_143;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_173;

      mercury__counter__allocate_3_p_0(&TypeRawNum_26, Var_83, &TypeNumCounter_27);
      TypeRawNumStr_28 = mercury__string__int_to_string_1_f_0(TypeRawNum_26);
      *TypeNum_14 = (MR_Word) TypeRawNum_26;
      Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 0)));
      Var_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 2)));
      Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 3)));
      Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 4)));
      Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 5)));
      Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 6)));
      Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 7)));
      Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 8)));
      Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 9)));
      Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 10)));
      Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 11)));
      Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_44, (MR_Integer) 12)));
      {
        STATE_VARIABLE_GlobalData_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 0) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 1) = ((MR_Box) ((Var_118 | ((((Var_119 << (MR_Integer) 1)) | ((Var_120 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 2) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 3) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 4) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 5) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 6) = ((MR_Box) (TypeNumCounter_27));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 7) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 8) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 9) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 10) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 11) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, 12) = ((MR_Box) (Var_131));
      }
      TypeCtorInfo_181_181 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
      mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], TypeCtorInfo_181_181, ((MR_Box) (ArgTypes_13)), ((MR_Box) (*TypeNum_14)), TypeNumMap0_18, &TypeNumMap_29);
      Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 0)));
      Var_133 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 2)));
      Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 3)));
      Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 4)));
      Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 5)));
      Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 6)));
      Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 7)));
      Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 8)));
      Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 9)));
      Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 10)));
      Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 11)));
      Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_46_46, (MR_Integer) 12)));
      {
        STATE_VARIABLE_GlobalData_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 0) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 1) = ((MR_Box) ((Var_133 | ((((Var_134 << (MR_Integer) 1)) | ((Var_135 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 2) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 3) = ((MR_Box) (Var_137));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 4) = ((MR_Box) (Var_138));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 5) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 6) = ((MR_Box) (Var_140));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 7) = ((MR_Box) (Var_141));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 8) = ((MR_Box) (Var_142));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 9) = ((MR_Box) (TypeNumMap_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 10) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 11) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, 12) = ((MR_Box) (Var_146));
      }
      ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(Context_11, (MR_Word) &ml_backend__ml_global_data_scalar_common_1[6], TypeRawNum_26, (MR_Integer) 0, ArgTypes_13, &FieldNames_31, &FieldDefns_32, &FieldInfos_33);
      StructClassName_34 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_type_", TypeRawNumStr_28);
      {
        QualStructClassName_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QualStructClassName_35, 0) = ((MR_Box) (MLDS_ModuleName_10));
        MR_hl_field(MR_mktag(0), QualStructClassName_35, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), QualStructClassName_35, 2) = ((MR_Box) (StructClassName_34));
      }
      {
        StructClassId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StructClassId_36, 0) = ((MR_Box) (QualStructClassName_35));
        MR_hl_field(MR_mktag(0), StructClassId_36, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), StructClassId_36, 2) = ((MR_Box) ((MR_Integer) 2));
      }
      switch (Target_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ClassKind_38 = (MR_Integer) 2;
            CtorDefns_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CtorDefn_40;

            ClassKind_38 = (MR_Integer) 2;
            CtorDefn_40 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(Target_12, StructClassId_36, StructClassId_36, MLDS_ModuleName_10, StructClassId_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FieldInfos_33, Context_11);
            {
              CtorDefns_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CtorDefns_39, 0) = ((MR_Box) (CtorDefn_40));
              MR_hl_field(MR_mktag(1), CtorDefns_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CtorDefn_184;

            ClassKind_38 = (MR_Integer) 0;
            CtorDefn_184 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(Target_12, StructClassId_36, StructClassId_36, MLDS_ModuleName_10, StructClassId_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FieldInfos_33, Context_11);
            {
              CtorDefns_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CtorDefns_39, 0) = ((MR_Box) (CtorDefn_184));
              MR_hl_field(MR_mktag(1), CtorDefns_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          break;
      }
      {
        StructClassDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 0) = ((MR_Box) (StructClassName_34));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 2) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 3) = ((MR_Box) (&ml_backend__ml_global_data_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 4) = ((MR_Box) (ClassKind_38));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 9) = ((MR_Box) (FieldDefns_32));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), StructClassDefn_41, 12) = ((MR_Box) (CtorDefns_39));
      }
      MLDS_ClassModuleName_42 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_ModuleName_10, StructClassName_34, (MR_Integer) 0);
      *StructType_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) StructClassId_36);
      ml_backend__ml_global_data__make_named_fields_4_p_0(MLDS_ClassModuleName_42, *StructType_15, FieldNames_31, FieldIds_16);
      Var_71 = mercury__cord__empty_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
      {
        CellGroup_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CellGroup_74, 0) = ((MR_Box) (*StructType_15));
        MR_hl_field(MR_mktag(0), CellGroup_74, 1) = ((MR_Box) (StructClassDefn_41));
        MR_hl_field(MR_mktag(0), CellGroup_74, 2) = ((MR_Box) (*FieldIds_16));
        MR_hl_field(MR_mktag(0), CellGroup_74, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), CellGroup_74, 4) = ((MR_Box) (Var_71));
      }
      Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 0)));
      Var_148 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 2)));
      Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 3)));
      Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 4)));
      Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 5)));
      Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 6)));
      Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 7)));
      Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 8)));
      Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 9)));
      CellGroupMap0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 10)));
      Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 11)));
      Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 12)));
      mercury__map__det_insert_4_p_0(TypeCtorInfo_181_181, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ((MR_Box) (*TypeNum_14)), ((MR_Box) (CellGroup_74)), CellGroupMap0_43, &CellGroupMap_73);
      Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 0)));
      Var_162 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 2)));
      Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 3)));
      Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 4)));
      Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 5)));
      Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 6)));
      Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 7)));
      Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 8)));
      Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 9)));
      Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 10)));
      Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 11)));
      Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_47_47, (MR_Integer) 12)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_GlobalData_45 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_162 | ((((Var_163 << (MR_Integer) 1)) | ((Var_164 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_165));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_167));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_171));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (CellGroupMap_73));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_175));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
  MR_Word MLDS_ModuleName_1,
  MR_Word StructType_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word FieldName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word FieldNames_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word FieldId_11;
    MR_Word FieldIds_12;
    MR_Word QualName_13;

    {
      QualName_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualName_13, 0) = ((MR_Box) (MLDS_ModuleName_1));
      MR_hl_field(MR_mktag(0), QualName_13, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), QualName_13, 2) = ((MR_Box) (FieldName_9));
    }
    {
      FieldId_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FieldId_11, 0) = ((MR_Box) (QualName_13));
      MR_hl_field(MR_mktag(1), FieldId_11, 1) = ((MR_Box) (StructType_2));
    }
    ml_backend__ml_global_data__make_named_fields_4_p_0(MLDS_ModuleName_1, StructType_2, FieldNames_10, &FieldIds_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldId_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldIds_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(
  MR_Word Context_1,
  MR_Word Flags_2,
  MR_Integer TypeRawNum_3,
  MR_Integer FieldNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
    MR_Word Types_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
    MR_Word FieldVarName_19;
    MR_Word FieldVarNames_20;
    MR_Word FieldDataDefn_21;
    MR_Word FieldDataDefns_22;
    MR_Word FieldInfo_23;
    MR_Word FieldInfos_24;
    MR_Integer Var_28;

    {
      FieldVarName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FieldVarName_19, 0) = ((MR_Box) (TypeRawNum_3));
      MR_hl_field(MR_mktag(1), FieldVarName_19, 1) = ((MR_Box) (FieldNum_4));
    }
    {
      FieldDataDefn_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldDataDefn_21, 0) = ((MR_Box) (FieldVarName_19));
      MR_hl_field(MR_mktag(0), FieldDataDefn_21, 1) = ((MR_Box) (Context_1));
      MR_hl_field(MR_mktag(0), FieldDataDefn_21, 2) = ((MR_Box) (Flags_2));
      MR_hl_field(MR_mktag(0), FieldDataDefn_21, 3) = ((MR_Box) (Type_17));
      MR_hl_field(MR_mktag(0), FieldDataDefn_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), FieldDataDefn_21, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      FieldInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldInfo_23, 0) = ((MR_Box) (FieldVarName_19));
      MR_hl_field(MR_mktag(0), FieldInfo_23, 1) = ((MR_Box) (Type_17));
      MR_hl_field(MR_mktag(0), FieldInfo_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), FieldInfo_23, 3) = ((MR_Box) (Context_1));
    }
    Var_28 = (FieldNum_4 + (MR_Integer) 1);
    ml_backend__ml_global_data__ml_gen_vector_cell_field_types_8_p_0(Context_1, Flags_2, TypeRawNum_3, Var_28, Types_18, &FieldVarNames_20, &FieldDataDefns_22, &FieldInfos_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldVarName_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldVarNames_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldDataDefn_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldDataDefns_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldInfo_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldInfos_24));
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Init_5;
    MR_Word conv0_Type_6;

    ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) wrapper_arg_1), &conv1_Init_5, &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Init_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(
  MR_Word MLDS_ModuleName_9,
  MR_Word ConstVarKind_10,
  MR_Word ConstType0_11,
  MR_Word Initializer0_12,
  MR_Word Context_13,
  MR_Word * DataAddrRval_14,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ConstType_16;
    MR_Word Initializer_17;
    MR_Word UseCommonCells_18;
    MR_Word Inits_45;
    MR_Word Types_46;
    MR_Word TypeCtorInfo_18_53;
    MR_Word TypeCtorInfo_19_54;
    MR_Word Inits0_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
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
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    if (succeeded)
    {
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstType0_11, (MR_Integer) 1)));
      succeeded = (Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
        {
          Inits0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer0_12, (MR_Integer) 0)));
          Var_48 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[8];
          TypeCtorInfo_18_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
          TypeCtorInfo_19_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
          mercury__list__map2_4_p_0(TypeCtorInfo_18_53, TypeCtorInfo_18_53, TypeCtorInfo_19_54, Var_48, Inits0_44, &Inits_45, &Types_46);
          Var_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_19_54, ((MR_Box) (Var_49)), Types_46);
        }
      }
    }
    if (succeeded)
    {
      {
        ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), ConstType_16, 1) = ((MR_Box) (Types_46));
      }
      {
        Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_17, 0) = ((MR_Box) (Inits_45));
      }
    }
    else
    {
      ConstType_16 = ConstType0_11;
      Initializer_17 = Initializer0_12;
    }
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 0)));
    UseCommonCells_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 2)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 3)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 4)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 5)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 6)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 7)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 8)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 9)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 10)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 11)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_21, (MR_Integer) 12)));
    switch (UseCommonCells_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word VarName_20;
          MR_Word Var_24;

          ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ConstVarKind_10, ConstType_16, Initializer_17, Context_13, &VarName_20, STATE_VARIABLE_GlobalData_0_21, STATE_VARIABLE_GlobalData_22);
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (MLDS_ModuleName_9));
            MR_hl_field(MR_mktag(3), Var_24, 2) = ((MR_Box) (VarName_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *DataAddrRval_14 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_24));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Common_19;

          ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(MLDS_ModuleName_9, ConstType_16, Initializer_17, &Common_19, STATE_VARIABLE_GlobalData_0_21, STATE_VARIABLE_GlobalData_22);
          *DataAddrRval_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Common_19);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Init_5;
    MR_Word conv0_Type_6;

    ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) wrapper_arg_1), &conv1_Init_5, &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Init_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_Type_6));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(
  MR_Word MLDS_ModuleName_9,
  MR_Word ConstVarKind_10,
  MR_Word ConstType0_11,
  MR_Word Initializer0_12,
  MR_Word Context_13,
  MR_Word * DataRval_14,
  MR_Word STATE_VARIABLE_GlobalData_0_23,
  MR_Word * STATE_VARIABLE_GlobalData_24)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ConstType_16;
    MR_Word Initializer_17;
    MR_Word UseCommonCells_18;
    MR_Word Inits_46;
    MR_Word Types_47;
    MR_Word TypeCtorInfo_18_54;
    MR_Word TypeCtorInfo_19_55;
    MR_Word Inits0_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
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

    if (succeeded)
    {
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstType0_11, (MR_Integer) 1)));
      succeeded = (Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
        {
          Inits0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer0_12, (MR_Integer) 0)));
          Var_49 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[7];
          TypeCtorInfo_18_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
          TypeCtorInfo_19_55 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
          mercury__list__map2_4_p_0(TypeCtorInfo_18_54, TypeCtorInfo_18_54, TypeCtorInfo_19_55, Var_49, Inits0_45, &Inits_46, &Types_47);
          Var_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_19_55, ((MR_Box) (Var_50)), Types_47);
        }
      }
    }
    if (succeeded)
    {
      {
        ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), ConstType_16, 1) = ((MR_Box) (Types_47));
      }
      {
        Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_17, 0) = ((MR_Box) (Inits_46));
      }
    }
    else
    {
      ConstType_16 = ConstType0_11;
      Initializer_17 = Initializer0_12;
    }
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
    UseCommonCells_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
    switch (UseCommonCells_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word VarName_20;
          MR_Word QualVarName_21;
          MR_Word DataVar_22;

          ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ConstVarKind_10, ConstType_16, Initializer_17, Context_13, &VarName_20, STATE_VARIABLE_GlobalData_0_23, STATE_VARIABLE_GlobalData_24);
          {
            QualVarName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualVarName_21, 0) = ((MR_Box) (MLDS_ModuleName_9));
            MR_hl_field(MR_mktag(0), QualVarName_21, 1) = ((MR_Box) (VarName_20));
          }
          {
            DataVar_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DataVar_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), DataVar_22, 1) = ((MR_Box) (QualVarName_21));
            MR_hl_field(MR_mktag(3), DataVar_22, 2) = ((MR_Box) (ConstType_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *DataRval_14 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (DataVar_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Common_19;

          ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(MLDS_ModuleName_9, ConstType_16, Initializer_17, &Common_19, STATE_VARIABLE_GlobalData_0_23, STATE_VARIABLE_GlobalData_24);
          *DataRval_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Common_19);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
  MR_Word ConstVarKind_8,
  MR_Word ConstType_9,
  MR_Word Initializer_10,
  MR_Word Context_11,
  MR_Word * VarName_12,
  MR_Word STATE_VARIABLE_GlobalData_0_22,
  MR_Word * STATE_VARIABLE_GlobalData_23)
{
  {
    MR_Word ConstCounter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    MR_Integer ConstNum_15;
    MR_Word ConstCounter_16;
    MR_Word DataDefn_19;
    MR_Word CellDefns0_20;
    MR_Word CellDefns_21;
    MR_Word STATE_VARIABLE_GlobalData_24_24;
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    MR_Word Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_54;

    mercury__counter__allocate_3_p_0(&ConstNum_15, ConstCounter0_14, &ConstCounter_16);
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
    Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
    CellDefns0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
    {
      STATE_VARIABLE_GlobalData_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 1) = ((MR_Box) ((Var_51 | ((((Var_52 << (MR_Integer) 1)) | ((Var_53 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 2) = ((MR_Box) (ConstCounter_16));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 3) = ((MR_Box) (CellDefns0_20));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 4) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 5) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 6) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 7) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 8) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 9) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 10) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 11) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_24_24, 12) = ((MR_Box) (Var_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *VarName_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ConstVarKind_8));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConstNum_15));
    }
    {
      DataDefn_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DataDefn_19, 0) = ((MR_Box) (*VarName_12));
      MR_hl_field(MR_mktag(0), DataDefn_19, 1) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), DataDefn_19, 2) = ((MR_Box) (&ml_backend__ml_global_data_scalar_common_1[5]));
      MR_hl_field(MR_mktag(0), DataDefn_19, 3) = ((MR_Box) (ConstType_9));
      MR_hl_field(MR_mktag(0), DataDefn_19, 4) = ((MR_Box) (Initializer_10));
      MR_hl_field(MR_mktag(0), DataDefn_19, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    CellDefns_21 = mercury__cord__snoc_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, CellDefns0_20, ((MR_Box) (DataDefn_19)));
    ml_backend__ml_global_data__ml_global_data_set_cell_defns_3_p_0(CellDefns_21, STATE_VARIABLE_GlobalData_24_24, STATE_VARIABLE_GlobalData_23);
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_cell_defns_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_10 | ((((Var_11 << (MR_Integer) 1)) | ((Var_12 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
  MR_Word MLDS_ModuleName_7,
  MR_Word ConstType_8,
  MR_Word Initializer_9,
  MR_Word * Common_10,
  MR_Word STATE_VARIABLE_GlobalData_0_34,
  MR_Word * STATE_VARIABLE_GlobalData_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_178_178;
    MR_Word InitArraySize_12;
    MR_Word CellType_13;
    MR_Word TypeNumMap0_15;
    MR_Word CellGroupMap0_16;
    MR_Word TypeNum_18;
    MR_Word RowCounter0_23;
    MR_Integer RowNum_24;
    MR_Word RowCounter_25;
    MR_Word MembersMap0_26;
    MR_Word NewCommon_27;
    MR_Word MaybeOldCommon_28;
    MR_Word MembersMap_29;
    MR_Word STATE_VARIABLE_CellGroup_37_37;
    MR_Word STATE_VARIABLE_GlobalData_43_43;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word OldTypeNum_17;
    MR_Box conv0_OldTypeNum_17;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;

    InitArraySize_12 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_9);
    {
      CellType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CellType_13, 0) = ((MR_Box) (ConstType_8));
      MR_hl_field(MR_mktag(0), CellType_13, 1) = ((MR_Box) (InitArraySize_12));
    }
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
    Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
    TypeNumMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
    CellGroupMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, TypeNumMap0_15, ((MR_Box) (CellType_13)), &conv0_OldTypeNum_17);
    if (succeeded)
    {
      OldTypeNum_17 = ((MR_Word) conv0_OldTypeNum_17);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_CellGroup_36_36;
      MR_Box conv1_STATE_VARIABLE_CellGroup_36_36;

      TypeNum_18 = OldTypeNum_17;
      succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, CellGroupMap0_16, ((MR_Box) (TypeNum_18)), &conv1_STATE_VARIABLE_CellGroup_36_36);
      if (succeeded)
      {
        STATE_VARIABLE_CellGroup_36_36 = ((MR_Word) conv1_STATE_VARIABLE_CellGroup_36_36);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        STATE_VARIABLE_CellGroup_37_37 = STATE_VARIABLE_CellGroup_36_36;
      else
      {
        MR_Word TypeCtorInfo_172_172;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_41;

        Var_38 = mercury__counter__init_1_f_0((MR_Integer) 0);
        TypeCtorInfo_172_172 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
        Var_40 = mercury__bimap__init_0_f_0(TypeCtorInfo_172_172, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
        Var_41 = mercury__cord__empty_0_f_0(TypeCtorInfo_172_172);
        {
          STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ConstType_8));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (InitArraySize_12));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (Var_41));
        }
      }
      STATE_VARIABLE_GlobalData_43_43 = STATE_VARIABLE_GlobalData_0_34;
    }
    else
    {
      MR_Word TypeCtorInfo_176_176;
      MR_Word TypeNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
      MR_Integer TypeRawNum_20;
      MR_Word TypeNumCounter_21;
      MR_Word TypeNumMap_22;
      MR_Word STATE_VARIABLE_GlobalData_42_42;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
      MR_Word Var_83 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
      MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
      MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
      MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
      MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
      MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
      MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
      MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_104;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_120;

      mercury__counter__allocate_3_p_0(&TypeRawNum_20, TypeNumCounter0_19, &TypeNumCounter_21);
      TypeNum_18 = (MR_Word) TypeRawNum_20;
      Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
      Var_97 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
      Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
      Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
      Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
      Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
      Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
      Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
      Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
      Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
      Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
      Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
      {
        STATE_VARIABLE_GlobalData_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 0) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 1) = ((MR_Box) ((Var_97 | ((((Var_98 << (MR_Integer) 1)) | ((Var_99 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 2) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 3) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 4) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 5) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 6) = ((MR_Box) (TypeNumCounter_21));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 7) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 8) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 9) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 10) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 11) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, 12) = ((MR_Box) (Var_110));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ((MR_Box) (CellType_13)), ((MR_Box) (TypeNum_18)), TypeNumMap0_15, &TypeNumMap_22);
      Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 0)));
      Var_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 2)));
      Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 3)));
      Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 4)));
      Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 5)));
      Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 6)));
      Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 7)));
      Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 8)));
      Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 9)));
      Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 10)));
      Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 11)));
      Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 12)));
      {
        STATE_VARIABLE_GlobalData_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 0) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 1) = ((MR_Box) ((Var_112 | ((((Var_113 << (MR_Integer) 1)) | ((Var_114 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 2) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 3) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 4) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 5) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 6) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 7) = ((MR_Box) (TypeNumMap_22));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 8) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 9) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 10) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 11) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, 12) = ((MR_Box) (Var_125));
      }
      Var_45 = mercury__counter__init_1_f_0((MR_Integer) 0);
      TypeCtorInfo_176_176 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
      Var_47 = mercury__bimap__init_0_f_0(TypeCtorInfo_176_176, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
      Var_48 = mercury__cord__empty_0_f_0(TypeCtorInfo_176_176);
      {
        STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ConstType_8));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (InitArraySize_12));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (Var_48));
      }
    }
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
    RowCounter0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
    Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
    Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
    mercury__counter__allocate_3_p_0(&RowNum_24, RowCounter0_23, &RowCounter_25);
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
    MembersMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
    Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
    {
      NewCommon_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NewCommon_27, 0) = ((MR_Box) (MLDS_ModuleName_7));
      MR_hl_field(MR_mktag(0), NewCommon_27, 1) = ((MR_Box) (ConstType_8));
      MR_hl_field(MR_mktag(0), NewCommon_27, 2) = ((MR_Box) (TypeNum_18));
      MR_hl_field(MR_mktag(0), NewCommon_27, 3) = ((MR_Box) (RowNum_24));
    }
    TypeCtorInfo_178_178 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    mercury__bimap__search_insert_5_p_0(TypeCtorInfo_178_178, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (Initializer_9)), ((MR_Box) (NewCommon_27)), &MaybeOldCommon_28, MembersMap0_26, &MembersMap_29);
    if ((MaybeOldCommon_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Rows0_31;
      MR_Word Rows_32;
      MR_Word CellGroupMap_33;
      MR_Word STATE_VARIABLE_CellGroup_50_50;
      MR_Word STATE_VARIABLE_CellGroup_51_53;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_138;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_164;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_163;

      *Common_10 = NewCommon_27;
      Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
      Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
      Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
      Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
      Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
      Rows0_31 = Var_138;
      {
        STATE_VARIABLE_CellGroup_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, 0) = ((MR_Box) (Var_134));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, 1) = ((MR_Box) (Var_135));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, 2) = ((MR_Box) (RowCounter_25));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, 3) = ((MR_Box) (MembersMap_29));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, 4) = ((MR_Box) (Rows0_31));
      }
      Rows_32 = mercury__cord__snoc_2_f_0(TypeCtorInfo_178_178, Rows0_31, ((MR_Box) (Initializer_9)));
      Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 0)));
      Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 1)));
      Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 2)));
      Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 3)));
      Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 4)));
      {
        STATE_VARIABLE_CellGroup_51_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_51_53, 0) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_51_53, 1) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_51_53, 2) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_51_53, 3) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CellGroup_51_53, 4) = ((MR_Box) (Rows_32));
      }
      mercury__map__set_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ((MR_Box) (TypeNum_18)), ((MR_Box) (STATE_VARIABLE_CellGroup_51_53)), CellGroupMap0_16, &CellGroupMap_33);
      Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 0)));
      Var_154 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 2)));
      Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 3)));
      Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 4)));
      Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 5)));
      Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 6)));
      Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 7)));
      Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 8)));
      Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 9)));
      Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 10)));
      Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 11)));
      Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 12)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_GlobalData_35 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_153));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_154 | ((((Var_155 << (MR_Integer) 1)) | ((Var_156 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_159));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_160));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_162));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (CellGroupMap_33));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_164));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_165));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_167));
      }
    }
    else
    {
      *Common_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOldCommon_28, (MR_Integer) 0)));
      *STATE_VARIABLE_GlobalData_35 = STATE_VARIABLE_GlobalData_43_43;
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_closure_wrapper_func_defns_3_p_0(
  MR_Word FuncDefns_4,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    MR_Word ClosureWrapperDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word ClosureWrapperDefns_7;
    MR_Word Var_10;
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_41;

    Var_10 = mercury__cord__from_list_1_f_0(TypeCtorInfo_12_12, FuncDefns_4);
    ClosureWrapperDefns_7 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_12_12, ClosureWrapperDefns0_6, Var_10);
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_35 | ((((Var_36 << (MR_Integer) 1)) | ((Var_37 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClosureWrapperDefns_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_48));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_rtti_defn_3_p_0(
  MR_Word Defn_4,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9)
{
  {
    MR_Word RttiDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    MR_Word RttiDefns_7;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    MR_Word Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
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
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_39;

    RttiDefns_7 = mercury__cord__snoc_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, RttiDefns0_6, ((MR_Box) (Defn_4)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
    Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_34 | ((((Var_35 << (MR_Integer) 1)) | ((Var_36 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (RttiDefns_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_47));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(
  MR_Word RttiId_5,
  MR_Word RvalType_6,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word PDupRvalTypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    MR_Word PDupRvalTypeMap_9;
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
    MR_Word Var_37;
    MR_Word Var_38;
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
    MR_Word Var_36;

    mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ((MR_Box) (RttiId_5)), ((MR_Box) (RvalType_6)), PDupRvalTypeMap0_8, &PDupRvalTypeMap_9);
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
    Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PDupRvalTypeMap_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_37 | ((((Var_38 << (MR_Integer) 1)) | ((Var_39 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_50));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_closure_wrapper_func_defns_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_GlobalData_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((Var_10 | ((((Var_11 << (MR_Integer) 1)) | ((Var_12 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_closure_wrapper_func_defns_2_p_0(
  MR_Word GlobalData_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 7)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 8)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 9)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 10)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 11)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(
  MR_Word GlobalData_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 7)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 8)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 9)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 10)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 11)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 12)));
  }
}

void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(
  MR_Word GlobalData_8,
  MR_Word * ScalarCellGroupMap_9,
  MR_Word * VectorCellGroupMap_10,
  MR_Word * AllocIds_11,
  MR_Word * RttiDefns_12,
  MR_Word * CellDefns_13,
  MR_Word * ClosureWrapperFuncDefns_14)
{
  {
    MR_Word TypeCtorInfo_30_30;
    MR_Word CellDefnsCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 3)));
    MR_Word RttiDefnsCord_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 4)));
    MR_Word ClosureWrapperFuncDefnsCord_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 5)));
    MR_Word AllocIdMap_27;
    MR_Word _PDupRvalTypeMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 0)));
    MR_Word _UseCommonCells_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word _HaveUnboxedFloats_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word _HaveUnboxedInt64s_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word _ConstCounter_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 2)));
    MR_Word _TypeNumCounter_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 6)));
    MR_Word _ScalarTypeNumMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 7)));
    MR_Word _VectorTypeNumMap_25;
    MR_Word _AllocIdNumCounter_26;

    *ScalarCellGroupMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 8)));
    _VectorTypeNumMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 9)));
    *VectorCellGroupMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 10)));
    _AllocIdNumCounter_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 11)));
    AllocIdMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_8, (MR_Integer) 12)));
    mercury__bimap__to_assoc_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, AllocIdMap_27, AllocIds_11);
    TypeCtorInfo_30_30 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    *RttiDefns_12 = mercury__cord__to_list_1_f_0(TypeCtorInfo_30_30, RttiDefnsCord_21);
    *CellDefns_13 = mercury__cord__to_list_1_f_0(TypeCtorInfo_30_30, CellDefnsCord_20);
    *ClosureWrapperFuncDefns_14 = mercury__cord__to_list_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ClosureWrapperFuncDefnsCord_22);
  }
}

MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_have_unboxed_int64s_1_f_0(
  MR_Word GlobalData_3)
{
  {
    MR_Word HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 8)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 9)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 10)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 11)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 12)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_1_f_0(
  MR_Word GlobalData_3)
{
  {
    MR_Word HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 6)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 8)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 9)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 10)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 11)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalData_3, (MR_Integer) 12)));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_init_3_f_0(
  MR_Word UseCommonCells_5,
  MR_Word HaveUnboxedFloats_6,
  MR_Word HaveUnboxedInt64s_7)
{
  {
    MR_Word GlobalData_8;
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeCtorInfo_29_29;
    MR_Word TypeCtorInfo_32_32;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;

    Var_9 = mercury__map__init_0_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
    Var_10 = mercury__counter__init_1_f_0((MR_Integer) 1);
    TypeCtorInfo_26_26 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    Var_12 = mercury__cord__init_0_f_0(TypeCtorInfo_26_26);
    Var_13 = mercury__cord__init_0_f_0(TypeCtorInfo_26_26);
    Var_14 = mercury__cord__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0);
    Var_15 = mercury__counter__init_1_f_0((MR_Integer) 1);
    TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
    Var_17 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, TypeCtorInfo_29_29);
    Var_18 = mercury__map__init_0_f_0(TypeCtorInfo_29_29, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
    TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    Var_19 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], TypeCtorInfo_32_32);
    Var_20 = mercury__map__init_0_f_0(TypeCtorInfo_32_32, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
    Var_21 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_23 = mercury__bimap__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
    {
      GlobalData_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GlobalData_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), GlobalData_8, 1) = ((MR_Box) ((UseCommonCells_5 | ((((HaveUnboxedFloats_6 << (MR_Integer) 1)) | ((HaveUnboxedInt64s_7 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), GlobalData_8, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), GlobalData_8, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), GlobalData_8, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), GlobalData_8, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), GlobalData_8, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), GlobalData_8, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), GlobalData_8, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), GlobalData_8, 9) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), GlobalData_8, 10) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), GlobalData_8, 11) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), GlobalData_8, 12) = ((MR_Box) (Var_23));
    }
    return GlobalData_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_int64s_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____have_unboxed_int64s_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_int64s_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____have_unboxed_int64s_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_global_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_global_data____Unify____use_common_cells_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_global_data____Compare____use_common_cells_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_int64s_0);
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

// :- end_module ml_backend.ml_global_data.
