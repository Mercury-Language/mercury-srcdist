/*
** Automatically generated from `mlds_to_java.m'
** by the Mercury compiler,
** version rotd-2017-12-28
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


// :- module ml_backend.mlds_to_java.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java__init
REQUIRED_INIT mercury__ml_backend__mlds_to_java__required_init
ENDINIT
*/

#include "ml_backend.mlds_to_java.mih"
#include "ml_backend.mlds_to_java.mh"


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
#include "backend_libs.c_util.mih"
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
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_rename_classes.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"



struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s {
  MR_bool ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__succeeded;
  MR_Word ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Parameters_16;
  jmp_buf ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__commit_0;
  MR_Word ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Param_23;
  MR_Word ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Var_87;
  MR_Box ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__conv0_Param_23;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_call_method_inputs_0_0[1];

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_call_method_inputs_0_1[1];

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_1;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_1[1];

static const MR_DuPtagLayout ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_call_method_inputs_0[2];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_call_method_inputs_0[2];

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_call_method_inputs_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_code_addr_wrapper_0_0[2];

static const MR_ConstString ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_names_code_addr_wrapper_0_0[2];

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_code_addr_wrapper_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_code_addr_wrapper_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_code_addr_wrapper_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_code_addr_wrapper_0[1];

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_code_addr_wrapper_0[1];

static const MR_EnumFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_1;

static const MR_EnumFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_2;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_value_ordered_context_marker_0[3];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_name_ordered_context_marker_0[3];

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_context_marker_0[3];

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_java__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_java_out_info_0_0[10];

static const MR_ConstString ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_names_java_out_info_0_0[10];

static const MR_DuArgLocn ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_locns_java_out_info_0_0[10];

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_java_out_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_java_out_info_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_java_out_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_java_out_info_0[1];

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_java_out_info_0[1];

static MR_bool MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const_for_java__4802__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_85);

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt_return_for_java__3414__1_4_p_0(
  MR_Word Info_8,
  MR_Word LambdaHeadVar__1_45);

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__generic_args_types_to_string_for_java__2746__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__generic_args_types_to_string_for_java__2746__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17);

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list_for_java__2052__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14);

static MR_Word MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__927__1_2_f_0(
  MR_Integer LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_export_for_java__532__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_33);

static MR_Word MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__func__output_java_src_file__311__1_1_f_0(
  MR_Word LambdaHeadVar__1_74);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____java_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____java_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____context_marker_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____context_marker_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____code_addr_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____code_addr_wrapper_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____call_method_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____call_method_inputs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_java__unsafe_set_last_context_1_p_0(
  MR_Word X_1);

static void MR_CALL 
ml_backend__mlds_to_java__unsafe_get_last_context_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
ml_backend__mlds_to_java__unlock_last_context_0_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_java__lock_last_context_0_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_java__initialise_mutable_last_context_0_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_java__count_new_lines_5_p_0(
  MR_Char C_6,
  MR_Integer STATE_VARIABLE_N_0_9,
  MR_Integer * STATE_VARIABLE_N_10,
  MR_Char Prev_8,
  MR_Char * C_5);

static void MR_CALL 
ml_backend__mlds_to_java__output_target_code_component_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_maybe_qualified_function_name_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word QualFuncName_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_param_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Arg_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_array_assignments_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word GlobalVarName_11,
  MR_Word ElementInit_12,
  MR_Integer Index_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefn_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defns_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defns_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_cell_group_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_cell_group_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_call_scalar_init_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer ChunkNum_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_init_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Map_9,
  MR_Word Scalar_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_init_method_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_init_method_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalars_12,
  MR_Integer ChunkNum_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_defns_for_java_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_defns_for_java_10_p_0(
  MR_Word Info_11,
  MR_Integer Indent_12,
  MR_Word TypeNum_13,
  MR_Word CellGroup_14,
  MR_Word STATE_VARIABLE_Graph_0_28,
  MR_Word * STATE_VARIABLE_Graph_29,
  MR_Word STATE_VARIABLE_Map_0_30,
  MR_Word * STATE_VARIABLE_Map_31);

static void MR_CALL 
ml_backend__mlds_to_java__output_call_init_global_var_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer I_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_init_global_var_method_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Defns_10,
  MR_Integer Chunk_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_java__output_init_global_var_statements_for_java_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_constant_for_java_7_p_0(
  MR_Word _Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12);

static void MR_CALL 
ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_7_p_0(
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12);

static void MR_CALL 
ml_backend__mlds_to_java__output_class_name_arity_for_java_4_p_0(
  MR_String ClassName_5,
  MR_Integer ClassArity_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_interface_3_p_0(
  MR_Word Interface_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0(
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Integer Indent_7,
  MR_Word ClassDefn_8);

static void MR_CALL 
ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_constants_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_constants_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConsts_12);

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_ctor_for_java_5_p_0(
  MR_Integer Indent_6,
  MR_String ClassName_7,
  MR_Integer ClassArity_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_implements_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_implements_list_4_p_0(
  MR_Integer Indent_5,
  MR_Word InterfaceList_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_inherits_list_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Inherits_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_class_kind_for_java_3_p_0(
  MR_Word Kind_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_function_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FunctionDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_102_117_110_99_116_105_111_110_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_func_for_java_9_p_0(
  MR_Word Info_10,
  MR_Integer Indent_11,
  MR_Word FuncName_12,
  MR_Word OutputAux_13,
  MR_Word Context_14,
  MR_Word Signature_15,
  MR_Word MaybeBody_16);

static void MR_CALL 
ml_backend__mlds_to_java__output_switch_cases_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_switch_cases_for_java_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word FuncInfo_3,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7);

static void MR_CALL 
ml_backend__mlds_to_java__output_switch_default_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word FuncInfo_11,
  MR_Word Context_12,
  MR_Word Default_13,
  MR_Word * ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Stmt_11,
  MR_Word * ExitMethods_12);

static void MR_CALL 
ml_backend__mlds_to_java__output_statements_for_java_7_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word FuncInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * ExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_java__output_call_rval_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_atomic_stmt_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_atomic_stmt_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word AtomicStmt_9,
  MR_Word Context_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_init_args_for_java_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__hand_defined_type_for_java_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_unqual_class_name_for_java_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6);

static void MR_CALL 
ml_backend__mlds_to_java__indent_line_after_context_6_p_0(
  MR_Word OutputLineNumbers_7,
  MR_Word Marker_8,
  MR_Word Context_9,
  MR_Integer N_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_case_cond_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_assign_results_8_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer ResultIndex_4,
  MR_Integer Indent_5,
  MR_Word Context_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_unboxed_result_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Integer ResultIndex_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_args_as_array_5_p_0(
  MR_Word Info_6,
  MR_Word CallArgs_7,
  MR_Word CallArgTypes_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_boxed_args_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
ml_backend__mlds_to_java__while_exit_methods_for_java_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_java__boxed_type_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__boxed_type_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * String_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_func_decl_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncName_10,
  MR_Word OutputAux_11,
  MR_Word Signature_12);

static void MR_CALL 
ml_backend__mlds_to_java__output_function_name_for_java_3_p_0(
  MR_Word FunctionName_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_params_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_params_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Parameters_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_field_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_field_var_decl_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word FieldVarName_7,
  MR_Word Type_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_local_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word GlobalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word OutputAux_8,
  MR_Word Type_9,
  MR_Word Initializer_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_alloc_only_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_decl_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word GlobalVarName_7,
  MR_Word Type_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_env_var_definition_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_String EnvVarName_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_final_pred_call_4_p_0(
  MR_Integer Indent_5,
  MR_String FinalPred_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_init_for_java_2_4_p_0(
  MR_Integer Indent_5,
  MR_String InitPred_6);

static MR_Char MR_CALL 
ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_f_0(
  MR_Char Char_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_p_0(
  MR_Word STATE_VARIABLE_ClassDefn_0_24,
  MR_Word * STATE_VARIABLE_ClassDefn_25,
  MR_Word STATE_VARIABLE_Renaming_0_26,
  MR_Word * STATE_VARIABLE_Renaming_27);

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_nth_arg_3_p_0(
  MR_Word Type_4,
  MR_Word MethodArgVariable_5,
  MR_Word * CallArg_6);

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_statement_for_addr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_statement_for_addr_3_p_0(
  MR_Word InputArgs_4,
  MR_Word CodeAddr_5,
  MR_Word * Stmt_6);

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_args_from_array_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArrayVar_2,
  MR_Integer Counter_3,
  MR_Word HeadVar__4_4,
  MR_Word * Args_5);

static void MR_CALL 
ml_backend__mlds_to_java__create_generic_arg_3_p_0(
  MR_Integer I_4,
  MR_Word * ArgName_5,
  MR_Word * Arg_6);

static void MR_CALL 
ml_backend__mlds_to_java__generate_addr_wrapper_class_5_p_0(
  MR_Word MLDS_ModuleName_6,
  MR_Word HeadVar__2_2,
  MR_Word * ClassDefn_9,
  MR_Word STATE_VARIABLE_AddrOfMap_0_47,
  MR_Word * STATE_VARIABLE_AddrOfMap_48);

static void MR_CALL 
ml_backend__mlds_to_java__add_to_address_map_4_p_0(
  MR_String ClassName_5,
  MR_Word CodeAddrs_6,
  MR_Word STATE_VARIABLE_AddrOfMap_0_14,
  MR_Word * STATE_VARIABLE_AddrOfMap_15);

static void MR_CALL 
ml_backend__mlds_to_java__add_to_address_map_2_5_p_0(
  MR_String FlippedClassName_1,
  MR_Word HeadVar__2_2,
  MR_Integer I_3,
  MR_Word STATE_VARIABLE_AddrOfMap_0_4,
  MR_Word * STATE_VARIABLE_AddrOfMap_5);

static MR_Box MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0(
  MR_Integer Arity_4,
  MR_Word CodeAddrs_5,
  MR_Word * MethodDefn_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__is_specialised_method_ptr_arity_1_p_0(
  MR_Integer Arity_2);

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enum_constant_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_lval_for_java_4_p_0(
  MR_Word tscc_proc_1_input_1_Info_5,
  MR_Word tscc_proc_1_input_2_Lval_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(
  MR_Word tscc_proc_2_input_1_Info_5,
  MR_Word tscc_proc_2_input_2_Rval_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_rval_for_java_4_p_0(
  MR_Word tscc_proc_3_input_1_Info_5,
  MR_Word tscc_proc_3_input_2_Rval_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_unop_for_java_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Unop_7,
  MR_Word tscc_proc_4_input_3_Expr_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_rval_maybe_with_enum_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_binop_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_std_unop_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_unboxed_rval_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Const_6);

static void MR_CALL 
ml_backend__mlds_to_java__mlds_output_proc_label_for_java_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__mlds_to_java__mlds_output_code_addr_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word CodeAddr_7,
  MR_Word IsCall_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_int_const_for_java_3_p_0(
  MR_Integer N_4);

static MR_String MR_CALL 
ml_backend__mlds_to_java__get_java_type_initializer_1_f_0(
  MR_Word Type_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(
  MR_Word Op_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__have_preallocated_pseudo_type_var_for_java_1_p_0(
  MR_Integer N_2);

static void MR_CALL 
ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(
  MR_Word Info_5,
  MR_String Comment_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_field_var_name_for_java_3_p_0(
  MR_Word FieldVarName_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_local_var_name_for_java_3_p_0(
  MR_Word LocalVarName_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_maybe_qualified_global_var_name_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word QualGlobalVarName_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_java__type_is_array_for_java_1_f_0(
  MR_Word Type_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_list_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_list_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Inits_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enum_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enum_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__mlds_to_java__assign_ref_output_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__assign_ref_output_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__assign_ref_output_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Arg_10,
  MR_Integer N_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_java__write_argument_name_for_java_3_p_0(
  MR_Word Arg_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_param_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_param_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Argument_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0(
  MR_Word Info0_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_type_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_no_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_export_no_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_java__write_export_call_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__write_export_call_for_java_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_body_code_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ForeignBodyCode_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_decl_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word DeclCode_8);

static void MR_CALL 
ml_backend__mlds_to_java__write_string_with_context_block_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java__write_string_with_context_block_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_String Code_9,
  MR_Word Context_10);

static void MR_CALL 
ml_backend__mlds_to_java__output_context_for_java_5_p_0(
  MR_Word OutputLineNumbers_6,
  MR_Word Marker_7,
  MR_Word ProgContext_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_java__init_java_out_info_3_f_0(
  MR_Word ModuleInfo_5,
  MR_String SourceFileName_6,
  MR_Word AddrOfMap_7);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_common_data_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_common_data_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word VectorCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ScalarCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_decls_for_java_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6,
  MR_String * String_7,
  MR_Word * ArrayDims_8);

static void MR_CALL 
ml_backend__mlds_to_java__mercury_type_to_string_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word CtorCat_8,
  MR_String * String_9,
  MR_Word * ArrayDims_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__java_builtin_type_4_p_0(
  MR_Word MLDS_Type_5,
  MR_String * JavaUnboxedType_6,
  MR_String * JavaBoxedType_7,
  MR_String * UnboxMethod_8);

static void MR_CALL 
ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word ArgsTypes_5,
  MR_String * String_6);

static void MR_CALL 
ml_backend__mlds_to_java__qual_class_name_to_string_for_java_3_p_0(
  MR_Word QualClassName_4,
  MR_Integer Arity_5,
  MR_String * String_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(
  MR_Word GlobalVarName_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(
  MR_Word PredLabel_4);

static void MR_CALL 
ml_backend__mlds_to_java__output_src_end_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_src_end_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_src_start_for_java_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_src_start_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_src_start_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word MercuryModuleName_11,
  MR_Word Imports_12,
  MR_Word ForeignDecls_13,
  MR_Word FuncDefns_14);

static void MR_CALL 
ml_backend__mlds_to_java__output_debug_class_init_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_debug_class_init_4_p_0(
  MR_Word ModuleName_5,
  MR_String State_6);

static void MR_CALL 
ml_backend__mlds_to_java__write_main_driver_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__write_main_driver_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_finals_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_finals_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word FinalPreds_6);

static void MR_CALL 
ml_backend__mlds_to_java__output_inits_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_inits_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word InitPreds_6);

static void MR_CALL 
ml_backend__mlds_to_java__make_code_addr_map_for_java_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enums_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enums_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnums_8);

static void MR_CALL 
ml_backend__mlds_to_java__output_exports_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_exports_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Exports_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_f_0(
  MR_Word AllForeignCode_3);

static void MR_CALL 
ml_backend__mlds_to_java__output_import_3_p_0(
  MR_Word Import_4);

static void MR_CALL 
ml_backend__mlds_to_java__enforce_java_names_2_p_0(
  MR_String Name_3,
  MR_String * JavaName_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(
  MR_Word Rval_2);

static void MR_CALL 
ml_backend__mlds_to_java__output_java_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____call_method_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____call_method_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____code_addr_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____code_addr_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____context_marker_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____context_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____java_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java____Compare____java_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_1[37][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_2[31][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_3[4][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_4[11][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_5[7][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_6[14][6];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_7[8][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_10[3][10];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_11[2][13];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_12[2][11];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_13[8][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_14[4][5];


/* sealed */ struct ml_backend__mlds_to_java__vector_common_type_8_0_s {
  const MR_String ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_0;
  const MR_String ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_1;
  const MR_String ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_2;
};

static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_8_0_s ml_backend__mlds_to_java_vector_common_8[24];

/* sealed */ struct ml_backend__mlds_to_java__vector_common_type_9_0_s {
  const MR_String ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_0;
  const MR_Word ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_9_0_s ml_backend__mlds_to_java_vector_common_9[16];

/* sealed */ struct ml_backend__mlds_to_java__vector_common_type_15_0_s {
  const MR_String ml_backend__mlds_to_java__vector_common_type_15_0__vct_15_f_0;
};

static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_15_0_s ml_backend__mlds_to_java_vector_common_15[8];

/* sealed */ struct ml_backend__mlds_to_java__vector_common_type_16_0_s {
  const MR_String ml_backend__mlds_to_java__vector_common_type_16_0__vct_16_f_0;
  const MR_String ml_backend__mlds_to_java__vector_common_type_16_0__vct_16_f_1;
};

static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_16_0_s ml_backend__mlds_to_java_vector_common_16[16];



static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_1[37][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_1[6]))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "java.lang.System.exit(jmercury.runtime.JavaInternal.exit_status);")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stderr_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stdout_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.runMain(run_main);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "};")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "    }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "  }\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "    }\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) " init]\");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "end")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[18])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 28 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_7[6]))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_2[31][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_java__output_debug_class_init_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_java__output_src_start_for_java_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_java__output_src_end_for_java_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[0])),
    ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[3])),
    ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[2])),
    ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[2])),
    ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[7])),
    ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[7])),
    ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[8])),
    ((MR_Box) (ml_backend__mlds_to_java__write_string_with_context_block_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[8])),
    ((MR_Box) (ml_backend__mlds_to_java__write_export_call_for_java_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_java__output_export_ref_out_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[2])),
    ((MR_Box) (ml_backend__mlds_to_java__output_export_param_ref_out_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[2])),
    ((MR_Box) (ml_backend__mlds_to_java__assign_ref_output_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[2])),
    ((MR_Box) (ml_backend__mlds_to_java__assign_ref_output_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[9])),
    ((MR_Box) (ml_backend__mlds_to_java__generate_call_method_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[11])),
    ((MR_Box) (ml_backend__mlds_to_java__generate_call_method_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[12])),
    ((MR_Box) (ml_backend__mlds_to_java__generate_call_statement_for_addr_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[3])),
    ((MR_Box) (ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[2])),
    ((MR_Box) (ml_backend__mlds_to_java__boxed_type_to_string_for_java_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[13])),
    ((MR_Box) (ml_backend__mlds_to_java__output_implements_list_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_3[3])),
    ((MR_Box) (ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[2])),
    ((MR_Box) (ml_backend__mlds_to_java__IntroducedFrom__pred__generic_args_types_to_string_for_java__2746__1_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_3[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "call")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_4[11][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_5[7][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_6[14][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_7[8][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[26])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_2[23])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "<constructor>"))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_10[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_11[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_12[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_13[8][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_scalar_common_14[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_java__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_8_0_s ml_backend__mlds_to_java_vector_common_8[24] = {
  /* row 0 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 1 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 2 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue"
  },
  /* row 3 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue"
  },
  /* row 4 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue"
  },
  /* row 5 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue"
  },
  /* row 6 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 7 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 8 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue"
  },
  /* row 9 */
  {
    (MR_String) "double",
    (MR_String) "java.lang.Double",
    (MR_String) "doubleValue"
  },
  /* row 10 */
  {
    (MR_String) "char",
    (MR_String) "java.lang.Character",
    (MR_String) "charValue"
  },
  /* row 11 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "long",
    (MR_String) "java.lang.Long",
    (MR_String) "longValue"
  },
  /* row 13 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue"
  },
  /* row 14 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 15 */
  {
    (MR_String) "float",
    (MR_String) "java.lang.Float",
    (MR_String) "floatValue"
  },
  /* row 16 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 17 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 21 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_String) (MR_Integer) 0,
    (MR_String) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "boolean",
    (MR_String) "java.lang.Boolean",
    (MR_String) "booleanValue"
  },
};

static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_9_0_s ml_backend__mlds_to_java_vector_common_9[16] = {
  /* row 0 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 1 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_String) "byte",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 3 */
  {
    (MR_String) "byte",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 4 */
  {
    (MR_String) "short",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 5 */
  {
    (MR_String) "short",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 7 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 8 */
  {
    (MR_String) "jmercury.runtime.TypeInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 9 */
  {
    (MR_String) "jmercury.runtime.TypeCtorInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 10 */
  {
    (MR_String) "/* typeclass_info */ java.lang.Object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24])
  },
  /* row 11 */
  {
    (MR_String) "/* base_typeclass_info */ java.lang.Object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24])
  },
  /* row 12 */
  {
    (MR_String) "jmercury.runtime.TypeInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 13 */
  {
    (MR_String) "jmercury.runtime.TypeCtorInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 14 */
  {
    (MR_String) "/* typeclass_info */ java.lang.Object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24])
  },
  /* row 15 */
  {
    (MR_String) "/* base_typeclass_info */ java.lang.Object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24])
  },
};

static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_15_0_s ml_backend__mlds_to_java_vector_common_15[8] = {
  /* row 0 */   {     (MR_String) ">>" },
  /* row 1 */   {     (MR_String) ">>>" },
  /* row 2 */   {     (MR_String) ">>" },
  /* row 3 */   {     (MR_String) ">>>" },
  /* row 4 */   {     (MR_String) ">>" },
  /* row 5 */   {     (MR_String) ">>>" },
  /* row 6 */   {     (MR_String) ">>" },
  /* row 7 */   {     (MR_String) ">>>" },
};

static /* final */ const struct ml_backend__mlds_to_java__vector_common_type_16_0_s ml_backend__mlds_to_java_vector_common_16[16] = {
  /* row 0 */
  {
    (MR_String) "byte",
    (MR_String) "0"
  },
  /* row 1 */
  {
    (MR_String) "double",
    (MR_String) "0"
  },
  /* row 2 */
  {
    (MR_String) "char",
    (MR_String) "\'\\u0000\'"
  },
  /* row 3 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 4 */
  {
    (MR_String) "long",
    (MR_String) "0"
  },
  /* row 5 */
  {
    (MR_String) "short",
    (MR_String) "0"
  },
  /* row 6 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_String) "float",
    (MR_String) "0"
  },
  /* row 8 */
  {
    (MR_String) "int",
    (MR_String) "0"
  },
  /* row 9 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 13 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 15 */
  {
    (MR_String) "boolean",
    (MR_String) "false"
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "ml_backend.mlds_to_java.mh"
#line 4938 "mlds_to_java.m"
MR_Word ml_backend__mlds_to_java__mutable_variable_last_context;
#ifdef MR_THREAD_SAFE
    MercuryLock ml_backend__mlds_to_java__mutable_variable_last_context_lock;
#endif

#line 4938 "mlds_to_java.m"
void 
ml_backend__mlds_to_java__user_init_pred_0(void)
#line 4938 "mlds_to_java.m"
{
#line 4938 "mlds_to_java.m"
	ml_backend__mlds_to_java__initialise_mutable_last_context_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds_to_java__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_call_method_inputs_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_java__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0
};

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_0 = {
  (MR_String) "cmi_separate",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_call_method_inputs_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_call_method_inputs_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0
};

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_1 = {
  (MR_String) "cmi_array",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_call_method_inputs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_0[1] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_0
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_1[1] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_1
};

static const MR_DuPtagLayout ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_call_method_inputs_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_call_method_inputs_0[2] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_1,
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_0
};

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_call_method_inputs_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_java____Unify____call_method_inputs_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_java____Compare____call_method_inputs_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_java",
  (MR_String) "call_method_inputs",
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_call_method_inputs_0 },
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_call_method_inputs_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_call_method_inputs_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_code_addr_wrapper_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_java__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_ConstString ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_names_code_addr_wrapper_0_0[2] = {
  (MR_String) "caw_class",
  (MR_String) "caw_ptr_num"
};

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_code_addr_wrapper_0_0 = {
  (MR_String) "code_addr_wrapper",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_code_addr_wrapper_0_0,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_names_code_addr_wrapper_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_code_addr_wrapper_0_0[1] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_code_addr_wrapper_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_code_addr_wrapper_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_code_addr_wrapper_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_code_addr_wrapper_0[1] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_code_addr_wrapper_0_0
};

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_code_addr_wrapper_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_java____Unify____code_addr_wrapper_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_java____Compare____code_addr_wrapper_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_java",
  (MR_String) "code_addr_wrapper",
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_code_addr_wrapper_0 },
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_code_addr_wrapper_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_code_addr_wrapper_0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_0 = {
  (MR_String) "marker_begin_block",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_1 = {
  (MR_String) "marker_end_block",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_2 = {
  (MR_String) "marker_comment",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_value_ordered_context_marker_0[3] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_0,
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_1,
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_2
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_name_ordered_context_marker_0[3] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_0,
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_2,
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_functor_desc_context_marker_0_1
};

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_context_marker_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_context_marker_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_java____Unify____context_marker_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_java____Compare____context_marker_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_java",
  (MR_String) "context_marker",
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_name_ordered_context_marker_0 },
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__enum_value_ordered_context_marker_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_context_marker_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_java__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0,
    (MR_TypeInfo) &ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds_to_java__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_java_out_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_java__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_generics_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_break_context_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_java__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

static const MR_ConstString ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_names_java_out_info_0_0[10] = {
  (MR_String) "joi_module_info",
  (MR_String) "joi_auto_comments",
  (MR_String) "joi_line_numbers",
  (MR_String) "joi_foreign_line_numbers",
  (MR_String) "joi_module_name",
  (MR_String) "joi_source_filename",
  (MR_String) "joi_addrof_map",
  (MR_String) "joi_output_generics",
  (MR_String) "joi_break_context",
  (MR_String) "joi_univ_tvars"
};

static const MR_DuArgLocn ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_locns_java_out_info_0_0[10] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_java_out_info_0_0 = {
  (MR_String) "java_out_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_types_java_out_info_0_0,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_names_java_out_info_0_0,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__field_locns_java_out_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_java_out_info_0_0[1] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_java_out_info_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_java_out_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_stag_ordered_java_out_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_java_out_info_0[1] = {
  &ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_functor_desc_java_out_info_0_0
};

static const MR_Integer ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_java_out_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_java____Unify____java_out_info_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_java____Compare____java_out_info_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_java",
  (MR_String) "java_out_info",
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_name_ordered_java_out_info_0 },
  {     ml_backend__mlds_to_java__ml_backend__mlds_to_java__du_ptag_ordered_java_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_java__ml_backend__mlds_to_java__functor_number_map_java_out_info_0
};

static MR_bool MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const_for_java__4802__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_85)
{
  {
    MR_bool succeeded = (Lang_17 == HeadVar__2_85);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt_return_for_java__3414__1_4_p_0(
  MR_Word Info_8,
  MR_Word LambdaHeadVar__1_45)
{
  {
    MR_bool succeeded;
    MR_Word Type_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_45, (MR_Integer) 0)));
    MR_Word Result_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_45, (MR_Integer) 1)));
    MR_String JavaBoxedName_82;
    MR_String _JavaName_81;
    MR_String Var_83;

    succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_65, &_JavaName_81, &JavaBoxedName_82, &Var_83);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0(JavaBoxedName_82);
      mercury__io__write_string_3_p_0((MR_String) ".valueOf(");
      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Result_66);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object) (");
      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Result_66);
      mercury__io__write_string_3_p_0((MR_String) "))");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__generic_args_types_to_string_for_java__2746__1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__generic_args_types_to_string_for_java__2746__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word MLDS_ArgType_13;
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    MR_String Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    MR_Word Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
    MR_String JavaBoxedName_39;
    MR_String Var_38;
    MR_String Var_40;

    MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, LambdaHeadVar__1_16);
    succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(MLDS_ArgType_13, &Var_38, &JavaBoxedName_39, &Var_40);
    if (succeeded)
      *LambdaHeadVar__2_17 = JavaBoxedName_39;
    else
    {
      MR_Word TypeCtorInfo_19_50;
      MR_String String0_41;
      MR_Word ArrayDims_42;
      MR_Word RevBrackets_43;
      MR_Word Brackets_44;
      MR_Word Var_46;

      ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_4, MLDS_ArgType_13, &String0_41, &ArrayDims_42);
      TypeCtorInfo_19_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_19_50, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[30], ArrayDims_42, &RevBrackets_43);
      mercury__list__reverse_2_p_0(TypeCtorInfo_19_50, RevBrackets_43, &Brackets_44);
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (String0_41));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Brackets_44));
      }
      mercury__string__append_list_2_p_0(Var_46, LambdaHeadVar__2_17);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list_for_java__2052__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14)
{
  {
    ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(Info_5, LambdaHeadVar__1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__927__1_2_f_0(
  MR_Integer LambdaHeadVar__1_53,
  MR_Word LambdaHeadVar__2_54)
{
  {
    MR_Word LambdaHeadVar__3_55;
    MR_Word MatchCond_24;
    MR_Word Var_56;
    MR_Word Var_57;

    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (LambdaHeadVar__1_53));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      MatchCond_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MatchCond_24, 0) = ((MR_Box) (Var_56));
    }
    {
      LambdaHeadVar__3_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_55, 0) = ((MR_Box) (MatchCond_24));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_55, 2) = ((MR_Box) (LambdaHeadVar__2_54));
    }
    return LambdaHeadVar__3_55;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__pred__output_export_for_java__532__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_33)
{
  {
    MR_bool succeeded = (Lang_10 == HeadVar__2_33);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java__IntroducedFrom__func__output_java_src_file__311__1_1_f_0(
  MR_Word LambdaHeadVar__1_74)
{
  {
    MR_Word LambdaHeadVar__2_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_74, (MR_Integer) 4)));
    MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_74, (MR_Integer) 0)));
    MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_74, (MR_Integer) 1)));
    MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_74, (MR_Integer) 2)));
    MR_Word Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_74, (MR_Integer) 3)));

    return LambdaHeadVar__2_75;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java____Compare____java_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_34 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_33 == CastY_34);
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
      MR_String ArgX6_14 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_String ArgY6_15 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX8_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_24;

      hlds__hlds_module____Compare____module_info_0_0(&Var_24, ArgX1_4, ArgY1_5);
      succeeded = (Var_24 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_24;
      else
      {
        MR_Word Var_25;
        MR_Integer Var_45 = (MR_Integer) ArgX2_6;
        MR_Integer Var_46 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_25, Var_45, Var_46);
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;
          MR_Integer Var_47 = (MR_Integer) ArgX3_8;
          MR_Integer Var_48 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, Var_47, Var_48);
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
          {
            MR_Word Var_27;
            MR_Integer Var_49 = (MR_Integer) ArgX4_10;
            MR_Integer Var_50 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_27, Var_49, Var_50);
            succeeded = (Var_27 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_27;
            else
            {
              MR_Word Var_28;

              ml_backend__mlds____Compare____mlds_module_name_0_0(&Var_28, ArgX5_12, ArgY5_13);
              succeeded = (Var_28 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_28;
              else
              {
                MR_Word Var_29;

                mercury__private_builtin__builtin_compare_string_3_p_0(&Var_29, ArgX6_14, ArgY6_15);
                succeeded = (Var_29 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_29;
                else
                {
                  MR_Word Var_30;

                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_2[1], &Var_30, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                  {
                    MR_Word Var_31;
                    MR_Integer Var_51 = (MR_Integer) ArgX8_18;
                    MR_Integer Var_52 = (MR_Integer) ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_31, Var_51, Var_52);
                    succeeded = (Var_31 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_31;
                    else
                    {
                      MR_Word Var_32;
                      MR_Integer Var_53 = (MR_Integer) ArgX9_20;
                      MR_Integer Var_54 = (MR_Integer) ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, Var_53, Var_54);
                      succeeded = (Var_32 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_32;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_1[9], HeadVar__1_1, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
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

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____java_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
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
      MR_String ArgX6_13 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_String ArgY6_14 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX8_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
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
              succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = (strcmp(ArgX6_13, ArgY6_14) == 0);
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[1];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        TypeInfo_28_28 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[9];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
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

static void MR_CALL 
ml_backend__mlds_to_java____Compare____context_marker_0_0(
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

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____context_marker_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java____Compare____code_addr_wrapper_0_0(
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
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_1[8], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____code_addr_wrapper_0_0(
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
      MR_Word TypeInfo_9_9;
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[8];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java____Compare____call_method_inputs_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        ml_backend__mlds____Compare____mlds_local_var_name_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____call_method_inputs_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_10_10 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[7];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__unsafe_set_last_context_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__unsafe_set_last_context_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
ml_backend__mlds_to_java__mutable_variable_last_context = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__unsafe_get_last_context_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__unsafe_get_last_context_1_p_0

	MR_Word X;

		{
X = ml_backend__mlds_to_java__mutable_variable_last_context;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__unlock_last_context_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__unlock_last_context_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__lock_last_context_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__lock_last_context_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__initialise_mutable_last_context_0_p_0(void)
{
  {
    MR_Word X_1;

{
#define MR_PROC_LABEL ml_backend__mlds_to_java__initialise_mutable_last_context_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ml_backend__mlds_to_java__mutable_variable_last_context_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    X_1 = mercury__term__context_init_0_f_0();
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__initialise_mutable_last_context_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__initialise_mutable_last_context_0_p_0

	MR_Word X;

	X =  X_1 ;
		{
ml_backend__mlds_to_java__mutable_variable_last_context = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__initialise_mutable_last_context_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ml_backend__mlds_to_java__mutable_variable_last_context_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__count_new_lines_5_p_0(
  MR_Char C_6,
  MR_Integer STATE_VARIABLE_N_0_9,
  MR_Integer * STATE_VARIABLE_N_10,
  MR_Char Prev_8,
  MR_Char * C_5)
{
  {
    MR_bool succeeded;

    *C_5 = C_6;
    switch (C_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 10:
        {
          succeeded = (Prev_8 == (MR_Char) 13);
          succeeded = !(succeeded);
        }
        break;
      case (MR_Char) 13:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_N_10 = (STATE_VARIABLE_N_0_9 + (MR_Integer) 1);
    }
    else
      *STATE_VARIABLE_N_10 = STATE_VARIABLE_N_0_9;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_target_code_component_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6)
{
  switch (MR_tag((MR_Word) TargetCode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_15 = (MR_Word) MR_body(((MR_Word) TargetCode_6), (MR_Integer) 0);

        ml_backend__mlds_to_java__output_maybe_qualified_function_name_for_java_4_p_0(Info_5, FuncName_15);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_8 = ((MR_String) (MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 0)));
        MR_Word MaybeUserContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 1)));

        if ((MaybeUserContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__io__write_string_3_p_0(CodeString_8);
        else
        {
          MR_Word ProgContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUserContext_9, (MR_Integer) 0)));

          ml_backend__mlds_to_java__write_string_with_context_block_6_p_0(Info_5, (MR_Integer) 0, CodeString_8, ProgContext_10);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_30 = ((MR_String) (MR_hl_field(MR_mktag(2), TargetCode_6, (MR_Integer) 0)));

        mercury__io__write_string_3_p_0(CodeString_30);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1)));

            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1)));

            ml_backend__mlds_to_java__output_lval_for_java_4_p_0(Info_5, Lval_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1)));
            MR_Word InfoGenerics_14;
            MR_String String_54;
            MR_Word ArrayDims_55;
            MR_Word Var_57;
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
            MR_Word Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
            MR_String Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
            MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
            MR_Word Var_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) & (MR_Integer) 1);

            {
              InfoGenerics_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 0) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 1) = ((MR_Box) ((Var_32 | ((((Var_33 << (MR_Integer) 1)) | ((Var_34 << (MR_Integer) 2)))))));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 2) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 3) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 4) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 5) = ((MR_Box) (((MR_Integer) 0 | ((Var_39 << (MR_Integer) 1)))));
              MR_hl_field(MR_mktag(0), InfoGenerics_14, 6) = ((MR_Box) (Var_40));
            }
            ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(InfoGenerics_14, Type_13, &String_54, &ArrayDims_55);
            mercury__io__write_string_3_p_0(String_54);
            Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_57);
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_target_code_component_for_java\'/4", (MR_String) "target_code_alloc_id not implemented");
              return;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_maybe_qualified_function_name_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word QualFuncName_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 0)));
    MR_Word FuncName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 1)));
    MR_Word CurrentModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_8, CurrentModuleName_10);
    if (!(succeeded))
    {
      MR_String QualifierString_31;
      MR_Word OuterName_38;
      MR_Word InnerName_39;
      MR_String MangledOuterName_40;
      MR_String MangledSuffix_41;

      OuterName_38 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_8);
      InnerName_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_38, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_40);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_38, InnerName_39);
      if (succeeded)
        MangledSuffix_41 = (MR_String) "";
      else
      {
        MR_Word Suffix_42;
        MR_String MangledSuffix0_43;
        MR_Word Var_46;

        ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_39, OuterName_38, &Suffix_42);
        Var_46 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0((MR_Integer) 0);
        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_42, Var_46, (MR_String) ".", &MangledSuffix0_43);
        MangledSuffix_41 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_43);
      }
      QualifierString_31 = mercury__string__f_43_43_2_f_0(MangledOuterName_40, MangledSuffix_41);
      mercury__io__write_string_3_p_0(QualifierString_31);
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
    if (((MR_tag((MR_Word) FuncName_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Name_62 = ((MR_String) (MR_hl_field(MR_mktag(1), FuncName_9, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0(Name_62);
    }
    else
    {
      MR_Word PlainFuncName_54 = (MR_Word) MR_body(((MR_Word) FuncName_9), (MR_Integer) 0);
      MR_Word FuncLabel_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_54, (MR_Integer) 0)));
      MR_Word ProcLabel_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_55, (MR_Integer) 0)));
      MR_Word MaybeAux_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_55, (MR_Integer) 1)));
      MR_Word PredLabel_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_57, (MR_Integer) 0)));
      MR_Integer ProcId_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_57, (MR_Integer) 1)));
      MR_Integer ModeNum_61;
      MR_String Var_70;
      MR_String Var_74;
      MR_Word _PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_54, (MR_Integer) 1)));

      ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(PredLabel_59);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_60, &ModeNum_61);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ModeNum_61, &Var_74);
      mercury__io__write_string_3_p_0(Var_74);
      Var_70 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_58);
      mercury__io__write_string_3_p_0(Var_70);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_param_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Arg_8)
{
  {
    MR_Word VarName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_8, (MR_Integer) 0)));
    MR_Word Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_8, (MR_Integer) 1)));
    MR_String String_33;
    MR_Word ArrayDims_34;
    MR_Word Var_36;
    MR_String NameStr_43;
    MR_String MangledName_49;
    MR_String JavaSafeName_50;
    MR_Word _GCStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_8, (MR_Integer) 2)));

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_11, &String_33, &ArrayDims_34);
    mercury__io__write_string_3_p_0(String_33);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_36);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    NameStr_43 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_10);
    MangledName_49 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_43);
    JavaSafeName_50 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_49);
    mercury__io__write_string_3_p_0(JavaSafeName_50);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_array_assignments_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word GlobalVarName_11,
  MR_Word ElementInit_12,
  MR_Integer Index_13,
  MR_Integer * HeadVar__6_6)
{
  {
    *HeadVar__6_6 = (Index_13 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(GlobalVarName_11);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__io__write_int_3_p_0(Index_13);
    mercury__io__write_string_3_p_0((MR_String) "] = ");
    ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(Info_9, ElementInit_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list_for_java__2052__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__6_6;

    ml_backend__mlds_to_java__output_rtti_array_assignments_for_java_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word GlobalVarName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 0)));
    MR_Word Initializer_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 4)));
    MR_Word _Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 1)));
    MR_Word _Flags_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 2)));
    MR_Word _Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) Initializer_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rtti_defn_assignments_for_java\'/5", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_14, (MR_Integer) 0)));
          MR_Word FieldInits_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_14, (MR_Integer) 1)));
          MR_Word Var_48;

          succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 1)));
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rtti_defn_assignments_for_java\'/5", (MR_String) "is_array");
              return;
            }
          }
          else
          {
            MR_Word IsArray_79;
            MR_Word Var_49;

            succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 1)));
              IsArray_79 = (MR_Integer) 0;
            }
            else
            {
              MR_Word CtorCat_51;
              MR_Word Var_50;
              MR_Word Var_52;

              succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 1)));
                CtorCat_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 2)));
                Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 3)));
                IsArray_79 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_51);
              }
              else
              {
                MR_Word RttiIdMaybeElement_53;

                succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  RttiIdMaybeElement_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 1)));
                  {
                    MR_String _JavaTypeName_54;

                    backend_libs__rtti__rtti_id_maybe_element_java_type_3_p_0(RttiIdMaybeElement_53, &_JavaTypeName_54, &IsArray_79);
                  }
                }
                else
                  IsArray_79 = (MR_Integer) 1;
              }
            }
            switch (IsArray_79) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rtti_defn_assignments_for_java\'/5", (MR_String) "is_array");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_62;

                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
                  ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(GlobalVarName_10);
                  mercury__io__write_string_3_p_0((MR_String) ".init(");
                  {
                    Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[3]));
                    MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Info_6));
                  }
                  mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, FieldInits_18, (MR_String) ",\n\t\t", Var_62);
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer_14, (MR_Integer) 0)));
          MR_Word Var_24;
          MR_Integer _Index_21;
          MR_Box conv2__Index_21;
          MR_Box conv1_STATE_VARIABLE_IO_23;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_12[1]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_6));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Indent_7));
            MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (GlobalVarName_10));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_24, ElementInits_20, ((MR_Box) ((MR_Integer) 0)), &conv2__Index_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
          _Index_21 = ((MR_Integer) conv2__Index_21);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defns_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_rtti_defn_assignments_for_java_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_defns_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8)
{
  {
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "//\n");
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[10]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_rtti_defns_assignments_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_15, GlobalVarDefns_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_cell_group_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list_for_java__2052__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_cell_group_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10)
{
  {
    MR_Integer TypeRawNum_12 = (MR_Integer) TypeNum_9;
    MR_Word Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 0)));
    MR_Word ClassDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 1)));
    MR_Word RowInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 4)));
    MR_Integer Var_30;
    MR_Word Var_33;
    MR_String Var_43;
    MR_String String_64;
    MR_Word ArrayDims_65;
    MR_Word Var_67;
    MR_Word Var_77;
    MR_Word _FieldIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 2)));
    MR_Integer _NextRow_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 3)));

    ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0(Info_7, Indent_8, ClassDefn_14);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "private static final ");
    ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_7, Type_13, &String_64, &ArrayDims_65);
    mercury__io__write_string_3_p_0(String_64);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_67);
    mercury__io__write_string_3_p_0((MR_String) " MR_vector_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], TypeRawNum_12, &Var_43);
    mercury__io__write_string_3_p_0(Var_43);
    mercury__io__write_string_3_p_0((MR_String) "[] = {\n");
    Var_30 = (Indent_8 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_30);
    Var_33 = mercury__cord__list_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, RowInits_17);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_vector_cell_group_for_java_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Info_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, Var_33, (MR_String) ",\n\t\t", Var_77);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_call_scalar_init_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer ChunkNum_6)
{
  {
    MR_String Var_19;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "MR_init_scalars_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ChunkNum_6, &Var_19);
    mercury__io__write_string_3_p_0(Var_19);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_init_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Map_9,
  MR_Word Scalar_10)
{
  {
    MR_Word Initializer_12;
    MR_Word Type_14;
    MR_Word TypeNum_15;
    MR_Integer RowNum_16;
    MR_Integer TypeRawNum_17;
    MR_Word Var_28;
    MR_String Var_37;
    MR_Word Var_43;
    MR_String Var_47;
    MR_Box conv0_Initializer_12;
    MR_Word Var_13;

    mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, Map_9, ((MR_Box) (Scalar_10)), &conv0_Initializer_12);
    Initializer_12 = ((MR_Word) conv0_Initializer_12);
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 0)));
    Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 1)));
    TypeNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 2)));
    RowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 3)));
    TypeRawNum_17 = (MR_Integer) TypeNum_15;
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "MR_scalar_common_");
    Var_43 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_43, TypeRawNum_17, &Var_37);
    mercury__io__write_string_3_p_0(Var_37);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_43, RowNum_16, &Var_47);
    mercury__io__write_string_3_p_0(Var_47);
    mercury__io__write_string_3_p_0((MR_String) "] = ");
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Type_14));
    }
    ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(Info_7, Initializer_12, Var_28);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_init_method_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_scalar_init_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_init_method_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalars_12,
  MR_Integer ChunkNum_13,
  MR_Integer * HeadVar__6_6)
{
  {
    MR_Word Var_24;
    MR_Integer Var_26;
    MR_String Var_39;
    MR_Box conv0_STATE_VARIABLE_IO_25_25;

    *HeadVar__6_6 = (ChunkNum_13 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_scalars_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ChunkNum_13, &Var_39);
    mercury__io__write_string_3_p_0(Var_39);
    mercury__io__write_string_3_p_0((MR_String) "() {\n");
    Var_26 = (Indent_10 + (MR_Integer) 1);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[7]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_scalar_init_method_for_java_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_9));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (Map_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_24, Scalars_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25_25);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_defns_for_java_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__6_6;
    MR_Word conv1_HeadVar__8_8;
    MR_Word conv0_HeadVar__10_10;

    ml_backend__mlds_to_target_util__add_scalar_inits_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_HeadVar__6_6, ((MR_Word) wrapper_arg_4), &conv1_HeadVar__8_8, ((MR_Word) wrapper_arg_6), &conv0_HeadVar__10_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
    *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__8_8));
    *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__10_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_defns_for_java_10_p_0(
  MR_Word Info_11,
  MR_Integer Indent_12,
  MR_Word TypeNum_13,
  MR_Word CellGroup_14,
  MR_Word STATE_VARIABLE_Graph_0_28,
  MR_Word * STATE_VARIABLE_Graph_29,
  MR_Word STATE_VARIABLE_Map_0_30,
  MR_Word * STATE_VARIABLE_Map_31)
{
  {
    MR_Word TypeCtorInfo_61_61;
    MR_Integer TypeRawNum_18 = (MR_Integer) TypeNum_13;
    MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 0)));
    MR_Word RowInitsCord_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 4)));
    MR_Word ArrayType_24;
    MR_Word RowInits_25;
    MR_Word MLDS_ModuleName_26;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_48;
    MR_String Var_75;
    MR_Word _InitArraySize_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 1)));
    MR_Word _Counter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 2)));
    MR_Word _Members_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 3)));
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_String Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Integer Var_27;
    MR_Box conv5_Var_27;
    MR_Box conv4_STATE_VARIABLE_Graph_29;
    MR_Box conv3_STATE_VARIABLE_Map_31;

    {
      ArrayType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ArrayType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ArrayType_24, 1) = ((MR_Box) (Type_19));
    }
    TypeCtorInfo_61_61 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    RowInits_25 = mercury__cord__list_1_f_0(TypeCtorInfo_61_61, RowInitsCord_23);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_12);
    mercury__io__write_string_3_p_0((MR_String) "private static final ");
    ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_11, Type_19);
    mercury__io__write_string_3_p_0((MR_String) "[] MR_scalar_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], TypeRawNum_18, &Var_75);
    mercury__io__write_string_3_p_0(Var_75);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (RowInits_25));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ArrayType_24));
    }
    ml_backend__mlds_to_java__output_initializer_alloc_only_for_java_5_p_0(Info_11, Var_43, Var_44);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
    Var_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MLDS_ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
    Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
    Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_scalar_defns_for_java_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (MLDS_ModuleName_26));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Type_19));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (TypeNum_13));
    }
    mercury__list__foldl3_8_p_0(TypeCtorInfo_61_61, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[4], (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[3], Var_48, RowInits_25, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_27, ((MR_Box) (STATE_VARIABLE_Graph_0_28)), &conv4_STATE_VARIABLE_Graph_29, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv3_STATE_VARIABLE_Map_31);
    Var_27 = ((MR_Integer) conv5_Var_27);
    *STATE_VARIABLE_Graph_29 = ((MR_Word) conv4_STATE_VARIABLE_Graph_29);
    *STATE_VARIABLE_Map_31 = ((MR_Word) conv3_STATE_VARIABLE_Map_31);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_call_init_global_var_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer I_6)
{
  {
    MR_String Var_19;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "MR_init_data_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], I_6, &Var_19);
    mercury__io__write_string_3_p_0(Var_19);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_init_global_var_method_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Defns_10,
  MR_Integer Chunk_11,
  MR_Integer * HeadVar__5_5)
{
  {
    MR_Integer Var_22;
    MR_String Var_31;

    *HeadVar__5_5 = (Chunk_11 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_data_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], Chunk_11, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "() {\n");
    Var_22 = (Indent_9 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_init_global_var_statements_for_java_5_p_0(Info_8, Var_22, Defns_10);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_init_global_var_statements_for_java_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word GlobalVarDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word GlobalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word GlobalVarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 0)));
      MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 3)));
      MR_Word Initializer_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 4)));
      MR_Word _Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 1)));
      MR_Word _Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 2)));
      MR_Word _GCStmt_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 5)));
      MR_Word next_value_of_HeadVar__3_3;

      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_2);
      ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(GlobalVarName_16);
      switch (MR_tag((MR_Word) Initializer_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_Word Var_54;

            mercury__io__write_string_3_p_0((MR_String) " = ");
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Type_19));
            }
            ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(Info_1, Initializer_20, Var_54);
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = GlobalVarDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_constant_for_java_7_p_0(
  MR_Word _Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12)
{
  ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_7_p_0(Indent_9, ClassName_10, ClassArity_11, FieldVarDefn_12);
}

static void MR_CALL 
ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_7_p_0(
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word FieldVarDefn_12)
{
  {
    MR_bool succeeded;
    MR_Word FieldVarName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 0)));
    MR_Word Initializer_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 4)));
    MR_Word _Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 1)));
    MR_Word _Flags_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 2)));
    MR_Word _Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 3)));
    MR_Word _GCStmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_12, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) Initializer_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_enum_constant_for_java\'/7", (MR_String) "not mlconst_enum");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Initializer_18, (MR_Integer) 0)));
          MR_Integer N_21;
          MR_Word Var_30;
          MR_Word Var_22;

          succeeded = ((((MR_tag((MR_Word) Rval_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_20, (MR_Integer) 1)));
            succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (succeeded)
            {
              N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 1)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 2)));
            }
          }
          if (succeeded)
          {
            MR_String Var_56;
            MR_Word Var_62;
            MR_String Var_67;
            MR_String String_86;
            MR_String MangledName_91;
            MR_String UppercaseMangledName_92;
            MR_String Var_93;
            MR_String Var_95;

            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "public static final ");
            MangledName_91 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_10);
            UppercaseMangledName_92 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_91);
            Var_95 = mercury__string__from_int_1_f_0(ClassArity_11);
            Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_95);
            String_86 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_92, Var_93);
            mercury__io__write_string_3_p_0(String_86);
            mercury__io__write_string_3_p_0((MR_String) " K");
            Var_62 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_62, N_21, &Var_56);
            mercury__io__write_string_3_p_0(Var_56);
            mercury__io__write_string_3_p_0((MR_String) " = new ");
            ml_backend__mlds_to_java__output_class_name_arity_for_java_4_p_0(ClassName_10, ClassArity_11);
            mercury__io__write_string_3_p_0((MR_String) "(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_62, N_21, &Var_67);
            mercury__io__write_string_3_p_0(Var_67);
            mercury__io__write_string_3_p_0((MR_String) "); ");
            mercury__io__write_string_3_p_0((MR_String) " /* ");
            ml_backend__mlds_to_java__output_field_var_name_for_java_3_p_0(FieldVarName_14);
            mercury__io__write_string_3_p_0((MR_String) " */");
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_enum_constant_for_java\'/7", (MR_String) "not mlconst_enum");
              return;
            }
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_enum_constant_for_java\'/7", (MR_String) "not mlconst_enum");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_class_name_arity_for_java_4_p_0(
  MR_String ClassName_5,
  MR_Integer ClassArity_6)
{
  {
    MR_String String_16;
    MR_String MangledName_21;
    MR_String UppercaseMangledName_22;
    MR_String Var_23;
    MR_String Var_25;

    MangledName_21 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_5);
    UppercaseMangledName_22 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_21);
    Var_25 = mercury__string__from_int_1_f_0(ClassArity_6);
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_25);
    String_16 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_22, Var_23);
    mercury__io__write_string_3_p_0(String_16);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_interface_3_p_0(
  MR_Word Interface_4)
{
  {
    MR_bool succeeded;
    MR_Word QualClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Interface_4, (MR_Integer) 0)));
    MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Interface_4, (MR_Integer) 1)));
    MR_Word ModuleQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualClassName_6, (MR_Integer) 0)));
    MR_Word QualKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualClassName_6, (MR_Integer) 1)));
    MR_String ClassName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), QualClassName_6, (MR_Integer) 2)));
    MR_Word SymName_12;
    MR_String ModuleNameStr_13;
    MR_Word Var_16;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Interface_4, (MR_Integer) 2)));

    SymName_12 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleQualifier_9);
    Var_16 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_10);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_12, Var_16, (MR_String) ".", &ModuleNameStr_13);
    mercury__io__write_string_3_p_0(ModuleNameStr_13);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__io__write_string_3_p_0(ClassName_11);
    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      if (((((MR_nth_code_unit(ClassName_11, 0)) == (MR_Integer) 77)) && (((MR_nth_code_unit(ClassName_11, 1)) == (MR_Integer) 101))))
        switch (MR_nth_code_unit(ClassName_11, 2)) {
          case (MR_Integer) 114:
            if (MR_offset_streq(3, ClassName_11, (MR_String) "MercuryType"))
              case_num_0 = (MR_Integer) 0;
            break;
          case (MR_Integer) 116:
            if (((((((((((((MR_nth_code_unit(ClassName_11, 3)) == (MR_Integer) 104)) && (((MR_nth_code_unit(ClassName_11, 4)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(ClassName_11, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(ClassName_11, 6)) == (MR_Integer) 80)))) && (((MR_nth_code_unit(ClassName_11, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(ClassName_11, 8)) == (MR_Integer) 114))))
              switch (MR_nth_code_unit(ClassName_11, 9)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 49:
                  switch (MR_nth_code_unit(ClassName_11, 10)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 48:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr10"))
                        case_num_0 = (MR_Integer) 3;
                      break;
                    case (MR_Integer) 49:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr11"))
                        case_num_0 = (MR_Integer) 4;
                      break;
                    case (MR_Integer) 50:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr12"))
                        case_num_0 = (MR_Integer) 5;
                      break;
                    case (MR_Integer) 51:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr13"))
                        case_num_0 = (MR_Integer) 6;
                      break;
                    case (MR_Integer) 52:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr14"))
                        case_num_0 = (MR_Integer) 7;
                      break;
                    case (MR_Integer) 53:
                      if (MR_offset_streq(11, ClassName_11, (MR_String) "MethodPtr15"))
                        case_num_0 = (MR_Integer) 8;
                      break;
                  }
                  break;
                case (MR_Integer) 50:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr2"))
                    case_num_0 = (MR_Integer) 9;
                  break;
                case (MR_Integer) 51:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr3"))
                    case_num_0 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 52:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr4"))
                    case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 53:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr5"))
                    case_num_0 = (MR_Integer) 12;
                  break;
                case (MR_Integer) 54:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr6"))
                    case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 55:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr7"))
                    case_num_0 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 56:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr8"))
                    case_num_0 = (MR_Integer) 15;
                  break;
                case (MR_Integer) 57:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtr9"))
                    case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 78:
                  if (MR_offset_streq(10, ClassName_11, (MR_String) "MethodPtrN"))
                    case_num_0 = (MR_Integer) 17;
                  break;
              }
            break;
        }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        succeeded = MR_TRUE;
      }
    }
    if (!(succeeded))
    {
      MR_String Var_33;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], Arity_7, &Var_33);
      mercury__io__write_string_3_p_0(Var_33);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_function_defn_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_function_defn_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_field_var_defn_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0(
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Integer Indent_7,
  MR_Word ClassDefn_8)
{
  {
    MR_bool succeeded;
    MR_String ClassName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 0)));
    MR_Integer ClassArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 1)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 2)));
    MR_Word Flags_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 3)));
    MR_Word Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 4)));
    MR_Word Inherits_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 6)));
    MR_Word Implements_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 7)));
    MR_Word TypeParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 8)));
    MR_Word MemberFields_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 9)));
    MR_Word MemberClasses_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 10)));
    MR_Word MemberMethods_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 11)));
    MR_Word Ctors_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 12)));
    MR_Word OutputGenerics_23;
    MR_Word Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Integer Var_40;
    MR_Integer Var_43;
    MR_Word Var_74;
    MR_Integer Var_76;
    MR_Word Var_78;
    MR_Word _Imports_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 5)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
    MR_Word Var_83 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
    MR_String Var_86 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
    MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
    MR_Word Var_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_String Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_33;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_String Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Box conv3_STATE_VARIABLE_IO_75_75;

    ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_28, (MR_Integer) 2, Context_12, Indent_7);
    ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(Flags_13);
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
    Var_92 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
    Var_96 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
    Var_98 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
    {
      STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) ((Var_92 | ((((Var_93 << (MR_Integer) 1)) | ((Var_94 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 5) = ((MR_Box) ((Var_98 | ((Var_99 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, 6) = ((MR_Box) (TypeParams_18));
    }
    Var_33 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
    succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0, ((MR_Box) (Var_33)), Implements_17);
    if (succeeded)
    {
      MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 0)));
      MR_Word Var_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word Var_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 2)));
      MR_String Var_106 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 3)));
      MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 4)));
      MR_Word Var_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 6)));
      MR_Word Var_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_32_32, (MR_Integer) 5)))) & (MR_Integer) 1);

      {
        STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 1) = ((MR_Box) ((Var_102 | ((((Var_103 << (MR_Integer) 1)) | ((Var_104 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 3) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 5) = ((MR_Box) (((MR_Integer) 0 | ((Var_109 << (MR_Integer) 1)))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (Var_110));
      }
    }
    else
      STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_32_32;
    ml_backend__mlds_to_java__output_class_kind_for_java_3_p_0(Kind_14);
    ml_backend__mlds_to_java__output_unqual_class_name_for_java_4_p_0(ClassName_10, ClassArity_11);
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 0)));
    Var_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 2)));
    Var_116 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 3)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 4)));
    OutputGenerics_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, (MR_Integer) 6)));
    switch (OutputGenerics_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(TypeParams_18);
        break;
    }
    mercury__io__nl_2_p_0();
    Var_40 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_inherits_list_5_p_0(STATE_VARIABLE_Info_34_34, Var_40, Inherits_16);
    Var_43 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_implements_list_4_p_0(Var_43, Implements_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    switch (Kind_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_125_125;
          MR_Word Var_59;
          MR_Integer Var_61 = (Indent_7 + (MR_Integer) 1);
          MR_Word Var_64;
          MR_Integer Var_66;
          MR_Word Var_68;
          MR_Integer Var_70;
          MR_Box conv0_STATE_VARIABLE_IO_60_60;
          MR_Box conv1_STATE_VARIABLE_IO_65_65;
          MR_Box conv2_STATE_VARIABLE_IO_69_69;

          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[6]));
            MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
            MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          TypeCtorInfo_125_125 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
          mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0, TypeCtorInfo_125_125, Var_59, MemberFields_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_60_60);
          Var_66 = (Indent_7 + (MR_Integer) 1);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[7]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
            MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Var_66));
          }
          mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0, TypeCtorInfo_125_125, Var_64, MemberClasses_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_65_65);
          Var_70 = (Indent_7 + (MR_Integer) 1);
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[2]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_3));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
            MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, TypeCtorInfo_125_125, Var_68, MemberMethods_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_69_69);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word EnumConstFields_24;
          MR_Integer Var_50;
          MR_Integer Var_54;

          mercury__list__filter_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[29], MemberFields_19, &EnumConstFields_24);
          Var_50 = (Indent_7 + (MR_Integer) 2);
          ml_backend__mlds_to_java__output_enum_constants_for_java_7_p_0(STATE_VARIABLE_Info_34_34, Var_50, ClassName_10, ClassArity_11, EnumConstFields_24);
          mercury__io__nl_2_p_0();
          Var_54 = (Indent_7 + (MR_Integer) 2);
          ml_backend__mlds_to_java__output_enum_ctor_for_java_5_p_0(Var_54, ClassName_10, ClassArity_11);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_class_defn_for_java\'/5", (MR_String) "structs not supported in Java");
            return;
          }
        }
        break;
    }
    mercury__io__nl_2_p_0();
    Var_76 = (Indent_7 + (MR_Integer) 1);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ClassName_10));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (ClassArity_11));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[2]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (STATE_VARIABLE_Info_34_34));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), Var_74, 5) = ((MR_Box) (Var_78));
    }
    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_74, Ctors_22, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_75_75);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6)
{
  {
    MR_bool succeeded;
    MR_Word Access_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Overrability_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Constness_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    switch (Access_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "private ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "public ");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "static ");
    succeeded = (Overrability_9 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (Constness_10 == (MR_Integer) 1);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "final ");
    }
    else
    {
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_constants_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_enum_constant_for_java_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_constants_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_String ClassName_10,
  MR_Integer ClassArity_11,
  MR_Word EnumConsts_12)
{
  {
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_enum_constants_for_java_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_9));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ClassName_10));
      MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (ClassArity_11));
    }
    mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0, EnumConsts_12, (MR_String) "\n", Var_17);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_enum_ctor_for_java_5_p_0(
  MR_Integer Indent_6,
  MR_String ClassName_7,
  MR_Integer ClassArity_8)
{
  {
    MR_Integer Var_18;
    MR_String String_37;
    MR_String MangledName_42;
    MR_String UppercaseMangledName_43;
    MR_String Var_44;
    MR_String Var_46;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_6);
    mercury__io__write_string_3_p_0((MR_String) "private ");
    MangledName_42 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_7);
    UppercaseMangledName_43 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_42);
    Var_46 = mercury__string__from_int_1_f_0(ClassArity_8);
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_46);
    String_37 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_43, Var_44);
    mercury__io__write_string_3_p_0(String_37);
    mercury__io__write_string_3_p_0((MR_String) "(int val) {\n");
    Var_18 = (Indent_6 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_18);
    mercury__io__write_string_3_p_0((MR_String) "super(val);\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_6);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_implements_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_interface_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_implements_list_4_p_0(
  MR_Integer Indent_5,
  MR_Word InterfaceList_6)
{
  if (!((InterfaceList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "implements ");
    mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0, InterfaceList_6, (MR_String) ",", (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[28]);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_inherits_list_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Inherits_8)
{
  switch (MR_tag((MR_Word) Inherits_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inherits_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String String_56;
            MR_Word ArrayDims_57;
            MR_Word Var_59;

            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
            mercury__io__write_string_3_p_0((MR_String) "extends ");
            ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), &String_56, &ArrayDims_57);
            mercury__io__write_string_3_p_0(String_56);
            Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_59);
            mercury__io__nl_2_p_0();
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BaseClassId_10 = (MR_Word) MR_body(((MR_Word) Inherits_8), (MR_Integer) 1);
        MR_Word BaseType_11 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) BaseClassId_10);
        MR_String String_37;
        MR_Word ArrayDims_38;
        MR_Word Var_40;

        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
        mercury__io__write_string_3_p_0((MR_String) "extends ");
        ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, BaseType_11, &String_37, &ArrayDims_38);
        mercury__io__write_string_3_p_0(String_37);
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_40);
        mercury__io__nl_2_p_0();
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_class_kind_for_java_3_p_0(
  MR_Word Kind_4)
{
  switch (Kind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "class ");
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "interface ");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_function_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FunctionDefn_10)
{
  {
    MR_Word Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 0)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 1)));
    MR_Word Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 2)));
    MR_Word MaybePredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 3)));
    MR_Word Params_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 4)));
    MR_Word MaybeBody_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 5)));
    MR_Word Var_73;
    MR_Word _EnvVarNames_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 6)));
    MR_Word _MaybeRequireTailrecInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 7)));
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_String Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_75;

    mercury__io__nl_2_p_0();
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    Var_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    Var_70 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    Var_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    if ((MaybeBody_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_73, (MR_Integer) 2, Context_13);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      mercury__io__write_string_3_p_0((MR_String) "// external: ");
      ml_backend__mlds_to_java__output_function_name_for_java_3_p_0(Name_12);
      mercury__io__nl_2_p_0();
    }
    else
    {
      ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_73, (MR_Integer) 2, Context_13);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_102_117_110_99_116_105_111_110_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(Flags_14);
      if (!((MaybePredProcId_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word PredProcid_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredProcId_15, (MR_Integer) 0)));
        MR_Word Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
        MR_Word Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
        MR_String Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
        MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
        MR_Word Var_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));

        ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_4_p_0(Var_29, PredProcid_21);
      }
      ml_backend__mlds_to_java__output_func_for_java_9_p_0(Info_7, Indent_8, Name_12, OutputAux_9, Context_13, Params_16, MaybeBody_17);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_102_117_110_99_116_105_111_110_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6)
{
  {
    MR_Word Access_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0)));
    MR_Word PerInstance_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 1)));

    switch (Access_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "private ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "public ");
        }
        break;
    }
    switch (PerInstance_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_func_for_java_9_p_0(
  MR_Word Info_10,
  MR_Integer Indent_11,
  MR_Word FuncName_12,
  MR_Word OutputAux_13,
  MR_Word Context_14,
  MR_Word Signature_15,
  MR_Word MaybeBody_16)
{
  {
    ml_backend__mlds_to_java__output_func_decl_for_java_7_p_0(Info_10, Indent_11, FuncName_12, OutputAux_13, Signature_15);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    if (!((MaybeBody_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Body_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeBody_16, (MR_Integer) 0)));
      MR_Word FuncInfo_19;
      MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Integer Var_31;
      MR_Word Var_34;
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 0)));
      MR_Word Var_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 2)));
      MR_String Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 3)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 4)));
      MR_Word Var_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 6)));
      MR_Word _ExitMethods_20;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_String Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;

      ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_26, (MR_Integer) 2, Context_14);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_11);
      mercury__io__write_string_3_p_0((MR_String) "{\n");
      FuncInfo_19 = (MR_Word) Signature_15;
      Var_31 = (Indent_11 + (MR_Integer) 1);
      ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_10, Var_31, FuncInfo_19, Body_18, &_ExitMethods_20);
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 0)));
      Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 2)));
      Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 3)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 4)));
      Var_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 5)))) & (MR_Integer) 1);
      Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 6)));
      ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_34, (MR_Integer) 2, Context_14);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_11);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_switch_cases_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_case_cond_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_switch_cases_for_java_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word FuncInfo_3,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__mlds_to_java__output_switch_default_for_java_8_p_0(Info_1, Indent_2, FuncInfo_3, Context_4, Default_6, ExitMethods_7);
    else
    {
      MR_Word Case_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word CaseExitMethods0_29;
      MR_Word CasesExitMethods_30;
      MR_Word CaseExitMethods_31;
      MR_Word FirstCond_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 0)));
      MR_Word LaterConds_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 1)));
      MR_Word Stmt_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 2)));
      MR_Word StmtExitMethods_55;
      MR_Word Var_57;
      MR_Integer Var_59;
      MR_Box conv0_STATE_VARIABLE_IO_24_58;

      ml_backend__mlds_to_java__output_case_cond_for_java_6_p_0(Info_1, Indent_2, Context_4, FirstCond_52);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[5]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_switch_cases_for_java_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_1));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Indent_2));
        MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (Context_4));
      }
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_57, LaterConds_53, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_58);
      Var_59 = (Indent_2 + (MR_Integer) 1);
      ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_1, Var_59, FuncInfo_3, Stmt_54, &StmtExitMethods_55);
      succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_55);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_54_88;
        MR_Word Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer Var_65 = (Indent_2 + (MR_Integer) 1);
        MR_Word Var_70;
        MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0)));
        MR_Word Var_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 2)));
        MR_String Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 3)));
        MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 4)));
        MR_Word Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 6)));

        ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_63, (MR_Integer) 2, Context_4, Var_65);
        mercury__io__write_string_3_p_0((MR_String) "break;\n");
        TypeCtorInfo_54_88 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
        Var_70 = mercury__set__insert_2_f_0(TypeCtorInfo_54_88, StmtExitMethods_55, ((MR_Box) ((MR_Integer) 0)));
        CaseExitMethods0_29 = mercury__set__delete_2_f_0(TypeCtorInfo_54_88, Var_70, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        CaseExitMethods0_29 = StmtExitMethods_55;
      ml_backend__mlds_to_java__output_switch_cases_for_java_9_p_0(Info_1, Indent_2, FuncInfo_3, Context_4, Cases_25, Default_6, &CasesExitMethods_30);
      succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 0)), CaseExitMethods0_29);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_41_41 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
        MR_Word Var_37;

        Var_37 = mercury__set__delete_2_f_0(TypeCtorInfo_41_41, CaseExitMethods0_29, ((MR_Box) ((MR_Integer) 0)));
        CaseExitMethods_31 = mercury__set__insert_2_f_0(TypeCtorInfo_41_41, Var_37, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        CaseExitMethods_31 = CaseExitMethods0_29;
      *ExitMethods_7 = mercury__set__union_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, CaseExitMethods_31, CasesExitMethods_30);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_switch_default_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word FuncInfo_11,
  MR_Word Context_12,
  MR_Word Default_13,
  MR_Word * ExitMethods_14)
{
  switch (MR_tag((MR_Word) Default_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_24;
            MR_Integer Var_26;
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
            MR_Word Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));
            MR_String Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3)));
            MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4)));
            MR_Word Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) & (MR_Integer) 1);
            MR_Word Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
            MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6)));
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_String Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;

            ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_19, (MR_Integer) 2, Context_12);
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
            mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/\n");
            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
            Var_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
            Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));
            Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4)));
            Var_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) & (MR_Integer) 1);
            Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
            Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6)));
            Var_26 = (Indent_10 + (MR_Integer) 1);
            ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_24, (MR_Integer) 2, Context_12, Var_26);
            mercury__io__write_string_3_p_0((MR_String) "throw new jmercury.runtime.UnreachableDefault();\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 1:
          {
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_13, (MR_Integer) 0)));
        MR_Word Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer Var_37;
        MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
        MR_Word Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));
        MR_String Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3)));
        MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4)));
        MR_Word Var_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6)));

        ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_32, (MR_Integer) 2, Context_12);
        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
        mercury__io__write_string_3_p_0((MR_String) "default:\n");
        Var_37 = (Indent_10 + (MR_Integer) 1);
        ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_9, Var_37, FuncInfo_11, Stmt_16, ExitMethods_14);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt_return_for_java__3414__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_function_defn_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_local_var_defn_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_statement_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncInfo_10,
  MR_Word Stmt_11,
  MR_Word * ExitMethods_12)
{
  {
    MR_bool succeeded;
    MR_Word Context_14;
    MR_Word Var_60;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_String Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;

    Context_14 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt_11);
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    Var_97 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    Var_100 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
    Var_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
    ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_60, (MR_Integer) 2, Context_14);
    switch (MR_tag((MR_Word) Stmt_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 0)));
          MR_Word FuncDefns_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 1)));
          MR_Word SubStmts_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 2)));
          MR_Word Context_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 3)));
          MR_Integer BlockIndent_140 = (Indent_9 + (MR_Integer) 1);
          MR_Word Var_160;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_String Var_169;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_172;
          MR_Word Var_173;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          if (!((LocalVarDefns_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Word Var_149;
            MR_Box conv0_STATE_VARIABLE_IO_31_150;

            {
              Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[4]));
              MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_statement_for_java_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_149, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_149, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_149, 4) = ((MR_Box) (BlockIndent_140));
              MR_hl_field(MR_mktag(0), Var_149, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            }
            mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_149, LocalVarDefns_135, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_150);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          if (!((FuncDefns_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Word Var_154;
            MR_Box conv1_STATE_VARIABLE_IO_36_155;

            {
              Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[2]));
              MR_hl_field(MR_mktag(0), Var_154, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_statement_for_java_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_154, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_154, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_154, 4) = ((MR_Box) (BlockIndent_140));
              MR_hl_field(MR_mktag(0), Var_154, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            }
            mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_154, FuncDefns_136, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36_155);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          ml_backend__mlds_to_java__output_statements_for_java_7_p_0(Info_8, BlockIndent_140, FuncInfo_10, SubStmts_137, ExitMethods_12);
          Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_166 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_169 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
          Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
          Var_171 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
          ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_160, (MR_Integer) 2, Context_138, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_571 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 0)));
          MR_Word Cond_572 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 1)));
          MR_Word BodyStmt_573 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 2)));
          MR_Word Context_574 = ((MR_Word) (MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 3)));
          MR_Integer ScopeIndent_575;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_573, Indent_9, &ScopeIndent_575);
          switch (Kind_571) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_583;
                MR_Word BodyInfo_612;
                MR_Word StmtExitMethods_613;
                MR_Word Var_624;
                MR_Word Var_625;
                MR_Word Var_626;
                MR_Word Var_627;
                MR_Word Var_628;
                MR_String Var_629;
                MR_Word Var_630;
                MR_Word Var_631;
                MR_Word Var_633;
                MR_Word Var_632;
                MR_Word Var_634;
                MR_Word Var_635;
                MR_Word Var_636;
                MR_Word Var_637;
                MR_String Var_638;
                MR_Word Var_639;
                MR_Word Var_640;
                MR_Word Var_641;
                MR_Word Var_642;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "do\n");
                Var_624 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
                Var_625 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                Var_626 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_627 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                Var_628 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
                Var_629 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
                Var_630 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
                Var_631 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
                Var_632 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                Var_633 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
                {
                  BodyInfo_612 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyInfo_612, 0) = ((MR_Box) (Var_624));
                  MR_hl_field(MR_mktag(0), BodyInfo_612, 1) = ((MR_Box) ((Var_625 | ((((Var_626 << (MR_Integer) 1)) | ((Var_627 << (MR_Integer) 2)))))));
                  MR_hl_field(MR_mktag(0), BodyInfo_612, 2) = ((MR_Box) (Var_628));
                  MR_hl_field(MR_mktag(0), BodyInfo_612, 3) = ((MR_Box) (Var_629));
                  MR_hl_field(MR_mktag(0), BodyInfo_612, 4) = ((MR_Box) (Var_630));
                  MR_hl_field(MR_mktag(0), BodyInfo_612, 5) = ((MR_Box) ((Var_631 | (((MR_Integer) 2 << (MR_Integer) 1)))));
                  MR_hl_field(MR_mktag(0), BodyInfo_612, 6) = ((MR_Box) (Var_633));
                }
                ml_backend__mlds_to_java__output_statement_for_java_7_p_0(BodyInfo_612, ScopeIndent_575, FuncInfo_10, BodyStmt_573, &StmtExitMethods_613);
                Var_634 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
                Var_635 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                Var_583 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_636 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                Var_637 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
                Var_638 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
                Var_639 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
                Var_640 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
                Var_641 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                Var_642 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
                ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_583, (MR_Integer) 2, Context_574, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Cond_572);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
                *ExitMethods_12 = ml_backend__mlds_to_java__while_exit_methods_for_java_2_f_0(Cond_572, StmtExitMethods_613);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_597;

                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Cond_572);
                mercury__io__write_string_3_p_0((MR_String) ")\n");
                succeeded = ((((MR_tag((MR_Word) Cond_572)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cond_572, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_597 = ((MR_Word) (MR_hl_field(MR_mktag(3), Cond_572, (MR_Integer) 1)));
                  succeeded = (Var_597 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (succeeded)
                {
                  MR_Integer Var_601;

                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                  Var_601 = (Indent_9 + (MR_Integer) 1);
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_601);
                  mercury__io__write_string_3_p_0((MR_String) "/* Unreachable code */\n");
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "}\n");
                  *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
                }
                else
                {
                  MR_Word BodyInfo_576;
                  MR_Word StmtExitMethods_577;
                  MR_Word Var_614 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
                  MR_Word Var_615 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word Var_616 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word Var_617 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word Var_618 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
                  MR_String Var_619 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
                  MR_Word Var_620 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
                  MR_Word Var_621 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
                  MR_Word Var_623 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
                  MR_Word Var_622 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);

                  {
                    BodyInfo_576 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), BodyInfo_576, 0) = ((MR_Box) (Var_614));
                    MR_hl_field(MR_mktag(0), BodyInfo_576, 1) = ((MR_Box) ((Var_615 | ((((Var_616 << (MR_Integer) 1)) | ((Var_617 << (MR_Integer) 2)))))));
                    MR_hl_field(MR_mktag(0), BodyInfo_576, 2) = ((MR_Box) (Var_618));
                    MR_hl_field(MR_mktag(0), BodyInfo_576, 3) = ((MR_Box) (Var_619));
                    MR_hl_field(MR_mktag(0), BodyInfo_576, 4) = ((MR_Box) (Var_620));
                    MR_hl_field(MR_mktag(0), BodyInfo_576, 5) = ((MR_Box) ((Var_621 | (((MR_Integer) 2 << (MR_Integer) 1)))));
                    MR_hl_field(MR_mktag(0), BodyInfo_576, 6) = ((MR_Box) (Var_623));
                  }
                  ml_backend__mlds_to_java__output_statement_for_java_7_p_0(BodyInfo_576, ScopeIndent_575, FuncInfo_10, BodyStmt_573, &StmtExitMethods_577);
                  *ExitMethods_12 = ml_backend__mlds_to_java__while_exit_methods_for_java_2_f_0(Cond_572, StmtExitMethods_577);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_348 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 0)));
          MR_Word Then0_349 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 1)));
          MR_Word MaybeElse_350 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 2)));
          MR_Word Context_351 = ((MR_Word) (MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 3)));
          MR_Word Then_356;
          MR_Integer ThenScopeIndent_357;
          MR_Word ThenExitMethods_358;
          MR_Word ThenContext_355;
          MR_Word Var_362;
          MR_Word Var_352;
          MR_Word Var_353;
          MR_Word Var_354;

          succeeded = ((MR_tag((MR_Word) MaybeElse_350)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElse_350, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Then0_349)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              Var_353 = ((MR_Word) (MR_hl_field(MR_mktag(2), Then0_349, (MR_Integer) 0)));
              Var_354 = ((MR_Word) (MR_hl_field(MR_mktag(2), Then0_349, (MR_Integer) 1)));
              Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(2), Then0_349, (MR_Integer) 2)));
              ThenContext_355 = ((MR_Word) (MR_hl_field(MR_mktag(2), Then0_349, (MR_Integer) 3)));
              succeeded = (Var_362 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word Var_365;

            {
              Var_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_365, 0) = ((MR_Box) (Then0_349));
              MR_hl_field(MR_mktag(1), Var_365, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Then_356 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_356, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Then_356, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Then_356, 2) = ((MR_Box) (Var_365));
              MR_hl_field(MR_mktag(0), Then_356, 3) = ((MR_Box) (ThenContext_355));
            }
          }
          else
            Then_356 = Then0_349;
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "if (");
          ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Cond_348);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_356, Indent_9, &ThenScopeIndent_357);
          ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_8, ThenScopeIndent_357, FuncInfo_10, Then_356, &ThenExitMethods_358);
          if ((MaybeElse_350 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ExitMethods_12 = mercury__set__insert_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ThenExitMethods_358, ((MR_Box) ((MR_Integer) 4)));
          }
          else
          {
            MR_Word Else_359 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeElse_350, (MR_Integer) 0)));
            MR_Integer ElseScopeIndent_360;
            MR_Word ElseExitMethods_361;
            MR_Word Var_375 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
            MR_Word Var_382 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word Var_383 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
            MR_String Var_385 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
            MR_Word Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
            MR_Word Var_387 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
            MR_Word Var_388 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
            MR_Word Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));

            ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_375, (MR_Integer) 2, Context_351, Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "else\n");
            ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_359, Indent_9, &ElseScopeIndent_360);
            ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_8, ElseScopeIndent_360, FuncInfo_10, Else_359, &ElseExitMethods_361);
            *ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ThenExitMethods_358, ElseExitMethods_361);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_468 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2)));
              MR_Word Cases_470 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4)));
              MR_Word Default_471 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 5)));
              MR_Word Context_472 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6)));
              MR_Word CaseInfo_473;
              MR_Word Var_474 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Integer Var_483;
              MR_Word Var_486;
              MR_Word _Type_467 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1)));
              MR_Word _Range_469 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3)));
              MR_Word Var_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
              MR_Word Var_492 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word Var_493 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
              MR_String Var_495 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
              MR_Word Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
              MR_Word Var_497 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
              MR_Word Var_498 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              MR_Word Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
              MR_Word Var_500;
              MR_Word Var_501;
              MR_Word Var_502;
              MR_Word Var_503;
              MR_Word Var_504;
              MR_String Var_505;
              MR_Word Var_506;
              MR_Word Var_507;
              MR_Word Var_509;
              MR_Word Var_508;
              MR_Word Var_510;
              MR_Word Var_511;
              MR_Word Var_512;
              MR_Word Var_513;
              MR_String Var_514;
              MR_Word Var_515;
              MR_Word Var_516;
              MR_Word Var_517;
              MR_Word Var_518;

              ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_474, (MR_Integer) 2, Context_472, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_java__output_rval_maybe_with_enum_for_java_4_p_0(Info_8, Val_468);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
              Var_501 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              Var_502 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_503 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
              Var_505 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
              Var_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
              Var_507 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
              Var_508 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              Var_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
              {
                CaseInfo_473 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseInfo_473, 0) = ((MR_Box) (Var_500));
                MR_hl_field(MR_mktag(0), CaseInfo_473, 1) = ((MR_Box) ((Var_501 | ((((Var_502 << (MR_Integer) 1)) | ((Var_503 << (MR_Integer) 2)))))));
                MR_hl_field(MR_mktag(0), CaseInfo_473, 2) = ((MR_Box) (Var_504));
                MR_hl_field(MR_mktag(0), CaseInfo_473, 3) = ((MR_Box) (Var_505));
                MR_hl_field(MR_mktag(0), CaseInfo_473, 4) = ((MR_Box) (Var_506));
                MR_hl_field(MR_mktag(0), CaseInfo_473, 5) = ((MR_Box) ((Var_507 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                MR_hl_field(MR_mktag(0), CaseInfo_473, 6) = ((MR_Box) (Var_509));
              }
              Var_483 = (Indent_9 + (MR_Integer) 1);
              ml_backend__mlds_to_java__output_switch_cases_for_java_9_p_0(CaseInfo_473, Var_483, FuncInfo_10, Context_472, Cases_470, Default_471, ExitMethods_12);
              Var_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
              Var_511 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              Var_486 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_512 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
              Var_514 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
              Var_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
              Var_516 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
              Var_517 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              Var_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
              ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_486, (MR_Integer) 2, Context_472, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_statement_for_java\'/7", (MR_String) "labels not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1)));
              MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) Target_35)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_35)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                        MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
                        MR_Word Var_106 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                        MR_Word Var_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word Var_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
                        MR_String Var_110 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
                        MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
                        MR_Word Var_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
                        MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));

                        switch (BreakContext_38) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_statement_for_java\'/7", (MR_String) "goto_break_switch not in switch");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                        MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
                        MR_Word Var_115 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                        MR_Word Var_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word Var_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
                        MR_String Var_119 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
                        MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
                        MR_Word Var_121 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
                        MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));

                        switch (BreakContext_95) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_statement_for_java\'/7", (MR_String) "goto_break_loop not in loop");
                                return;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                        mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                        *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 1)));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_statement_for_java\'/7", (MR_String) "gotos not supported in Java.");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_statement_for_java\'/7", (MR_String) "computed gotos not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Signature_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1)));
              MR_Word FuncRval_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2)));
              MR_Word CallArgs_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3)));
              MR_Word Results_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4)));
              MR_Word Context_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6)));
              MR_Word ArgTypes_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), Signature_192, (MR_Integer) 0)));
              MR_Word RetTypes_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), Signature_192, (MR_Integer) 1)));
              MR_Word Var_224;
              MR_Integer Var_226;
              MR_Word _IsTailCall_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 5)));
              MR_Word Var_293;
              MR_Word Var_294;
              MR_Word Var_295;
              MR_Word Var_296;
              MR_String Var_297;
              MR_Word Var_298;
              MR_Word Var_299;
              MR_Word Var_300;
              MR_Word Var_301;
              MR_Word Var_236;
              MR_Word Var_204;
              MR_Word Var_284;
              MR_Word Var_218;
              MR_Word Var_219;
              MR_Word Var_220;

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
              Var_294 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              Var_224 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_295 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
              Var_297 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
              Var_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
              Var_299 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) & (MR_Integer) 1);
              Var_300 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6)));
              Var_226 = (Indent_9 + (MR_Integer) 1);
              ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_224, (MR_Integer) 2, Context_197, Var_226);
              if (!((Results_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
              {
                MR_Word Var_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), Results_195, (MR_Integer) 1)));
                MR_Word Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), Results_195, (MR_Integer) 0)));

                if ((Var_308 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ml_backend__mlds_to_java__output_lval_for_java_4_p_0(Info_8, Var_309);
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "java.lang.Object [] result = ");
                }
              }
              succeeded = ((((MR_tag((MR_Word) FuncRval_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FuncRval_193, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), FuncRval_193, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_236)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  Var_204 = (MR_Word) MR_body(((MR_Word) Var_236), (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_Word Var_241;

                ml_backend__mlds_to_java__output_call_rval_for_java_4_p_0(Info_8, FuncRval_193);
                mercury__io__write_string_3_p_0((MR_String) "(");
                {
                  Var_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_241, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[5]));
                  MR_hl_field(MR_mktag(0), Var_241, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_statement_for_java_7_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_241, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_241, 3) = ((MR_Box) (Info_8));
                }
                mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, CallArgs_194, (MR_String) ", ", Var_241);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_Integer Arity_210;

                if (!((RetTypes_199 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
                {
                  MR_Word Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), RetTypes_199, (MR_Integer) 1)));
                  MR_Word Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(1), RetTypes_199, (MR_Integer) 0)));

                  if ((Var_310 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_String RetTypeString_206;

                    ml_backend__mlds_to_java__boxed_type_to_string_for_java_3_p_0(Info_8, Var_311, &RetTypeString_206);
                    mercury__io__write_string_3_p_0((MR_String) "((");
                    mercury__io__write_string_3_p_0(RetTypeString_206);
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                  }
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
                  }
                }
                mercury__list__length_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, CallArgs_194, &Arity_210);
                succeeded = ml_backend__mlds_to_java__is_specialised_method_ptr_arity_1_p_0(Arity_210);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "((jmercury.runtime.MethodPtr");
                  mercury__io__write_int_3_p_0(Arity_210);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(Info_8, FuncRval_193);
                  mercury__io__write_string_3_p_0((MR_String) ").call___0_0(");
                  ml_backend__mlds_to_java__output_boxed_args_5_p_0(Info_8, CallArgs_194, ArgTypes_198);
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((jmercury.runtime.MethodPtrN) ");
                  ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(Info_8, FuncRval_193);
                  mercury__io__write_string_3_p_0((MR_String) ").call___0_0(");
                  ml_backend__mlds_to_java__output_args_as_array_5_p_0(Info_8, CallArgs_194, ArgTypes_198);
                }
                mercury__io__write_string_3_p_0((MR_String) ")");
                if (!((RetTypes_199 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
                {
                  MR_Word Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), RetTypes_199, (MR_Integer) 1)));
                  MR_Word Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(1), RetTypes_199, (MR_Integer) 0)));

                  if ((Var_312 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_String UnboxMethod_214;
                    MR_String Var_212;
                    MR_String Var_213;

                    succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Var_313, &Var_212, &Var_213, &UnboxMethod_214);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) ").");
                      mercury__io__write_string_3_p_0(UnboxMethod_214);
                      mercury__io__write_string_3_p_0((MR_String) "()");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
              }
              mercury__io__write_string_3_p_0((MR_String) ";\n");
              succeeded = ((MR_tag((MR_Word) Results_195)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), Results_195, (MR_Integer) 0)));
                Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), Results_195, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_284)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_284, (MR_Integer) 0)));
                  Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_284, (MR_Integer) 1)));
                }
              }
              if (succeeded)
              {
                MR_Integer Var_286 = (Indent_9 + (MR_Integer) 1);

                ml_backend__mlds_to_java__output_assign_results_8_p_0(Info_8, Results_195, RetTypes_199, (MR_Integer) 0, Var_286, Context_197);
              }
              else
              {
              }
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1)));
              MR_Word _Context_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2)));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              if ((Results_400 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__io__write_string_3_p_0((MR_String) "return;\n");
              }
              else
              {
                MR_Word Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(1), Results_400, (MR_Integer) 1)));
                MR_Word Var_458 = ((MR_Word) (MR_hl_field(MR_mktag(1), Results_400, (MR_Integer) 0)));

                if ((Var_457 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "return ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Var_458);
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
                else
                {
                  MR_Word Params_406 = (MR_Word) FuncInfo_10;
                  MR_Word ReturnTypes_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_406, (MR_Integer) 1)));
                  MR_Word TypesAndResults_409;
                  MR_String Separator_410;
                  MR_Integer Var_417;
                  MR_String Var_421;
                  MR_Integer Var_423;
                  MR_Integer Var_424;
                  MR_Word Var_427;
                  MR_Word _Args_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_406, (MR_Integer) 0)));

                  TypesAndResults_409 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ReturnTypes_408, Results_400);
                  mercury__io__write_string_3_p_0((MR_String) "return new java.lang.Object[] {\n");
                  Var_417 = (Indent_9 + (MR_Integer) 1);
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_417);
                  Var_424 = (Indent_9 + (MR_Integer) 1);
                  Var_423 = (Var_424 * (MR_Integer) 2);
                  Var_421 = mercury__string__duplicate_char_2_f_0((MR_Char) 32, Var_423);
                  Separator_410 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", Var_421);
                  {
                    Var_427 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_427, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[6]));
                    MR_hl_field(MR_mktag(0), Var_427, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_statement_for_java_7_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_427, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_427, 3) = ((MR_Box) (Info_8));
                  }
                  mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_2[4], TypesAndResults_409, Separator_410, Var_427);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "};\n");
                }
              }
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeCtorInfo_51_562;
              MR_Word BodyStmt_528 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2)));
              MR_Word HandlerStmt_529 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3)));
              MR_Word TryExitMethods0_531;
              MR_Word CatchExitMethods_532;
              MR_Integer Var_539;
              MR_Integer Var_551;
              MR_Integer Var_554;
              MR_Word Var_560;
              MR_Word _Ref_527 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1)));
              MR_Word _Context_530 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4)));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "try\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_539 = (Indent_9 + (MR_Integer) 1);
              ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_8, Var_539, FuncInfo_10, BodyStmt_528, &TryExitMethods0_531);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "catch (jmercury.runtime.Commit commit_variable)\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_551 = (Indent_9 + (MR_Integer) 1);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_551);
              Var_554 = (Indent_9 + (MR_Integer) 1);
              ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_8, Var_554, FuncInfo_10, HandlerStmt_529, &CatchExitMethods_532);
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              TypeCtorInfo_51_562 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
              Var_560 = mercury__set__delete_2_f_0(TypeCtorInfo_51_562, TryExitMethods0_531, ((MR_Box) ((MR_Integer) 3)));
              *ExitMethods_12 = mercury__set__union_2_f_0(TypeCtorInfo_51_562, Var_560, CatchExitMethods_532);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_326 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1)));
              MR_Word _Context_327 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2)));

              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Ref_326);
              mercury__io__write_string_3_p_0((MR_String) " = new jmercury.runtime.Commit();\n");
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "throw ");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_8, Ref_326);
              mercury__io__write_string_3_p_0((MR_String) ";\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1)));
              MR_Word _Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2)));

              ml_backend__mlds_to_java__output_atomic_stmt_for_java_6_p_0(Info_8, Indent_9, AtomicStmt_56, Context_14);
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_statements_for_java_7_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word FuncInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * ExitMethods_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ExitMethods_5 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
    }
    else
    {
      MR_Word Stmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Stmts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word StmtExitMethods_23;

      ml_backend__mlds_to_java__output_statement_for_java_7_p_0(Info_1, Indent_2, FuncInfo_3, Stmt_19, &StmtExitMethods_23);
      succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_23);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_35_35;
        MR_Word StmtsExitMethods_24;
        MR_Word ExitMethods0_25;

        ml_backend__mlds_to_java__output_statements_for_java_7_p_0(Info_1, Indent_2, FuncInfo_3, Stmts_20, &StmtsExitMethods_24);
        TypeCtorInfo_35_35 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
        ExitMethods0_25 = mercury__set__union_2_f_0(TypeCtorInfo_35_35, StmtExitMethods_23, StmtsExitMethods_24);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_35_35, ((MR_Box) ((MR_Integer) 4)), StmtsExitMethods_24);
        if (succeeded)
          *ExitMethods_5 = ExitMethods0_25;
        else
        {
          *ExitMethods_5 = mercury__set__delete_2_f_0(TypeCtorInfo_35_35, ExitMethods0_25, ((MR_Box) ((MR_Integer) 4)));
        }
      }
      else
        *ExitMethods_5 = StmtExitMethods_23;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_call_rval_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word CodeAddr_9;
    MR_Word Const_8;

    if (succeeded)
    {
      Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Const_8)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        CodeAddr_9 = (MR_Word) MR_body(((MR_Word) Const_8), (MR_Integer) 1);
    }
    if (succeeded)
    {
      ml_backend__mlds_to_java__mlds_output_code_addr_for_java_5_p_0(Info_5, CodeAddr_9, (MR_Integer) 1);
    }
    else
    {
      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));

        if (((((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
        MR_Word Var_24;

        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_24 = (MR_Word) MR_body(((MR_Word) Var_25), (MR_Integer) 1);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_6);
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_atomic_stmt_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_target_code_component_for_java_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_atomic_stmt_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word AtomicStmt_9,
  MR_Word Context_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) AtomicStmt_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "gc_check not implemented.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(1), AtomicStmt_9, (MR_Integer) 0)));

          succeeded = (strcmp(Comment_12, (MR_String) "") == 0);
          if (succeeded)
            mercury__io__nl_2_p_0();
          else
          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
            mercury__io__write_string_3_p_0((MR_String) "/* ");
            mercury__io__write_string_3_p_0(Comment_12);
            mercury__io__write_string_3_p_0((MR_String) " */\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_9, (MR_Integer) 0)));
          MR_Word Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), AtomicStmt_9, (MR_Integer) 1)));

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
          ml_backend__mlds_to_java__output_lval_for_java_4_p_0(Info_7, Lval_13);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Rval_14);
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "assign_if_in_heap");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "delete_object not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1)));
              MR_Word ExplicitSecTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 3)));
              MR_Word Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 4)));
              MR_Word MaybeCtorName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 6)));
              MR_Word Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 7)));
              MR_Word ArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 8)));
              MR_Word IsArray_39;
              MR_Word Var_70;
              MR_Integer Var_72;
              MR_Word _MaybeTag_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 2)));
              MR_Word _MaybeSize_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 5)));
              MR_Word _MayUseAtomic_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 9)));
              MR_Word _AllocId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 10)));
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_String Var_120;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word QualifiedCtorId_28;
              MR_Word MerType_29;
              MR_Word CtorCat_30;
              MR_Word Var_31;
              MR_String Var_32;
              MR_Word Var_33;

              switch (ExplicitSecTag_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "explicit secondary tag");
                      return;
                    }
                  }
                  break;
              }
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
              Var_117 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              Var_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
              Var_120 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
              Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
              Var_122 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
              Var_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
              Var_72 = (Indent_8 + (MR_Integer) 1);
              ml_backend__mlds_to_java__indent_line_after_context_6_p_0(Var_70, (MR_Integer) 2, Context_10, Var_72);
              ml_backend__mlds_to_java__output_lval_for_java_4_p_0(Info_7, Target_18);
              mercury__io__write_string_3_p_0((MR_String) " = new ");
              succeeded = ((MR_tag((MR_Word) MaybeCtorName_23)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                QualifiedCtorId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCtorName_23, (MR_Integer) 0)));
                succeeded = ((((MR_tag((MR_Word) Type_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  MerType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 1)));
                  CtorCat_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 2)));
                  Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 3)));
                  succeeded = ml_backend__mlds_to_java__hand_defined_type_for_java_4_p_0(MerType_29, CtorCat_30, &Var_32, &Var_33);
                }
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word CtorDefn_36;
                MR_String CtorName_37;
                MR_Integer CtorArity_38;
                MR_Word _ModuleName_34;
                MR_Word _QualKind_35;

                ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_7, Type_21);
                mercury__io__write_char_3_p_0((MR_Char) 46);
                _ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedCtorId_28, (MR_Integer) 0)));
                _QualKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedCtorId_28, (MR_Integer) 1)));
                CtorDefn_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedCtorId_28, (MR_Integer) 2)));
                CtorName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), CtorDefn_36, (MR_Integer) 0)));
                CtorArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorDefn_36, (MR_Integer) 1)));
                ml_backend__mlds_to_java__output_unqual_class_name_for_java_4_p_0(CtorName_37, CtorArity_38);
              }
              else
                ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_7, Type_21);
              IsArray_39 = ml_backend__mlds_to_java__type_is_array_for_java_1_f_0(Type_21);
              switch (IsArray_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) " {");
                    ml_backend__mlds_to_java__output_init_args_for_java_5_p_0(Info_7, Args_24, ArgTypes_25);
                    mercury__io__write_string_3_p_0((MR_String) "};\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    ml_backend__mlds_to_java__output_init_args_for_java_5_p_0(Info_7, Args_24, ArgTypes_25);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
              }
              ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "mark_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "restore_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "trail_ops not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TargetLang_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1)));
              MR_Word Components_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 2)));

              switch (TargetLang_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "inline_target_code only works for lang_java");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_55;
                    MR_Box conv0_STATE_VARIABLE_IO_49;

                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
                    {
                      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[4]));
                      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_atomic_stmt_for_java_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_7));
                    }
                    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_55, Components_43, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_49);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_atomic_stmt_for_java\'/6", (MR_String) "foreign language interfacing not implemented");
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
ml_backend__mlds_to_java__output_init_args_for_java_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_init_args_for_java\'/5", (MR_String) "length mismatch.");
          return;
        }
      }
    }
    else
    {
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_init_args_for_java\'/5", (MR_String) "length mismatch.");
          return;
        }
      }
      else
      {
        MR_Word ArgTypes_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word _ArgType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_1, Var_39);
        if (!((Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Var_38;
        next_value_of_HeadVar__3_3 = ArgTypes_28;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__hand_defined_type_for_java_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
    {
      MR_Word CtorCatSystem_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 1)));

      *SubstituteName_7 = ((&ml_backend__mlds_to_java_vector_common_9[12 + CtorCatSystem_9]))->ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_0;
      *ArrayDims_8 = ((&ml_backend__mlds_to_java_vector_common_9[12 + CtorCatSystem_9]))->ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_1;
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word CtorCatUser_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 1)));
      MR_Word Var_17;

      succeeded = (CtorCatUser_10 == (MR_Integer) 2);
      if (succeeded)
      {
        Var_17 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_17);
        if (succeeded)
        {
          *SubstituteName_7 = (MR_String) "jmercury.runtime.TypeInfo_Struct";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_18;

          Var_18 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_18);
          if (succeeded)
          {
            *SubstituteName_7 = (MR_String) "jmercury.runtime.PseudoTypeInfo";
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_19;

            Var_19 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_19);
            if (succeeded)
            {
              *SubstituteName_7 = (MR_String) "jmercury.runtime.TypeCtorInfo_Struct";
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_unqual_class_name_for_java_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6)
{
  {
    MR_String String_8;
    MR_String MangledName_15;
    MR_String UppercaseMangledName_16;
    MR_String Var_17;
    MR_String Var_19;

    MangledName_15 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_5);
    UppercaseMangledName_16 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_15);
    Var_19 = mercury__string__from_int_1_f_0(Arity_6);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_19);
    String_8 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_16, Var_17);
    mercury__io__write_string_3_p_0(String_8);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__indent_line_after_context_6_p_0(
  MR_Word OutputLineNumbers_7,
  MR_Word Marker_8,
  MR_Word Context_9,
  MR_Integer N_10)
{
  {
    ml_backend__mlds_to_java__output_context_for_java_5_p_0(OutputLineNumbers_7, Marker_8, Context_9);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(N_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_case_cond_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Match_10)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_case_cond_for_java\'/6", (MR_String) "cannot match ranges in Java cases");
        return;
      }
    }
    else
    {
      MR_Word Val_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_10, (MR_Integer) 0)));
      MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
      MR_Word Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
      MR_String Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
      MR_Word Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
      MR_Integer N_13;
      MR_Word Var_26;
      MR_Word Var_14;

      ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_21, (MR_Integer) 2, Context_9);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      mercury__io__write_string_3_p_0((MR_String) "case ");
      succeeded = ((((MR_tag((MR_Word) Val_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Val_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Val_12, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (succeeded)
        {
          N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1)));
          Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 2)));
        }
      }
      if (succeeded)
        mercury__io__write_int_3_p_0(N_13);
      else
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Val_12);
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_assign_results_8_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer ResultIndex_4,
  MR_Integer Indent_5,
  MR_Word Context_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_assign_results\'/8", (MR_String) "list length mismatch");
          return;
        }
      }
    }
    else
    {
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_assign_results\'/8", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer Var_36;
        MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0)));
        MR_Word Var_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 2)));
        MR_String Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 3)));
        MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 4)));
        MR_Word Var_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
        MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 6)));
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Integer next_value_of_ResultIndex_4;

        ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_27, (MR_Integer) 2, Context_6);
        ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
        ml_backend__mlds_to_java__output_lval_for_java_4_p_0(Info_1, Var_69);
        mercury__io__write_string_3_p_0((MR_String) " = ");
        ml_backend__mlds_to_java__output_unboxed_result_5_p_0(Info_1, Type_19, ResultIndex_4);
        mercury__io__write_string_3_p_0((MR_String) ";\n");
        Var_36 = (ResultIndex_4 + (MR_Integer) 1);
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Var_68;
        next_value_of_HeadVar__3_3 = Types_20;
        next_value_of_ResultIndex_4 = Var_36;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        ResultIndex_4 = next_value_of_ResultIndex_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_unboxed_result_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Integer ResultIndex_8)
{
  {
    MR_bool succeeded;
    MR_String JavaBoxedName_11;
    MR_String UnboxMethod_12;
    MR_String Var_10;

    succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_7, &Var_10, &JavaBoxedName_11, &UnboxMethod_12);
    if (succeeded)
    {
      MR_String Var_40;

      mercury__io__write_string_3_p_0((MR_String) "((");
      mercury__io__write_string_3_p_0(JavaBoxedName_11);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      mercury__io__write_string_3_p_0((MR_String) "result[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ResultIndex_8, &Var_40);
      mercury__io__write_string_3_p_0(Var_40);
      mercury__io__write_string_3_p_0((MR_String) "]).");
      mercury__io__write_string_3_p_0(UnboxMethod_12);
      mercury__io__write_string_3_p_0((MR_String) "()");
    }
    else
    {
      MR_String Var_54;
      MR_String String_75;
      MR_Word ArrayDims_76;
      MR_Word Var_78;

      mercury__io__write_string_3_p_0((MR_String) "(");
      ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_7, &String_75, &ArrayDims_76);
      mercury__io__write_string_3_p_0(String_75);
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_78);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      mercury__io__write_string_3_p_0((MR_String) "result[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ResultIndex_8, &Var_54);
      mercury__io__write_string_3_p_0(Var_54);
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_args_as_array_5_p_0(
  MR_Word Info_6,
  MR_Word CallArgs_7,
  MR_Word CallArgTypes_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "new java.lang.Object[] { ");
    ml_backend__mlds_to_java__output_boxed_args_5_p_0(Info_6, CallArgs_7, CallArgTypes_8);
    mercury__io__write_string_3_p_0((MR_String) "} ");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_boxed_args_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_boxed_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    }
    else
    {
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_boxed_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word CallArgType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word CallArgTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_String JavaBoxedName_49;
        MR_String _JavaName_48;
        MR_String Var_50;

        succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(CallArgType_29, &_JavaName_48, &JavaBoxedName_49, &Var_50);
        if (succeeded)
        {
          mercury__io__write_string_3_p_0(JavaBoxedName_49);
          mercury__io__write_string_3_p_0((MR_String) ".valueOf(");
          ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_1, Var_41);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object) (");
          ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_1, Var_41);
          mercury__io__write_string_3_p_0((MR_String) "))");
        }
        if (!((Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__io__write_string_3_p_0((MR_String) ", ");
          // direct tailcall eliminated
          next_value_of_HeadVar__2_2 = Var_40;
          next_value_of_HeadVar__3_3 = CallArgTypes_30;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java__while_exit_methods_for_java_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ExitMethods_6;
    MR_Word ExitMethods0_7;
    MR_Word Var_8;
    MR_Word TypeCtorInfo_17_17;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 1)));
      succeeded = (Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_9 = (MR_Integer) 0;
        TypeCtorInfo_17_17 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_17_17, ((MR_Box) (Var_9)), BlockExitMethods_5);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      ExitMethods0_7 = mercury__set__delete_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    }
    else
    {
      ExitMethods0_7 = mercury__set__insert_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    }
    ExitMethods_6 = mercury__set__delete_list_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ExitMethods0_7, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[20]));
    return ExitMethods_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__boxed_type_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__boxed_type_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;
    MR_String JavaBoxedName_8;
    MR_String Var_7;
    MR_String Var_9;

    succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_5, &Var_7, &JavaBoxedName_8, &Var_9);
    if (succeeded)
      *String_6 = JavaBoxedName_8;
    else
    {
      MR_Word TypeCtorInfo_19_19;
      MR_String String0_10;
      MR_Word ArrayDims_11;
      MR_Word RevBrackets_12;
      MR_Word Brackets_13;
      MR_Word Var_15;

      ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_4, Type_5, &String0_10, &ArrayDims_11);
      TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_19_19, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[27], ArrayDims_11, &RevBrackets_12);
      mercury__list__reverse_2_p_0(TypeCtorInfo_19_19, RevBrackets_12, &Brackets_13);
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (String0_10));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Brackets_13));
      }
      mercury__string__append_list_2_p_0(Var_15, String_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_func_decl_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncName_10,
  MR_Word OutputAux_11,
  MR_Word Signature_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) OutputAux_11)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Parameters_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Signature_12, (MR_Integer) 0)));
    MR_Word RetTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Signature_12, (MR_Integer) 1)));
    MR_String ClassName_16;
    MR_Integer ClassArity_17;
    MR_String Var_20;

    if (succeeded)
    {
      ClassName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), OutputAux_11, (MR_Integer) 0)));
      ClassArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), OutputAux_11, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) FuncName_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_20 = ((MR_String) (MR_hl_field(MR_mktag(1), FuncName_10, (MR_Integer) 0)));
        succeeded = (strcmp(Var_20, (MR_String) "<constructor>") == 0);
      }
    }
    if (succeeded)
    {
      MR_String String_38;
      MR_String MangledName_43;
      MR_String UppercaseMangledName_44;
      MR_String Var_45;
      MR_String Var_47;

      MangledName_43 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_16);
      UppercaseMangledName_44 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_43);
      Var_47 = mercury__string__from_int_1_f_0(ClassArity_17);
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_47);
      String_38 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_44, Var_45);
      mercury__io__write_string_3_p_0(String_38);
    }
    else
    {
      if ((RetTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "void");
      }
      else
      {
        MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), RetTypes_15, (MR_Integer) 1)));
        MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), RetTypes_15, (MR_Integer) 0)));

        if ((Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_String String_79;
          MR_Word ArrayDims_80;
          MR_Word Var_82;

          ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_8, Var_65, &String_79, &ArrayDims_80);
          mercury__io__write_string_3_p_0(String_79);
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_82);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "java.lang.Object []");
        }
      }
      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
      ml_backend__mlds_to_java__output_function_name_for_java_3_p_0(FuncName_10);
    }
    ml_backend__mlds_to_java__output_params_for_java_5_p_0(Info_8, Indent_9, Parameters_14);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_function_name_for_java_3_p_0(
  MR_Word FunctionName_4)
{
  if (((MR_tag((MR_Word) FunctionName_4)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String Name_14 = ((MR_String) (MR_hl_field(MR_mktag(1), FunctionName_4, (MR_Integer) 0)));

    mercury__io__write_string_3_p_0(Name_14);
  }
  else
  {
    MR_Word PlainFuncName_6 = (MR_Word) MR_body(((MR_Word) FunctionName_4), (MR_Integer) 0);
    MR_Word FuncLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_6, (MR_Integer) 0)));
    MR_Word ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_7, (MR_Integer) 0)));
    MR_Word MaybeAux_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_7, (MR_Integer) 1)));
    MR_Word PredLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 0)));
    MR_Integer ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 1)));
    MR_Integer ModeNum_13;
    MR_String Var_24;
    MR_String Var_28;
    MR_Word _PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_6, (MR_Integer) 1)));

    ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(PredLabel_11);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_12, &ModeNum_13);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ModeNum_13, &Var_28);
    mercury__io__write_string_3_p_0(Var_28);
    Var_24 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_10);
    mercury__io__write_string_3_p_0(Var_24);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_params_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_param_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_params_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Parameters_8)
{
  {
    mercury__io__write_char_3_p_0((MR_Char) 40);
    if (!((Parameters_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_18;
      MR_Integer Var_20;

      mercury__io__nl_2_p_0();
      Var_20 = (Indent_7 + (MR_Integer) 1);
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[9]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_params_for_java_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Var_20));
      }
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, Parameters_8, (MR_String) ",\n", Var_18);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_field_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10)
{
  {
    MR_bool succeeded;
    MR_Word FieldVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 0)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 1)));
    MR_Word Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 2)));
    MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 3)));
    MR_Word Initializer_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 4)));
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_String Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));

    ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_20, (MR_Integer) 2, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "public ");
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 1)));
    switch (Var_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    succeeded = (Var_57 == (MR_Integer) 1);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "final ");
    }
    else
    {
    }
    ml_backend__mlds_to_java__output_field_var_decl_for_java_5_p_0(Info_7, FieldVarName_12, Type_15);
    ml_backend__mlds_to_java__output_initializer_for_java_6_p_0(Info_7, OutputAux_9, Type_15, Initializer_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_field_var_decl_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word FieldVarName_7,
  MR_Word Type_8)
{
  {
    MR_String String_29;
    MR_Word ArrayDims_30;
    MR_Word Var_32;
    MR_String NameStr_39;
    MR_String MangledName_45;
    MR_String JavaSafeName_46;

    ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_8, &String_29, &ArrayDims_30);
    mercury__io__write_string_3_p_0(String_29);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_32);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    NameStr_39 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_7);
    MangledName_45 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_39);
    JavaSafeName_46 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_45);
    mercury__io__write_string_3_p_0(JavaSafeName_46);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_local_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10)
{
  {
    MR_Word LocalVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 0)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 1)));
    MR_Word Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 2)));
    MR_Word Initializer_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 3)));
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_String String_67;
    MR_Word ArrayDims_68;
    MR_Word Var_70;
    MR_String NameStr_77;
    MR_String MangledName_83;
    MR_String JavaSafeName_84;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 4)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_String Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));

    ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_19, (MR_Integer) 2, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_7, Type_14, &String_67, &ArrayDims_68);
    mercury__io__write_string_3_p_0(String_67);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_70);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    NameStr_77 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_12);
    MangledName_83 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_77);
    JavaSafeName_84 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_83);
    mercury__io__write_string_3_p_0(JavaSafeName_84);
    ml_backend__mlds_to_java__output_initializer_for_java_6_p_0(Info_7, OutputAux_9, Type_14, Initializer_15);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word GlobalVarDefn_10)
{
  {
    MR_bool succeeded;
    MR_Word GlobalVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 0)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 1)));
    MR_Word Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 2)));
    MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 3)));
    MR_Word Initializer_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 4)));
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Access_50;
    MR_Word Constness_51;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_String Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));

    ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_20, (MR_Integer) 2, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    Access_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0)));
    Constness_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 1)));
    switch (Access_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "private ");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "public ");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "static ");
    succeeded = (Constness_51 == (MR_Integer) 1);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "final ");
    }
    else
    {
    }
    ml_backend__mlds_to_java__output_global_var_decl_for_java_5_p_0(Info_7, GlobalVarName_12, Type_15);
    ml_backend__mlds_to_java__output_initializer_for_java_6_p_0(Info_7, OutputAux_9, Type_15, Initializer_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word OutputAux_8,
  MR_Word Type_9,
  MR_Word Initializer_10)
{
  switch (MR_tag((MR_Word) Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) OutputAux_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OutputAux_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_24;

                mercury__io__write_string_3_p_0((MR_String) " = ");
                Var_24 = ml_backend__mlds_to_java__get_java_type_initializer_1_f_0(Type_9);
                mercury__io__write_string_3_p_0(Var_24);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) " = ");
        switch (MR_tag((MR_Word) OutputAux_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OutputAux_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word Var_30;

                  {
                    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Type_9));
                  }
                  ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(Info_7, Initializer_10, Var_30);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_28;

                  {
                    Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Type_9));
                  }
                  ml_backend__mlds_to_java__output_initializer_alloc_only_for_java_5_p_0(Info_7, Initializer_10, Var_28);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Type_9));
              }
              ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(Info_7, Initializer_10, Var_30);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_alloc_only_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_initializer_alloc_only_for_java\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_initializer_alloc_only_for_java\'/5", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0)));
          MR_Word FieldInits_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1)));
          MR_Word CtorCat_14;
          MR_Word Var_41;
          MR_Word _Type_13;
          MR_Word Var_15;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          succeeded = ((((MR_tag((MR_Word) StructType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            _Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 1)));
            CtorCat_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 2)));
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 3)));
            Var_41 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_14);
            succeeded = (Var_41 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Integer Size_16;
            MR_String Var_63;

            Size_16 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, FieldInits_12);
            mercury__io__write_string_3_p_0((MR_String) "java.lang.Object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], Size_16, &Var_63);
            mercury__io__write_string_3_p_0(Var_63);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_6, StructType_11);
            mercury__io__write_string_3_p_0((MR_String) "()");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0)));
          MR_Integer Size_54;

          Size_54 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ElementInits_17);
          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String Var_74;

            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ Object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], Size_54, &Var_74);
            mercury__io__write_string_3_p_0(Var_74);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            MR_Word Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0)));
            MR_String String_19;
            MR_Word ArrayDims_20;
            MR_Word Heads_21;
            MR_Integer Var_59;
            MR_Box conv0_Var_59;

            ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_18, &String_19, &ArrayDims_20);
            mercury__io__write_string_3_p_0(String_19);
            succeeded = mercury__list__split_last_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_20, &Heads_21, &conv0_Var_59);
            if (succeeded)
            {
              Var_59 = ((MR_Integer) conv0_Var_59);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = ((MR_Integer) 0 == Var_59);
            if (succeeded)
            {
              MR_Word Var_33;
              MR_Word Var_35;

              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Size_54));
                MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, Heads_21, Var_35);
              ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_33);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_initializer_alloc_only_for_java\'/5", (MR_String) "missing array dimension");
                return;
              }
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_decl_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word GlobalVarName_7,
  MR_Word Type_8)
{
  {
    MR_String String_29;
    MR_Word ArrayDims_30;
    MR_Word Var_32;

    ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_8, &String_29, &ArrayDims_30);
    mercury__io__write_string_3_p_0(String_29);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_32);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(GlobalVarName_7);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_env_var_definition_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_String EnvVarName_6)
{
  {
    MR_Integer Var_16;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "private static int mercury_envvar_");
    mercury__io__write_string_3_p_0(EnvVarName_6);
    mercury__io__write_string_3_p_0((MR_String) " =\n");
    Var_16 = (Indent_5 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_16);
    mercury__io__write_string_3_p_0((MR_String) "java.lang.System.getenv(\"");
    mercury__io__write_string_3_p_0(EnvVarName_6);
    mercury__io__write_string_3_p_0((MR_String) "\") == null \? 0 : 1;\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_final_pred_call_4_p_0(
  MR_Integer Indent_5,
  MR_String FinalPred_6)
{
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0(FinalPred_6);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_init_for_java_2_4_p_0(
  MR_Integer Indent_5,
  MR_String InitPred_6)
{
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0(InitPred_6);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static MR_Char MR_CALL 
ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_f_0(
  MR_Char Char_3)
{
  {
    MR_bool succeeded;
    MR_Char HeadVar__2_2;

    succeeded = mercury__char__is_alnum_or_underscore_1_p_0(Char_3);
    if (succeeded)
      HeadVar__2_2 = Char_3;
    else
      HeadVar__2_2 = (MR_Char) 95;
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Char conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_p_0(
  MR_Word STATE_VARIABLE_ClassDefn_0_24,
  MR_Word * STATE_VARIABLE_ClassDefn_25,
  MR_Word STATE_VARIABLE_Renaming_0_26,
  MR_Word * STATE_VARIABLE_Renaming_27)
{
  {
    MR_bool succeeded;
    MR_String ClassName0_7 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 0)));
    MR_Word Flags_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 3)));
    MR_Word Access_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Integer _ClassArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 1)));
    MR_Word _Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 2)));
    MR_Word _ClassKind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 4)));
    MR_Word _Imports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 5)));
    MR_Word _Inherits_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 6)));
    MR_Word _Implements_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 7)));
    MR_Word _TypeParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 8)));
    MR_Word _MemberFields0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 9)));
    MR_Word _MemberClasses0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 10)));
    MR_Word _MemberMethods0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 11)));
    MR_Word _Ctors0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 12)));
    MR_Word _Overridability_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word _Constness_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    switch (Access_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String ClassName_23;
          MR_String MangledClassName0_46;
          MR_Integer Var_53;

          MangledClassName0_46 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName0_7);
          Var_53 = mercury__string__length_1_f_0(MangledClassName0_46);
          succeeded = (Var_53 < (MR_Integer) 100);
          if (succeeded)
            ClassName_23 = ClassName0_7;
          else
          {
            MR_Word TypeCtorInfo_27_68;
            MR_String Left_47;
            MR_String Right_48;
            MR_Integer Hash_49;
            MR_String GenName_50;
            MR_Word GenList_51;
            MR_Word FilterList_52;
            MR_Integer Var_57;
            MR_String Var_72;
            MR_String Var_73;
            MR_String Var_82;
            MR_String Var_84;
            MR_String Var_85;

            Left_47 = mercury__string__left_2_f_0(ClassName0_7, (MR_Integer) 44);
            Right_48 = mercury__string__right_2_f_0(ClassName0_7, (MR_Integer) 44);
            Var_57 = mercury__string__hash_1_f_0(ClassName0_7);
            Hash_49 = (Var_57 & (MR_Integer) 4294967295);
            Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "_", Right_48);
            mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[7], (MR_Integer) 8, (MR_Integer) 2, Hash_49, &Var_73);
            Var_82 = mercury__string__f_43_43_2_f_0(Var_73, Var_72);
            Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_82);
            Var_85 = mercury__string__f_43_43_2_f_0(Left_47, Var_84);
            GenName_50 = mercury__string__f_43_43_2_f_0((MR_String) "s_", Var_85);
            GenList_51 = mercury__string__to_char_list_1_f_0(GenName_50);
            TypeCtorInfo_27_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
            FilterList_52 = mercury__list__map_2_f_0(TypeCtorInfo_27_68, TypeCtorInfo_27_68, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[26], GenList_51);
            ClassName_23 = mercury__string__from_char_list_1_f_0(FilterList_52);
          }
          succeeded = (strcmp(ClassName_23, ClassName0_7) == 0);
          if (succeeded)
          {
            *STATE_VARIABLE_Renaming_27 = STATE_VARIABLE_Renaming_0_26;
            *STATE_VARIABLE_ClassDefn_25 = STATE_VARIABLE_ClassDefn_0_24;
          }
          else
          {
            MR_Word TypeCtorInfo_43_43;
            MR_Integer Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 2)));
            MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 3)));
            MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 4)));
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 5)));
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 6)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 7)));
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 8)));
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 9)));
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 10)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 11)));
            MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 12)));
            MR_String Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClassDefn_0_24, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ClassDefn_25 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_23));
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
            }
            TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            mercury__map__det_insert_4_p_0(TypeCtorInfo_43_43, TypeCtorInfo_43_43, ((MR_Box) (ClassName0_7)), ((MR_Box) (ClassName_23)), STATE_VARIABLE_Renaming_0_26, STATE_VARIABLE_Renaming_27);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ClassDefn_25 = STATE_VARIABLE_ClassDefn_0_24;
          *STATE_VARIABLE_Renaming_27 = STATE_VARIABLE_Renaming_0_26;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_nth_arg_3_p_0(
  MR_Word Type_4,
  MR_Word MethodArgVariable_5,
  MR_Word * CallArg_6)
{
  {
    MR_Word Rval_7;
    MR_Word Var_8;
    MR_Word Var_10;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (MethodArgVariable_5));
      MR_hl_field(MR_mktag(3), Var_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
    }
    {
      Rval_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Rval_7, 0) = ((MR_Box) (Var_8));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Type_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *CallArg_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_7));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_statement_for_addr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_CallArg_6;

    ml_backend__mlds_to_java__generate_call_method_nth_arg_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_CallArg_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_CallArg_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_statement_for_addr_3_p_0(
  MR_Word InputArgs_4,
  MR_Word CodeAddr_5,
  MR_Word * Stmt_6)
{
  {
    MR_Word OrigFuncSignature_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_5, (MR_Integer) 1)));
    MR_Word OrigArgTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigFuncSignature_8, (MR_Integer) 0)));
    MR_Word OrigRetTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigFuncSignature_8, (MR_Integer) 1)));
    MR_Word CallArgs_12;
    MR_Word ReturnVarName_14;
    MR_Word ReturnVarType_15;
    MR_Word ReturnLval_20;
    MR_Word Context_21;
    MR_Word ReturnVarDefn_23;
    MR_Word CallRval_24;
    MR_Word CallRetLvals_25;
    MR_Word CallStmt_28;
    MR_Word ReturnRval_29;
    MR_Word ReturnStmt_30;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word _QualFuncLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_5, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) InputArgs_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArrayVarName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), InputArgs_4, (MR_Integer) 0)));

      ml_backend__mlds_to_java__generate_call_method_args_from_array_5_p_0(OrigArgTypes_9, ArrayVarName_13, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &CallArgs_12);
    }
    else
    {
      MR_Word ArgNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputArgs_4, (MR_Integer) 0)));

      mercury__list__map_corresponding_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[25], OrigArgTypes_9, ArgNames_11, &CallArgs_12);
    }
    ReturnVarName_14 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[36]);
    if ((OrigRetTypes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ReturnVarType_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
    {
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrigRetTypes_10, (MR_Integer) 1)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrigRetTypes_10, (MR_Integer) 0)));

      if ((Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ReturnVarType_15 = Var_59;
      else
      {
        ReturnVarType_15 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[27]);
      }
    }
    {
      ReturnLval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ReturnLval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ReturnLval_20, 1) = ((MR_Box) (ReturnVarName_14));
      MR_hl_field(MR_mktag(3), ReturnLval_20, 2) = ((MR_Box) (ReturnVarType_15));
    }
    Context_21 = mercury__term__context_init_0_f_0();
    {
      ReturnVarDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ReturnVarDefn_23, 0) = ((MR_Box) (ReturnVarName_14));
      MR_hl_field(MR_mktag(0), ReturnVarDefn_23, 1) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(0), ReturnVarDefn_23, 2) = ((MR_Box) (ReturnVarType_15));
      MR_hl_field(MR_mktag(0), ReturnVarDefn_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ReturnVarDefn_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) CodeAddr_5);
    {
      CallRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CallRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), CallRval_24, 1) = ((MR_Box) (Var_39));
    }
    if ((OrigRetTypes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      CallRetLvals_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        CallRetLvals_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CallRetLvals_25, 0) = ((MR_Box) (ReturnLval_20));
        MR_hl_field(MR_mktag(1), CallRetLvals_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    {
      CallStmt_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CallStmt_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CallStmt_28, 1) = ((MR_Box) (OrigFuncSignature_8));
      MR_hl_field(MR_mktag(3), CallStmt_28, 2) = ((MR_Box) (CallRval_24));
      MR_hl_field(MR_mktag(3), CallStmt_28, 3) = ((MR_Box) (CallArgs_12));
      MR_hl_field(MR_mktag(3), CallStmt_28, 4) = ((MR_Box) (CallRetLvals_25));
      MR_hl_field(MR_mktag(3), CallStmt_28, 5) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CallStmt_28, 6) = ((MR_Box) (Context_21));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (ReturnVarType_15));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (ReturnLval_20));
    }
    {
      ReturnRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ReturnRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ReturnRval_29, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(3), ReturnRval_29, 2) = ((MR_Box) (Var_43));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ReturnRval_29));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ReturnStmt_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ReturnStmt_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ReturnStmt_30, 1) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(3), ReturnStmt_30, 2) = ((MR_Box) (Context_21));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ReturnVarDefn_23));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ReturnStmt_30));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (CallStmt_28));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *Stmt_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_21));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_args_from_array_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArrayVar_2,
  MR_Integer Counter_3,
  MR_Word HeadVar__4_4,
  MR_Word * Args_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Args_5 = HeadVar__4_4;
    else
    {
      MR_Word Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArrayRval_15;
      MR_Word IndexRval_16;
      MR_Word Rval_18;
      MR_Word UnBoxedRval_19;
      MR_Word Args1_20;
      MR_Word Var_21;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Integer Var_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_Counter_3;
      MR_Word next_value_of_HeadVar__4_4;

      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (ArrayVar_2));
        MR_hl_field(MR_mktag(3), Var_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      }
      {
        ArrayRval_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ArrayRval_15, 0) = ((MR_Box) (Var_21));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Counter_3));
      }
      {
        IndexRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), IndexRval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), IndexRval_16, 1) = ((MR_Box) (Var_23));
      }
      {
        Rval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Rval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Rval_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[35])));
        MR_hl_field(MR_mktag(3), Rval_18, 2) = ((MR_Box) (ArrayRval_15));
        MR_hl_field(MR_mktag(3), Rval_18, 3) = ((MR_Box) (IndexRval_16));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Type_9));
      }
      {
        UnBoxedRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnBoxedRval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), UnBoxedRval_19, 1) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(3), UnBoxedRval_19, 2) = ((MR_Box) (Rval_18));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (UnBoxedRval_19));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Args1_20 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, HeadVar__4_4, Var_27);
      Var_29 = (Counter_3 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Types_10;
      next_value_of_Counter_3 = Var_29;
      next_value_of_HeadVar__4_4 = Args1_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Counter_3 = next_value_of_Counter_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__create_generic_arg_3_p_0(
  MR_Integer I_4,
  MR_Word * ArgName_5,
  MR_Word * Arg_6)
{
  {
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (I_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ArgName_5 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Arg_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*ArgName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_addr_wrapper_class_5_p_0(
  MR_Word MLDS_ModuleName_6,
  MR_Word HeadVar__2_2,
  MR_Word * ClassDefn_9,
  MR_Word STATE_VARIABLE_AddrOfMap_0_47,
  MR_Word * STATE_VARIABLE_AddrOfMap_48)
{
  {
    MR_bool succeeded;
    MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word CodeAddrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_String ClassName_11;
    MR_Word FieldVarDefns_13;
    MR_Word CtorDefns_14;
    MR_Word MethodDefn_36;
    MR_String InterfaceName_37;
    MR_Word InterfaceModuleName_38;
    MR_Word Interface_39;
    MR_Word InterfaceId_42;
    MR_Word ClassImplements_43;
    MR_Word ClassContext_45;
    MR_String Var_50;
    MR_Word Var_86;
    MR_Word Var_97;

    Var_50 = mercury__string__from_int_1_f_0(Arity_7);
    ClassName_11 = mercury__string__f_43_43_2_f_0((MR_String) "addrOf", Var_50);
    if ((CodeAddrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.generate_addr_wrapper_class\'/5", (MR_String) "no addresses");
        return;
      }
    }
    else
    {
      MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddrs_8, (MR_Integer) 1)));
      MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddrs_8, (MR_Integer) 0)));

      if ((Var_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        FieldVarDefns_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        CtorDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word Context_18;
        MR_Word FieldVarDefn_20;
        MR_Word QualClassName_21;
        MR_Word ClassType_22;
        MR_Word FieldName_23;
        MR_Word FieldId_24;
        MR_Word FieldLval_25;
        MR_Word CtorStmt_30;
        MR_Word EnvVarNames_34;
        MR_Word CtorDefn_35;
        MR_Word Var_54;
        MR_Word Var_60;
        MR_Word Var_66;
        MR_Word Var_73;
        MR_Word Var_78;

        Context_18 = mercury__term__context_init_0_f_0();
        Var_54 = ml_backend__ml_type_gen__ml_gen_const_member_data_decl_flags_0_f_0();
        {
          FieldVarDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldVarDefn_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[31])));
          MR_hl_field(MR_mktag(0), FieldVarDefn_20, 1) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), FieldVarDefn_20, 2) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), FieldVarDefn_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(0), FieldVarDefn_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), FieldVarDefn_20, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          FieldVarDefns_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FieldVarDefns_13, 0) = ((MR_Box) (FieldVarDefn_20));
          MR_hl_field(MR_mktag(1), FieldVarDefns_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          QualClassName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), QualClassName_21, 0) = ((MR_Box) (MLDS_ModuleName_6));
          MR_hl_field(MR_mktag(0), QualClassName_21, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), QualClassName_21, 2) = ((MR_Box) (ClassName_11));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (QualClassName_21));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 0));
        }
        ClassType_22 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_60);
        {
          FieldName_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldName_23, 0) = ((MR_Box) (MLDS_ModuleName_6));
          MR_hl_field(MR_mktag(0), FieldName_23, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), FieldName_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        }
        {
          FieldId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FieldId_24, 0) = ((MR_Box) (FieldName_23));
          MR_hl_field(MR_mktag(1), FieldId_24, 1) = ((MR_Box) (ClassType_22));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (ClassType_22));
        }
        {
          FieldLval_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldLval_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), FieldLval_25, 1) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), FieldLval_25, 2) = ((MR_Box) (FieldId_24));
          MR_hl_field(MR_mktag(0), FieldLval_25, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(0), FieldLval_25, 4) = ((MR_Box) (ClassType_22));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (FieldLval_25));
          MR_hl_field(MR_mktag(2), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__mlds_to_java_scalar_common_7[2])));
        }
        {
          CtorStmt_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CtorStmt_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), CtorStmt_30, 1) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(3), CtorStmt_30, 2) = ((MR_Box) (Context_18));
        }
        EnvVarNames_34 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (CtorStmt_30));
        }
        {
          CtorDefn_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CtorDefn_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_7[4])));
          MR_hl_field(MR_mktag(0), CtorDefn_35, 1) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), CtorDefn_35, 2) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_1[33]));
          MR_hl_field(MR_mktag(0), CtorDefn_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), CtorDefn_35, 4) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_1[34]));
          MR_hl_field(MR_mktag(0), CtorDefn_35, 5) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), CtorDefn_35, 6) = ((MR_Box) (EnvVarNames_34));
          MR_hl_field(MR_mktag(0), CtorDefn_35, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          CtorDefns_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CtorDefns_14, 0) = ((MR_Box) (CtorDefn_35));
          MR_hl_field(MR_mktag(1), CtorDefns_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    ml_backend__mlds_to_java__generate_call_method_3_p_0(Arity_7, CodeAddrs_8, &MethodDefn_36);
    succeeded = ml_backend__mlds_to_java__is_specialised_method_ptr_arity_1_p_0(Arity_7);
    if (succeeded)
    {
      MR_String Var_85;

      Var_85 = mercury__string__from_int_1_f_0(Arity_7);
      InterfaceName_37 = mercury__string__f_43_43_2_f_0((MR_String) "MethodPtr", Var_85);
    }
    else
      InterfaceName_37 = (MR_String) "MethodPtrN";
    Var_86 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    InterfaceModuleName_38 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_86);
    {
      Interface_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Interface_39, 0) = ((MR_Box) (InterfaceModuleName_38));
      MR_hl_field(MR_mktag(0), Interface_39, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Interface_39, 2) = ((MR_Box) (InterfaceName_37));
    }
    {
      InterfaceId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InterfaceId_42, 0) = ((MR_Box) (Interface_39));
      MR_hl_field(MR_mktag(0), InterfaceId_42, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), InterfaceId_42, 2) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ClassImplements_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClassImplements_43, 0) = ((MR_Box) (InterfaceId_42));
      MR_hl_field(MR_mktag(1), ClassImplements_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ClassContext_45 = mercury__term__context_init_0_f_0();
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (MethodDefn_36));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ClassDefn_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ClassContext_45));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ClassImplements_43));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (FieldVarDefns_13));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (CtorDefns_14));
    }
    ml_backend__mlds_to_java__add_to_address_map_4_p_0(ClassName_11, CodeAddrs_8, STATE_VARIABLE_AddrOfMap_0_47, STATE_VARIABLE_AddrOfMap_48);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__add_to_address_map_4_p_0(
  MR_String ClassName_5,
  MR_Word CodeAddrs_6,
  MR_Word STATE_VARIABLE_AddrOfMap_0_14,
  MR_Word * STATE_VARIABLE_AddrOfMap_15)
{
  {
    MR_String FlippedClassName_8;

    FlippedClassName_8 = parse_tree__java_names__flip_initial_case_1_f_0(ClassName_5);
    if ((CodeAddrs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.add_to_address_map\'/4", (MR_String) "no addresses");
        return;
      }
    }
    else
    {
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddrs_6, (MR_Integer) 1)));
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddrs_6, (MR_Integer) 0)));

      if ((Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Wrapper_10;

        {
          Wrapper_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Wrapper_10, 0) = ((MR_Box) (FlippedClassName_8));
          MR_hl_field(MR_mktag(0), Wrapper_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0, ((MR_Box) (Var_27)), ((MR_Box) (Wrapper_10)), STATE_VARIABLE_AddrOfMap_0_14, STATE_VARIABLE_AddrOfMap_15);
      }
      else
      {
        MR_Word Wrapper_38;
        MR_Word STATE_VARIABLE_AddrOfMap_20_42;

        {
          Wrapper_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Wrapper_38, 0) = ((MR_Box) (FlippedClassName_8));
          MR_hl_field(MR_mktag(0), Wrapper_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_7[3])));
        }
        mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0, ((MR_Box) (Var_27)), ((MR_Box) (Wrapper_38)), STATE_VARIABLE_AddrOfMap_0_14, &STATE_VARIABLE_AddrOfMap_20_42);
        ml_backend__mlds_to_java__add_to_address_map_2_5_p_0(FlippedClassName_8, Var_26, ((MR_Integer) 0 + (MR_Integer) 1), STATE_VARIABLE_AddrOfMap_20_42, STATE_VARIABLE_AddrOfMap_15);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__add_to_address_map_2_5_p_0(
  MR_String FlippedClassName_1,
  MR_Word HeadVar__2_2,
  MR_Integer I_3,
  MR_Word STATE_VARIABLE_AddrOfMap_0_4,
  MR_Word * STATE_VARIABLE_AddrOfMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_AddrOfMap_5 = STATE_VARIABLE_AddrOfMap_0_4;
    else
    {
      MR_Word CodeAddr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word CodeAddrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Wrapper_16;
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_AddrOfMap_20_20;
      MR_Integer Var_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_I_3;
      MR_Word next_value_of_STATE_VARIABLE_AddrOfMap_0_4;

      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (I_3));
      }
      {
        Wrapper_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Wrapper_16, 0) = ((MR_Box) (FlippedClassName_1));
        MR_hl_field(MR_mktag(0), Wrapper_16, 1) = ((MR_Box) (Var_19));
      }
      mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0, ((MR_Box) (CodeAddr_12)), ((MR_Box) (Wrapper_16)), STATE_VARIABLE_AddrOfMap_0_4, &STATE_VARIABLE_AddrOfMap_20_20);
      Var_21 = (I_3 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = CodeAddrs_13;
      next_value_of_I_3 = Var_21;
      next_value_of_STATE_VARIABLE_AddrOfMap_0_4 = STATE_VARIABLE_AddrOfMap_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      I_3 = next_value_of_I_3;
      STATE_VARIABLE_AddrOfMap_0_4 = next_value_of_STATE_VARIABLE_AddrOfMap_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__3_55;

    conv3_LambdaHeadVar__3_55 = ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__927__1_2_f_0(((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_55));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Stmt_6;

    ml_backend__mlds_to_java__generate_call_statement_for_addr_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_Stmt_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Stmt_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ArgName_5;
    MR_Word conv0_Arg_6;

    ml_backend__mlds_to_java__create_generic_arg_3_p_0(((MR_Integer) wrapper_arg_1), &conv1_ArgName_5, &conv0_Arg_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_ArgName_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_Arg_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generate_call_method_3_p_0(
  MR_Integer Arity_4,
  MR_Word CodeAddrs_5,
  MR_Word * MethodDefn_6)
{
  {
    MR_bool succeeded = (Arity_4 > (MR_Integer) 0);
    MR_Word TypeCtorInfo_88_88;
    MR_Word TypeCtorInfo_89_89;
    MR_Word MethodArgs_8;
    MR_Word InputArgs_9;
    MR_Word CodeAddrStmts_13;
    MR_Word Context_14;
    MR_Word Stmt_15;
    MR_Word PredId_29;
    MR_Integer ProcId_30;
    MR_Word ProcLabel_32;
    MR_Word FuncLabel_33;
    MR_Word PlainFuncName_34;
    MR_Word MethodName_35;
    MR_Word MethodFlags_38;
    MR_Word MethodParams_39;
    MR_Word MethodEnvVarNames_41;
    MR_Word Var_49;
    MR_Word Var_76;
    MR_Integer Var_97;

    if (succeeded)
    {
      Var_97 = (MR_Integer) 15;
      succeeded = (Arity_4 <= Var_97);
    }
    if (succeeded)
    {
      MR_Word ArgNames_7;
      MR_Word Var_43;

      Var_43 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, Arity_4);
      mercury__list__map2_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[20], Var_43, &ArgNames_7, &MethodArgs_8);
      {
        InputArgs_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InputArgs_9, 0) = ((MR_Box) (ArgNames_7));
      }
    }
    else
    {
      MethodArgs_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[28]);
      InputArgs_9 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_7[1]);
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[10]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ml_backend__mlds_to_java__generate_call_method_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (InputArgs_9));
    }
    TypeCtorInfo_88_88 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0;
    TypeCtorInfo_89_89 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    mercury__list__map_3_p_0(TypeCtorInfo_88_88, TypeCtorInfo_89_89, Var_49, CodeAddrs_5, &CodeAddrStmts_13);
    Context_14 = mercury__term__context_init_0_f_0();
    if ((CodeAddrStmts_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.generate_call_method\'/3", (MR_String) "no statements");
        return;
      }
    }
    else
    {
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddrStmts_13, (MR_Integer) 1)));
      MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddrStmts_13, (MR_Integer) 0)));

      if ((Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Stmt_15 = Var_94;
      else
      {
        MR_Integer MaxCase_19;
        MR_Word Cases_25;
        MR_Word SwitchRange_28;
        MR_Integer Var_51;
        MR_Word Var_59;

        Var_51 = mercury__list__length_1_f_0(TypeCtorInfo_88_88, CodeAddrs_5);
        MaxCase_19 = (Var_51 - (MR_Integer) 1);
        Var_59 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, MaxCase_19);
        Cases_25 = mercury__list__map_corresponding_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_89_89, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[22], Var_59, CodeAddrStmts_13);
        {
          SwitchRange_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SwitchRange_28, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), SwitchRange_28, 1) = ((MR_Box) (MaxCase_19));
        }
        {
          Stmt_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Stmt_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Stmt_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), Stmt_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__mlds_to_java_scalar_common_7[2])));
          MR_hl_field(MR_mktag(3), Stmt_15, 3) = ((MR_Box) (SwitchRange_28));
          MR_hl_field(MR_mktag(3), Stmt_15, 4) = ((MR_Box) (Cases_25));
          MR_hl_field(MR_mktag(3), Stmt_15, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), Stmt_15, 6) = ((MR_Box) (Context_14));
        }
      }
    }
    PredId_29 = hlds__hlds_pred__initial_pred_id_0_f_0();
    ProcId_30 = hlds__hlds_pred__initial_proc_id_0_f_0();
    {
      ProcLabel_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), ProcLabel_32, 1) = ((MR_Box) (ProcId_30));
    }
    {
      FuncLabel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncLabel_33, 0) = ((MR_Box) (ProcLabel_32));
      MR_hl_field(MR_mktag(0), FuncLabel_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      PlainFuncName_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PlainFuncName_34, 0) = ((MR_Box) (FuncLabel_33));
      MR_hl_field(MR_mktag(0), PlainFuncName_34, 1) = ((MR_Box) (PredId_29));
    }
    MethodName_35 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) PlainFuncName_34);
    MethodFlags_38 = ml_backend__ml_type_gen__ml_gen_member_decl_flags_0_f_0();
    {
      MethodParams_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MethodParams_39, 0) = ((MR_Box) (MethodArgs_8));
      MR_hl_field(MR_mktag(0), MethodParams_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[30])));
    }
    MethodEnvVarNames_41 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Stmt_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *MethodDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MethodName_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MethodFlags_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MethodParams_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MethodEnvVarNames_41));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__is_specialised_method_ptr_arity_1_p_0(
  MR_Integer Arity_2)
{
  {
    MR_bool succeeded = (Arity_2 > (MR_Integer) 0);
    MR_Integer Var_4;

    if (succeeded)
    {
      Var_4 = (MR_Integer) 15;
      succeeded = (Arity_2 <= Var_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enum_constant_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10)
{
  {
    MR_String Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 0)));
    MR_Word Initializer_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 1)));
    MR_String String_42;
    MR_Word ArrayDims_43;
    MR_Word Var_45;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "public static final ");
    ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_7, MLDS_Type_9, &String_42, &ArrayDims_43);
    mercury__io__write_string_3_p_0(String_42);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_45);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(Name_12);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(Info_7, Initializer_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list_for_java__2052__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_initializer_body_for_java\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Initializer_7, (MR_Integer) 0)));

          ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Rval_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0)));
          MR_Word FieldInits_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1)));
          MR_Word IsArray_13;
          MR_String Var_31;
          MR_Char Var_34;
          MR_String String_91;
          MR_Word ArrayDims_92;
          MR_Word Var_94;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, StructType_11, &String_91, &ArrayDims_92);
          mercury__io__write_string_3_p_0(String_91);
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_94);
          IsArray_13 = ml_backend__mlds_to_java__type_is_array_for_java_1_f_0(StructType_11);
          succeeded = (IsArray_13 == (MR_Integer) 0);
          if (succeeded)
            Var_31 = (MR_String) " {";
          else
            Var_31 = (MR_String) "(";
          mercury__io__write_string_3_p_0(Var_31);
          ml_backend__mlds_to_java__output_initializer_body_list_for_java_4_p_0(Info_6, FieldInits_12);
          succeeded = (IsArray_13 == (MR_Integer) 0);
          if (succeeded)
            Var_34 = (MR_Char) 125;
          else
            Var_34 = (MR_Char) 41;
          mercury__io__write_char_3_p_0(Var_34);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0)));
          MR_Word Var_65;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ Object[]");
          }
          else
          {
            MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0)));
            MR_String String_52;
            MR_Word ArrayDims_53;
            MR_Word Var_55;

            ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_15, &String_52, &ArrayDims_53);
            mercury__io__write_string_3_p_0(String_52);
            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_55);
          }
          mercury__io__write_string_3_p_0((MR_String) " {\n\t\t");
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_initializer_body_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Info_6));
          }
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ElementInits_14, (MR_String) ",\n\t\t", Var_65);
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_lval_for_java_4_p_0(
  MR_Word tscc_proc_1_input_1_Info_5,
  MR_Word tscc_proc_1_input_2_Lval_6)
{
  {
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Unop_7;
    MR_Word tscc_proc_4_input_3_Expr_8;

    // The code for TSCC PROC 1: pred ml_backend.mlds_to_java.output_lval_for_java/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_java.output_lval_for_java/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_java.output_bracketed_rval_for_java/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_java.output_rval_for_java/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_java.output_unop_for_java/5-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1)));
            MR_Word FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2)));
            MR_Word FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3)));
            MR_Word _MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0)));
            MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4)));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0)));
              MR_Word CtorType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1)));
              MR_Word FieldVarName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2)));
              MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 0)));
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 1)));

              succeeded = (FieldVarName_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0)));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  MR_Word Var_75;

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                    Var_75 = (MR_Word) MR_body(((MR_Word) Var_76), (MR_Integer) 1);
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                MR_Word Var_23;

                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java__output_field_var_name_for_java_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0)));

              if ((FieldType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1)));
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2)));
                MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3)));
                MR_Word Var_14;
                MR_Word Var_15;

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0)));
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1)));
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0)));
            MR_Word _Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0)));
            MR_String EnvVarName_27 = (MR_String) GlobalVarRef_26;

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_local_var_name_for_java_3_p_0(QualLocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) MR_body(((MR_Word) Var_15), (MR_Integer) 1);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_18 = (MR_Word) MR_body(((MR_Word) Rval_6), (MR_Integer) 1);
            MR_Word ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0)));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3)));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2)));
            MR_String Var_97;
            MR_Word Var_103;
            MR_String Var_107;
            MR_Word _Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1)));

            TypeNum_21 = (MR_Integer) Var_46;
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_23, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_24);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            Var_103 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, TypeNum_21, &Var_97);
            mercury__io__write_string_3_p_0(Var_97);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, RowNum_22, &Var_107);
            mercury__io__write_string_3_p_0(Var_107);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));

                ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UnOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Unop_7 = UnOp_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = RvalA_13;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Unop_7 = next_value_of_tscc_proc_4_input_2_Unop_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word BinOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3)));
                MR_Word RvalA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_binop_for_java_6_p_0(Info_5, BinOp_14, RvalA_68, RvalB_15);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word VectorCommon_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RowRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Integer StartRowNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3)));
                MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2)));
                MR_Integer TypeNum_71 = (MR_Integer) Var_35;
                MR_String Var_75;
                MR_Word Var_81;
                MR_String Var_85;
                MR_Word _ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0)));
                MR_Integer _NumRows_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4)));
                MR_Word _Type_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1)));

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                Var_81 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, TypeNum_71, &Var_75);
                mercury__io__write_string_3_p_0(Var_75);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, StartRowNum_28, &Var_85);
                mercury__io__write_string_3_p_0(Var_85);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, RowRval_26);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Unop_7 = tscc_proc_4_input_2_Unop_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Unop_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unop_7, (MR_Integer) 0)));
            MR_String JavaBoxedName_27;
            MR_String _JavaName_26;
            MR_String Var_28;

            succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_18, &_JavaName_26, &JavaBoxedName_27, &Var_28);
            if (succeeded)
            {
              mercury__io__write_string_3_p_0(JavaBoxedName_27);
              mercury__io__write_string_3_p_0((MR_String) ".valueOf(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object) (");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_unboxed_rval_for_java_5_p_0(Info_6, Type_19, Expr_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unop_7, (MR_Integer) 0)));
            MR_Integer N_46;
            MR_Word Var_51;

            succeeded = (Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                  N_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_51, (MR_Integer) 0)));
              }
            }
            if (succeeded)
            {
              ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
              succeeded = ml_backend__mlds_to_java__have_preallocated_pseudo_type_var_for_java_1_p_0(N_46);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
                mercury__io__write_int_3_p_0(N_46);
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            else
            {
              if ((Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) Type_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 2)));
                MR_Word Var_63;
                MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 1)));
                MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 3)));

                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                  succeeded = (Var_63 == (MR_Integer) 0);
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_String Var_81;
                MR_String Var_49;
                MR_String Var_50;

                succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_10, &Var_81, &Var_49, &Var_50);
                if (succeeded)
                  succeeded = (strcmp((MR_String) "int", Var_81) == 0);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(int) ");
                  ml_backend__mlds_to_java__output_rval_maybe_with_enum_for_java_4_p_0(Info_6, Expr_8);
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
                  MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_6, Type_10);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
                  next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
                  tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
                  tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
                  goto top_of_proc_3;
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StdUnop_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_std_unop_for_java_5_p_0(Info_6, StdUnop_11, Expr_8);
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(
  MR_Word tscc_proc_2_input_1_Info_5,
  MR_Word tscc_proc_2_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Unop_7;
    MR_Word tscc_proc_4_input_3_Expr_8;

    // The code for TSCC PROC 2: pred ml_backend.mlds_to_java.output_bracketed_rval_for_java/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_java.output_lval_for_java/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_java.output_bracketed_rval_for_java/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_java.output_rval_for_java/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_java.output_unop_for_java/5-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1)));
            MR_Word FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2)));
            MR_Word FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3)));
            MR_Word _MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0)));
            MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4)));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0)));
              MR_Word CtorType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1)));
              MR_Word FieldVarName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2)));
              MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 0)));
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 1)));

              succeeded = (FieldVarName_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0)));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  MR_Word Var_75;

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                    Var_75 = (MR_Word) MR_body(((MR_Word) Var_76), (MR_Integer) 1);
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                MR_Word Var_23;

                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java__output_field_var_name_for_java_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0)));

              if ((FieldType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1)));
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2)));
                MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3)));
                MR_Word Var_14;
                MR_Word Var_15;

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0)));
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1)));
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0)));
            MR_Word _Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0)));
            MR_String EnvVarName_27 = (MR_String) GlobalVarRef_26;

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_local_var_name_for_java_3_p_0(QualLocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) MR_body(((MR_Word) Var_15), (MR_Integer) 1);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_18 = (MR_Word) MR_body(((MR_Word) Rval_6), (MR_Integer) 1);
            MR_Word ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0)));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3)));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2)));
            MR_String Var_97;
            MR_Word Var_103;
            MR_String Var_107;
            MR_Word _Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1)));

            TypeNum_21 = (MR_Integer) Var_46;
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_23, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_24);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            Var_103 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, TypeNum_21, &Var_97);
            mercury__io__write_string_3_p_0(Var_97);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, RowNum_22, &Var_107);
            mercury__io__write_string_3_p_0(Var_107);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));

                ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UnOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Unop_7 = UnOp_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = RvalA_13;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Unop_7 = next_value_of_tscc_proc_4_input_2_Unop_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word BinOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3)));
                MR_Word RvalA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_binop_for_java_6_p_0(Info_5, BinOp_14, RvalA_68, RvalB_15);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word VectorCommon_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RowRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Integer StartRowNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3)));
                MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2)));
                MR_Integer TypeNum_71 = (MR_Integer) Var_35;
                MR_String Var_75;
                MR_Word Var_81;
                MR_String Var_85;
                MR_Word _ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0)));
                MR_Integer _NumRows_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4)));
                MR_Word _Type_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1)));

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                Var_81 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, TypeNum_71, &Var_75);
                mercury__io__write_string_3_p_0(Var_75);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, StartRowNum_28, &Var_85);
                mercury__io__write_string_3_p_0(Var_85);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, RowRval_26);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Unop_7 = tscc_proc_4_input_2_Unop_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Unop_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unop_7, (MR_Integer) 0)));
            MR_String JavaBoxedName_27;
            MR_String _JavaName_26;
            MR_String Var_28;

            succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_18, &_JavaName_26, &JavaBoxedName_27, &Var_28);
            if (succeeded)
            {
              mercury__io__write_string_3_p_0(JavaBoxedName_27);
              mercury__io__write_string_3_p_0((MR_String) ".valueOf(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object) (");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_unboxed_rval_for_java_5_p_0(Info_6, Type_19, Expr_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unop_7, (MR_Integer) 0)));
            MR_Integer N_46;
            MR_Word Var_51;

            succeeded = (Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                  N_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_51, (MR_Integer) 0)));
              }
            }
            if (succeeded)
            {
              ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
              succeeded = ml_backend__mlds_to_java__have_preallocated_pseudo_type_var_for_java_1_p_0(N_46);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
                mercury__io__write_int_3_p_0(N_46);
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            else
            {
              if ((Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) Type_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 2)));
                MR_Word Var_63;
                MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 1)));
                MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 3)));

                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                  succeeded = (Var_63 == (MR_Integer) 0);
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_String Var_81;
                MR_String Var_49;
                MR_String Var_50;

                succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_10, &Var_81, &Var_49, &Var_50);
                if (succeeded)
                  succeeded = (strcmp((MR_String) "int", Var_81) == 0);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(int) ");
                  ml_backend__mlds_to_java__output_rval_maybe_with_enum_for_java_4_p_0(Info_6, Expr_8);
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
                  MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_6, Type_10);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
                  next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
                  tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
                  tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
                  goto top_of_proc_3;
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StdUnop_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_std_unop_for_java_5_p_0(Info_6, StdUnop_11, Expr_8);
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rval_for_java_4_p_0(
  MR_Word tscc_proc_3_input_1_Info_5,
  MR_Word tscc_proc_3_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Unop_7;
    MR_Word tscc_proc_4_input_3_Expr_8;

    // The code for TSCC PROC 3: pred ml_backend.mlds_to_java.output_rval_for_java/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_java.output_lval_for_java/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_java.output_bracketed_rval_for_java/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_java.output_rval_for_java/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_java.output_unop_for_java/5-0

    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1)));
            MR_Word FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2)));
            MR_Word FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3)));
            MR_Word _MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0)));
            MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4)));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0)));
              MR_Word CtorType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1)));
              MR_Word FieldVarName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2)));
              MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 0)));
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 1)));

              succeeded = (FieldVarName_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0)));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  MR_Word Var_75;

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                    Var_75 = (MR_Word) MR_body(((MR_Word) Var_76), (MR_Integer) 1);
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                MR_Word Var_23;

                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java__output_field_var_name_for_java_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0)));

              if ((FieldType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1)));
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2)));
                MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3)));
                MR_Word Var_14;
                MR_Word Var_15;

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0)));
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1)));
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0)));
            MR_Word _Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0)));
            MR_String EnvVarName_27 = (MR_String) GlobalVarRef_26;

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_local_var_name_for_java_3_p_0(QualLocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) MR_body(((MR_Word) Var_15), (MR_Integer) 1);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_18 = (MR_Word) MR_body(((MR_Word) Rval_6), (MR_Integer) 1);
            MR_Word ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0)));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3)));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2)));
            MR_String Var_97;
            MR_Word Var_103;
            MR_String Var_107;
            MR_Word _Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1)));

            TypeNum_21 = (MR_Integer) Var_46;
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_23, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_24);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            Var_103 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, TypeNum_21, &Var_97);
            mercury__io__write_string_3_p_0(Var_97);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, RowNum_22, &Var_107);
            mercury__io__write_string_3_p_0(Var_107);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));

                ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UnOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Unop_7 = UnOp_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = RvalA_13;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Unop_7 = next_value_of_tscc_proc_4_input_2_Unop_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word BinOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3)));
                MR_Word RvalA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_binop_for_java_6_p_0(Info_5, BinOp_14, RvalA_68, RvalB_15);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word VectorCommon_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RowRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Integer StartRowNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3)));
                MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2)));
                MR_Integer TypeNum_71 = (MR_Integer) Var_35;
                MR_String Var_75;
                MR_Word Var_81;
                MR_String Var_85;
                MR_Word _ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0)));
                MR_Integer _NumRows_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4)));
                MR_Word _Type_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1)));

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                Var_81 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, TypeNum_71, &Var_75);
                mercury__io__write_string_3_p_0(Var_75);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, StartRowNum_28, &Var_85);
                mercury__io__write_string_3_p_0(Var_85);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, RowRval_26);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Unop_7 = tscc_proc_4_input_2_Unop_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Unop_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unop_7, (MR_Integer) 0)));
            MR_String JavaBoxedName_27;
            MR_String _JavaName_26;
            MR_String Var_28;

            succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_18, &_JavaName_26, &JavaBoxedName_27, &Var_28);
            if (succeeded)
            {
              mercury__io__write_string_3_p_0(JavaBoxedName_27);
              mercury__io__write_string_3_p_0((MR_String) ".valueOf(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object) (");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_unboxed_rval_for_java_5_p_0(Info_6, Type_19, Expr_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unop_7, (MR_Integer) 0)));
            MR_Integer N_46;
            MR_Word Var_51;

            succeeded = (Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                  N_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_51, (MR_Integer) 0)));
              }
            }
            if (succeeded)
            {
              ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
              succeeded = ml_backend__mlds_to_java__have_preallocated_pseudo_type_var_for_java_1_p_0(N_46);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
                mercury__io__write_int_3_p_0(N_46);
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            else
            {
              if ((Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) Type_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 2)));
                MR_Word Var_63;
                MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 1)));
                MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 3)));

                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                  succeeded = (Var_63 == (MR_Integer) 0);
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_String Var_81;
                MR_String Var_49;
                MR_String Var_50;

                succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_10, &Var_81, &Var_49, &Var_50);
                if (succeeded)
                  succeeded = (strcmp((MR_String) "int", Var_81) == 0);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(int) ");
                  ml_backend__mlds_to_java__output_rval_maybe_with_enum_for_java_4_p_0(Info_6, Expr_8);
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
                  MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_6, Type_10);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
                  next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
                  tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
                  tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
                  goto top_of_proc_3;
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StdUnop_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_std_unop_for_java_5_p_0(Info_6, StdUnop_11, Expr_8);
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_unop_for_java_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Unop_7,
  MR_Word tscc_proc_4_input_3_Expr_8)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;

    // The code for TSCC PROC 4: pred ml_backend.mlds_to_java.output_unop_for_java/5-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ml_backend.mlds_to_java.output_lval_for_java/4-0
    // proc 2 in TSCC: pred ml_backend.mlds_to_java.output_bracketed_rval_for_java/4-0
    // proc 3 in TSCC: pred ml_backend.mlds_to_java.output_rval_for_java/4-0
    // proc 4 in TSCC: pred ml_backend.mlds_to_java.output_unop_for_java/5-0

    goto top_of_proc_4;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1)));
            MR_Word FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2)));
            MR_Word FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3)));
            MR_Word _MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 0)));
            MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4)));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0)));
              MR_Word CtorType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1)));
              MR_Word FieldVarName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2)));
              MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 0)));
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 1)));

              succeeded = (FieldVarName_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0)));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0)))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  MR_Word Var_75;

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                    Var_75 = (MR_Word) MR_body(((MR_Word) Var_76), (MR_Integer) 1);
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                MR_Word Var_23;

                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1)));
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java__output_field_var_name_for_java_3_p_0(FieldVarName_22);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0)));

              if ((FieldType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1)));
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 2)));
                MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 3)));
                MR_Word Var_14;
                MR_Word Var_15;

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0)));
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1)));
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0)));
            MR_Word _Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0)));
            MR_String EnvVarName_27 = (MR_String) GlobalVarRef_26;

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_local_var_name_for_java_3_p_0(QualLocalVarName_30);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
                MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
        MR_Word Var_12;

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_12 = (MR_Word) MR_body(((MR_Word) Var_15), (MR_Integer) 1);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_18 = (MR_Word) MR_body(((MR_Word) Rval_6), (MR_Integer) 1);
            MR_Word ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 0)));
            MR_Integer TypeNum_21;
            MR_Integer RowNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 3)));
            MR_Word ModuleSymName_23;
            MR_String MangledModuleName_24;
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 2)));
            MR_String Var_97;
            MR_Word Var_103;
            MR_String Var_107;
            MR_Word _Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ScalarCommon_18, (MR_Integer) 1)));

            TypeNum_21 = (MR_Integer) Var_46;
            ModuleSymName_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_19);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_23, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_24);
            mercury__io__write_string_3_p_0(MangledModuleName_24);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            Var_103 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, TypeNum_21, &Var_97);
            mercury__io__write_string_3_p_0(Var_97);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_103, RowNum_22, &Var_107);
            mercury__io__write_string_3_p_0(Var_107);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));

                ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UnOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Unop_7 = UnOp_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = RvalA_13;

                // direct tailcall eliminated
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Unop_7 = next_value_of_tscc_proc_4_input_2_Unop_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word BinOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RvalB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3)));
                MR_Word RvalA_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));

                ml_backend__mlds_to_java__output_binop_for_java_6_p_0(Info_5, BinOp_14, RvalA_68, RvalB_15);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word VectorCommon_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
                MR_Word RowRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
                MR_Integer StartRowNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 3)));
                MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 2)));
                MR_Integer TypeNum_71 = (MR_Integer) Var_35;
                MR_String Var_75;
                MR_Word Var_81;
                MR_String Var_85;
                MR_Word _ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 0)));
                MR_Integer _NumRows_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 4)));
                MR_Word _Type_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), VectorCommon_25, (MR_Integer) 1)));

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                Var_81 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0];
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, TypeNum_71, &Var_75);
                mercury__io__write_string_3_p_0(Var_75);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_81, StartRowNum_28, &Var_85);
                mercury__io__write_string_3_p_0(Var_85);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, RowRval_26);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Unop_7 = tscc_proc_4_input_2_Unop_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Unop_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unop_7, (MR_Integer) 0)));
            MR_String JavaBoxedName_27;
            MR_String _JavaName_26;
            MR_String Var_28;

            succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_18, &_JavaName_26, &JavaBoxedName_27, &Var_28);
            if (succeeded)
            {
              mercury__io__write_string_3_p_0(JavaBoxedName_27);
              mercury__io__write_string_3_p_0((MR_String) ".valueOf(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object) (");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_unboxed_rval_for_java_5_p_0(Info_6, Type_19, Expr_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unop_7, (MR_Integer) 0)));
            MR_Integer N_46;
            MR_Word Var_51;

            succeeded = (Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                  N_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_51, (MR_Integer) 0)));
              }
            }
            if (succeeded)
            {
              ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
              succeeded = ml_backend__mlds_to_java__have_preallocated_pseudo_type_var_for_java_1_p_0(N_46);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
                mercury__io__write_int_3_p_0(N_46);
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            else
            {
              if ((Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) Type_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 2)));
                MR_Word Var_63;
                MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 1)));
                MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_10, (MR_Integer) 3)));

                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                  succeeded = (Var_63 == (MR_Integer) 0);
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_String Var_81;
                MR_String Var_49;
                MR_String Var_50;

                succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_10, &Var_81, &Var_49, &Var_50);
                if (succeeded)
                  succeeded = (strcmp((MR_String) "int", Var_81) == 0);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(int) ");
                  ml_backend__mlds_to_java__output_rval_maybe_with_enum_for_java_4_p_0(Info_6, Expr_8);
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
                  MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_6, Type_10);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
                  next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
                  tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
                  tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
                  goto top_of_proc_3;
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StdUnop_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unop_7, (MR_Integer) 0)));

            ml_backend__mlds_to_java__output_std_unop_for_java_5_p_0(Info_6, StdUnop_11, Expr_8);
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rval_maybe_with_enum_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded;
    MR_Word Lval_14;
    MR_Word Type_16;
    MR_Word Builtin_24;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_26;

    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_5, Rval_6);
    succeeded = ((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));
      switch (MR_tag((MR_Word) Lval_14)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_14, (MR_Integer) 0)));
            MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_14, (MR_Integer) 1)));
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_14, (MR_Integer) 2)));
            MR_Word Var_21;

            Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_14, (MR_Integer) 3)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_14, (MR_Integer) 4)));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 1)));

                Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 1)));

                Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Type_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 1)));
          Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 2)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 3)));
          succeeded = ((MR_tag((MR_Word) Builtin_24)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Builtin_24, (MR_Integer) 0)));
        }
      }
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) ".MR_value");
    }
    else
    {
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_binop_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Op_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Op_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".equals(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) "!=");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) "<");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) ">");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) "<=");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) ">=");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")) ");
            }
            break;
          case (MR_Integer) 11:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 13:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 14:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 15:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 16:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 17:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 18:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 19:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 20:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 21:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 22:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 23:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 24:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " == ");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
            }
            break;
          case (MR_Integer) 25:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 26:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_5789 = ((MR_Word) (MR_hl_field(MR_mktag(1), Op_8, (MR_Integer) 0)));

          switch (Var_5789) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 5:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 7:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_5797 = ((MR_Word) (MR_hl_field(MR_mktag(2), Op_8, (MR_Integer) 0)));

          switch (Var_5797) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 5:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 7:
              {
                succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_5796 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5796) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_5790 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5790) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((short)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff)))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((byte)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff)))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_5795 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5795) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((short)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff)))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((byte)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff)))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_5798 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5798) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_5799 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5799) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_5786 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5786) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_5787 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5787) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_5788 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5788) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              ml_backend__mlds_to_java__output_bracketed_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) "[");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
            break;
          case (MR_Integer) 11:
            {
              succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_5794 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5794) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Var_5792 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5792) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_5793 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5793) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Var_5791 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1)));

              switch (Var_5791) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
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

static void MR_CALL 
ml_backend__mlds_to_java__output_std_unop_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8)
{
  switch (MR_tag((MR_Word) UnaryOp_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UnaryOp_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* mktag */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* tag */  0");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* unmktag */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* strip_tag */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* mkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* unmkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "!");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash2_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash3_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash4_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash5_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash6_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnaryOp_7, (MR_Integer) 0)));

        switch (Var_153) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_unboxed_rval_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8)
{
  {
    MR_bool succeeded;
    MR_String JavaBoxedName_11;
    MR_String UnboxMethod_12;
    MR_String Var_10;

    succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_7, &Var_10, &JavaBoxedName_11, &UnboxMethod_12);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "((");
      mercury__io__write_string_3_p_0(JavaBoxedName_11);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      if (((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr_8, (MR_Integer) 0)));

        if (((((MR_tag((MR_Word) Var_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1)));
        MR_Word Var_43;

        succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_43 = (MR_Word) MR_body(((MR_Word) Var_44), (MR_Integer) 1);
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      mercury__io__write_string_3_p_0((MR_String) ").");
      mercury__io__write_string_3_p_0(UnboxMethod_12);
      mercury__io__write_string_3_p_0((MR_String) "()");
    }
    else
    {
      MR_String String_67;
      MR_Word ArrayDims_68;
      MR_Word Var_70;

      mercury__io__write_string_3_p_0((MR_String) "((");
      ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_7, &String_67, &ArrayDims_68);
      mercury__io__write_string_3_p_0(String_67);
      Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_70);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      ml_backend__mlds_to_java__output_rval_for_java_4_p_0(Info_6, Expr_8);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const_for_java__4802__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Const_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "true");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "false");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_24 = (MR_Word) MR_body(((MR_Word) Const_6), (MR_Integer) 1);

          ml_backend__mlds_to_java__mlds_output_code_addr_for_java_5_p_0(Info_5, CodeAddr_24, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0)));

          ml_backend__mlds_to_java__output_int_const_for_java_3_p_0(N_8);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned U_9 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Integer Var_113;

              Var_113 = mercury__uint__cast_to_int_1_f_0(U_9);
              ml_backend__mlds_to_java__output_int_const_for_java_3_p_0(Var_113);
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t I8_10 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "(byte)");
              mercury__io__write_int8_3_p_0(I8_10);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t U8_11 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              int8_t Var_108;

              mercury__io__write_string_3_p_0((MR_String) "(byte)");
              Var_108 = mercury__int8__cast_from_uint8_1_f_0(U8_11);
              mercury__io__write_int8_3_p_0(Var_108);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t I16_12 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "(short)");
              mercury__io__write_int16_3_p_0(I16_12);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t U16_13 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              int16_t Var_101;

              mercury__io__write_string_3_p_0((MR_String) "(short)");
              Var_101 = mercury__int16__cast_from_uint16_1_f_0(U16_13);
              mercury__io__write_int16_3_p_0(Var_101);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t I32_14 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_int32_3_p_0(I32_14);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t U32_15 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              int32_t Var_96;

              Var_96 = mercury__int32__cast_from_uint32_1_f_0(U32_15);
              mercury__io__write_int32_3_p_0(Var_96);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word EnumType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));
              MR_Integer N_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_5, EnumType_16);
              mercury__io__write_string_3_p_0((MR_String) ".K");
              ml_backend__mlds_to_java__output_int_const_for_java_3_p_0(N_121);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer N_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java__output_int_const_for_java_3_p_0(N_120);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Float FloatVal_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_20);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String String_21 = ((MR_String) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "\"");
              backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_1((MR_Integer) 1, String_21);
              mercury__io__write_string_3_p_0((MR_String) "\"");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word String_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "\"");
              backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 1, String_122);
              mercury__io__write_string_3_p_0((MR_String) "\"");
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Lang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_String Value_18 = ((MR_String) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));
              MR_Word Var_82;
              MR_Word _Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3)));

              {
                Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[1]));
                MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_rval_const_for_java_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Lang_17));
                MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) ((MR_Integer) 2));
              }
              mercury__require__expect_3_p_0(Var_82, (MR_String) "predicate \140ml_backend.mlds_to_java.output_rval_const_for_java\'/4", (MR_String) "language other than Java.");
              mercury__io__write_string_3_p_0(Value_18);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word TargetPrefixes_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_String NamedConst_23 = ((MR_String) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));
              MR_String Var_66 = ((MR_String) (MR_hl_field(MR_mktag(0), TargetPrefixes_22, (MR_Integer) 0)));
              MR_String Var_129 = ((MR_String) (MR_hl_field(MR_mktag(0), TargetPrefixes_22, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0(Var_66);
              mercury__io__write_string_3_p_0(NamedConst_23);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word LocalVarName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              ml_backend__mlds_to_java__output_local_var_name_for_java_3_p_0(LocalVarName_26);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Word GlobalVarName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));
              MR_Word SymName_29;
              MR_String ModuleNameStr_30;

              SymName_29 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_27);
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_29, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_30);
              mercury__io__write_string_3_p_0(ModuleNameStr_30);
              mercury__io__write_string_3_p_0((MR_String) ".");
              ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(GlobalVarName_28);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word RttiId_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));
              MR_String RttiAddrName_32;
              MR_Word ModuleName_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Word SymName_124;
              MR_String ModuleNameStr_125;

              SymName_124 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_123);
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_124, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_125);
              mercury__io__write_string_3_p_0(ModuleNameStr_125);
              mercury__io__write_string_3_p_0((MR_String) ".");
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_31, &RttiAddrName_32);
              mercury__io__write_string_3_p_0(RttiAddrName_32);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word QualProcLabel_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Word TablingId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));
              MR_Word ProcLabel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualProcLabel_33, (MR_Integer) 1)));
              MR_String TablingPrefix_36;
              MR_String Var_47;
              MR_Word Var_50;
              MR_Word ModuleName_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualProcLabel_33, (MR_Integer) 0)));
              MR_Word SymName_127;
              MR_String ModuleNameStr_128;

              SymName_127 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_126);
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_127, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_128);
              mercury__io__write_string_3_p_0(ModuleNameStr_128);
              mercury__io__write_string_3_p_0((MR_String) ".");
              Var_47 = backend_libs__rtti__tabling_info_id_str_1_f_0(TablingId_34);
              TablingPrefix_36 = mercury__string__f_43_43_2_f_0(Var_47, (MR_String) "_");
              mercury__io__write_string_3_p_0(TablingPrefix_36);
              Var_50 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_35);
              ml_backend__mlds_to_java__mlds_output_proc_label_for_java_3_p_0(Var_50);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_String Initializer_38;

              Initializer_38 = ml_backend__mlds_to_java__get_java_type_initializer_1_f_0(Type_37);
              mercury__io__write_string_3_p_0(Initializer_38);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__mlds_output_proc_label_for_java_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word PredLabel_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer ModeNum_7;
    MR_String Var_18;

    ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(PredLabel_4);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_5, &ModeNum_7);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ModeNum_7, &Var_18);
    mercury__io__write_string_3_p_0(Var_18);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__mlds_output_code_addr_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word CodeAddr_7,
  MR_Word IsCall_8)
{
  {
    MR_bool succeeded;

    switch (IsCall_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word AddrOfMap_10;
          MR_Word CodeAddrWrapper_11;
          MR_String ClassName_12;
          MR_Word MaybePtrNum_13;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_String Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Box conv0_CodeAddrWrapper_11;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          AddrOfMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0, AddrOfMap_10, ((MR_Box) (CodeAddr_7)), &conv0_CodeAddrWrapper_11);
          CodeAddrWrapper_11 = ((MR_Word) conv0_CodeAddrWrapper_11);
          ClassName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), CodeAddrWrapper_11, (MR_Integer) 0)));
          MaybePtrNum_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddrWrapper_11, (MR_Integer) 1)));
          mercury__io__write_string_3_p_0(ClassName_12);
          mercury__io__write_string_3_p_0((MR_String) "_0(");
          if (!((MaybePtrNum_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Integer PtrNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybePtrNum_13, (MR_Integer) 0)));

            mercury__io__write_int_3_p_0(PtrNum_14);
          }
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word QualFuncLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 0)));
          MR_Word ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_15, (MR_Integer) 0)));
          MR_Word FuncLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncLabel_15, (MR_Integer) 1)));
          MR_Word ProcLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_18, (MR_Integer) 0)));
          MR_Word MaybeAux_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_18, (MR_Integer) 1)));
          MR_String Var_26;
          MR_String QualifierString_52;
          MR_Word OuterName_59;
          MR_Word InnerName_60;
          MR_String MangledOuterName_61;
          MR_String MangledSuffix_62;
          MR_Word PredLabel_73;
          MR_Integer ProcId_74;
          MR_Integer ModeNum_76;
          MR_String Var_85;
          MR_Word _Signature_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 1)));

          OuterName_59 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_17);
          InnerName_60 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_17);
          parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_59, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_61);
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_59, InnerName_60);
          if (succeeded)
            MangledSuffix_62 = (MR_String) "";
          else
          {
            MR_Word Suffix_63;
            MR_String MangledSuffix0_64;
            MR_Word Var_67;

            ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_60, OuterName_59, &Suffix_63);
            Var_67 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0((MR_Integer) 0);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_63, Var_67, (MR_String) ".", &MangledSuffix0_64);
            MangledSuffix_62 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_64);
          }
          QualifierString_52 = mercury__string__f_43_43_2_f_0(MangledOuterName_61, MangledSuffix_62);
          mercury__io__write_string_3_p_0(QualifierString_52);
          mercury__io__write_string_3_p_0((MR_String) ".");
          PredLabel_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_19, (MR_Integer) 0)));
          ProcId_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_19, (MR_Integer) 1)));
          ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(PredLabel_73);
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_74, &ModeNum_76);
          mercury__io__write_string_3_p_0((MR_String) "_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ModeNum_76, &Var_85);
          mercury__io__write_string_3_p_0(Var_85);
          Var_26 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_20);
          mercury__io__write_string_3_p_0(Var_26);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_int_const_for_java_3_p_0(
  MR_Integer N_4)
{
  {
    MR_bool succeeded = (N_4 < (MR_Integer) 0);

    if (succeeded)
      mercury__io__write_int_3_p_0(N_4);
    else
    {
      MR_Integer Var_10;
      MR_Integer Var_12;
      MR_Integer Var_13;

      Var_10 = mercury__int__legacy_right_shift_2_f_0(N_4, (MR_Integer) 32);
      succeeded = (Var_10 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = (MR_Integer) 2147483648;
        Var_12 = (N_4 & Var_13);
        succeeded = (Var_12 == (MR_Integer) 2147483648);
      }
      if (succeeded)
      {
        MR_Integer Var_18 = (N_4 & (MR_Integer) 4294967295);
        MR_String Var_24;

        mercury__io__write_string_3_p_0((MR_String) "0x");
        mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], (MR_Integer) 2, Var_18, &Var_24);
        mercury__io__write_string_3_p_0(Var_24);
      }
      else
        mercury__io__write_int_3_p_0(N_4);
    }
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_java__get_java_type_initializer_1_f_0(
  MR_Word Type_3)
{
  {
    MR_bool succeeded;
    MR_String Initializer_4;

    switch (MR_tag((MR_Word) Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            Initializer_4 = (MR_String) "null";
            break;
          case (MR_Integer) 1:
            Initializer_4 = (MR_String) "false";
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            Initializer_4 = (MR_String) "0";
            break;
          case (MR_Integer) 5:
            Initializer_4 = (MR_String) "\'\\u0000\'";
            break;
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_java.get_java_type_initializer\'/1", (MR_String) "variable has unknown_type");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Initializer_4 = (MR_String) "null";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CtorCat_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2)));
              MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
              MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) CtorCat_6)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(CtorCat_6)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Initializer_4 = (MR_String) "null";
                      break;
                    case (MR_Integer) 1:
                      Initializer_4 = (MR_String) "null";
                      break;
                    case (MR_Integer) 2:
                      Initializer_4 = (MR_String) "null";
                      break;
                    case (MR_Integer) 3:
                      Initializer_4 = (MR_String) "null";
                      break;
                    case (MR_Integer) 4:
                      Initializer_4 = (MR_String) "null";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorCat_6, (MR_Integer) 0)));

                    switch (MR_tag((MR_Word) Var_32)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(Var_32)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            Initializer_4 = (MR_String) "0";
                            break;
                          case (MR_Integer) 1:
                            Initializer_4 = (MR_String) "\'\\u0000\'";
                            break;
                          case (MR_Integer) 2:
                            Initializer_4 = (MR_String) "null";
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        Initializer_4 = (MR_String) "0";
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  Initializer_4 = (MR_String) "null";
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Initializer_4 = (MR_String) "null";
                      break;
                    case (MR_Integer) 1:
                      Initializer_4 = (MR_String) "null";
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            Initializer_4 = (MR_String) "null";
            break;
          case (MR_Integer) 3:
            {
              MR_Word ForeignLangType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
              MR_String Initializer0_16;
              MR_String Var_13;
              MR_String JavaForeignType_38;
              MR_Integer slot_0;
              MR_String str_1;

              switch (MR_tag((MR_Word) ForeignLangType_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java.m", (MR_String) "predicate \140ml_backend.mlds_to_java.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ForeignLangType_12, (MR_Integer) 0)));

                    JavaForeignType_38 = (MR_String) Var_51;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java.m", (MR_String) "predicate \140ml_backend.mlds_to_java.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C#");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java.m", (MR_String) "predicate \140ml_backend.mlds_to_java.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for Erlang");
                  }
                  break;
              }
              Var_13 = mercury__string__strip_1_f_0(JavaForeignType_38);
              // hashed string simple lookup switch
              // compute the hash value of the input string
              slot_0 = ((MR_hash_string5(Var_13)) & (MR_Integer) 15);
              // no collisions; no hash chain loop
              // lookup the string for this hash slot
              str_1 = ((&ml_backend__mlds_to_java_vector_common_16[0 + slot_0]))->ml_backend__mlds_to_java__vector_common_type_16_0__vct_16_f_0;
              // did we find a match?
              if ((((str_1 != NULL)) && ((strcmp(str_1, Var_13) == 0))))
              {
                // we found a match; look up the results
                Initializer0_16 = ((&ml_backend__mlds_to_java_vector_common_16[0 + slot_0]))->ml_backend__mlds_to_java__vector_common_type_16_0__vct_16_f_1;
                succeeded = MR_TRUE;
                // jump out of search loop
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
              if (succeeded)
                Initializer_4 = Initializer0_16;
              else
                Initializer_4 = (MR_String) "null";
            }
            break;
        }
        break;
    }
    return Initializer_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_binary_op_for_java_3_p_0(
  MR_Word Op_4)
{
  switch (MR_tag((MR_Word) Op_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "&&");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "||");
          }
          break;
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
        case (MR_Integer) 22:
        case (MR_Integer) 23:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_binary_op_for_java\'/3", (MR_String) "invalid binary operator");
              return;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "+");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) "-");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "*");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
          break;
        case (MR_Integer) 16:
          {
            mercury__io__write_string_3_p_0((MR_String) "==");
          }
          break;
        case (MR_Integer) 17:
          {
            mercury__io__write_string_3_p_0((MR_String) "!=");
          }
          break;
        case (MR_Integer) 18:
          {
            mercury__io__write_string_3_p_0((MR_String) "<");
          }
          break;
        case (MR_Integer) 19:
          {
            mercury__io__write_string_3_p_0((MR_String) ">");
          }
          break;
        case (MR_Integer) 20:
          {
            mercury__io__write_string_3_p_0((MR_String) "<=");
          }
          break;
        case (MR_Integer) 21:
          {
            mercury__io__write_string_3_p_0((MR_String) ">=");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "+");
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "-");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "*");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "%");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "<<");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word IntType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_4, (MR_Integer) 1)));
            MR_String OpStr_31 = ((&ml_backend__mlds_to_java_vector_common_15[0 + IntType_22]))->ml_backend__mlds_to_java__vector_common_type_15_0__vct_15_f_0;

            mercury__io__write_string_3_p_0(OpStr_31);
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "&");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "|");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "^");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "==");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "!=");
          }
          break;
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_binary_op_for_java\'/3", (MR_String) "invalid binary operator");
              return;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "<");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) ">");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "<=");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) ">=");
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__have_preallocated_pseudo_type_var_for_java_1_p_0(
  MR_Integer N_2)
{
  {
    MR_bool succeeded = (N_2 >= (MR_Integer) 1);
    MR_Integer Var_4;

    if (succeeded)
    {
      Var_4 = (MR_Integer) 5;
      succeeded = (N_2 <= Var_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__maybe_output_comment_for_java_4_p_0(
  MR_Word Info_5,
  MR_String Comment_6)
{
  {
    MR_Word AutoComments_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    MR_String Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));

    switch (AutoComments_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__io__write_string_3_p_0(Comment_6);
          mercury__io__write_string_3_p_0((MR_String) " */");
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_field_var_name_for_java_3_p_0(
  MR_Word FieldVarName_4)
{
  {
    MR_String NameStr_6;
    MR_String MangledName_14;
    MR_String JavaSafeName_15;

    NameStr_6 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_4);
    MangledName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_6);
    JavaSafeName_15 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_14);
    mercury__io__write_string_3_p_0(JavaSafeName_15);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_local_var_name_for_java_3_p_0(
  MR_Word LocalVarName_4)
{
  {
    MR_String NameStr_6;
    MR_String MangledName_14;
    MR_String JavaSafeName_15;

    NameStr_6 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_4);
    MangledName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_6);
    JavaSafeName_15 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_14);
    mercury__io__write_string_3_p_0(JavaSafeName_15);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_maybe_qualified_global_var_name_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word QualGlobalVarName_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 0)));
    MR_Word GlobalVarName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 1)));
    MR_Word CurrentModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_8, CurrentModuleName_10);
    if (!(succeeded))
    {
      MR_String QualifierString_31;
      MR_Word OuterName_38;
      MR_Word InnerName_39;
      MR_String MangledOuterName_40;
      MR_String MangledSuffix_41;

      OuterName_38 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_8);
      InnerName_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_38, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_40);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_38, InnerName_39);
      if (succeeded)
        MangledSuffix_41 = (MR_String) "";
      else
      {
        MR_Word Suffix_42;
        MR_String MangledSuffix0_43;
        MR_Word Var_46;

        ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_39, OuterName_38, &Suffix_42);
        Var_46 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0((MR_Integer) 0);
        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_42, Var_46, (MR_String) ".", &MangledSuffix0_43);
        MangledSuffix_41 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_43);
      }
      QualifierString_31 = mercury__string__f_43_43_2_f_0(MangledOuterName_40, MangledSuffix_41);
      mercury__io__write_string_3_p_0(QualifierString_31);
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
    ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(GlobalVarName_9);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java__type_is_array_for_java_1_f_0(
  MR_Word Type_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word IsArray_4;
    MR_Word Var_5;

    if (succeeded)
    {
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
      IsArray_4 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_6;

      succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
        IsArray_4 = (MR_Integer) 0;
      }
      else
      {
        MR_Word CtorCat_8;
        MR_Word Var_7;
        MR_Word Var_9;

        succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
          CtorCat_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2)));
          Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3)));
          IsArray_4 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_8);
        }
        else
        {
          MR_Word RttiIdMaybeElement_10;

          succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
          if (succeeded)
          {
            RttiIdMaybeElement_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1)));
            {
              MR_String _JavaTypeName_11;

              backend_libs__rtti__rtti_id_maybe_element_java_type_3_p_0(RttiIdMaybeElement_10, &_JavaTypeName_11, &IsArray_4);
            }
          }
          else
            IsArray_4 = (MR_Integer) 1;
        }
      }
    }
    return IsArray_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_list_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list_for_java__2052__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_initializer_body_list_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Inits_6)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_initializer_body_list_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_5));
    }
    mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, Inits_6, (MR_String) ",\n\t\t", Var_12);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enum_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_exported_enum_constant_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enum_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 0)));
    MR_Word TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 2)));
    MR_Word ExportedConstants0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 3)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 1)));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_24_24;
          MR_Word ClassName_14;
          MR_Integer ClassArity_15;
          MR_Word MLDS_Type_16;
          MR_Word ExportedConstants_17;
          MR_Word Var_20;
          MR_Word Var_22;
          MR_Box conv0_STATE_VARIABLE_IO_19;

          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_12, &ClassName_14, &ClassArity_15);
          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (ClassName_14));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ClassArity_15));
            MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
          }
          MLDS_Type_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_20);
          TypeCtorInfo_24_24 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;
          mercury__list__reverse_2_p_0(TypeCtorInfo_24_24, ExportedConstants0_13, &ExportedConstants_17);
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[3]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_exported_enum_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_6));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Indent_7));
            MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (MLDS_Type_16));
          }
          mercury__list__foldl_4_p_2(TypeCtorInfo_24_24, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_22, ExportedConstants_17, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word Var_3;

    succeeded = ((((MR_tag((MR_Word) Var_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
      Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_5, (MR_Integer) 1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__assign_ref_output_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__assign_ref_output_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__assign_ref_output_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Arg_10,
  MR_Integer N_11,
  MR_Integer * HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_Word VarName_13;
    MR_Word Type_14;
    MR_String TypeString_17;
    MR_String Var_36;
    MR_String NameStr_48;
    MR_String MangledName_54;
    MR_String JavaSafeName_55;
    MR_Word Var_15;
    MR_Word InnerType_16;

    *HeadVar__5_5 = (N_11 + (MR_Integer) 1);
    VarName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 0)));
    Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 1)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 2)));
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    NameStr_48 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_13);
    MangledName_54 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_48);
    JavaSafeName_55 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_54);
    mercury__io__write_string_3_p_0(JavaSafeName_55);
    succeeded = ((((MR_tag((MR_Word) Type_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      InnerType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 1)));
      {
        MR_String JavaBoxedName_61;
        MR_String Var_60;
        MR_String Var_62;

        succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(InnerType_16, &Var_60, &JavaBoxedName_61, &Var_62);
        if (succeeded)
          TypeString_17 = JavaBoxedName_61;
        else
        {
          MR_Word TypeCtorInfo_19_72;
          MR_String String0_63;
          MR_Word ArrayDims_64;
          MR_Word RevBrackets_65;
          MR_Word Brackets_66;
          MR_Word Var_68;

          ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_8, InnerType_16, &String0_63, &ArrayDims_64);
          TypeCtorInfo_19_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_19_72, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[18], ArrayDims_64, &RevBrackets_65);
          mercury__list__reverse_2_p_0(TypeCtorInfo_19_72, RevBrackets_65, &Brackets_66);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (String0_63));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Brackets_66));
          }
          mercury__string__append_list_2_p_0(Var_68, &TypeString_17);
        }
      }
    }
    else
    {
      MR_String JavaBoxedName_77;
      MR_String Var_76;
      MR_String Var_78;

      succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(Type_14, &Var_76, &JavaBoxedName_77, &Var_78);
      if (succeeded)
        TypeString_17 = JavaBoxedName_77;
      else
      {
        MR_Word TypeCtorInfo_19_88;
        MR_String String0_79;
        MR_Word ArrayDims_80;
        MR_Word RevBrackets_81;
        MR_Word Brackets_82;
        MR_Word Var_84;

        ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_8, Type_14, &String0_79, &ArrayDims_80);
        TypeCtorInfo_19_88 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_19_88, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[19], ArrayDims_80, &RevBrackets_81);
        mercury__list__reverse_2_p_0(TypeCtorInfo_19_88, RevBrackets_81, &Brackets_82);
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (String0_79));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Brackets_82));
        }
        mercury__string__append_list_2_p_0(Var_84, &TypeString_17);
      }
    }
    mercury__io__write_string_3_p_0((MR_String) ".val = (");
    mercury__io__write_string_3_p_0(TypeString_17);
    mercury__io__write_string_3_p_0((MR_String) ") results[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], N_11, &Var_36);
    mercury__io__write_string_3_p_0(Var_36);
    mercury__io__write_string_3_p_0((MR_String) "];\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__write_argument_name_for_java_3_p_0(
  MR_Word Arg_4)
{
  {
    MR_Word VarName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 0)));
    MR_String NameStr_16;
    MR_String MangledName_22;
    MR_String JavaSafeName_23;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 2)));

    NameStr_16 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_6);
    MangledName_22 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_16);
    JavaSafeName_23 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_22);
    mercury__io__write_string_3_p_0(JavaSafeName_23);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_param_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_param_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Argument_8)
{
  {
    MR_bool succeeded;
    MR_Word VarName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Argument_8, (MR_Integer) 0)));
    MR_Word Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Argument_8, (MR_Integer) 1)));
    MR_String NameStr_70;
    MR_String MangledName_76;
    MR_String JavaSafeName_77;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Argument_8, (MR_Integer) 2)));
    MR_Word InnerType_13;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    succeeded = ((((MR_tag((MR_Word) Type_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      InnerType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 1)));
      {
        MR_String InnerTypeString_14;
        MR_String JavaBoxedName_35;
        MR_String Var_34;
        MR_String Var_36;

        succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(InnerType_13, &Var_34, &JavaBoxedName_35, &Var_36);
        if (succeeded)
          InnerTypeString_14 = JavaBoxedName_35;
        else
        {
          MR_Word TypeCtorInfo_19_46;
          MR_String String0_37;
          MR_Word ArrayDims_38;
          MR_Word RevBrackets_39;
          MR_Word Brackets_40;
          MR_Word Var_42;

          ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, InnerType_13, &String0_37, &ArrayDims_38);
          TypeCtorInfo_19_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_19_46, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[17], ArrayDims_38, &RevBrackets_39);
          mercury__list__reverse_2_p_0(TypeCtorInfo_19_46, RevBrackets_39, &Brackets_40);
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (String0_37));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Brackets_40));
          }
          mercury__string__append_list_2_p_0(Var_42, &InnerTypeString_14);
        }
        mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.Ref<");
        mercury__io__write_string_3_p_0(InnerTypeString_14);
        mercury__io__write_string_3_p_0((MR_String) "> ");
      }
    }
    else
    {
      MR_String String_60;
      MR_Word ArrayDims_61;
      MR_Word Var_63;

      ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Type_11, &String_60, &ArrayDims_61);
      mercury__io__write_string_3_p_0(String_60);
      Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_63);
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    NameStr_70 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_10);
    MangledName_76 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_70);
    JavaSafeName_77 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_76);
    mercury__io__write_string_3_p_0(JavaSafeName_77);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_java__IntroducedFrom__pred__output_export_for_java__532__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Param_23 = ((MR_Word) (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__conv0_Param_23);
    ml_backend__mlds_to_java__output_export_for_java_5_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Param_23, (MR_Integer) 0)));
      MR_Word Var_86;
      MR_Word Var_85;

      (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Param_23, (MR_Integer) 1)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Param_23, (MR_Integer) 2)));
      (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Var_87)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Var_87, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if ((env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__succeeded)
      {
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Var_87, (MR_Integer) 1)));
        ml_backend__mlds_to_java__output_export_for_java_5_p_0_2(env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, &(env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__conv0_Param_23, (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Parameters_16, ml_backend__mlds_to_java__output_export_for_java_5_p_0_4, env_ptr);
        }
        (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_for_java_5_p_0(
  MR_Word Info0_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    struct ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0_s env;

    {
      MR_Word Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0)));
      MR_String ExportName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 1)));
      MR_Word MLDS_Signature_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3)));
      MR_Word UnivQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 4)));
      MR_Word ReturnTypes_17;
      MR_Word Info_18;
      MR_Word Var_30;
      MR_String Var_49;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_String Var_63;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2)));
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 5)));
      MR_Word Var_65;
      MR_Word Var_67;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_14[1]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_export_for_java_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Lang_10));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140ml_backend.mlds_to_java.output_export_for_java\'/5", (MR_String) "foreign_export for language other than Java.");
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "public static ");
      ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(UnivQTVars_14);
      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      (env).ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__Parameters_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0)));
      ReturnTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 0)));
      Var_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 2)));
      Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 3)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 4)));
      Var_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 5)))) & (MR_Integer) 1);
      Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_6, (MR_Integer) 6)));
      {
        Info_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Info_18, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Info_18, 1) = ((MR_Box) ((Var_59 | ((((Var_60 << (MR_Integer) 1)) | ((Var_61 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), Info_18, 2) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), Info_18, 3) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), Info_18, 4) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), Info_18, 5) = ((MR_Box) (((MR_Integer) 0 | ((Var_66 << (MR_Integer) 1)))));
        MR_hl_field(MR_mktag(0), Info_18, 6) = ((MR_Box) (UnivQTVars_14));
      }
      if ((ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "void");
      }
      else
      {
        MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1)));
        MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0)));

        if ((Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__mlds_to_java__output_type_for_java_4_p_0(Info_18, Var_81);
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "java.lang.Object []");
        }
      }
      Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " ", ExportName_11);
      mercury__io__write_string_3_p_0(Var_49);
      ml_backend__mlds_to_java__output_export_for_java_5_p_0_5(&env);
      if ((env).ml_backend__mlds_to_java__output_export_for_java_5_p_0_env_0__succeeded)
        if ((ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__mlds_to_java__output_export_ref_out_5_p_0(Info_18, Indent_7, Export_8);
        else
        {
          MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1)));
          MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0)));

          if ((Var_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ml_backend__mlds_to_java__output_export_ref_out_5_p_0(Info_18, Indent_7, Export_8);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_export_for_java\'/5", (MR_String) "multiple return values");
              return;
            }
          }
        }
      else
        ml_backend__mlds_to_java__output_export_no_ref_out_5_p_0(Info_18, Indent_7, Export_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_type_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6)
{
  {
    MR_String String_18;
    MR_Word ArrayDims_19;
    MR_Word Var_21;

    ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_5, MLDS_Type_6, &String_18, &ArrayDims_19);
    mercury__io__write_string_3_p_0(String_18);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_21);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__5_5;

    ml_backend__mlds_to_java__assign_ref_output_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_export_param_ref_out_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_java__has_ptr_type_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_53_53 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
    MR_Word QualFuncName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2)));
    MR_Word MLDS_Signature_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3)));
    MR_Word Parameters_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0)));
    MR_Word ReturnTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1)));
    MR_Word RefParams_18;
    MR_Word NonRefParams_19;
    MR_Integer FirstRefArg_20;
    MR_Integer Var_31;
    MR_Word Var_41;
    MR_Integer Var_43;
    MR_Word _Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0)));
    MR_String _ExportName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 1)));
    MR_Word _UnivQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 4)));
    MR_Word _Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 5)));
    MR_Integer Var_21;
    MR_Box conv2_Var_21;
    MR_Box conv1_STATE_VARIABLE_IO_42_42;

    mercury__list__filter_4_p_0(TypeCtorInfo_53_53, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[16], Parameters_16, &RefParams_18, &NonRefParams_19);
    mercury__io__write_string_3_p_0((MR_String) "(");
    if (!((Parameters_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_73;
      MR_Integer Var_75;

      mercury__io__nl_2_p_0();
      Var_75 = (Indent_7 + (MR_Integer) 1);
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[9]));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_export_ref_out_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Var_75));
      }
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, Parameters_16, (MR_String) ",\n", Var_73);
    }
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_31 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "java.lang.Object[] results = ");
    ml_backend__mlds_to_java__write_export_call_for_java_4_p_0(QualFuncName_12, NonRefParams_19);
    succeeded = (ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      FirstRefArg_20 = (MR_Integer) 0;
    else
    {
      MR_Word Var_37;
      MR_Word Var_38;

      succeeded = ((MR_tag((MR_Word) ReturnTypes_17)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0)));
        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1)));
        succeeded = (Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (succeeded)
          succeeded = (Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      if (succeeded)
        FirstRefArg_20 = (MR_Integer) 1;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_export_ref_out\'/5", (MR_String) "unexpected ReturnTypes");
          return;
        }
      }
    }
    Var_43 = (Indent_7 + (MR_Integer) 1);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_export_ref_out_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Var_43));
    }
    mercury__list__foldl2_6_p_2(TypeCtorInfo_53_53, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_41, RefParams_18, ((MR_Box) (FirstRefArg_20)), &conv2_Var_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_42_42);
    Var_21 = ((MR_Integer) conv2_Var_21);
    switch (FirstRefArg_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_45 = (Indent_7 + (MR_Integer) 1);

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_45);
          mercury__io__write_string_3_p_0((MR_String) "return ((java.lang.Boolean) results[0]).booleanValue();\n");
        }
        break;
    }
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_no_ref_out_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_param_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_export_no_ref_out_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    MR_Word QualFuncName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2)));
    MR_Word MLDS_Signature_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3)));
    MR_Word Parameters_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0)));
    MR_Word ReturnTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1)));
    MR_Integer Var_24 = (Indent_7 + (MR_Integer) 1);
    MR_Integer Var_31;
    MR_Word _Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0)));
    MR_String _ExportName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 1)));
    MR_Word _UnivQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 4)));
    MR_Word _Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 5)));

    mercury__io__write_char_3_p_0((MR_Char) 40);
    if (!((Parameters_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_61;
      MR_Integer Var_63;

      mercury__io__nl_2_p_0();
      Var_63 = (Var_24 + (MR_Integer) 1);
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[9]));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_export_no_ref_out_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (Var_63));
      }
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, Parameters_16, (MR_String) ",\n", Var_61);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_31 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_31);
    if (!((ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0)));

      if ((Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String String_84;
        MR_Word ArrayDims_85;
        MR_Word Var_87;

        mercury__io__write_string_3_p_0((MR_String) "return (");
        ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, Var_48, &String_84, &ArrayDims_85);
        mercury__io__write_string_3_p_0(String_84);
        Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_87);
        mercury__io__write_string_3_p_0((MR_String) ") ");
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "return ");
      }
    }
    ml_backend__mlds_to_java__write_export_call_for_java_4_p_0(QualFuncName_12, Parameters_16);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__write_export_call_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__write_argument_name_for_java_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__write_export_call_for_java_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 0)));
    MR_Word FuncName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 1)));
    MR_String QualifierString_31;
    MR_Word OuterName_38;
    MR_Word InnerName_39;
    MR_String MangledOuterName_40;
    MR_String MangledSuffix_41;

    OuterName_38 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_8);
    InnerName_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_38, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_40);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_38, InnerName_39);
    if (succeeded)
      MangledSuffix_41 = (MR_String) "";
    else
    {
      MR_Word Suffix_42;
      MR_String MangledSuffix0_43;
      MR_Word Var_46;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_39, OuterName_38, &Suffix_42);
      Var_46 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0((MR_Integer) 0);
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_42, Var_46, (MR_String) ".", &MangledSuffix0_43);
      MangledSuffix_41 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_43);
    }
    QualifierString_31 = mercury__string__f_43_43_2_f_0(MangledOuterName_40, MangledSuffix_41);
    mercury__io__write_string_3_p_0(QualifierString_31);
    mercury__io__write_string_3_p_0((MR_String) ".");
    if (((MR_tag((MR_Word) FuncName_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Name_62 = ((MR_String) (MR_hl_field(MR_mktag(1), FuncName_9, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0(Name_62);
    }
    else
    {
      MR_Word PlainFuncName_54 = (MR_Word) MR_body(((MR_Word) FuncName_9), (MR_Integer) 0);
      MR_Word FuncLabel_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_54, (MR_Integer) 0)));
      MR_Word ProcLabel_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_55, (MR_Integer) 0)));
      MR_Word MaybeAux_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncLabel_55, (MR_Integer) 1)));
      MR_Word PredLabel_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_57, (MR_Integer) 0)));
      MR_Integer ProcId_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_57, (MR_Integer) 1)));
      MR_Integer ModeNum_61;
      MR_String Var_70;
      MR_String Var_74;
      MR_Word _PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), PlainFuncName_54, (MR_Integer) 1)));

      ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(PredLabel_59);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_60, &ModeNum_61);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ModeNum_61, &Var_74);
      mercury__io__write_string_3_p_0(Var_74);
      Var_70 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_58);
      mercury__io__write_string_3_p_0(Var_70);
    }
    mercury__io__write_char_3_p_0((MR_Char) 40);
    mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, Parameters_6, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[15]);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_body_code_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ForeignBodyCode_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 0)));
    MR_Word LiteralOrInclude_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 1)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 2)));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_java_body_code\'/5", (MR_String) "foreign code other than Java");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        if (((MR_tag((MR_Word) LiteralOrInclude_11)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String IncludeFile_26 = ((MR_String) (MR_hl_field(MR_mktag(1), LiteralOrInclude_11, (MR_Integer) 0)));
          MR_String SourceFileName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          MR_String IncludePath_28;
          MR_Word Var_29;
          MR_Word Var_31;
          MR_Word Var_36;
          MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          MR_Word Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          MR_Word Var_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          MR_Word Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_String Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_String Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;

          parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_27, IncludeFile_26, &IncludePath_28);
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (IncludePath_28));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_29, (MR_Integer) 0, Var_31);
          libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_28);
          mercury__io__nl_2_p_0();
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          Var_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_36, (MR_Integer) 1, Context_12);
        }
        else
        {
          MR_String Code_25 = ((MR_String) (MR_hl_field(MR_mktag(0), LiteralOrInclude_11, (MR_Integer) 0)));

          ml_backend__mlds_to_java__write_string_with_context_block_6_p_0(Info_6, Indent_7, Code_25, Context_12);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_decl_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word DeclCode_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 0)));
    MR_Word LiteralOrInclude_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 2)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 3)));
    MR_Word _IsLocal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 1)));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_java_decl\'/5", (MR_String) "foreign decl other than Java");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        if (((MR_tag((MR_Word) LiteralOrInclude_12)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String IncludeFile_27 = ((MR_String) (MR_hl_field(MR_mktag(1), LiteralOrInclude_12, (MR_Integer) 0)));
          MR_String SourceFileName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          MR_String IncludePath_29;
          MR_Word Var_30;
          MR_Word Var_32;
          MR_Word Var_37;
          MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          MR_Word Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          MR_Word Var_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          MR_Word Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_String Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_String Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;

          parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_28, IncludeFile_27, &IncludePath_29);
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (IncludePath_29));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_30, (MR_Integer) 0, Var_32);
          libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_29);
          mercury__io__nl_2_p_0();
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          Var_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_37, (MR_Integer) 1, Context_13);
        }
        else
        {
          MR_String Code_26 = ((MR_String) (MR_hl_field(MR_mktag(0), LiteralOrInclude_12, (MR_Integer) 0)));

          ml_backend__mlds_to_java__write_string_with_context_block_6_p_0(Info_6, Indent_7, Code_26, Context_13);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__write_string_with_context_block_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_N_10;
    MR_Char conv0_C_5;

    ml_backend__mlds_to_java__count_new_lines_5_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_STATE_VARIABLE_N_10, ((MR_Char) (MR_Word) wrapper_arg_4), &conv0_C_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_N_10));
    *wrapper_arg_5 = ((MR_Box) (MR_Word) (conv0_C_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__write_string_with_context_block_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_String Code_9,
  MR_Word Context_10)
{
  {
    MR_String File_12;
    MR_Integer Lines0_13;
    MR_Word ContextEnd_14;
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Word Var_24;
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_String Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Char Var_56;
    MR_Box conv3_Var_23;
    MR_Box conv2_Var_56;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_17, (MR_Integer) 0, Context_10);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0(Code_9);
    mercury__io__nl_2_p_0();
    File_12 = ((MR_String) (MR_hl_field(MR_mktag(0), Context_10, (MR_Integer) 0)));
    Lines0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Context_10, (MR_Integer) 1)));
    mercury__string__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[14], Code_9, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_23, ((MR_Box) (MR_Word) ((MR_Char) 120)), &conv2_Var_56);
    Var_23 = ((MR_Integer) conv3_Var_23);
    Var_56 = ((MR_Char) (MR_Word) conv2_Var_56);
    Var_22 = (Lines0_13 + Var_23);
    {
      ContextEnd_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ContextEnd_14, 0) = ((MR_Box) (File_12));
      MR_hl_field(MR_mktag(0), ContextEnd_14, 1) = ((MR_Box) (Var_22));
    }
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
    Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    ml_backend__mlds_to_java__output_context_for_java_5_p_0(Var_24, (MR_Integer) 1, ContextEnd_14);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_context_for_java_5_p_0(
  MR_Word OutputLineNumbers_6,
  MR_Word Marker_7,
  MR_Word ProgContext_8)
{
  {
    MR_bool succeeded;

    switch (OutputLineNumbers_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LastContext_10;
          MR_String File_11;
          MR_Integer Line_12;
          MR_Integer Var_17;

{
#define MR_PROC_LABEL ml_backend__mlds_to_java__output_context_for_java_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__output_context_for_java_5_p_0

	MR_Word X;

		{
X = ml_backend__mlds_to_java__mutable_variable_last_context;


		;}
#undef MR_PROC_LABEL
	 LastContext_10  = X;
}
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__output_context_for_java_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          mercury__term__context_file_2_p_0(ProgContext_8, &File_11);
          mercury__term__context_line_2_p_0(ProgContext_8, &Line_12);
          succeeded = (Marker_7 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ProgContext_8, LastContext_10);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_17 = (MR_Integer) 0;
              succeeded = (Line_12 > Var_17);
              if (succeeded)
              {
                succeeded = (strcmp(File_11, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
            }
            succeeded = !(succeeded);
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_String SafePath_13;
            MR_String Var_24;
            MR_String Var_40;

            mercury__string__replace_all_4_p_0(File_11, (MR_String) "\\u", (MR_String) "\\\\u", &SafePath_13);
            switch (Marker_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Var_24 = (MR_String) "MER_FOREIGN_BEGIN";
                break;
              case (MR_Integer) 2:
                Var_24 = (MR_String) "";
                break;
              case (MR_Integer) 1:
                Var_24 = (MR_String) "MER_FOREIGN_END";
                break;
            }
            mercury__io__write_string_3_p_0((MR_String) "// ");
            mercury__io__write_string_3_p_0(Var_24);
            mercury__io__write_string_3_p_0((MR_String) " ");
            mercury__io__write_string_3_p_0(SafePath_13);
            mercury__io__write_string_3_p_0((MR_String) ":");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], Line_12, &Var_40);
            mercury__io__write_string_3_p_0(Var_40);
            mercury__io__write_string_3_p_0((MR_String) "\n");
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__output_context_for_java_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__output_context_for_java_5_p_0

	MR_Word X;

	X =  ProgContext_8 ;
		{
ml_backend__mlds_to_java__mutable_variable_last_context = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL ml_backend__mlds_to_java__output_context_for_java_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                    "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
          }
          else
          {
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_env_var_definition_for_java_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv20_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv20_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv20_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv18_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv18_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv18_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_class_defn_for_java_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_function_defn_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_global_var_defn_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_java_body_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__3_3;

    ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv14_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_HeadVar__3_3;

    ml_backend__ml_rename_classes__rename_class_names_in_global_var_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv13_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__3_3;

    ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv12_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ClassDefn_25;
    MR_Word conv9_STATE_VARIABLE_Renaming_27;

    ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_p_0(((MR_Word) wrapper_arg_1), &conv10_STATE_VARIABLE_ClassDefn_25, ((MR_Word) wrapper_arg_3), &conv9_STATE_VARIABLE_Renaming_27);
    *wrapper_arg_2 = ((MR_Box) (conv10_STATE_VARIABLE_ClassDefn_25));
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Renaming_27));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ClassDefn_25;
    MR_Word conv6_STATE_VARIABLE_Renaming_27;

    ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_p_0(((MR_Word) wrapper_arg_1), &conv7_STATE_VARIABLE_ClassDefn_25, ((MR_Word) wrapper_arg_3), &conv6_STATE_VARIABLE_Renaming_27);
    *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_ClassDefn_25));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Renaming_27));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_ClassDefn_9;
    MR_Word conv3_STATE_VARIABLE_AddrOfMap_48;

    ml_backend__mlds_to_java__generate_addr_wrapper_class_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv4_ClassDefn_9, ((MR_Word) wrapper_arg_3), &conv3_STATE_VARIABLE_AddrOfMap_48);
    *wrapper_arg_2 = ((MR_Box) (conv4_ClassDefn_9));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_AddrOfMap_48));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_75;

    conv0_LambdaHeadVar__2_75 = ml_backend__mlds_to_java__IntroducedFrom__func__output_java_src_file__311__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_75));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_src_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_178_178;
    MR_Word TypeInfo_179_179;
    MR_Word TypeCtorInfo_184_184;
    MR_Word TypeCtorInfo_185_185;
    MR_Word TypeCtorInfo_193_193;
    MR_Word TypeCtorInfo_199_199;
    MR_Word TypeInfo_200_200;
    MR_Word TypeCtorInfo_228_228;
    MR_Word TypeCtorInfo_229_229;
    MR_Word TypeCtorInfo_230_230;
    MR_Word TypeInfo_240_240;
    MR_Word ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 0)));
    MR_Word Imports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 1)));
    MR_Word GlobalData_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 2)));
    MR_Word TypeDefns0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 3)));
    MR_Word TableStructDefns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 4)));
    MR_Word ProcDefns0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5)));
    MR_Word InitPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 6)));
    MR_Word FinalPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 7)));
    MR_Word AllForeignCode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 8)));
    MR_Word ExportedEnums_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 9)));
    MR_Word ScalarCellGroupMap_20;
    MR_Word VectorCellGroupMap_21;
    MR_Word RttiDefns0_23;
    MR_Word CellDefns0_24;
    MR_Word ClosureWrapperFuncDefns0_25;
    MR_Word MLDS_ModuleName_26;
    MR_Word ScalarCellGroups_28;
    MR_Word ScalarCellRows_29;
    MR_Word RevSeqNumsCodeAddrs_33;
    MR_Word RevCodeAddrs_34;
    MR_Word CodeAddrsMap_35;
    MR_Word CodeAddrsAssocList_36;
    MR_Word WrapperClassDefns0_37;
    MR_Word AddrOfMap_38;
    MR_Word TypeDefns1_39;
    MR_Word RenamingMap1_40;
    MR_Word WrapperClassDefns1_41;
    MR_Word RenamingMap_42;
    MR_Word TypeDefns_43;
    MR_Word WrapperClassDefns_44;
    MR_Word RttiDefns_45;
    MR_Word CellDefns_46;
    MR_Word TableStructDefns_47;
    MR_Word ClosureWrapperFuncDefns_48;
    MR_Word ProcDefns_49;
    MR_Word ForeignCode_51;
    MR_Word ForeignDeclCodes_52;
    MR_Word ForeignBodyCodes_53;
    MR_Word ExportDefns_55;
    MR_Word Globals_56;
    MR_String SourceFileName_57;
    MR_Word Info_58;
    MR_Word SortedFuncDefns_59;
    MR_Word SortedClassDefns_60;
    MR_Word EnvVarNamesSet0_61;
    MR_Word EnvVarNamesSet1_62;
    MR_Word EnvVarNamesSet_63;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_66_66;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_67_67;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_68_68;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_69_69;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_70_70;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_71_71;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_72_72;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_77_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_94;
    MR_Word Var_98;
    MR_Integer Var_100;
    MR_Integer Var_103;
    MR_Integer Var_108;
    MR_Integer Var_111;
    MR_Integer Var_114;
    MR_Word Var_115;
    MR_Integer Var_120;
    MR_Integer Var_125;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Integer Var_133;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Integer Var_141;
    MR_Integer Var_145;
    MR_Integer Var_150;
    MR_Integer Var_155;
    MR_Integer Var_160;
    MR_Word Var_167;
    MR_Integer Var_169;
    MR_Word _AllocIdMap_22;
    MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_77_77;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv5_AddrOfMap_38;
    MR_Box conv8_RenamingMap1_40;
    MR_Box conv11_RenamingMap_42;
    MR_Word _Imports_54;
    MR_Box conv15_STATE_VARIABLE_IO_99_99;
    MR_Box conv16_STATE_VARIABLE_IO_132_132;
    MR_Box conv17_STATE_VARIABLE_IO_140_140;
    MR_Box conv19_EnvVarNamesSet1_62;
    MR_Box conv21_EnvVarNamesSet_63;
    MR_Box conv22_STATE_VARIABLE_IO_168_168;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_12, &ScalarCellGroupMap_20, &VectorCellGroupMap_21, &_AllocIdMap_22, &RttiDefns0_23, &CellDefns0_24, &ClosureWrapperFuncDefns0_25);
    MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_10);
    STATE_VARIABLE_CodeAddrsInConsts_66_66 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
    ml_backend__mlds_to_target_util__method_ptrs_in_class_defns_3_p_0(TypeDefns0_13, STATE_VARIABLE_CodeAddrsInConsts_66_66, &STATE_VARIABLE_CodeAddrsInConsts_67_67);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns0_23, STATE_VARIABLE_CodeAddrsInConsts_67_67, &STATE_VARIABLE_CodeAddrsInConsts_68_68);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns0_24, STATE_VARIABLE_CodeAddrsInConsts_68_68, &STATE_VARIABLE_CodeAddrsInConsts_69_69);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns0_14, STATE_VARIABLE_CodeAddrsInConsts_69_69, &STATE_VARIABLE_CodeAddrsInConsts_70_70);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns0_25, STATE_VARIABLE_CodeAddrsInConsts_70_70, &STATE_VARIABLE_CodeAddrsInConsts_71_71);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns0_15, STATE_VARIABLE_CodeAddrsInConsts_71_71, &STATE_VARIABLE_CodeAddrsInConsts_72_72);
    TypeCtorInfo_178_178 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
    mercury__map__values_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, TypeCtorInfo_178_178, ScalarCellGroupMap_20, &ScalarCellGroups_28);
    TypeInfo_179_179 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[0];
    ScalarCellRows_29 = mercury__list__map_2_f_0(TypeCtorInfo_178_178, TypeInfo_179_179, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[8], ScalarCellGroups_28);
    mercury__list__foldl_4_p_0(TypeInfo_179_179, (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[9], ScalarCellRows_29, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_72_72)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_77_77);
    STATE_VARIABLE_CodeAddrsInConsts_77_77 = ((MR_Word) conv2_STATE_VARIABLE_CodeAddrsInConsts_77_77);
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_77_77, (MR_Integer) 0)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_77_77, (MR_Integer) 1)));
    RevSeqNumsCodeAddrs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_77_77, (MR_Integer) 2)));
    TypeCtorInfo_184_184 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    TypeCtorInfo_185_185 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0;
    mercury__assoc_list__values_2_p_0(TypeCtorInfo_184_184, TypeCtorInfo_185_185, RevSeqNumsCodeAddrs_33, &RevCodeAddrs_34);
    Var_78 = mercury__multi_map__init_0_f_0(TypeCtorInfo_184_184, TypeCtorInfo_185_185);
    ml_backend__mlds_to_java__make_code_addr_map_for_java_3_p_0(RevCodeAddrs_34, Var_78, &CodeAddrsMap_35);
    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_184_184, (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[1], CodeAddrsMap_35, &CodeAddrsAssocList_36);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (MLDS_ModuleName_26));
    }
    Var_80 = mercury__map__init_0_f_0(TypeCtorInfo_185_185, (MR_Word) &ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0);
    TypeCtorInfo_193_193 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0;
    mercury__list__map_foldl_5_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_2[0], TypeCtorInfo_193_193, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[1], Var_79, CodeAddrsAssocList_36, &WrapperClassDefns0_37, ((MR_Box) (Var_80)), &conv5_AddrOfMap_38);
    AddrOfMap_38 = ((MR_Word) conv5_AddrOfMap_38);
    TypeCtorInfo_199_199 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    Var_82 = mercury__map__init_0_f_0(TypeCtorInfo_199_199, TypeCtorInfo_199_199);
    TypeInfo_200_200 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[2];
    mercury__list__map_foldl_5_p_0(TypeCtorInfo_193_193, TypeCtorInfo_193_193, TypeInfo_200_200, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[10], TypeDefns0_13, &TypeDefns1_39, ((MR_Box) (Var_82)), &conv8_RenamingMap1_40);
    RenamingMap1_40 = ((MR_Word) conv8_RenamingMap1_40);
    mercury__list__map_foldl_5_p_0(TypeCtorInfo_193_193, TypeCtorInfo_193_193, TypeInfo_200_200, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[11], WrapperClassDefns0_37, &WrapperClassDefns1_41, ((MR_Box) (RenamingMap1_40)), &conv11_RenamingMap_42);
    RenamingMap_42 = ((MR_Word) conv11_RenamingMap_42);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_199_199, TypeCtorInfo_199_199, RenamingMap_42);
    if (succeeded)
    {
      TypeDefns_43 = TypeDefns0_13;
      WrapperClassDefns_44 = WrapperClassDefns0_37;
      RttiDefns_45 = RttiDefns0_23;
      CellDefns_46 = CellDefns0_24;
      TableStructDefns_47 = TableStructDefns0_14;
      ClosureWrapperFuncDefns_48 = ClosureWrapperFuncDefns0_25;
      ProcDefns_49 = ProcDefns0_15;
    }
    else
    {
      MR_Word TypeCtorInfo_211_211;
      MR_Word TypeCtorInfo_218_218;
      MR_Word Renaming_50;
      MR_Word Var_84;
      MR_Word Var_86;
      MR_Word Var_89;

      {
        Renaming_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Renaming_50, 0) = ((MR_Box) (MLDS_ModuleName_26));
        MR_hl_field(MR_mktag(0), Renaming_50, 1) = ((MR_Box) (RenamingMap_42));
      }
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[4]));
        MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_6));
        MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Renaming_50));
      }
      mercury__list__map_3_p_0(TypeCtorInfo_193_193, TypeCtorInfo_193_193, Var_84, TypeDefns1_39, &TypeDefns_43);
      mercury__list__map_3_p_0(TypeCtorInfo_193_193, TypeCtorInfo_193_193, Var_84, WrapperClassDefns1_41, &WrapperClassDefns_44);
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[5]));
        MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_7));
        MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (Renaming_50));
      }
      TypeCtorInfo_211_211 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
      mercury__list__map_3_p_0(TypeCtorInfo_211_211, TypeCtorInfo_211_211, Var_86, RttiDefns0_23, &RttiDefns_45);
      mercury__list__map_3_p_0(TypeCtorInfo_211_211, TypeCtorInfo_211_211, Var_86, CellDefns0_24, &CellDefns_46);
      mercury__list__map_3_p_0(TypeCtorInfo_211_211, TypeCtorInfo_211_211, Var_86, TableStructDefns0_14, &TableStructDefns_47);
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[6]));
        MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_8));
        MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (Renaming_50));
      }
      TypeCtorInfo_218_218 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
      mercury__list__map_3_p_0(TypeCtorInfo_218_218, TypeCtorInfo_218_218, Var_89, ClosureWrapperFuncDefns0_25, &ClosureWrapperFuncDefns_48);
      mercury__list__map_3_p_0(TypeCtorInfo_218_218, TypeCtorInfo_218_218, Var_89, ProcDefns0_15, &ProcDefns_49);
    }
    ForeignCode_51 = ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_f_0(AllForeignCode_18);
    ForeignDeclCodes_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignCode_51, (MR_Integer) 0)));
    ForeignBodyCodes_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignCode_51, (MR_Integer) 1)));
    _Imports_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignCode_51, (MR_Integer) 2)));
    ExportDefns_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignCode_51, (MR_Integer) 3)));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_56);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_56, ModuleName_10, &SourceFileName_57);
    Info_58 = ml_backend__mlds_to_java__init_java_out_info_3_f_0(ModuleInfo_6, SourceFileName_57, AddrOfMap_38);
    ml_backend__mlds_to_java__output_src_start_for_java_8_p_0(Info_58, Indent_7, ModuleName_10, Imports_11, ForeignDeclCodes_52, ProcDefns_49);
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (Info_58));
      MR_hl_field(MR_mktag(0), Var_94, 4) = ((MR_Box) (Indent_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ForeignBodyCodes_53, (MR_String) "\n", Var_94);
    mercury__io__write_string_3_p_0((MR_String) "\n// RttiDefns\n");
    Var_100 = (Indent_7 + (MR_Integer) 1);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[1]));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_10));
      MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (Info_58));
      MR_hl_field(MR_mktag(0), Var_98, 4) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), Var_98, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    TypeCtorInfo_228_228 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    TypeCtorInfo_229_229 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2(TypeCtorInfo_228_228, TypeCtorInfo_229_229, Var_98, RttiDefns_45, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_99_99);
    Var_103 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_rtti_assignments_for_java_5_p_0(Info_58, Var_103, RttiDefns_45);
    mercury__io__write_string_3_p_0((MR_String) "\n// Cell and tabling definitions\n");
    Var_108 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_global_var_decls_for_java_5_p_0(Info_58, Var_108, CellDefns_46);
    Var_111 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_global_var_decls_for_java_5_p_0(Info_58, Var_111, TableStructDefns_47);
    Var_114 = (Indent_7 + (MR_Integer) 1);
    Var_115 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_228_228, CellDefns_46, TableStructDefns_47);
    ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0(Info_58, Var_114, Var_115);
    mercury__io__write_string_3_p_0((MR_String) "\n// Scalar common data\n");
    Var_120 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0(Info_58, Var_120, ScalarCellGroupMap_20);
    mercury__io__write_string_3_p_0((MR_String) "\n// Vector common data\n");
    Var_125 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_vector_common_data_for_java_5_p_0(Info_58, Var_125, VectorCellGroupMap_21);
    mercury__io__write_string_3_p_0((MR_String) "\n// Function definitions\n");
    TypeCtorInfo_230_230 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    Var_130 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_230_230, ClosureWrapperFuncDefns_48, ProcDefns_49);
    mercury__list__sort_2_p_0(TypeCtorInfo_230_230, Var_130, &SortedFuncDefns_59);
    Var_133 = (Indent_7 + (MR_Integer) 1);
    {
      Var_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[2]));
      MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_11));
      MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_131, 3) = ((MR_Box) (Info_58));
      MR_hl_field(MR_mktag(0), Var_131, 4) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), Var_131, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__list__foldl_4_p_2(TypeCtorInfo_230_230, TypeCtorInfo_229_229, Var_131, SortedFuncDefns_59, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_132_132);
    mercury__io__write_string_3_p_0((MR_String) "\n// Class definitions\n");
    Var_138 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_193_193, WrapperClassDefns_44, TypeDefns_43);
    mercury__list__sort_2_p_0(TypeCtorInfo_193_193, Var_138, &SortedClassDefns_60);
    Var_141 = (Indent_7 + (MR_Integer) 1);
    {
      Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_12));
      MR_hl_field(MR_mktag(0), Var_139, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_139, 3) = ((MR_Box) (Info_58));
      MR_hl_field(MR_mktag(0), Var_139, 4) = ((MR_Box) (Var_141));
    }
    mercury__list__foldl_4_p_2(TypeCtorInfo_193_193, TypeCtorInfo_229_229, Var_139, SortedClassDefns_60, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_140_140);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportDefns\n");
    Var_145 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_exports_for_java_5_p_0(Info_58, Var_145, ExportDefns_55);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportedEnums\n");
    Var_150 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_exported_enums_for_java_5_p_0(Info_58, Var_150, ExportedEnums_19);
    mercury__io__write_string_3_p_0((MR_String) "\n// InitPreds\n");
    Var_155 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_inits_for_java_4_p_0(Var_155, InitPreds_16);
    mercury__io__write_string_3_p_0((MR_String) "\n// FinalPreds\n");
    Var_160 = (Indent_7 + (MR_Integer) 1);
    ml_backend__mlds_to_java__output_finals_for_java_4_p_0(Var_160, FinalPreds_17);
    mercury__io__write_string_3_p_0((MR_String) "\n// EnvVarNames\n");
    mercury__set__init_1_p_0(TypeCtorInfo_199_199, &EnvVarNamesSet0_61);
    TypeInfo_240_240 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[2];
    mercury__list__foldl_4_p_0(TypeCtorInfo_230_230, TypeInfo_240_240, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[12], ProcDefns_49, ((MR_Box) (EnvVarNamesSet0_61)), &conv19_EnvVarNamesSet1_62);
    EnvVarNamesSet1_62 = ((MR_Word) conv19_EnvVarNamesSet1_62);
    mercury__list__foldl_4_p_0(TypeCtorInfo_230_230, TypeInfo_240_240, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[13], ClosureWrapperFuncDefns_48, ((MR_Box) (EnvVarNamesSet1_62)), &conv21_EnvVarNamesSet_63);
    EnvVarNamesSet_63 = ((MR_Word) conv21_EnvVarNamesSet_63);
    Var_169 = (Indent_7 + (MR_Integer) 1);
    {
      Var_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_src_file_5_p_0_15));
      MR_hl_field(MR_mktag(0), Var_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_167, 3) = ((MR_Box) (Var_169));
    }
    mercury__set__foldl_4_p_2(TypeCtorInfo_199_199, TypeCtorInfo_229_229, Var_167, EnvVarNamesSet_63, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_168_168);
    ml_backend__mlds_to_java__output_src_end_for_java_4_p_0(Indent_7, ModuleName_10);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java__init_java_out_info_3_f_0(
  MR_Word ModuleInfo_5,
  MR_String SourceFileName_6,
  MR_Word AddrOfMap_7)
{
  {
    MR_Word Info_8;
    MR_Word Globals_9;
    MR_Word AutoComments_10;
    MR_Word LineNumbers_11;
    MR_Word ForeignLineNumbers_12;
    MR_Word ModuleName_13;
    MR_Word MLDS_ModuleName_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 153, &AutoComments_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 150, &LineNumbers_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 151, &ForeignLineNumbers_12);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_13);
    MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_13);
    {
      Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_8, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Info_8, 1) = ((MR_Box) ((AutoComments_10 | ((((LineNumbers_11 << (MR_Integer) 1)) | ((ForeignLineNumbers_12 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), Info_8, 2) = ((MR_Box) (MLDS_ModuleName_14));
      MR_hl_field(MR_mktag(0), Info_8, 3) = ((MR_Box) (SourceFileName_6));
      MR_hl_field(MR_mktag(0), Info_8, 4) = ((MR_Box) (AddrOfMap_7));
      MR_hl_field(MR_mktag(0), Info_8, 5) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), Info_8, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return Info_8;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_rtti_defns_assignments_for_java_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_rtti_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8)
{
  if (!((GlobalVarDefns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Word OrderedDefns_12;
    MR_Word Var_18;
    MR_Integer Var_20;
    MR_Box conv0_STATE_VARIABLE_IO_19_19;

    OrderedDefns_12 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(GlobalVarDefns_8);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_20 = (Indent_7 + (MR_Integer) 1);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_rtti_assignments_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Var_20));
    }
    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds_to_java_scalar_common_1[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_18, OrderedDefns_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19_19);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_common_data_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_vector_cell_group_for_java_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_vector_common_data_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word VectorCellGroupMap_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_vector_common_data_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_12, VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_call_scalar_init_method_for_java_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv5_HeadVar__6_6;

    ml_backend__mlds_to_java__output_scalar_init_method_for_java_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv5_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_Graph_29;
    MR_Word conv0_STATE_VARIABLE_Map_31;

    ml_backend__mlds_to_java__output_scalar_defns_for_java_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_Graph_29, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Map_31);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Graph_29));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Map_31));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ScalarCellGroupMap_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_49_49;
    MR_Word TypeCtorInfo_55_55;
    MR_Word Graph_10;
    MR_Word Map_11;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv4_Graph_10;
    MR_Box conv3_Map_11;
    MR_Box conv2_STATE_VARIABLE_IO_21_21;
    MR_Word SortedScalars0_12;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Indent_7));
    }
    TypeCtorInfo_49_49 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;
    Var_19 = mercury__digraph__init_0_f_0(TypeCtorInfo_49_49);
    Var_20 = mercury__map__init_0_f_0(TypeCtorInfo_49_49, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
    TypeCtorInfo_55_55 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__map__foldl3_8_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[4], (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[3], TypeCtorInfo_55_55, Var_18, ScalarCellGroupMap_8, ((MR_Box) (Var_19)), &conv4_Graph_10, ((MR_Box) (Var_20)), &conv3_Map_11, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_21_21);
    Graph_10 = ((MR_Word) conv4_Graph_10);
    Map_11 = ((MR_Word) conv3_Map_11);
    succeeded = mercury__digraph__tsort_2_p_0(TypeCtorInfo_49_49, Graph_10, &SortedScalars0_12);
    if (succeeded)
    {
      MR_Word SortedScalars_13;
      MR_Word ScalarChunks_14;
      MR_Integer NumChunks_15;
      MR_Word Var_23;
      MR_Word Var_29;
      MR_Integer Var_31;
      MR_Integer Var_33;
      MR_Box conv7_NumChunks_15;
      MR_Box conv6_STATE_VARIABLE_IO_25_25;
      MR_Box conv8_STATE_VARIABLE_IO_32_32;

      mercury__list__reverse_2_p_0(TypeCtorInfo_49_49, SortedScalars0_12, &SortedScalars_13);
      mercury__list__chunk_3_p_0(TypeCtorInfo_49_49, SortedScalars_13, (MR_Integer) 1000, &ScalarChunks_14);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Indent_7));
        MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Map_11));
      }
      mercury__list__foldl2_6_p_2((MR_Word) &ml_backend__mlds_to_java_scalar_common_1[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_55_55, Var_23, ScalarChunks_14, ((MR_Box) ((MR_Integer) 0)), &conv7_NumChunks_15, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_25_25);
      NumChunks_15 = ((MR_Integer) conv7_NumChunks_15);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "static {\n");
      Var_33 = (Indent_7 + (MR_Integer) 1);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_scalar_common_data_for_java_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_33));
      }
      Var_31 = (NumChunks_15 - (MR_Integer) 1);
      mercury__int__fold_up_5_p_2(TypeCtorInfo_55_55, Var_29, (MR_Integer) 0, Var_31, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_32_32);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_scalar_common_data_for_java\'/5", (MR_String) "digraph.tsort failed");
        return;
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_call_init_global_var_method_for_java_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__5_5;

    ml_backend__mlds_to_java__output_init_global_var_method_for_java_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8)
{
  {
    MR_Word TypeCtorInfo_39_39;
    MR_Word DefnChunks_10;
    MR_Integer NumChunks_11;
    MR_Word Var_15;
    MR_Word Var_21;
    MR_Integer Var_23;
    MR_Integer Var_25;
    MR_Box conv2_NumChunks_11;
    MR_Box conv1_STATE_VARIABLE_IO_17_17;
    MR_Box conv3_STATE_VARIABLE_IO_24_24;

    mercury__list__chunk_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, GlobalVarDefns_8, (MR_Integer) 1000, &DefnChunks_10);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Indent_7));
    }
    TypeCtorInfo_39_39 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl2_6_p_2((MR_Word) &ml_backend__mlds_to_java_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_39_39, Var_15, DefnChunks_10, ((MR_Box) ((MR_Integer) 0)), &conv2_NumChunks_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    NumChunks_11 = ((MR_Integer) conv2_NumChunks_11);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_25 = (Indent_7 + (MR_Integer) 1);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_global_var_assignments_for_java_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Var_25));
    }
    Var_23 = (NumChunks_11 - (MR_Integer) 1);
    mercury__int__fold_up_5_p_2(TypeCtorInfo_39_39, Var_21, (MR_Integer) 0, Var_23, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_24_24);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_decls_for_java_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word GlobalVarDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word GlobalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 0)));
      MR_Word Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 2)));
      MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 3)));
      MR_Word Access_34;
      MR_Word Constness_35;
      MR_String String_85;
      MR_Word ArrayDims_86;
      MR_Word Var_88;
      MR_Word _Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 1)));
      MR_Word _Initializer_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 4)));
      MR_Word _GCStmt_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 5)));
      MR_Word next_value_of_HeadVar__3_3;

      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_2);
      Access_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 0)));
      Constness_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 1)));
      switch (Access_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "private ");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "public ");
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "static ");
      succeeded = (Constness_35 == (MR_Integer) 1);
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "final ");
      }
      else
      {
      }
      ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_1, Type_19, &String_85, &ArrayDims_86);
      mercury__io__write_string_3_p_0(String_85);
      Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ArrayDims_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_88);
      mercury__io__write_char_3_p_0((MR_Char) 32);
      ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(Name_16);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = GlobalVarDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6,
  MR_String * String_7,
  MR_Word * ArrayDims_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) MLDS_Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MLDS_Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *String_7 = (MR_String) "jmercury.runtime.Commit";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              *String_7 = (MR_String) "boolean";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "int";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              *String_7 = (MR_String) "int";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              *String_7 = (MR_String) "double";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              *String_7 = (MR_String) "int";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 6:
            {
              *String_7 = (MR_String) "/* generic_type */ java.lang.Object";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 7:
            {
              *String_7 = (MR_String) "/* env_ptr */ java.lang.Object";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 8:
            {
              *String_7 = (MR_String) "jmercury.runtime.TypeInfo";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 9:
            {
              *String_7 = (MR_String) "jmercury.runtime.PseudoTypeInfo";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.type_to_string_for_java\'/4", (MR_String) "unknown type");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Arity_25;
          MR_Word Var_41 = (MR_Word) MR_body(((MR_Word) MLDS_Type_6), (MR_Integer) 1);
          MR_Word Name_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
          MR_Word _ClassKind_26;

          Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
          _ClassKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 2)));
          ml_backend__mlds_to_java__qual_class_name_to_string_for_java_3_p_0(Name_57, Arity_25, String_7);
          *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          *String_7 = (MR_String) "jmercury.runtime.MethodPtr";
          *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1)));
              MR_Word CtorCat_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 2)));
              MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 3)));
              MR_String SubstituteName_12;
              MR_Word ArrayDims0_13;

              if (((((MR_tag((MR_Word) CtorCat_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word CtorCatSystem_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_10, (MR_Integer) 1)));

                SubstituteName_12 = ((&ml_backend__mlds_to_java_vector_common_9[8 + CtorCatSystem_70]))->ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_0;
                ArrayDims0_13 = ((&ml_backend__mlds_to_java_vector_common_9[8 + CtorCatSystem_70]))->ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_1;
                succeeded = MR_TRUE;
              }
              else
              if (((((MR_tag((MR_Word) CtorCat_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
              {
                MR_Word CtorCatUser_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_10, (MR_Integer) 1)));
                MR_Word Var_78;

                succeeded = (CtorCatUser_71 == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_78 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_78);
                  if (succeeded)
                  {
                    SubstituteName_12 = (MR_String) "jmercury.runtime.TypeInfo_Struct";
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_79;

                    Var_79 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_79);
                    if (succeeded)
                    {
                      SubstituteName_12 = (MR_String) "jmercury.runtime.PseudoTypeInfo";
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word Var_80;

                      Var_80 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_80);
                      if (succeeded)
                      {
                        SubstituteName_12 = (MR_String) "jmercury.runtime.TypeCtorInfo_Struct";
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    ArrayDims0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                *String_7 = SubstituteName_12;
                *ArrayDims_8 = ArrayDims0_13;
              }
              else
              {
                succeeded = (CtorCat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                if (succeeded)
                {
                  *String_7 = (MR_String) "/* builtin_dummy */ java.lang.Object";
                  *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                else
                {
                  MR_Word Var_64;

                  Var_64 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_64);
                  if (succeeded)
                  {
                    *String_7 = (MR_String) "/* c_pointer */ java.lang.Object";
                    *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  else
                    ml_backend__mlds_to_java__mercury_type_to_string_for_java_5_p_0(Info_5, Type_9, CtorCat_10, String_7, ArrayDims_8);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ElementType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1)));
              MR_Word Var_49;
              MR_Word Var_15;
              MR_Word Var_16;

              succeeded = ((((MR_tag((MR_Word) ElementType_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 1)));
                Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 2)));
                Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 3)));
                succeeded = (Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              if (succeeded)
              {
                *String_7 = (MR_String) "/* Array */ java.lang.Object";
                *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_String Var_17;
                MR_String Var_18;
                MR_String Var_19;

                succeeded = ml_backend__mlds_to_java__java_builtin_type_4_p_0(ElementType_14, &Var_17, &Var_18, &Var_19);
                if (succeeded)
                {
                  MR_Word ArrayDims0_53;

                  ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_5, ElementType_14, String_7, &ArrayDims0_53);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_53));
                  }
                }
                else
                {
                  *String_7 = (MR_String) "java.lang.Object";
                  *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24]);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "jmercury.runtime.MethodPtr";
              *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ForeignType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ForeignType_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.type_to_string_for_java\'/4", (MR_String) "c foreign_type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ForeignType_20, (MR_Integer) 0)));

                    *String_7 = (MR_String) Var_48;
                    *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.type_to_string_for_java\'/4", (MR_String) "csharp foreign_type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.type_to_string_for_java\'/4", (MR_String) "erlang foreign_type");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1)));
              MR_Word ArrayDims0_60;

              ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_5, Type_59, String_7, &ArrayDims0_60);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_60));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArrayDims0_62;

              ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), String_7, &ArrayDims0_62);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_62));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Type_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1)));
              MR_Word next_value_of_MLDS_Type_6 = Type_58;

              // direct tailcall eliminated
              MLDS_Type_6 = next_value_of_MLDS_Type_6;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word RttiIdMaybeElement_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1)));
              MR_Word IsArray_31;

              backend_libs__rtti__rtti_id_maybe_element_java_type_3_p_0(RttiIdMaybeElement_30, String_7, &IsArray_31);
              switch (IsArray_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24]);
                  }
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TablingId_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1)));
              MR_Word IsArray_63;

              backend_libs__rtti__tabling_id_java_type_3_p_0(TablingId_32, String_7, &IsArray_63);
              switch (IsArray_63) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24]);
                  }
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__mercury_type_to_string_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word CtorCat_8,
  MR_String * String_9,
  MR_Word * ArrayDims_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) CtorCat_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *String_9 = (MR_String) "/* closure */ java.lang.Object";
              *ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24]);
            }
            break;
          case (MR_Integer) 1:
            {
              *String_9 = (MR_String) "/* tuple */ java.lang.Object";
              *ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[24]);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtor_69;
              MR_Word ArgsTypes_70;
              MR_Word ClassName_71;
              MR_Integer ClassArity_72;
              MR_Word ClassKind_74;
              MR_Word MLDS_Type_75;
              MR_String TypeString_76;
              MR_Word OutputGenerics_77;
              MR_Word Var_79;
              MR_Word Var_73;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_String Var_85;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_88;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_69, &ArgsTypes_70);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_69, &ClassName_71, &ClassArity_72);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorCat_8, (MR_Integer) 0)));
                ClassKind_74 = (MR_Integer) 3;
              }
              else
                ClassKind_74 = (MR_Integer) 0;
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (ClassName_71));
                MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ClassArity_72));
                MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (ClassKind_74));
              }
              MLDS_Type_75 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_79);
              ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, MLDS_Type_75, &TypeString_76, ArrayDims_10);
              Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
              Var_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
              Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
              Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
              OutputGenerics_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
              Var_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
              switch (OutputGenerics_77) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_76;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_78;

                    ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_70, &GenericsString_78);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_76, GenericsString_78);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TVar_11;
              MR_Word TypeInfo_61_61;
              MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
              MR_Word Var_22;
              MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
              MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
              MR_Word Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
              MR_String Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
              MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
              MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);

              succeeded = (Var_21 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  TVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 0)));
                  Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 1)));
                  succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                  {
                    TypeInfo_61_61 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_1[6];
                    succeeded = mercury__list__member_2_p_0(TypeInfo_61_61, ((MR_Box) (TVar_11)), Var_51);
                  }
                }
              }
              if (succeeded)
                ml_backend__mlds_to_target_util__generic_tvar_to_string_2_p_0(TVar_11, String_9);
              else
                *String_9 = (MR_String) "java.lang.Object";
              *ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              *String_9 = (MR_String) "builtin.Void_0";
              *ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) Var_62)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *String_9 = (MR_String) "double";
                    *ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *String_9 = (MR_String) "int";
                    *ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *String_9 = (MR_String) "java.lang.String";
                    *ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 0)));

                *String_9 = ((&ml_backend__mlds_to_java_vector_common_9[0 + Var_63]))->ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_0;
                *ArrayDims_10 = ((&ml_backend__mlds_to_java_vector_common_9[0 + Var_63]))->ml_backend__mlds_to_java__vector_common_type_9_0__vct_9_f_1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_69;
          MR_Word ArgsTypes_70;
          MR_Word ClassName_71;
          MR_Integer ClassArity_72;
          MR_Word ClassKind_74;
          MR_Word MLDS_Type_75;
          MR_String TypeString_76;
          MR_Word OutputGenerics_77;
          MR_Word Var_79;
          MR_Word Var_73;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_String Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_69, &ArgsTypes_70);
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_69, &ClassName_71, &ClassArity_72);
          succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorCat_8, (MR_Integer) 0)));
            ClassKind_74 = (MR_Integer) 3;
          }
          else
            ClassKind_74 = (MR_Integer) 0;
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (ClassName_71));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ClassArity_72));
            MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (ClassKind_74));
          }
          MLDS_Type_75 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_79);
          ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, MLDS_Type_75, &TypeString_76, ArrayDims_10);
          Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
          Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
          OutputGenerics_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
          Var_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
          Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
          switch (OutputGenerics_77) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *String_9 = TypeString_76;
              break;
            case (MR_Integer) 0:
              {
                MR_String GenericsString_78;

                ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_70, &GenericsString_78);
                *String_9 = mercury__string__f_43_43_2_f_0(TypeString_76, GenericsString_78);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // direct tailcall eliminated
              CtorCat_8 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_scalar_common_1[25]);
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtor_69;
              MR_Word ArgsTypes_70;
              MR_Word ClassName_71;
              MR_Integer ClassArity_72;
              MR_Word ClassKind_74;
              MR_Word MLDS_Type_75;
              MR_String TypeString_76;
              MR_Word OutputGenerics_77;
              MR_Word Var_79;
              MR_Word Var_73;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_String Var_85;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_88;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_69, &ArgsTypes_70);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_69, &ClassName_71, &ClassArity_72);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorCat_8, (MR_Integer) 0)));
                ClassKind_74 = (MR_Integer) 3;
              }
              else
                ClassKind_74 = (MR_Integer) 0;
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (ClassName_71));
                MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ClassArity_72));
                MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (ClassKind_74));
              }
              MLDS_Type_75 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Var_79);
              ml_backend__mlds_to_java__type_to_string_for_java_4_p_0(Info_6, MLDS_Type_75, &TypeString_76, ArrayDims_10);
              Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
              Var_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
              Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
              Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
              OutputGenerics_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) & (MR_Integer) 1);
              Var_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
              switch (OutputGenerics_77) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_76;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_78;

                    ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_70, &GenericsString_78);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_76, GenericsString_78);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__java_builtin_type_4_p_0(
  MR_Word MLDS_Type_5,
  MR_String * JavaUnboxedType_6,
  MR_String * JavaBoxedType_7,
  MR_String * UnboxMethod_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) MLDS_Type_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(MLDS_Type_5)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *JavaUnboxedType_6 = (MR_String) "boolean";
              *JavaBoxedType_7 = (MR_String) "java.lang.Boolean";
              *UnboxMethod_8 = (MR_String) "booleanValue";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
            {
              *JavaUnboxedType_6 = (MR_String) "int";
              *JavaBoxedType_7 = (MR_String) "java.lang.Integer";
              *UnboxMethod_8 = (MR_String) "intValue";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *JavaUnboxedType_6 = (MR_String) "double";
              *JavaBoxedType_7 = (MR_String) "java.lang.Double";
              *UnboxMethod_8 = (MR_String) "doubleValue";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java.m", (MR_String) "predicate \140ml_backend.mlds_to_java.java_builtin_type\'/4", (MR_String) "unknown typed");
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word MerType_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 1)));
              MR_Word TypeCtorCat_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 2)));
              MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 3)));

              if (((MR_tag((MR_Word) MerType_9)) == (MR_mktag((MR_Integer) 2))))
              {
                MR_Word BuiltinType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), MerType_9, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) BuiltinType_12)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(BuiltinType_12)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          *JavaUnboxedType_6 = (MR_String) "double";
                          *JavaBoxedType_7 = (MR_String) "java.lang.Double";
                          *UnboxMethod_8 = (MR_String) "doubleValue";
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          *JavaUnboxedType_6 = (MR_String) "int";
                          *JavaBoxedType_7 = (MR_String) "java.lang.Integer";
                          *UnboxMethod_8 = (MR_String) "intValue";
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), BuiltinType_12, (MR_Integer) 0)));

                      *JavaUnboxedType_6 = ((&ml_backend__mlds_to_java_vector_common_8[0 + Var_56]))->ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_0;
                      *JavaBoxedType_7 = ((&ml_backend__mlds_to_java_vector_common_8[0 + Var_56]))->ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_1;
                      *UnboxMethod_8 = ((&ml_backend__mlds_to_java_vector_common_8[0 + Var_56]))->ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_2;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              else
              if (((MR_tag((MR_Word) MerType_9)) == (MR_mktag((MR_Integer) 1))))
              {
                succeeded = (TypeCtorCat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                if (succeeded)
                {
                  *JavaUnboxedType_6 = (MR_String) "int";
                  *JavaBoxedType_7 = (MR_String) "java.lang.Integer";
                  *UnboxMethod_8 = (MR_String) "intValue";
                  succeeded = MR_TRUE;
                }
              }
              else
                succeeded = MR_FALSE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ForeignLangType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 1)));
              MR_String JavaForeignType_62;
              MR_Integer slot_0;
              MR_String str_1;

              switch (MR_tag((MR_Word) ForeignLangType_34)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java.m", (MR_String) "predicate \140ml_backend.mlds_to_java.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ForeignLangType_34, (MR_Integer) 0)));

                    JavaForeignType_62 = (MR_String) Var_75;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java.m", (MR_String) "predicate \140ml_backend.mlds_to_java.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C#");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java.m", (MR_String) "predicate \140ml_backend.mlds_to_java.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for Erlang");
                  }
                  break;
              }
              *JavaUnboxedType_6 = mercury__string__strip_1_f_0(JavaForeignType_62);
              // hashed string simple lookup switch
              // compute the hash value of the input string
              slot_0 = ((MR_hash_string5(*JavaUnboxedType_6)) & (MR_Integer) 15);
              // no collisions; no hash chain loop
              // lookup the string for this hash slot
              str_1 = ((&ml_backend__mlds_to_java_vector_common_8[8 + slot_0]))->ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_0;
              // did we find a match?
              if ((((str_1 != NULL)) && ((strcmp(str_1, *JavaUnboxedType_6) == 0))))
              {
                // we found a match; look up the results
                *JavaBoxedType_7 = ((&ml_backend__mlds_to_java_vector_common_8[8 + slot_0]))->ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_1;
                *UnboxMethod_8 = ((&ml_backend__mlds_to_java_vector_common_8[8 + slot_0]))->ml_backend__mlds_to_java__vector_common_type_8_0__vct_8_f_2;
                succeeded = MR_TRUE;
                // jump out of search loop
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_17;

    ml_backend__mlds_to_java__IntroducedFrom__pred__generic_args_types_to_string_for_java__2746__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_17);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word ArgsTypes_5,
  MR_String * String_6)
{
  if ((ArgsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *String_6 = (MR_String) "";
  else
  {
    MR_Word ToString_9;
    MR_Word ArgsTypesStrings_14;
    MR_String ArgsTypesString_15;
    MR_String Var_20;

    {
      ToString_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToString_9, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), ToString_9, 1) = ((MR_Box) (ml_backend__mlds_to_java__generic_args_types_to_string_for_java_3_p_0_1));
      MR_hl_field(MR_mktag(0), ToString_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToString_9, 3) = ((MR_Box) (Info_4));
    }
    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ToString_9, ArgsTypes_5, &ArgsTypesStrings_14);
    ArgsTypesString_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsTypesStrings_14);
    Var_20 = mercury__string__f_43_43_2_f_0(ArgsTypesString_15, (MR_String) ">");
    *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_20);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__qual_class_name_to_string_for_java_3_p_0(
  MR_Word QualClassName_4,
  MR_Integer Arity_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;
    MR_Word MLDS_ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualClassName_4, (MR_Integer) 0)));
    MR_Word QualKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualClassName_4, (MR_Integer) 1)));
    MR_String ClassName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), QualClassName_4, (MR_Integer) 2)));
    MR_Word SymName_10;
    MR_Word Var_16;

    SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
    Var_16 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_10, Var_16);
    if (succeeded)
    {
      *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "jmercury.runtime.", ClassName_9);
    }
    else
    {
      MR_String QualString_11;
      MR_String UnqualString_12;
      MR_String Var_14;
      MR_Word OuterName_21;
      MR_Word InnerName_22;
      MR_String MangledOuterName_23;
      MR_String MangledSuffix_24;
      MR_String MangledName_36;
      MR_String UppercaseMangledName_37;
      MR_String Var_38;
      MR_String Var_40;

      OuterName_21 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(MLDS_ModuleName_7);
      InnerName_22 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_21, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_23);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_21, InnerName_22);
      if (succeeded)
        MangledSuffix_24 = (MR_String) "";
      else
      {
        MR_Word Suffix_25;
        MR_String MangledSuffix0_26;
        MR_Word Var_29;

        ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_22, OuterName_21, &Suffix_25);
        Var_29 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_25, Var_29, (MR_String) ".", &MangledSuffix0_26);
        MangledSuffix_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_26);
      }
      QualString_11 = mercury__string__f_43_43_2_f_0(MangledOuterName_23, MangledSuffix_24);
      MangledName_36 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_9);
      UppercaseMangledName_37 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_36);
      Var_40 = mercury__string__from_int_1_f_0(Arity_5);
      Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_40);
      UnqualString_12 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_37, Var_38);
      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", UnqualString_12);
      *String_6 = mercury__string__f_43_43_2_f_0(QualString_11, Var_14);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_global_var_name_for_java_3_p_0(
  MR_Word GlobalVarName_4)
{
  switch (MR_tag((MR_Word) GlobalVarName_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "dummy_var");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), GlobalVarName_4, (MR_Integer) 0)));
        MR_String RttiAddrName_10;

        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_9, &RttiAddrName_10);
        mercury__io__write_string_3_p_0(RttiAddrName_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), GlobalVarName_4, (MR_Integer) 0)));
        MR_Word Id_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), GlobalVarName_4, (MR_Integer) 1)));
        MR_String Prefix_13;
        MR_String Var_18;
        MR_Word Var_21;
        MR_Word PredLabel_34;
        MR_Integer ProcId_35;
        MR_Integer ModeNum_37;
        MR_String Var_46;

        Var_18 = backend_libs__rtti__tabling_info_id_str_1_f_0(Id_12);
        Prefix_13 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) "_");
        mercury__io__write_string_3_p_0(Prefix_13);
        Var_21 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_11);
        PredLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
        ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1)));
        ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(PredLabel_34);
        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_35, &ModeNum_37);
        mercury__io__write_string_3_p_0((MR_String) "_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], ModeNum_37, &Var_46);
        mercury__io__write_string_3_p_0(Var_46);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), GlobalVarName_4, (MR_Integer) 0)));
        MR_Integer Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GlobalVarName_4, (MR_Integer) 1)));
        MR_String NameStr_8;
        MR_String MangledName_29;
        MR_String JavaSafeName_30;

        NameStr_8 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_6, Num_7);
        MangledName_29 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_8);
        JavaSafeName_30 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_29);
        mercury__io__write_string_3_p_0(JavaSafeName_30);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_pred_label_for_java_3_p_0(
  MR_Word PredLabel_4)
{
  if (((MR_tag((MR_Word) PredLabel_4)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String PredName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 0)));
    MR_Word MaybeTypeModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 1)));
    MR_String TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 2)));
    MR_Integer TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 3)));
    MR_String MangledPredName_20;
    MR_String MangledTypeName_21;
    MR_String Var_67;

    MangledPredName_20 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PredName_16);
    MangledTypeName_21 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_18);
    mercury__io__write_string_3_p_0(MangledPredName_20);
    mercury__io__write_string_3_p_0((MR_String) "__");
    if (!((MaybeTypeModule_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word TypeModule_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeModule_17, (MR_Integer) 0)));
      MR_String Var_78;

      Var_78 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_22);
      mercury__io__write_string_3_p_0(Var_78);
      mercury__io__write_string_3_p_0((MR_String) "__");
    }
    mercury__io__write_string_3_p_0(MangledTypeName_21);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], TypeArity_19, &Var_67);
    mercury__io__write_string_3_p_0(Var_67);
  }
  else
  {
    MR_Word PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 0)));
    MR_Word MaybeDefiningModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 1)));
    MR_String Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 2)));
    MR_Integer PredArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 3)));
    MR_String Suffix_12;
    MR_Integer OrigArity_13;
    MR_String MangledName_14;
    MR_String Var_55;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 5)));

    switch (PredOrFunc_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_12 = (MR_String) "f";
          OrigArity_13 = (PredArity_9 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_12 = (MR_String) "p";
          OrigArity_13 = PredArity_9;
        }
        break;
    }
    MangledName_14 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_8);
    mercury__io__write_string_3_p_0(MangledName_14);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_java_scalar_common_7[0], OrigArity_13, &Var_55);
    mercury__io__write_string_3_p_0(Var_55);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__io__write_string_3_p_0(Suffix_12);
    if (!((MaybeDefiningModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word DefiningModule_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDefiningModule_7, (MR_Integer) 0)));
      MR_String Var_84;

      mercury__io__write_string_3_p_0((MR_String) "_in__");
      Var_84 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_15);
      mercury__io__write_string_3_p_0(Var_84);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_src_end_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_src_end_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6)
{
  {
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_String Var_34;
    MR_Box conv0_STATE_VARIABLE_IO_11_11;

    Var_34 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_6);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[23])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "  static {\n"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[7], Var_26, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11_11);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "// :- end_module ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_src_start_for_java_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_java_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_src_start_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_import_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_src_start_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word MercuryModuleName_11,
  MR_Word Imports_12,
  MR_Word ForeignDecls_13,
  MR_Word FuncDefns_14)
{
  {
    MR_bool succeeded;
    MR_String ClassName_16;
    MR_String Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3)));
    MR_Word Var_32;
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
    MR_Word Var_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4)));
    MR_Word Var_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6)));
    MR_Box conv0_STATE_VARIABLE_IO_30_30;

    ml_backend__mlds_to_target_util__output_auto_gen_comment_3_p_0(Var_19);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "/* :- module ");
    parse_tree__prog_out__write_sym_name_3_p_0(MercuryModuleName_11);
    mercury__io__write_string_3_p_0((MR_String) ". */\n\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "package jmercury;\n");
    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[6], Imports_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_30_30);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_src_start_for_java_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Info_9));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (Indent_10));
    }
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ForeignDecls_13, (MR_String) "\n", Var_32);
    mercury__io__write_string_3_p_0((MR_String) "public class ");
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MercuryModuleName_11, (MR_Integer) 0, (MR_String) "__", &ClassName_16);
    mercury__io__write_string_3_p_0(ClassName_16);
    mercury__io__write_string_3_p_0((MR_String) " {\n");
    ml_backend__mlds_to_java__output_debug_class_init_4_p_0(MercuryModuleName_11, (MR_String) "start");
    succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(FuncDefns_14);
    if (succeeded)
    {
      MR_Integer Var_43 = (Indent_10 + (MR_Integer) 1);

      ml_backend__mlds_to_java__write_main_driver_for_java_4_p_0(Var_43, ClassName_16);
    }
    else
    {
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_debug_class_init_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_debug_class_init_4_p_0(
  MR_Word ModuleName_5,
  MR_String State_6)
{
  {
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    Var_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_5);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (State_6));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[18])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_String) "  static {\n"));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
    }
    mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_java_scalar_common_2[5], Var_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__write_main_driver_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_target_util__write_indented_line_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__write_main_driver_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6)
{
  {
    MR_Word Body_8;
    MR_String Var_19;
    MR_String Var_21;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_String Var_36;
    MR_String Var_38;
    MR_Word Var_53;
    MR_Integer Var_55;
    MR_Box conv0_STATE_VARIABLE_IO_54_54;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "public static void main");
    mercury__io__write_string_3_p_0((MR_String) "(java.lang.String[] args)\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_21 = mercury__string__f_43_43_2_f_0(ClassName_6, (MR_String) "\";");
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "jmercury.runtime.JavaInternal.progname = \"", Var_21);
    Var_38 = mercury__string__f_43_43_2_f_0(ClassName_6, (MR_String) ".main_2_p_0();");
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "        ", Var_38);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[15])));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_String) "    public void run() {"));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) "Runnable run_main = new Runnable() {"));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "benchmarking.ML_initialise();"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) "library.ML_std_library_init();"));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.exit_status = 0;"));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.args = args;"));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Body_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_8, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Body_8, 1) = ((MR_Box) (Var_23));
    }
    Var_55 = (Indent_5 + (MR_Integer) 1);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ml_backend__mlds_to_java__write_main_driver_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Var_55));
    }
    mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_53, Body_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_54_54);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_finals_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_final_pred_call_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_finals_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word FinalPreds_6)
{
  if (!((FinalPreds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Integer Var_15;
    MR_Integer Var_20;
    MR_Integer Var_25;
    MR_Word Var_30;
    MR_Integer Var_32;
    MR_Integer Var_34;
    MR_Integer Var_39;
    MR_Integer Var_44;
    MR_Box conv0_STATE_VARIABLE_IO_31_31;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_15 = (Indent_5 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_15);
    mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.JavaInternal.register_finaliser(\n");
    Var_20 = (Indent_5 + (MR_Integer) 2);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_20);
    mercury__io__write_string_3_p_0((MR_String) "new java.lang.Runnable() {\n");
    Var_25 = (Indent_5 + (MR_Integer) 3);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_25);
    mercury__io__write_string_3_p_0((MR_String) "public void run() {\n");
    Var_32 = (Indent_5 + (MR_Integer) 4);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_finals_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Var_32));
    }
    mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_30, FinalPreds_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_31);
    Var_34 = (Indent_5 + (MR_Integer) 3);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_34);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    Var_39 = (Indent_5 + (MR_Integer) 2);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_39);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    Var_44 = (Indent_5 + (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_44);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_inits_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_init_for_java_2_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_inits_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word InitPreds_6)
{
  if (!((InitPreds_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Word Var_15;
    MR_Integer Var_17;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_17 = (Indent_5 + (MR_Integer) 1);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_inits_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Var_17));
    }
    mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_15, InitPreds_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__make_code_addr_map_for_java_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Word CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word CodeAddrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word OrigFuncSignature_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 1)));
      MR_Word OrigArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigFuncSignature_11, (MR_Integer) 0)));
      MR_Integer Arity_14;
      MR_Word STATE_VARIABLE_Map_17_17;
      MR_Word _QualFuncLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 0)));
      MR_Word _OrigRetTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigFuncSignature_11, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      mercury__list__length_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, OrigArgTypes_12, &Arity_14);
      mercury__multi_map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, ((MR_Box) (Arity_14)), ((MR_Box) (CodeAddr_7)), STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_17_17);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = CodeAddrs_8;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enums_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_exported_enum_for_java_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_exported_enums_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnums_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_exported_enums_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_12, ExportedEnums_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_exports_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_export_for_java_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_exports_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Exports_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_exports_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_12, Exports_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_f_0(
  MR_Word AllForeignCode_3)
{
  {
    MR_bool succeeded;
    MR_Word ForeignCode_4;
    MR_Word ForeignCode0_5;
    MR_Box conv0_ForeignCode0_5;

    succeeded = mercury__map__search_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, AllForeignCode_3, ((MR_Box) ((MR_Integer) 2)), &conv0_ForeignCode0_5);
    if (succeeded)
    {
      ForeignCode0_5 = ((MR_Word) conv0_ForeignCode0_5);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ForeignCode_4 = ForeignCode0_5;
    else
      ForeignCode_4 = (MR_Word) &ml_backend__mlds_to_java_scalar_common_3[0];
    return ForeignCode_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_import_3_p_0(
  MR_Word Import_4)
{
  {
    MR_Word ImportType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Import_4, (MR_Integer) 0)));
    MR_Word ImportName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Import_4, (MR_Integer) 1)));
    MR_Word SymName_8;
    MR_String ClassFile_9;
    MR_Word Var_16;
    MR_Word Var_19;

    switch (ImportType_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java.output_import\'/3", (MR_String) "import_type \140user_visible_interface\' in Java backend");
            return;
          }
        }
        break;
    }
    SymName_8 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ImportName_7);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_8, (MR_Integer) 0, (MR_String) "__", &ClassFile_9);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (ClassFile_9));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_scalar_common_1[21])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "// import "));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    mercury__io__write_strings_3_p_0(Var_16);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__enforce_java_names_2_p_0(
  MR_String Name_3,
  MR_String * JavaName_4)
{
  {
    MR_bool succeeded;
    MR_String RevName_5;
    MR_Word String1_15;
    MR_Integer Pos_6;

    mercury__string__to_char_list_2_p_0(Name_3, &String1_15);
    mercury__string__from_rev_char_list_2_p_0(String1_15, &RevName_5);
    succeeded = mercury__string__sub_string_search_3_p_0(RevName_5, (MR_String) ".", &Pos_6);
    if (succeeded)
    {
      MR_String Head0_7;
      MR_String Tail0_8;
      MR_String Tail_9;
      MR_String Head1_10;
      MR_String Head_11;
      MR_Word String1_18;
      MR_Word String1_21;

      mercury__string__split_4_p_0(RevName_5, Pos_6, &Head0_7, &Tail0_8);
      mercury__string__to_char_list_2_p_0(Tail0_8, &String1_18);
      mercury__string__from_rev_char_list_2_p_0(String1_18, &Tail_9);
      mercury__string__to_char_list_2_p_0(Head0_7, &String1_21);
      mercury__string__from_rev_char_list_2_p_0(String1_21, &Head1_10);
      mercury__string__capitalize_first_2_p_0(Head1_10, &Head_11);
      mercury__string__append_3_p_2(Tail_9, Head_11, JavaName_4);
    }
    else
      *JavaName_4 = Name_3;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java__rval_is_enum_object_1_p_0(
  MR_Word Rval_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Rval_2)) == (MR_mktag((MR_Integer) 2)));
    MR_Word Lval_3;
    MR_Word Type_5;
    MR_Word Builtin_13;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_2, (MR_Integer) 0)));
      switch (MR_tag((MR_Word) Lval_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 0)));
            MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 1)));
            MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 2)));
            MR_Word Var_10;

            Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 3)));
            Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 4)));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 1)));

                Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 1)));

                Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 2)));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Type_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1)));
          Builtin_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 2)));
          Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 3)));
          succeeded = ((MR_tag((MR_Word) Builtin_13)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Builtin_13, (MR_Integer) 0)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java__output_java_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java__output_java_src_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
  }
}

void MR_CALL 
ml_backend__mlds_to_java__output_java_mlds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Globals_10;
    MR_Word ModuleName_11;
    MR_String JavaSourceFile_12;
    MR_Word Var_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".java", ModuleName_11, &JavaSourceFile_12);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_java_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_java__output_java_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (MLDS_7));
    }
    libs__file_util__output_to_file_6_p_0(Globals_10, JavaSourceFile_12, Var_19, Succeeded_8);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____call_method_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_java____Unify____call_method_inputs_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java____Compare____call_method_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_java____Compare____call_method_inputs_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____code_addr_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_java____Unify____code_addr_wrapper_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java____Compare____code_addr_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_java____Compare____code_addr_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____context_marker_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_java____Unify____context_marker_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java____Compare____context_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_java____Compare____context_marker_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java____Unify____java_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_java____Unify____java_out_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java____Compare____java_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_java____Compare____java_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__mlds_to_java__init(void)
{
}

void mercury__ml_backend__mlds_to_java__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_context_marker_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_java__ml_backend__mlds_to_java__type_ctor_info_java_out_info_0);
}

void mercury__ml_backend__mlds_to_java__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__ml_backend__mlds_to_java__required_init(void)
{
	ml_backend__mlds_to_java__user_init_pred_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java.
