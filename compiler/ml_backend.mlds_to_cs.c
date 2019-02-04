/*
** Automatically generated from `mlds_to_cs.m'
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


/* :- module ml_backend.mlds_to_cs. */
/* :- implementation. */

/*
INIT mercury__ml_backend__mlds_to_cs__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs.mih"


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
#include "ml_backend.ml_global_data.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0[9];

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0[9];

static const MR_DuArgLocn ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0[9];

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_csharp_out_info_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_csharp_out_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_csharp_out_info_0[1];

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_csharp_out_info_0[1];

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const_for_csharp__3669__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_11,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_71);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt_for_csharp__2536__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_154);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__2058__1_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_16,
  MR_String * ml_backend__mlds_to_cs__LambdaHeadVar__2_17);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string_for_csharp__1910__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_43);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1297__1_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_14);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_class_defn_for_csharp__707__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__MemberMethods_20,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_33);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__565__1_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__565__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_39);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__559__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_27);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export_for_csharp__337__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_10,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_36);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__144__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_57);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_target_code_component_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__TargetCode_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Rval_10,
  MR_Integer ml_backend__mlds_to_cs__Num_11,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_String * ml_backend__mlds_to_cs__String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_function_name_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualFuncName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_param_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Arg_8);

static void MR_CALL 
ml_backend__mlds_to_cs__make_out_param_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word * ml_backend__mlds_to_cs__Argument_6,
  MR_Integer ml_backend__mlds_to_cs__Num_7,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_array_assignments_for_csharp_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__GlobalVarName_11,
  MR_Word ml_backend__mlds_to_cs__ElementInit_12,
  MR_Integer ml_backend__mlds_to_cs__Index_13,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__GlobalVarDefn_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_decl_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_init_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Map_9,
  MR_Word ml_backend__mlds_to_cs__Scalar_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_7);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_11,
  MR_Integer ml_backend__mlds_to_cs__Indent_12,
  MR_Word ml_backend__mlds_to_cs__TypeNum_13,
  MR_Word ml_backend__mlds_to_cs__CellGroup_14,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_28,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_29,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_30,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Map_31);

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constant_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs___EnumName_9,
  MR_Word ml_backend__mlds_to_cs__FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__interface_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Interface_3,
  MR_String * ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ClassDefn_8);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Flags_7,
  MR_Word ml_backend__mlds_to_cs__Kind_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__EnumName_9,
  MR_Word ml_backend__mlds_to_cs__EnumConsts_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__BaseClasses_9,
  MR_Word ml_backend__mlds_to_cs__Interfaces_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_kind_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Kind_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__FunctionDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_for_csharp_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_10,
  MR_Integer ml_backend__mlds_to_cs__Indent_11,
  MR_Word ml_backend__mlds_to_cs__FuncName_12,
  MR_Word ml_backend__mlds_to_cs__OutputAux_13,
  MR_Word ml_backend__mlds_to_cs__Context_14,
  MR_Word ml_backend__mlds_to_cs__Signature_15,
  MR_Word ml_backend__mlds_to_cs__MaybeBody_16);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Context_12,
  MR_Word ml_backend__mlds_to_cs__Default_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__Context_4,
  MR_Word ml_backend__mlds_to_cs__HeadVar__5_5,
  MR_Word ml_backend__mlds_to_cs__Default_6,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_7);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Stmt_11,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_12);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__4_4,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Context_9,
  MR_Word ml_backend__mlds_to_cs__Match_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_call_rval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__AtomicStmt_9,
  MR_Word ml_backend__mlds_to_cs__Context_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_args_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__hand_defined_type_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word ml_backend__mlds_to_cs__CtorCat_6,
  MR_String * ml_backend__mlds_to_cs__SubstituteName_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(
  MR_String ml_backend__mlds_to_cs__Name_5,
  MR_Integer ml_backend__mlds_to_cs__Arity_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Cond_4,
  MR_Word ml_backend__mlds_to_cs__BlockExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__FuncName_10,
  MR_Word ml_backend__mlds_to_cs__OutputAux_11,
  MR_Word ml_backend__mlds_to_cs__Signature_12);

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_name_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__FunctionName_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_field_var_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_local_var_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__LocalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__GlobalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_var_definition_for_csharp_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__EnvVarName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_9,
  MR_String ml_backend__mlds_to_cs__Name_10);

static void MR_CALL 
ml_backend__mlds_to_cs__mlds_output_code_addr_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_7,
  MR_Word ml_backend__mlds_to_cs__IsCall_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_constant_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_9,
  MR_Word ml_backend__mlds_to_cs__ExportedConstant_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnum_8);

static void MR_CALL 
ml_backend__mlds_to_cs__write_argument_name_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__is_out_argument_1_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Export_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Parameters_8);

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__QualFuncName_5,
  MR_Word ml_backend__mlds_to_cs__Parameters_6);

static void MR_CALL 
ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(
  MR_Word ml_backend__mlds_to_cs__PredLabel_3,
  MR_String * ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ForeignBodyCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__DeclCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_6,
  MR_Word ml_backend__mlds_to_cs__Context_7,
  MR_Integer ml_backend__mlds_to_cs__N_8);

static void MR_CALL 
ml_backend__mlds_to_cs__cs_output_context_4_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_5,
  MR_Word ml_backend__mlds_to_cs__Context_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_9(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_8(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_7(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_6(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__MLDS_8);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_11,
  MR_Word ml_backend__mlds_to_cs__ForeignDecls_13,
  MR_Word ml_backend__mlds_to_cs__Defns_14);

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__ClassName_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_5,
  MR_String ml_backend__mlds_to_cs__SourceFileName_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_7);

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__VectorCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_7,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ScalarCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_global_var_method_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__GlobalVarDefns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_global_var_statements_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__OutputAux_8,
  MR_Word ml_backend__mlds_to_cs__Type_9,
  MR_Word ml_backend__mlds_to_cs__Initializer_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Const_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__Op_8,
  MR_Word ml_backend__mlds_to_cs__X_9,
  MR_Word ml_backend__mlds_to_cs__Y_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_std_unop_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__UnaryOp_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_cast_rval_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Unop_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Lval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(
  MR_Unsigned ml_backend__mlds_to_cs__U_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_4);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(
  MR_Word ml_backend__mlds_to_cs__SymName_3);

static void MR_CALL 
ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(
  MR_Word ml_backend__mlds_to_cs__LocalVarName_3,
  MR_String * ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(
  MR_Word ml_backend__mlds_to_cs__GlobalVarName_3,
  MR_String * ml_backend__mlds_to_cs__String_4);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__get_type_initializer_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Op_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__have_preallocated_pseudo_type_var_for_csharp_1_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_2);

static void MR_CALL 
ml_backend__mlds_to_cs__maybe_output_comment_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_String ml_backend__mlds_to_cs__Comment_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_local_var_name_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualLocalVarName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualGlobalVarName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleName_5,
  MR_Word ml_backend__mlds_to_cs__QualKind_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(
  MR_Word ml_backend__mlds_to_cs__Type_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Inits_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__GlobalVarName_7,
  MR_Word ml_backend__mlds_to_cs__Type_8);

static void MR_CALL 
ml_backend__mlds_to_cs__mercury_type_to_string_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__CtorCat_8,
  MR_String * ml_backend__mlds_to_cs__String_9,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_10);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6,
  MR_String * ml_backend__mlds_to_cs__String_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__ArgTypes_6,
  MR_Word ml_backend__mlds_to_cs__RetTypes_7);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_3,
  MR_String * ml_backend__mlds_to_cs__TargetType_4);

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__ArgsTypes_5,
  MR_String * ml_backend__mlds_to_cs__String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__qual_class_name_to_string_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__QualName_4,
  MR_Integer ml_backend__mlds_to_cs__Arity_5,
  MR_String * ml_backend__mlds_to_cs__String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(
  MR_String ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_src_end_for_csharp_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_Word ml_backend__mlds_to_cs__ModuleName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0(
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__StaticConstructors_9,
  MR_Word ml_backend__mlds_to_cs__FinalPreds_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnums_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Exports_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word ml_backend__mlds_to_cs__AllForeignCode_3);

static void MR_CALL 
ml_backend__mlds_to_cs__make_code_addr_map_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_1[21][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_2[16][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_3[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_4[9][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_5[10][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_6[5][7];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_7[2][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_8[6][6];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_11[7][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_12[2][13];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_13[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_14[1][11];


/* sealed */ struct ml_backend__mlds_to_cs__vector_common_type_9_0_s {
  const MR_String ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_9_0_s ml_backend__mlds_to_cs_vector_common_9[32];

/* sealed */ struct ml_backend__mlds_to_cs__vector_common_type_10_0_s {
  const MR_String ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_0;
  const MR_Word ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_10_0_s ml_backend__mlds_to_cs_vector_common_10[8];



static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "       System.Environment.ExitCode = 1;")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.ExitCode == 0) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "       System.Console.Error.WriteLine(e.StackTrace);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "           \"MERCURY_SUPPRESS_STACK_TRACE\") == null) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.GetEnvironmentVariable(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "       (univ.Univ_0) e.exception);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "   exception.ML_report_uncaught_exception(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "} catch (runtime.Exception e) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[0])),
    ((MR_Box) (ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[2])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[2])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[4])),
    ((MR_Box) (ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[4])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_supers_list_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[5])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_supers_list_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[6])),
    ((MR_Box) (ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[5])),
    ((MR_Box) (ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__565__1_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_4[9][8] = {
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
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_5[10][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_6[5][7] = {
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
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_8[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_11[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
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
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_12[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_13[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_14[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_9_0_s ml_backend__mlds_to_cs_vector_common_9[32] = {
  /* row 0 */   {     (MR_String) "int" },
  /* row 1 */   {     (MR_String) "uint" },
  /* row 2 */   {     (MR_String) "sbyte" },
  /* row 3 */   {     (MR_String) "byte" },
  /* row 4 */   {     (MR_String) "short" },
  /* row 5 */   {     (MR_String) "ushort" },
  /* row 6 */   {     (MR_String) "int" },
  /* row 7 */   {     (MR_String) "uint" },
  /* row 8 */   {     (MR_String) "int" },
  /* row 9 */   {     (MR_String) "uint" },
  /* row 10 */   {     (MR_String) "sbyte" },
  /* row 11 */   {     (MR_String) "byte" },
  /* row 12 */   {     (MR_String) "short" },
  /* row 13 */   {     (MR_String) "ushort" },
  /* row 14 */   {     (MR_String) "int" },
  /* row 15 */   {     (MR_String) "uint" },
  /* row 16 */   {     (MR_String) "0" },
  /* row 17 */   {     (MR_String) "0U" },
  /* row 18 */   {     (MR_String) "0" },
  /* row 19 */   {     (MR_String) "0" },
  /* row 20 */   {     (MR_String) "0" },
  /* row 21 */   {     (MR_String) "0" },
  /* row 22 */   {     (MR_String) "0" },
  /* row 23 */   {     (MR_String) "0U" },
  /* row 24 */   {     (MR_String) "0" },
  /* row 25 */   {     (MR_String) "0U" },
  /* row 26 */   {     (MR_String) "0" },
  /* row 27 */   {     (MR_String) "0" },
  /* row 28 */   {     (MR_String) "0" },
  /* row 29 */   {     (MR_String) "0" },
  /* row 30 */   {     (MR_String) "0" },
  /* row 31 */   {     (MR_String) "0U" },
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_10_0_s ml_backend__mlds_to_cs_vector_common_10[8] = {
  /* row 0 */
  {
    (MR_String) "runtime.TypeInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 1 */
  {
    (MR_String) "runtime.TypeCtorInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_String) "/* typeclass_info */ object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18])
  },
  /* row 3 */
  {
    (MR_String) "/* base_typeclass_info */ object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18])
  },
  /* row 4 */
  {
    (MR_String) "runtime.TypeInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 5 */
  {
    (MR_String) "runtime.TypeCtorInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_String) "/* typeclass_info */ object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18])
  },
  /* row 7 */
  {
    (MR_String) "/* base_typeclass_info */ object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_generics_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0[9] = {
  (MR_String) "csoi_module_info",
  (MR_String) "csoi_auto_comments",
  (MR_String) "csoi_line_numbers",
  (MR_String) "csoi_foreign_line_numbers",
  (MR_String) "csoi_module_name",
  (MR_String) "csoi_source_filename",
  (MR_String) "csoi_code_addrs",
  (MR_String) "csoi_output_generics",
  (MR_String) "csoi_univ_tvars"
};

static const MR_DuArgLocn ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0[9] = {
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
  }
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0 = {
  (MR_String) "csharp_out_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_csharp_out_info_0_0[1] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_csharp_out_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_csharp_out_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_csharp_out_info_0[1] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0
};

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_csharp_out_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "csharp_out_info",
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_csharp_out_info_0 },
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_csharp_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_csharp_out_info_0
};

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const_for_csharp__3669__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_11,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_71)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Lang_11 == ml_backend__mlds_to_cs__HeadVar__2_71);

    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt_for_csharp__2536__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_154)
{
  {
    MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__2_155;

    {
      ml_backend__mlds_to_cs__LambdaHeadVar__2_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__LambdaHeadVar__2_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__LambdaHeadVar__2_155, 1) = ((MR_Box) (ml_backend__mlds_to_cs__LambdaHeadVar__1_154));
    }
    return ml_backend__mlds_to_cs__LambdaHeadVar__2_155;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__2058__1_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_16,
  MR_String * ml_backend__mlds_to_cs__LambdaHeadVar__2_17)
{
  {
    MR_Word ml_backend__mlds_to_cs__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__MLDS_ArgType_13;
    MR_Word ml_backend__mlds_to_cs__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 6)));

    {
      ml_backend__mlds_to_cs__MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__mlds_to_cs__ModuleInfo_12, ml_backend__mlds_to_cs__LambdaHeadVar__1_16);
    }
    {
      ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__MLDS_ArgType_13, ml_backend__mlds_to_cs__LambdaHeadVar__2_17);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string_for_csharp__1910__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_43)
{
  {
    MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__2_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_43, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_43, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_43, (MR_Integer) 2)));

    return ml_backend__mlds_to_cs__LambdaHeadVar__2_44;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1297__1_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_14)
{
  {
    {
      ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__LambdaHeadVar__1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_class_defn_for_csharp__707__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__MemberMethods_20,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_33)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[2], ((MR_Box) (ml_backend__mlds_to_cs__MemberMethods_20)), ((MR_Box) (ml_backend__mlds_to_cs__HeadVar__2_33)));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__565__1_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__565__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_39)
{
  {
    MR_Integer ml_backend__mlds_to_cs__Var_44 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_48;
    MR_Word ml_backend__mlds_to_cs__Var_51;
    MR_Word ml_backend__mlds_to_cs__Var_53;
    MR_Box ml_backend__mlds_to_cs__conv0_LambdaHeadVar__3_41;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Var_44);
    }
    {
      ml_backend__mlds_to_cs__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_53, 0) = ((MR_Box) (ml_backend__mlds_to_cs__LambdaHeadVar__1_39));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20])));
    }
    {
      ml_backend__mlds_to_cs__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_51, 0) = ((MR_Box) ((MR_String) "(sender, ev) => "));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_51, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_53));
    }
    {
      ml_backend__mlds_to_cs__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_48, 0) = ((MR_Box) ((MR_String) "System.AppDomain.CurrentDomain.ProcessExit += "));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_51));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[15], ml_backend__mlds_to_cs__Var_48, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_LambdaHeadVar__3_41);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__559__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_27)
{
  {
    MR_Integer ml_backend__mlds_to_cs__Var_32 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Var_32);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__LambdaHeadVar__1_27);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "();\n");
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export_for_csharp__337__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_10,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_36)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Lang_10 == ml_backend__mlds_to_cs__HeadVar__2_36);

    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__144__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_57)
{
  {
    MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__2_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_57, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_57, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_57, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_57, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_57, (MR_Integer) 3)));

    return ml_backend__mlds_to_cs__LambdaHeadVar__2_58;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_30 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__CastY_31 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__3_3;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_30 == ml_backend__mlds_to_cs__CastY_31);
    if (ml_backend__mlds_to_cs__succeeded)
      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__mlds_to_cs__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__mlds_to_cs__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__ArgX6_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 3)));
        MR_String ml_backend__mlds_to_cs__ArgY6_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__mlds_to_cs__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ml_backend__mlds_to_cs__Var_22;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ml_backend__mlds_to_cs__Var_22, ml_backend__mlds_to_cs__ArgX1_4, ml_backend__mlds_to_cs__ArgY1_5);
        }
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_22 == (MR_Integer) 0);
        ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
        if (ml_backend__mlds_to_cs__succeeded)
          *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_22;
        else
          {
            MR_Word ml_backend__mlds_to_cs__Var_23;
            MR_Integer ml_backend__mlds_to_cs__Var_41 = (MR_Integer) ml_backend__mlds_to_cs__ArgX2_6;
            MR_Integer ml_backend__mlds_to_cs__Var_42 = (MR_Integer) ml_backend__mlds_to_cs__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__Var_23, ml_backend__mlds_to_cs__Var_41, ml_backend__mlds_to_cs__Var_42);
            }
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_23 == (MR_Integer) 0);
            ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
            if (ml_backend__mlds_to_cs__succeeded)
              *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_23;
            else
              {
                MR_Word ml_backend__mlds_to_cs__Var_24;
                MR_Integer ml_backend__mlds_to_cs__Var_43 = (MR_Integer) ml_backend__mlds_to_cs__ArgX3_8;
                MR_Integer ml_backend__mlds_to_cs__Var_44 = (MR_Integer) ml_backend__mlds_to_cs__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__Var_24, ml_backend__mlds_to_cs__Var_43, ml_backend__mlds_to_cs__Var_44);
                }
                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_24 == (MR_Integer) 0);
                ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                if (ml_backend__mlds_to_cs__succeeded)
                  *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_24;
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__Var_25;
                    MR_Integer ml_backend__mlds_to_cs__Var_45 = (MR_Integer) ml_backend__mlds_to_cs__ArgX4_10;
                    MR_Integer ml_backend__mlds_to_cs__Var_46 = (MR_Integer) ml_backend__mlds_to_cs__ArgY4_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__Var_25, ml_backend__mlds_to_cs__Var_45, ml_backend__mlds_to_cs__Var_46);
                    }
                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_25 == (MR_Integer) 0);
                    ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                    if (ml_backend__mlds_to_cs__succeeded)
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_25;
                    else
                      {
                        MR_Word ml_backend__mlds_to_cs__Var_26;

                        {
                          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__mlds_to_cs__Var_26, ml_backend__mlds_to_cs__ArgX5_12, ml_backend__mlds_to_cs__ArgY5_13);
                        }
                        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_26 == (MR_Integer) 0);
                        ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                        if (ml_backend__mlds_to_cs__succeeded)
                          *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_26;
                        else
                          {
                            MR_Word ml_backend__mlds_to_cs__Var_27;

                            {
                              mercury__private_builtin__builtin_compare_string_3_p_0(&ml_backend__mlds_to_cs__Var_27, ml_backend__mlds_to_cs__ArgX6_14, ml_backend__mlds_to_cs__ArgY6_15);
                            }
                            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_27 == (MR_Integer) 0);
                            ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                            if (ml_backend__mlds_to_cs__succeeded)
                              *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_27;
                            else
                              {
                                MR_Word ml_backend__mlds_to_cs__Var_28;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[1], &ml_backend__mlds_to_cs__Var_28, ((MR_Box) (ml_backend__mlds_to_cs__ArgX7_16)), ((MR_Box) (ml_backend__mlds_to_cs__ArgY7_17)));
                                }
                                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_28 == (MR_Integer) 0);
                                ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                                if (ml_backend__mlds_to_cs__succeeded)
                                  *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_28;
                                else
                                  {
                                    MR_Word ml_backend__mlds_to_cs__Var_29;
                                    MR_Integer ml_backend__mlds_to_cs__Var_47 = (MR_Integer) ml_backend__mlds_to_cs__ArgX8_18;
                                    MR_Integer ml_backend__mlds_to_cs__Var_48 = (MR_Integer) ml_backend__mlds_to_cs__ArgY8_19;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__Var_29, ml_backend__mlds_to_cs__Var_47, ml_backend__mlds_to_cs__Var_48);
                                    }
                                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_29 == (MR_Integer) 0);
                                    ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                                    if (ml_backend__mlds_to_cs__succeeded)
                                      *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__Var_29;
                                    else
                                      {
                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[6], ml_backend__mlds_to_cs__HeadVar__1_1, ((MR_Box) (ml_backend__mlds_to_cs__ArgX9_20)), ((MR_Box) (ml_backend__mlds_to_cs__ArgY9_21)));
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
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_21 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_cs__CastY_22 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_21 == ml_backend__mlds_to_cs__CastY_22);
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__mlds_to_cs__TypeInfo_25_25;
        MR_Word ml_backend__mlds_to_cs__TypeInfo_26_26;
        MR_Word ml_backend__mlds_to_cs__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__mlds_to_cs__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__ArgX6_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));
        MR_String ml_backend__mlds_to_cs__ArgY6_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ml_backend__mlds_to_cs__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 6)));

        {
          ml_backend__mlds_to_cs__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__mlds_to_cs__ArgX1_3, ml_backend__mlds_to_cs__ArgY1_4);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__ArgX2_5 == ml_backend__mlds_to_cs__ArgY2_6);
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__ArgX3_7 == ml_backend__mlds_to_cs__ArgY3_8);
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__ArgX4_9 == ml_backend__mlds_to_cs__ArgY4_10);
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        {
                          ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__mlds_to_cs__ArgX5_11, ml_backend__mlds_to_cs__ArgY5_12);
                        }
                        if (ml_backend__mlds_to_cs__succeeded)
                          {
                            ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__ArgX6_13, ml_backend__mlds_to_cs__ArgY6_14) == 0);
                            if (ml_backend__mlds_to_cs__succeeded)
                              {
                                ml_backend__mlds_to_cs__TypeInfo_25_25 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[1];
                                {
                                  ml_backend__mlds_to_cs__succeeded = mercury__builtin__unify_2_p_0(ml_backend__mlds_to_cs__TypeInfo_25_25, ((MR_Box) (ml_backend__mlds_to_cs__ArgX7_15)), ((MR_Box) (ml_backend__mlds_to_cs__ArgY7_16)));
                                }
                                if (ml_backend__mlds_to_cs__succeeded)
                                  {
                                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__ArgX8_17 == ml_backend__mlds_to_cs__ArgY8_18);
                                    if (ml_backend__mlds_to_cs__succeeded)
                                      {
                                        ml_backend__mlds_to_cs__TypeInfo_26_26 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[6];
                                        {
                                          ml_backend__mlds_to_cs__succeeded = mercury__builtin__unify_2_p_0(ml_backend__mlds_to_cs__TypeInfo_26_26, ((MR_Box) (ml_backend__mlds_to_cs__ArgX9_19)), ((MR_Box) (ml_backend__mlds_to_cs__ArgY9_20)));
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
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_target_code_component_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__TargetCode_6)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__TargetCode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ml_backend__mlds_to_cs__FuncName_14 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__TargetCode_6), (MR_Integer) 0);

        {
          ml_backend__mlds_to_cs__output_maybe_qualified_function_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__FuncName_14);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ml_backend__mlds_to_cs__CodeString_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__MaybeUserContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__Var_32;
        MR_Word ml_backend__mlds_to_cs__Var_43;
        MR_Word ml_backend__mlds_to_cs__Var_44;
        MR_Word ml_backend__mlds_to_cs__Var_45;
        MR_Word ml_backend__mlds_to_cs__Var_46;
        MR_String ml_backend__mlds_to_cs__Var_47;
        MR_Word ml_backend__mlds_to_cs__Var_48;
        MR_Word ml_backend__mlds_to_cs__Var_49;
        MR_Word ml_backend__mlds_to_cs__Var_50;

        {
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
        if ((ml_backend__mlds_to_cs__MaybeUserContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__ProgContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeUserContext_9, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
            MR_String ml_backend__mlds_to_cs__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
            MR_Word ml_backend__mlds_to_cs__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
            MR_Word ml_backend__mlds_to_cs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

            {
              ml_backend__mlds_to_cs__cs_output_context_4_p_0(ml_backend__mlds_to_cs__Var_27, ml_backend__mlds_to_cs__ProgContext_10);
            }
          }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__CodeString_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        ml_backend__mlds_to_cs__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
        ml_backend__mlds_to_cs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
        ml_backend__mlds_to_cs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
        ml_backend__mlds_to_cs__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));
        switch (ml_backend__mlds_to_cs__Var_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "#line default\n");
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String ml_backend__mlds_to_cs__CodeString_34 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__CodeString_34);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__mlds_to_cs__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));

            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_11);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__mlds_to_cs__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));

            {
              ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Lval_12);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__mlds_to_cs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));
            MR_String ml_backend__mlds_to_cs__String_64;
            MR_Word ml_backend__mlds_to_cs__ArrayDims_65;
            MR_Word ml_backend__mlds_to_cs__Var_67;

            {
              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_13, &ml_backend__mlds_to_cs__String_64, &ml_backend__mlds_to_cs__ArrayDims_65);
            }
            {
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_64);
            }
            {
              ml_backend__mlds_to_cs__Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            {
              ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_67);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_target_code_component_for_csharp\'/4", (MR_String) "target_code_alloc_id not implemented");
              return;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Rval_10,
  MR_Integer ml_backend__mlds_to_cs__Num_11,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__5_5)
{
  {
    MR_String ml_backend__mlds_to_cs__Var_28;

    *ml_backend__mlds_to_cs__HeadVar__5_5 = (ml_backend__mlds_to_cs__Num_11 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "out_param_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__Num_11, &ml_backend__mlds_to_cs__Var_28);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Rval_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_HeadVar__2_2;

    {
      ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_HeadVar__2_2);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_String * ml_backend__mlds_to_cs__String_6)
{
  {
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_16_16;
    MR_String ml_backend__mlds_to_cs__String0_7;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_8;
    MR_Word ml_backend__mlds_to_cs__RevBrackets_9;
    MR_Word ml_backend__mlds_to_cs__Brackets_10;
    MR_Word ml_backend__mlds_to_cs__Var_12;

    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__String0_7, &ml_backend__mlds_to_cs__ArrayDims_8);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__TypeCtorInfo_16_16, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[14], ml_backend__mlds_to_cs__ArrayDims_8, &ml_backend__mlds_to_cs__RevBrackets_9);
    }
    {
      mercury__list__reverse_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_16_16, ml_backend__mlds_to_cs__RevBrackets_9, &ml_backend__mlds_to_cs__Brackets_10);
    }
    {
      ml_backend__mlds_to_cs__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_12, 0) = ((MR_Box) (ml_backend__mlds_to_cs__String0_7));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Brackets_10));
    }
    {
      mercury__string__append_list_2_p_0(ml_backend__mlds_to_cs__Var_12, ml_backend__mlds_to_cs__String_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_function_name_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualFuncName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualFuncName_6, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__FuncName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualFuncName_6, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__CurrentModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__FunctionNameStr_29;
    MR_Word ml_backend__mlds_to_cs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String ml_backend__mlds_to_cs__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__mlds_to_cs__ModuleName_8, ml_backend__mlds_to_cs__CurrentModuleName_10);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
      }
    else
      {
        {
          ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ml_backend__mlds_to_cs__ModuleName_8, (MR_Integer) 0);
        }
      }
    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__FuncName_9)) == (MR_mktag((MR_Integer) 1))))
      ml_backend__mlds_to_cs__FunctionNameStr_29 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FuncName_9, (MR_Integer) 0)));
    else
      {
        MR_Word ml_backend__mlds_to_cs__PlainFuncName_33 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__FuncName_9), (MR_Integer) 0);
        MR_Word ml_backend__mlds_to_cs__PredLabel_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_33, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_33, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__MaybeSeqNum_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_33, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__PredLabelStr_38;
        MR_Integer ml_backend__mlds_to_cs__ModeNum_39;
        MR_Word ml_backend__mlds_to_cs___PredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_33, (MR_Integer) 3)));

        {
          ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(ml_backend__mlds_to_cs__PredLabel_34, &ml_backend__mlds_to_cs__PredLabelStr_38);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_35, &ml_backend__mlds_to_cs__ModeNum_39);
        }
        if ((ml_backend__mlds_to_cs__MaybeSeqNum_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ml_backend__mlds_to_cs__Var_75;
            MR_String ml_backend__mlds_to_cs__Var_83;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__ModeNum_39, &ml_backend__mlds_to_cs__Var_75);
            }
            {
              ml_backend__mlds_to_cs__Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_75);
            }
            {
              ml_backend__mlds_to_cs__FunctionNameStr_29 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_38, ml_backend__mlds_to_cs__Var_83);
            }
          }
        else
          {
            MR_Integer ml_backend__mlds_to_cs__SeqNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeSeqNum_36, (MR_Integer) 0)));
            MR_String ml_backend__mlds_to_cs__Var_56;
            MR_Word ml_backend__mlds_to_cs__Var_62 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1];
            MR_String ml_backend__mlds_to_cs__Var_64;
            MR_String ml_backend__mlds_to_cs__Var_65;
            MR_String ml_backend__mlds_to_cs__Var_72;
            MR_String ml_backend__mlds_to_cs__Var_74;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_62, ml_backend__mlds_to_cs__SeqNum_40, &ml_backend__mlds_to_cs__Var_56);
            }
            {
              ml_backend__mlds_to_cs__Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_56);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_62, ml_backend__mlds_to_cs__ModeNum_39, &ml_backend__mlds_to_cs__Var_65);
            }
            {
              ml_backend__mlds_to_cs__Var_72 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_65, ml_backend__mlds_to_cs__Var_64);
            }
            {
              ml_backend__mlds_to_cs__Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_72);
            }
            {
              ml_backend__mlds_to_cs__FunctionNameStr_29 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_38, ml_backend__mlds_to_cs__Var_74);
            }
          }
      }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__FunctionNameStr_29);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_param_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Arg_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_8, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__String_36;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_37;
    MR_Word ml_backend__mlds_to_cs__Var_39;
    MR_String ml_backend__mlds_to_cs__VarNameStr_46;
    MR_String ml_backend__mlds_to_cs__RawString_50;
    MR_String ml_backend__mlds_to_cs__MangledString_51;
    MR_Word ml_backend__mlds_to_cs___GCStmt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Var_13;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_11, (MR_Integer) 1)));
        {
          mercury__io__write_string_3_p_0((MR_String) "out ");
        }
      }
    else
      {
      }
    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_11, &ml_backend__mlds_to_cs__String_36, &ml_backend__mlds_to_cs__ArrayDims_37);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_36);
    }
    {
      ml_backend__mlds_to_cs__Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_39);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
    {
      ml_backend__mlds_to_cs__RawString_50 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__Name_10);
    }
    {
      ml_backend__mlds_to_cs__MangledString_51 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_50);
    }
    {
      ml_backend__mlds_to_cs__VarNameStr_46 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_51);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_46);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__make_out_param_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word * ml_backend__mlds_to_cs__Argument_6,
  MR_Integer ml_backend__mlds_to_cs__Num_7,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__4_4)
{
  {
    MR_Word ml_backend__mlds_to_cs__VarName_8;
    MR_Word ml_backend__mlds_to_cs__Var_10;
    MR_Word ml_backend__mlds_to_cs__Var_11;

    *ml_backend__mlds_to_cs__HeadVar__4_4 = (ml_backend__mlds_to_cs__Num_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_10, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Num_7));
    }
    {
      ml_backend__mlds_to_cs__VarName_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__VarName_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__VarName_8, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_10));
    }
    {
      ml_backend__mlds_to_cs__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_11, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Type_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__mlds_to_cs__Argument_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__mlds_to_cs__VarName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_array_assignments_for_csharp_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__GlobalVarName_11,
  MR_Word ml_backend__mlds_to_cs__ElementInit_12,
  MR_Integer ml_backend__mlds_to_cs__Index_13,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__6_6)
{
  {
    MR_String ml_backend__mlds_to_cs__DataNameStr_33;

    *ml_backend__mlds_to_cs__HeadVar__6_6 = (ml_backend__mlds_to_cs__Index_13 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_10);
    }
    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__GlobalVarName_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__RttiId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarName_11, (MR_Integer) 0)));

          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_39, &ml_backend__mlds_to_cs__DataNameStr_33);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__ConstVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_11, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Num_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_11, (MR_Integer) 1)));

          {
            ml_backend__mlds_to_cs__DataNameStr_33 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ml_backend__mlds_to_cs__ConstVar_37, ml_backend__mlds_to_cs__Num_38);
          }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__DataNameStr_33);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__Index_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = ");
    }
    {
      ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__ElementInit_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1297__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Integer ml_backend__mlds_to_cs__conv0_HeadVar__6_6;

    {
      ml_backend__mlds_to_cs__output_rtti_array_assignments_for_csharp_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv0_HeadVar__6_6);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__GlobalVarDefn_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__GlobalVarName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Initializer_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_8, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Flags_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_8, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_for_csharp\'/5", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__StructType_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_14, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FieldInits_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_14, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__Var_48;

          ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 1)));
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_for_csharp\'/5", (MR_String) "is_array");
                return;
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Var_49;

              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 1)));
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_for_csharp\'/5", (MR_String) "is_array");
                    return;
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__IsArray_105;
                  MR_Word ml_backend__mlds_to_cs__Var_50;

                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__IsArray_105 = (MR_Integer) 0;
                    }
                  else
                    {
                      MR_Word ml_backend__mlds_to_cs__CtorCat_52;
                      MR_Word ml_backend__mlds_to_cs__Var_51;
                      MR_Word ml_backend__mlds_to_cs__Var_53;

                      ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_17)) == (MR_mktag((MR_Integer) 2)));
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          ml_backend__mlds_to_cs__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 0)));
                          ml_backend__mlds_to_cs__CtorCat_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 1)));
                          ml_backend__mlds_to_cs__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 2)));
                          {
                            ml_backend__mlds_to_cs__IsArray_105 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(ml_backend__mlds_to_cs__CtorCat_52);
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__mlds_to_cs__RttiIdMaybeElement_54;

                          ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (ml_backend__mlds_to_cs__succeeded)
                            {
                              ml_backend__mlds_to_cs__RttiIdMaybeElement_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_17, (MR_Integer) 1)));
                              {
                                MR_String ml_backend__mlds_to_cs___TypeName_55;

                                {
                                  backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(ml_backend__mlds_to_cs__RttiIdMaybeElement_54, &ml_backend__mlds_to_cs___TypeName_55, &ml_backend__mlds_to_cs__IsArray_105);
                                }
                              }
                            }
                          else
                            ml_backend__mlds_to_cs__IsArray_105 = (MR_Integer) 1;
                        }
                    }
                  switch (ml_backend__mlds_to_cs__IsArray_105) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_for_csharp\'/5", (MR_String) "is_array");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ml_backend__mlds_to_cs__DataNameStr_60;
                        MR_Word ml_backend__mlds_to_cs__Var_79;

                        {
                          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
                        }
                        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__GlobalVarName_10)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__mlds_to_cs__RttiId_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarName_10, (MR_Integer) 0)));

                              {
                                backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_66, &ml_backend__mlds_to_cs__DataNameStr_60);
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word ml_backend__mlds_to_cs__ConstVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_10, (MR_Integer) 0)));
                              MR_Integer ml_backend__mlds_to_cs__Num_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_10, (MR_Integer) 1)));

                              {
                                ml_backend__mlds_to_cs__DataNameStr_60 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ml_backend__mlds_to_cs__ConstVar_64, ml_backend__mlds_to_cs__Num_65);
                              }
                            }
                            break;
                        }
                        {
                          ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__DataNameStr_60);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ".init(");
                        }
                        {
                          ml_backend__mlds_to_cs__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_79, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_79, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_2));
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_79, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
                        }
                        {
                          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__FieldInits_18, (MR_String) ",\n\t\t", ml_backend__mlds_to_cs__Var_79);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                  }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__ElementInits_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Initializer_14, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_24;
          MR_Integer ml_backend__mlds_to_cs___Index_21;
          MR_Box ml_backend__mlds_to_cs__conv2__Index_21;
          MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_23;

          {
            ml_backend__mlds_to_cs__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_14[0]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_24, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_24, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_24, 5) = ((MR_Box) (ml_backend__mlds_to_cs__GlobalVarName_10));
          }
          {
            mercury__list__foldl2_6_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_24, ml_backend__mlds_to_cs__ElementInits_20, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv2__Index_21, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_23);
          }
          ml_backend__mlds_to_cs___Index_21 = ((MR_Integer) ml_backend__mlds_to_cs__conv2__Index_21);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Var_15;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n");
    }
    {
      ml_backend__mlds_to_cs__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_15, ml_backend__mlds_to_cs__Defns_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1297__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10)
{
  {
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_12 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_9;
    MR_Word ml_backend__mlds_to_cs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__RowInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 4)));
    MR_Integer ml_backend__mlds_to_cs__Var_29;
    MR_Word ml_backend__mlds_to_cs__Var_32;
    MR_String ml_backend__mlds_to_cs__Var_42;
    MR_String ml_backend__mlds_to_cs__String_63;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_64;
    MR_Word ml_backend__mlds_to_cs__Var_66;
    MR_Word ml_backend__mlds_to_cs__Var_76;
    MR_Word ml_backend__mlds_to_cs___ClassDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___FieldIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 2)));
    MR_Integer ml_backend__mlds_to_cs___NextRow_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 3)));

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__TypeRawNum_12, &ml_backend__mlds_to_cs__Var_42);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_42);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = new ");
    }
    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_13, &ml_backend__mlds_to_cs__String_63, &ml_backend__mlds_to_cs__ArrayDims_64);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_63);
    }
    {
      ml_backend__mlds_to_cs__Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_66);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] {\n");
    }
    ml_backend__mlds_to_cs__Var_29 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Var_29);
    }
    {
      ml_backend__mlds_to_cs__Var_32 = mercury__cord__list_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__RowInits_17);
    }
    {
      ml_backend__mlds_to_cs__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_76, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_76, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_76, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__Var_32, (MR_String) ",\n\t\t", ml_backend__mlds_to_cs__Var_76);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_decl_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10)
{
  {
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_12 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_9;
    MR_Word ml_backend__mlds_to_cs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__ClassDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__Var_33;
    MR_String ml_backend__mlds_to_cs__String_54;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_55;
    MR_Word ml_backend__mlds_to_cs__Var_57;
    MR_Word ml_backend__mlds_to_cs___FieldIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 2)));
    MR_Integer ml_backend__mlds_to_cs___NextRow_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___RowInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 4)));

    {
      ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Indent_8, ml_backend__mlds_to_cs__ClassDefn_14);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static /* readonly */ ");
    }
    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_13, &ml_backend__mlds_to_cs__String_54, &ml_backend__mlds_to_cs__ArrayDims_55);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_54);
    }
    {
      ml_backend__mlds_to_cs__Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_57);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] MR_vector_common_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__TypeRawNum_12, &ml_backend__mlds_to_cs__Var_33);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_33);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_init_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Map_9,
  MR_Word ml_backend__mlds_to_cs__Scalar_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__Initializer_12;
    MR_Word ml_backend__mlds_to_cs__Type_14;
    MR_Word ml_backend__mlds_to_cs__TypeNum_15;
    MR_Integer ml_backend__mlds_to_cs__RowNum_16;
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_17;
    MR_Word ml_backend__mlds_to_cs__Var_28;
    MR_String ml_backend__mlds_to_cs__Var_37;
    MR_Word ml_backend__mlds_to_cs__Var_43;
    MR_String ml_backend__mlds_to_cs__Var_47;
    MR_Box ml_backend__mlds_to_cs__conv0_Initializer_12;
    MR_Word ml_backend__mlds_to_cs__Var_13;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__Map_9, ((MR_Box) (ml_backend__mlds_to_cs__Scalar_10)), &ml_backend__mlds_to_cs__conv0_Initializer_12);
    }
    ml_backend__mlds_to_cs__Initializer_12 = ((MR_Word) ml_backend__mlds_to_cs__conv0_Initializer_12);
    ml_backend__mlds_to_cs__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__TypeNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__RowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__TypeRawNum_17 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_15;
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_scalar_common_");
    }
    ml_backend__mlds_to_cs__Var_43 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_43, ml_backend__mlds_to_cs__TypeRawNum_17, &ml_backend__mlds_to_cs__Var_37);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_37);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_43, ml_backend__mlds_to_cs__RowNum_16, &ml_backend__mlds_to_cs__Var_47);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_47);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = ");
    }
    {
      ml_backend__mlds_to_cs__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_28, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_14));
    }
    {
      ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_12, ml_backend__mlds_to_cs__Var_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_7)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Integer ml_backend__mlds_to_cs__conv2_HeadVar__6_6;
    MR_Word ml_backend__mlds_to_cs__conv1_HeadVar__8_8;
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__10_10;

    {
      ml_backend__mlds_to_target_util__add_scalar_inits_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv2_HeadVar__6_6, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_4), &ml_backend__mlds_to_cs__conv1_HeadVar__8_8, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_6), &ml_backend__mlds_to_cs__conv0_HeadVar__10_10);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv2_HeadVar__6_6));
    *ml_backend__mlds_to_cs__wrapper_arg_5 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_HeadVar__8_8));
    *ml_backend__mlds_to_cs__wrapper_arg_7 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__10_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_11,
  MR_Integer ml_backend__mlds_to_cs__Indent_12,
  MR_Word ml_backend__mlds_to_cs__TypeNum_13,
  MR_Word ml_backend__mlds_to_cs__CellGroup_14,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_28,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_29,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_30,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Map_31)
{
  {
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_60_60;
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_18 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_13;
    MR_Word ml_backend__mlds_to_cs__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__RowInitsCord_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__ArrayType_24;
    MR_Word ml_backend__mlds_to_cs__RowInits_25;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_26;
    MR_Word ml_backend__mlds_to_cs__Var_43;
    MR_Word ml_backend__mlds_to_cs__Var_44;
    MR_Word ml_backend__mlds_to_cs__Var_48;
    MR_String ml_backend__mlds_to_cs__Var_74;
    MR_Word ml_backend__mlds_to_cs___InitArraySize_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Counter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs___Members_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_52;
    MR_Word ml_backend__mlds_to_cs__Var_53;
    MR_Word ml_backend__mlds_to_cs__Var_54;
    MR_Word ml_backend__mlds_to_cs__Var_55;
    MR_String ml_backend__mlds_to_cs__Var_56;
    MR_Word ml_backend__mlds_to_cs__Var_57;
    MR_Word ml_backend__mlds_to_cs__Var_58;
    MR_Word ml_backend__mlds_to_cs__Var_59;
    MR_Integer ml_backend__mlds_to_cs__Var_27;
    MR_Box ml_backend__mlds_to_cs__conv5_Var_27;
    MR_Box ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_Graph_29;
    MR_Box ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Map_31;

    {
      ml_backend__mlds_to_cs__ArrayType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__ArrayType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__ArrayType_24, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Type_19));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_60_60 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    {
      ml_backend__mlds_to_cs__RowInits_25 = mercury__cord__list_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_60_60, ml_backend__mlds_to_cs__RowInitsCord_23);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static readonly ");
    }
    {
      ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_11, ml_backend__mlds_to_cs__Type_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] MR_scalar_common_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__TypeRawNum_18, &ml_backend__mlds_to_cs__Var_74);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_74);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_43, 0) = ((MR_Box) (ml_backend__mlds_to_cs__RowInits_25));
    }
    {
      ml_backend__mlds_to_cs__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_44, 0) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayType_24));
    }
    {
      ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_11, ml_backend__mlds_to_cs__Var_43, ml_backend__mlds_to_cs__Var_44);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
    ml_backend__mlds_to_cs__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Var_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__MLDS_ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 6)));
    {
      ml_backend__mlds_to_cs__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 3) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_ModuleName_26));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Type_19));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 5) = ((MR_Box) (ml_backend__mlds_to_cs__TypeNum_13));
    }
    {
      mercury__list__foldl3_8_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[3], (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[0], ml_backend__mlds_to_cs__Var_48, ml_backend__mlds_to_cs__RowInits_25, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv5_Var_27, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_28)), &ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_Graph_29, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_30)), &ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Map_31);
    }
    ml_backend__mlds_to_cs__Var_27 = ((MR_Integer) ml_backend__mlds_to_cs__conv5_Var_27);
    *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_29 = ((MR_Word) ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_Graph_29);
    *ml_backend__mlds_to_cs__STATE_VARIABLE_Map_31 = ((MR_Word) ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Map_31);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constant_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs___EnumName_9,
  MR_Word ml_backend__mlds_to_cs__FieldVarDefn_10)
{
  {
    ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_6_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Indent_8, ml_backend__mlds_to_cs__FieldVarDefn_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__FieldVarDefn_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__FieldVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Initializer_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___GCStmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ml_backend__mlds_to_cs__Var_29;

          {
            ml_backend__mlds_to_cs__Var_29 = mercury__string__string_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ((MR_Box) (ml_backend__mlds_to_cs__Initializer_16)));
          }
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant_for_csharp\'/6", ml_backend__mlds_to_cs__Var_29);
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Initializer_16, (MR_Integer) 0)));
          MR_String ml_backend__mlds_to_cs__VarNameStr_54;
          MR_String ml_backend__mlds_to_cs__RawString_58;
          MR_String ml_backend__mlds_to_cs__MangledString_59;
          MR_Integer ml_backend__mlds_to_cs__N_19;
          MR_Word ml_backend__mlds_to_cs__Var_34;
          MR_Word ml_backend__mlds_to_cs__Var_20;

          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
          }
          {
            ml_backend__mlds_to_cs__RawString_58 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__FieldVarName_12);
          }
          {
            ml_backend__mlds_to_cs__MangledString_59 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_58);
          }
          {
            ml_backend__mlds_to_cs__VarNameStr_54 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_59);
          }
          {
            ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_54);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_18, (MR_Integer) 1)));
              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_34, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_34, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_34, (MR_Integer) 2)));
                }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_19);
            }
          else
            {
              MR_String ml_backend__mlds_to_cs__String_21;
              MR_Word ml_backend__mlds_to_cs__Type_22;
              MR_Word ml_backend__mlds_to_cs__Var_36;
              MR_Word ml_backend__mlds_to_cs__Var_37;

              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_18, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_36, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_36, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__String_21 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_36, (MR_Integer) 2)));
                      ml_backend__mlds_to_cs__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_36, (MR_Integer) 3)));
                      ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_37 == (MR_Integer) 1);
                    }
                }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  MR_String ml_backend__mlds_to_cs__String_73;
                  MR_Word ml_backend__mlds_to_cs__ArrayDims_74;
                  MR_Word ml_backend__mlds_to_cs__Var_76;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_22, &ml_backend__mlds_to_cs__String_73, &ml_backend__mlds_to_cs__ArrayDims_74);
                  }
                  {
                    mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_73);
                  }
                  {
                    ml_backend__mlds_to_cs__Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_74, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  {
                    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_76);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                  }
                  {
                    mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_21);
                  }
                }
              else
                {
                  MR_String ml_backend__mlds_to_cs__Var_45;

                  {
                    ml_backend__mlds_to_cs__Var_45 = mercury__string__string_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ((MR_Box) (ml_backend__mlds_to_cs__Rval_18)));
                  }
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant_for_csharp\'/6", ml_backend__mlds_to_cs__Var_45);
                    return;
                  }
                }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) ",");
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_String ml_backend__mlds_to_cs__Var_29;

          {
            ml_backend__mlds_to_cs__Var_29 = mercury__string__string_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ((MR_Box) (ml_backend__mlds_to_cs__Initializer_16)));
          }
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant_for_csharp\'/6", ml_backend__mlds_to_cs__Var_29);
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__interface_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Interface_3,
  MR_String * ml_backend__mlds_to_cs__String_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Interface_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__QualClassName_5;
    MR_Integer ml_backend__mlds_to_cs__Arity_6;
    MR_Word ml_backend__mlds_to_cs__Var_7;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__QualClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 3)));
        {
          MR_Word ml_backend__mlds_to_cs__ModuleQualifier_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualClassName_5, (MR_Integer) 0)));
          MR_String ml_backend__mlds_to_cs__ClassName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualClassName_5, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__SymName_11;
          MR_String ml_backend__mlds_to_cs__ModuleNameStr_12;
          MR_Word ml_backend__mlds_to_cs___QualKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualClassName_5, (MR_Integer) 1)));

          {
            ml_backend__mlds_to_cs__SymName_11 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleQualifier_8);
          }
          {
            parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__SymName_11, (MR_Integer) 0, (MR_String) ".", &ml_backend__mlds_to_cs__ModuleNameStr_12);
          }
          ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__ClassName_10, (MR_String) "MercuryType") == 0);
          if (ml_backend__mlds_to_cs__succeeded)
            {
              {
                *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ModuleNameStr_12, (MR_String) ".MercuryType");
              }
            }
          else
            {
              MR_String ml_backend__mlds_to_cs__Var_33;
              MR_String ml_backend__mlds_to_cs__Var_40;
              MR_String ml_backend__mlds_to_cs__Var_42;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__Arity_6, &ml_backend__mlds_to_cs__Var_33);
              }
              {
                ml_backend__mlds_to_cs__Var_40 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ClassName_10, ml_backend__mlds_to_cs__Var_33);
              }
              {
                ml_backend__mlds_to_cs__Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__Var_40);
              }
              {
                *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ModuleNameStr_12, ml_backend__mlds_to_cs__Var_42);
              }
            }
        }
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.interface_to_string\'/2", (MR_String) "interface was not a class");
          return;
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_field_var_defn_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_class_defn_for_csharp__707__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ClassDefn_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeName_10;
    MR_Word ml_backend__mlds_to_cs__Flags_12;
    MR_Word ml_backend__mlds_to_cs__Kind_13;
    MR_Word ml_backend__mlds_to_cs__BaseClasses_15;
    MR_Word ml_backend__mlds_to_cs__Implements_16;
    MR_Word ml_backend__mlds_to_cs__TypeParams_17;
    MR_Word ml_backend__mlds_to_cs__MemberFields_18;
    MR_Word ml_backend__mlds_to_cs__MemberClasses_19;
    MR_Word ml_backend__mlds_to_cs__MemberMethods_20;
    MR_Word ml_backend__mlds_to_cs__Ctors_21;
    MR_String ml_backend__mlds_to_cs__ClassName_22;
    MR_Integer ml_backend__mlds_to_cs__Arity_23;
    MR_Word ml_backend__mlds_to_cs__OutputGenerics_24;
    MR_Word ml_backend__mlds_to_cs__Var_30;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38;
    MR_Integer ml_backend__mlds_to_cs__Var_43;
    MR_Word ml_backend__mlds_to_cs__Var_63;
    MR_Integer ml_backend__mlds_to_cs__Var_65;
    MR_Word ml_backend__mlds_to_cs__Var_67;
    MR_Word ml_backend__mlds_to_cs___Context_11;
    MR_Word ml_backend__mlds_to_cs___Imports_14;
    MR_Word ml_backend__mlds_to_cs__Var_71;
    MR_Word ml_backend__mlds_to_cs__Var_72;
    MR_Word ml_backend__mlds_to_cs__Var_73;
    MR_Word ml_backend__mlds_to_cs__Var_74;
    MR_Word ml_backend__mlds_to_cs__Var_75;
    MR_String ml_backend__mlds_to_cs__Var_76;
    MR_Word ml_backend__mlds_to_cs__Var_77;
    MR_Word ml_backend__mlds_to_cs__Var_78;
    MR_Word ml_backend__mlds_to_cs__Var_79;
    MR_Word ml_backend__mlds_to_cs__Var_80;
    MR_Word ml_backend__mlds_to_cs__Var_81;
    MR_Word ml_backend__mlds_to_cs__Var_82;
    MR_Word ml_backend__mlds_to_cs__Var_83;
    MR_Word ml_backend__mlds_to_cs__Var_84;
    MR_String ml_backend__mlds_to_cs__Var_85;
    MR_Word ml_backend__mlds_to_cs__Var_86;
    MR_Word ml_backend__mlds_to_cs__Var_87;
    MR_Box ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_64_64;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    ml_backend__mlds_to_cs__TypeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 0)));
    ml_backend__mlds_to_cs___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__Flags_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 3)));
    ml_backend__mlds_to_cs___Imports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__BaseClasses_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__Implements_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 6)));
    ml_backend__mlds_to_cs__TypeParams_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 7)));
    ml_backend__mlds_to_cs__MemberFields_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 8)));
    ml_backend__mlds_to_cs__MemberClasses_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 9)));
    ml_backend__mlds_to_cs__MemberMethods_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 10)));
    ml_backend__mlds_to_cs__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_8, (MR_Integer) 11)));
    {
      ml_backend__mlds_to_cs__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_30, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[5]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_30, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_30, 3) = ((MR_Box) (ml_backend__mlds_to_cs__MemberMethods_20));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_3_p_0(ml_backend__mlds_to_cs__Var_30, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_class_defn_for_csharp\'/5", (MR_String) "MemberMethods != []");
    }
    switch (ml_backend__mlds_to_cs__Kind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "[System.Serializable]\n");
          }
          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
          }
          {
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(ml_backend__mlds_to_cs__Flags_12, ml_backend__mlds_to_cs__Kind_13);
          }
          {
            ml_backend__mlds_to_cs__output_class_kind_for_csharp_3_p_0(ml_backend__mlds_to_cs__Kind_13);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(ml_backend__mlds_to_cs__Flags_12, ml_backend__mlds_to_cs__Kind_13);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "interface ");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(ml_backend__mlds_to_cs__Flags_12, ml_backend__mlds_to_cs__Kind_13);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "struct ");
          }
        }
        break;
    }
    ml_backend__mlds_to_cs__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Var_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Var_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
    {
      ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Var_71));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) ((ml_backend__mlds_to_cs__Var_72 | ((((ml_backend__mlds_to_cs__Var_73 << (MR_Integer) 1)) | ((ml_backend__mlds_to_cs__Var_74 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (ml_backend__mlds_to_cs__Var_75));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Var_76));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_77));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (ml_backend__mlds_to_cs__Var_78));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) (ml_backend__mlds_to_cs__TypeParams_17));
    }
    ml_backend__mlds_to_cs__ClassName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__TypeName_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__TypeName_10, (MR_Integer) 1)));
    {
      ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__ClassName_22, ml_backend__mlds_to_cs__Arity_23);
    }
    ml_backend__mlds_to_cs__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Var_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Var_85 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__OutputGenerics_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, (MR_Integer) 6)));
    switch (ml_backend__mlds_to_cs__OutputGenerics_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(ml_backend__mlds_to_cs__TypeParams_17);
        }
        break;
    }
    {
      mercury__io__nl_2_p_0();
    }
    ml_backend__mlds_to_cs__Var_43 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_supers_list_6_p_0(ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, ml_backend__mlds_to_cs__Var_43, ml_backend__mlds_to_cs__BaseClasses_15, ml_backend__mlds_to_cs__Implements_16);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    switch (ml_backend__mlds_to_cs__Kind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_93_93;
          MR_Word ml_backend__mlds_to_cs__Var_53;
          MR_Integer ml_backend__mlds_to_cs__Var_55 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_58;
          MR_Integer ml_backend__mlds_to_cs__Var_60;
          MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_54_54;
          MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_59_59;

          {
            ml_backend__mlds_to_cs__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_53, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[9]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_53, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_53, 3) = ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_53, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_55));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_53, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ml_backend__mlds_to_cs__TypeCtorInfo_93_93 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
          {
            mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0, ml_backend__mlds_to_cs__TypeCtorInfo_93_93, ml_backend__mlds_to_cs__Var_53, ml_backend__mlds_to_cs__MemberFields_18, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_54_54);
          }
          ml_backend__mlds_to_cs__Var_60 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
          {
            ml_backend__mlds_to_cs__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_58, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_58, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_58, 3) = ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_58, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_60));
          }
          {
            mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0, ml_backend__mlds_to_cs__TypeCtorInfo_93_93, ml_backend__mlds_to_cs__Var_58, ml_backend__mlds_to_cs__MemberClasses_19, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_59_59);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__EnumConstMemberFields_25;
          MR_Integer ml_backend__mlds_to_cs__Var_50;

          {
            mercury__list__filter_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[13], ml_backend__mlds_to_cs__MemberFields_18, &ml_backend__mlds_to_cs__EnumConstMemberFields_25);
          }
          ml_backend__mlds_to_cs__Var_50 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 2);
          {
            ml_backend__mlds_to_cs__output_enum_constants_for_csharp_6_p_0(ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38, ml_backend__mlds_to_cs__Var_50, ml_backend__mlds_to_cs__TypeName_10, ml_backend__mlds_to_cs__EnumConstMemberFields_25);
          }
        }
        break;
    }
    {
      mercury__io__nl_2_p_0();
    }
    ml_backend__mlds_to_cs__Var_65 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_67, 0) = ((MR_Box) (ml_backend__mlds_to_cs__TypeName_10));
    }
    {
      ml_backend__mlds_to_cs__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_5));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_63, 3) = ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Info_38_38));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_63, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_65));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_63, 5) = ((MR_Box) (ml_backend__mlds_to_cs__Var_67));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_63, ml_backend__mlds_to_cs__Ctors_21, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_64_64);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Flags_7,
  MR_Word ml_backend__mlds_to_cs__Kind_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Access_12;
    MR_Word ml_backend__mlds_to_cs__Constness_13;

    {
      ml_backend__mlds_to_cs__Access_12 = ml_backend__mlds__get_class_access_1_f_0(ml_backend__mlds_to_cs__Flags_7);
    }
    {
      ml_backend__mlds_to_cs__Constness_13 = ml_backend__mlds__get_class_constness_1_f_0(ml_backend__mlds_to_cs__Flags_7);
    }
    switch (ml_backend__mlds_to_cs__Access_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "private ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "public ");
          }
        }
        break;
    }
    switch (ml_backend__mlds_to_cs__Kind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__Overridable_11;

          {
            ml_backend__mlds_to_cs__Overridable_11 = ml_backend__mlds__get_class_overridability_1_f_0(ml_backend__mlds_to_cs__Flags_7);
          }
          switch (ml_backend__mlds_to_cs__Overridable_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "sealed ");
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Overridable_52;

          {
            ml_backend__mlds_to_cs__Overridable_52 = ml_backend__mlds__get_class_overridability_1_f_0(ml_backend__mlds_to_cs__Flags_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "static ");
          }
          switch (ml_backend__mlds_to_cs__Overridable_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "sealed ");
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
    switch (ml_backend__mlds_to_cs__Constness_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "readonly ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_enum_constant_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__EnumName_9,
  MR_Word ml_backend__mlds_to_cs__EnumConsts_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__Var_15;

    {
      ml_backend__mlds_to_cs__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[8]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_enum_constants_for_csharp_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_8));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_15, 5) = ((MR_Box) (ml_backend__mlds_to_cs__EnumName_9));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0, ml_backend__mlds_to_cs__EnumConsts_10, (MR_String) "\n", ml_backend__mlds_to_cs__Var_15);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_String_4;

    {
      ml_backend__mlds_to_cs__interface_to_string_2_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_String_4);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_String_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__BaseClasses_9,
  MR_Word ml_backend__mlds_to_cs__Interfaces_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word ml_backend__mlds_to_cs__Strings0_12;
    MR_Word ml_backend__mlds_to_cs__Strings_13;

    {
      mercury__list__map_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__mlds_to_cs__TypeCtorInfo_39_39, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[11], ml_backend__mlds_to_cs__Interfaces_10, &ml_backend__mlds_to_cs__Strings0_12);
    }
    if ((ml_backend__mlds_to_cs__BaseClasses_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__mlds_to_cs__Strings_13 = ml_backend__mlds_to_cs__Strings0_12;
    else
      {
        MR_Word ml_backend__mlds_to_cs__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__BaseClasses_9, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__BaseClasses_9, (MR_Integer) 0)));

        if ((ml_backend__mlds_to_cs__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ml_backend__mlds_to_cs__BaseClassString_15;
            MR_Word ml_backend__mlds_to_cs___ArrayDims_16;

            {
              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Var_44, &ml_backend__mlds_to_cs__BaseClassString_15, &ml_backend__mlds_to_cs___ArrayDims_16);
            }
            {
              ml_backend__mlds_to_cs__Strings_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Strings_13, 0) = ((MR_Box) (ml_backend__mlds_to_cs__BaseClassString_15));
              MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Strings_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Strings0_12));
            }
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_supers_list\'/6", (MR_String) "multiple inheritance not supported");
              return;
            }
          }
      }
    if ((ml_backend__mlds_to_cs__Strings_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": ");
        }
        {
          mercury__io__write_list_5_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_39_39, ml_backend__mlds_to_cs__Strings_13, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[12]);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_kind_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Kind_4)
{
  switch (ml_backend__mlds_to_cs__Kind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "class ");
        }
      }
      break;
    case (MR_Integer) 3:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "enum ");
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "interface ");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__FunctionDefn_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__FuncName_12;
    MR_Word ml_backend__mlds_to_cs__Context_13;
    MR_Word ml_backend__mlds_to_cs__Flags_14;
    MR_Word ml_backend__mlds_to_cs__MaybePredProcId_15;
    MR_Word ml_backend__mlds_to_cs__Params_16;
    MR_Word ml_backend__mlds_to_cs__MaybeBody_17;
    MR_String ml_backend__mlds_to_cs__PreStr_21;
    MR_String ml_backend__mlds_to_cs__PostStr_22;
    MR_Word ml_backend__mlds_to_cs__Access_47;
    MR_Word ml_backend__mlds_to_cs__PerInstance_48;
    MR_Word ml_backend__mlds_to_cs___Attributes_18;
    MR_Word ml_backend__mlds_to_cs___EnvVarNames_19;
    MR_Word ml_backend__mlds_to_cs___MaybeRequireTailrecInfo_20;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    ml_backend__mlds_to_cs__FuncName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__MaybePredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__Params_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__MaybeBody_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 5)));
    ml_backend__mlds_to_cs___Attributes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 6)));
    ml_backend__mlds_to_cs___EnvVarNames_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 7)));
    ml_backend__mlds_to_cs___MaybeRequireTailrecInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FunctionDefn_10, (MR_Integer) 8)));
    if ((ml_backend__mlds_to_cs__MaybeBody_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__mlds_to_cs__PreStr_21 = (MR_String) "/* external:\n";
        ml_backend__mlds_to_cs__PostStr_22 = (MR_String) "*/\n";
      }
    else
      {
        ml_backend__mlds_to_cs__PreStr_21 = (MR_String) "";
        ml_backend__mlds_to_cs__PostStr_22 = (MR_String) "";
      }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__PreStr_21);
    }
    {
      ml_backend__mlds_to_cs__Access_47 = ml_backend__mlds__get_function_access_1_f_0(ml_backend__mlds_to_cs__Flags_14);
    }
    {
      ml_backend__mlds_to_cs__PerInstance_48 = ml_backend__mlds__get_function_per_instance_1_f_0(ml_backend__mlds_to_cs__Flags_14);
    }
    switch (ml_backend__mlds_to_cs__Access_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "private ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "public ");
          }
        }
        break;
    }
    switch (ml_backend__mlds_to_cs__PerInstance_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "static ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    if ((ml_backend__mlds_to_cs__MaybePredProcId_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__PredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybePredProcId_15, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));

        {
          ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_4_p_0(ml_backend__mlds_to_cs__Var_30, ml_backend__mlds_to_cs__PredProcId_24);
        }
      }
    {
      ml_backend__mlds_to_cs__output_func_for_csharp_9_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Indent_8, ml_backend__mlds_to_cs__FuncName_12, ml_backend__mlds_to_cs__OutputAux_9, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Params_16, ml_backend__mlds_to_cs__MaybeBody_17);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__PostStr_22);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_for_csharp_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_10,
  MR_Integer ml_backend__mlds_to_cs__Indent_11,
  MR_Word ml_backend__mlds_to_cs__FuncName_12,
  MR_Word ml_backend__mlds_to_cs__OutputAux_13,
  MR_Word ml_backend__mlds_to_cs__Context_14,
  MR_Word ml_backend__mlds_to_cs__Signature_15,
  MR_Word ml_backend__mlds_to_cs__MaybeBody_16)
{
  if ((ml_backend__mlds_to_cs__MaybeBody_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
    }
  else
    {
      MR_Word ml_backend__mlds_to_cs__Body_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeBody_16, (MR_Integer) 0)));
      MR_Word ml_backend__mlds_to_cs__Var_26;
      MR_Integer ml_backend__mlds_to_cs__Var_30;
      MR_Word ml_backend__mlds_to_cs__Var_33;
      MR_Word ml_backend__mlds_to_cs__Var_37;
      MR_Word ml_backend__mlds_to_cs__Var_39;
      MR_Word ml_backend__mlds_to_cs__Var_40;
      MR_Word ml_backend__mlds_to_cs__Var_41;
      MR_Word ml_backend__mlds_to_cs__Var_42;
      MR_String ml_backend__mlds_to_cs__Var_43;
      MR_Word ml_backend__mlds_to_cs__Var_44;
      MR_Word ml_backend__mlds_to_cs__Var_45;
      MR_Word ml_backend__mlds_to_cs__Var_46;
      MR_Word ml_backend__mlds_to_cs___ExitMethods_20;
      MR_Word ml_backend__mlds_to_cs__Var_47;
      MR_Word ml_backend__mlds_to_cs__Var_48;
      MR_Word ml_backend__mlds_to_cs__Var_49;
      MR_Word ml_backend__mlds_to_cs__Var_50;
      MR_String ml_backend__mlds_to_cs__Var_51;
      MR_Word ml_backend__mlds_to_cs__Var_52;
      MR_Word ml_backend__mlds_to_cs__Var_53;
      MR_Word ml_backend__mlds_to_cs__Var_54;
      MR_Word ml_backend__mlds_to_cs__Var_55;
      MR_Word ml_backend__mlds_to_cs__Var_56;
      MR_Word ml_backend__mlds_to_cs__Var_57;
      MR_Word ml_backend__mlds_to_cs__Var_58;
      MR_String ml_backend__mlds_to_cs__Var_59;
      MR_Word ml_backend__mlds_to_cs__Var_60;
      MR_Word ml_backend__mlds_to_cs__Var_61;
      MR_Word ml_backend__mlds_to_cs__Var_62;

      {
        ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0(ml_backend__mlds_to_cs__Info_10, ml_backend__mlds_to_cs__Indent_11, ml_backend__mlds_to_cs__FuncName_12, ml_backend__mlds_to_cs__OutputAux_13, ml_backend__mlds_to_cs__Signature_15);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      ml_backend__mlds_to_cs__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 0)));
      ml_backend__mlds_to_cs__Var_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 2)));
      ml_backend__mlds_to_cs__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 3)));
      ml_backend__mlds_to_cs__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 4)));
      ml_backend__mlds_to_cs__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 5)));
      ml_backend__mlds_to_cs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 6)));
      {
        ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_26, ml_backend__mlds_to_cs__Context_14, ml_backend__mlds_to_cs__Indent_11);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "{\n");
      }
      ml_backend__mlds_to_cs__Var_30 = (ml_backend__mlds_to_cs__Indent_11 + (MR_Integer) 1);
      {
        ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_10, ml_backend__mlds_to_cs__Var_30, ml_backend__mlds_to_cs__Body_18, &ml_backend__mlds_to_cs___ExitMethods_20);
      }
      ml_backend__mlds_to_cs__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 0)));
      ml_backend__mlds_to_cs__Var_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 2)));
      ml_backend__mlds_to_cs__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 3)));
      ml_backend__mlds_to_cs__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 4)));
      ml_backend__mlds_to_cs__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 5)));
      ml_backend__mlds_to_cs__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 6)));
      {
        ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_33, ml_backend__mlds_to_cs__Context_14, ml_backend__mlds_to_cs__Indent_11);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "}\n");
      }
      ml_backend__mlds_to_cs__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 0)));
      ml_backend__mlds_to_cs__Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      ml_backend__mlds_to_cs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 2)));
      ml_backend__mlds_to_cs__Var_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 3)));
      ml_backend__mlds_to_cs__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 4)));
      ml_backend__mlds_to_cs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 5)));
      ml_backend__mlds_to_cs__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 6)));
      switch (ml_backend__mlds_to_cs__Var_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "#line default\n");
            }
          }
          break;
      }
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Context_12,
  MR_Word ml_backend__mlds_to_cs__Default_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Default_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ml_backend__mlds_to_cs__Default_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__mlds_to_cs__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_23;
            MR_Integer ml_backend__mlds_to_cs__Var_24;
            MR_Word ml_backend__mlds_to_cs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Var_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
            MR_String ml_backend__mlds_to_cs__Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
            MR_Word ml_backend__mlds_to_cs__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
            MR_Word ml_backend__mlds_to_cs__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
            MR_Word ml_backend__mlds_to_cs__Var_66;
            MR_Word ml_backend__mlds_to_cs__Var_67;
            MR_Word ml_backend__mlds_to_cs__Var_68;
            MR_Word ml_backend__mlds_to_cs__Var_69;
            MR_String ml_backend__mlds_to_cs__Var_70;
            MR_Word ml_backend__mlds_to_cs__Var_71;
            MR_Word ml_backend__mlds_to_cs__Var_72;
            MR_Word ml_backend__mlds_to_cs__Var_73;

            {
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_19, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/\n");
            }
            ml_backend__mlds_to_cs__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
            ml_backend__mlds_to_cs__Var_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
            ml_backend__mlds_to_cs__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_cs__Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            ml_backend__mlds_to_cs__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
            ml_backend__mlds_to_cs__Var_70 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
            ml_backend__mlds_to_cs__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
            ml_backend__mlds_to_cs__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
            ml_backend__mlds_to_cs__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
            ml_backend__mlds_to_cs__Var_24 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
            {
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_23, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Var_24);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
            }
            {
              *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 3)));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__mlds_to_cs__Statement_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Default_13, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer ml_backend__mlds_to_cs__Var_34;
        MR_Word ml_backend__mlds_to_cs__Var_37;
        MR_Word ml_backend__mlds_to_cs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
        MR_Word ml_backend__mlds_to_cs__Var_50;
        MR_Word ml_backend__mlds_to_cs__Var_51;
        MR_Word ml_backend__mlds_to_cs__Var_52;
        MR_Word ml_backend__mlds_to_cs__Var_53;
        MR_String ml_backend__mlds_to_cs__Var_54;
        MR_Word ml_backend__mlds_to_cs__Var_55;
        MR_Word ml_backend__mlds_to_cs__Var_56;
        MR_Word ml_backend__mlds_to_cs__Var_57;

        {
          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_30, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "default:\n");
        }
        ml_backend__mlds_to_cs__Var_34 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Var_34, ml_backend__mlds_to_cs__Statement_16, ml_backend__mlds_to_cs__ExitMethods_14);
        }
        ml_backend__mlds_to_cs__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
        ml_backend__mlds_to_cs__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
        ml_backend__mlds_to_cs__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
        ml_backend__mlds_to_cs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
        {
          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_37, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "break;\n");
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__Context_4,
  MR_Word ml_backend__mlds_to_cs__HeadVar__5_5,
  MR_Word ml_backend__mlds_to_cs__Default_6,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_7)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if ((ml_backend__mlds_to_cs__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Context_4, ml_backend__mlds_to_cs__Default_6, ml_backend__mlds_to_cs__ExitMethods_7);
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Case_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__CaseExitMethods0_29;
        MR_Word ml_backend__mlds_to_cs__CasesExitMethods_30;
        MR_Word ml_backend__mlds_to_cs__CaseExitMethods_31;
        MR_Word ml_backend__mlds_to_cs__FirstCond_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_24, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__LaterConds_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_24, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__Statement_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_24, (MR_Integer) 2)));
        MR_Word ml_backend__mlds_to_cs__StmtExitMethods_55;
        MR_Word ml_backend__mlds_to_cs__Var_57;
        MR_Integer ml_backend__mlds_to_cs__Var_59;
        MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_24_58;

        {
          ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Context_4, ml_backend__mlds_to_cs__FirstCond_52);
        }
        {
          ml_backend__mlds_to_cs__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[7]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_57, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_1));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_57, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_57, 5) = ((MR_Box) (ml_backend__mlds_to_cs__Context_4));
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_57, ml_backend__mlds_to_cs__LaterConds_53, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_24_58);
        }
        ml_backend__mlds_to_cs__Var_59 = (ml_backend__mlds_to_cs__Indent_2 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Var_59, ml_backend__mlds_to_cs__Statement_54, &ml_backend__mlds_to_cs__StmtExitMethods_55);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)), ml_backend__mlds_to_cs__StmtExitMethods_55);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_52_86;
            MR_Word ml_backend__mlds_to_cs__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Integer ml_backend__mlds_to_cs__Var_64 = (ml_backend__mlds_to_cs__Indent_2 + (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_69;
            MR_Word ml_backend__mlds_to_cs__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Var_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 2)));
            MR_String ml_backend__mlds_to_cs__Var_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 4)));
            MR_Word ml_backend__mlds_to_cs__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 5)));
            MR_Word ml_backend__mlds_to_cs__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_1, (MR_Integer) 6)));

            {
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_63, ml_backend__mlds_to_cs__Context_4, ml_backend__mlds_to_cs__Var_64);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "break;\n");
            }
            ml_backend__mlds_to_cs__TypeCtorInfo_52_86 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
            {
              ml_backend__mlds_to_cs__Var_69 = mercury__set__insert_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_52_86, ml_backend__mlds_to_cs__StmtExitMethods_55, ((MR_Box) ((MR_Integer) 0)));
            }
            {
              ml_backend__mlds_to_cs__CaseExitMethods0_29 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_52_86, ml_backend__mlds_to_cs__Var_69, ((MR_Box) ((MR_Integer) 4)));
            }
          }
        else
          ml_backend__mlds_to_cs__CaseExitMethods0_29 = ml_backend__mlds_to_cs__StmtExitMethods_55;
        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Context_4, ml_backend__mlds_to_cs__Cases_25, ml_backend__mlds_to_cs__Default_6, &ml_backend__mlds_to_cs__CasesExitMethods_30);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__mlds_to_cs__CaseExitMethods0_29);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_41_41 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
            MR_Word ml_backend__mlds_to_cs__Var_37;

            {
              ml_backend__mlds_to_cs__Var_37 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, ml_backend__mlds_to_cs__CaseExitMethods0_29, ((MR_Box) ((MR_Integer) 0)));
            }
            {
              ml_backend__mlds_to_cs__CaseExitMethods_31 = mercury__set__insert_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, ml_backend__mlds_to_cs__Var_37, ((MR_Box) ((MR_Integer) 4)));
            }
          }
        else
          ml_backend__mlds_to_cs__CaseExitMethods_31 = ml_backend__mlds_to_cs__CaseExitMethods0_29;
        {
          *ml_backend__mlds_to_cs__ExitMethods_7 = mercury__set__union_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__CaseExitMethods_31, ml_backend__mlds_to_cs__CasesExitMethods_30);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Integer ml_backend__mlds_to_cs__conv3_HeadVar__5_5;

    {
      ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv3_HeadVar__5_5);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_Box ml_backend__mlds_to_cs__wrapper_arg_2;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv2_LambdaHeadVar__2_155;

    {
      ml_backend__mlds_to_cs__conv2_LambdaHeadVar__2_155 = ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt_for_csharp__2536__1_1_f_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv2_LambdaHeadVar__2_155));
    return ml_backend__mlds_to_cs__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_local_var_defn_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Stmt_11,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_12)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Stmt_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__LocalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FuncDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__Stmts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Var_273 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Integer ml_backend__mlds_to_cs__Var_291;
          MR_Word ml_backend__mlds_to_cs__Var_294;
          MR_Word ml_backend__mlds_to_cs__Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_314 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_315 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__Var_317 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__Var_321;
          MR_Word ml_backend__mlds_to_cs__Var_322;
          MR_Word ml_backend__mlds_to_cs__Var_323;
          MR_Word ml_backend__mlds_to_cs__Var_324;
          MR_String ml_backend__mlds_to_cs__Var_325;
          MR_Word ml_backend__mlds_to_cs__Var_326;
          MR_Word ml_backend__mlds_to_cs__Var_327;
          MR_Word ml_backend__mlds_to_cs__Var_328;

          {
            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_273, ml_backend__mlds_to_cs__Context_17, ml_backend__mlds_to_cs__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "{\n");
          }
          if ((ml_backend__mlds_to_cs__LocalVarDefns_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Var_277;
              MR_Integer ml_backend__mlds_to_cs__Var_279 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_278_278;

              {
                ml_backend__mlds_to_cs__Var_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_277, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[6]));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_277, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_277, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_277, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_8));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_277, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_279));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_277, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_277, ml_backend__mlds_to_cs__LocalVarDefns_14, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_278_278);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
          if ((ml_backend__mlds_to_cs__FuncDefns_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Var_284;
              MR_Integer ml_backend__mlds_to_cs__Var_286 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_285_285;

              {
                ml_backend__mlds_to_cs__Var_284 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_284, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[4]));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_284, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_284, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_284, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_8));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_284, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_286));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_284, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_284, ml_backend__mlds_to_cs__FuncDefns_15, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_285_285);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
          ml_backend__mlds_to_cs__Var_291 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
          {
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_291, ml_backend__mlds_to_cs__Stmts_16, ml_backend__mlds_to_cs__ExitMethods_12);
          }
          ml_backend__mlds_to_cs__Var_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__Var_322 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_294 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_323 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__Var_325 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
          {
            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_294, ml_backend__mlds_to_cs__Context_17, ml_backend__mlds_to_cs__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__BodyStmt_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__Context_299 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Var_571 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_565 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__Var_566 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__Var_567 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
          MR_String ml_backend__mlds_to_cs__Var_568 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Var_569 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__Var_570 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_572 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_573 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));

          switch (ml_backend__mlds_to_cs__Kind_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer ml_backend__mlds_to_cs__Var_247;
                MR_Word ml_backend__mlds_to_cs__Var_250;
                MR_Word ml_backend__mlds_to_cs__StmtExitMethods_298;
                MR_Word ml_backend__mlds_to_cs__Var_353;
                MR_Word ml_backend__mlds_to_cs__Var_354;
                MR_Word ml_backend__mlds_to_cs__Var_355;
                MR_Word ml_backend__mlds_to_cs__Var_356;
                MR_String ml_backend__mlds_to_cs__Var_357;
                MR_Word ml_backend__mlds_to_cs__Var_358;
                MR_Word ml_backend__mlds_to_cs__Var_359;
                MR_Word ml_backend__mlds_to_cs__Var_360;

                {
                  ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_571, ml_backend__mlds_to_cs__Context_299, ml_backend__mlds_to_cs__Indent_9);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "do\n");
                }
                ml_backend__mlds_to_cs__Var_247 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
                {
                  ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_247, ml_backend__mlds_to_cs__BodyStmt_24, &ml_backend__mlds_to_cs__StmtExitMethods_298);
                }
                ml_backend__mlds_to_cs__Var_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
                ml_backend__mlds_to_cs__Var_354 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                ml_backend__mlds_to_cs__Var_250 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                ml_backend__mlds_to_cs__Var_355 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                ml_backend__mlds_to_cs__Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
                ml_backend__mlds_to_cs__Var_357 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
                ml_backend__mlds_to_cs__Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
                ml_backend__mlds_to_cs__Var_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
                ml_backend__mlds_to_cs__Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
                {
                  ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_250, ml_backend__mlds_to_cs__Context_299, ml_backend__mlds_to_cs__Indent_9);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "while (");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Cond_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
                {
                  *ml_backend__mlds_to_cs__ExitMethods_12 = ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(ml_backend__mlds_to_cs__Cond_23, ml_backend__mlds_to_cs__StmtExitMethods_298);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__mlds_to_cs__Var_264;

                {
                  ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_571, ml_backend__mlds_to_cs__Context_299, ml_backend__mlds_to_cs__Indent_9);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "while (");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Cond_23);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")\n");
                }
                ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Cond_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Cond_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    ml_backend__mlds_to_cs__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Cond_23, (MR_Integer) 1)));
                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_264 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  }
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    MR_Word ml_backend__mlds_to_cs__Var_265 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__Var_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
                    MR_Word ml_backend__mlds_to_cs__Var_338 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__Var_339 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__Var_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
                    MR_String ml_backend__mlds_to_cs__Var_341 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
                    MR_Word ml_backend__mlds_to_cs__Var_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
                    MR_Word ml_backend__mlds_to_cs__Var_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
                    MR_Word ml_backend__mlds_to_cs__Var_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));

                    {
                      ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_265, ml_backend__mlds_to_cs__Context_299, ml_backend__mlds_to_cs__Indent_9);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "{  /* Unreachable code */  }\n");
                    }
                    {
                      *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
                    }
                  }
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__StmtExitMethods_25;
                    MR_Integer ml_backend__mlds_to_cs__Var_270 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);

                    {
                      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_270, ml_backend__mlds_to_cs__BodyStmt_24, &ml_backend__mlds_to_cs__StmtExitMethods_25);
                    }
                    {
                      *ml_backend__mlds_to_cs__ExitMethods_12 = ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(ml_backend__mlds_to_cs__Cond_23, ml_backend__mlds_to_cs__StmtExitMethods_25);
                    }
                  }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Then0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__MaybeElse_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__Then_32;
          MR_Word ml_backend__mlds_to_cs__ThenExitMethods_33;
          MR_Word ml_backend__mlds_to_cs__Var_224;
          MR_Integer ml_backend__mlds_to_cs__Var_231;
          MR_Word ml_backend__mlds_to_cs__Context_300 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Cond_301 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__ThenContext_31;
          MR_Word ml_backend__mlds_to_cs__Var_219;
          MR_Word ml_backend__mlds_to_cs__Var_28;
          MR_Word ml_backend__mlds_to_cs__Var_29;
          MR_Word ml_backend__mlds_to_cs__Var_30;
          MR_Word ml_backend__mlds_to_cs__Var_361;
          MR_Word ml_backend__mlds_to_cs__Var_362;
          MR_Word ml_backend__mlds_to_cs__Var_363;
          MR_Word ml_backend__mlds_to_cs__Var_364;
          MR_String ml_backend__mlds_to_cs__Var_365;
          MR_Word ml_backend__mlds_to_cs__Var_366;
          MR_Word ml_backend__mlds_to_cs__Var_367;
          MR_Word ml_backend__mlds_to_cs__Var_368;

          ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__MaybeElse_27)) == (MR_mktag((MR_Integer) 1)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeElse_27, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Then0_26)) == (MR_mktag((MR_Integer) 2)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Then0_26, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Then0_26, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Then0_26, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__ThenContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Then0_26, (MR_Integer) 3)));
                  ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_Word ml_backend__mlds_to_cs__Var_222;

              {
                ml_backend__mlds_to_cs__Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_222, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Then0_26));
                MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__mlds_to_cs__Then_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then_32, 2) = ((MR_Box) (ml_backend__mlds_to_cs__Var_222));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then_32, 3) = ((MR_Box) (ml_backend__mlds_to_cs__ThenContext_31));
              }
            }
          else
            ml_backend__mlds_to_cs__Then_32 = ml_backend__mlds_to_cs__Then0_26;
          ml_backend__mlds_to_cs__Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__Var_362 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_224 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_363 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__Var_365 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__Var_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__Var_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
          {
            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_224, ml_backend__mlds_to_cs__Context_300, ml_backend__mlds_to_cs__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "if (");
          }
          {
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Cond_301);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
          ml_backend__mlds_to_cs__Var_231 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
          {
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_231, ml_backend__mlds_to_cs__Then_32, &ml_backend__mlds_to_cs__ThenExitMethods_33);
          }
          if ((ml_backend__mlds_to_cs__MaybeElse_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_541_541 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
              MR_Word ml_backend__mlds_to_cs__Var_234;

              {
                ml_backend__mlds_to_cs__Var_234 = mercury__set__make_singleton_set_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_541_541, ((MR_Box) ((MR_Integer) 4)));
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__union_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_541_541, ml_backend__mlds_to_cs__ThenExitMethods_33, ml_backend__mlds_to_cs__Var_234);
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Else_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeElse_27, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__ElseExitMethods_35;
              MR_Word ml_backend__mlds_to_cs__Var_236 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Integer ml_backend__mlds_to_cs__Var_240;
              MR_Word ml_backend__mlds_to_cs__Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__Var_370 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_371 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__Var_373 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__Var_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));

              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_236, ml_backend__mlds_to_cs__Context_300, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "else\n");
              }
              ml_backend__mlds_to_cs__Var_240 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_240, ml_backend__mlds_to_cs__Else_34, &ml_backend__mlds_to_cs__ElseExitMethods_35);
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__ThenExitMethods_33, ml_backend__mlds_to_cs__ElseExitMethods_35);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__Val_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Cases_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Default_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__Var_205 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Integer ml_backend__mlds_to_cs__Var_212;
              MR_Word ml_backend__mlds_to_cs__Var_215;
              MR_Word ml_backend__mlds_to_cs__Context_302 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs___Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs___Range_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__Var_378 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_379 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__Var_381 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Var_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__Var_385;
              MR_Word ml_backend__mlds_to_cs__Var_386;
              MR_Word ml_backend__mlds_to_cs__Var_387;
              MR_Word ml_backend__mlds_to_cs__Var_388;
              MR_String ml_backend__mlds_to_cs__Var_389;
              MR_Word ml_backend__mlds_to_cs__Var_390;
              MR_Word ml_backend__mlds_to_cs__Var_391;
              MR_Word ml_backend__mlds_to_cs__Var_392;

              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_205, ml_backend__mlds_to_cs__Context_302, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "switch (");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Val_37);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") {\n");
              }
              ml_backend__mlds_to_cs__Var_212 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_212, ml_backend__mlds_to_cs__Context_302, ml_backend__mlds_to_cs__Cases_39, ml_backend__mlds_to_cs__Default_40, ml_backend__mlds_to_cs__ExitMethods_12);
              }
              ml_backend__mlds_to_cs__Var_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_386 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_215 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_387 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_389 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_215, ml_backend__mlds_to_cs__Context_302, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt_for_csharp\'/7", (MR_String) "labels not supported in C#.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__Var_563 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Var_564 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_564)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__Var_564)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__mlds_to_cs__Var_195 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
                        MR_Word ml_backend__mlds_to_cs__Var_394 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__Var_395 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
                        MR_String ml_backend__mlds_to_cs__Var_397 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
                        MR_Word ml_backend__mlds_to_cs__Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
                        MR_Word ml_backend__mlds_to_cs__Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
                        MR_Word ml_backend__mlds_to_cs__Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));

                        {
                          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_195, ml_backend__mlds_to_cs__Var_563, ml_backend__mlds_to_cs__Indent_9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "break;\n");
                        }
                        {
                          *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 0)));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__mlds_to_cs__Var_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
                        MR_Word ml_backend__mlds_to_cs__Var_402 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__Var_403 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
                        MR_String ml_backend__mlds_to_cs__Var_405 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
                        MR_Word ml_backend__mlds_to_cs__Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
                        MR_Word ml_backend__mlds_to_cs__Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
                        MR_Word ml_backend__mlds_to_cs__Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));

                        {
                          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_189, ml_backend__mlds_to_cs__Var_563, ml_backend__mlds_to_cs__Indent_9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                        }
                        {
                          *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 1)));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt_for_csharp\'/7", (MR_String) "gotos not supported in C#.");
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt_for_csharp\'/7", (MR_String) "computed gotos not supported in C#.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_546_546;
              MR_Word ml_backend__mlds_to_cs__Signature_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__FuncRval_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__MaybeObject_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__CallArgs_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Results_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__IsTailCall_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__ArgTypes_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_48, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__RetTypes_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_48, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__OutArgs_57;
              MR_String ml_backend__mlds_to_cs__CloseBracket_62;
              MR_Word ml_backend__mlds_to_cs__Var_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_146;
              MR_Integer ml_backend__mlds_to_cs__Var_147;
              MR_Word ml_backend__mlds_to_cs__Var_169;
              MR_Word ml_backend__mlds_to_cs__Var_171;
              MR_Word ml_backend__mlds_to_cs__Var_181;
              MR_Word ml_backend__mlds_to_cs__Context_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 8)));
              MR_Word ml_backend__mlds_to_cs___Markers_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 7)));
              MR_Word ml_backend__mlds_to_cs__Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__Var_410 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_411 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__Var_413 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__Var_417;
              MR_Word ml_backend__mlds_to_cs__Var_418;
              MR_Word ml_backend__mlds_to_cs__Var_419;
              MR_Word ml_backend__mlds_to_cs__Var_420;
              MR_String ml_backend__mlds_to_cs__Var_421;
              MR_Word ml_backend__mlds_to_cs__Var_422;
              MR_Word ml_backend__mlds_to_cs__Var_423;
              MR_Word ml_backend__mlds_to_cs__Var_424;
              MR_Word ml_backend__mlds_to_cs__Var_156;
              MR_Word ml_backend__mlds_to_cs__Var_61;
              MR_Word ml_backend__mlds_to_cs__Var_433;
              MR_Word ml_backend__mlds_to_cs__Var_434;
              MR_Word ml_backend__mlds_to_cs__Var_435;
              MR_Word ml_backend__mlds_to_cs__Var_436;
              MR_String ml_backend__mlds_to_cs__Var_437;
              MR_Word ml_backend__mlds_to_cs__Var_438;
              MR_Word ml_backend__mlds_to_cs__Var_439;
              MR_Word ml_backend__mlds_to_cs__Var_440;

              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_142, ml_backend__mlds_to_cs__Context_306, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_418 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_419 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_421 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              ml_backend__mlds_to_cs__Var_147 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_146, ml_backend__mlds_to_cs__Context_306, ml_backend__mlds_to_cs__Var_147);
              }
              if ((ml_backend__mlds_to_cs__Results_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__mlds_to_cs__OutArgs_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Lval_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_52, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__Lvals_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_52, (MR_Integer) 1)));

                  {
                    ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Lval_58);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  {
                    ml_backend__mlds_to_cs__OutArgs_57 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[10], ml_backend__mlds_to_cs__Lvals_59);
                  }
                }
              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__FuncRval_49)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__FuncRval_49, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__FuncRval_49, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_156)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_156, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    ml_backend__mlds_to_cs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_156, (MR_Integer) 1)));
                }
              if (ml_backend__mlds_to_cs__succeeded)
                ml_backend__mlds_to_cs__CloseBracket_62 = (MR_String) "";
              else
                {
                  MR_String ml_backend__mlds_to_cs__TypeString_63;

                  {
                    ml_backend__mlds_to_cs__TypeString_63 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__ArgTypes_55, ml_backend__mlds_to_cs__RetTypes_56);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((");
                  }
                  {
                    mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__TypeString_63);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                  }
                  ml_backend__mlds_to_cs__CloseBracket_62 = (MR_String) ")";
                }
              if ((ml_backend__mlds_to_cs__MaybeObject_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Object_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeObject_50, (MR_Integer) 0)));

                  {
                    ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Object_64);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ".");
                  }
                }
              {
                ml_backend__mlds_to_cs__output_call_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__FuncRval_49);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__CloseBracket_62);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              ml_backend__mlds_to_cs__TypeCtorInfo_546_546 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
              {
                ml_backend__mlds_to_cs__Var_169 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_546_546, ml_backend__mlds_to_cs__CallArgs_51, ml_backend__mlds_to_cs__OutArgs_57);
              }
              {
                ml_backend__mlds_to_cs__Var_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_171, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[4]));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_171, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_171, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_8));
              }
              {
                mercury__io__write_list_5_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_546_546, ml_backend__mlds_to_cs__Var_169, (MR_String) ", ", ml_backend__mlds_to_cs__Var_171);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
              switch (ml_backend__mlds_to_cs__IsTailCall_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__mlds_to_cs__Var_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Integer ml_backend__mlds_to_cs__Var_176 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
                    MR_Word ml_backend__mlds_to_cs__Var_426 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__Var_427 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
                    MR_String ml_backend__mlds_to_cs__Var_429 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
                    MR_Word ml_backend__mlds_to_cs__Var_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
                    MR_Word ml_backend__mlds_to_cs__Var_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
                    MR_Word ml_backend__mlds_to_cs__Var_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));

                    {
                      ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_175, ml_backend__mlds_to_cs__Context_306, ml_backend__mlds_to_cs__Var_176);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
              ml_backend__mlds_to_cs__Var_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_434 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_435 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_437 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_181, ml_backend__mlds_to_cs__Context_306, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__mlds_to_cs__Context_307 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Results_308 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));

              if ((ml_backend__mlds_to_cs__Results_308 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ml_backend__mlds_to_cs__Var_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__Var_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__Var_442 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__Var_443 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__Var_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
                  MR_String ml_backend__mlds_to_cs__Var_445 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_cs__Var_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
                  MR_Word ml_backend__mlds_to_cs__Var_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
                  MR_Word ml_backend__mlds_to_cs__Var_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));

                  {
                    ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_137, ml_backend__mlds_to_cs__Context_307, ml_backend__mlds_to_cs__Indent_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "return;\n");
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Rval_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_308, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__Rvals_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_308, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__Var_127;
                  MR_Word ml_backend__mlds_to_cs__Var_130;
                  MR_Integer ml_backend__mlds_to_cs__Var_67;
                  MR_Box ml_backend__mlds_to_cs__conv5_Var_67;
                  MR_Box ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_IO_129_129;
                  MR_Word ml_backend__mlds_to_cs__Var_449;
                  MR_Word ml_backend__mlds_to_cs__Var_450;
                  MR_Word ml_backend__mlds_to_cs__Var_451;
                  MR_Word ml_backend__mlds_to_cs__Var_452;
                  MR_String ml_backend__mlds_to_cs__Var_453;
                  MR_Word ml_backend__mlds_to_cs__Var_454;
                  MR_Word ml_backend__mlds_to_cs__Var_455;
                  MR_Word ml_backend__mlds_to_cs__Var_456;

                  {
                    ml_backend__mlds_to_cs__Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_127, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_13[0]));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_127, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_127, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_8));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_127, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_9));
                  }
                  {
                    mercury__list__foldl2_6_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_127, ml_backend__mlds_to_cs__Rvals_66, ((MR_Box) ((MR_Integer) 2)), &ml_backend__mlds_to_cs__conv5_Var_67, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_IO_129_129);
                  }
                  ml_backend__mlds_to_cs__Var_67 = ((MR_Integer) ml_backend__mlds_to_cs__conv5_Var_67);
                  ml_backend__mlds_to_cs__Var_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__Var_450 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_451 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__Var_453 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
                  ml_backend__mlds_to_cs__Var_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
                  ml_backend__mlds_to_cs__Var_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
                  ml_backend__mlds_to_cs__Var_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
                  {
                    ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_130, ml_backend__mlds_to_cs__Context_307, ml_backend__mlds_to_cs__Indent_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "return ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Rval_65);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                }
              {
                *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 2)));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_561_561;
              MR_Word ml_backend__mlds_to_cs__HandlerStmt_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__TryExitMethods0_71;
              MR_Word ml_backend__mlds_to_cs__CatchExitMethods_72;
              MR_Word ml_backend__mlds_to_cs__Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_82;
              MR_Integer ml_backend__mlds_to_cs__Var_86;
              MR_Word ml_backend__mlds_to_cs__Var_89;
              MR_Word ml_backend__mlds_to_cs__Var_93;
              MR_Word ml_backend__mlds_to_cs__Var_97;
              MR_Word ml_backend__mlds_to_cs__Var_101;
              MR_Integer ml_backend__mlds_to_cs__Var_102;
              MR_Integer ml_backend__mlds_to_cs__Var_105;
              MR_Word ml_backend__mlds_to_cs__Var_108;
              MR_Word ml_backend__mlds_to_cs__Var_112;
              MR_Word ml_backend__mlds_to_cs__Context_310 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__BodyStmt_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs___Ref_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__Var_474 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_475 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__Var_477 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__Var_481;
              MR_Word ml_backend__mlds_to_cs__Var_482;
              MR_Word ml_backend__mlds_to_cs__Var_483;
              MR_Word ml_backend__mlds_to_cs__Var_484;
              MR_String ml_backend__mlds_to_cs__Var_485;
              MR_Word ml_backend__mlds_to_cs__Var_486;
              MR_Word ml_backend__mlds_to_cs__Var_487;
              MR_Word ml_backend__mlds_to_cs__Var_488;
              MR_Word ml_backend__mlds_to_cs__Var_489;
              MR_Word ml_backend__mlds_to_cs__Var_490;
              MR_Word ml_backend__mlds_to_cs__Var_491;
              MR_Word ml_backend__mlds_to_cs__Var_492;
              MR_String ml_backend__mlds_to_cs__Var_493;
              MR_Word ml_backend__mlds_to_cs__Var_494;
              MR_Word ml_backend__mlds_to_cs__Var_495;
              MR_Word ml_backend__mlds_to_cs__Var_496;
              MR_Word ml_backend__mlds_to_cs__Var_497;
              MR_Word ml_backend__mlds_to_cs__Var_498;
              MR_Word ml_backend__mlds_to_cs__Var_499;
              MR_Word ml_backend__mlds_to_cs__Var_500;
              MR_String ml_backend__mlds_to_cs__Var_501;
              MR_Word ml_backend__mlds_to_cs__Var_502;
              MR_Word ml_backend__mlds_to_cs__Var_503;
              MR_Word ml_backend__mlds_to_cs__Var_504;
              MR_Word ml_backend__mlds_to_cs__Var_505;
              MR_Word ml_backend__mlds_to_cs__Var_506;
              MR_Word ml_backend__mlds_to_cs__Var_507;
              MR_Word ml_backend__mlds_to_cs__Var_508;
              MR_String ml_backend__mlds_to_cs__Var_509;
              MR_Word ml_backend__mlds_to_cs__Var_510;
              MR_Word ml_backend__mlds_to_cs__Var_511;
              MR_Word ml_backend__mlds_to_cs__Var_512;
              MR_Word ml_backend__mlds_to_cs__Var_513;
              MR_Word ml_backend__mlds_to_cs__Var_514;
              MR_Word ml_backend__mlds_to_cs__Var_515;
              MR_Word ml_backend__mlds_to_cs__Var_516;
              MR_String ml_backend__mlds_to_cs__Var_517;
              MR_Word ml_backend__mlds_to_cs__Var_518;
              MR_Word ml_backend__mlds_to_cs__Var_519;
              MR_Word ml_backend__mlds_to_cs__Var_520;
              MR_Word ml_backend__mlds_to_cs__Var_521;
              MR_Word ml_backend__mlds_to_cs__Var_522;
              MR_Word ml_backend__mlds_to_cs__Var_523;
              MR_Word ml_backend__mlds_to_cs__Var_524;
              MR_String ml_backend__mlds_to_cs__Var_525;
              MR_Word ml_backend__mlds_to_cs__Var_526;
              MR_Word ml_backend__mlds_to_cs__Var_527;
              MR_Word ml_backend__mlds_to_cs__Var_528;

              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_78, ml_backend__mlds_to_cs__Context_310, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "try\n");
              }
              ml_backend__mlds_to_cs__Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_482 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_483 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_485 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_82, ml_backend__mlds_to_cs__Context_310, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__Var_86 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_86, ml_backend__mlds_to_cs__BodyStmt_311, &ml_backend__mlds_to_cs__TryExitMethods0_71);
              }
              ml_backend__mlds_to_cs__Var_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_490 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_491 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_493 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_89, ml_backend__mlds_to_cs__Context_310, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
              ml_backend__mlds_to_cs__Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_498 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_499 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_501 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_93, ml_backend__mlds_to_cs__Context_310, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "catch (runtime.Commit commit_variable)\n");
              }
              ml_backend__mlds_to_cs__Var_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_506 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_507 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_509 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_97, ml_backend__mlds_to_cs__Context_310, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__Var_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_514 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_515 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_517 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              ml_backend__mlds_to_cs__Var_102 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_101, ml_backend__mlds_to_cs__Context_310, ml_backend__mlds_to_cs__Var_102);
              }
              ml_backend__mlds_to_cs__Var_105 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Var_105, ml_backend__mlds_to_cs__HandlerStmt_70, &ml_backend__mlds_to_cs__CatchExitMethods_72);
              }
              ml_backend__mlds_to_cs__Var_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_522 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_523 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_525 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_526 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_527 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_528 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_108, ml_backend__mlds_to_cs__Context_310, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
              ml_backend__mlds_to_cs__TypeCtorInfo_561_561 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
              {
                ml_backend__mlds_to_cs__Var_112 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_561_561, ml_backend__mlds_to_cs__TryExitMethods0_71, ((MR_Box) ((MR_Integer) 3)));
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__union_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_561_561, ml_backend__mlds_to_cs__Var_112, ml_backend__mlds_to_cs__CatchExitMethods_72);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__mlds_to_cs__Ref_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Var_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_119;
              MR_Word ml_backend__mlds_to_cs__Context_309 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__Var_458 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_459 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__Var_461 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Var_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__Var_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__Var_465;
              MR_Word ml_backend__mlds_to_cs__Var_466;
              MR_Word ml_backend__mlds_to_cs__Var_467;
              MR_Word ml_backend__mlds_to_cs__Var_468;
              MR_String ml_backend__mlds_to_cs__Var_469;
              MR_Word ml_backend__mlds_to_cs__Var_470;
              MR_Word ml_backend__mlds_to_cs__Var_471;
              MR_Word ml_backend__mlds_to_cs__Var_472;

              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_114, ml_backend__mlds_to_cs__Context_309, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Ref_68);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = new runtime.Commit();\n");
              }
              ml_backend__mlds_to_cs__Var_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_466 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_467 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_469 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_119, ml_backend__mlds_to_cs__Context_309, ml_backend__mlds_to_cs__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "throw ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Ref_68);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 3)));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__mlds_to_cs__AtomicStatement_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Context_312 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Stmt_11, (MR_Integer) 2)));

              {
                ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Indent_9, ml_backend__mlds_to_cs__AtomicStatement_73, ml_backend__mlds_to_cs__Context_312);
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__4_4,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_5)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if ((ml_backend__mlds_to_cs__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ml_backend__mlds_to_cs__ExitMethods_5 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
        }
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Stmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Stmts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__StmtExitMethods_23;

        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Stmt_19, &ml_backend__mlds_to_cs__StmtExitMethods_23);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)), ml_backend__mlds_to_cs__StmtExitMethods_23);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_35_35;
            MR_Word ml_backend__mlds_to_cs__StmtsExitMethods_24;
            MR_Word ml_backend__mlds_to_cs__ExitMethods0_25;

            {
              ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Stmts_20, &ml_backend__mlds_to_cs__StmtsExitMethods_24);
            }
            ml_backend__mlds_to_cs__TypeCtorInfo_35_35 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
            {
              ml_backend__mlds_to_cs__ExitMethods0_25 = mercury__set__union_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_35_35, ml_backend__mlds_to_cs__StmtExitMethods_23, ml_backend__mlds_to_cs__StmtsExitMethods_24);
            }
            {
              ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_35_35, ((MR_Box) ((MR_Integer) 4)), ml_backend__mlds_to_cs__StmtsExitMethods_24);
            }
            if (ml_backend__mlds_to_cs__succeeded)
              *ml_backend__mlds_to_cs__ExitMethods_5 = ml_backend__mlds_to_cs__ExitMethods0_25;
            else
              {
                {
                  *ml_backend__mlds_to_cs__ExitMethods_5 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_35_35, ml_backend__mlds_to_cs__ExitMethods0_25, ((MR_Box) ((MR_Integer) 4)));
                }
              }
          }
        else
          *ml_backend__mlds_to_cs__ExitMethods_5 = ml_backend__mlds_to_cs__StmtExitMethods_23;
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Context_9,
  MR_Word ml_backend__mlds_to_cs__Match_10)
{
  if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Match_10)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_case_cond_for_csharp\'/6", (MR_String) "cannot match ranges in C# cases");
        return;
      }
    }
  else
    {
      MR_Word ml_backend__mlds_to_cs__Val_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Match_10, (MR_Integer) 0)));
      MR_Word ml_backend__mlds_to_cs__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ml_backend__mlds_to_cs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
      MR_Word ml_backend__mlds_to_cs__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word ml_backend__mlds_to_cs__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ml_backend__mlds_to_cs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
      MR_String ml_backend__mlds_to_cs__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
      MR_Word ml_backend__mlds_to_cs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
      MR_Word ml_backend__mlds_to_cs__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
      MR_Word ml_backend__mlds_to_cs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));

      {
        ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_19, ml_backend__mlds_to_cs__Context_9, ml_backend__mlds_to_cs__Indent_8);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "case ");
      }
      {
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Val_12);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ":\n");
      }
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_call_rval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__CodeAddr_9;
    MR_Word ml_backend__mlds_to_cs__Const_8;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Const_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_8, (MR_Integer) 0)))) == (MR_Integer) 13)));
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__CodeAddr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_8, (MR_Integer) 1)));
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Word ml_backend__mlds_to_cs__QualProcLabel_28;
        MR_String ml_backend__mlds_to_cs__Suffix_30;
        MR_Word ml_backend__mlds_to_cs__ModuleName_32;
        MR_Word ml_backend__mlds_to_cs__ProcLabel_33;
        MR_Word ml_backend__mlds_to_cs__PredLabel_63;
        MR_Integer ml_backend__mlds_to_cs__ProcId_64;
        MR_String ml_backend__mlds_to_cs__PredLabelStr_66;
        MR_Integer ml_backend__mlds_to_cs__ModeNum_67;
        MR_String ml_backend__mlds_to_cs__String_68;
        MR_String ml_backend__mlds_to_cs__Var_78;
        MR_String ml_backend__mlds_to_cs__Var_85;
        MR_String ml_backend__mlds_to_cs__Var_87;

        if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__CodeAddr_9)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Integer ml_backend__mlds_to_cs__SeqNum_31;
            MR_String ml_backend__mlds_to_cs__Var_52;
            MR_Word ml_backend__mlds_to_cs___Sig_46;

            ml_backend__mlds_to_cs__QualProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0)));
            ml_backend__mlds_to_cs__SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 1)));
            ml_backend__mlds_to_cs___Sig_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 2)));
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__SeqNum_31, &ml_backend__mlds_to_cs__Var_52);
            }
            {
              ml_backend__mlds_to_cs__Suffix_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_52);
            }
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs___Sig_29;

            ml_backend__mlds_to_cs__QualProcLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0)));
            ml_backend__mlds_to_cs___Sig_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 1)));
            ml_backend__mlds_to_cs__Suffix_30 = (MR_String) "";
          }
        ml_backend__mlds_to_cs__ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualProcLabel_28, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__ProcLabel_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualProcLabel_28, (MR_Integer) 1)));
        {
          ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ml_backend__mlds_to_cs__ModuleName_32, (MR_Integer) 0);
        }
        ml_backend__mlds_to_cs__PredLabel_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProcLabel_33, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__ProcId_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProcLabel_33, (MR_Integer) 1)));
        {
          ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(ml_backend__mlds_to_cs__PredLabel_63, &ml_backend__mlds_to_cs__PredLabelStr_66);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_64, &ml_backend__mlds_to_cs__ModeNum_67);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__ModeNum_67, &ml_backend__mlds_to_cs__Var_78);
        }
        {
          ml_backend__mlds_to_cs__Var_85 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_78, ml_backend__mlds_to_cs__Suffix_30);
        }
        {
          ml_backend__mlds_to_cs__Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_85);
        }
        {
          ml_backend__mlds_to_cs__String_68 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_66, ml_backend__mlds_to_cs__Var_87);
        }
        {
          ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__String_68);
        }
      }
    else
      {
        ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_6);
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_target_code_component_for_csharp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__AtomicStmt_9,
  MR_Word ml_backend__mlds_to_cs__Context_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__AtomicStmt_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "gc_check not implemented.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Comment_12);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__Var_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_119 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__Var_122 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));

          {
            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_102, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__Indent_8);
          }
          {
            ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Lval_13);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          {
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Rval_14);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ";\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "assign_if_in_heap");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "delete_object not supported in C#.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__Target_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__ExplicitSecTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__MaybeCtorName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 7)));
              MR_Word ml_backend__mlds_to_cs__ArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 8)));
              MR_Word ml_backend__mlds_to_cs__IsArray_39;
              MR_Word ml_backend__mlds_to_cs__Var_68;
              MR_Word ml_backend__mlds_to_cs__Var_72;
              MR_Integer ml_backend__mlds_to_cs__Var_73;
              MR_Word ml_backend__mlds_to_cs__Var_94;
              MR_Word ml_backend__mlds_to_cs___MaybeTag_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs___MaybeSize_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs___MayUseAtomic_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 9)));
              MR_Word ml_backend__mlds_to_cs___AllocId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 10)));
              MR_Word ml_backend__mlds_to_cs__Var_126;
              MR_Word ml_backend__mlds_to_cs__Var_127;
              MR_Word ml_backend__mlds_to_cs__Var_128;
              MR_Word ml_backend__mlds_to_cs__Var_129;
              MR_String ml_backend__mlds_to_cs__Var_130;
              MR_Word ml_backend__mlds_to_cs__Var_131;
              MR_Word ml_backend__mlds_to_cs__Var_132;
              MR_Word ml_backend__mlds_to_cs__Var_133;
              MR_Word ml_backend__mlds_to_cs__Var_134;
              MR_Word ml_backend__mlds_to_cs__Var_135;
              MR_Word ml_backend__mlds_to_cs__Var_136;
              MR_Word ml_backend__mlds_to_cs__Var_137;
              MR_String ml_backend__mlds_to_cs__Var_138;
              MR_Word ml_backend__mlds_to_cs__Var_139;
              MR_Word ml_backend__mlds_to_cs__Var_140;
              MR_Word ml_backend__mlds_to_cs__Var_141;
              MR_Word ml_backend__mlds_to_cs__QualifiedCtorId_28;
              MR_Word ml_backend__mlds_to_cs__MerType_29;
              MR_Word ml_backend__mlds_to_cs__CtorCat_30;
              MR_Word ml_backend__mlds_to_cs__Var_31;
              MR_String ml_backend__mlds_to_cs__Var_32;
              MR_Word ml_backend__mlds_to_cs__Var_33;
              MR_Word ml_backend__mlds_to_cs__Var_142;
              MR_Word ml_backend__mlds_to_cs__Var_143;
              MR_Word ml_backend__mlds_to_cs__Var_144;
              MR_Word ml_backend__mlds_to_cs__Var_145;
              MR_String ml_backend__mlds_to_cs__Var_146;
              MR_Word ml_backend__mlds_to_cs__Var_147;
              MR_Word ml_backend__mlds_to_cs__Var_148;
              MR_Word ml_backend__mlds_to_cs__Var_149;

              switch (ml_backend__mlds_to_cs__ExplicitSecTag_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "explicit secondary tag");
                      return;
                    }
                  }
                  break;
              }
              ml_backend__mlds_to_cs__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_127 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_130 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_68, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__Indent_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_135 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_138 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));
              ml_backend__mlds_to_cs__Var_73 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_72, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__Var_73);
              }
              {
                ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Target_18);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = new ");
              }
              ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__MaybeCtorName_23)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__QualifiedCtorId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeCtorName_23, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_21)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__MerType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_21, (MR_Integer) 0)));
                      ml_backend__mlds_to_cs__CtorCat_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_21, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_21, (MR_Integer) 2)));
                      {
                        ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__hand_defined_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__MerType_29, ml_backend__mlds_to_cs__CtorCat_30, &ml_backend__mlds_to_cs__Var_32, &ml_backend__mlds_to_cs__Var_33);
                      }
                    }
                  ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  MR_Word ml_backend__mlds_to_cs__CtorDefn_36;
                  MR_String ml_backend__mlds_to_cs__CtorName_37;
                  MR_Integer ml_backend__mlds_to_cs__CtorArity_38;
                  MR_Word ml_backend__mlds_to_cs___ModuleName_34;
                  MR_Word ml_backend__mlds_to_cs___QualKind_35;

                  {
                    ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_21);
                  }
                  {
                    mercury__io__write_char_3_p_0((MR_Char) 46);
                  }
                  ml_backend__mlds_to_cs___ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedCtorId_28, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs___QualKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedCtorId_28, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__CtorDefn_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedCtorId_28, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__CtorName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CtorDefn_36, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__CtorArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CtorDefn_36, (MR_Integer) 1)));
                  {
                    ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__CtorName_37, ml_backend__mlds_to_cs__CtorArity_38);
                  }
                }
              else
                {
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_21);
                }
              {
                ml_backend__mlds_to_cs__IsArray_39 = ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(ml_backend__mlds_to_cs__Type_21);
              }
              switch (ml_backend__mlds_to_cs__IsArray_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) " {");
                    }
                    {
                      ml_backend__mlds_to_cs__output_init_args_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Args_24, ml_backend__mlds_to_cs__ArgTypes_25);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "};\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      ml_backend__mlds_to_cs__output_init_args_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Args_24, ml_backend__mlds_to_cs__ArgTypes_25);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ");\n");
                    }
                  }
                  break;
              }
              ml_backend__mlds_to_cs__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_143 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_146 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_94, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__Indent_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "mark_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "restore_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "trail_ops not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__mlds_to_cs__TargetLang_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Components_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 2)));

              switch (ml_backend__mlds_to_cs__TargetLang_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "inline_target_code only works for lang_java");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__mlds_to_cs__Var_55;
                    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_56_56;

                    {
                      ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0();
                    }
                    {
                      ml_backend__mlds_to_cs__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[3]));
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0_1));
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_55, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
                    }
                    {
                      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_55, ml_backend__mlds_to_cs__Components_43, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_56_56);
                    }
                    {
                      ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0();
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "foreign language interfacing not implemented");
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
ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0(void)
{
  {
    {
      mercury__io__write_string_3_p_0((MR_String) "#pragma warning restore\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_args_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((ml_backend__mlds_to_cs__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_init_args_for_csharp\'/5", (MR_String) "length mismatch.");
              return;
            }
          }
      else
        {
          MR_Word ml_backend__mlds_to_cs__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));

          if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_init_args_for_csharp\'/5", (MR_String) "length mismatch.");
                return;
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__ArgTypes_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs___ArgType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Var_39);
              }
              if ((ml_backend__mlds_to_cs__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                }
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__mlds_to_cs__next_value_of_HeadVar__2_2 = ml_backend__mlds_to_cs__Var_38;
                MR_Word ml_backend__mlds_to_cs__next_value_of_HeadVar__3_3 = ml_backend__mlds_to_cs__ArgTypes_28;

                ml_backend__mlds_to_cs__HeadVar__3_3 = ml_backend__mlds_to_cs__next_value_of_HeadVar__3_3;
                ml_backend__mlds_to_cs__HeadVar__2_2 = ml_backend__mlds_to_cs__next_value_of_HeadVar__2_2;
              }
              continue;
            }
        }
      break;
    }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__hand_defined_type_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word ml_backend__mlds_to_cs__CtorCat_6,
  MR_String * ml_backend__mlds_to_cs__SubstituteName_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        MR_Word ml_backend__mlds_to_cs__CtorCatSystem_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 1)));

        *ml_backend__mlds_to_cs__SubstituteName_7 = ((&ml_backend__mlds_to_cs_vector_common_10[4 + ml_backend__mlds_to_cs__CtorCatSystem_9]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_0;
        *ml_backend__mlds_to_cs__ArrayDims_8 = ((&ml_backend__mlds_to_cs_vector_common_10[4 + ml_backend__mlds_to_cs__CtorCatSystem_9]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_1;
        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
      }
    else
    if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_cs__CtorCatUser_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__Var_17;

        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CtorCatUser_10 == (MR_Integer) 2);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              ml_backend__mlds_to_cs__Var_17 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
            }
            {
              ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_5, ml_backend__mlds_to_cs__Var_17);
            }
            if (ml_backend__mlds_to_cs__succeeded)
              {
                *ml_backend__mlds_to_cs__SubstituteName_7 = (MR_String) "runtime.TypeInfo_Struct";
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ml_backend__mlds_to_cs__Var_18;

                {
                  ml_backend__mlds_to_cs__Var_18 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
                }
                {
                  ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_5, ml_backend__mlds_to_cs__Var_18);
                }
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    *ml_backend__mlds_to_cs__SubstituteName_7 = (MR_String) "runtime.PseudoTypeInfo";
                    ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__Var_19;

                    {
                      ml_backend__mlds_to_cs__Var_19 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
                    }
                    {
                      ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_5, ml_backend__mlds_to_cs__Var_19);
                    }
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        *ml_backend__mlds_to_cs__SubstituteName_7 = (MR_String) "runtime.TypeCtorInfo_Struct";
                        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      }
                  }
              }
            if (ml_backend__mlds_to_cs__succeeded)
              {
                *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
              }
          }
      }
    else
      ml_backend__mlds_to_cs__succeeded = MR_FALSE;
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(
  MR_String ml_backend__mlds_to_cs__Name_5,
  MR_Integer ml_backend__mlds_to_cs__Arity_6)
{
  {
    MR_String ml_backend__mlds_to_cs__String_8;
    MR_String ml_backend__mlds_to_cs__MangledName_15;
    MR_String ml_backend__mlds_to_cs__UppercaseMangledName_16;
    MR_String ml_backend__mlds_to_cs__Var_17;
    MR_String ml_backend__mlds_to_cs__Var_19;

    {
      ml_backend__mlds_to_cs__MangledName_15 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__Name_5);
    }
    {
      ml_backend__mlds_to_cs__UppercaseMangledName_16 = parse_tree__java_names__flip_initial_case_1_f_0(ml_backend__mlds_to_cs__MangledName_15);
    }
    {
      ml_backend__mlds_to_cs__Var_19 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__Arity_6);
    }
    {
      ml_backend__mlds_to_cs__Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_19);
    }
    {
      ml_backend__mlds_to_cs__String_8 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__UppercaseMangledName_16, ml_backend__mlds_to_cs__Var_17);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__String_8);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Cond_4,
  MR_Word ml_backend__mlds_to_cs__BlockExitMethods_5)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__ExitMethods_6;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_18_18;
    MR_Word ml_backend__mlds_to_cs__ExitMethods0_7;
    MR_Word ml_backend__mlds_to_cs__Var_12;
    MR_Word ml_backend__mlds_to_cs__Var_8;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_15_15;
    MR_Word ml_backend__mlds_to_cs__Var_9;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Cond_4, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__Var_9 = (MR_Integer) 0;
            ml_backend__mlds_to_cs__TypeCtorInfo_15_15 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
            {
              ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_15_15, ((MR_Box) (ml_backend__mlds_to_cs__Var_9)), ml_backend__mlds_to_cs__BlockExitMethods_5);
            }
            ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
          }
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          ml_backend__mlds_to_cs__ExitMethods0_7 = mercury__set__delete_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
        }
      }
    else
      {
        {
          ml_backend__mlds_to_cs__ExitMethods0_7 = mercury__set__insert_2_f_0((MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
        }
      }
    ml_backend__mlds_to_cs__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0;
    {
      ml_backend__mlds_to_cs__Var_12 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_18_18, ml_backend__mlds_to_cs__ExitMethods0_7, ((MR_Box) ((MR_Integer) 1)));
    }
    {
      ml_backend__mlds_to_cs__ExitMethods_6 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_18_18, ml_backend__mlds_to_cs__Var_12, ((MR_Box) ((MR_Integer) 0)));
    }
    return ml_backend__mlds_to_cs__ExitMethods_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv1_Argument_6;
    MR_Integer ml_backend__mlds_to_cs__conv0_HeadVar__4_4;

    {
      ml_backend__mlds_to_cs__make_out_param_4_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv1_Argument_6, ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_3), &ml_backend__mlds_to_cs__conv0_HeadVar__4_4);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_Argument_6));
    *ml_backend__mlds_to_cs__wrapper_arg_4 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__FuncName_10,
  MR_Word ml_backend__mlds_to_cs__OutputAux_11,
  MR_Word ml_backend__mlds_to_cs__Signature_12)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_11)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Parameters_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_12, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__RetTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_12, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__OutParams_17;
    MR_Word ml_backend__mlds_to_cs__Var_30;
    MR_Word ml_backend__mlds_to_cs__ClassName_16;
    MR_String ml_backend__mlds_to_cs__Var_22;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__OutputAux_11, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__FuncName_10)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FuncName_10, (MR_Integer) 0)));
            ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__Var_22, (MR_String) "<constructor>") == 0);
          }
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_String ml_backend__mlds_to_cs__TypeNameStr_44;
        MR_String ml_backend__mlds_to_cs__Name_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassName_16, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__Arity_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassName_16, (MR_Integer) 1)));
        MR_String ml_backend__mlds_to_cs__MangledName_53;
        MR_String ml_backend__mlds_to_cs__UppercaseMangledName_54;
        MR_String ml_backend__mlds_to_cs__Var_55;
        MR_String ml_backend__mlds_to_cs__Var_57;

        {
          ml_backend__mlds_to_cs__MangledName_53 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__Name_48);
        }
        {
          ml_backend__mlds_to_cs__UppercaseMangledName_54 = parse_tree__java_names__flip_initial_case_1_f_0(ml_backend__mlds_to_cs__MangledName_53);
        }
        {
          ml_backend__mlds_to_cs__Var_57 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__Arity_49);
        }
        {
          ml_backend__mlds_to_cs__Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_57);
        }
        {
          ml_backend__mlds_to_cs__TypeNameStr_44 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__UppercaseMangledName_54, ml_backend__mlds_to_cs__Var_55);
        }
        {
          ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__TypeNameStr_44);
        }
        ml_backend__mlds_to_cs__OutParams_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__RestRetTypes_18;
        MR_Integer ml_backend__mlds_to_cs__Var_19;
        MR_Box ml_backend__mlds_to_cs__conv2_Var_19;

        if ((ml_backend__mlds_to_cs__RetTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "void");
            }
            ml_backend__mlds_to_cs__RestRetTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__RetType_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__RetTypes_15, (MR_Integer) 0)));
            MR_String ml_backend__mlds_to_cs__String_81;
            MR_Word ml_backend__mlds_to_cs__ArrayDims_82;
            MR_Word ml_backend__mlds_to_cs__Var_84;

            ml_backend__mlds_to_cs__RestRetTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__RetTypes_15, (MR_Integer) 1)));
            {
              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__RetType_64, &ml_backend__mlds_to_cs__String_81, &ml_backend__mlds_to_cs__ArrayDims_82);
            }
            {
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_81);
            }
            {
              ml_backend__mlds_to_cs__Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            {
              ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_84);
            }
          }
        {
          mercury__io__write_char_3_p_0((MR_Char) 32);
        }
        {
          ml_backend__mlds_to_cs__output_function_name_for_csharp_3_p_0(ml_backend__mlds_to_cs__FuncName_10);
        }
        {
          mercury__list__map_foldl_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[9], ml_backend__mlds_to_cs__RestRetTypes_18, &ml_backend__mlds_to_cs__OutParams_17, ((MR_Box) ((MR_Integer) 2)), &ml_backend__mlds_to_cs__conv2_Var_19);
        }
        ml_backend__mlds_to_cs__Var_19 = ((MR_Integer) ml_backend__mlds_to_cs__conv2_Var_19);
      }
    {
      ml_backend__mlds_to_cs__Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_cs__Parameters_14, ml_backend__mlds_to_cs__OutParams_17);
    }
    {
      ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Indent_9, ml_backend__mlds_to_cs__Var_30);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_name_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__FunctionName_4)
{
  {
    MR_String ml_backend__mlds_to_cs__FunctionNameStr_6;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__FunctionName_4)) == (MR_mktag((MR_Integer) 1))))
      ml_backend__mlds_to_cs__FunctionNameStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FunctionName_4, (MR_Integer) 0)));
    else
      {
        MR_Word ml_backend__mlds_to_cs__PlainFuncName_12 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__FunctionName_4), (MR_Integer) 0);
        MR_Word ml_backend__mlds_to_cs__PredLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_12, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_12, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__MaybeSeqNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_12, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__PredLabelStr_17;
        MR_Integer ml_backend__mlds_to_cs__ModeNum_18;
        MR_Word ml_backend__mlds_to_cs___PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_12, (MR_Integer) 3)));

        {
          ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(ml_backend__mlds_to_cs__PredLabel_13, &ml_backend__mlds_to_cs__PredLabelStr_17);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_14, &ml_backend__mlds_to_cs__ModeNum_18);
        }
        if ((ml_backend__mlds_to_cs__MaybeSeqNum_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ml_backend__mlds_to_cs__Var_54;
            MR_String ml_backend__mlds_to_cs__Var_62;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__ModeNum_18, &ml_backend__mlds_to_cs__Var_54);
            }
            {
              ml_backend__mlds_to_cs__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_54);
            }
            {
              ml_backend__mlds_to_cs__FunctionNameStr_6 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_17, ml_backend__mlds_to_cs__Var_62);
            }
          }
        else
          {
            MR_Integer ml_backend__mlds_to_cs__SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeSeqNum_15, (MR_Integer) 0)));
            MR_String ml_backend__mlds_to_cs__Var_35;
            MR_Word ml_backend__mlds_to_cs__Var_41 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1];
            MR_String ml_backend__mlds_to_cs__Var_43;
            MR_String ml_backend__mlds_to_cs__Var_44;
            MR_String ml_backend__mlds_to_cs__Var_51;
            MR_String ml_backend__mlds_to_cs__Var_53;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_41, ml_backend__mlds_to_cs__SeqNum_19, &ml_backend__mlds_to_cs__Var_35);
            }
            {
              ml_backend__mlds_to_cs__Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_35);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_41, ml_backend__mlds_to_cs__ModeNum_18, &ml_backend__mlds_to_cs__Var_44);
            }
            {
              ml_backend__mlds_to_cs__Var_51 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_44, ml_backend__mlds_to_cs__Var_43);
            }
            {
              ml_backend__mlds_to_cs__Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_51);
            }
            {
              ml_backend__mlds_to_cs__FunctionNameStr_6 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_17, ml_backend__mlds_to_cs__Var_53);
            }
          }
      }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__FunctionNameStr_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_field_var_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__FieldVarDefn_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__FieldVarName_12;
    MR_Word ml_backend__mlds_to_cs__Flags_14;
    MR_Word ml_backend__mlds_to_cs__Type_15;
    MR_Word ml_backend__mlds_to_cs__Initializer_16;
    MR_Word ml_backend__mlds_to_cs__Var_32;
    MR_Word ml_backend__mlds_to_cs__Var_36;
    MR_String ml_backend__mlds_to_cs__String_73;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_74;
    MR_Word ml_backend__mlds_to_cs__Var_76;
    MR_String ml_backend__mlds_to_cs__VarNameStr_83;
    MR_String ml_backend__mlds_to_cs__RawString_87;
    MR_String ml_backend__mlds_to_cs__MangledString_88;
    MR_Word ml_backend__mlds_to_cs___Context_13;
    MR_Word ml_backend__mlds_to_cs__Var_17;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    ml_backend__mlds_to_cs__FieldVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__Initializer_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldVarDefn_10, (MR_Integer) 5)));
    {
      mercury__io__write_string_3_p_0((MR_String) "public ");
    }
    ml_backend__mlds_to_cs__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Flags_14, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Flags_14, (MR_Integer) 1)));
    switch (ml_backend__mlds_to_cs__Var_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "static ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    switch (ml_backend__mlds_to_cs__Var_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "readonly ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_15, &ml_backend__mlds_to_cs__String_73, &ml_backend__mlds_to_cs__ArrayDims_74);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_73);
    }
    {
      ml_backend__mlds_to_cs__Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_74, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_76);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
    {
      ml_backend__mlds_to_cs__RawString_87 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__FieldVarName_12);
    }
    {
      ml_backend__mlds_to_cs__MangledString_88 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_87);
    }
    {
      ml_backend__mlds_to_cs__VarNameStr_83 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_88);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_83);
    }
    {
      ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__OutputAux_9, ml_backend__mlds_to_cs__Type_15, ml_backend__mlds_to_cs__Initializer_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_local_var_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__LocalVarDefn_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__LocalVarName_12;
    MR_Word ml_backend__mlds_to_cs__Type_14;
    MR_Word ml_backend__mlds_to_cs__Initializer_15;
    MR_String ml_backend__mlds_to_cs__String_47;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_48;
    MR_Word ml_backend__mlds_to_cs__Var_50;
    MR_String ml_backend__mlds_to_cs__VarNameStr_57;
    MR_String ml_backend__mlds_to_cs__RawString_61;
    MR_String ml_backend__mlds_to_cs__MangledString_62;
    MR_Word ml_backend__mlds_to_cs___Context_13;
    MR_Word ml_backend__mlds_to_cs__Var_16;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    ml_backend__mlds_to_cs__LocalVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LocalVarDefn_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LocalVarDefn_10, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LocalVarDefn_10, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Initializer_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LocalVarDefn_10, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LocalVarDefn_10, (MR_Integer) 4)));
    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_14, &ml_backend__mlds_to_cs__String_47, &ml_backend__mlds_to_cs__ArrayDims_48);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_47);
    }
    {
      ml_backend__mlds_to_cs__Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_50);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
    {
      ml_backend__mlds_to_cs__RawString_61 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__LocalVarName_12);
    }
    {
      ml_backend__mlds_to_cs__MangledString_62 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_61);
    }
    {
      ml_backend__mlds_to_cs__VarNameStr_57 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_62);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_57);
    }
    {
      ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__OutputAux_9, ml_backend__mlds_to_cs__Type_14, ml_backend__mlds_to_cs__Initializer_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_defn_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__GlobalVarDefn_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__GlobalVarName_12;
    MR_Word ml_backend__mlds_to_cs__Flags_14;
    MR_Word ml_backend__mlds_to_cs__Type_15;
    MR_Word ml_backend__mlds_to_cs__Initializer_16;
    MR_Word ml_backend__mlds_to_cs__Access_31;
    MR_Word ml_backend__mlds_to_cs__Constness_32;
    MR_Word ml_backend__mlds_to_cs___Context_13;
    MR_Word ml_backend__mlds_to_cs__Var_17;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    ml_backend__mlds_to_cs__GlobalVarName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_10, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_10, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_10, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__Initializer_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_10, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_10, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__Access_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Flags_14, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Constness_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Flags_14, (MR_Integer) 1)));
    switch (ml_backend__mlds_to_cs__Access_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "private ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "public ");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static ");
    }
    switch (ml_backend__mlds_to_cs__Constness_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "readonly ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__GlobalVarName_12, ml_backend__mlds_to_cs__Type_15);
    }
    {
      ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__OutputAux_9, ml_backend__mlds_to_cs__Type_15, ml_backend__mlds_to_cs__Initializer_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_var_definition_for_csharp_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__EnvVarName_6)
{
  {
    MR_Integer ml_backend__mlds_to_cs__Var_16;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static int mercury_envvar_");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__EnvVarName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " =\n");
    }
    ml_backend__mlds_to_cs__Var_16 = (ml_backend__mlds_to_cs__Indent_5 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Var_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "System.Environment.GetEnvironmentVariable(\"");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__EnvVarName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\") == null \? 0 : 1;\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_9,
  MR_String ml_backend__mlds_to_cs__Name_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__Sig_13;
    MR_Word ml_backend__mlds_to_cs__ArgTypes_16;
    MR_Word ml_backend__mlds_to_cs__RetTypes_17;
    MR_String ml_backend__mlds_to_cs__TypeString_18;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__CodeAddr_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_cs__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 1)));

        ml_backend__mlds_to_cs__Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 2)));
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0)));

        ml_backend__mlds_to_cs__Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 1)));
      }
    ml_backend__mlds_to_cs__ArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_13, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__RetTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_13, (MR_Integer) 1)));
    {
      ml_backend__mlds_to_cs__TypeString_18 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__ArgTypes_16, ml_backend__mlds_to_cs__RetTypes_17);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static readonly ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__TypeString_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Name_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__mlds_output_code_addr_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__mlds_output_code_addr_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_7,
  MR_Word ml_backend__mlds_to_cs__IsCall_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Sig_11;
    MR_Word ml_backend__mlds_to_cs__ArgTypes_14;
    MR_Word ml_backend__mlds_to_cs__RetTypes_15;
    MR_Word ml_backend__mlds_to_cs__QualProcLabel_17;
    MR_String ml_backend__mlds_to_cs__Suffix_19;
    MR_Word ml_backend__mlds_to_cs__ModuleName_21;
    MR_Word ml_backend__mlds_to_cs__ProcLabel_22;
    MR_Word ml_backend__mlds_to_cs__PredLabel_54;
    MR_Integer ml_backend__mlds_to_cs__ProcId_55;
    MR_String ml_backend__mlds_to_cs__PredLabelStr_57;
    MR_Integer ml_backend__mlds_to_cs__ModeNum_58;
    MR_String ml_backend__mlds_to_cs__String_59;
    MR_String ml_backend__mlds_to_cs__Var_69;
    MR_String ml_backend__mlds_to_cs__Var_76;
    MR_String ml_backend__mlds_to_cs__Var_78;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__CodeAddr_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer ml_backend__mlds_to_cs__SeqNum_20;
        MR_String ml_backend__mlds_to_cs__Var_43;

        ml_backend__mlds_to_cs__QualProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__Sig_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 2)));
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__SeqNum_20, &ml_backend__mlds_to_cs__Var_43);
        }
        {
          ml_backend__mlds_to_cs__Suffix_19 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_43);
        }
      }
    else
      {
        ml_backend__mlds_to_cs__QualProcLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__Sig_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__Suffix_19 = (MR_String) "";
      }
    ml_backend__mlds_to_cs__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_11, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__RetTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_11, (MR_Integer) 1)));
    switch (ml_backend__mlds_to_cs__IsCall_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ml_backend__mlds_to_cs__TypeString_16;

          {
            ml_backend__mlds_to_cs__TypeString_16 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__ArgTypes_14, ml_backend__mlds_to_cs__RetTypes_15);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__TypeString_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ") ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    ml_backend__mlds_to_cs__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualProcLabel_17, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__ProcLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualProcLabel_17, (MR_Integer) 1)));
    {
      ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ml_backend__mlds_to_cs__ModuleName_21, (MR_Integer) 0);
    }
    ml_backend__mlds_to_cs__PredLabel_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProcLabel_22, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__ProcId_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProcLabel_22, (MR_Integer) 1)));
    {
      ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(ml_backend__mlds_to_cs__PredLabel_54, &ml_backend__mlds_to_cs__PredLabelStr_57);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_55, &ml_backend__mlds_to_cs__ModeNum_58);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__ModeNum_58, &ml_backend__mlds_to_cs__Var_69);
    }
    {
      ml_backend__mlds_to_cs__Var_76 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_69, ml_backend__mlds_to_cs__Suffix_19);
    }
    {
      ml_backend__mlds_to_cs__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_76);
    }
    {
      ml_backend__mlds_to_cs__String_59 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_57, ml_backend__mlds_to_cs__Var_78);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__String_59);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_constant_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_9,
  MR_Word ml_backend__mlds_to_cs__ExportedConstant_10)
{
  {
    MR_String ml_backend__mlds_to_cs__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedConstant_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Initializer_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedConstant_10, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__String_42;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_43;
    MR_Word ml_backend__mlds_to_cs__Var_45;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static readonly ");
    }
    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__MLDS_Type_9, &ml_backend__mlds_to_cs__String_42, &ml_backend__mlds_to_cs__ArrayDims_43);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_42);
    }
    {
      ml_backend__mlds_to_cs__Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_45);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Name_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_exported_enum_constant_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnum_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__ExportedConstants0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 1)));

    switch (ml_backend__mlds_to_cs__Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_23_23;
          MR_Word ml_backend__mlds_to_cs__ClassName_14;
          MR_Integer ml_backend__mlds_to_cs__ClassArity_15;
          MR_Word ml_backend__mlds_to_cs__MLDS_Type_16;
          MR_Word ml_backend__mlds_to_cs__ExportedConstants_17;
          MR_Word ml_backend__mlds_to_cs__Var_21;
          MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_19;

          {
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__mlds_to_cs__TypeCtor_12, &ml_backend__mlds_to_cs__ClassName_14, &ml_backend__mlds_to_cs__ClassArity_15);
          }
          {
            ml_backend__mlds_to_cs__MLDS_Type_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_14));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_15));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 3) = ((MR_Box) ((MR_Integer) 3));
          }
          ml_backend__mlds_to_cs__TypeCtorInfo_23_23 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;
          {
            mercury__list__reverse_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_23_23, ml_backend__mlds_to_cs__ExportedConstants0_13, &ml_backend__mlds_to_cs__ExportedConstants_17);
          }
          {
            ml_backend__mlds_to_cs__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[5]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_21, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_21, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_21, 5) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_Type_16));
          }
          {
            mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_23_23, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_21, ml_backend__mlds_to_cs__ExportedConstants_17, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_19);
          }
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_argument_name_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Arg_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_4, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__VarNameStr_19;
    MR_String ml_backend__mlds_to_cs__RawString_23;
    MR_String ml_backend__mlds_to_cs__MangledString_24;
    MR_Word ml_backend__mlds_to_cs__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_4, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Var_9;

    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 1)));
        {
          mercury__io__write_string_3_p_0((MR_String) "out ");
        }
      }
    else
      {
      }
    {
      ml_backend__mlds_to_cs__RawString_23 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__Name_6);
    }
    {
      ml_backend__mlds_to_cs__MangledString_24 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_23);
    }
    {
      ml_backend__mlds_to_cs__VarNameStr_19 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_24);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_19);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__is_out_argument_1_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Var_5;

    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__is_out_argument_1_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export_for_csharp__337__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Export_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_78_78;
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 0)));
    MR_String ml_backend__mlds_to_cs__ExportName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__MLDS_Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__MLDS_Signature_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Parameters_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_Signature_13, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__ReturnTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_Signature_13, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__OutArgs_22;
    MR_Word ml_backend__mlds_to_cs__InArgs_23;
    MR_Word ml_backend__mlds_to_cs__RestOutArgs_24;
    MR_Word ml_backend__mlds_to_cs__Var_33;
    MR_Integer ml_backend__mlds_to_cs__Var_52;
    MR_Integer ml_backend__mlds_to_cs__Var_59;
    MR_Word ml_backend__mlds_to_cs__Var_71;
    MR_Word ml_backend__mlds_to_cs___UnivQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 5)));

    {
      ml_backend__mlds_to_cs__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_33, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_33, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_33, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Lang_10));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_33, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      mercury__require__expect_3_p_0(ml_backend__mlds_to_cs__Var_33, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_export_for_csharp\'/5", (MR_String) "foreign_export for language other than C#.");
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static ");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    if ((ml_backend__mlds_to_cs__ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 0)));

        if ((ml_backend__mlds_to_cs__Var_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Var_80);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_export_for_csharp\'/5", (MR_String) "multiple return values in export method");
              return;
            }
          }
      }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__ExportName_11);
    }
    ml_backend__mlds_to_cs__Var_52 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Var_52, ml_backend__mlds_to_cs__Parameters_16);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    ml_backend__mlds_to_cs__Var_59 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Var_59);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_78_78 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
    {
      mercury__list__filter_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_78_78, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[8], ml_backend__mlds_to_cs__Parameters_16, &ml_backend__mlds_to_cs__OutArgs_22, &ml_backend__mlds_to_cs__InArgs_23);
    }
    if ((ml_backend__mlds_to_cs__ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ml_backend__mlds_to_cs__OutArgs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__mlds_to_cs__RestOutArgs_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          MR_Word ml_backend__mlds_to_cs__FirstOutArg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__OutArgs_22, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FirstOutArgName_26;
          MR_String ml_backend__mlds_to_cs__VarNameStr_85;
          MR_String ml_backend__mlds_to_cs__RawString_89;
          MR_String ml_backend__mlds_to_cs__MangledString_90;
          MR_Word ml_backend__mlds_to_cs__Var_27;
          MR_Word ml_backend__mlds_to_cs__Var_28;

          ml_backend__mlds_to_cs__RestOutArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__OutArgs_22, (MR_Integer) 1)));
          ml_backend__mlds_to_cs__FirstOutArgName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FirstOutArg_25, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FirstOutArg_25, (MR_Integer) 1)));
          ml_backend__mlds_to_cs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FirstOutArg_25, (MR_Integer) 2)));
          {
            ml_backend__mlds_to_cs__RawString_89 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__FirstOutArgName_26);
          }
          {
            ml_backend__mlds_to_cs__MangledString_90 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_89);
          }
          {
            ml_backend__mlds_to_cs__VarNameStr_85 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_90);
          }
          {
            ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_85);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
        }
    else
      {
        MR_Word ml_backend__mlds_to_cs__RetTypeB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) "return (");
        }
        {
          ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__RetTypeB_29);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
        ml_backend__mlds_to_cs__RestOutArgs_24 = ml_backend__mlds_to_cs__OutArgs_22;
      }
    {
      ml_backend__mlds_to_cs__Var_71 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_78_78, ml_backend__mlds_to_cs__InArgs_23, ml_backend__mlds_to_cs__RestOutArgs_24);
    }
    {
      ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0(ml_backend__mlds_to_cs__MLDS_Name_12, ml_backend__mlds_to_cs__Var_71);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_param_for_csharp_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Parameters_8)
{
  {
    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    if ((ml_backend__mlds_to_cs__Parameters_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Var_18;
        MR_Integer ml_backend__mlds_to_cs__Var_20;

        {
          mercury__io__nl_2_p_0();
        }
        ml_backend__mlds_to_cs__Var_20 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[7]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_18, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_18, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_20));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_cs__Parameters_8, (MR_String) ",\n", ml_backend__mlds_to_cs__Var_18);
        }
      }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__write_argument_name_for_csharp_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__QualFuncName_5,
  MR_Word ml_backend__mlds_to_cs__Parameters_6)
{
  {
    MR_Word ml_backend__mlds_to_cs__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualFuncName_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__FuncName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualFuncName_5, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__FunctionNameStr_30;

    {
      ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ml_backend__mlds_to_cs__ModuleName_8, (MR_Integer) 0);
    }
    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__FuncName_9)) == (MR_mktag((MR_Integer) 1))))
      ml_backend__mlds_to_cs__FunctionNameStr_30 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FuncName_9, (MR_Integer) 0)));
    else
      {
        MR_Word ml_backend__mlds_to_cs__PlainFuncName_34 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__FuncName_9), (MR_Integer) 0);
        MR_Word ml_backend__mlds_to_cs__PredLabel_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_34, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__ProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_34, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__MaybeSeqNum_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_34, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__PredLabelStr_39;
        MR_Integer ml_backend__mlds_to_cs__ModeNum_40;
        MR_Word ml_backend__mlds_to_cs___PredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PlainFuncName_34, (MR_Integer) 3)));

        {
          ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(ml_backend__mlds_to_cs__PredLabel_35, &ml_backend__mlds_to_cs__PredLabelStr_39);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_36, &ml_backend__mlds_to_cs__ModeNum_40);
        }
        if ((ml_backend__mlds_to_cs__MaybeSeqNum_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ml_backend__mlds_to_cs__Var_76;
            MR_String ml_backend__mlds_to_cs__Var_84;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__ModeNum_40, &ml_backend__mlds_to_cs__Var_76);
            }
            {
              ml_backend__mlds_to_cs__Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_76);
            }
            {
              ml_backend__mlds_to_cs__FunctionNameStr_30 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_39, ml_backend__mlds_to_cs__Var_84);
            }
          }
        else
          {
            MR_Integer ml_backend__mlds_to_cs__SeqNum_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeSeqNum_37, (MR_Integer) 0)));
            MR_String ml_backend__mlds_to_cs__Var_57;
            MR_Word ml_backend__mlds_to_cs__Var_63 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1];
            MR_String ml_backend__mlds_to_cs__Var_65;
            MR_String ml_backend__mlds_to_cs__Var_66;
            MR_String ml_backend__mlds_to_cs__Var_73;
            MR_String ml_backend__mlds_to_cs__Var_75;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_63, ml_backend__mlds_to_cs__SeqNum_41, &ml_backend__mlds_to_cs__Var_57);
            }
            {
              ml_backend__mlds_to_cs__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_57);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_63, ml_backend__mlds_to_cs__ModeNum_40, &ml_backend__mlds_to_cs__Var_66);
            }
            {
              ml_backend__mlds_to_cs__Var_73 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_66, ml_backend__mlds_to_cs__Var_65);
            }
            {
              ml_backend__mlds_to_cs__Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_73);
            }
            {
              ml_backend__mlds_to_cs__FunctionNameStr_30 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_39, ml_backend__mlds_to_cs__Var_75);
            }
          }
      }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__FunctionNameStr_30);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_cs__Parameters_6, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[7]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(
  MR_Word ml_backend__mlds_to_cs__PredLabel_3,
  MR_String * ml_backend__mlds_to_cs__String_4)
{
  if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__PredLabel_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ml_backend__mlds_to_cs__PredName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 0)));
      MR_Word ml_backend__mlds_to_cs__MaybeTypeModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 1)));
      MR_String ml_backend__mlds_to_cs__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 2)));
      MR_Integer ml_backend__mlds_to_cs__TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 3)));
      MR_String ml_backend__mlds_to_cs__MangledPredName_20;
      MR_String ml_backend__mlds_to_cs__MangledTypeName_21;

      {
        ml_backend__mlds_to_cs__MangledPredName_20 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__PredName_16);
      }
      {
        ml_backend__mlds_to_cs__MangledTypeName_21 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__TypeName_18);
      }
      if ((ml_backend__mlds_to_cs__MaybeTypeModule_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_String ml_backend__mlds_to_cs__Var_103;
          MR_String ml_backend__mlds_to_cs__Var_111;
          MR_String ml_backend__mlds_to_cs__Var_112;
          MR_String ml_backend__mlds_to_cs__Var_114;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__TypeArity_19, &ml_backend__mlds_to_cs__Var_103);
          }
          {
            ml_backend__mlds_to_cs__Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_103);
          }
          {
            ml_backend__mlds_to_cs__Var_112 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledTypeName_21, ml_backend__mlds_to_cs__Var_111);
          }
          {
            ml_backend__mlds_to_cs__Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "__", ml_backend__mlds_to_cs__Var_112);
          }
          {
            *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledPredName_20, ml_backend__mlds_to_cs__Var_114);
          }
        }
      else
        {
          MR_Word ml_backend__mlds_to_cs__TypeModule_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeTypeModule_17, (MR_Integer) 0)));
          MR_String ml_backend__mlds_to_cs__TypeModuleStr_23;
          MR_String ml_backend__mlds_to_cs__Var_88;
          MR_String ml_backend__mlds_to_cs__Var_96;
          MR_String ml_backend__mlds_to_cs__Var_97;
          MR_String ml_backend__mlds_to_cs__Var_99;
          MR_String ml_backend__mlds_to_cs__Var_100;
          MR_String ml_backend__mlds_to_cs__Var_102;

          {
            ml_backend__mlds_to_cs__TypeModuleStr_23 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ml_backend__mlds_to_cs__TypeModule_22);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__TypeArity_19, &ml_backend__mlds_to_cs__Var_88);
          }
          {
            ml_backend__mlds_to_cs__Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_88);
          }
          {
            ml_backend__mlds_to_cs__Var_97 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledTypeName_21, ml_backend__mlds_to_cs__Var_96);
          }
          {
            ml_backend__mlds_to_cs__Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "__", ml_backend__mlds_to_cs__Var_97);
          }
          {
            ml_backend__mlds_to_cs__Var_100 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledPredName_20, ml_backend__mlds_to_cs__Var_99);
          }
          {
            ml_backend__mlds_to_cs__Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "__", ml_backend__mlds_to_cs__Var_100);
          }
          {
            *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeModuleStr_23, ml_backend__mlds_to_cs__Var_102);
          }
        }
    }
  else
    {
      MR_Word ml_backend__mlds_to_cs__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 0)));
      MR_Word ml_backend__mlds_to_cs__MaybeDefiningModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 1)));
      MR_String ml_backend__mlds_to_cs__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 2)));
      MR_Integer ml_backend__mlds_to_cs__PredArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 3)));
      MR_String ml_backend__mlds_to_cs__Suffix_11;
      MR_Integer ml_backend__mlds_to_cs__OrigArity_12;
      MR_String ml_backend__mlds_to_cs__MangledName_13;
      MR_Word ml_backend__mlds_to_cs__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 4)));
      MR_Word ml_backend__mlds_to_cs__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__PredLabel_3, (MR_Integer) 5)));

      switch (ml_backend__mlds_to_cs__PredOrFunc_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            ml_backend__mlds_to_cs__Suffix_11 = (MR_String) "f";
            ml_backend__mlds_to_cs__OrigArity_12 = (ml_backend__mlds_to_cs__PredArity_8 - (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 0:
          {
            ml_backend__mlds_to_cs__Suffix_11 = (MR_String) "p";
            ml_backend__mlds_to_cs__OrigArity_12 = ml_backend__mlds_to_cs__PredArity_8;
          }
          break;
      }
      {
        ml_backend__mlds_to_cs__MangledName_13 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__Name_7);
      }
      if ((ml_backend__mlds_to_cs__MaybeDefiningModule_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_String ml_backend__mlds_to_cs__Var_77;
          MR_String ml_backend__mlds_to_cs__Var_78;
          MR_String ml_backend__mlds_to_cs__Var_85;
          MR_String ml_backend__mlds_to_cs__Var_87;

          {
            ml_backend__mlds_to_cs__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Suffix_11);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__OrigArity_12, &ml_backend__mlds_to_cs__Var_78);
          }
          {
            ml_backend__mlds_to_cs__Var_85 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_78, ml_backend__mlds_to_cs__Var_77);
          }
          {
            ml_backend__mlds_to_cs__Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_85);
          }
          {
            *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledName_13, ml_backend__mlds_to_cs__Var_87);
          }
        }
      else
        {
          MR_Word ml_backend__mlds_to_cs__DefiningModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeDefiningModule_6, (MR_Integer) 0)));
          MR_String ml_backend__mlds_to_cs__DefiningModuleStr_15;
          MR_String ml_backend__mlds_to_cs__Var_62;
          MR_String ml_backend__mlds_to_cs__Var_63;
          MR_String ml_backend__mlds_to_cs__Var_65;
          MR_String ml_backend__mlds_to_cs__Var_66;
          MR_String ml_backend__mlds_to_cs__Var_73;
          MR_String ml_backend__mlds_to_cs__Var_75;

          {
            ml_backend__mlds_to_cs__DefiningModuleStr_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ml_backend__mlds_to_cs__DefiningModule_14);
          }
          {
            ml_backend__mlds_to_cs__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", ml_backend__mlds_to_cs__DefiningModuleStr_15);
          }
          {
            ml_backend__mlds_to_cs__Var_63 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Suffix_11, ml_backend__mlds_to_cs__Var_62);
          }
          {
            ml_backend__mlds_to_cs__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_63);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__OrigArity_12, &ml_backend__mlds_to_cs__Var_66);
          }
          {
            ml_backend__mlds_to_cs__Var_73 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_66, ml_backend__mlds_to_cs__Var_65);
          }
          {
            ml_backend__mlds_to_cs__Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_73);
          }
          {
            *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledName_13, ml_backend__mlds_to_cs__Var_75);
          }
        }
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ForeignBodyCode_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignBodyCode_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__LiteralOrInclude_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignBodyCode_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignBodyCode_8, (MR_Integer) 2)));

    switch (ml_backend__mlds_to_cs__Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_csharp_body_code\'/5", (MR_String) "foreign code other than C#");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Var_38;
          MR_String ml_backend__mlds_to_cs__Var_75 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_64;
          MR_Word ml_backend__mlds_to_cs__Var_65;
          MR_Word ml_backend__mlds_to_cs__Var_66;
          MR_Word ml_backend__mlds_to_cs__Var_67;
          MR_String ml_backend__mlds_to_cs__Var_68;
          MR_Word ml_backend__mlds_to_cs__Var_69;
          MR_Word ml_backend__mlds_to_cs__Var_70;
          MR_Word ml_backend__mlds_to_cs__Var_71;

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__LiteralOrInclude_11)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String ml_backend__mlds_to_cs__IncludeFileName_26 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__LiteralOrInclude_11, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__IncludePath_28;
              MR_Word ml_backend__mlds_to_cs__Var_29;
              MR_Word ml_backend__mlds_to_cs__Var_30;
              MR_Word ml_backend__mlds_to_cs__Var_56;
              MR_Word ml_backend__mlds_to_cs__Var_57;
              MR_Word ml_backend__mlds_to_cs__Var_58;
              MR_Word ml_backend__mlds_to_cs__Var_59;
              MR_String ml_backend__mlds_to_cs__Var_60;
              MR_Word ml_backend__mlds_to_cs__Var_61;
              MR_Word ml_backend__mlds_to_cs__Var_62;
              MR_Word ml_backend__mlds_to_cs__Var_63;

              {
                parse_tree__file_names__make_include_file_path_3_p_0(ml_backend__mlds_to_cs__Var_75, ml_backend__mlds_to_cs__IncludeFileName_26, &ml_backend__mlds_to_cs__IncludePath_28);
              }
              ml_backend__mlds_to_cs__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_57 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_30, 0) = ((MR_Box) (ml_backend__mlds_to_cs__IncludePath_28));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_30, 1) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                ml_backend__mlds_to_cs__cs_output_context_4_p_0(ml_backend__mlds_to_cs__Var_29, ml_backend__mlds_to_cs__Var_30);
              }
              {
                libs__file_util__write_include_file_contents_cur_stream_3_p_0(ml_backend__mlds_to_cs__IncludePath_28);
              }
            }
          else
            {
              MR_String ml_backend__mlds_to_cs__Code_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LiteralOrInclude_11, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_77, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_7);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Code_25);
              }
            }
          {
            mercury__io__nl_2_p_0();
          }
          ml_backend__mlds_to_cs__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__Var_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          switch (ml_backend__mlds_to_cs__Var_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "#line default\n");
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__DeclCode_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__LiteralOrInclude_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___IsLocal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 1)));

    switch (ml_backend__mlds_to_cs__Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_csharp_decl\'/5", (MR_String) "foreign decl other than C#");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Var_39;
          MR_String ml_backend__mlds_to_cs__Var_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Var_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__Var_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_65;
          MR_Word ml_backend__mlds_to_cs__Var_66;
          MR_Word ml_backend__mlds_to_cs__Var_67;
          MR_Word ml_backend__mlds_to_cs__Var_68;
          MR_String ml_backend__mlds_to_cs__Var_69;
          MR_Word ml_backend__mlds_to_cs__Var_70;
          MR_Word ml_backend__mlds_to_cs__Var_71;
          MR_Word ml_backend__mlds_to_cs__Var_72;

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__LiteralOrInclude_12)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String ml_backend__mlds_to_cs__IncludeFileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__LiteralOrInclude_12, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__IncludePath_29;
              MR_Word ml_backend__mlds_to_cs__Var_30;
              MR_Word ml_backend__mlds_to_cs__Var_31;
              MR_Word ml_backend__mlds_to_cs__Var_57;
              MR_Word ml_backend__mlds_to_cs__Var_58;
              MR_Word ml_backend__mlds_to_cs__Var_59;
              MR_Word ml_backend__mlds_to_cs__Var_60;
              MR_String ml_backend__mlds_to_cs__Var_61;
              MR_Word ml_backend__mlds_to_cs__Var_62;
              MR_Word ml_backend__mlds_to_cs__Var_63;
              MR_Word ml_backend__mlds_to_cs__Var_64;

              {
                parse_tree__file_names__make_include_file_path_3_p_0(ml_backend__mlds_to_cs__Var_76, ml_backend__mlds_to_cs__IncludeFileName_27, &ml_backend__mlds_to_cs__IncludePath_29);
              }
              ml_backend__mlds_to_cs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_31, 0) = ((MR_Box) (ml_backend__mlds_to_cs__IncludePath_29));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_31, 1) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                ml_backend__mlds_to_cs__cs_output_context_4_p_0(ml_backend__mlds_to_cs__Var_30, ml_backend__mlds_to_cs__Var_31);
              }
              {
                libs__file_util__write_include_file_contents_cur_stream_3_p_0(ml_backend__mlds_to_cs__IncludePath_29);
              }
            }
          else
            {
              MR_String ml_backend__mlds_to_cs__Code_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LiteralOrInclude_12, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(ml_backend__mlds_to_cs__Var_78, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_7);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Code_26);
              }
            }
          {
            mercury__io__nl_2_p_0();
          }
          ml_backend__mlds_to_cs__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__Var_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          switch (ml_backend__mlds_to_cs__Var_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "#line default\n");
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_6,
  MR_Word ml_backend__mlds_to_cs__Context_7,
  MR_Integer ml_backend__mlds_to_cs__N_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (ml_backend__mlds_to_cs__OutputLineNumbers_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__File_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_7, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Line_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_7, (MR_Integer) 1)));

          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Line_20 > (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__File_19, (MR_String) "") == 0);
              ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_String ml_backend__mlds_to_cs__Var_32;

              {
                mercury__io__write_string_3_p_0((MR_String) "#line ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__Line_20, &ml_backend__mlds_to_cs__Var_32);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_32);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " \"");
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__File_19);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"\n");
              }
            }
          else
            {
            }
        }
        break;
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__N_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__cs_output_context_4_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_5,
  MR_Word ml_backend__mlds_to_cs__Context_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (ml_backend__mlds_to_cs__OutputLineNumbers_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__File_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_6, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Line_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_6, (MR_Integer) 1)));

          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Line_9 > (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__File_8, (MR_String) "") == 0);
              ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_String ml_backend__mlds_to_cs__Var_23;

              {
                mercury__io__write_string_3_p_0((MR_String) "#line ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__Line_9, &ml_backend__mlds_to_cs__Var_23);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_23);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " \"");
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__File_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"\n");
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
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_9(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_env_var_definition_for_csharp_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_8(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv8_HeadVar__3_3;

    {
      ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv8_HeadVar__3_3);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv8_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_7(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv6_HeadVar__3_3;

    {
      ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv6_HeadVar__3_3);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv6_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_6(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_global_var_defn_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv1_HeadVar__3_3;

    {
      ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv1_HeadVar__3_3);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_Box ml_backend__mlds_to_cs__wrapper_arg_2;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_58;

    {
      ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_58 = ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__144__1_1_f_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_58));
    return ml_backend__mlds_to_cs__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__MLDS_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_154_154;
    MR_Word ml_backend__mlds_to_cs__TypeInfo_155_155;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_169_169;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_170_170;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_171_171;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_175_175;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_179_179;
    MR_Word ml_backend__mlds_to_cs__TypeInfo_183_183;
    MR_Word ml_backend__mlds_to_cs__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__AllForeignCode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__GlobalData_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__TypeDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__TableStructDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__ProcDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 6)));
    MR_Word ml_backend__mlds_to_cs__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 7)));
    MR_Word ml_backend__mlds_to_cs__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 8)));
    MR_Word ml_backend__mlds_to_cs__ExportedEnums_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 9)));
    MR_Word ml_backend__mlds_to_cs__ScalarCellGroupMap_20;
    MR_Word ml_backend__mlds_to_cs__VectorCellGroupMap_21;
    MR_Word ml_backend__mlds_to_cs__RttiDefns_23;
    MR_Word ml_backend__mlds_to_cs__CellDefns_24;
    MR_Word ml_backend__mlds_to_cs__ClosureWrapperFuncDefns_25;
    MR_Word ml_backend__mlds_to_cs__ScalarCellGroups_27;
    MR_Word ml_backend__mlds_to_cs__ScalarCellRows_28;
    MR_Word ml_backend__mlds_to_cs__RevSeqNumCodeAddrs_32;
    MR_Word ml_backend__mlds_to_cs__CodeAddrs_33;
    MR_Word ml_backend__mlds_to_cs__ForeignCode_34;
    MR_Word ml_backend__mlds_to_cs__ForeignDeclCodes_35;
    MR_Word ml_backend__mlds_to_cs__ForeignBodyCodes_36;
    MR_Word ml_backend__mlds_to_cs__ExportDefns_38;
    MR_Word ml_backend__mlds_to_cs__Globals_39;
    MR_String ml_backend__mlds_to_cs__SourceFileName_40;
    MR_Word ml_backend__mlds_to_cs__Info_41;
    MR_Word ml_backend__mlds_to_cs__SortedFuncDefns_42;
    MR_Word ml_backend__mlds_to_cs__SortedClassDefns_43;
    MR_Word ml_backend__mlds_to_cs__EnvVarNamesSet0_44;
    MR_Word ml_backend__mlds_to_cs__EnvVarNamesSet1_45;
    MR_Word ml_backend__mlds_to_cs__EnvVarNamesSet_46;
    MR_Word ml_backend__mlds_to_cs__StaticCtorCalls_47;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_50_50;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_51_51;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_52_52;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_53_53;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_54_54;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_55_55;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_60_60;
    MR_Word ml_backend__mlds_to_cs__Var_61;
    MR_Word ml_backend__mlds_to_cs__Var_65;
    MR_Word ml_backend__mlds_to_cs__Var_70;
    MR_Integer ml_backend__mlds_to_cs__Var_72;
    MR_Integer ml_backend__mlds_to_cs__Var_75;
    MR_Integer ml_backend__mlds_to_cs__Var_80;
    MR_Integer ml_backend__mlds_to_cs__Var_83;
    MR_Integer ml_backend__mlds_to_cs__Var_86;
    MR_Word ml_backend__mlds_to_cs__Var_87;
    MR_Integer ml_backend__mlds_to_cs__Var_92;
    MR_Integer ml_backend__mlds_to_cs__Var_97;
    MR_Integer ml_backend__mlds_to_cs__Var_102;
    MR_Word ml_backend__mlds_to_cs__Var_107;
    MR_Word ml_backend__mlds_to_cs__Var_108;
    MR_Integer ml_backend__mlds_to_cs__Var_110;
    MR_Word ml_backend__mlds_to_cs__Var_115;
    MR_Integer ml_backend__mlds_to_cs__Var_117;
    MR_Integer ml_backend__mlds_to_cs__Var_121;
    MR_Integer ml_backend__mlds_to_cs__Var_126;
    MR_Word ml_backend__mlds_to_cs__Var_133;
    MR_Integer ml_backend__mlds_to_cs__Var_135;
    MR_Word ml_backend__mlds_to_cs__Var_138;
    MR_Word ml_backend__mlds_to_cs__Var_140;
    MR_Word ml_backend__mlds_to_cs__Var_142;
    MR_Integer ml_backend__mlds_to_cs__Var_144;
    MR_Word ml_backend__mlds_to_cs__Imports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs___AllocIdMap_22;
    MR_Box ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60;
    MR_Word ml_backend__mlds_to_cs__Var_30;
    MR_Word ml_backend__mlds_to_cs__Var_31;
    MR_Word ml_backend__mlds_to_cs___Imports_37;
    MR_Box ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_IO_71_71;
    MR_Box ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_IO_109_109;
    MR_Box ml_backend__mlds_to_cs__conv5_STATE_VARIABLE_IO_116_116;
    MR_Box ml_backend__mlds_to_cs__conv7_EnvVarNamesSet1_45;
    MR_Box ml_backend__mlds_to_cs__conv9_EnvVarNamesSet_46;
    MR_Box ml_backend__mlds_to_cs__conv10_STATE_VARIABLE_IO_134_134;

    {
      ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(ml_backend__mlds_to_cs__GlobalData_13, &ml_backend__mlds_to_cs__ScalarCellGroupMap_20, &ml_backend__mlds_to_cs__VectorCellGroupMap_21, &ml_backend__mlds_to_cs___AllocIdMap_22, &ml_backend__mlds_to_cs__RttiDefns_23, &ml_backend__mlds_to_cs__CellDefns_24, &ml_backend__mlds_to_cs__ClosureWrapperFuncDefns_25);
    }
    {
      ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_50_50 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
    }
    {
      ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(ml_backend__mlds_to_cs__RttiDefns_23, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_50_50, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_51_51);
    }
    {
      ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(ml_backend__mlds_to_cs__CellDefns_24, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_51_51, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_52_52);
    }
    {
      ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(ml_backend__mlds_to_cs__TableStructDefns_15, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_52_52, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_53_53);
    }
    {
      ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ml_backend__mlds_to_cs__ClosureWrapperFuncDefns_25, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_53_53, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_54_54);
    }
    {
      ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ml_backend__mlds_to_cs__ProcDefns_16, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_54_54, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_55_55);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_154_154 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
    {
      mercury__map__values_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ml_backend__mlds_to_cs__TypeCtorInfo_154_154, ml_backend__mlds_to_cs__ScalarCellGroupMap_20, &ml_backend__mlds_to_cs__ScalarCellGroups_27);
    }
    ml_backend__mlds_to_cs__TypeInfo_155_155 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[0];
    {
      ml_backend__mlds_to_cs__ScalarCellRows_28 = mercury__list__map_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_154_154, ml_backend__mlds_to_cs__TypeInfo_155_155, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[3], ml_backend__mlds_to_cs__ScalarCellGroups_27);
    }
    {
      mercury__list__foldl_4_p_0(ml_backend__mlds_to_cs__TypeInfo_155_155, (MR_Word) &ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[4], ml_backend__mlds_to_cs__ScalarCellRows_28, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_55_55)), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60);
    }
    ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_60_60 = ((MR_Word) ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60);
    ml_backend__mlds_to_cs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_60_60, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_60_60, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__RevSeqNumCodeAddrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrsInConsts_60_60, (MR_Integer) 2)));
    {
      ml_backend__mlds_to_cs__Var_61 = mercury__map__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      ml_backend__mlds_to_cs__make_code_addr_map_for_csharp_3_p_0(ml_backend__mlds_to_cs__RevSeqNumCodeAddrs_32, ml_backend__mlds_to_cs__Var_61, &ml_backend__mlds_to_cs__CodeAddrs_33);
    }
    {
      ml_backend__mlds_to_cs__ForeignCode_34 = ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(ml_backend__mlds_to_cs__AllForeignCode_11);
    }
    ml_backend__mlds_to_cs__ForeignDeclCodes_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_34, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__ForeignBodyCodes_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_34, (MR_Integer) 1)));
    ml_backend__mlds_to_cs___Imports_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_34, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__ExportDefns_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_34, (MR_Integer) 3)));
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_6, &ml_backend__mlds_to_cs__Globals_39);
    }
    {
      parse_tree__file_names__module_source_filename_5_p_0(ml_backend__mlds_to_cs__Globals_39, ml_backend__mlds_to_cs__ModuleName_10, &ml_backend__mlds_to_cs__SourceFileName_40);
    }
    {
      ml_backend__mlds_to_cs__Info_41 = ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(ml_backend__mlds_to_cs__ModuleInfo_6, ml_backend__mlds_to_cs__SourceFileName_40, ml_backend__mlds_to_cs__CodeAddrs_33);
    }
    {
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Indent_7, ml_backend__mlds_to_cs__ModuleName_10, ml_backend__mlds_to_cs__ForeignDeclCodes_35, ml_backend__mlds_to_cs__ProcDefns_16);
    }
    {
      ml_backend__mlds_to_cs__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_41));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ml_backend__mlds_to_cs__ForeignBodyCodes_36, (MR_String) "\n", ml_backend__mlds_to_cs__Var_65);
    }
    {
      ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// RttiDefns\n");
    }
    ml_backend__mlds_to_cs__Var_72 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_70, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_70, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_70, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_41));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_70, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_72));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_70, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_169_169 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    ml_backend__mlds_to_cs__TypeCtorInfo_170_170 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_169_169, ml_backend__mlds_to_cs__TypeCtorInfo_170_170, ml_backend__mlds_to_cs__Var_70, ml_backend__mlds_to_cs__RttiDefns_23, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_IO_71_71);
    }
    ml_backend__mlds_to_cs__Var_75 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_75, ml_backend__mlds_to_cs__RttiDefns_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Cell and tabling definitions\n");
    }
    ml_backend__mlds_to_cs__Var_80 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_80, ml_backend__mlds_to_cs__CellDefns_24);
    }
    ml_backend__mlds_to_cs__Var_83 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_83, ml_backend__mlds_to_cs__TableStructDefns_15);
    }
    ml_backend__mlds_to_cs__Var_86 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_87 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_169_169, ml_backend__mlds_to_cs__CellDefns_24, ml_backend__mlds_to_cs__TableStructDefns_15);
    }
    {
      ml_backend__mlds_to_cs__output_init_global_var_method_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_86, ml_backend__mlds_to_cs__Var_87);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Scalar common data\n");
    }
    ml_backend__mlds_to_cs__Var_92 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_92, ml_backend__mlds_to_cs__ScalarCellGroupMap_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Vector common data\n");
    }
    ml_backend__mlds_to_cs__Var_97 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_97, ml_backend__mlds_to_cs__VectorCellGroupMap_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Method pointers\n");
    }
    ml_backend__mlds_to_cs__Var_102 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_102, ml_backend__mlds_to_cs__CodeAddrs_33);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Function definitions\n");
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_171_171 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0;
    {
      ml_backend__mlds_to_cs__Var_107 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_171_171, ml_backend__mlds_to_cs__ClosureWrapperFuncDefns_25, ml_backend__mlds_to_cs__ProcDefns_16);
    }
    {
      mercury__list__sort_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_171_171, ml_backend__mlds_to_cs__Var_107, &ml_backend__mlds_to_cs__SortedFuncDefns_42);
    }
    ml_backend__mlds_to_cs__Var_110 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_108, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_108, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_108, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_41));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_108, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_110));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_108, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_171_171, ml_backend__mlds_to_cs__TypeCtorInfo_170_170, ml_backend__mlds_to_cs__Var_108, ml_backend__mlds_to_cs__SortedFuncDefns_42, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_IO_109_109);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Class definitions\n");
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_175_175 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0;
    {
      mercury__list__sort_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_175_175, ml_backend__mlds_to_cs__TypeDefns_14, &ml_backend__mlds_to_cs__SortedClassDefns_43);
    }
    ml_backend__mlds_to_cs__Var_117 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_115, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_115, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_115, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_41));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_115, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_117));
    }
    {
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_175_175, ml_backend__mlds_to_cs__TypeCtorInfo_170_170, ml_backend__mlds_to_cs__Var_115, ml_backend__mlds_to_cs__SortedClassDefns_43, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv5_STATE_VARIABLE_IO_116_116);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// ExportDefns\n");
    }
    ml_backend__mlds_to_cs__Var_121 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_121, ml_backend__mlds_to_cs__ExportDefns_38);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// ExportedEnums\n");
    }
    ml_backend__mlds_to_cs__Var_126 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_41, ml_backend__mlds_to_cs__Var_126, ml_backend__mlds_to_cs__ExportedEnums_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// EnvVarNames\n");
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_179_179 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__set__init_1_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_179_179, &ml_backend__mlds_to_cs__EnvVarNamesSet0_44);
    }
    ml_backend__mlds_to_cs__TypeInfo_183_183 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[1];
    {
      mercury__list__foldl_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_171_171, ml_backend__mlds_to_cs__TypeInfo_183_183, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[5], ml_backend__mlds_to_cs__ProcDefns_16, ((MR_Box) (ml_backend__mlds_to_cs__EnvVarNamesSet0_44)), &ml_backend__mlds_to_cs__conv7_EnvVarNamesSet1_45);
    }
    ml_backend__mlds_to_cs__EnvVarNamesSet1_45 = ((MR_Word) ml_backend__mlds_to_cs__conv7_EnvVarNamesSet1_45);
    {
      mercury__list__foldl_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_171_171, ml_backend__mlds_to_cs__TypeInfo_183_183, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[6], ml_backend__mlds_to_cs__ClosureWrapperFuncDefns_25, ((MR_Box) (ml_backend__mlds_to_cs__EnvVarNamesSet1_45)), &ml_backend__mlds_to_cs__conv9_EnvVarNamesSet_46);
    }
    ml_backend__mlds_to_cs__EnvVarNamesSet_46 = ((MR_Word) ml_backend__mlds_to_cs__conv9_EnvVarNamesSet_46);
    ml_backend__mlds_to_cs__Var_135 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_133, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_133, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_9));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_133, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Var_135));
    }
    {
      mercury__set__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_179_179, ml_backend__mlds_to_cs__TypeCtorInfo_170_170, ml_backend__mlds_to_cs__Var_133, ml_backend__mlds_to_cs__EnvVarNamesSet_46, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv10_STATE_VARIABLE_IO_134_134);
    }
    {
      ml_backend__mlds_to_cs__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_142, 0) = ((MR_Box) ((MR_String) "MR_init_vector_common_data"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_142, 1) = ((MR_Box) (ml_backend__mlds_to_cs__InitPreds_17));
    }
    {
      ml_backend__mlds_to_cs__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_140, 0) = ((MR_Box) ((MR_String) "MR_init_scalar_common_data"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_140, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_142));
    }
    {
      ml_backend__mlds_to_cs__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_138, 0) = ((MR_Box) ((MR_String) "MR_init_data"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_138, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_140));
    }
    {
      ml_backend__mlds_to_cs__StaticCtorCalls_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__StaticCtorCalls_47, 0) = ((MR_Box) ((MR_String) "MR_init_rtti"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__StaticCtorCalls_47, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_138));
    }
    ml_backend__mlds_to_cs__Var_144 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_static_constructor_6_p_0(ml_backend__mlds_to_cs__ModuleName_10, ml_backend__mlds_to_cs__Var_144, ml_backend__mlds_to_cs__StaticCtorCalls_47, ml_backend__mlds_to_cs__FinalPreds_18);
    }
    {
      ml_backend__mlds_to_cs__output_src_end_for_csharp_4_p_0(ml_backend__mlds_to_cs__Indent_7, ml_backend__mlds_to_cs__ModuleName_10);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_11,
  MR_Word ml_backend__mlds_to_cs__ForeignDecls_13,
  MR_Word ml_backend__mlds_to_cs__Defns_14)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__ClassName_16;
    MR_String ml_backend__mlds_to_cs__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_31;
    MR_Word ml_backend__mlds_to_cs__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

    {
      ml_backend__mlds_to_target_util__output_auto_gen_comment_3_p_0(ml_backend__mlds_to_cs__Var_19);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/* :- module ");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(ml_backend__mlds_to_cs__MercuryModuleName_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ". */\n");
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "namespace mercury {\n\n");
    }
    {
      ml_backend__mlds_to_cs__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_31, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_31, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_31, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_9));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_31, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_10));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ml_backend__mlds_to_cs__ForeignDecls_13, (MR_String) "\n", ml_backend__mlds_to_cs__Var_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static class ");
    }
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__MercuryModuleName_11, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__ClassName_16);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__ClassName_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " {\n");
    }
    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(ml_backend__mlds_to_cs__Defns_14);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Integer ml_backend__mlds_to_cs__Var_40 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);

        {
          ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0(ml_backend__mlds_to_cs__Var_40, ml_backend__mlds_to_cs__ClassName_16);
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_target_util__write_indented_line_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__ClassName_6)
{
  {
    MR_Word ml_backend__mlds_to_cs__Body_8;
    MR_Word ml_backend__mlds_to_cs__Var_20;
    MR_String ml_backend__mlds_to_cs__Var_21;
    MR_String ml_backend__mlds_to_cs__Var_23;
    MR_Word ml_backend__mlds_to_cs__Var_48;
    MR_Integer ml_backend__mlds_to_cs__Var_50;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_49_49;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static void Main");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(string[] args)\n");
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    {
      ml_backend__mlds_to_cs__Var_23 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ClassName_6, (MR_String) ".main_2_p_0();");
    }
    {
      ml_backend__mlds_to_cs__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "   ", ml_backend__mlds_to_cs__Var_23);
    }
    {
      ml_backend__mlds_to_cs__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_20, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Var_21));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[17])));
    }
    {
      ml_backend__mlds_to_cs__Body_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_8, 0) = ((MR_Box) ((MR_String) "try {"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_8, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_20));
    }
    ml_backend__mlds_to_cs__Var_50 = (ml_backend__mlds_to_cs__Indent_5 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_48, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Var_50));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_48, ml_backend__mlds_to_cs__Body_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_49_49);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_5,
  MR_String ml_backend__mlds_to_cs__SourceFileName_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_7)
{
  {
    MR_Word ml_backend__mlds_to_cs__Info_8;
    MR_Word ml_backend__mlds_to_cs__Globals_9;
    MR_Word ml_backend__mlds_to_cs__AutoComments_10;
    MR_Word ml_backend__mlds_to_cs__LineNumbers_11;
    MR_Word ml_backend__mlds_to_cs__ForeignLineNumbers_12;
    MR_Word ml_backend__mlds_to_cs__ModuleName_13;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_14;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_5, &ml_backend__mlds_to_cs__Globals_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_cs__Globals_9, (MR_Integer) 151, &ml_backend__mlds_to_cs__AutoComments_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_cs__Globals_9, (MR_Integer) 148, &ml_backend__mlds_to_cs__LineNumbers_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_cs__Globals_9, (MR_Integer) 149, &ml_backend__mlds_to_cs__ForeignLineNumbers_12);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_5, &ml_backend__mlds_to_cs__ModuleName_13);
    }
    {
      ml_backend__mlds_to_cs__MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__mlds_to_cs__ModuleName_13);
    }
    {
      ml_backend__mlds_to_cs__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 0) = ((MR_Box) (ml_backend__mlds_to_cs__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 1) = ((MR_Box) ((ml_backend__mlds_to_cs__AutoComments_10 | ((((ml_backend__mlds_to_cs__LineNumbers_11 << (MR_Integer) 1)) | ((ml_backend__mlds_to_cs__ForeignLineNumbers_12 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 2) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_ModuleName_14));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 3) = ((MR_Box) (ml_backend__mlds_to_cs__SourceFileName_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 4) = ((MR_Box) (ml_backend__mlds_to_cs__CodeAddrs_7));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__mlds_to_cs__Info_8;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0(void)
{
  {
    {
      mercury__io__write_string_3_p_0((MR_String) "#pragma warning disable 162, 168, 169, 219, 1717\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__OrderedDefns_10;
    MR_Word ml_backend__mlds_to_cs__Var_16;
    MR_Integer ml_backend__mlds_to_cs__Var_18;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_17_17;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static void MR_init_rtti() {\n");
    }
    {
      ml_backend__mlds_to_cs__OrderedDefns_10 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(ml_backend__mlds_to_cs__Defns_8);
    }
    ml_backend__mlds_to_cs__Var_18 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_18));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_16, ml_backend__mlds_to_cs__OrderedDefns_10, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_17_17);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_vector_cell_decl_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__VectorCellGroupMap_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_28_28;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_29_29;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_30_30;
    MR_Word ml_backend__mlds_to_cs__Var_12;
    MR_Word ml_backend__mlds_to_cs__Var_17;
    MR_Integer ml_backend__mlds_to_cs__Var_19;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_13_13;
    MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_18_18;

    {
      ml_backend__mlds_to_cs__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    ml_backend__mlds_to_cs__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
    ml_backend__mlds_to_cs__TypeCtorInfo_30_30 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__map__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_28_28, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__TypeCtorInfo_30_30, ml_backend__mlds_to_cs__Var_12, ml_backend__mlds_to_cs__VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_13_13);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_vector_common_data() {\n");
    }
    ml_backend__mlds_to_cs__Var_19 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_17, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_17, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_19));
    }
    {
      mercury__map__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_28_28, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__TypeCtorInfo_30_30, ml_backend__mlds_to_cs__Var_17, ml_backend__mlds_to_cs__VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_18_18);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_scalar_init_for_csharp_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_7,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_8)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_29;
    MR_Word ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_31;

    {
      ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_29, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_5), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_31);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_4 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_29));
    *ml_backend__mlds_to_cs__wrapper_arg_6 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_31));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ScalarCellGroupMap_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_40_40;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_46_46;
    MR_Word ml_backend__mlds_to_cs__Graph_10;
    MR_Word ml_backend__mlds_to_cs__Map_11;
    MR_Word ml_backend__mlds_to_cs__Var_16;
    MR_Word ml_backend__mlds_to_cs__Var_17;
    MR_Word ml_backend__mlds_to_cs__Var_18;
    MR_Box ml_backend__mlds_to_cs__conv4_Graph_10;
    MR_Box ml_backend__mlds_to_cs__conv3_Map_11;
    MR_Box ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_19_19;
    MR_Word ml_backend__mlds_to_cs__SortedScalars0_12;

    {
      ml_backend__mlds_to_cs__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_16, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_40_40 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;
    {
      ml_backend__mlds_to_cs__Var_17 = mercury__digraph__init_0_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_40_40);
    }
    {
      ml_backend__mlds_to_cs__Var_18 = mercury__map__init_0_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_40_40, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_46_46 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__map__foldl3_8_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[3], (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[0], ml_backend__mlds_to_cs__TypeCtorInfo_46_46, ml_backend__mlds_to_cs__Var_16, ml_backend__mlds_to_cs__ScalarCellGroupMap_8, ((MR_Box) (ml_backend__mlds_to_cs__Var_17)), &ml_backend__mlds_to_cs__conv4_Graph_10, ((MR_Box) (ml_backend__mlds_to_cs__Var_18)), &ml_backend__mlds_to_cs__conv3_Map_11, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_19_19);
    }
    ml_backend__mlds_to_cs__Graph_10 = ((MR_Word) ml_backend__mlds_to_cs__conv4_Graph_10);
    ml_backend__mlds_to_cs__Map_11 = ((MR_Word) ml_backend__mlds_to_cs__conv3_Map_11);
    {
      ml_backend__mlds_to_cs__succeeded = mercury__digraph__tsort_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_40_40, ml_backend__mlds_to_cs__Graph_10, &ml_backend__mlds_to_cs__SortedScalars0_12);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Word ml_backend__mlds_to_cs__SortedScalars_13;
        MR_Word ml_backend__mlds_to_cs__Var_23;
        MR_Integer ml_backend__mlds_to_cs__Var_25;
        MR_Box ml_backend__mlds_to_cs__conv5_STATE_VARIABLE_IO_24_24;

        {
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_scalar_common_data() {\n");
        }
        {
          mercury__list__reverse_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_40_40, ml_backend__mlds_to_cs__SortedScalars0_12, &ml_backend__mlds_to_cs__SortedScalars_13);
        }
        ml_backend__mlds_to_cs__Var_25 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_23, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_23, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Var_25));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_23, 5) = ((MR_Box) (ml_backend__mlds_to_cs__Map_11));
        }
        {
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_40_40, ml_backend__mlds_to_cs__TypeCtorInfo_46_46, ml_backend__mlds_to_cs__Var_23, ml_backend__mlds_to_cs__SortedScalars_13, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv5_STATE_VARIABLE_IO_24_24);
        }
        {
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_scalar_common_data_for_csharp\'/5", (MR_String) "digraph.tsort failed");
          return;
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_global_var_method_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__GlobalVarDefns_8)
{
  {
    MR_Integer ml_backend__mlds_to_cs__Var_15;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_data() {\n");
    }
    ml_backend__mlds_to_cs__Var_15 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_init_global_var_statements_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Var_15, ml_backend__mlds_to_cs__GlobalVarDefns_8);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_global_var_statements_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word ml_backend__mlds_to_cs__GlobalVarDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__GlobalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__GlobalVarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Initializer_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 4)));
          MR_String ml_backend__mlds_to_cs__DataNameStr_35;
          MR_Word ml_backend__mlds_to_cs___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs___Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs___GCStmt_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 5)));

          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_2);
          }
          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__GlobalVarName_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__mlds_to_cs__RttiId_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarName_16, (MR_Integer) 0)));

                {
                  backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_41, &ml_backend__mlds_to_cs__DataNameStr_35);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__mlds_to_cs__ConstVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_16, (MR_Integer) 0)));
                MR_Integer ml_backend__mlds_to_cs__Num_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_16, (MR_Integer) 1)));

                {
                  ml_backend__mlds_to_cs__DataNameStr_35 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ml_backend__mlds_to_cs__ConstVar_39, ml_backend__mlds_to_cs__Num_40);
                }
              }
              break;
          }
          {
            ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__DataNameStr_35);
          }
          {
            ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(ml_backend__mlds_to_cs__Info_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__mlds_to_cs__Type_19, ml_backend__mlds_to_cs__Initializer_20);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ";\n");
          }
          /* direct tailcall eliminated */
          {
            MR_Word ml_backend__mlds_to_cs__next_value_of_HeadVar__3_3 = ml_backend__mlds_to_cs__GlobalVarDefns_14;

            ml_backend__mlds_to_cs__HeadVar__3_3 = ml_backend__mlds_to_cs__next_value_of_HeadVar__3_3;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__OutputAux_8,
  MR_Word ml_backend__mlds_to_cs__Type_9,
  MR_Word ml_backend__mlds_to_cs__Initializer_10)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__mlds_to_cs__OutputAux_8)) {
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
                MR_String ml_backend__mlds_to_cs__Var_22;

                {
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
                switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_9)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ml_backend__mlds_to_cs__Type_9)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                        ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_cs__Var_22 = (MR_String) "false";
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 4:
                        ml_backend__mlds_to_cs__Var_22 = (MR_String) "0";
                        break;
                      case (MR_Integer) 3:
                        ml_backend__mlds_to_cs__Var_22 = (MR_String) "0U";
                        break;
                      case (MR_Integer) 5:
                        ml_backend__mlds_to_cs__Var_22 = (MR_String) "\'\\u0000\'";
                        break;
                      case (MR_Integer) 10:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "variable has unknown_type");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ml_backend__mlds_to_cs__CtorCat_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 1)));
                      MR_Word ml_backend__mlds_to_cs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 0)));
                      MR_Word ml_backend__mlds_to_cs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 2)));

                      switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_34)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_34)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                              break;
                            case (MR_Integer) 1:
                              ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                              break;
                            case (MR_Integer) 2:
                              {
                                MR_String ml_backend__mlds_to_cs__TypeString_39;
                                MR_String ml_backend__mlds_to_cs__Var_66;
                                MR_Word ml_backend__mlds_to_cs__Var_40;

                                {
                                  ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_9, &ml_backend__mlds_to_cs__TypeString_39, &ml_backend__mlds_to_cs__Var_40);
                                }
                                {
                                  ml_backend__mlds_to_cs__Var_66 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_39, (MR_String) ")");
                                }
                                {
                                  ml_backend__mlds_to_cs__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_66);
                                }
                              }
                              break;
                            case (MR_Integer) 3:
                              ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                              break;
                            case (MR_Integer) 4:
                              ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ml_backend__mlds_to_cs__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CtorCat_34, (MR_Integer) 0)));

                            switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_87)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                switch (MR_unmkbody(ml_backend__mlds_to_cs__Var_87)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    ml_backend__mlds_to_cs__Var_22 = (MR_String) "0";
                                    break;
                                  case (MR_Integer) 1:
                                    ml_backend__mlds_to_cs__Var_22 = (MR_String) "\'\\u0000\'";
                                    break;
                                  case (MR_Integer) 2:
                                    ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                                    break;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word ml_backend__mlds_to_cs__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_87, (MR_Integer) 0)));

                                  ml_backend__mlds_to_cs__Var_22 = ((&ml_backend__mlds_to_cs_vector_common_9[24 + ml_backend__mlds_to_cs__Var_88]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                                }
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_String ml_backend__mlds_to_cs__TypeString_39;
                            MR_String ml_backend__mlds_to_cs__Var_66;
                            MR_Word ml_backend__mlds_to_cs__Var_40;

                            {
                              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_9, &ml_backend__mlds_to_cs__TypeString_39, &ml_backend__mlds_to_cs__Var_40);
                            }
                            {
                              ml_backend__mlds_to_cs__Var_66 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_39, (MR_String) ")");
                            }
                            {
                              ml_backend__mlds_to_cs__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_66);
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_34, (MR_Integer) 0)))) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_String ml_backend__mlds_to_cs__TypeString_39;
                                MR_String ml_backend__mlds_to_cs__Var_66;
                                MR_Word ml_backend__mlds_to_cs__Var_40;

                                {
                                  ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_9, &ml_backend__mlds_to_cs__TypeString_39, &ml_backend__mlds_to_cs__Var_40);
                                }
                                {
                                  ml_backend__mlds_to_cs__Var_66 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_39, (MR_String) ")");
                                }
                                {
                                  ml_backend__mlds_to_cs__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_66);
                                }
                              }
                              break;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                        ml_backend__mlds_to_cs__Var_22 = (MR_String) "null";
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ml_backend__mlds_to_cs__ForeignType_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 1)));

                          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__ForeignType_52)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                            case (MR_Integer) 1:
                            case (MR_Integer) 3:
                              {
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "wrong foreign language type");
                                  return;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                MR_String ml_backend__mlds_to_cs__CsharpType_53;
                                MR_Word ml_backend__mlds_to_cs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ForeignType_52, (MR_Integer) 0)));
                                MR_String ml_backend__mlds_to_cs__Var_63;

                                ml_backend__mlds_to_cs__CsharpType_53 = (MR_String) ml_backend__mlds_to_cs__Var_61;
                                {
                                  ml_backend__mlds_to_cs__Var_63 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__CsharpType_53, (MR_String) ")");
                                }
                                {
                                  ml_backend__mlds_to_cs__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_63);
                                }
                              }
                              break;
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_22);
                }
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
        {
          mercury__io__write_string_3_p_0((MR_String) " = ");
        }
        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__mlds_to_cs__OutputAux_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_cs__Var_28;

                  {
                    ml_backend__mlds_to_cs__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_28, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                  }
                  {
                    ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__Var_28);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__mlds_to_cs__Var_26;

                  {
                    ml_backend__mlds_to_cs__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_26, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                  }
                  {
                    ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__Var_26);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Var_28;

              {
                ml_backend__mlds_to_cs__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_28, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
              }
              {
                ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__Var_28);
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1297__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_body_for_csharp\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Rval_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__StructType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FieldInits_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__IsArray_13;
          MR_String ml_backend__mlds_to_cs__Var_31;
          MR_Char ml_backend__mlds_to_cs__Var_34;
          MR_String ml_backend__mlds_to_cs__String_91;
          MR_Word ml_backend__mlds_to_cs__ArrayDims_92;
          MR_Word ml_backend__mlds_to_cs__Var_94;

          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          {
            ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__StructType_11, &ml_backend__mlds_to_cs__String_91, &ml_backend__mlds_to_cs__ArrayDims_92);
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_91);
          }
          {
            ml_backend__mlds_to_cs__Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          {
            ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_94);
          }
          {
            ml_backend__mlds_to_cs__IsArray_13 = ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(ml_backend__mlds_to_cs__StructType_11);
          }
          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__IsArray_13 == (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            ml_backend__mlds_to_cs__Var_31 = (MR_String) " {";
          else
            ml_backend__mlds_to_cs__Var_31 = (MR_String) "(";
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_31);
          }
          {
            ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__FieldInits_12);
          }
          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__IsArray_13 == (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            ml_backend__mlds_to_cs__Var_34 = (MR_Char) 125;
          else
            ml_backend__mlds_to_cs__Var_34 = (MR_Char) 41;
          {
            mercury__io__write_char_3_p_0(ml_backend__mlds_to_cs__Var_34);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__ElementInits_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_65;

          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          if ((ml_backend__mlds_to_cs__MaybeType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[]");
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeType_8, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__String_52;
              MR_Word ml_backend__mlds_to_cs__ArrayDims_53;
              MR_Word ml_backend__mlds_to_cs__Var_55;

              {
                ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_15, &ml_backend__mlds_to_cs__String_52, &ml_backend__mlds_to_cs__ArrayDims_53);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_52);
              }
              {
                ml_backend__mlds_to_cs__Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              {
                ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_55);
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) " {\n\t\t");
          }
          {
            ml_backend__mlds_to_cs__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_65, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
          }
          {
            mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__ElementInits_14, (MR_String) ",\n\t\t", ml_backend__mlds_to_cs__Var_65);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const_for_csharp__3669__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Const_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Const_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ml_backend__mlds_to_cs__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned ml_backend__mlds_to_cs__U_9 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__U_9);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__mlds_to_cs__N_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_98);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ml_backend__mlds_to_cs__N_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_99);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ml_backend__mlds_to_cs__N_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_100);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ml_backend__mlds_to_cs__N_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_101);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ml_backend__mlds_to_cs__N_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_102);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ml_backend__mlds_to_cs__N_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_103);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__mlds_to_cs__EnumType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Var_78;
              MR_Word ml_backend__mlds_to_cs__Var_80;
              MR_Integer ml_backend__mlds_to_cs__N_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_80, 0) = ((MR_Box) (ml_backend__mlds_to_cs__N_105));
              }
              {
                ml_backend__mlds_to_cs__Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_78, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Var_80));
              }
              {
                ml_backend__mlds_to_cs__output_cast_rval_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__EnumType_10, ml_backend__mlds_to_cs__Var_78);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ml_backend__mlds_to_cs__N_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "( ");
              }
              {
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(ml_backend__mlds_to_cs__N_104);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Float ml_backend__mlds_to_cs__FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(ml_backend__mlds_to_cs__FloatVal_14);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ml_backend__mlds_to_cs__String_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              {
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, ml_backend__mlds_to_cs__String_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ml_backend__mlds_to_cs__String_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              {
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, ml_backend__mlds_to_cs__String_106);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ml_backend__mlds_to_cs__Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__Value_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_68;

              {
                ml_backend__mlds_to_cs__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_68, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_68, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_68, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Lang_11));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_68, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                mercury__require__expect_3_p_0(ml_backend__mlds_to_cs__Var_68, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Value_12);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ml_backend__mlds_to_cs__TargetPrefixes_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__NamedConst_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__TargetPrefixes_16, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__Var_114 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__TargetPrefixes_16, (MR_Integer) 0)));

              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_52);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__NamedConst_17);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ml_backend__mlds_to_cs__CodeAddr_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__Name_19;
              MR_Word ml_backend__mlds_to_cs__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__Var_116 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__Var_120 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));
              MR_Box ml_backend__mlds_to_cs__conv0_Name_19;

              {
                mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_cs__Var_50, ((MR_Box) (ml_backend__mlds_to_cs__CodeAddr_18)), &ml_backend__mlds_to_cs__conv0_Name_19);
              }
              ml_backend__mlds_to_cs__Name_19 = ((MR_String) ml_backend__mlds_to_cs__conv0_Name_19);
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Name_19);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ml_backend__mlds_to_cs__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__VarName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__MangledModuleName_22;
              MR_String ml_backend__mlds_to_cs__VarNameStr_23;
              MR_Word ml_backend__mlds_to_cs__Var_45;

              {
                ml_backend__mlds_to_cs__Var_45 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleName_20);
              }
              {
                ml_backend__mlds_to_cs__MangledModuleName_22 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ml_backend__mlds_to_cs__Var_45);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__MangledModuleName_22);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              {
                ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(ml_backend__mlds_to_cs__VarName_21, &ml_backend__mlds_to_cs__VarNameStr_23);
              }
              {
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_23);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ml_backend__mlds_to_cs__Var_40;
              MR_Word ml_backend__mlds_to_cs__ModuleName_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__VarName_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__MangledModuleName_109;
              MR_String ml_backend__mlds_to_cs__VarNameStr_110;

              {
                ml_backend__mlds_to_cs__Var_40 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleName_107);
              }
              {
                ml_backend__mlds_to_cs__MangledModuleName_109 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ml_backend__mlds_to_cs__Var_40);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__MangledModuleName_109);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              {
                ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(ml_backend__mlds_to_cs__VarName_108, &ml_backend__mlds_to_cs__VarNameStr_110);
              }
              {
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_110);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ml_backend__mlds_to_cs__RttiId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__RttiAddrName_25;
              MR_Word ml_backend__mlds_to_cs__Var_35;
              MR_Word ml_backend__mlds_to_cs__ModuleName_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__MangledModuleName_112;

              {
                ml_backend__mlds_to_cs__Var_35 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleName_111);
              }
              {
                ml_backend__mlds_to_cs__MangledModuleName_112 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ml_backend__mlds_to_cs__Var_35);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__MangledModuleName_112);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              {
                backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_24, &ml_backend__mlds_to_cs__RttiAddrName_25);
              }
              {
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__RttiAddrName_25);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                return;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String ml_backend__mlds_to_cs__Initializer_29;
              MR_Word ml_backend__mlds_to_cs__Type_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__Initializer_29 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_113);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Initializer_29);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__Op_8,
  MR_Word ml_backend__mlds_to_cs__X_9,
  MR_Word ml_backend__mlds_to_cs__Y_10)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Op_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ml_backend__mlds_to_cs__Op_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 4:
          {
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".Equals(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 5:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ") ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "!=");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
          }
          break;
        case (MR_Integer) 6:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ") ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "<");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
          }
          break;
        case (MR_Integer) 7:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ") ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ">");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
          }
          break;
        case (MR_Integer) 8:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ") ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "<=");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
          }
          break;
        case (MR_Integer) 9:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ") ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ">=");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
          }
          break;
        case (MR_Integer) 10:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
          }
          break;
        case (MR_Integer) 11:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 12:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 13:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 14:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 15:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 16:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 17:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 18:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 19:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 20:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 21:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 22:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 23:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 24:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "System.Object.ReferenceEquals(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 25:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 26:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__mlds_to_cs__Var_1704 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 0)));

        switch (ml_backend__mlds_to_cs__Var_1704) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__mlds_to_cs__Var_1708 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 0)));

        switch (ml_backend__mlds_to_cs__Var_1708) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1707 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1707) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1705 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1705) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1706 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1706) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1709 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1709) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1710 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1710) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1701 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1701) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1702 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1702) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ml_backend__mlds_to_cs__Var_1703 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_8, (MR_Integer) 1)));

            switch (ml_backend__mlds_to_cs__Var_1703) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 9:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 10:
          {
            {
              ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 11:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 12:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 13:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 14:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 15:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(ml_backend__mlds_to_cs__Op_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_std_unop_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__UnaryOp_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__UnaryOp_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ml_backend__mlds_to_cs__UnaryOp_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/* mktag */ ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/* tag */  0");
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/* unmktag */ ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/* strip_tag */ ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 4:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/* mkbody */ ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 5:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/* unmkbody */ ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 6:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "!");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 7:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash_1_f_0");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 8:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash2_1_f_0");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 9:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash3_1_f_0");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 10:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash4_1_f_0");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 11:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash5_1_f_0");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 12:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash6_1_f_0");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__mlds_to_cs__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__UnaryOp_7, (MR_Integer) 0)));

        switch (ml_backend__mlds_to_cs__Var_152) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(sbyte)");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(ushort)");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "~");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_cast_rval_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
    MR_Integer ml_backend__mlds_to_cs__N_10;
    MR_Word ml_backend__mlds_to_cs__Var_15;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Expr_8, (MR_Integer) 1)));
            ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_15)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__mlds_to_cs__succeeded)
              ml_backend__mlds_to_cs__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_15, (MR_Integer) 0)));
          }
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Word ml_backend__mlds_to_cs__AutoComments_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__Var_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
        MR_Integer ml_backend__mlds_to_cs__Var_67;

        switch (ml_backend__mlds_to_cs__AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "cast");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
            }
            break;
        }
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_10 >= (MR_Integer) 1);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__Var_67 = (MR_Integer) 5;
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_10 <= ml_backend__mlds_to_cs__Var_67);
          }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
            }
            {
              mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_10);
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
      }
    else
      {
        if ((ml_backend__mlds_to_cs__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          ml_backend__mlds_to_cs__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_7)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word ml_backend__mlds_to_cs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__Var_27;
            MR_Word ml_backend__mlds_to_cs__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 2)));

            ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_26, (MR_Integer) 1)));
                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_27 == (MR_Integer) 0);
              }
          }
        else
          ml_backend__mlds_to_cs__succeeded = MR_FALSE;
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word ml_backend__mlds_to_cs__AutoComments_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
            MR_String ml_backend__mlds_to_cs__Var_83 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
            MR_Word ml_backend__mlds_to_cs__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
            MR_Word ml_backend__mlds_to_cs__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));

            switch (ml_backend__mlds_to_cs__AutoComments_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "/* ");
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "cast");
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " */");
                  }
                }
                break;
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            MR_String ml_backend__mlds_to_cs__Var_45;

            {
              ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(ml_backend__mlds_to_cs__Type_7, &ml_backend__mlds_to_cs__Var_45);
            }
            if (ml_backend__mlds_to_cs__succeeded)
              ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "int", ml_backend__mlds_to_cs__Var_45) == 0);
            if (ml_backend__mlds_to_cs__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "(int) ");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
                {
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_7);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                }
              }
          }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Unop_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Unop_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_18;
          MR_Word ml_backend__mlds_to_cs__Var_28;
          MR_Word ml_backend__mlds_to_cs__Var_11;
          MR_Word ml_backend__mlds_to_cs__Var_12;

          ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_26)) == (MR_mktag((MR_Integer) 2)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_26, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_26, (MR_Integer) 1)));
              ml_backend__mlds_to_cs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_26, (MR_Integer) 2)));
              {
                ml_backend__mlds_to_cs__Var_28 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              }
              {
                ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Var_18, ml_backend__mlds_to_cs__Var_28);
              }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
          else
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "((");
          }
          {
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_27);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ") ");
          }
          {
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__N_43;
          MR_Word ml_backend__mlds_to_cs__Var_46;

          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Expr_8, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_46)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    ml_backend__mlds_to_cs__N_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_46, (MR_Integer) 0)));
                }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              {
                ml_backend__mlds_to_cs__maybe_output_comment_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, (MR_String) "cast");
              }
              {
                ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__have_preallocated_pseudo_type_var_for_csharp_1_p_0(ml_backend__mlds_to_cs__N_43);
              }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
                  }
                  {
                    mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_43);
                  }
                }
              else
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
            }
          else
            {
              if ((ml_backend__mlds_to_cs__Type_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
              else
              if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_10)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word ml_backend__mlds_to_cs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_10, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__Var_58;
                  MR_Word ml_backend__mlds_to_cs__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_10, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_10, (MR_Integer) 2)));

                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_57, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_57, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_58 == (MR_Integer) 0);
                    }
                }
              else
                ml_backend__mlds_to_cs__succeeded = MR_FALSE;
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  {
                    ml_backend__mlds_to_cs__maybe_output_comment_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, (MR_String) "cast");
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
              else
                {
                  MR_String ml_backend__mlds_to_cs__Var_76;

                  {
                    ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(ml_backend__mlds_to_cs__Type_10, &ml_backend__mlds_to_cs__Var_76);
                  }
                  if (ml_backend__mlds_to_cs__succeeded)
                    ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "int", ml_backend__mlds_to_cs__Var_76) == 0);
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(int) ");
                      }
                      {
                        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                      }
                    }
                  else
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                      }
                      {
                        ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_10);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ") ");
                      }
                      {
                        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                      }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__StdUnop_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_std_unop_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__StdUnop_13, ml_backend__mlds_to_cs__Expr_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "ml_scalar_common");
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__mlds_to_cs__ScalarCommon_16 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Rval_6), (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ScalarCommon_16, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__TypeNum_19;
        MR_Integer ml_backend__mlds_to_cs__RowNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ScalarCommon_16, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__ModuleSymName_21;
        MR_String ml_backend__mlds_to_cs__MangledModuleName_22;
        MR_Word ml_backend__mlds_to_cs__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ScalarCommon_16, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__Var_96;
        MR_Word ml_backend__mlds_to_cs__Var_102;
        MR_String ml_backend__mlds_to_cs__Var_106;
        MR_Word ml_backend__mlds_to_cs___Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ScalarCommon_16, (MR_Integer) 1)));

        ml_backend__mlds_to_cs__TypeNum_19 = (MR_Integer) ml_backend__mlds_to_cs__Var_44;
        {
          ml_backend__mlds_to_cs__ModuleSymName_21 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleName_17);
        }
        {
          ml_backend__mlds_to_cs__MangledModuleName_22 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ml_backend__mlds_to_cs__ModuleSymName_21);
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__MangledModuleName_22);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
        }
        ml_backend__mlds_to_cs__Var_102 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_102, ml_backend__mlds_to_cs__TypeNum_19, &ml_backend__mlds_to_cs__Var_96);
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_96);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_102, ml_backend__mlds_to_cs__RowNum_20, &ml_backend__mlds_to_cs__Var_106);
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_106);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__mlds_to_cs__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)));

        {
          ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Lval_8);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__mlds_to_cs__Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

            {
              ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Const_11);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__mlds_to_cs__Op_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));

            {
              ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Op_12, ml_backend__mlds_to_cs__RvalA_13);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__mlds_to_cs__RvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__Op_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__RvalA_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));

            {
              ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Op_65, ml_backend__mlds_to_cs__RvalA_66, ml_backend__mlds_to_cs__RvalB_14);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ml_backend__mlds_to_cs__Lval_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "out ");
            }
            {
              ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Lval_67);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ml_backend__mlds_to_cs__VectorCommon_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__RowRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));
            MR_Integer ml_backend__mlds_to_cs__StartRowNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_23, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_23, (MR_Integer) 2)));
            MR_Integer ml_backend__mlds_to_cs__TypeNum_70 = (MR_Integer) ml_backend__mlds_to_cs__Var_33;
            MR_String ml_backend__mlds_to_cs__Var_74;
            MR_Word ml_backend__mlds_to_cs__Var_80;
            MR_String ml_backend__mlds_to_cs__Var_84;
            MR_Word ml_backend__mlds_to_cs___ModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_23, (MR_Integer) 0)));
            MR_Integer ml_backend__mlds_to_cs___NumRows_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_23, (MR_Integer) 4)));
            MR_Word ml_backend__mlds_to_cs___Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_23, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
            }
            ml_backend__mlds_to_cs__Var_80 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_80, ml_backend__mlds_to_cs__TypeNum_70, &ml_backend__mlds_to_cs__Var_74);
            }
            {
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_74);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_80, ml_backend__mlds_to_cs__StartRowNum_26, &ml_backend__mlds_to_cs__Var_84);
            }
            {
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_84);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " + ");
            }
            {
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__RowRval_24);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 6:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "this");
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word ml_backend__mlds_to_cs__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)));

        if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          ml_backend__mlds_to_cs__succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          ml_backend__mlds_to_cs__succeeded = MR_TRUE;
        else
          ml_backend__mlds_to_cs__succeeded = MR_FALSE;
      }
    else
    if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_cs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__Var_12;

        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_15, (MR_Integer) 0)))) == (MR_Integer) 13)));
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_15, (MR_Integer) 1)));
      }
    else
      ml_backend__mlds_to_cs__succeeded = MR_FALSE;
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_6);
      }
    else
      {
        {
          mercury__io__write_char_3_p_0((MR_Char) 40);
        }
        {
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_6);
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Lval_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Lval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__PtrRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs___MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 4)));

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__mlds_to_cs__QualFieldVarName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FieldId_10, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__CtorType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FieldId_10, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__FieldVarName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualFieldVarName_18, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__VarNameStr_90;
              MR_String ml_backend__mlds_to_cs__RawString_94;
              MR_String ml_backend__mlds_to_cs__MangledString_95;
              MR_Word ml_backend__mlds_to_cs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualFieldVarName_18, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualFieldVarName_18, (MR_Integer) 1)));

              ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__FieldVarName_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                    {
                      MR_Word ml_backend__mlds_to_cs__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__PtrRval_9, (MR_Integer) 0)));

                      if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_85, (MR_Integer) 0)))) == (MR_Integer) 1))))
                        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      else
                      if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_85, (MR_Integer) 0)))) == (MR_Integer) 0))))
                        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      else
                        ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                    }
                  else
                  if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
                    {
                      MR_Word ml_backend__mlds_to_cs__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__PtrRval_9, (MR_Integer) 1)));
                      MR_Word ml_backend__mlds_to_cs__Var_75;

                      ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_76, (MR_Integer) 0)))) == (MR_Integer) 13)));
                      if (ml_backend__mlds_to_cs__succeeded)
                        ml_backend__mlds_to_cs__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Var_76, (MR_Integer) 1)));
                    }
                  else
                    ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
                    }
                  else
                    {
                      {
                        mercury__io__write_char_3_p_0((MR_Char) 40);
                      }
                      {
                        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
                      }
                      {
                        mercury__io__write_char_3_p_0((MR_Char) 41);
                      }
                    }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ".");
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Var_23;

                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__PtrRval_9, (MR_Integer) 1)));
                      {
                        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ".");
                      }
                    }
                  else
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((");
                      }
                      {
                        ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__CtorType_19);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ") ");
                      }
                      {
                        ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ").");
                      }
                    }
                }
              {
                ml_backend__mlds_to_cs__RawString_94 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__FieldVarName_22);
              }
              {
                ml_backend__mlds_to_cs__MangledString_95 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_94);
              }
              {
                ml_backend__mlds_to_cs__VarNameStr_90 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_95);
              }
              {
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_90);
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__OffsetRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldId_10, (MR_Integer) 0)));

              if ((ml_backend__mlds_to_cs__FieldType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
              else
              if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__FieldType_11)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word ml_backend__mlds_to_cs__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__FieldType_11, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__FieldType_11, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__FieldType_11, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__Var_14;
                  MR_Word ml_backend__mlds_to_cs__Var_15;

                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_55)) == (MR_mktag((MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_55, (MR_Integer) 0)));
                      ml_backend__mlds_to_cs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_55, (MR_Integer) 1)));
                    }
                }
              else
                ml_backend__mlds_to_cs__succeeded = MR_FALSE;
              if (ml_backend__mlds_to_cs__succeeded)
                {
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                    return;
                  }
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")[");
              }
              {
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__OffsetRval_13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs___Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 1)));

          {
            ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_24);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__GlobalVarRef_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)));
          MR_String ml_backend__mlds_to_cs__EnvVarName_27 = (MR_String) ml_backend__mlds_to_cs__GlobalVarRef_26;

          {
            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__EnvVarName_27);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__QualLocalVarName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 2)));

              {
                ml_backend__mlds_to_cs__output_maybe_qualified_local_var_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__QualLocalVarName_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__QualGlobalVarName_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 2)));

              {
                ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__QualGlobalVarName_30);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(
  MR_Unsigned ml_backend__mlds_to_cs__U_4)
{
  {
    {
      mercury__io__write_uint_3_p_0(ml_backend__mlds_to_cs__U_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "U");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_4 < (MR_Integer) 0);

    if (ml_backend__mlds_to_cs__succeeded)
      {
        mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_4);
      }
    else
      {
        MR_Integer ml_backend__mlds_to_cs__Var_10;
        MR_Integer ml_backend__mlds_to_cs__Var_12;
        MR_Integer ml_backend__mlds_to_cs__Var_13;

        {
          ml_backend__mlds_to_cs__Var_10 = mercury__int__f_62_62_2_f_0(ml_backend__mlds_to_cs__N_4, (MR_Integer) 32);
        }
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_10 == (MR_Integer) 0);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__Var_13 = (MR_Integer) 2147483648;
            ml_backend__mlds_to_cs__Var_12 = (ml_backend__mlds_to_cs__N_4 & ml_backend__mlds_to_cs__Var_13);
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_12 == (MR_Integer) 2147483648);
          }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Integer ml_backend__mlds_to_cs__Var_18 = (ml_backend__mlds_to_cs__N_4 & (MR_Integer) 4294967295);
            MR_String ml_backend__mlds_to_cs__Var_25;

            {
              mercury__io__write_string_3_p_0((MR_String) "unchecked((int) 0x");
            }
            {
              mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], (MR_Integer) 2, ml_backend__mlds_to_cs__Var_18, &ml_backend__mlds_to_cs__Var_25);
            }
            {
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_25);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_4);
          }
      }
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(
  MR_Word ml_backend__mlds_to_cs__SymName_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__MangledSymName_4;
    MR_Word ml_backend__mlds_to_cs__StrippedSymName_5;
    MR_String ml_backend__mlds_to_cs__Var_11;

    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__SymName_3, &ml_backend__mlds_to_cs__Var_11, &ml_backend__mlds_to_cs__StrippedSymName_5);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__Var_11) == 0);
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedSymName_5, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledSymName_4);
        }
      }
    else
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__SymName_3, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledSymName_4);
        }
      }
    return ml_backend__mlds_to_cs__MangledSymName_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(
  MR_Word ml_backend__mlds_to_cs__LocalVarName_3,
  MR_String * ml_backend__mlds_to_cs__String_4)
{
  {
    MR_String ml_backend__mlds_to_cs__RawString_5;
    MR_String ml_backend__mlds_to_cs__MangledString_6;

    {
      ml_backend__mlds_to_cs__RawString_5 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__LocalVarName_3);
    }
    {
      ml_backend__mlds_to_cs__MangledString_6 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_5);
    }
    {
      *ml_backend__mlds_to_cs__String_4 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(
  MR_Word ml_backend__mlds_to_cs__GlobalVarName_3,
  MR_String * ml_backend__mlds_to_cs__String_4)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__GlobalVarName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ml_backend__mlds_to_cs__RttiId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarName_3, (MR_Integer) 0)));

        {
          backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_7, ml_backend__mlds_to_cs__String_4);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
          return;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__mlds_to_cs__ConstVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_3, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_3, (MR_Integer) 1)));

        {
          *ml_backend__mlds_to_cs__String_4 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ml_backend__mlds_to_cs__ConstVar_5, ml_backend__mlds_to_cs__Num_6);
        }
      }
      break;
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__get_type_initializer_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5)
{
  {
    MR_String ml_backend__mlds_to_cs__Initializer_6;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Type_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 1:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "false";
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "0";
            break;
          case (MR_Integer) 3:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "0U";
            break;
          case (MR_Integer) 5:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "\'\\u0000\'";
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "variable has unknown_type");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__CtorCat_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 2)));

          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 1:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String ml_backend__mlds_to_cs__TypeString_13;
                    MR_String ml_backend__mlds_to_cs__Var_40;
                    MR_Word ml_backend__mlds_to_cs__Var_14;

                    {
                      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__TypeString_13, &ml_backend__mlds_to_cs__Var_14);
                    }
                    {
                      ml_backend__mlds_to_cs__Var_40 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_13, (MR_String) ")");
                    }
                    {
                      ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_40);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 4:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__mlds_to_cs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_61)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ml_backend__mlds_to_cs__Var_61)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "0";
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "\'\\u0000\'";
                        break;
                      case (MR_Integer) 2:
                        ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__mlds_to_cs__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_61, (MR_Integer) 0)));

                      ml_backend__mlds_to_cs__Initializer_6 = ((&ml_backend__mlds_to_cs_vector_common_9[16 + ml_backend__mlds_to_cs__Var_62]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ml_backend__mlds_to_cs__TypeString_13;
                MR_String ml_backend__mlds_to_cs__Var_40;
                MR_Word ml_backend__mlds_to_cs__Var_14;

                {
                  ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__TypeString_13, &ml_backend__mlds_to_cs__Var_14);
                }
                {
                  ml_backend__mlds_to_cs__Var_40 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_13, (MR_String) ")");
                }
                {
                  ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_40);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String ml_backend__mlds_to_cs__TypeString_13;
                    MR_String ml_backend__mlds_to_cs__Var_40;
                    MR_Word ml_backend__mlds_to_cs__Var_14;

                    {
                      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__TypeString_13, &ml_backend__mlds_to_cs__Var_14);
                    }
                    {
                      ml_backend__mlds_to_cs__Var_40 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_13, (MR_String) ")");
                    }
                    {
                      ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_40);
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__ForeignType_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__ForeignType_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "wrong foreign language type");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String ml_backend__mlds_to_cs__CsharpType_27;
                    MR_Word ml_backend__mlds_to_cs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ForeignType_26, (MR_Integer) 0)));
                    MR_String ml_backend__mlds_to_cs__Var_37;

                    ml_backend__mlds_to_cs__CsharpType_27 = (MR_String) ml_backend__mlds_to_cs__Var_35;
                    {
                      ml_backend__mlds_to_cs__Var_37 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__CsharpType_27, (MR_String) ")");
                    }
                    {
                      ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__Var_37);
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return ml_backend__mlds_to_cs__Initializer_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Op_4)
{
  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Op_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ml_backend__mlds_to_cs__Op_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "&&");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "||");
            }
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_binary_op_for_csharp\'/3", (MR_String) "invalid binary operator");
              return;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "+");
            }
          }
          break;
        case (MR_Integer) 13:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "-");
            }
          }
          break;
        case (MR_Integer) 14:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "*");
            }
          }
          break;
        case (MR_Integer) 15:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
          }
          break;
        case (MR_Integer) 16:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "==");
            }
          }
          break;
        case (MR_Integer) 17:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "!=");
            }
          }
          break;
        case (MR_Integer) 18:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "<");
            }
          }
          break;
        case (MR_Integer) 19:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ">");
            }
          }
          break;
        case (MR_Integer) 20:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "<=");
            }
          }
          break;
        case (MR_Integer) 21:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ">=");
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "+");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Op_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "*");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "/");
            }
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "%");
            }
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "<<");
            }
          }
          break;
        case (MR_Integer) 4:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ">>");
            }
          }
          break;
        case (MR_Integer) 5:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "&");
            }
          }
          break;
        case (MR_Integer) 6:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "|");
            }
          }
          break;
        case (MR_Integer) 7:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "^");
            }
          }
          break;
        case (MR_Integer) 8:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "==");
            }
          }
          break;
        case (MR_Integer) 9:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "!=");
            }
          }
          break;
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_binary_op_for_csharp\'/3", (MR_String) "invalid binary operator");
              return;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "<");
            }
          }
          break;
        case (MR_Integer) 13:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ">");
            }
          }
          break;
        case (MR_Integer) 14:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "<=");
            }
          }
          break;
        case (MR_Integer) 15:
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ">=");
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__have_preallocated_pseudo_type_var_for_csharp_1_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_2 >= (MR_Integer) 1);
    MR_Integer ml_backend__mlds_to_cs__Var_4;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Var_4 = (MR_Integer) 5;
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_2 <= ml_backend__mlds_to_cs__Var_4);
      }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__maybe_output_comment_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_String ml_backend__mlds_to_cs__Comment_6)
{
  {
    MR_Word ml_backend__mlds_to_cs__AutoComments_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

    switch (ml_backend__mlds_to_cs__AutoComments_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Comment_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_local_var_name_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualLocalVarName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualLocalVarName_6, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__QualKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualLocalVarName_6, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__LocalVarName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualLocalVarName_6, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__CurrentModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__VarNameStr_29;
    MR_String ml_backend__mlds_to_cs__RawString_33;
    MR_String ml_backend__mlds_to_cs__MangledString_34;
    MR_Word ml_backend__mlds_to_cs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String ml_backend__mlds_to_cs__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__mlds_to_cs__ModuleName_8, ml_backend__mlds_to_cs__CurrentModuleName_11);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
      }
    else
      {
        ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ml_backend__mlds_to_cs__ModuleName_8, ml_backend__mlds_to_cs__QualKind_9);
      }
    {
      ml_backend__mlds_to_cs__RawString_33 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(ml_backend__mlds_to_cs__LocalVarName_10);
    }
    {
      ml_backend__mlds_to_cs__MangledString_34 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__RawString_33);
    }
    {
      ml_backend__mlds_to_cs__VarNameStr_29 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledString_34);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__VarNameStr_29);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualGlobalVarName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualGlobalVarName_6, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__GlobalVarName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualGlobalVarName_6, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__CurrentModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__DataNameStr_29;
    MR_Word ml_backend__mlds_to_cs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String ml_backend__mlds_to_cs__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__mlds_to_cs__ModuleName_8, ml_backend__mlds_to_cs__CurrentModuleName_10);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
      }
    else
      {
        {
          ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ml_backend__mlds_to_cs__ModuleName_8, (MR_Integer) 0);
        }
      }
    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__GlobalVarName_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__RttiId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarName_9, (MR_Integer) 0)));

          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_35, &ml_backend__mlds_to_cs__DataNameStr_29);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__ConstVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_9, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Num_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_9, (MR_Integer) 1)));

          {
            ml_backend__mlds_to_cs__DataNameStr_29 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ml_backend__mlds_to_cs__ConstVar_33, ml_backend__mlds_to_cs__Num_34);
          }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__DataNameStr_29);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleName_5,
  MR_Word ml_backend__mlds_to_cs__QualKind_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__QualifierString_8;
    MR_Word ml_backend__mlds_to_cs__OuterName_17;
    MR_Word ml_backend__mlds_to_cs__InnerName_18;
    MR_String ml_backend__mlds_to_cs__MangledOuterName_19;
    MR_String ml_backend__mlds_to_cs__MangledSuffix_20;
    MR_Word ml_backend__mlds_to_cs__StrippedSymName_29;
    MR_String ml_backend__mlds_to_cs__Var_35;

    {
      ml_backend__mlds_to_cs__OuterName_17 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ml_backend__mlds_to_cs__ModuleName_5);
    }
    {
      ml_backend__mlds_to_cs__InnerName_18 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleName_5);
    }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__OuterName_17, &ml_backend__mlds_to_cs__Var_35, &ml_backend__mlds_to_cs__StrippedSymName_29);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__Var_35) == 0);
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedSymName_29, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_19);
        }
      }
    else
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__OuterName_17, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_19);
        }
      }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__OuterName_17, ml_backend__mlds_to_cs__InnerName_18);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__MangledSuffix_20 = (MR_String) "";
    else
      {
        MR_Word ml_backend__mlds_to_cs__Suffix_21;
        MR_String ml_backend__mlds_to_cs__MangledSuffix0_22;
        MR_Word ml_backend__mlds_to_cs__Var_23;

        {
          ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(ml_backend__mlds_to_cs__InnerName_18, ml_backend__mlds_to_cs__OuterName_17, &ml_backend__mlds_to_cs__Suffix_21);
        }
        {
          ml_backend__mlds_to_cs__Var_23 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(ml_backend__mlds_to_cs__QualKind_6);
        }
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Suffix_21, ml_backend__mlds_to_cs__Var_23, (MR_String) ".", &ml_backend__mlds_to_cs__MangledSuffix0_22);
        }
        {
          ml_backend__mlds_to_cs__MangledSuffix_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__MangledSuffix0_22);
        }
      }
    {
      ml_backend__mlds_to_cs__QualifierString_8 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledOuterName_19, ml_backend__mlds_to_cs__MangledSuffix_20);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__QualifierString_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(
  MR_Word ml_backend__mlds_to_cs__Type_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__IsArray_4;
    MR_Word ml_backend__mlds_to_cs__Var_5;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Var_6;

        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__Var_7;

            ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
                ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
              }
            else
              {
                MR_Word ml_backend__mlds_to_cs__CtorCat_9;
                MR_Word ml_backend__mlds_to_cs__Var_8;
                MR_Word ml_backend__mlds_to_cs__Var_10;

                ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    ml_backend__mlds_to_cs__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)));
                    ml_backend__mlds_to_cs__CtorCat_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
                    ml_backend__mlds_to_cs__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 2)));
                    {
                      ml_backend__mlds_to_cs__IsArray_4 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(ml_backend__mlds_to_cs__CtorCat_9);
                    }
                  }
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__RttiIdMaybeElement_11;

                    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        ml_backend__mlds_to_cs__RttiIdMaybeElement_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
                        {
                          MR_String ml_backend__mlds_to_cs___TypeName_12;

                          {
                            backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(ml_backend__mlds_to_cs__RttiIdMaybeElement_11, &ml_backend__mlds_to_cs___TypeName_12, &ml_backend__mlds_to_cs__IsArray_4);
                          }
                        }
                      }
                    else
                      ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                  }
              }
          }
      }
    return ml_backend__mlds_to_cs__IsArray_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1297__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Inits_6)
{
  {
    MR_Word ml_backend__mlds_to_cs__Var_12;

    {
      ml_backend__mlds_to_cs__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_5));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__Inits_6, (MR_String) ",\n\t\t", ml_backend__mlds_to_cs__Var_12);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_alloc_only_for_csharp\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_alloc_only_for_csharp\'/5", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__StructType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FieldInits_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__CtorCat_14;
          MR_Word ml_backend__mlds_to_cs__Var_41;
          MR_Word ml_backend__mlds_to_cs___Type_13;
          MR_Word ml_backend__mlds_to_cs__Var_15;

          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_11)) == (MR_mktag((MR_Integer) 2)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__CtorCat_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 1)));
              ml_backend__mlds_to_cs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 2)));
              {
                ml_backend__mlds_to_cs__Var_41 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(ml_backend__mlds_to_cs__CtorCat_14);
              }
              ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_41 == (MR_Integer) 0);
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_Integer ml_backend__mlds_to_cs__Size_16;
              MR_String ml_backend__mlds_to_cs__Var_63;

              {
                ml_backend__mlds_to_cs__Size_16 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__FieldInits_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "object[");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__Size_16, &ml_backend__mlds_to_cs__Var_63);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_63);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
          else
            {
              {
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__StructType_11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "()");
              }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__ElementInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Size_54;

          {
            ml_backend__mlds_to_cs__Size_54 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__ElementInits_17);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          if ((ml_backend__mlds_to_cs__MaybeType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String ml_backend__mlds_to_cs__Var_74;

              {
                mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1], ml_backend__mlds_to_cs__Size_54, &ml_backend__mlds_to_cs__Var_74);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_74);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeType_8, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__String_19;
              MR_Word ml_backend__mlds_to_cs__ArrayDims_20;
              MR_Word ml_backend__mlds_to_cs__Heads_21;
              MR_Integer ml_backend__mlds_to_cs__Var_59;
              MR_Box ml_backend__mlds_to_cs__conv0_Var_59;

              {
                ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_18, &ml_backend__mlds_to_cs__String_19, &ml_backend__mlds_to_cs__ArrayDims_20);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_19);
              }
              {
                ml_backend__mlds_to_cs__succeeded = mercury__list__split_last_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_20, &ml_backend__mlds_to_cs__Heads_21, &ml_backend__mlds_to_cs__conv0_Var_59);
              }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Var_59 = ((MR_Integer) ml_backend__mlds_to_cs__conv0_Var_59);
                  ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                }
              if (ml_backend__mlds_to_cs__succeeded)
                ml_backend__mlds_to_cs__succeeded = ((MR_Integer) 0 == ml_backend__mlds_to_cs__Var_59);
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  MR_Word ml_backend__mlds_to_cs__Var_33;
                  MR_Word ml_backend__mlds_to_cs__Var_35;

                  {
                    ml_backend__mlds_to_cs__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_35, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Size_54));
                    MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__mlds_to_cs__Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__Heads_21, ml_backend__mlds_to_cs__Var_35);
                  }
                  {
                    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_33);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_alloc_only_for_csharp\'/5", (MR_String) "missing array dimension");
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
ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6)
{
  {
    MR_String ml_backend__mlds_to_cs__String_18;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_19;
    MR_Word ml_backend__mlds_to_cs__Var_21;

    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__MLDS_Type_6, &ml_backend__mlds_to_cs__String_18, &ml_backend__mlds_to_cs__ArrayDims_19);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_18);
    }
    {
      ml_backend__mlds_to_cs__Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_21);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word ml_backend__mlds_to_cs__GlobalVarDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__GlobalVarDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__GlobalVarName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__Access_39;
          MR_Word ml_backend__mlds_to_cs___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs___Initializer_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs___GCStmt_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarDefn_13, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs___Constness_23;

          {
            ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_2);
          }
          ml_backend__mlds_to_cs__Access_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Flags_18, (MR_Integer) 0)));
          ml_backend__mlds_to_cs___Constness_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Flags_18, (MR_Integer) 1)));
          switch (ml_backend__mlds_to_cs__Access_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "private ");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "public ");
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "static ");
          }
          {
            ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__GlobalVarName_16, ml_backend__mlds_to_cs__Type_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ";\n");
          }
          /* direct tailcall eliminated */
          {
            MR_Word ml_backend__mlds_to_cs__next_value_of_HeadVar__3_3 = ml_backend__mlds_to_cs__GlobalVarDefns_14;

            ml_backend__mlds_to_cs__HeadVar__3_3 = ml_backend__mlds_to_cs__next_value_of_HeadVar__3_3;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__GlobalVarName_7,
  MR_Word ml_backend__mlds_to_cs__Type_8)
{
  {
    MR_String ml_backend__mlds_to_cs__String_29;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_30;
    MR_Word ml_backend__mlds_to_cs__Var_32;
    MR_String ml_backend__mlds_to_cs__DataNameStr_39;

    {
      ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_8, &ml_backend__mlds_to_cs__String_29, &ml_backend__mlds_to_cs__ArrayDims_30);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_29);
    }
    {
      ml_backend__mlds_to_cs__Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__Var_32);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__GlobalVarName_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__RttiId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__GlobalVarName_7, (MR_Integer) 0)));

          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_45, &ml_backend__mlds_to_cs__DataNameStr_39);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__ConstVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_7, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Num_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__GlobalVarName_7, (MR_Integer) 1)));

          {
            ml_backend__mlds_to_cs__DataNameStr_39 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ml_backend__mlds_to_cs__ConstVar_43, ml_backend__mlds_to_cs__Num_44);
          }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__DataNameStr_39);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__mercury_type_to_string_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__CtorCat_8,
  MR_String * ml_backend__mlds_to_cs__String_9,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "/* closure */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                }
                break;
              case (MR_Integer) 1:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "/* tuple */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_cs__TypeCtor_31;
                  MR_Word ml_backend__mlds_to_cs__ArgsTypes_32;
                  MR_Word ml_backend__mlds_to_cs__ClassName_33;
                  MR_Integer ml_backend__mlds_to_cs__ClassArity_34;
                  MR_Word ml_backend__mlds_to_cs__MLDS_Type_36;
                  MR_String ml_backend__mlds_to_cs__TypeString_37;
                  MR_Word ml_backend__mlds_to_cs__OutputGenerics_38;
                  MR_Word ml_backend__mlds_to_cs__Var_35;
                  MR_Word ml_backend__mlds_to_cs__Var_42;
                  MR_Word ml_backend__mlds_to_cs__Var_43;
                  MR_Word ml_backend__mlds_to_cs__Var_44;
                  MR_Word ml_backend__mlds_to_cs__Var_45;
                  MR_Word ml_backend__mlds_to_cs__Var_46;
                  MR_String ml_backend__mlds_to_cs__Var_47;
                  MR_Word ml_backend__mlds_to_cs__Var_48;
                  MR_Word ml_backend__mlds_to_cs__Var_49;

                  {
                    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(ml_backend__mlds_to_cs__Type_7, &ml_backend__mlds_to_cs__TypeCtor_31, &ml_backend__mlds_to_cs__ArgsTypes_32);
                  }
                  {
                    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__mlds_to_cs__TypeCtor_31, &ml_backend__mlds_to_cs__ClassName_33, &ml_backend__mlds_to_cs__ClassArity_34);
                  }
                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));
                      {
                        ml_backend__mlds_to_cs__MLDS_Type_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_33));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_34));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 3) = ((MR_Box) ((MR_Integer) 3));
                      }
                    }
                  else
                    {
                      {
                        ml_backend__mlds_to_cs__MLDS_Type_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_33));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_34));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 3) = ((MR_Box) ((MR_Integer) 0));
                      }
                    }
                  {
                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__MLDS_Type_36, &ml_backend__mlds_to_cs__TypeString_37, ml_backend__mlds_to_cs__ArrayDims_10);
                  }
                  ml_backend__mlds_to_cs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
                  ml_backend__mlds_to_cs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
                  ml_backend__mlds_to_cs__OutputGenerics_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
                  ml_backend__mlds_to_cs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
                  switch (ml_backend__mlds_to_cs__OutputGenerics_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__String_9 = ml_backend__mlds_to_cs__TypeString_37;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String ml_backend__mlds_to_cs__GenericsString_39;

                        {
                          ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__ArgsTypes_32, &ml_backend__mlds_to_cs__GenericsString_39);
                        }
                        {
                          *ml_backend__mlds_to_cs__String_9 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_37, ml_backend__mlds_to_cs__GenericsString_39);
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "object";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 4:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "builtin.Void_0";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Var_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__Var_25)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *ml_backend__mlds_to_cs__String_9 = (MR_String) "double";
                        *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *ml_backend__mlds_to_cs__String_9 = (MR_String) "int";
                        *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        *ml_backend__mlds_to_cs__String_9 = (MR_String) "string";
                        *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__mlds_to_cs__IntType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Var_25, (MR_Integer) 0)));

                    *ml_backend__mlds_to_cs__String_9 = ((&ml_backend__mlds_to_cs_vector_common_9[8 + ml_backend__mlds_to_cs__IntType_11]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                    *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__TypeCtor_31;
              MR_Word ml_backend__mlds_to_cs__ArgsTypes_32;
              MR_Word ml_backend__mlds_to_cs__ClassName_33;
              MR_Integer ml_backend__mlds_to_cs__ClassArity_34;
              MR_Word ml_backend__mlds_to_cs__MLDS_Type_36;
              MR_String ml_backend__mlds_to_cs__TypeString_37;
              MR_Word ml_backend__mlds_to_cs__OutputGenerics_38;
              MR_Word ml_backend__mlds_to_cs__Var_35;
              MR_Word ml_backend__mlds_to_cs__Var_42;
              MR_Word ml_backend__mlds_to_cs__Var_43;
              MR_Word ml_backend__mlds_to_cs__Var_44;
              MR_Word ml_backend__mlds_to_cs__Var_45;
              MR_Word ml_backend__mlds_to_cs__Var_46;
              MR_String ml_backend__mlds_to_cs__Var_47;
              MR_Word ml_backend__mlds_to_cs__Var_48;
              MR_Word ml_backend__mlds_to_cs__Var_49;

              {
                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(ml_backend__mlds_to_cs__Type_7, &ml_backend__mlds_to_cs__TypeCtor_31, &ml_backend__mlds_to_cs__ArgsTypes_32);
              }
              {
                ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__mlds_to_cs__TypeCtor_31, &ml_backend__mlds_to_cs__ClassName_33, &ml_backend__mlds_to_cs__ClassArity_34);
              }
              ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));
                  {
                    ml_backend__mlds_to_cs__MLDS_Type_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_33));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_34));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 3) = ((MR_Box) ((MR_Integer) 3));
                  }
                }
              else
                {
                  {
                    ml_backend__mlds_to_cs__MLDS_Type_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_33));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_34));
                    MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 3) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
              {
                ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__MLDS_Type_36, &ml_backend__mlds_to_cs__TypeString_37, ml_backend__mlds_to_cs__ArrayDims_10);
              }
              ml_backend__mlds_to_cs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__OutputGenerics_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
              switch (ml_backend__mlds_to_cs__OutputGenerics_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_cs__String_9 = ml_backend__mlds_to_cs__TypeString_37;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String ml_backend__mlds_to_cs__GenericsString_39;

                    {
                      ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__ArgsTypes_32, &ml_backend__mlds_to_cs__GenericsString_39);
                    }
                    {
                      *ml_backend__mlds_to_cs__String_9 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_37, ml_backend__mlds_to_cs__GenericsString_39);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    ml_backend__mlds_to_cs__CtorCat_8 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__mlds_to_cs_scalar_common_1[19]);
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__mlds_to_cs__TypeCtor_31;
                  MR_Word ml_backend__mlds_to_cs__ArgsTypes_32;
                  MR_Word ml_backend__mlds_to_cs__ClassName_33;
                  MR_Integer ml_backend__mlds_to_cs__ClassArity_34;
                  MR_Word ml_backend__mlds_to_cs__MLDS_Type_36;
                  MR_String ml_backend__mlds_to_cs__TypeString_37;
                  MR_Word ml_backend__mlds_to_cs__OutputGenerics_38;
                  MR_Word ml_backend__mlds_to_cs__Var_35;
                  MR_Word ml_backend__mlds_to_cs__Var_42;
                  MR_Word ml_backend__mlds_to_cs__Var_43;
                  MR_Word ml_backend__mlds_to_cs__Var_44;
                  MR_Word ml_backend__mlds_to_cs__Var_45;
                  MR_Word ml_backend__mlds_to_cs__Var_46;
                  MR_String ml_backend__mlds_to_cs__Var_47;
                  MR_Word ml_backend__mlds_to_cs__Var_48;
                  MR_Word ml_backend__mlds_to_cs__Var_49;

                  {
                    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(ml_backend__mlds_to_cs__Type_7, &ml_backend__mlds_to_cs__TypeCtor_31, &ml_backend__mlds_to_cs__ArgsTypes_32);
                  }
                  {
                    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__mlds_to_cs__TypeCtor_31, &ml_backend__mlds_to_cs__ClassName_33, &ml_backend__mlds_to_cs__ClassArity_34);
                  }
                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));
                      {
                        ml_backend__mlds_to_cs__MLDS_Type_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_33));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_34));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 3) = ((MR_Box) ((MR_Integer) 3));
                      }
                    }
                  else
                    {
                      {
                        ml_backend__mlds_to_cs__MLDS_Type_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_33));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_34));
                        MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_36, 3) = ((MR_Box) ((MR_Integer) 0));
                      }
                    }
                  {
                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__MLDS_Type_36, &ml_backend__mlds_to_cs__TypeString_37, ml_backend__mlds_to_cs__ArrayDims_10);
                  }
                  ml_backend__mlds_to_cs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
                  ml_backend__mlds_to_cs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
                  ml_backend__mlds_to_cs__OutputGenerics_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
                  ml_backend__mlds_to_cs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
                  switch (ml_backend__mlds_to_cs__OutputGenerics_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__String_9 = ml_backend__mlds_to_cs__TypeString_37;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String ml_backend__mlds_to_cs__GenericsString_39;

                        {
                          ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__ArgsTypes_32, &ml_backend__mlds_to_cs__GenericsString_39);
                        }
                        {
                          *ml_backend__mlds_to_cs__String_9 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_37, ml_backend__mlds_to_cs__GenericsString_39);
                        }
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
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_Box ml_backend__mlds_to_cs__wrapper_arg_2;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_44;

    {
      ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_44 = ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string_for_csharp__1910__1_1_f_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_44));
    return ml_backend__mlds_to_cs__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6,
  MR_String * ml_backend__mlds_to_cs__String_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__MLDS_Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__mlds_to_cs__MLDS_Type_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "runtime.Commit";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 1:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "bool";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 2:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "int";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 3:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "uint";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 4:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "double";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 5:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "int";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 6:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* generic_type */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 7:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* env_ptr */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 8:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "runtime.TypeInfo";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 9:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "runtime.PseudoTypeInfo";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 10:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string_for_csharp\'/4", (MR_String) "unknown type");
                    return;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Args_26;
              MR_Word ml_backend__mlds_to_cs__RetTypes_27;
              MR_Word ml_backend__mlds_to_cs__ArgTypes_28;
              MR_Word ml_backend__mlds_to_cs__Var_41 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__MLDS_Type_6), (MR_Integer) 1);

              ml_backend__mlds_to_cs__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_41, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__RetTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_41, (MR_Integer) 1)));
              {
                ml_backend__mlds_to_cs__ArgTypes_28 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[2], ml_backend__mlds_to_cs__Args_26);
              }
              {
                *ml_backend__mlds_to_cs__String_7 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__ArgTypes_28, ml_backend__mlds_to_cs__RetTypes_27);
              }
              *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__CtorCat_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__SubstituteName_12;
              MR_Word ml_backend__mlds_to_cs__ArrayDims0_13;

              if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
                {
                  MR_Word ml_backend__mlds_to_cs__CtorCatSystem_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_10, (MR_Integer) 1)));

                  ml_backend__mlds_to_cs__SubstituteName_12 = ((&ml_backend__mlds_to_cs_vector_common_10[0 + ml_backend__mlds_to_cs__CtorCatSystem_81]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_0;
                  ml_backend__mlds_to_cs__ArrayDims0_13 = ((&ml_backend__mlds_to_cs_vector_common_10[0 + ml_backend__mlds_to_cs__CtorCatSystem_81]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_1;
                  ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                }
              else
              if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
                {
                  MR_Word ml_backend__mlds_to_cs__CtorCatUser_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_10, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__Var_89;

                  ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CtorCatUser_82 == (MR_Integer) 2);
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      {
                        ml_backend__mlds_to_cs__Var_89 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
                      }
                      {
                        ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__Var_89);
                      }
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          ml_backend__mlds_to_cs__SubstituteName_12 = (MR_String) "runtime.TypeInfo_Struct";
                          ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                        }
                      else
                        {
                          MR_Word ml_backend__mlds_to_cs__Var_90;

                          {
                            ml_backend__mlds_to_cs__Var_90 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
                          }
                          {
                            ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__Var_90);
                          }
                          if (ml_backend__mlds_to_cs__succeeded)
                            {
                              ml_backend__mlds_to_cs__SubstituteName_12 = (MR_String) "runtime.PseudoTypeInfo";
                              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                            }
                          else
                            {
                              MR_Word ml_backend__mlds_to_cs__Var_91;

                              {
                                ml_backend__mlds_to_cs__Var_91 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
                              }
                              {
                                ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__Var_91);
                              }
                              if (ml_backend__mlds_to_cs__succeeded)
                                {
                                  ml_backend__mlds_to_cs__SubstituteName_12 = (MR_String) "runtime.TypeCtorInfo_Struct";
                                  ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                                }
                            }
                        }
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          ml_backend__mlds_to_cs__ArrayDims0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                        }
                    }
                }
              else
                ml_backend__mlds_to_cs__succeeded = MR_FALSE;
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  *ml_backend__mlds_to_cs__String_7 = ml_backend__mlds_to_cs__SubstituteName_12;
                  *ml_backend__mlds_to_cs__ArrayDims_8 = ml_backend__mlds_to_cs__ArrayDims0_13;
                }
              else
                {
                  ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CtorCat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* builtin_dummy */ object";
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word ml_backend__mlds_to_cs__Var_75;

                      {
                        ml_backend__mlds_to_cs__Var_75 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                      }
                      {
                        ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__Var_75);
                      }
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* c_pointer */ object";
                          *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                      else
                        {
                          ml_backend__mlds_to_cs__mercury_type_to_string_for_csharp_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__CtorCat_10, ml_backend__mlds_to_cs__String_7, ml_backend__mlds_to_cs__ArrayDims_8);
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__mlds_to_cs__ElementType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__Var_54;
                  MR_Word ml_backend__mlds_to_cs__Var_15;
                  MR_Word ml_backend__mlds_to_cs__Var_16;

                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__ElementType_14)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ElementType_14, (MR_Integer) 0)));
                      ml_backend__mlds_to_cs__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ElementType_14, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ElementType_14, (MR_Integer) 2)));
                      ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    }
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      *ml_backend__mlds_to_cs__String_7 = (MR_String) "System.Array";
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_String ml_backend__mlds_to_cs__Var_17;

                      {
                        ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(ml_backend__mlds_to_cs__ElementType_14, &ml_backend__mlds_to_cs__Var_17);
                      }
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          MR_Word ml_backend__mlds_to_cs__ArrayDims0_58;

                          {
                            ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__ElementType_14, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__ArrayDims0_58);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__mlds_to_cs__ArrayDims_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayDims0_58));
                          }
                        }
                      else
                        {
                          *ml_backend__mlds_to_cs__String_7 = (MR_String) "object";
                          *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* cont_type */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_cs__ForeignType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__ForeignType_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string_for_csharp\'/4", (MR_String) "c foreign_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string_for_csharp\'/4", (MR_String) "java foreign_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ml_backend__mlds_to_cs__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ForeignType_18, (MR_Integer) 0)));

                        *ml_backend__mlds_to_cs__String_7 = (MR_String) ml_backend__mlds_to_cs__Var_53;
                        *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string_for_csharp\'/4", (MR_String) "erlang foreign_type");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__mlds_to_cs__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Integer ml_backend__mlds_to_cs__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs___ClassKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 3)));

                  {
                    ml_backend__mlds_to_cs__qual_class_name_to_string_for_csharp_3_p_0(ml_backend__mlds_to_cs__Name_22, ml_backend__mlds_to_cs__Arity_23, ml_backend__mlds_to_cs__String_7);
                  }
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__mlds_to_cs__Type_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__ArrayDims0_64;

                  {
                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_63, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__ArrayDims0_64);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__mlds_to_cs__ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayDims0_64));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__mlds_to_cs__ArrayDims0_66;

                  {
                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(ml_backend__mlds_to_cs__Info_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__ArrayDims0_66);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__mlds_to_cs__ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayDims0_66));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__mlds_to_cs__Type_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__next_value_of_MLDS_Type_6 = ml_backend__mlds_to_cs__Type_62;

                    ml_backend__mlds_to_cs__MLDS_Type_6 = ml_backend__mlds_to_cs__next_value_of_MLDS_Type_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ml_backend__mlds_to_cs__RttiIdMaybeElement_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__IsArray_33;

                  {
                    backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(ml_backend__mlds_to_cs__RttiIdMaybeElement_32, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__IsArray_33);
                  }
                  switch (ml_backend__mlds_to_cs__IsArray_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                      }
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__mlds_to_cs__TablingId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__IsArray_72;

                  {
                    backend_libs__rtti__tabling_id_java_type_3_p_0(ml_backend__mlds_to_cs__TablingId_34, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__IsArray_72);
                  }
                  switch (ml_backend__mlds_to_cs__IsArray_72) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                      }
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_String_6;

    {
      ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_String_6);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_String_6));
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__ArgTypes_6,
  MR_Word ml_backend__mlds_to_cs__RetTypes_7)
{
  {
    MR_String ml_backend__mlds_to_cs__String_8;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_26_26 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_29_29;
    MR_Integer ml_backend__mlds_to_cs__Arity_9;
    MR_Integer ml_backend__mlds_to_cs__NumRets_10;
    MR_Word ml_backend__mlds_to_cs__ArgTypesStrings_11;
    MR_Word ml_backend__mlds_to_cs__RetTypesStrings_12;
    MR_String ml_backend__mlds_to_cs__TypesString_13;
    MR_Word ml_backend__mlds_to_cs__Var_14;
    MR_Word ml_backend__mlds_to_cs__Var_17;
    MR_String ml_backend__mlds_to_cs__Var_33;
    MR_String ml_backend__mlds_to_cs__Var_35;
    MR_String ml_backend__mlds_to_cs__Var_36;
    MR_Word ml_backend__mlds_to_cs__Var_42;
    MR_String ml_backend__mlds_to_cs__Var_43;
    MR_String ml_backend__mlds_to_cs__Var_45;
    MR_String ml_backend__mlds_to_cs__Var_46;
    MR_String ml_backend__mlds_to_cs__Var_53;

    {
      ml_backend__mlds_to_cs__Arity_9 = mercury__list__length_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__ArgTypes_6);
    }
    {
      ml_backend__mlds_to_cs__NumRets_10 = mercury__list__length_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__RetTypes_7);
    }
    {
      ml_backend__mlds_to_cs__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_14, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_5));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__Var_14, ml_backend__mlds_to_cs__ArgTypes_6, &ml_backend__mlds_to_cs__ArgTypesStrings_11);
    }
    {
      mercury__list__map_3_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__Var_14, ml_backend__mlds_to_cs__RetTypes_7, &ml_backend__mlds_to_cs__RetTypesStrings_12);
    }
    {
      ml_backend__mlds_to_cs__Var_17 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__ArgTypesStrings_11, ml_backend__mlds_to_cs__RetTypesStrings_12);
    }
    {
      ml_backend__mlds_to_cs__TypesString_13 = mercury__string__join_list_2_f_0((MR_String) ", ", ml_backend__mlds_to_cs__Var_17);
    }
    {
      ml_backend__mlds_to_cs__Var_33 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypesString_13, (MR_String) ">");
    }
    {
      ml_backend__mlds_to_cs__Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "<", ml_backend__mlds_to_cs__Var_33);
    }
    ml_backend__mlds_to_cs__Var_42 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[1];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_42, ml_backend__mlds_to_cs__NumRets_10, &ml_backend__mlds_to_cs__Var_36);
    }
    {
      ml_backend__mlds_to_cs__Var_43 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_36, ml_backend__mlds_to_cs__Var_35);
    }
    {
      ml_backend__mlds_to_cs__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_r", ml_backend__mlds_to_cs__Var_43);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__Var_42, ml_backend__mlds_to_cs__Arity_9, &ml_backend__mlds_to_cs__Var_46);
    }
    {
      ml_backend__mlds_to_cs__Var_53 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Var_46, ml_backend__mlds_to_cs__Var_45);
    }
    {
      ml_backend__mlds_to_cs__String_8 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.MethodPtr", ml_backend__mlds_to_cs__Var_53);
    }
    return ml_backend__mlds_to_cs__String_8;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_3,
  MR_String * ml_backend__mlds_to_cs__TargetType_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) {
      default:
        ml_backend__mlds_to_cs__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Type_3)) {
          default:
            ml_backend__mlds_to_cs__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__mlds_to_cs__TargetType_4 = (MR_String) "bool";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 5:
            {
              *ml_backend__mlds_to_cs__TargetType_4 = (MR_String) "int";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *ml_backend__mlds_to_cs__TargetType_4 = (MR_String) "uint";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *ml_backend__mlds_to_cs__TargetType_4 = (MR_String) "double";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "mlds_to_cs.m", (MR_String) "predicate \140ml_backend.mlds_to_cs.csharp_builtin_type\'/2", (MR_String) "unknown typed");
              }
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__MerType_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__TypeCtorCat_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 2)));

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__MerType_5)) == (MR_mktag((MR_Integer) 2))))
            {
              MR_Word ml_backend__mlds_to_cs__BuiltinType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__MerType_5, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__BuiltinType_8)) {
                default:
                  ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__BuiltinType_8)) {
                    default:
                      ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        *ml_backend__mlds_to_cs__TargetType_4 = (MR_String) "double";
                        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        *ml_backend__mlds_to_cs__TargetType_4 = (MR_String) "int";
                        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__mlds_to_cs__IntType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__BuiltinType_8, (MR_Integer) 0)));

                    *ml_backend__mlds_to_cs__TargetType_4 = ((&ml_backend__mlds_to_cs_vector_common_9[0 + ml_backend__mlds_to_cs__IntType_9]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                    ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                  }
                  break;
              }
            }
          else
          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__MerType_5)) == (MR_mktag((MR_Integer) 1))))
            {
              ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__TypeCtorCat_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  *ml_backend__mlds_to_cs__TargetType_4 = (MR_String) "int";
                  ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                }
            }
          else
            ml_backend__mlds_to_cs__succeeded = MR_FALSE;
        }
        break;
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_17;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__2058__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_17);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_17));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__ArgsTypes_5,
  MR_String * ml_backend__mlds_to_cs__String_6)
{
  if ((ml_backend__mlds_to_cs__ArgsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ml_backend__mlds_to_cs__String_6 = (MR_String) "";
  else
    {
      MR_Word ml_backend__mlds_to_cs__ToString_9;
      MR_Word ml_backend__mlds_to_cs__ArgsTypesStrings_14;
      MR_String ml_backend__mlds_to_cs__ArgsTypesString_15;
      MR_String ml_backend__mlds_to_cs__Var_20;

      {
        ml_backend__mlds_to_cs__ToString_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 1) = ((MR_Box) (ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_4));
      }
      {
        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_cs__ToString_9, ml_backend__mlds_to_cs__ArgsTypes_5, &ml_backend__mlds_to_cs__ArgsTypesStrings_14);
      }
      {
        ml_backend__mlds_to_cs__ArgsTypesString_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ml_backend__mlds_to_cs__ArgsTypesStrings_14);
      }
      {
        ml_backend__mlds_to_cs__Var_20 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ArgsTypesString_15, (MR_String) ">");
      }
      {
        *ml_backend__mlds_to_cs__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<", ml_backend__mlds_to_cs__Var_20);
      }
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__qual_class_name_to_string_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__QualName_4,
  MR_Integer ml_backend__mlds_to_cs__Arity_5,
  MR_String * ml_backend__mlds_to_cs__String_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__QualKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_4, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__ClassName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_4, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__SymName_10;
    MR_Word ml_backend__mlds_to_cs__Var_16;

    {
      ml_backend__mlds_to_cs__SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_7);
    }
    {
      ml_backend__mlds_to_cs__Var_16 = parse_tree__java_names__csharp_mercury_runtime_package_name_0_f_0();
    }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__SymName_10, ml_backend__mlds_to_cs__Var_16);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          *ml_backend__mlds_to_cs__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.", ml_backend__mlds_to_cs__ClassName_9);
        }
      }
    else
      {
        MR_String ml_backend__mlds_to_cs__QualString_11;
        MR_String ml_backend__mlds_to_cs__UnqualString_12;
        MR_String ml_backend__mlds_to_cs__Var_14;
        MR_Word ml_backend__mlds_to_cs__OuterName_21;
        MR_Word ml_backend__mlds_to_cs__InnerName_22;
        MR_String ml_backend__mlds_to_cs__MangledOuterName_23;
        MR_String ml_backend__mlds_to_cs__MangledSuffix_24;
        MR_String ml_backend__mlds_to_cs__MangledName_43;
        MR_String ml_backend__mlds_to_cs__UppercaseMangledName_44;
        MR_String ml_backend__mlds_to_cs__Var_45;
        MR_String ml_backend__mlds_to_cs__Var_47;
        MR_Word ml_backend__mlds_to_cs__StrippedSymName_33;
        MR_String ml_backend__mlds_to_cs__Var_39;

        {
          ml_backend__mlds_to_cs__OuterName_21 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_7);
        }
        {
          ml_backend__mlds_to_cs__InnerName_22 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_7);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__OuterName_21, &ml_backend__mlds_to_cs__Var_39, &ml_backend__mlds_to_cs__StrippedSymName_33);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__Var_39) == 0);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedSymName_33, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_23);
            }
          }
        else
          {
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__OuterName_21, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_23);
            }
          }
        {
          ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__OuterName_21, ml_backend__mlds_to_cs__InnerName_22);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__MangledSuffix_24 = (MR_String) "";
        else
          {
            MR_Word ml_backend__mlds_to_cs__Suffix_25;
            MR_String ml_backend__mlds_to_cs__MangledSuffix0_26;
            MR_Word ml_backend__mlds_to_cs__Var_27;

            {
              ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(ml_backend__mlds_to_cs__InnerName_22, ml_backend__mlds_to_cs__OuterName_21, &ml_backend__mlds_to_cs__Suffix_25);
            }
            {
              ml_backend__mlds_to_cs__Var_27 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(ml_backend__mlds_to_cs__QualKind_8);
            }
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Suffix_25, ml_backend__mlds_to_cs__Var_27, (MR_String) ".", &ml_backend__mlds_to_cs__MangledSuffix0_26);
            }
            {
              ml_backend__mlds_to_cs__MangledSuffix_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__MangledSuffix0_26);
            }
          }
        {
          ml_backend__mlds_to_cs__QualString_11 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledOuterName_23, ml_backend__mlds_to_cs__MangledSuffix_24);
        }
        {
          ml_backend__mlds_to_cs__MangledName_43 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__ClassName_9);
        }
        {
          ml_backend__mlds_to_cs__UppercaseMangledName_44 = parse_tree__java_names__flip_initial_case_1_f_0(ml_backend__mlds_to_cs__MangledName_43);
        }
        {
          ml_backend__mlds_to_cs__Var_47 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__Arity_5);
        }
        {
          ml_backend__mlds_to_cs__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Var_47);
        }
        {
          ml_backend__mlds_to_cs__UnqualString_12 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__UppercaseMangledName_44, ml_backend__mlds_to_cs__Var_45);
        }
        {
          ml_backend__mlds_to_cs__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__UnqualString_12);
        }
        {
          *ml_backend__mlds_to_cs__String_6 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__QualString_11, ml_backend__mlds_to_cs__Var_14);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(
  MR_String ml_backend__mlds_to_cs__String_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__Length_6;

    {
      ml_backend__mlds_to_cs__Length_6 = mercury__string__length_1_f_0(ml_backend__mlds_to_cs__String_4);
    }
    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Length_6 > (MR_Integer) 511);
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_String ml_backend__mlds_to_cs__Left_7;
        MR_String ml_backend__mlds_to_cs__Right_8;
        MR_Integer ml_backend__mlds_to_cs__Hash_9;
        MR_Integer ml_backend__mlds_to_cs__Var_15;
        MR_String ml_backend__mlds_to_cs__Var_31;

        {
          ml_backend__mlds_to_cs__Left_7 = mercury__string__left_2_f_0(ml_backend__mlds_to_cs__String_4, (MR_Integer) 251);
        }
        {
          ml_backend__mlds_to_cs__Right_8 = mercury__string__right_2_f_0(ml_backend__mlds_to_cs__String_4, (MR_Integer) 250);
        }
        {
          ml_backend__mlds_to_cs__Var_15 = mercury__string__hash_1_f_0(ml_backend__mlds_to_cs__String_4);
        }
        ml_backend__mlds_to_cs__Hash_9 = (ml_backend__mlds_to_cs__Var_15 & (MR_Integer) 4294967295);
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Left_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "_");
        }
        {
          mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_7[0], (MR_Integer) 8, (MR_Integer) 2, ml_backend__mlds_to_cs__Hash_9, &ml_backend__mlds_to_cs__Var_31);
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Var_31);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "_");
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Right_8);
        }
      }
    else
      {
        mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_4);
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_src_end_for_csharp_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_Word ml_backend__mlds_to_cs__ModuleName_6)
{
  {
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "// :- end_module ");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(ml_backend__mlds_to_cs__ModuleName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__565__1_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__559__1_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0(
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__StaticConstructors_9,
  MR_Word ml_backend__mlds_to_cs__FinalPreds_10)
{
  {
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_67_67;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_68_68;
    MR_String ml_backend__mlds_to_cs__ClassName_12;
    MR_Word ml_backend__mlds_to_cs__WriteCall_13;
    MR_Word ml_backend__mlds_to_cs__WriteFinal_15;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_38_38;
    MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_57_57;

    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static ");
    }
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__MercuryModuleName_7, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__ClassName_12);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__ClassName_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "() {\n");
    }
    {
      ml_backend__mlds_to_cs__WriteCall_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_8));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    ml_backend__mlds_to_cs__TypeCtorInfo_68_68 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_67_67, ml_backend__mlds_to_cs__TypeCtorInfo_68_68, ml_backend__mlds_to_cs__WriteCall_13, ml_backend__mlds_to_cs__StaticConstructors_9, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_38_38);
    }
    {
      ml_backend__mlds_to_cs__WriteFinal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_8));
    }
    {
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_67_67, ml_backend__mlds_to_cs__TypeCtorInfo_68_68, ml_backend__mlds_to_cs__WriteFinal_15, ml_backend__mlds_to_cs__FinalPreds_10, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_57_57);
    }
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Var_12;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_cs__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_12, ml_backend__mlds_to_cs__CodeAddrs_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnums_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Var_12;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_cs__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_12, ml_backend__mlds_to_cs__ExportedEnums_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Exports_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Var_12;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_cs__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__Var_12, ml_backend__mlds_to_cs__Exports_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word ml_backend__mlds_to_cs__AllForeignCode_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ForeignCode_4;
    MR_Word ml_backend__mlds_to_cs__ForeignCode0_5;
    MR_Box ml_backend__mlds_to_cs__conv0_ForeignCode0_5;

    {
      ml_backend__mlds_to_cs__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, ml_backend__mlds_to_cs__AllForeignCode_3, ((MR_Box) ((MR_Integer) 1)), &ml_backend__mlds_to_cs__conv0_ForeignCode0_5);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__ForeignCode0_5 = ((MR_Word) ml_backend__mlds_to_cs__conv0_ForeignCode0_5);
        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
      }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__ForeignCode_4 = ml_backend__mlds_to_cs__ForeignCode0_5;
    else
      ml_backend__mlds_to_cs__ForeignCode_4 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_3[0];
    return ml_backend__mlds_to_cs__ForeignCode_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__make_code_addr_map_for_csharp_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((ml_backend__mlds_to_cs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_0_2;
      else
        {
          MR_Integer ml_backend__mlds_to_cs__SeqNum_7;
          MR_Word ml_backend__mlds_to_cs__CodeAddr_8;
          MR_Word ml_backend__mlds_to_cs__SeqNumsCodeAddrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
          MR_String ml_backend__mlds_to_cs__Name_11;
          MR_Word ml_backend__mlds_to_cs__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
          MR_String ml_backend__mlds_to_cs__Var_16;
          MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_17_17;

          ml_backend__mlds_to_cs__SeqNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_14, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__CodeAddr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_14, (MR_Integer) 1)));
          {
            ml_backend__mlds_to_cs__Var_16 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__SeqNum_7);
          }
          {
            ml_backend__mlds_to_cs__Name_11 = mercury__string__f_43_43_2_f_0((MR_String) "MR_method_ptr_", ml_backend__mlds_to_cs__Var_16);
          }
          {
            mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ml_backend__mlds_to_cs__CodeAddr_8)), ((MR_Box) (ml_backend__mlds_to_cs__Name_11)), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_17_17);
          }
          /* direct tailcall eliminated */
          {
            MR_Word ml_backend__mlds_to_cs__next_value_of_HeadVar__1_1 = ml_backend__mlds_to_cs__SeqNumsCodeAddrs_9;
            MR_Word ml_backend__mlds_to_cs__next_value_of_STATE_VARIABLE_CodeAddrMap_0_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_17_17;

            ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrMap_0_2 = ml_backend__mlds_to_cs__next_value_of_STATE_VARIABLE_CodeAddrMap_0_2;
            ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))));
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_6,
  MR_Word ml_backend__mlds_to_cs__MLDS_7,
  MR_Word * ml_backend__mlds_to_cs__Succeeded_8)
{
  {
    MR_Word ml_backend__mlds_to_cs__Globals_10;
    MR_Word ml_backend__mlds_to_cs__ModuleName_11;
    MR_String ml_backend__mlds_to_cs__SourceFile_12;
    MR_Word ml_backend__mlds_to_cs__Var_19;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_6, &ml_backend__mlds_to_cs__Globals_10);
    }
    {
      ml_backend__mlds_to_cs__ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(ml_backend__mlds_to_cs__MLDS_7);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(ml_backend__mlds_to_cs__Globals_10, (MR_Integer) 0, (MR_String) ".cs", ml_backend__mlds_to_cs__ModuleName_11, &ml_backend__mlds_to_cs__SourceFile_12);
    }
    {
      ml_backend__mlds_to_cs__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_19, 3) = ((MR_Box) (ml_backend__mlds_to_cs__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Var_19, 5) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_7));
    }
    {
      libs__file_util__output_to_file_6_p_0(ml_backend__mlds_to_cs__Globals_10, ml_backend__mlds_to_cs__SourceFile_12, ml_backend__mlds_to_cs__Var_19, ml_backend__mlds_to_cs__Succeeded_8);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__mlds_to_cs__init(void)
{
}

void mercury__ml_backend__mlds_to_cs__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0);
}

void mercury__ml_backend__mlds_to_cs__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.mlds_to_cs. */
