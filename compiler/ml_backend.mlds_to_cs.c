/*
** Automatically generated from `mlds_to_cs.m'
** by the Mercury compiler,
** version rotd-2018-06-03
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


// :- module ml_backend.mlds_to_cs.
// :- implementation.

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

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0[10];

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0[10];

static const MR_DuArgLocn ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0[10];

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_csharp_out_info_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_csharp_out_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_csharp_out_info_0[1];

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_csharp_out_info_0[1];

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const_for_csharp__3788__1_2_p_0(
  MR_Word Lang_11,
  MR_Word HeadVar__2_66);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt_call_for_csharp__2621__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__2037__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string_for_csharp__1885__1_1_f_0(
  MR_Word LambdaHeadVar__1_44);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1293__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_class_defn_for_csharp__692__1_2_p_0(
  MR_Word MemberMethods_21,
  MR_Word HeadVar__2_32);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__550__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__550__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_39);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__543__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_27);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export_for_csharp__324__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_36);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__130__1_1_f_0(
  MR_Word LambdaHeadVar__1_57);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_target_code_component_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Rval_10,
  MR_Integer Num_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_function_name_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word QualFuncName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_param_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Arg_8);

static void MR_CALL 
ml_backend__mlds_to_cs__make_out_param_4_p_0(
  MR_Word Type_5,
  MR_Word * Argument_6,
  MR_Integer Num_7,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_array_assignments_for_csharp_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word GlobalVarName_11,
  MR_Word ElementInit_12,
  MR_Integer Index_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefn_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Defns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_decl_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_init_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Map_9,
  MR_Word Scalar_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0(
  MR_Word Info_11,
  MR_Integer Indent_12,
  MR_Word TypeNum_13,
  MR_Word CellGroup_14,
  MR_Word STATE_VARIABLE_Graph_0_28,
  MR_Word * STATE_VARIABLE_Graph_29,
  MR_Word STATE_VARIABLE_Map_0_30,
  MR_Word * STATE_VARIABLE_Map_31);

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constant_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word FieldVarDefn_8);

static void MR_CALL 
ml_backend__mlds_to_cs__interface_to_string_2_p_0(
  MR_Word InterfaceId_3,
  MR_String * String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Integer Indent_7,
  MR_Word ClassDefn_8);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word Flags_7,
  MR_Word Kind_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word EnumConsts_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Inherits_9,
  MR_Word Interfaces_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_kind_for_csharp_3_p_0(
  MR_Word Kind_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FunctionDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Integer Indent_11,
  MR_Word FuncName_12,
  MR_Word OutputAux_13,
  MR_Word Context_14,
  MR_Word Signature_15,
  MR_Word MaybeBody_16);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word Context_12,
  MR_Word Default_13,
  MR_Word * ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Stmt_11,
  MR_Word * ExitMethods_12);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__4_4,
  MR_Word * ExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_call_rval_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word AtomicStmt_9,
  MR_Word Context_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_args_for_csharp_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__hand_defined_type_for_csharp_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncName_10,
  MR_Word OutputAux_11,
  MR_Word Signature_12);

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_name_for_csharp_3_p_0(
  MR_Word FunctionName_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word GlobalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_var_definition_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String EnvVarName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word CodeAddr_9,
  MR_String Name_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8);

static void MR_CALL 
ml_backend__mlds_to_cs__write_argument_name_for_csharp_3_p_0(
  MR_Word Arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Parameters_8);

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6);

static void MR_CALL 
ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(
  MR_Word PredLabel_3,
  MR_String * String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ForeignBodyCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word DeclCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(
  MR_Word OutputLineNumbers_6,
  MR_Word Context_7,
  MR_Integer N_8);

static void MR_CALL 
ml_backend__mlds_to_cs__cs_output_context_4_p_0(
  MR_Word OutputLineNumbers_5,
  MR_Word Context_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word MercuryModuleName_11,
  MR_Word ForeignDecls_13,
  MR_Word Defns_14);

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(
  MR_Word ModuleInfo_5,
  MR_String SourceFileName_6,
  MR_Word CodeAddrs_7);

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Defns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word VectorCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_1(
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
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ScalarCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_global_var_method_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_global_var_statements_for_csharp_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word OutputAux_8,
  MR_Word Type_9,
  MR_Word Initializer_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(
  MR_Word tscc_proc_1_input_1_Info_5,
  MR_Word tscc_proc_1_input_2_Lval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(
  MR_Word tscc_proc_2_input_1_Info_5,
  MR_Word tscc_proc_2_input_2_Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(
  MR_Word tscc_proc_3_input_1_Info_5,
  MR_Word tscc_proc_3_input_2_Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_cast_rval_for_csharp_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Type_7,
  MR_Word tscc_proc_4_input_3_Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0(
  MR_Word tscc_proc_5_input_1_Info_5,
  MR_Word tscc_proc_5_input_2_Const_6);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_102_111_114_95_99_115_104_97_114_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word tscc_proc_6_input_1_Info_6,
  MR_Word tscc_proc_6_input_2_Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(
  uint64_t U64_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(
  int64_t I64_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(
  uint32_t U32_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(
  int32_t I32_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(
  uint16_t U16_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(
  int16_t I16_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(
  uint8_t U8_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(
  int8_t I8_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(
  MR_Unsigned U_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(
  MR_Integer N_4);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(
  MR_Word SymName_3);

static void MR_CALL 
ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(
  MR_Word LocalVarName_3,
  MR_String * String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(
  MR_Word GlobalVarName_3,
  MR_String * String_4);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__get_type_initializer_2_f_0(
  MR_Word Info_4,
  MR_Word Type_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(
  MR_Word Op_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(
  MR_Word VarName_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word QualGlobalVarName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(
  MR_Word ModuleName_5,
  MR_Word QualKind_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(
  MR_Word Type_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Inits_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word GlobalVarName_7,
  MR_Word Type_8);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6,
  MR_String * String_7,
  MR_Word * ArrayDims_8);

static void MR_CALL 
ml_backend__mlds_to_cs__mercury_type_to_string_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word CtorCat_8,
  MR_String * String_9,
  MR_Word * ArrayDims_10);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(
  MR_Word Info_5,
  MR_Word ArgTypes_6,
  MR_Word RetTypes_7);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(
  MR_Word Type_3,
  MR_String * TargetType_4);

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word ArgsTypes_5,
  MR_String * String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__qual_class_name_to_string_for_csharp_3_p_0(
  MR_Word QualName_4,
  MR_Integer Arity_5,
  MR_String * String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(
  MR_String String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_src_end_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0(
  MR_Word MercuryModuleName_7,
  MR_Integer Indent_8,
  MR_Word StaticConstructors_9,
  MR_Word FinalPreds_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word CodeAddrs_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnums_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Exports_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word AllForeignCode_3);

static void MR_CALL 
ml_backend__mlds_to_cs__make_code_addr_map_for_csharp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrMap_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrMap_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_1[23][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_2[16][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_3[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_4[10][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_5[9][9];

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

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_9_0_s ml_backend__mlds_to_cs_vector_common_9[40];

/* sealed */ struct ml_backend__mlds_to_cs__vector_common_type_10_0_s {
  const MR_String ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_0;
  const MR_Word ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_10_0_s ml_backend__mlds_to_cs_vector_common_10[8];



static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_1[23][2] = {
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
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 22 */
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
    ((MR_Box) (ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__550__1_4_p_0_1)),
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

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_4[10][8] = {
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
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

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_5[9][9] = {
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
    (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 1))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4))))))))))
  },
  /* row 1 */
  {
    (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4))))))))))
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
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


static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_9_0_s ml_backend__mlds_to_cs_vector_common_9[40] = {
  /* row 0 */   {     (MR_String) "int" },
  /* row 1 */   {     (MR_String) "uint" },
  /* row 2 */   {     (MR_String) "sbyte" },
  /* row 3 */   {     (MR_String) "byte" },
  /* row 4 */   {     (MR_String) "short" },
  /* row 5 */   {     (MR_String) "ushort" },
  /* row 6 */   {     (MR_String) "int" },
  /* row 7 */   {     (MR_String) "uint" },
  /* row 8 */   {     (MR_String) "long" },
  /* row 9 */   {     (MR_String) "ulong" },
  /* row 10 */   {     (MR_String) "int" },
  /* row 11 */   {     (MR_String) "uint" },
  /* row 12 */   {     (MR_String) "sbyte" },
  /* row 13 */   {     (MR_String) "byte" },
  /* row 14 */   {     (MR_String) "short" },
  /* row 15 */   {     (MR_String) "ushort" },
  /* row 16 */   {     (MR_String) "int" },
  /* row 17 */   {     (MR_String) "uint" },
  /* row 18 */   {     (MR_String) "long" },
  /* row 19 */   {     (MR_String) "ulong" },
  /* row 20 */   {     (MR_String) "0" },
  /* row 21 */   {     (MR_String) "0U" },
  /* row 22 */   {     (MR_String) "0" },
  /* row 23 */   {     (MR_String) "0" },
  /* row 24 */   {     (MR_String) "0" },
  /* row 25 */   {     (MR_String) "0" },
  /* row 26 */   {     (MR_String) "0" },
  /* row 27 */   {     (MR_String) "0U" },
  /* row 28 */   {     (MR_String) "0L" },
  /* row 29 */   {     (MR_String) "0UL" },
  /* row 30 */   {     (MR_String) "0" },
  /* row 31 */   {     (MR_String) "0U" },
  /* row 32 */   {     (MR_String) "0" },
  /* row 33 */   {     (MR_String) "0" },
  /* row 34 */   {     (MR_String) "0" },
  /* row 35 */   {     (MR_String) "0" },
  /* row 36 */   {     (MR_String) "0" },
  /* row 37 */   {     (MR_String) "0U" },
  /* row 38 */   {     (MR_String) "0L" },
  /* row 39 */   {     (MR_String) "0UL" },
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_10_0_s ml_backend__mlds_to_cs_vector_common_10[8] = {
  /* row 0 */
  {
    (MR_String) "runtime.TypeInfo_Struct",
    (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))
  },
  /* row 1 */
  {
    (MR_String) "runtime.TypeCtorInfo_Struct",
    (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))
  },
  /* row 2 */
  {
    (MR_String) "/* typeclass_info */ object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]))
  },
  /* row 3 */
  {
    (MR_String) "/* base_typeclass_info */ object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]))
  },
  /* row 4 */
  {
    (MR_String) "runtime.TypeInfo_Struct",
    (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))
  },
  /* row 5 */
  {
    (MR_String) "runtime.TypeCtorInfo_Struct",
    (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))
  },
  /* row 6 */
  {
    (MR_String) "/* typeclass_info */ object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]))
  },
  /* row 7 */
  {
    (MR_String) "/* base_typeclass_info */ object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]))
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_generics_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_break_context_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0[10] = {
  (MR_String) "csoi_module_info",
  (MR_String) "csoi_auto_comments",
  (MR_String) "csoi_line_numbers",
  (MR_String) "csoi_foreign_line_numbers",
  (MR_String) "csoi_module_name",
  (MR_String) "csoi_source_filename",
  (MR_String) "csoi_code_addrs",
  (MR_String) "csoi_output_generics",
  (MR_String) "csoi_break_context",
  (MR_String) "csoi_univ_tvars"
};

static const MR_DuArgLocn ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0[10] = {
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

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0 = {
  (MR_String) "csharp_out_info",
  (MR_Integer) 10,
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
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const_for_csharp__3788__1_2_p_0(
  MR_Word Lang_11,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded = (Lang_11 == HeadVar__2_66);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt_call_for_csharp__2621__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;

    {
      LambdaHeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_44, 1) = ((MR_Box) (LambdaHeadVar__1_43));
    }
    return LambdaHeadVar__2_44;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__2037__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17)
{
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
    MR_Word MLDS_ArgType_13;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));

    MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, LambdaHeadVar__1_16);
    ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(Info_4, MLDS_ArgType_13, LambdaHeadVar__2_17);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string_for_csharp__1885__1_1_f_0(
  MR_Word LambdaHeadVar__1_44)
{
  {
    MR_Word LambdaHeadVar__2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 1))));

    return LambdaHeadVar__2_45;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1293__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14)
{
  {
    ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(Info_5, LambdaHeadVar__1_14, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_class_defn_for_csharp__692__1_2_p_0(
  MR_Word MemberMethods_21,
  MR_Word HeadVar__2_32)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[2]), ((MR_Box) (MemberMethods_21)), ((MR_Box) (HeadVar__2_32)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__550__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__550__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_39)
{
  {
    MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Box conv0_LambdaHeadVar__3_41;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_44);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (LambdaHeadVar__1_39));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[22])));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "(sender, ev) => "));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) "System.AppDomain.CurrentDomain.ProcessExit += "));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[15]), Var_48, ((MR_Box) ((MR_Integer) 0)), &conv0_LambdaHeadVar__3_41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__543__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_27)
{
  {
    MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_32);
    mercury__io__write_string_3_p_0(LambdaHeadVar__1_27);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export_for_csharp__324__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded = (Lang_10 == HeadVar__2_36);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__130__1_1_f_0(
  MR_Word LambdaHeadVar__1_57)
{
  {
    MR_Word LambdaHeadVar__2_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_57, (MR_Integer) 4))));

    return LambdaHeadVar__2_58;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX6_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY6_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX8_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY9_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_24;

      hlds__hlds_module____Compare____module_info_0_0(&Var_24, ArgX1_4, ArgY1_5);
      succeeded = (Var_24 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_24;
      else
      {
        MR_Word Var_25;
        MR_Integer Var_45 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_46 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_25, Var_45, Var_46);
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;
          MR_Integer Var_47 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_48 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, Var_47, Var_48);
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
          {
            MR_Word Var_27;
            MR_Integer Var_49 = (MR_Integer) (ArgX4_10);
            MR_Integer Var_50 = (MR_Integer) (ArgY4_11);

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

                  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[1]), &Var_30, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                  {
                    MR_Word Var_31;
                    MR_Integer Var_51 = (MR_Integer) (ArgX8_18);
                    MR_Integer Var_52 = (MR_Integer) (ArgY8_19);

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_31, Var_51, Var_52);
                    succeeded = (Var_31 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_31;
                    else
                    {
                      MR_Word Var_32;
                      MR_Integer Var_53 = (MR_Integer) (ArgX9_20);
                      MR_Integer Var_54 = (MR_Integer) (ArgY9_21);

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, Var_53, Var_54);
                      succeeded = (Var_32 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_32;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX6_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY6_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

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
                  TypeInfo_27_27 = (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        TypeInfo_28_28 = (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[6]);
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
ml_backend__mlds_to_cs__output_target_code_component_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word TargetCode_6)
{
  switch (MR_tag((MR_Word) TargetCode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_14 = (MR_Word) (MR_body((MR_Word) (TargetCode_6), (MR_Integer) 0));

        ml_backend__mlds_to_cs__output_maybe_qualified_function_name_for_csharp_4_p_0(Info_5, FuncName_14);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 0))));
        MR_Word MaybeUserContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetCode_6, (MR_Integer) 1))));
        MR_Word Var_32;
        MR_Unsigned packed_args_2;
        MR_Unsigned packed_args_3;

        mercury__io__write_string_3_p_0((MR_String) "{\n");
        if (!((MaybeUserContext_9 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
        {
          MR_Word ProgContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_9, (MR_Integer) 0))));
          MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));

          ml_backend__mlds_to_cs__cs_output_context_4_p_0(Var_27, ProgContext_10);
        }
        mercury__io__write_string_3_p_0(CodeString_8);
        mercury__io__write_string_3_p_0((MR_String) "}\n");
        packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
        Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
        switch (Var_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "#line default\n");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_34 = ((MR_String) ((MR_hl_field(MR_mktag(2), TargetCode_6, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(CodeString_34);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));

            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));

            ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(Info_5, Lval_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_6, (MR_Integer) 1))));
            MR_String String_66;
            MR_Word ArrayDims_67;
            MR_Word Var_69;

            ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_5, Type_13, &String_66, &ArrayDims_67);
            mercury__io__write_string_3_p_0(String_66);
            Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_67, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_69);
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
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Rval_10,
  MR_Integer Num_11,
  MR_Integer * HeadVar__5_5)
{
  {
    MR_String Var_28;

    *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Num_11 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "out_param_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), Num_11, &Var_28);
    mercury__io__write_string_3_p_0(Var_28);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Rval_10);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * String_6)
{
  {
    MR_String String0_7;
    MR_Word ArrayDims_8;
    MR_Word RevBrackets_9;
    MR_Word Brackets_10;
    MR_Word Var_12;

    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &String0_7, &ArrayDims_8);
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[14]), ArrayDims_8, &RevBrackets_9);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevBrackets_9, &Brackets_10);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (String0_7));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Brackets_10));
    }
    mercury__string__append_list_2_p_0(Var_12, String_6);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_function_name_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word QualFuncName_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 0))));
    MR_Word FuncName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 1))));
    MR_Word CurrentModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
    MR_String FunctionNameStr_30;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_8, CurrentModuleName_10);
    if (!(succeeded))
    {
      ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ModuleName_8, (MR_Integer) 0);
    }
    if (((MR_tag((MR_Word) FuncName_9)) == (MR_mktag((MR_Integer) 1))))
      FunctionNameStr_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), FuncName_9, (MR_Integer) 0))));
    else
    {
      MR_Word PlainFuncName_34 = (MR_Word) (MR_body((MR_Word) (FuncName_9), (MR_Integer) 0));
      MR_Word FuncLabel_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_34, (MR_Integer) 0))));
      MR_Word ProcLabel_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_35, (MR_Integer) 0))));
      MR_Word MaybeAux_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_35, (MR_Integer) 1))));
      MR_Word PredLabel_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_37, (MR_Integer) 0))));
      MR_Integer ProcId_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_37, (MR_Integer) 1))));
      MR_String PredLabelStr_41;
      MR_Integer ModeNum_42;
      MR_String MaybeAuxSuffix_43;
      MR_String Var_53;
      MR_String Var_60;
      MR_String Var_62;

      ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(PredLabel_39, &PredLabelStr_41);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_40, &ModeNum_42);
      MaybeAuxSuffix_43 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_38);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), ModeNum_42, &Var_53);
      Var_60 = mercury__string__f_43_43_2_f_0(Var_53, MaybeAuxSuffix_43);
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_60);
      FunctionNameStr_30 = mercury__string__f_43_43_2_f_0(PredLabelStr_41, Var_62);
    }
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(FunctionNameStr_30);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_param_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Arg_8)
{
  {
    MR_bool succeeded;
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_8, (MR_Integer) 0))));
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_8, (MR_Integer) 1))));
    MR_String String_36;
    MR_Word ArrayDims_37;
    MR_Word Var_39;
    MR_String VarNameStr_46;
    MR_String RawString_50;
    MR_String MangledString_51;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    succeeded = ((((MR_tag((MR_Word) Type_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0))) == (MR_Integer) 6)));
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "out ");
    }
    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, Type_11, &String_36, &ArrayDims_37);
    mercury__io__write_string_3_p_0(String_36);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_37, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_39);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    RawString_50 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(Name_10);
    MangledString_51 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_50);
    VarNameStr_46 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_51);
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_46);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__make_out_param_4_p_0(
  MR_Word Type_5,
  MR_Word * Argument_6,
  MR_Integer Num_7,
  MR_Integer * HeadVar__4_4)
{
  {
    MR_Word VarName_8;
    MR_Word Var_10;
    MR_Word Var_11;

    *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) Num_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Num_7));
    }
    {
      VarName_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarName_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), VarName_8, 1) = ((MR_Box) (Var_10));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (Type_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Argument_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_array_assignments_for_csharp_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word GlobalVarName_11,
  MR_Word ElementInit_12,
  MR_Integer Index_13,
  MR_Integer * HeadVar__6_6)
{
  {
    MR_String DataNameStr_33;

    *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) Index_13 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    switch (MR_tag((MR_Word) GlobalVarName_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DataNameStr_33 = (MR_String) "dummy_var";
        break;
      case (MR_Integer) 1:
        {
          MR_Word RttiId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_11, (MR_Integer) 0))));

          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_39, &DataNameStr_33);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ConstVar_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GlobalVarName_11, (MR_Integer) 0))));
          MR_Integer Num_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_11, (MR_Integer) 1))));

          DataNameStr_33 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_37, Num_38);
        }
        break;
    }
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(DataNameStr_33);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__io__write_int_3_p_0(Index_13);
    mercury__io__write_string_3_p_0((MR_String) "] = ");
    ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(Info_9, ElementInit_12, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1293__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_1(
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

    ml_backend__mlds_to_cs__output_rtti_array_assignments_for_csharp_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word GlobalVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 0))));
    MR_Word Initializer_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) Initializer_14)) {
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
          MR_Word StructType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_14, (MR_Integer) 0))));
          MR_Word FieldInits_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_14, (MR_Integer) 1))));

          succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0))) == (MR_Integer) 4)));
          if (succeeded)
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_for_csharp\'/5", (MR_String) "is_array");
              return;
            }
          }
          else
          {
            succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0))) == (MR_Integer) 5)));
            if (succeeded)
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_for_csharp\'/5", (MR_String) "is_array");
                return;
              }
            }
            else
            {
              MR_Word IsArray_105;

              succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                IsArray_105 = (MR_Integer) 0;
              }
              else
              {
                MR_Word CtorCat_53;

                succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CtorCat_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 3))));
                  IsArray_105 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_53);
                }
                else
                {
                  MR_Word RttiIdMaybeElement_54;

                  succeeded = ((((MR_tag((MR_Word) StructType_17)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 0))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    RttiIdMaybeElement_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StructType_17, (MR_Integer) 1))));
                    {
                      MR_String _TypeName_55;

                      backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(RttiIdMaybeElement_54, &_TypeName_55, &IsArray_105);
                    }
                  }
                  else
                    IsArray_105 = (MR_Integer) 1;
                }
              }
              switch (IsArray_105) {
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
                    MR_String DataNameStr_60;
                    MR_Word Var_79;

                    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
                    switch (MR_tag((MR_Word) GlobalVarName_10)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        DataNameStr_60 = (MR_String) "dummy_var";
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word RttiId_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_10, (MR_Integer) 0))));

                          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_66, &DataNameStr_60);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ConstVar_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GlobalVarName_10, (MR_Integer) 0))));
                          MR_Integer Num_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_10, (MR_Integer) 1))));

                          DataNameStr_60 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_64, Num_65);
                        }
                        break;
                    }
                    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(DataNameStr_60);
                    mercury__io__write_string_3_p_0((MR_String) ".init(");
                    {
                      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
                      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Info_6));
                    }
                    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_18, (MR_String) ",\n\t\t", Var_79);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_14, (MR_Integer) 0))));
          MR_Word Var_24;
          MR_Box conv2__Index_21;
          MR_Box conv1_STATE_VARIABLE_IO_23;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_14[0]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_6));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Indent_7));
            MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (GlobalVarName_10));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, ElementInits_20, ((MR_Box) ((MR_Integer) 0)), &conv2__Index_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_rtti_defn_assignments_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Defns_8)
{
  {
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "//\n");
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, Defns_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1293__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10)
{
  {
    MR_Integer TypeRawNum_12 = (MR_Integer) (TypeNum_9);
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 0))));
    MR_Word RowInits_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 4))));
    MR_Integer Var_29;
    MR_Word Var_32;
    MR_String Var_42;
    MR_String String_63;
    MR_Word ArrayDims_64;
    MR_Word Var_66;
    MR_Word Var_76;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeRawNum_12, &Var_42);
    mercury__io__write_string_3_p_0(Var_42);
    mercury__io__write_string_3_p_0((MR_String) " = new ");
    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, Type_13, &String_63, &ArrayDims_64);
    mercury__io__write_string_3_p_0(String_63);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_64, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_66);
    mercury__io__write_string_3_p_0((MR_String) "[] {\n");
    Var_29 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_29);
    Var_32 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInits_17);
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Info_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_32, (MR_String) ",\n\t\t", Var_76);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_decl_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10)
{
  {
    MR_Integer TypeRawNum_12 = (MR_Integer) (TypeNum_9);
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 0))));
    MR_Word ClassDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 1))));
    MR_String Var_33;
    MR_String String_54;
    MR_Word ArrayDims_55;
    MR_Word Var_57;

    ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(Info_7, Indent_8, ClassDefn_14);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "private static /* readonly */ ");
    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, Type_13, &String_54, &ArrayDims_55);
    mercury__io__write_string_3_p_0(String_54);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_55, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_57);
    mercury__io__write_string_3_p_0((MR_String) "[] MR_vector_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeRawNum_12, &Var_33);
    mercury__io__write_string_3_p_0(Var_33);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_init_for_csharp_6_p_0(
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
    MR_String Var_47;
    MR_Box conv0_Initializer_12;

    mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Map_9, ((MR_Box) (Scalar_10)), &conv0_Initializer_12);
    Initializer_12 = ((MR_Word) (conv0_Initializer_12));
    Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 1))));
    TypeNum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 2))));
    RowNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 3))));
    TypeRawNum_17 = (MR_Integer) (TypeNum_15);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "MR_scalar_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeRawNum_17, &Var_37);
    mercury__io__write_string_3_p_0(Var_37);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), RowNum_16, &Var_47);
    mercury__io__write_string_3_p_0(Var_47);
    mercury__io__write_string_3_p_0((MR_String) "] = ");
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Type_14));
    }
    ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(Info_7, Initializer_12, Var_28);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0_1(
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

    ml_backend__mlds_to_target_util__add_scalar_inits_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__10_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
    *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__8_8));
    *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__10_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0(
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
    MR_Integer TypeRawNum_18 = (MR_Integer) (TypeNum_13);
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 0))));
    MR_Word RowInitsCord_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 4))));
    MR_Word ArrayType_24;
    MR_Word RowInits_25;
    MR_Word MLDS_ModuleName_26;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_48;
    MR_String Var_75;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Box conv5_Var_27;
    MR_Box conv4_STATE_VARIABLE_Graph_29;
    MR_Box conv3_STATE_VARIABLE_Map_31;

    {
      ArrayType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ArrayType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ArrayType_24, 1) = ((MR_Box) (Type_19));
    }
    RowInits_25 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitsCord_23);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_12);
    mercury__io__write_string_3_p_0((MR_String) "private static readonly ");
    ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_11, Type_19);
    mercury__io__write_string_3_p_0((MR_String) "[] MR_scalar_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeRawNum_18, &Var_75);
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
    ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(Info_11, Var_43, Var_44);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
    MLDS_ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2))));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (MLDS_ModuleName_26));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Type_19));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (TypeNum_13));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[0]), Var_48, RowInits_25, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_27, ((MR_Box) (STATE_VARIABLE_Graph_0_28)), &conv4_STATE_VARIABLE_Graph_29, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv3_STATE_VARIABLE_Map_31);
    *STATE_VARIABLE_Graph_29 = ((MR_Word) (conv4_STATE_VARIABLE_Graph_29));
    *STATE_VARIABLE_Map_31 = ((MR_Word) (conv3_STATE_VARIABLE_Map_31));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constant_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word FieldVarDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word FieldVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_8, (MR_Integer) 0))));
    MR_Word Initializer_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_8, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) Initializer_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_27;

          Var_27 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_14)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant_for_csharp\'/5", Var_27);
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_14, (MR_Integer) 0))));
          MR_String VarNameStr_52;
          MR_String RawString_56;
          MR_String MangledString_57;
          MR_Integer N_17;
          MR_Word Var_32;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          RawString_56 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_10);
          MangledString_57 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_56);
          VarNameStr_52 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_57);
          ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_52);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          succeeded = ((((MR_tag((MR_Word) Rval_16)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 0))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 0))) == (MR_Integer) 9)));
            if (succeeded)
              N_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 1))));
          }
          if (succeeded)
            mercury__io__write_int_3_p_0(N_17);
          else
          {
            MR_String String_19;
            MR_Word Type_20;
            MR_Word Var_34;
            MR_Word Var_35;

            succeeded = ((((MR_tag((MR_Word) Rval_16)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 0))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0))) == (MR_Integer) 14)));
              if (succeeded)
              {
                Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 1))));
                String_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 2))));
                Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 3))));
                succeeded = (Var_35 == (MR_Integer) 1);
              }
            }
            if (succeeded)
            {
              MR_String String_71;
              MR_Word ArrayDims_72;
              MR_Word Var_74;

              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, Type_20, &String_71, &ArrayDims_72);
              mercury__io__write_string_3_p_0(String_71);
              Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_72, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_74);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0(String_19);
            }
            else
            {
              MR_String Var_43;

              Var_43 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (Rval_16)));
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant_for_csharp\'/5", Var_43);
                return;
              }
            }
          }
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_String Var_27;

          Var_27 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_14)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant_for_csharp\'/5", Var_27);
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__interface_to_string_2_p_0(
  MR_Word InterfaceId_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded;
    MR_Word QualClassName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InterfaceId_3, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InterfaceId_3, (MR_Integer) 1))));
    MR_Word ModuleQualifier_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_5, (MR_Integer) 0))));
    MR_String ClassName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_5, (MR_Integer) 2))));
    MR_Word SymName_11;
    MR_String ModuleNameStr_12;

    SymName_11 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleQualifier_8);
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_11, (MR_Integer) 0, (MR_String) ".", &ModuleNameStr_12);
    succeeded = (strcmp(ClassName_10, (MR_String) "MercuryType") == 0);
    if (succeeded)
    {
      *String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, (MR_String) ".MercuryType");
    }
    else
    {
      MR_String Var_31;
      MR_String Var_38;
      MR_String Var_40;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), Arity_6, &Var_31);
      Var_38 = mercury__string__f_43_43_2_f_0(ClassName_10, Var_31);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_38);
      *String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_40);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_field_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_class_defn_for_csharp__692__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Integer Indent_7,
  MR_Word ClassDefn_8)
{
  {
    MR_bool succeeded;
    MR_String ClassName_10;
    MR_Integer ClassArity_11;
    MR_Word Flags_13;
    MR_Word Kind_14;
    MR_Word Inherits_16;
    MR_Word Implements_17;
    MR_Word TypeParams_18;
    MR_Word MemberFields_19;
    MR_Word MemberClasses_20;
    MR_Word MemberMethods_21;
    MR_Word Ctors_22;
    MR_Word OutputGenerics_23;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Integer Var_42;
    MR_Word Var_62;
    MR_Integer Var_64;
    MR_Word Var_66;
    MR_Word Var_70;
    MR_Word Var_74;
    MR_String Var_75;
    MR_Word Var_76;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Unsigned packed_args_2;
    MR_Unsigned packed_args_3;
    MR_Box conv2_STATE_VARIABLE_IO_63_63;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    ClassName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 0))));
    ClassArity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 1))));
    Flags_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 3))));
    Kind_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 4))));
    Inherits_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 6))));
    Implements_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 7))));
    TypeParams_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 8))));
    MemberFields_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 9))));
    MemberClasses_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 10))));
    MemberMethods_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 11))));
    Ctors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 12))));
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[5]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (MemberMethods_21));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_class_defn_for_csharp\'/5", (MR_String) "MemberMethods != []");
    switch (Kind_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) "[System.Serializable]\n");
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(Flags_13, Kind_14);
          ml_backend__mlds_to_cs__output_class_kind_for_csharp_3_p_0(Kind_14);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(Flags_13, Kind_14);
          mercury__io__write_string_3_p_0((MR_String) "interface ");
        }
        break;
      case (MR_Integer) 2:
        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(Flags_13, Kind_14);
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
        break;
    }
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
    Var_75 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4))));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
    {
      STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 1) = (MR_Box) (packed_args_0);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 5) = (MR_Box) (packed_args_1);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (TypeParams_18));
    }
    ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(ClassName_10, ClassArity_11);
    packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
    OutputGenerics_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 5))) & (MR_Integer) 1);
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
    Var_42 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_supers_list_6_p_0(STATE_VARIABLE_Info_37_37, Var_42, Inherits_16, Implements_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    switch (Kind_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_52;
          MR_Integer Var_54 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word Var_57;
          MR_Integer Var_59;
          MR_Box conv0_STATE_VARIABLE_IO_53_53;
          MR_Box conv1_STATE_VARIABLE_IO_58_58;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[8]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (STATE_VARIABLE_Info_37_37));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, MemberFields_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_53_53);
          Var_59 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_3));
            MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (STATE_VARIABLE_Info_37_37));
            MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Var_59));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, MemberClasses_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_58_58);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word EnumConstMemberFields_24;
          MR_Integer Var_49;

          mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[13]), MemberFields_19, &EnumConstMemberFields_24);
          Var_49 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 2);
          ml_backend__mlds_to_cs__output_enum_constants_for_csharp_5_p_0(STATE_VARIABLE_Info_37_37, Var_49, EnumConstMemberFields_24);
        }
        break;
    }
    mercury__io__nl_2_p_0();
    Var_64 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ClassName_10));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (ClassArity_11));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (STATE_VARIABLE_Info_37_37));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (Var_66));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Ctors_22, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_63_63);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word Flags_7,
  MR_Word Kind_8)
{
  {
    MR_Word Access_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Overridable0_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Constness_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0)));

    switch (Access_10) {
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
    switch (Kind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        switch (Overridable0_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "sealed ");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
          switch (Overridable0_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "sealed ");
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
    switch (Constness_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "readonly ");
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
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_enum_constant_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constants_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word EnumConsts_8)
{
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_enum_constants_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Indent_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), EnumConsts_8, (MR_String) "\n", Var_13);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    ml_backend__mlds_to_cs__interface_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Inherits_9,
  MR_Word Interfaces_10)
{
  {
    MR_Word Strings0_12;
    MR_Word Strings_13;

    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[11]), Interfaces_10, &Strings0_12);
    switch (MR_tag((MR_Word) Inherits_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inherits_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Strings_13 = Strings0_12;
            break;
          case (MR_Integer) 1:
            {
              MR_String EnvPtrTypeString_18;
              MR_Word _ArrayDims_32;

              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))), &EnvPtrTypeString_18, &_ArrayDims_32);
              {
                Strings_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Strings_13, 0) = ((MR_Box) (EnvPtrTypeString_18));
                MR_hl_field(MR_mktag(1), Strings_13, 1) = ((MR_Box) (Strings0_12));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BaseClassId_14 = (MR_Word) (MR_body((MR_Word) (Inherits_9), (MR_Integer) 1));
          MR_Word BaseClassType_15 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (BaseClassId_14)));
          MR_String BaseClassString_16;
          MR_Word _ArrayDims_17;

          ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, BaseClassType_15, &BaseClassString_16, &_ArrayDims_17);
          {
            Strings_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Strings_13, 0) = ((MR_Box) (BaseClassString_16));
            MR_hl_field(MR_mktag(1), Strings_13, 1) = ((MR_Box) (Strings0_12));
          }
        }
        break;
    }
    if (!((Strings_13 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Strings_13, (MR_String) ", ", (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[12]));
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_kind_for_csharp_3_p_0(
  MR_Word Kind_4)
{
  switch (Kind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "class ");
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) "enum ");
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "interface ");
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "struct ");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FunctionDefn_10)
{
  {
    MR_Word FuncName_12;
    MR_Word Context_13;
    MR_Word Flags_14;
    MR_Word MaybePredProcId_15;
    MR_Word Params_16;
    MR_Word MaybeBody_17;
    MR_String PreStr_20;
    MR_String PostStr_21;
    MR_Word Access_47;
    MR_Word PerInstance_48;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    FuncName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 0))));
    Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 1))));
    Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 2))));
    MaybePredProcId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 3))));
    Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 4))));
    MaybeBody_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 5))));
    if ((MaybeBody_17 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      PreStr_20 = (MR_String) "/* external:\n";
      PostStr_21 = (MR_String) "*/\n";
    }
    else
    {
      PreStr_20 = (MR_String) "";
      PostStr_21 = (MR_String) "";
    }
    mercury__io__write_string_3_p_0(PreStr_20);
    Access_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))));
    PerInstance_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 1))));
    switch (Access_47) {
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
    switch (PerInstance_48) {
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
    if (!((MaybePredProcId_15 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word PredProcId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_15, (MR_Integer) 0))));
      MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));

      ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_4_p_0(Var_29, PredProcId_23);
    }
    ml_backend__mlds_to_cs__output_func_for_csharp_9_p_0(Info_7, Indent_8, FuncName_12, OutputAux_9, Context_13, Params_16, MaybeBody_17);
    mercury__io__write_string_3_p_0(PostStr_21);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Integer Indent_11,
  MR_Word FuncName_12,
  MR_Word OutputAux_13,
  MR_Word Context_14,
  MR_Word Signature_15,
  MR_Word MaybeBody_16)
{
  if (!((MaybeBody_16 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Word Body_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBody_16, (MR_Integer) 0))));
    MR_Word Var_26;
    MR_Integer Var_30;
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Word _ExitMethods_20;
    MR_Unsigned packed_args_2;
    MR_Unsigned packed_args_3;
    MR_Unsigned packed_args_4;
    MR_Unsigned packed_args_5;

    ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0(Info_10, Indent_11, FuncName_12, OutputAux_13, Signature_15);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)));
    Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_26, Context_14, Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_30 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_10, Var_30, Body_18, &_ExitMethods_20);
    packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)));
    Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_33, Context_14, Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1)));
    Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 5)));
    switch (Var_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "#line default\n");
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word Context_4,
  MR_Word HeadVar__5_5,
  MR_Word Default_6,
  MR_Word * ExitMethods_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(Info_1, Indent_2, Context_4, Default_6, ExitMethods_7);
    else
    {
      MR_Word Case_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word CaseExitMethods0_29;
      MR_Word CasesExitMethods_30;
      MR_Word CaseExitMethods_31;
      MR_Word FirstCond_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 0))));
      MR_Word LaterConds_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 1))));
      MR_Word Statement_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 2))));
      MR_Word StmtExitMethods_55;
      MR_Word Var_57;
      MR_Integer Var_59;
      MR_Box conv0_STATE_VARIABLE_IO_24_58;

      ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(Info_1, Indent_2, Context_4, FirstCond_52);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[7]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Info_1));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Indent_2));
        MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (Context_4));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, LaterConds_53, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_58);
      Var_59 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) (MR_Integer) 1);
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_1, Var_59, Statement_54, &StmtExitMethods_55);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_55);
      if (succeeded)
      {
        MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer Var_64 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word Var_69;
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 5)));

        ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_63, Context_4, Var_64);
        mercury__io__write_string_3_p_0((MR_String) "break;\n");
        Var_69 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_55, ((MR_Box) ((MR_Integer) 0)));
        CaseExitMethods0_29 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_69, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        CaseExitMethods0_29 = StmtExitMethods_55;
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(Info_1, Indent_2, Context_4, Cases_25, Default_6, &CasesExitMethods_30);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)), CaseExitMethods0_29);
      if (succeeded)
      {
        MR_Word Var_37;

        Var_37 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), CaseExitMethods0_29, ((MR_Box) ((MR_Integer) 0)));
        CaseExitMethods_31 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_37, ((MR_Box) ((MR_Integer) 4)));
      }
      else
        CaseExitMethods_31 = CaseExitMethods0_29;
      *ExitMethods_7 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), CaseExitMethods_31, CasesExitMethods_30);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
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
            MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_23;
            MR_Integer Var_24;
            MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
            MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)));
            MR_Unsigned packed_args_6;
            MR_Unsigned packed_args_7;

            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_19, Context_12, Indent_10);
            mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/\n");
            packed_args_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
            Var_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            packed_args_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)));
            Var_24 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) (MR_Integer) 1);
            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_23, Context_12, Var_24);
            mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 1:
          {
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Statement_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_13, (MR_Integer) 0))));
        MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer Var_34;
        MR_Word Var_37;
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)));
        MR_Unsigned packed_args_2;
        MR_Unsigned packed_args_3;

        ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_30, Context_12, Indent_10);
        mercury__io__write_string_3_p_0((MR_String) "default:\n");
        Var_34 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) (MR_Integer) 1);
        ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_9, Var_34, Statement_16, ExitMethods_14);
        packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
        Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)));
        ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_37, Context_12, Indent_10);
        mercury__io__write_string_3_p_0((MR_String) "break;\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_HeadVar__5_5;

    ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_44;

    conv2_LambdaHeadVar__2_44 = ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt_call_for_csharp__2621__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_local_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Stmt_11,
  MR_Word * ExitMethods_12)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Stmt_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 0))));
          MR_Word FuncDefns_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 1))));
          MR_Word Stmts_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_11, (MR_Integer) 3))));
          MR_Integer BlockIndent_87 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word Var_93 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word Var_108;
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
          MR_Unsigned packed_args_2;
          MR_Unsigned packed_args_3;

          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_93, Context_85, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "{\n");
          if (!((LocalVarDefns_82 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Word Var_97;
            MR_Box conv0_STATE_VARIABLE_IO_32_98;

            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[6]));
              MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (BlockIndent_87));
              MR_hl_field(MR_mktag(0), Var_97, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, LocalVarDefns_82, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_32_98);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          if (!((FuncDefns_83 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            MR_Word Var_102;
            MR_Box conv1_STATE_VARIABLE_IO_37_103;

            {
              Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[4]));
              MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_102, 4) = ((MR_Box) (BlockIndent_87));
              MR_hl_field(MR_mktag(0), Var_102, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, FuncDefns_83, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_103);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, BlockIndent_87, Stmts_84, ExitMethods_12);
          packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_108, Context_85, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_612 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 0))));
          MR_Word Cond_613 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 1))));
          MR_Word BodyStmt_614 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_616 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_11, (MR_Integer) 4))));
          MR_Integer ScopeIndent_617;
          MR_Word Var_722;
          MR_Unsigned packed_args_38;
          MR_Unsigned packed_args_39;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_614, Indent_9, &ScopeIndent_617);
          packed_args_38 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_722 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          packed_args_39 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
          switch (Kind_612) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_626;
                MR_Word BodyInfo_656;
                MR_Word StmtExitMethods_657;
                MR_Word Var_695;
                MR_Word Var_699;
                MR_String Var_700;
                MR_Word Var_701;
                MR_Word Var_702;
                MR_Word Var_704;
                MR_Unsigned packed_args_40;
                MR_Unsigned packed_args_41;
                MR_Unsigned packed_args_42;
                MR_Unsigned packed_args_43;

                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_722, Context_616, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "do\n");
                Var_695 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
                packed_args_40 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                Var_699 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
                Var_700 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
                Var_701 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
                packed_args_41 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
                Var_702 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) & (MR_Integer) 1);
                Var_704 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
                {
                  BodyInfo_656 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 0) = ((MR_Box) (Var_695));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 1) = (MR_Box) (packed_args_40);
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 2) = ((MR_Box) (Var_699));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 3) = ((MR_Box) (Var_700));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 4) = ((MR_Box) (Var_701));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 5) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Var_702))) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 2))) << (MR_Integer) 1))));
                  MR_hl_field(MR_mktag(0), BodyInfo_656, 6) = ((MR_Box) (Var_704));
                }
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(BodyInfo_656, ScopeIndent_617, BodyStmt_614, &StmtExitMethods_657);
                packed_args_42 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                Var_626 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                packed_args_43 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_626, Context_616, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Cond_613);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
                *ExitMethods_12 = ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(Cond_613, StmtExitMethods_657);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_725;
                MR_Word Var_727;
                MR_Word Var_728;
                MR_String Var_729;
                MR_Word Var_730;
                MR_Word Var_732;
                MR_Word Var_734;
                MR_Unsigned packed_args_44;
                MR_Unsigned packed_args_45;
                MR_Word Var_640;

                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_722, Context_616, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "while (");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Cond_613);
                mercury__io__write_string_3_p_0((MR_String) ")\n");
                Var_734 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
                packed_args_44 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                Var_732 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_730 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
                Var_729 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
                Var_728 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
                packed_args_45 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
                Var_727 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) & (MR_Integer) 1);
                Var_725 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
                succeeded = ((((MR_tag((MR_Word) Cond_613)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cond_613, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_640 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cond_613, (MR_Integer) 1))));
                  succeeded = (Var_640 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (succeeded)
                {
                  MR_Integer Var_645;

                  ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_732, Context_616, Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                  Var_645 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_645);
                  mercury__io__write_string_3_p_0((MR_String) "/* Unreachable code */\n");
                  ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
                  mercury__io__write_string_3_p_0((MR_String) "}\n");
                  *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
                }
                else
                {
                  MR_Word BodyInfo_618;
                  MR_Word StmtExitMethods_619;

                  {
                    BodyInfo_618 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 0) = ((MR_Box) (Var_734));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 1) = (MR_Box) (packed_args_44);
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 2) = ((MR_Box) (Var_730));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 3) = ((MR_Box) (Var_729));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 4) = ((MR_Box) (Var_728));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 5) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Var_727))) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 2))) << (MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), BodyInfo_618, 6) = ((MR_Box) (Var_725));
                  }
                  ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(BodyInfo_618, ScopeIndent_617, BodyStmt_614, &StmtExitMethods_619);
                  *ExitMethods_12 = ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(Cond_613, StmtExitMethods_619);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cond_384 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 0))));
          MR_Word Then0_385 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 1))));
          MR_Word MaybeElse_386 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 2))));
          MR_Word Context_387 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_11, (MR_Integer) 3))));
          MR_Word Then_392;
          MR_Integer ThenScopeIndent_393;
          MR_Word ThenExitMethods_394;
          MR_Word Var_403;
          MR_Word ThenContext_391;
          MR_Word Var_398;
          MR_Unsigned packed_args_22;
          MR_Unsigned packed_args_23;

          succeeded = ((MR_tag((MR_Word) MaybeElse_386)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Then0_385)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_385, (MR_Integer) 2))));
              ThenContext_391 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_385, (MR_Integer) 3))));
              succeeded = (Var_398 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word Var_401;

            {
              Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_401, 0) = ((MR_Box) (Then0_385));
              MR_hl_field(MR_mktag(1), Var_401, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Then_392 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Then_392, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Then_392, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Then_392, 2) = ((MR_Box) (Var_401));
              MR_hl_field(MR_mktag(0), Then_392, 3) = ((MR_Box) (ThenContext_391));
            }
          }
          else
            Then_392 = Then0_385;
          packed_args_22 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_403 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          packed_args_23 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_403, Context_387, Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "if (");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Cond_384);
          mercury__io__write_string_3_p_0((MR_String) ")\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_392, Indent_9, &ThenScopeIndent_393);
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, ThenScopeIndent_393, Then_392, &ThenExitMethods_394);
          if ((MaybeElse_386 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ExitMethods_12 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_394, ((MR_Box) ((MR_Integer) 4)));
          }
          else
          {
            MR_Word Else_395 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_386, (MR_Integer) 0))));
            MR_Integer ElseScopeIndent_396;
            MR_Word ElseExitMethods_397;
            MR_Word Var_412 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Unsigned packed_args_24 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
            MR_Unsigned packed_args_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_412, Context_387, Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "else\n");
            ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_395, Indent_9, &ElseScopeIndent_396);
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, ElseScopeIndent_396, Else_395, &ElseExitMethods_397);
            *ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_394, ElseExitMethods_397);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Val_501 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word Cases_503 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word Default_504 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 5))));
              MR_Word Context_505 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6))));
              MR_Word CaseInfo_506;
              MR_Word Var_507 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Integer Var_515;
              MR_Word Var_518;
              MR_Unsigned packed_args_30 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              MR_Unsigned packed_args_31 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              MR_Word Var_531;
              MR_Word Var_535;
              MR_String Var_536;
              MR_Word Var_537;
              MR_Word Var_538;
              MR_Word Var_540;
              MR_Unsigned packed_args_32;
              MR_Unsigned packed_args_33;
              MR_Unsigned packed_args_34;
              MR_Unsigned packed_args_35;

              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_507, Context_505, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "switch (");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Val_501);
              mercury__io__write_string_3_p_0((MR_String) ") {\n");
              Var_531 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
              packed_args_32 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              Var_535 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
              Var_536 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
              Var_537 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
              packed_args_33 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              Var_538 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) & (MR_Integer) 1);
              Var_540 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 6))));
              {
                CaseInfo_506 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CaseInfo_506, 0) = ((MR_Box) (Var_531));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 1) = (MR_Box) (packed_args_32);
                MR_hl_field(MR_mktag(0), CaseInfo_506, 2) = ((MR_Box) (Var_535));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 3) = ((MR_Box) (Var_536));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 4) = ((MR_Box) (Var_537));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 5) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Var_538))) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 1))) << (MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), CaseInfo_506, 6) = ((MR_Box) (Var_540));
              }
              Var_515 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_9_p_0(CaseInfo_506, Var_515, Context_505, Cases_503, Default_504, ExitMethods_12);
              packed_args_34 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              Var_518 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              packed_args_35 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_518, Context_505, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
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
              MR_Word Target_302 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_303 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Target_302)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Target_302)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word BreakContext_305 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                        MR_Word Var_330 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Unsigned packed_args_18 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                        MR_Unsigned packed_args_19 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

                        switch (BreakContext_305) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt_goto_for_csharp\'/7", (MR_String) "goto_break_switch not in switch");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_330, Context_303, Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word BreakContext_327 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))) >> (MR_Integer) 1)) & (MR_Integer) 3);
                        MR_Word Var_348 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Unsigned packed_args_16 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                        MR_Unsigned packed_args_17 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

                        switch (BreakContext_327) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                            {
                              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_348, Context_303, Indent_9);
                              mercury__io__write_string_3_p_0((MR_String) "break;\n");
                              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                            }
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt_goto_for_csharp\'/7", (MR_String) "goto_break_loop not in loop");
                                return;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_306 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Unsigned packed_args_20 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                        MR_Unsigned packed_args_21 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

                        ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_306, Context_303, Indent_9);
                        mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                        *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 1)));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt_goto_for_csharp\'/7", (MR_String) "gotos not supported in C#.");
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
              MR_Word Signature_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word FuncRval_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word CallArgs_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3))));
              MR_Word Results_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word IsTailCall_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 5))));
              MR_Word Context_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 6))));
              MR_Word ArgTypes_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_148, (MR_Integer) 0))));
              MR_Word RetTypes_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_148, (MR_Integer) 1))));
              MR_Word OutArgs_156;
              MR_String CloseBracket_161;
              MR_Word Var_163 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_167;
              MR_Integer Var_168;
              MR_Word Var_187;
              MR_Word Var_189;
              MR_Word Var_199;
              MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              MR_Unsigned packed_args_6;
              MR_Unsigned packed_args_7;
              MR_Word Var_177;
              MR_Unsigned packed_args_10;
              MR_Unsigned packed_args_11;

              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_163, Context_153, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              packed_args_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              Var_167 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              packed_args_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              Var_168 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_167, Context_153, Var_168);
              if ((Results_151 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                OutArgs_156 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              else
              {
                MR_Word Lval_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_151, (MR_Integer) 0))));
                MR_Word Lvals_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_151, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(Info_8, Lval_157);
                mercury__io__write_string_3_p_0((MR_String) " = ");
                OutArgs_156 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[10]), Lvals_158);
              }
              succeeded = ((((MR_tag((MR_Word) FuncRval_149)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FuncRval_149, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FuncRval_149, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_177)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                }
              }
              if (succeeded)
                CloseBracket_161 = (MR_String) "";
              else
              {
                MR_String TypeString_162;

                TypeString_162 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(Info_8, ArgTypes_154, RetTypes_155);
                mercury__io__write_string_3_p_0((MR_String) "((");
                mercury__io__write_string_3_p_0(TypeString_162);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                CloseBracket_161 = (MR_String) ")";
              }
              ml_backend__mlds_to_cs__output_call_rval_for_csharp_4_p_0(Info_8, FuncRval_149);
              mercury__io__write_string_3_p_0(CloseBracket_161);
              mercury__io__write_string_3_p_0((MR_String) "(");
              Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_150, OutArgs_156);
              {
                Var_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[4]));
                MR_hl_field(MR_mktag(0), Var_189, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_4));
                MR_hl_field(MR_mktag(0), Var_189, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_189, 3) = ((MR_Box) (Info_8));
              }
              mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_187, (MR_String) ", ", Var_189);
              mercury__io__write_string_3_p_0((MR_String) ");\n");
              switch (IsTailCall_152) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_193 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Integer Var_194 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
                    MR_Unsigned packed_args_8 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                    MR_Unsigned packed_args_9 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

                    ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_193, Context_153, Var_194);
                    mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
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
              packed_args_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              Var_199 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              packed_args_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_199, Context_153, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Results_445 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_446 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));

              if ((Results_445 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word Var_460 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Unsigned packed_args_26 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                MR_Unsigned packed_args_27 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_460, Context_446, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "return;\n");
              }
              else
              {
                MR_Word Rval_447 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_445, (MR_Integer) 0))));
                MR_Word Rvals_448 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_445, (MR_Integer) 1))));
                MR_Word Var_450;
                MR_Word Var_453;
                MR_Box conv5_Var_449;
                MR_Box conv4_STATE_VARIABLE_IO_23_452;
                MR_Unsigned packed_args_28;
                MR_Unsigned packed_args_29;

                {
                  Var_450 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_450, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_13[0]));
                  MR_hl_field(MR_mktag(0), Var_450, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_450, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_450, 3) = ((MR_Box) (Info_8));
                  MR_hl_field(MR_mktag(0), Var_450, 4) = ((MR_Box) (Indent_9));
                }
                mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_450, Rvals_448, ((MR_Box) ((MR_Integer) 2)), &conv5_Var_449, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_23_452);
                packed_args_28 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
                Var_453 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                packed_args_29 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
                ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_453, Context_446, Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "return ");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Rval_447);
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BodyStmt_559 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word HandlerStmt_560 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 3))));
              MR_Word Context_561 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 4))));
              MR_Word LineNumbers_562 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word TryExitMethods0_563;
              MR_Word CatchExitMethods_564;
              MR_Integer Var_571;
              MR_Integer Var_583;
              MR_Integer Var_586;
              MR_Word Var_592;
              MR_Unsigned packed_args_36 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              MR_Unsigned packed_args_37 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "try\n");
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_571 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, Var_571, BodyStmt_559, &TryExitMethods0_563);
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "catch (runtime.Commit commit_variable)\n");
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              Var_583 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Var_583);
              Var_586 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_8, Var_586, HandlerStmt_560, &CatchExitMethods_564);
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(LineNumbers_562, Context_561, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
              Var_592 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), TryExitMethods0_563, ((MR_Box) ((MR_Integer) 3)));
              *ExitMethods_12 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_592, CatchExitMethods_564);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Ref_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));
              MR_Word Var_262 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_267;
              MR_Unsigned packed_args_12 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              MR_Unsigned packed_args_13 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              MR_Unsigned packed_args_14;
              MR_Unsigned packed_args_15;

              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_262, Context_261, Indent_9);
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Ref_260);
              mercury__io__write_string_3_p_0((MR_String) " = new runtime.Commit();\n");
              packed_args_14 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
              Var_267 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              packed_args_15 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_267, Context_261, Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "throw ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_8, Ref_260);
              mercury__io__write_string_3_p_0((MR_String) ";\n");
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStatement_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 1))));
              MR_Word Context_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_11, (MR_Integer) 2))));

              ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0(Info_8, Indent_9, AtomicStatement_54, Context_55);
              *ExitMethods_12 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__4_4,
  MR_Word * ExitMethods_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ExitMethods_5 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
    }
    else
    {
      MR_Word Stmt_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Stmts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word StmtExitMethods_23;

      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_1, Indent_2, Stmt_19, &StmtExitMethods_23);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_23);
      if (succeeded)
      {
        MR_Word StmtsExitMethods_24;
        MR_Word ExitMethods0_25;

        ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_51_93_95_48_7_p_0(Info_1, Indent_2, Stmts_20, &StmtsExitMethods_24);
        ExitMethods0_25 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_23, StmtsExitMethods_24);
        succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtsExitMethods_24);
        if (succeeded)
          *ExitMethods_5 = ExitMethods0_25;
        else
        {
          *ExitMethods_5 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_25, ((MR_Box) ((MR_Integer) 4)));
        }
      }
      else
        *ExitMethods_5 = StmtExitMethods_23;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_case_cond_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Context_9,
  MR_Word Match_10)
{
  if (((MR_tag((MR_Word) Match_10)) == (MR_mktag((MR_Integer) 1))))
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_case_cond_for_csharp\'/6", (MR_String) "cannot match ranges in C# cases");
      return;
    }
  }
  else
  {
    MR_Word Val_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Match_10, (MR_Integer) 0))));
    MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));

    ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_19, Context_9, Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "case ");
    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Val_12);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_call_rval_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word CodeAddr_9;
    MR_Word Const_8;

    if (succeeded)
    {
      Const_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Const_8)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        CodeAddr_9 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
    }
    if (succeeded)
    {
      MR_Word QualFuncLabel_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_9, (MR_Integer) 0))));
      MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_21, (MR_Integer) 0))));
      MR_Word FuncLabel_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_21, (MR_Integer) 1))));
      MR_Word ProcLabel_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_27, (MR_Integer) 0))));
      MR_Word MaybeAux_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_27, (MR_Integer) 1))));
      MR_String MaybeAuxSuffix_30;
      MR_Word PredLabel_46;
      MR_Integer ProcId_47;
      MR_String PredLabelStr_49;
      MR_Integer ModeNum_50;
      MR_String String_51;
      MR_String Var_61;
      MR_String Var_68;
      MR_String Var_70;

      MaybeAuxSuffix_30 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_29);
      ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ModuleName_26, (MR_Integer) 0);
      PredLabel_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_28, (MR_Integer) 0))));
      ProcId_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_28, (MR_Integer) 1))));
      ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(PredLabel_46, &PredLabelStr_49);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_47, &ModeNum_50);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), ModeNum_50, &Var_61);
      Var_68 = mercury__string__f_43_43_2_f_0(Var_61, MaybeAuxSuffix_30);
      Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_68);
      String_51 = mercury__string__f_43_43_2_f_0(PredLabelStr_49, Var_70);
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(String_51);
    }
    else
    {
      if (((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_90)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_90, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_90)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_90, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_target_code_component_for_csharp_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0(
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt_for_csharp\'/6", (MR_String) "gc_check not implemented.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Comment_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicStmt_9, (MR_Integer) 0))));

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
          MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_9, (MR_Integer) 0))));
          MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_9, (MR_Integer) 1))));
          MR_Word Var_101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));

          ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_101, Context_10, Indent_8);
          ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(Info_7, Lval_13);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Rval_14);
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 0)))) {
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
              MR_Word Target_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1))));
              MR_Word ExplicitSecTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 3))));
              MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 4))));
              MR_Word MaybeCtorName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 6))));
              MR_Word ArgRvalsTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 7))));
              MR_Word IsArray_38;
              MR_Word Var_67;
              MR_Word Var_71;
              MR_Integer Var_72;
              MR_Word Var_93;
              MR_Unsigned packed_args_2;
              MR_Unsigned packed_args_3;
              MR_Unsigned packed_args_4;
              MR_Unsigned packed_args_5;
              MR_Word QualifiedCtorId_27;
              MR_Word MerType_28;
              MR_Word CtorCat_30;
              MR_String Var_31;
              MR_Word Var_32;
              MR_Unsigned packed_args_6;
              MR_Unsigned packed_args_7;

              switch (ExplicitSecTag_20) {
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
              packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
              Var_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_67, Context_10, Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "{\n");
              packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
              Var_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
              Var_72 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_71, Context_10, Var_72);
              ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(Info_7, Target_18);
              mercury__io__write_string_3_p_0((MR_String) " = new ");
              succeeded = ((MR_tag((MR_Word) MaybeCtorName_23)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                QualifiedCtorId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorName_23, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) Type_21)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  MerType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 1))));
                  CtorCat_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_21, (MR_Integer) 3))));
                  succeeded = ml_backend__mlds_to_cs__hand_defined_type_for_csharp_4_p_0(MerType_28, CtorCat_30, &Var_31, &Var_32);
                }
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word CtorDefn_35;
                MR_String CtorName_36;
                MR_Integer CtorArity_37;

                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_7, Type_21);
                mercury__io__write_char_3_p_0((MR_Char) 46);
                CtorDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualifiedCtorId_27, (MR_Integer) 2))));
                CtorName_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), CtorDefn_35, (MR_Integer) 0))));
                CtorArity_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorDefn_35, (MR_Integer) 1))));
                ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(CtorName_36, CtorArity_37);
              }
              else
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_7, Type_21);
              IsArray_38 = ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(Type_21);
              switch (IsArray_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) " {");
                    ml_backend__mlds_to_cs__output_init_args_for_csharp_4_p_0(Info_7, ArgRvalsTypes_24);
                    mercury__io__write_string_3_p_0((MR_String) "};\n");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    ml_backend__mlds_to_cs__output_init_args_for_csharp_4_p_0(Info_7, ArgRvalsTypes_24);
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
                  break;
              }
              packed_args_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
              Var_93 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              packed_args_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_93, Context_10, Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "}\n");
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
              MR_Word TargetLang_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 1))));
              MR_Word Components_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_9, (MR_Integer) 2))));

              switch (TargetLang_41) {
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
                    MR_Word Var_54;
                    MR_Box conv0_STATE_VARIABLE_IO_55_55;

                    ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0();
                    {
                      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[3]));
                      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_atomic_stmt_for_csharp_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Info_7));
                    }
                    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, Components_42, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_55_55);
                    ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0();
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
    mercury__io__write_string_3_p_0((MR_String) "#pragma warning restore\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_args_for_csharp_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word ArgRvalType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgRvalsTypes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalType_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_1, ArgRval_13);
      if (!((ArgRvalsTypes_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        mercury__io__write_string_3_p_0((MR_String) ", ");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArgRvalsTypes_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__hand_defined_type_for_csharp_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0))) == (MR_Integer) 0))))
    {
      MR_Word CtorCatSystem_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 1))));

      *SubstituteName_7 = ((&ml_backend__mlds_to_cs_vector_common_10[4 + CtorCatSystem_9]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_0;
      *ArrayDims_8 = ((&ml_backend__mlds_to_cs_vector_common_10[4 + CtorCatSystem_9]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_1;
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0))) == (MR_Integer) 1))))
    {
      MR_Word CtorCatUser_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 1))));
      MR_Word Var_17;

      succeeded = (CtorCatUser_10 == (MR_Integer) 4);
      if (succeeded)
      {
        Var_17 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_17);
        if (succeeded)
        {
          *SubstituteName_7 = (MR_String) "runtime.TypeInfo_Struct";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_18;

          Var_18 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_18);
          if (succeeded)
          {
            *SubstituteName_7 = (MR_String) "runtime.PseudoTypeInfo";
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_19;

            Var_19 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_19);
            if (succeeded)
            {
              *SubstituteName_7 = (MR_String) "runtime.TypeCtorInfo_Struct";
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
ml_backend__mlds_to_cs__output_unqual_class_name_for_csharp_4_p_0(
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
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(String_8);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__while_exit_methods_for_csharp_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Cond_4)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word ExitMethods_6;
    MR_Word ExitMethods0_7;
    MR_Word Var_8;
    MR_Word TypeCtorInfo_17_17;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_9 = (MR_Integer) 0;
        TypeCtorInfo_17_17 = (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_17_17, ((MR_Box) (Var_9)), BlockExitMethods_5);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      ExitMethods0_7 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    }
    else
    {
      ExitMethods0_7 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
    }
    ExitMethods_6 = mercury__set__delete_list_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_7, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[19])));
    return ExitMethods_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Argument_6;
    MR_Integer conv0_HeadVar__4_4;

    ml_backend__mlds_to_cs__make_out_param_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Argument_6, ((MR_Integer) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_Argument_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncName_10,
  MR_Word OutputAux_11,
  MR_Word Signature_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) OutputAux_11)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Parameters_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_12, (MR_Integer) 0))));
    MR_Word RetTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_12, (MR_Integer) 1))));
    MR_Word OutParams_18;
    MR_Word Var_31;
    MR_String ClassName_16;
    MR_Integer ClassArity_17;
    MR_String Var_23;

    if (succeeded)
    {
      ClassName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), OutputAux_11, (MR_Integer) 0))));
      ClassArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), OutputAux_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) FuncName_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), FuncName_10, (MR_Integer) 0))));
        succeeded = (strcmp(Var_23, (MR_String) "<constructor>") == 0);
      }
    }
    if (succeeded)
    {
      MR_String Str_46;
      MR_String MangledName_54;
      MR_String UppercaseMangledName_55;
      MR_String Var_56;
      MR_String Var_58;

      MangledName_54 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_16);
      UppercaseMangledName_55 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_54);
      Var_58 = mercury__string__from_int_1_f_0(ClassArity_17);
      Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_58);
      Str_46 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_55, Var_56);
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(Str_46);
      OutParams_18 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    else
    {
      MR_Word RestRetTypes_19;
      MR_Box conv2_Var_20;

      if ((RetTypes_15 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "void");
        RestRetTypes_19 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      }
      else
      {
        MR_Word RetType_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_15, (MR_Integer) 0))));
        MR_String String_82;
        MR_Word ArrayDims_83;
        MR_Word Var_85;

        RestRetTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_15, (MR_Integer) 1))));
        ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_8, RetType_65, &String_82, &ArrayDims_83);
        mercury__io__write_string_3_p_0(String_82);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_83, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_85);
      }
      mercury__io__write_char_3_p_0((MR_Char) 32);
      ml_backend__mlds_to_cs__output_function_name_for_csharp_3_p_0(FuncName_10);
      mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[9]), RestRetTypes_19, &OutParams_18, ((MR_Box) ((MR_Integer) 2)), &conv2_Var_20);
    }
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_14, OutParams_18);
    ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(Info_8, Indent_9, Var_31);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_function_name_for_csharp_3_p_0(
  MR_Word FunctionName_4)
{
  {
    MR_String FunctionNameStr_6;

    if (((MR_tag((MR_Word) FunctionName_4)) == (MR_mktag((MR_Integer) 1))))
      FunctionNameStr_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctionName_4, (MR_Integer) 0))));
    else
    {
      MR_Word PlainFuncName_12 = (MR_Word) (MR_body((MR_Word) (FunctionName_4), (MR_Integer) 0));
      MR_Word FuncLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_12, (MR_Integer) 0))));
      MR_Word ProcLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_13, (MR_Integer) 0))));
      MR_Word MaybeAux_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_13, (MR_Integer) 1))));
      MR_Word PredLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_15, (MR_Integer) 0))));
      MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_15, (MR_Integer) 1))));
      MR_String PredLabelStr_19;
      MR_Integer ModeNum_20;
      MR_String MaybeAuxSuffix_21;
      MR_String Var_31;
      MR_String Var_38;
      MR_String Var_40;

      ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(PredLabel_17, &PredLabelStr_19);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_18, &ModeNum_20);
      MaybeAuxSuffix_21 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_16);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), ModeNum_20, &Var_31);
      Var_38 = mercury__string__f_43_43_2_f_0(Var_31, MaybeAuxSuffix_21);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
      FunctionNameStr_6 = mercury__string__f_43_43_2_f_0(PredLabelStr_19, Var_40);
    }
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(FunctionNameStr_6);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10)
{
  {
    MR_Word FieldVarName_12;
    MR_Word Flags_14;
    MR_Word Type_15;
    MR_Word Initializer_16;
    MR_Word Var_32;
    MR_Word Var_36;
    MR_String String_73;
    MR_Word ArrayDims_74;
    MR_Word Var_76;
    MR_String VarNameStr_83;
    MR_String RawString_87;
    MR_String MangledString_88;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    FieldVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 0))));
    Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 2))));
    Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 3))));
    Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 4))));
    mercury__io__write_string_3_p_0((MR_String) "public ");
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 1))));
    switch (Var_32) {
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
    switch (Var_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "readonly ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, Type_15, &String_73, &ArrayDims_74);
    mercury__io__write_string_3_p_0(String_73);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_74, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_76);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    RawString_87 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_12);
    MangledString_88 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_87);
    VarNameStr_83 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_88);
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_83);
    ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(Info_7, OutputAux_9, Type_15, Initializer_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word LocalVarDefn_10)
{
  {
    MR_Word LocalVarName_12;
    MR_Word Type_14;
    MR_Word Initializer_15;
    MR_String String_47;
    MR_Word ArrayDims_48;
    MR_Word Var_50;
    MR_String VarNameStr_57;
    MR_String RawString_61;
    MR_String MangledString_62;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    LocalVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 0))));
    Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 2))));
    Initializer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 3))));
    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, Type_14, &String_47, &ArrayDims_48);
    mercury__io__write_string_3_p_0(String_47);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_48, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_50);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    RawString_61 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_12);
    MangledString_62 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_61);
    VarNameStr_57 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_62);
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_57);
    ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(Info_7, OutputAux_9, Type_14, Initializer_15);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word GlobalVarDefn_10)
{
  {
    MR_Word GlobalVarName_12;
    MR_Word Flags_14;
    MR_Word Type_15;
    MR_Word Initializer_16;
    MR_Word Access_31;
    MR_Word Constness_32;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    GlobalVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 0))));
    Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 2))));
    Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 3))));
    Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 4))));
    Access_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))));
    Constness_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 1))));
    switch (Access_31) {
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
    switch (Constness_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "readonly ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(Info_7, GlobalVarName_12, Type_15);
    ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(Info_7, OutputAux_9, Type_15, Initializer_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_var_definition_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String EnvVarName_6)
{
  {
    MR_Integer Var_16;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "private static int mercury_envvar_");
    mercury__io__write_string_3_p_0(EnvVarName_6);
    mercury__io__write_string_3_p_0((MR_String) " =\n");
    Var_16 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_16);
    mercury__io__write_string_3_p_0((MR_String) "System.Environment.GetEnvironmentVariable(\"");
    mercury__io__write_string_3_p_0(EnvVarName_6);
    mercury__io__write_string_3_p_0((MR_String) "\") == null \? 0 : 1;\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word CodeAddr_9,
  MR_String Name_10)
{
  {
    MR_Word Signature_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_9, (MR_Integer) 1))));
    MR_Word ArgTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_13, (MR_Integer) 0))));
    MR_Word RetTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_13, (MR_Integer) 1))));
    MR_String TypeString_16;
    MR_Word QualFuncLabel_44;
    MR_Word Signature_45;
    MR_Word ArgTypes_46;
    MR_Word RetTypes_47;
    MR_String TypeString_48;
    MR_Word ModuleName_49;
    MR_Word FuncLabel_50;
    MR_Word ProcLabel_51;
    MR_Word MaybeAux_52;
    MR_String MaybeAuxSuffix_53;
    MR_Word PredLabel_69;
    MR_Integer ProcId_70;
    MR_String PredLabelStr_72;
    MR_Integer ModeNum_73;
    MR_String String_74;
    MR_String Var_84;
    MR_String Var_91;
    MR_String Var_93;

    TypeString_16 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(Info_7, ArgTypes_14, RetTypes_15);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "private static readonly ");
    mercury__io__write_string_3_p_0(TypeString_16);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(Name_10);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    QualFuncLabel_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_9, (MR_Integer) 0))));
    Signature_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_9, (MR_Integer) 1))));
    ArgTypes_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_45, (MR_Integer) 0))));
    RetTypes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_45, (MR_Integer) 1))));
    TypeString_48 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(Info_7, ArgTypes_46, RetTypes_47);
    mercury__io__write_string_3_p_0((MR_String) "(");
    mercury__io__write_string_3_p_0(TypeString_48);
    mercury__io__write_string_3_p_0((MR_String) ") ");
    ModuleName_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_44, (MR_Integer) 0))));
    FuncLabel_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_44, (MR_Integer) 1))));
    ProcLabel_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_50, (MR_Integer) 0))));
    MaybeAux_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_50, (MR_Integer) 1))));
    MaybeAuxSuffix_53 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_52);
    ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ModuleName_49, (MR_Integer) 0);
    PredLabel_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_51, (MR_Integer) 0))));
    ProcId_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_51, (MR_Integer) 1))));
    ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(PredLabel_69, &PredLabelStr_72);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_70, &ModeNum_73);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), ModeNum_73, &Var_84);
    Var_91 = mercury__string__f_43_43_2_f_0(Var_84, MaybeAuxSuffix_53);
    Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_91);
    String_74 = mercury__string__f_43_43_2_f_0(PredLabelStr_72, Var_93);
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(String_74);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word MLDS_Type_9,
  MR_Word ExportedConstant_10)
{
  {
    MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 0))));
    MR_Word Initializer_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedConstant_10, (MR_Integer) 1))));
    MR_String String_42;
    MR_Word ArrayDims_43;
    MR_Word Var_45;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "public static readonly ");
    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, MLDS_Type_9, &String_42, &ArrayDims_43);
    mercury__io__write_string_3_p_0(String_42);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_43, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_45);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(Name_12);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(Info_7, Initializer_13, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_exported_enum_constant_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnum_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 0))));
    MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 2))));
    MR_Word ExportedConstants_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 3))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassName_14;
          MR_Integer ClassArity_15;
          MR_Word ClassId_16;
          MR_Word MLDS_Type_17;
          MR_Word Var_21;
          MR_Box conv0_STATE_VARIABLE_IO_19;

          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_12, &ClassName_14, &ClassArity_15);
          {
            ClassId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_16, 0) = ((MR_Box) (ClassName_14));
            MR_hl_field(MR_mktag(0), ClassId_16, 1) = ((MR_Box) (ClassArity_15));
            MR_hl_field(MR_mktag(0), ClassId_16, 2) = ((MR_Box) ((MR_Integer) 3));
          }
          MLDS_Type_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_16)));
          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[5]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_6));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Indent_7));
            MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (MLDS_Type_17));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ExportedConstants_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
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
  MR_Word Arg_4)
{
  {
    MR_bool succeeded;
    MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 0))));
    MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 1))));
    MR_String VarNameStr_19;
    MR_String RawString_23;
    MR_String MangledString_24;

    succeeded = ((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 6)));
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "out ");
    }
    RawString_23 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(Name_6);
    MangledString_24 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_23);
    VarNameStr_19 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_24);
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_19);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Type_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 6)));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs__is_out_argument_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export_for_csharp__324__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Export_8)
{
  {
    MR_bool succeeded;
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 0))));
    MR_String ExportName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 1))));
    MR_Word MLDS_Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 2))));
    MR_Word MLDS_Signature_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_8, (MR_Integer) 3))));
    MR_Word Parameters_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 0))));
    MR_Word ReturnTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_13, (MR_Integer) 1))));
    MR_Word OutArgs_22;
    MR_Word InArgs_23;
    MR_Word RestOutArgs_24;
    MR_Word Var_33;
    MR_Integer Var_52;
    MR_Integer Var_59;
    MR_Word Var_71;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Lang_10));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_export_for_csharp\'/5", (MR_String) "foreign_export for language other than C#.");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "public static ");
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    if ((ReturnTypes_17 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
    else
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 1))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));

      if ((Var_79 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, Var_80);
        mercury__io__write_string_3_p_0((MR_String) " ");
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_export_for_csharp\'/5", (MR_String) "multiple return values in export method");
          return;
        }
      }
    }
    mercury__io__write_string_3_p_0(ExportName_11);
    Var_52 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(Info_6, Var_52, Parameters_16);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_59 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_59);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[8]), Parameters_16, &OutArgs_22, &InArgs_23);
    if ((ReturnTypes_17 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((OutArgs_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        RestOutArgs_24 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      else
      {
        MR_Word FirstOutArg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutArgs_22, (MR_Integer) 0))));
        MR_Word FirstOutArgName_26;
        MR_String VarNameStr_85;
        MR_String RawString_89;
        MR_String MangledString_90;

        RestOutArgs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutArgs_22, (MR_Integer) 1))));
        FirstOutArgName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstOutArg_25, (MR_Integer) 0))));
        RawString_89 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(FirstOutArgName_26);
        MangledString_90 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_89);
        VarNameStr_85 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_90);
        ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_85);
        mercury__io__write_string_3_p_0((MR_String) " = ");
      }
    else
    {
      MR_Word RetTypeB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_17, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "return (");
      ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, RetTypeB_29);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      RestOutArgs_24 = OutArgs_22;
    }
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), InArgs_23, RestOutArgs_24);
    ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0(MLDS_Name_12, Var_71);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_param_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Parameters_8)
{
  {
    mercury__io__write_char_3_p_0((MR_Char) 40);
    if (!((Parameters_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Var_18;
      MR_Integer Var_20;

      mercury__io__nl_2_p_0();
      Var_20 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[7]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_params_for_csharp_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Var_20));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_8, (MR_String) ",\n", Var_18);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__write_argument_name_for_csharp_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_for_csharp_4_p_0(
  MR_Word QualFuncName_5,
  MR_Word Parameters_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 0))));
    MR_Word FuncName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_5, (MR_Integer) 1))));
    MR_String FunctionNameStr_30;

    ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ModuleName_8, (MR_Integer) 0);
    if (((MR_tag((MR_Word) FuncName_9)) == (MR_mktag((MR_Integer) 1))))
      FunctionNameStr_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), FuncName_9, (MR_Integer) 0))));
    else
    {
      MR_Word PlainFuncName_34 = (MR_Word) (MR_body((MR_Word) (FuncName_9), (MR_Integer) 0));
      MR_Word FuncLabel_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_34, (MR_Integer) 0))));
      MR_Word ProcLabel_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_35, (MR_Integer) 0))));
      MR_Word MaybeAux_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_35, (MR_Integer) 1))));
      MR_Word PredLabel_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_37, (MR_Integer) 0))));
      MR_Integer ProcId_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_37, (MR_Integer) 1))));
      MR_String PredLabelStr_41;
      MR_Integer ModeNum_42;
      MR_String MaybeAuxSuffix_43;
      MR_String Var_53;
      MR_String Var_60;
      MR_String Var_62;

      ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(PredLabel_39, &PredLabelStr_41);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_40, &ModeNum_42);
      MaybeAuxSuffix_43 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_38);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), ModeNum_42, &Var_53);
      Var_60 = mercury__string__f_43_43_2_f_0(Var_53, MaybeAuxSuffix_43);
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_60);
      FunctionNameStr_30 = mercury__string__f_43_43_2_f_0(PredLabelStr_41, Var_62);
    }
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(FunctionNameStr_30);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_6, (MR_String) ", ", (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[7]));
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__pred_label_to_string_for_csharp_2_p_0(
  MR_Word PredLabel_3,
  MR_String * String_4)
{
  if (((MR_tag((MR_Word) PredLabel_3)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String PredName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 1))));
    MR_String TypeName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 2))));
    MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 3))));
    MR_String MangledPredName_20;
    MR_String MangledTypeName_21;

    MangledPredName_20 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PredName_16);
    MangledTypeName_21 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_18);
    if ((MaybeTypeModule_17 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_String Var_103;
      MR_String Var_111;
      MR_String Var_112;
      MR_String Var_114;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeArity_19, &Var_103);
      Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_103);
      Var_112 = mercury__string__f_43_43_2_f_0(MangledTypeName_21, Var_111);
      Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_112);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledPredName_20, Var_114);
    }
    else
    {
      MR_Word TypeModule_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_17, (MR_Integer) 0))));
      MR_String TypeModuleStr_23;
      MR_String Var_88;
      MR_String Var_96;
      MR_String Var_97;
      MR_String Var_99;
      MR_String Var_100;
      MR_String Var_102;

      TypeModuleStr_23 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_22);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeArity_19, &Var_88);
      Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_88);
      Var_97 = mercury__string__f_43_43_2_f_0(MangledTypeName_21, Var_96);
      Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_97);
      Var_100 = mercury__string__f_43_43_2_f_0(MangledPredName_20, Var_99);
      Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_100);
      *String_4 = mercury__string__f_43_43_2_f_0(TypeModuleStr_23, Var_102);
    }
  }
  else
  {
    MR_Word PredOrFunc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 0))));
    MR_Word MaybeDefiningModule_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 1))));
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 2))));
    MR_Integer PredArity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 3))));
    MR_String Suffix_11;
    MR_Integer OrigArity_12;
    MR_String MangledName_13;

    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_11 = (MR_String) "f";
          OrigArity_12 = (MR_Integer) ((MR_Unsigned) PredArity_8 - (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_11 = (MR_String) "p";
          OrigArity_12 = PredArity_8;
        }
        break;
    }
    MangledName_13 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
    if ((MaybeDefiningModule_6 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_String Var_77;
      MR_String Var_78;
      MR_String Var_85;
      MR_String Var_87;

      Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_11);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), OrigArity_12, &Var_78);
      Var_85 = mercury__string__f_43_43_2_f_0(Var_78, Var_77);
      Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_85);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledName_13, Var_87);
    }
    else
    {
      MR_Word DefiningModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_6, (MR_Integer) 0))));
      MR_String DefiningModuleStr_15;
      MR_String Var_62;
      MR_String Var_63;
      MR_String Var_65;
      MR_String Var_66;
      MR_String Var_73;
      MR_String Var_75;

      DefiningModuleStr_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_14);
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", DefiningModuleStr_15);
      Var_63 = mercury__string__f_43_43_2_f_0(Suffix_11, Var_62);
      Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_63);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), OrigArity_12, &Var_66);
      Var_73 = mercury__string__f_43_43_2_f_0(Var_66, Var_65);
      Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_73);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledName_13, Var_75);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ForeignBodyCode_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 0))));
    MR_Word LiteralOrInclude_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 2))));

    switch (Lang_10) {
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
          MR_Word Var_38;
          MR_String Var_80 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3))));
          MR_Word Var_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          MR_Unsigned packed_args_4;
          MR_Unsigned packed_args_5;

          if (((MR_tag((MR_Word) LiteralOrInclude_11)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String IncludeFileName_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_11, (MR_Integer) 0))));
            MR_String IncludePath_28;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Unsigned packed_args_2;
            MR_Unsigned packed_args_3;

            parse_tree__file_names__make_include_file_path_3_p_0(Var_80, IncludeFileName_26, &IncludePath_28);
            packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
            Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
            {
              Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (IncludePath_28));
              MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            ml_backend__mlds_to_cs__cs_output_context_4_p_0(Var_29, Var_30);
            libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_28);
          }
          else
          {
            MR_String Code_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_11, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_82, Context_12, Indent_7);
            mercury__io__write_string_3_p_0(Code_25);
          }
          mercury__io__nl_2_p_0();
          packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          switch (Var_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "#line default\n");
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
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word DeclCode_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 0))));
    MR_Word LiteralOrInclude_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 2))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 3))));

    switch (Lang_10) {
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
          MR_Word Var_39;
          MR_String Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3))));
          MR_Word Var_83 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          MR_Unsigned packed_args_4;
          MR_Unsigned packed_args_5;

          if (((MR_tag((MR_Word) LiteralOrInclude_12)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String IncludeFileName_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_12, (MR_Integer) 0))));
            MR_String IncludePath_29;
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Unsigned packed_args_2;
            MR_Unsigned packed_args_3;

            parse_tree__file_names__make_include_file_path_3_p_0(Var_81, IncludeFileName_27, &IncludePath_29);
            packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
            Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (IncludePath_29));
              MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            ml_backend__mlds_to_cs__cs_output_context_4_p_0(Var_30, Var_31);
            libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_29);
          }
          else
          {
            MR_String Code_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_12, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__indent_line_after_context_5_p_0(Var_83, Context_13, Indent_7);
            mercury__io__write_string_3_p_0(Code_26);
          }
          mercury__io__nl_2_p_0();
          packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          switch (Var_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "#line default\n");
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
  MR_Word OutputLineNumbers_6,
  MR_Word Context_7,
  MR_Integer N_8)
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
          MR_String File_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_7, (MR_Integer) 0))));
          MR_Integer Line_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_7, (MR_Integer) 1))));

          succeeded = (Line_20 > (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (strcmp(File_19, (MR_String) "") == 0);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_String Var_32;

            mercury__io__write_string_3_p_0((MR_String) "#line ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), Line_20, &Var_32);
            mercury__io__write_string_3_p_0(Var_32);
            mercury__io__write_string_3_p_0((MR_String) " \"");
            mercury__io__write_string_3_p_0(File_19);
            mercury__io__write_string_3_p_0((MR_String) "\"\n");
          }
        }
        break;
    }
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(N_8);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__cs_output_context_4_p_0(
  MR_Word OutputLineNumbers_5,
  MR_Word Context_6)
{
  {
    MR_bool succeeded;

    switch (OutputLineNumbers_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String File_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_6, (MR_Integer) 0))));
          MR_Integer Line_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_6, (MR_Integer) 1))));

          succeeded = (Line_9 > (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (strcmp(File_8, (MR_String) "") == 0);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_String Var_23;

            mercury__io__write_string_3_p_0((MR_String) "#line ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), Line_9, &Var_23);
            mercury__io__write_string_3_p_0(Var_23);
            mercury__io__write_string_3_p_0((MR_String) " \"");
            mercury__io__write_string_3_p_0(File_8);
            mercury__io__write_string_3_p_0((MR_String) "\"\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_env_var_definition_for_csharp_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_class_defn_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_function_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_global_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_58;

    conv0_LambdaHeadVar__2_58 = ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__130__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_58));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 0))));
    MR_Word GlobalData_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 2))));
    MR_Word TypeDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 3))));
    MR_Word TableStructDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 4))));
    MR_Word ProcDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5))));
    MR_Word InitPreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 6))));
    MR_Word FinalPreds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 7))));
    MR_Word AllForeignCode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 8))));
    MR_Word ExportedEnums_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 9))));
    MR_Word ScalarCellGroupMap_20;
    MR_Word VectorCellGroupMap_21;
    MR_Word RttiDefns_23;
    MR_Word CellDefns_24;
    MR_Word ClosureWrapperFuncDefns_25;
    MR_Word ScalarCellGroups_27;
    MR_Word ScalarCellRows_28;
    MR_Word RevSeqNumCodeAddrs_32;
    MR_Word CodeAddrs_33;
    MR_Word ForeignCode_34;
    MR_Word ForeignDeclCodes_35;
    MR_Word ForeignBodyCodes_36;
    MR_Word ExportDefns_38;
    MR_Word Globals_39;
    MR_String SourceFileName_40;
    MR_Word Info_41;
    MR_Word SortedFuncDefns_42;
    MR_Word SortedClassDefns_43;
    MR_Word EnvVarNamesSet0_44;
    MR_Word EnvVarNamesSet1_45;
    MR_Word EnvVarNamesSet_46;
    MR_Word StaticCtorCalls_47;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_50_50;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_51_51;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_52_52;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_53_53;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_54_54;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_55_55;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_60_60;
    MR_Word Var_61;
    MR_Word Var_65;
    MR_Word Var_70;
    MR_Integer Var_72;
    MR_Integer Var_75;
    MR_Integer Var_80;
    MR_Integer Var_83;
    MR_Integer Var_86;
    MR_Word Var_87;
    MR_Integer Var_92;
    MR_Integer Var_97;
    MR_Integer Var_102;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Integer Var_110;
    MR_Word Var_115;
    MR_Integer Var_117;
    MR_Integer Var_121;
    MR_Integer Var_126;
    MR_Word Var_133;
    MR_Integer Var_135;
    MR_Word Var_138;
    MR_Word Var_140;
    MR_Word Var_142;
    MR_Integer Var_144;
    MR_Word _AllocIdMap_22;
    MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60;
    MR_Box conv3_STATE_VARIABLE_IO_71_71;
    MR_Box conv4_STATE_VARIABLE_IO_109_109;
    MR_Box conv5_STATE_VARIABLE_IO_116_116;
    MR_Box conv7_EnvVarNamesSet1_45;
    MR_Box conv9_EnvVarNamesSet_46;
    MR_Box conv10_STATE_VARIABLE_IO_134_134;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_12, &ScalarCellGroupMap_20, &VectorCellGroupMap_21, &_AllocIdMap_22, &RttiDefns_23, &CellDefns_24, &ClosureWrapperFuncDefns_25);
    STATE_VARIABLE_CodeAddrsInConsts_50_50 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns_23, STATE_VARIABLE_CodeAddrsInConsts_50_50, &STATE_VARIABLE_CodeAddrsInConsts_51_51);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns_24, STATE_VARIABLE_CodeAddrsInConsts_51_51, &STATE_VARIABLE_CodeAddrsInConsts_52_52);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns_14, STATE_VARIABLE_CodeAddrsInConsts_52_52, &STATE_VARIABLE_CodeAddrsInConsts_53_53);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns_25, STATE_VARIABLE_CodeAddrsInConsts_53_53, &STATE_VARIABLE_CodeAddrsInConsts_54_54);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns_15, STATE_VARIABLE_CodeAddrsInConsts_54_54, &STATE_VARIABLE_CodeAddrsInConsts_55_55);
    mercury__map__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_20, &ScalarCellGroups_27);
    ScalarCellRows_28 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[3]), ScalarCellGroups_27);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[4]), ScalarCellRows_28, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_55_55)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60);
    STATE_VARIABLE_CodeAddrsInConsts_60_60 = ((MR_Word) (conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60));
    RevSeqNumCodeAddrs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_60_60, (MR_Integer) 2))));
    Var_61 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    ml_backend__mlds_to_cs__make_code_addr_map_for_csharp_3_p_0(RevSeqNumCodeAddrs_32, Var_61, &CodeAddrs_33);
    ForeignCode_34 = ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(AllForeignCode_18);
    ForeignDeclCodes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_34, (MR_Integer) 0))));
    ForeignBodyCodes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_34, (MR_Integer) 1))));
    ExportDefns_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_34, (MR_Integer) 3))));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_39);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_39, ModuleName_10, &SourceFileName_40);
    Info_41 = ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(ModuleInfo_6, SourceFileName_40, CodeAddrs_33);
    ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_41, Indent_7, ModuleName_10, ForeignDeclCodes_35, ProcDefns_15);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Indent_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodes_36, (MR_String) "\n", Var_65);
    ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "\n// RttiDefns\n");
    Var_72 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), Var_70, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, RttiDefns_23, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_71_71);
    Var_75 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0(Info_41, Var_75, RttiDefns_23);
    mercury__io__write_string_3_p_0((MR_String) "\n// Cell and tabling definitions\n");
    Var_80 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(Info_41, Var_80, CellDefns_24);
    Var_83 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(Info_41, Var_83, TableStructDefns_14);
    Var_86 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_24, TableStructDefns_14);
    ml_backend__mlds_to_cs__output_init_global_var_method_for_csharp_5_p_0(Info_41, Var_86, Var_87);
    mercury__io__write_string_3_p_0((MR_String) "\n// Scalar common data\n");
    Var_92 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0(Info_41, Var_92, ScalarCellGroupMap_20);
    mercury__io__write_string_3_p_0((MR_String) "\n// Vector common data\n");
    Var_97 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0(Info_41, Var_97, VectorCellGroupMap_21);
    mercury__io__write_string_3_p_0((MR_String) "\n// Method pointers\n");
    Var_102 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(Info_41, Var_102, CodeAddrs_33);
    mercury__io__write_string_3_p_0((MR_String) "\n// Function definitions\n");
    Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_25, ProcDefns_15);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_107, &SortedFuncDefns_42);
    Var_110 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), Var_108, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, SortedFuncDefns_42, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_109_109);
    mercury__io__write_string_3_p_0((MR_String) "\n// Class definitions\n");
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), TypeDefns_13, &SortedClassDefns_43);
    Var_117 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) (Var_117));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, SortedClassDefns_43, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_116_116);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportDefns\n");
    Var_121 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0(Info_41, Var_121, ExportDefns_38);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportedEnums\n");
    Var_126 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0(Info_41, Var_126, ExportedEnums_19);
    mercury__io__write_string_3_p_0((MR_String) "\n// EnvVarNames\n");
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNamesSet0_44);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[5]), ProcDefns_15, ((MR_Box) (EnvVarNamesSet0_44)), &conv7_EnvVarNamesSet1_45);
    EnvVarNamesSet1_45 = ((MR_Word) (conv7_EnvVarNamesSet1_45));
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[6]), ClosureWrapperFuncDefns_25, ((MR_Box) (EnvVarNamesSet1_45)), &conv9_EnvVarNamesSet_46);
    EnvVarNamesSet_46 = ((MR_Word) (conv9_EnvVarNamesSet_46));
    Var_135 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_133, 3) = ((MR_Box) (Var_135));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_133, EnvVarNamesSet_46, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_134_134);
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "MR_init_vector_common_data"));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (InitPreds_16));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_String) "MR_init_scalar_common_data"));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) ((MR_String) "MR_init_data"));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
    }
    {
      StaticCtorCalls_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StaticCtorCalls_47, 0) = ((MR_Box) ((MR_String) "MR_init_rtti"));
      MR_hl_field(MR_mktag(1), StaticCtorCalls_47, 1) = ((MR_Box) (Var_138));
    }
    Var_144 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_static_constructor_6_p_0(ModuleName_10, Var_144, StaticCtorCalls_47, FinalPreds_17);
    ml_backend__mlds_to_cs__output_src_end_for_csharp_4_p_0(Indent_7, ModuleName_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word MercuryModuleName_11,
  MR_Word ForeignDecls_13,
  MR_Word Defns_14)
{
  {
    MR_bool succeeded;
    MR_String ClassName_16;
    MR_String Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3))));
    MR_Word Var_31;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)));

    ml_backend__mlds_to_target_util__output_auto_gen_comment_3_p_0(Var_19);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "/* :- module ");
    parse_tree__prog_out__write_sym_name_3_p_0(MercuryModuleName_11);
    mercury__io__write_string_3_p_0((MR_String) ". */\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "namespace mercury {\n\n");
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Info_9));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (Indent_10));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDecls_13, (MR_String) "\n", Var_31);
    mercury__io__write_string_3_p_0((MR_String) "public static class ");
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(MercuryModuleName_11, (MR_Integer) 0, (MR_String) "__", &ClassName_16);
    mercury__io__write_string_3_p_0(ClassName_16);
    mercury__io__write_string_3_p_0((MR_String) " {\n");
    succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(Defns_14);
    if (succeeded)
    {
      MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) (MR_Integer) 1);

      ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0(Var_40, ClassName_16);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_target_util__write_indented_line_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6)
{
  {
    MR_Word Body_8;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_String Var_23;
    MR_String Var_25;
    MR_Word Var_50;
    MR_Integer Var_52;
    MR_Box conv0_STATE_VARIABLE_IO_51_51;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "public static void Main");
    mercury__io__write_string_3_p_0((MR_String) "(string[] args)\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_25 = mercury__string__f_43_43_2_f_0(ClassName_6, (MR_String) ".main_2_p_0();");
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "   ", Var_25);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[17])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "   library.ML_std_library_init();"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Body_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_8, 0) = ((MR_Box) ((MR_String) "try {"));
      MR_hl_field(MR_mktag(1), Body_8, 1) = ((MR_Box) (Var_20));
    }
    Var_52 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ml_backend__mlds_to_cs__write_main_driver_for_csharp_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Var_52));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, Body_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_51_51);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(
  MR_Word ModuleInfo_5,
  MR_String SourceFileName_6,
  MR_Word CodeAddrs_7)
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
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 154, &AutoComments_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 151, &LineNumbers_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 152, &ForeignLineNumbers_12);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_13);
    MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_13);
    {
      Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_8, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Info_8, 1) = (MR_Box) (((MR_Unsigned) (((MR_Box) (AutoComments_10))) | (((((MR_Unsigned) (((MR_Box) (LineNumbers_11))) << (MR_Integer) 1)) | (((MR_Unsigned) (((MR_Box) (ForeignLineNumbers_12))) << (MR_Integer) 2))))));
      MR_hl_field(MR_mktag(0), Info_8, 2) = ((MR_Box) (MLDS_ModuleName_14));
      MR_hl_field(MR_mktag(0), Info_8, 3) = ((MR_Box) (SourceFileName_6));
      MR_hl_field(MR_mktag(0), Info_8, 4) = ((MR_Box) (CodeAddrs_7));
      MR_hl_field(MR_mktag(0), Info_8, 5) = (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 1))) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), Info_8, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return Info_8;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "#pragma warning disable 162, 168, 169, 219, 1717\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_rtti_defns_assignments_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Defns_8)
{
  {
    MR_Word OrderedDefns_10;
    MR_Word Var_16;
    MR_Integer Var_18;
    MR_Box conv0_STATE_VARIABLE_IO_17_17;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "static void MR_init_rtti() {\n");
    OrderedDefns_10 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(Defns_8);
    Var_18 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_assignments_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Var_18));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, OrderedDefns_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_vector_cell_init_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_vector_cell_decl_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word VectorCellGroupMap_8)
{
  {
    MR_Word Var_12;
    MR_Word Var_17;
    MR_Integer Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_13_13;
    MR_Box conv1_STATE_VARIABLE_IO_18_18;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_vector_common_data() {\n");
    Var_19 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_common_data_for_csharp_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Var_19));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18_18);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_scalar_init_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_1(
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

    ml_backend__mlds_to_cs__output_scalar_defns_for_csharp_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Graph_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Map_31);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Graph_29));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Map_31));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ScalarCellGroupMap_8)
{
  {
    MR_bool succeeded;
    MR_Word Graph_10;
    MR_Word Map_11;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv4_Graph_10;
    MR_Box conv3_Map_11;
    MR_Box conv2_STATE_VARIABLE_IO_19_19;
    MR_Word SortedScalars0_12;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Indent_7));
    }
    Var_17 = mercury__digraph__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0));
    Var_18 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
    mercury__map__foldl3_8_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, ScalarCellGroupMap_8, ((MR_Box) (Var_17)), &conv4_Graph_10, ((MR_Box) (Var_18)), &conv3_Map_11, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19_19);
    Graph_10 = ((MR_Word) (conv4_Graph_10));
    Map_11 = ((MR_Word) (conv3_Map_11));
    succeeded = mercury__digraph__tsort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), Graph_10, &SortedScalars0_12);
    if (succeeded)
    {
      MR_Word SortedScalars_13;
      MR_Word Var_23;
      MR_Integer Var_25;
      MR_Box conv5_STATE_VARIABLE_IO_24_24;

      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_scalar_common_data() {\n");
      mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), SortedScalars0_12, &SortedScalars_13);
      Var_25 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_common_data_for_csharp_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Map_11));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, SortedScalars_13, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_24_24);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
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
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8)
{
  {
    MR_Integer Var_15;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_data() {\n");
    Var_15 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs__output_init_global_var_statements_for_csharp_5_p_0(Info_6, Var_15, GlobalVarDefns_8);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_global_var_statements_for_csharp_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word GlobalVarDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word GlobalVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 0))));
      MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 3))));
      MR_Word Initializer_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 4))));
      MR_String DataNameStr_35;
      MR_Word next_value_of_HeadVar__3_3;

      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_2);
      switch (MR_tag((MR_Word) GlobalVarName_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DataNameStr_35 = (MR_String) "dummy_var";
          break;
        case (MR_Integer) 1:
          {
            MR_Word RttiId_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_16, (MR_Integer) 0))));

            backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_41, &DataNameStr_35);
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ConstVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GlobalVarName_16, (MR_Integer) 0))));
            MR_Integer Num_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_16, (MR_Integer) 1))));

            DataNameStr_35 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_39, Num_40);
          }
          break;
      }
      ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(DataNameStr_35);
      ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(Info_1, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), Type_19, Initializer_20);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = GlobalVarDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_for_csharp_6_p_0(
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
                switch (MR_tag((MR_Word) Type_9)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Type_9)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                        Var_24 = (MR_String) "null";
                        break;
                      case (MR_Integer) 1:
                        Var_24 = (MR_String) "false";
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 4:
                        Var_24 = (MR_String) "0";
                        break;
                      case (MR_Integer) 3:
                        Var_24 = (MR_String) "0U";
                        break;
                      case (MR_Integer) 5:
                        Var_24 = (MR_String) "\'\\u0000\'";
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
                  case (MR_Integer) 2:
                    Var_24 = (MR_String) "null";
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word CtorCat_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 3))));

                          switch (MR_tag((MR_Word) CtorCat_37)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(CtorCat_37)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 1:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    MR_String TypeString_41;
                                    MR_String Var_66;
                                    MR_Word Var_42;

                                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, Type_9, &TypeString_41, &Var_42);
                                    Var_66 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ")");
                                    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_66);
                                  }
                                  break;
                                case (MR_Integer) 3:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 4:
                                  Var_24 = (MR_String) "null";
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_37, (MR_Integer) 0))));

                                switch (MR_tag((MR_Word) Var_91)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    switch (MR_unmkbody(Var_91)) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        Var_24 = (MR_String) "0";
                                        break;
                                      case (MR_Integer) 1:
                                        Var_24 = (MR_String) "\'\\u0000\'";
                                        break;
                                      case (MR_Integer) 2:
                                        Var_24 = (MR_String) "null";
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));

                                      Var_24 = ((&ml_backend__mlds_to_cs_vector_common_9[30 + Var_92]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                                    }
                                    break;
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                MR_String TypeString_41;
                                MR_String Var_66;
                                MR_Word Var_42;

                                ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, Type_9, &TypeString_41, &Var_42);
                                Var_66 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ")");
                                Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_66);
                              }
                              break;
                            case (MR_Integer) 3:
                              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_37, (MR_Integer) 0)))) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  Var_24 = (MR_String) "null";
                                  break;
                                case (MR_Integer) 1:
                                  {
                                    MR_String TypeString_41;
                                    MR_String Var_66;
                                    MR_Word Var_42;

                                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_7, Type_9, &TypeString_41, &Var_42);
                                    Var_66 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ")");
                                    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_66);
                                  }
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
                        Var_24 = (MR_String) "null";
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ForeignType_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));

                          switch (MR_tag((MR_Word) ForeignType_52)) {
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
                                MR_String CsharpType_53;
                                MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_52, (MR_Integer) 0))));
                                MR_String Var_63;

                                CsharpType_53 = (MR_String) (Var_61);
                                Var_63 = mercury__string__f_43_43_2_f_0(CsharpType_53, (MR_String) ")");
                                Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_63);
                              }
                              break;
                          }
                        }
                        break;
                    }
                    break;
                }
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
                  ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(Info_7, Initializer_10, Var_30);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_28;

                  {
                    Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Type_9));
                  }
                  ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(Info_7, Initializer_10, Var_28);
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
              ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(Info_7, Initializer_10, Var_30);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1293__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0(
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_body_for_csharp\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_7, (MR_Integer) 0))));

          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Rval_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0))));
          MR_Word FieldInits_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1))));
          MR_Word IsArray_13;
          MR_String Var_31;
          MR_Char Var_34;
          MR_String String_91;
          MR_Word ArrayDims_92;
          MR_Word Var_94;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, StructType_11, &String_91, &ArrayDims_92);
          mercury__io__write_string_3_p_0(String_91);
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_92, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_94);
          IsArray_13 = ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(StructType_11);
          succeeded = (IsArray_13 == (MR_Integer) 0);
          if (succeeded)
            Var_31 = (MR_String) " {";
          else
            Var_31 = (MR_String) "(";
          mercury__io__write_string_3_p_0(Var_31);
          ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0(Info_6, FieldInits_12);
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
          MR_Word ElementInits_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0))));
          MR_Word Var_65;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[]");
          }
          else
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
            MR_String String_52;
            MR_Word ArrayDims_53;
            MR_Word Var_55;

            ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, Type_15, &String_52, &ArrayDims_53);
            mercury__io__write_string_3_p_0(String_52);
            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_53, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_55);
          }
          mercury__io__write_string_3_p_0((MR_String) " {\n\t\t");
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_initializer_body_for_csharp_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Info_6));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_14, (MR_String) ",\n\t\t", Var_65);
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const_for_csharp__3788__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_lval_for_csharp_4_p_0(
  MR_Word tscc_proc_1_input_1_Info_5,
  MR_Word tscc_proc_1_input_2_Lval_6)
{
  {
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 1: pred ml_backend.mlds_to_cs.output_lval_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs.output_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
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
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));
              MR_String VarNameStr_90;
              MR_String RawString_94;
              MR_String MangledString_95;

              succeeded = (FieldVarName_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              RawString_94 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_22);
              MangledString_95 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_94);
              VarNameStr_90 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_95);
              ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_90);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
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
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
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
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
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
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word AutoComments_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
        MR_Integer Var_68;

        switch (AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "/* ");
              mercury__io__write_string_3_p_0((MR_String) "cast");
              mercury__io__write_string_3_p_0((MR_String) " */");
            }
            break;
        }
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_68 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_68);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word AutoComments_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));

          switch (AutoComments_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
                mercury__io__write_string_3_p_0((MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
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
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
      tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
      goto top_of_proc_3;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(
  MR_Word tscc_proc_2_input_1_Info_5,
  MR_Word tscc_proc_2_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 2: pred ml_backend.mlds_to_cs.output_bracketed_rval_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs.output_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
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
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));
              MR_String VarNameStr_90;
              MR_String RawString_94;
              MR_String MangledString_95;

              succeeded = (FieldVarName_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              RawString_94 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_22);
              MangledString_95 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_94);
              VarNameStr_90 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_95);
              ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_90);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
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
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
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
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
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
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word AutoComments_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
        MR_Integer Var_68;

        switch (AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "/* ");
              mercury__io__write_string_3_p_0((MR_String) "cast");
              mercury__io__write_string_3_p_0((MR_String) " */");
            }
            break;
        }
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_68 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_68);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word AutoComments_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));

          switch (AutoComments_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
                mercury__io__write_string_3_p_0((MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
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
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
      tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
      goto top_of_proc_3;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(
  MR_Word tscc_proc_3_input_1_Info_5,
  MR_Word tscc_proc_3_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 3: pred ml_backend.mlds_to_cs.output_rval_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs.output_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
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
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));
              MR_String VarNameStr_90;
              MR_String RawString_94;
              MR_String MangledString_95;

              succeeded = (FieldVarName_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              RawString_94 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_22);
              MangledString_95 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_94);
              VarNameStr_90 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_95);
              ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_90);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
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
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
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
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
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
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word AutoComments_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
        MR_Integer Var_68;

        switch (AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "/* ");
              mercury__io__write_string_3_p_0((MR_String) "cast");
              mercury__io__write_string_3_p_0((MR_String) " */");
            }
            break;
        }
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_68 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_68);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word AutoComments_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));

          switch (AutoComments_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
                mercury__io__write_string_3_p_0((MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
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
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
      tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
      goto top_of_proc_3;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_cast_rval_for_csharp_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Type_7,
  MR_Word tscc_proc_4_input_3_Expr_8)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 4: pred ml_backend.mlds_to_cs.output_cast_rval_for_csharp/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs.output_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
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
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));
              MR_String VarNameStr_90;
              MR_String RawString_94;
              MR_String MangledString_95;

              succeeded = (FieldVarName_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              RawString_94 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_22);
              MangledString_95 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_94);
              VarNameStr_90 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_95);
              ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_90);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
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
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
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
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
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
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word AutoComments_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
        MR_Integer Var_68;

        switch (AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "/* ");
              mercury__io__write_string_3_p_0((MR_String) "cast");
              mercury__io__write_string_3_p_0((MR_String) " */");
            }
            break;
        }
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_68 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_68);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word AutoComments_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));

          switch (AutoComments_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
                mercury__io__write_string_3_p_0((MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
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
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
      tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
      goto top_of_proc_3;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0(
  MR_Word tscc_proc_5_input_1_Info_5,
  MR_Word tscc_proc_5_input_2_Const_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_6_input_1_Info_6;
    MR_Word tscc_proc_6_input_2_Expr_8;

    // The code for TSCC PROC 5: pred ml_backend.mlds_to_cs.output_rval_const_for_csharp/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs.output_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_5;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));
              MR_String VarNameStr_90;
              MR_String RawString_94;
              MR_String MangledString_95;

              succeeded = (FieldVarName_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              RawString_94 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_22);
              MangledString_95 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_94);
              VarNameStr_90 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_95);
              ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_90);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
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
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
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
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
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
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word AutoComments_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
        MR_Integer Var_68;

        switch (AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "/* ");
              mercury__io__write_string_3_p_0((MR_String) "cast");
              mercury__io__write_string_3_p_0((MR_String) " */");
            }
            break;
        }
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_68 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_68);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word AutoComments_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));

          switch (AutoComments_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
                mercury__io__write_string_3_p_0((MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
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
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
      tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
      goto top_of_proc_3;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_102_111_114_95_99_115_104_97_114_112_95_95_91_50_93_95_48_5_p_0(
  MR_Word tscc_proc_6_input_1_Info_6,
  MR_Word tscc_proc_6_input_2_Expr_8)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;
    MR_Word tscc_proc_5_input_1_Info_5;
    MR_Word tscc_proc_5_input_2_Const_6;

    // The code for TSCC PROC 6: pred ml_backend.mlds_to_cs.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_cs.output_lval_for_csharp/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_cs.output_bracketed_rval_for_csharp/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_cs.output_rval_for_csharp/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_cs.output_cast_rval_for_csharp/5-0
    ;
    // proc 5 in TSCC: pred ml_backend.mlds_to_cs.output_rval_const_for_csharp/4-0
    ;
    // proc 6 in TSCC: pred ml_backend.mlds_to_cs.UnusedArgs__pred__output_boxed_rval_for_csharp__[2]_0/5-0
    ;
    ;
    goto top_of_proc_6;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 2))));
            MR_Word FieldType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));

            if (((MR_tag((MR_Word) FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word QualFieldVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 0))));
              MR_Word CtorType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_10, (MR_Integer) 1))));
              MR_Word FieldVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_18, (MR_Integer) 2))));
              MR_String VarNameStr_90;
              MR_String RawString_94;
              MR_String MangledString_95;

              succeeded = (FieldVarName_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (succeeded)
              {
                if (((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PtrRval_9, (MR_Integer) 0))));

                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                  if (((((MR_tag((MR_Word) Var_85)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_85, (MR_Integer) 0))) == (MR_Integer) 0))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 1))))
                {
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 1))));

                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                  }
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                else
                {
                  mercury__io__write_char_3_p_0((MR_Char) 40);
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_char_3_p_0((MR_Char) 41);
                }
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, CtorType_19);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              RawString_94 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_22);
              MangledString_95 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_94);
              VarNameStr_90 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_95);
              ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_90);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_10, (MR_Integer) 0))));

              if ((FieldType_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_11, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval_for_csharp\'/4", (MR_String) "unexpected field type");
                  return;
                }
              }
              mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_27 = (MR_String) (GlobalVarRef_26);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_27);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(LocalVarName_28);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(Info_5, QualGlobalVarName_30);
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
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_6)) {
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
            MR_Word ScalarCommon_21 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 0))));
            MR_Integer TypeNum_24;
            MR_Integer RowNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 3))));
            MR_Word ModuleSymName_26;
            MR_String MangledModuleName_27;
            MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_21, (MR_Integer) 2))));
            MR_String Var_114;
            MR_String Var_124;

            TypeNum_24 = (MR_Integer) (Var_49);
            ModuleSymName_26 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
            MangledModuleName_27 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(ModuleSymName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_27);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_24, &Var_114);
            mercury__io__write_string_3_p_0(Var_114);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), RowNum_25, &Var_124);
            mercury__io__write_string_3_p_0(Var_124);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_for_csharp\'/4", (MR_String) "tags not supported in C#");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_5_input_1_Info_5 = Info_5;
                MR_Word next_value_of_tscc_proc_5_input_2_Const_6 = Const_11;

                // direct tailcall eliminated
                ;
                tscc_proc_5_input_1_Info_5 = next_value_of_tscc_proc_5_input_1_Info_5;
                tscc_proc_5_input_2_Const_6 = next_value_of_tscc_proc_5_input_2_Const_6;
                goto top_of_proc_5;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word Var_67;
                MR_Word Var_88;

                succeeded = ((((MR_tag((MR_Word) Type_79)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_79, (MR_Integer) 1))));
                  Var_88 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, Var_88);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, SubRval_80);
                  mercury__io__write_string_3_p_0((MR_String) "]");
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_6_input_1_Info_6 = Info_5;
                  MR_Word next_value_of_tscc_proc_6_input_2_Expr_8 = SubRval_80;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_6_input_1_Info_6 = next_value_of_tscc_proc_6_input_1_Info_6;
                  tscc_proc_6_input_2_Expr_8 = next_value_of_tscc_proc_6_input_2_Expr_8;
                  goto top_of_proc_6;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(Info_5, Type_81, SubRval_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(Info_5, Unop_16, SubRval_83);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(Info_5, Op_17, SubRvalA_18, SubRvalB_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Info_5;
                MR_Word next_value_of_tscc_proc_1_input_2_Lval_6;

                mercury__io__write_string_3_p_0((MR_String) "out ");
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
                next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_84;
                tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
                tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 3))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_28, (MR_Integer) 2))));
                MR_Integer TypeNum_87 = (MR_Integer) (Var_38);
                MR_String Var_92;
                MR_String Var_102;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), TypeNum_87, &Var_92);
                mercury__io__write_string_3_p_0(Var_92);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), StartRowNum_31, &Var_102);
                mercury__io__write_string_3_p_0(Var_102);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_5, RowRval_29);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
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
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_Integer N_10;
      MR_Word Var_15;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_15, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word AutoComments_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
        MR_Integer Var_68;

        switch (AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "/* ");
              mercury__io__write_string_3_p_0((MR_String) "cast");
              mercury__io__write_string_3_p_0((MR_String) " */");
            }
            break;
        }
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_68 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_68);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0))) == (MR_Integer) 0))))
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 3))));
          MR_Word Var_27;

          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word AutoComments_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));

          switch (AutoComments_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
                mercury__io__write_string_3_p_0((MR_String) "cast");
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_45;

          succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(Type_7, &Var_45);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_45) == 0);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  top_of_proc_5:;
    {
      MR_Word Info_5 = tscc_proc_5_input_1_Info_5;
      MR_Word Const_6 = tscc_proc_5_input_2_Const_6;
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
            MR_Word CodeAddr_18 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));
            MR_String Name_19;
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Box conv0_Name_19;

            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, ((MR_Box) (CodeAddr_18)), &conv0_Name_19);
            Name_19 = ((MR_String) (conv0_Name_19));
            mercury__io__write_string_3_p_0(Name_19);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

            ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_8);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(U_9);
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t N_95 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(N_95);
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t N_96 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(N_96);
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t N_97 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(N_97);
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t N_98 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(N_98);
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t N_99 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(N_99);
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t N_100 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(N_100);
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t N_101 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(N_101);
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t N_102 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(N_102);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word EnumType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Integer N_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8;

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (N_104));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_75));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                next_value_of_tscc_proc_4_input_2_Type_7 = EnumType_10;
                next_value_of_tscc_proc_4_input_3_Expr_8 = Var_73;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer N_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "( ");
                ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(N_103);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Float FloatVal_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

                backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_14);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2((MR_Integer) 2, String_15);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word String_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0((MR_String) "\"");
                backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 2, String_105);
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Lang_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String Value_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 3))));
                MR_Word Var_63;

                {
                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_for_csharp_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Lang_11));
                  MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "language other than C#.");
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_5, Type_13);
                mercury__io__write_string_3_p_0((MR_String) ") ");
                mercury__io__write_string_3_p_0(Value_12);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TargetPrefixes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String NamedConst_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_16, (MR_Integer) 1))));

                mercury__io__write_string_3_p_0(Var_47);
                mercury__io__write_string_3_p_0(NamedConst_17);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word VarName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String VarNameStr_21;

                ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(VarName_20, &VarNameStr_21);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_21);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_23;
                MR_Word Var_39;
                MR_Word VarName_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String VarNameStr_107;

                Var_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_22);
                MangledModuleName_23 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_39);
                mercury__io__write_string_3_p_0(MangledModuleName_23);
                mercury__io__write_string_3_p_0((MR_String) ".");
                ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(VarName_106, &VarNameStr_107);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_107);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word RttiId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
                MR_String RttiAddrName_25;
                MR_Word Var_34;
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
                MR_String MangledModuleName_109;

                Var_34 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_108);
                MangledModuleName_109 = ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(Var_34);
                mercury__io__write_string_3_p_0(MangledModuleName_109);
                mercury__io__write_string_3_p_0((MR_String) ".");
                backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_24, &RttiAddrName_25);
                ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(RttiAddrName_25);
              }
              break;
            case (MR_Integer) 19:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const_for_csharp\'/4", (MR_String) "NYI: mlconst_data_addr_tabling");
                  return;
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Initializer_28;
                MR_Word Type_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

                Initializer_28 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(Info_5, Type_110);
                mercury__io__write_string_3_p_0(Initializer_28);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_6:;
    {
      MR_Word Info_6 = tscc_proc_6_input_1_Info_6;
      MR_Word Expr_8 = tscc_proc_6_input_2_Expr_8;
      MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
      tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
      goto top_of_proc_3;
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_binop_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10)
{
  switch (MR_tag((MR_Word) Op_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".Equals(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) "!=");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) "<");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) ">");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) "<=");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            mercury__io__write_string_3_p_0((MR_String) ">=");
            mercury__io__write_string_3_p_0((MR_String) " 0)");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) "))");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 16:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 17:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 18:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 19:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 20:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 21:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 22:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 23:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 24:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 25:
          {
            mercury__io__write_string_3_p_0((MR_String) "System.Object.ReferenceEquals(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 26:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 27:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_1925 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Op_8, (MR_Integer) 0))));

        switch (Var_1925) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_1929 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Op_8, (MR_Integer) 0))));

        switch (Var_1929) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
              mercury__io__write_string_3_p_0((MR_String) " ");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
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
            MR_Word Var_1928 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1928) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_1926 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1926) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_1927 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1927) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_1930 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1930) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_1931 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1931) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_1922 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1922) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_1923 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1923) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)((byte)");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " (byte)");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_1924 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))));

            switch (Var_1924) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(short)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(sbyte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(ushort)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            ml_backend__mlds_to_cs__output_bracketed_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) "[");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, X_9);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(Op_8);
            mercury__io__write_string_3_p_0((MR_String) " ");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_7, Y_10);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_unop_for_csharp_5_p_0(
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
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
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
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* strip_tag */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* mkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* unmkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "!");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash2_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash3_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash4_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash5_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash6_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_unop_for_csharp\'/5", (MR_String) "invalid unary operator");
              return;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnaryOp_7, (MR_Integer) 0))));

        switch (Var_168) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(sbyte)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(ushort)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_unboxed_rval_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8)
{
  {
    MR_String String_33;
    MR_Word ArrayDims_34;
    MR_Word Var_36;

    mercury__io__write_string_3_p_0((MR_String) "((");
    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, Type_7, &String_33, &ArrayDims_34);
    mercury__io__write_string_3_p_0(String_33);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_34, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_36);
    mercury__io__write_string_3_p_0((MR_String) ") ");
    ml_backend__mlds_to_cs__output_rval_for_csharp_4_p_0(Info_6, Expr_8);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint64_const_for_csharp_3_p_0(
  uint64_t U64_4)
{
  {
    mercury__io__write_uint64_3_p_0(U64_4);
    mercury__io__write_string_3_p_0((MR_String) "UL");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_int64_const_for_csharp_3_p_0(
  int64_t I64_4)
{
  {
    mercury__io__write_int64_3_p_0(I64_4);
    mercury__io__write_string_3_p_0((MR_String) "L");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint32_const_for_csharp_3_p_0(
  uint32_t U32_4)
{
  {
    mercury__io__write_uint32_3_p_0(U32_4);
    mercury__io__write_string_3_p_0((MR_String) "U");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_int32_const_for_csharp_3_p_0(
  int32_t I32_4)
{
  mercury__io__write_int32_3_p_0(I32_4);
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint16_const_for_csharp_3_p_0(
  uint16_t U16_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(ushort)");
    mercury__io__write_uint16_3_p_0(U16_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_int16_const_for_csharp_3_p_0(
  int16_t I16_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(short)");
    mercury__io__write_int16_3_p_0(I16_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint8_const_for_csharp_3_p_0(
  uint8_t U8_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(byte)");
    mercury__io__write_uint8_3_p_0(U8_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_int8_const_for_csharp_3_p_0(
  int8_t I8_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(sbyte)");
    mercury__io__write_int8_3_p_0(I8_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_uint_const_for_csharp_3_p_0(
  MR_Unsigned U_4)
{
  {
    mercury__io__write_uint_3_p_0(U_4);
    mercury__io__write_string_3_p_0((MR_String) "U");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_int_const_for_csharp_3_p_0(
  MR_Integer N_4)
{
  {
    MR_bool succeeded = (N_4 >= (MR_Integer) 0);
    MR_Integer IntBits_6;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_12;

    if (succeeded)
    {
      Var_11 = (MR_Integer) 2147483648;
      Var_10 = (N_4 & Var_11);
      succeeded = (Var_10 == (MR_Integer) 2147483648);
      if (succeeded)
      {
        mercury__int__bits_per_int_1_p_0(&IntBits_6);
        Var_12 = (MR_Integer) 32;
        succeeded = (IntBits_6 > Var_12);
        if (succeeded)
        {
          MR_Integer Var_13 = (N_4 >> (MR_Integer) 32);

          succeeded = (Var_13 == (MR_Integer) 0);
        }
        else
          succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer Var_19 = (N_4 & (MR_Integer) 4294967295);
      MR_String Var_26;

      mercury__io__write_string_3_p_0((MR_String) "unchecked((int) 0x");
      mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), (MR_Integer) 2, Var_19, &Var_26);
      mercury__io__write_string_3_p_0(Var_26);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
      mercury__io__write_int_3_p_0(N_4);
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_bool succeeded;
    MR_String MangledSymName_4;
    MR_Word StrippedSymName_5;
    MR_String Var_11;

    succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(SymName_3, &Var_11, &StrippedSymName_5);
    if (succeeded)
      succeeded = (strcmp((MR_String) "mercury", Var_11) == 0);
    if (succeeded)
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(StrippedSymName_5, (MR_Integer) 0, (MR_String) "__", &MangledSymName_4);
    }
    else
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_3, (MR_Integer) 0, (MR_String) "__", &MangledSymName_4);
    }
    return MangledSymName_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__local_var_name_to_string_for_csharp_2_p_0(
  MR_Word LocalVarName_3,
  MR_String * String_4)
{
  {
    MR_String RawString_5;
    MR_String MangledString_6;

    RawString_5 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_3);
    MangledString_6 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_5);
    *String_4 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_6);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__global_var_name_to_string_for_csharp_2_p_0(
  MR_Word GlobalVarName_3,
  MR_String * String_4)
{
  switch (MR_tag((MR_Word) GlobalVarName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *String_4 = (MR_String) "dummy_var";
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_3, (MR_Integer) 0))));

        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_7, String_4);
      }
      break;
    case (MR_Integer) 2:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GlobalVarName_3, (MR_Integer) 0))));
        MR_Integer Num_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_3, (MR_Integer) 1))));

        *String_4 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_5, Num_6);
      }
      break;
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__get_type_initializer_2_f_0(
  MR_Word Info_4,
  MR_Word Type_5)
{
  {
    MR_String Initializer_6;

    switch (MR_tag((MR_Word) Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 1:
            Initializer_6 = (MR_String) "false";
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            Initializer_6 = (MR_String) "0";
            break;
          case (MR_Integer) 3:
            Initializer_6 = (MR_String) "0U";
            break;
          case (MR_Integer) 5:
            Initializer_6 = (MR_String) "\'\\u0000\'";
            break;
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "variable has unknown_type");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Initializer_6 = (MR_String) "null";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CtorCat_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) CtorCat_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(CtorCat_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 1:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String TypeString_13;
                        MR_String Var_38;
                        MR_Word Var_14;

                        ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &TypeString_13, &Var_14);
                        Var_38 = mercury__string__f_43_43_2_f_0(TypeString_13, (MR_String) ")");
                        Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_38);
                      }
                      break;
                    case (MR_Integer) 3:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 4:
                      Initializer_6 = (MR_String) "null";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_9, (MR_Integer) 0))));

                    switch (MR_tag((MR_Word) Var_63)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(Var_63)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            Initializer_6 = (MR_String) "0";
                            break;
                          case (MR_Integer) 1:
                            Initializer_6 = (MR_String) "\'\\u0000\'";
                            break;
                          case (MR_Integer) 2:
                            Initializer_6 = (MR_String) "null";
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));

                          Initializer_6 = ((&ml_backend__mlds_to_cs_vector_common_9[20 + Var_64]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String TypeString_13;
                    MR_String Var_38;
                    MR_Word Var_14;

                    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &TypeString_13, &Var_14);
                    Var_38 = mercury__string__f_43_43_2_f_0(TypeString_13, (MR_String) ")");
                    Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_38);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_9, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Initializer_6 = (MR_String) "null";
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String TypeString_13;
                        MR_String Var_38;
                        MR_Word Var_14;

                        ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &TypeString_13, &Var_14);
                        Var_38 = mercury__string__f_43_43_2_f_0(TypeString_13, (MR_String) ")");
                        Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_38);
                      }
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
            Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 3:
            {
              MR_Word ForeignType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "wrong foreign language type");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String CsharpType_25;
                    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_24, (MR_Integer) 0))));
                    MR_String Var_35;

                    CsharpType_25 = (MR_String) (Var_33);
                    Var_35 = mercury__string__f_43_43_2_f_0(CsharpType_25, (MR_String) ")");
                    Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", Var_35);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return Initializer_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_binary_op_for_csharp_3_p_0(
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
        case (MR_Integer) 27:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_binary_op_for_csharp\'/3", (MR_String) "invalid binary operator");
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
            mercury__io__write_string_3_p_0((MR_String) ">>");
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.output_binary_op_for_csharp\'/3", (MR_String) "invalid binary operator");
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

static void MR_CALL 
ml_backend__mlds_to_cs__output_local_var_name_for_csharp_3_p_0(
  MR_Word VarName_4)
{
  {
    MR_String VarNameStr_6;
    MR_String RawString_12;
    MR_String MangledString_13;

    RawString_12 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_4);
    MangledString_13 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_12);
    VarNameStr_6 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_13);
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(VarNameStr_6);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_global_var_name_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word QualGlobalVarName_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 0))));
    MR_Word GlobalVarName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 1))));
    MR_Word CurrentModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
    MR_String DataNameStr_30;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_8, CurrentModuleName_10);
    if (!(succeeded))
    {
      ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(ModuleName_8, (MR_Integer) 0);
    }
    switch (MR_tag((MR_Word) GlobalVarName_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DataNameStr_30 = (MR_String) "dummy_var";
        break;
      case (MR_Integer) 1:
        {
          MR_Word RttiId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_9, (MR_Integer) 0))));

          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_36, &DataNameStr_30);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ConstVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GlobalVarName_9, (MR_Integer) 0))));
          MR_Integer Num_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_9, (MR_Integer) 1))));

          DataNameStr_30 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_34, Num_35);
        }
        break;
    }
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(DataNameStr_30);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_qual_name_prefix_cs_4_p_0(
  MR_Word ModuleName_5,
  MR_Word QualKind_6)
{
  {
    MR_bool succeeded;
    MR_String QualifierString_8;
    MR_Word OuterName_17;
    MR_Word InnerName_18;
    MR_String MangledOuterName_19;
    MR_String MangledSuffix_20;
    MR_Word StrippedSymName_29;
    MR_String Var_35;

    OuterName_17 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_5);
    InnerName_18 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
    succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(OuterName_17, &Var_35, &StrippedSymName_29);
    if (succeeded)
      succeeded = (strcmp((MR_String) "mercury", Var_35) == 0);
    if (succeeded)
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(StrippedSymName_29, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_19);
    }
    else
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(OuterName_17, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_19);
    }
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_17, InnerName_18);
    if (succeeded)
      MangledSuffix_20 = (MR_String) "";
    else
    {
      MR_Word Suffix_21;
      MR_String MangledSuffix0_22;
      MR_Word Var_23;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_18, OuterName_17, &Suffix_21);
      Var_23 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_6);
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_21, Var_23, (MR_String) ".", &MangledSuffix0_22);
      MangledSuffix_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_22);
    }
    QualifierString_8 = mercury__string__f_43_43_2_f_0(MangledOuterName_19, MangledSuffix_20);
    mercury__io__write_string_3_p_0(QualifierString_8);
    mercury__io__write_string_3_p_0((MR_String) ".");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__type_is_array_for_csharp_1_f_0(
  MR_Word Type_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 4)));
    MR_Word IsArray_4;

    if (succeeded)
    {
      IsArray_4 = (MR_Integer) 0;
    }
    else
    {
      succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 5)));
      if (succeeded)
      {
        IsArray_4 = (MR_Integer) 0;
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          IsArray_4 = (MR_Integer) 0;
        }
        else
        {
          MR_Word CtorCat_10;

          succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CtorCat_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3))));
            IsArray_4 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_10);
          }
          else
          {
            MR_Word RttiIdMaybeElement_11;

            succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 7)));
            if (succeeded)
            {
              RttiIdMaybeElement_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
              {
                MR_String _TypeName_12;

                backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(RttiIdMaybeElement_11, &_TypeName_12, &IsArray_4);
              }
            }
            else
              IsArray_4 = (MR_Integer) 1;
          }
        }
      }
    }
    return IsArray_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list_for_csharp__1293__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Inits_6)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_initializer_body_list_for_csharp_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_5));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Inits_6, (MR_String) ",\n\t\t", Var_12);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_alloc_only_for_csharp_5_p_0(
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
          MR_Word StructType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0))));
          MR_Word FieldInits_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1))));
          MR_Word CtorCat_15;
          MR_Word Var_41;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          succeeded = ((((MR_tag((MR_Word) StructType_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CtorCat_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 3))));
            Var_41 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_15);
            succeeded = (Var_41 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Integer Size_16;
            MR_String Var_63;

            Size_16 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_12);
            mercury__io__write_string_3_p_0((MR_String) "object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), Size_16, &Var_63);
            mercury__io__write_string_3_p_0(Var_63);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            ml_backend__mlds_to_cs__output_type_for_csharp_4_p_0(Info_6, StructType_11);
            mercury__io__write_string_3_p_0((MR_String) "()");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0))));
          MR_Integer Size_54;

          Size_54 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_17);
          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String Var_74;

            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), Size_54, &Var_74);
            mercury__io__write_string_3_p_0(Var_74);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            MR_Word Type_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
            MR_String String_19;
            MR_Word ArrayDims_20;
            MR_Word Heads_21;
            MR_Integer Var_59;
            MR_Box conv0_Var_59;

            ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, Type_18, &String_19, &ArrayDims_20);
            mercury__io__write_string_3_p_0(String_19);
            succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_20, &Heads_21, &conv0_Var_59);
            if (succeeded)
            {
              Var_59 = ((MR_Integer) (conv0_Var_59));
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
              Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Heads_21, Var_35);
              ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_33);
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
  MR_Word Info_5,
  MR_Word MLDS_Type_6)
{
  {
    MR_String String_18;
    MR_Word ArrayDims_19;
    MR_Word Var_21;

    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_5, MLDS_Type_6, &String_18, &ArrayDims_19);
    mercury__io__write_string_3_p_0(String_18);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_19, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_21);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decls_for_csharp_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word GlobalVarDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word GlobalVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 0))));
      MR_Word Flags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 2))));
      MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 3))));
      MR_Word Access_39;
      MR_Word next_value_of_HeadVar__3_3;

      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_2);
      Access_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 0))));
      switch (Access_39) {
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
      ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(Info_1, GlobalVarName_16, Type_19);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = GlobalVarDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_global_var_decl_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word GlobalVarName_7,
  MR_Word Type_8)
{
  {
    MR_String String_29;
    MR_Word ArrayDims_30;
    MR_Word Var_32;
    MR_String DataNameStr_39;

    ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, Type_8, &String_29, &ArrayDims_30);
    mercury__io__write_string_3_p_0(String_29);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_30, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_32);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    switch (MR_tag((MR_Word) GlobalVarName_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DataNameStr_39 = (MR_String) "dummy_var";
        break;
      case (MR_Integer) 1:
        {
          MR_Word RttiId_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_7, (MR_Integer) 0))));

          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_45, &DataNameStr_39);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ConstVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GlobalVarName_7, (MR_Integer) 0))));
          MR_Integer Num_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_7, (MR_Integer) 1))));

          DataNameStr_39 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_43, Num_44);
        }
        break;
    }
    ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(DataNameStr_39);
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_45;

    conv0_LambdaHeadVar__2_45 = ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string_for_csharp__1885__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_45));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6,
  MR_String * String_7,
  MR_Word * ArrayDims_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) MLDS_Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MLDS_Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *String_7 = (MR_String) "runtime.Commit";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 1:
            {
              *String_7 = (MR_String) "bool";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "int";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 3:
            {
              *String_7 = (MR_String) "uint";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 4:
            {
              *String_7 = (MR_String) "double";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 5:
            {
              *String_7 = (MR_String) "int";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 6:
            {
              *String_7 = (MR_String) "/* generic_type */ object";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 7:
            {
              *String_7 = (MR_String) "/* env_ptr */ object";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 8:
            {
              *String_7 = (MR_String) "runtime.TypeInfo";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 9:
            {
              *String_7 = (MR_String) "runtime.PseudoTypeInfo";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
          MR_Word ClassId_22 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
          MR_Word Name_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_22, (MR_Integer) 0))));
          MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_22, (MR_Integer) 1))));

          ml_backend__mlds_to_cs__qual_class_name_to_string_for_csharp_3_p_0(Name_23, Arity_24, String_7);
          *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_27;
          MR_Word RetTypes_28;
          MR_Word ArgTypes_29;
          MR_Word Var_42 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));

          Args_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
          RetTypes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
          ArgTypes_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_2[2]), Args_27);
          *String_7 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(Info_5, ArgTypes_29, RetTypes_28);
          *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word CtorCat_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 3))));
              MR_String SubstituteName_12;
              MR_Word ArrayDims0_13;

              if (((((MR_tag((MR_Word) CtorCat_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_11, (MR_Integer) 0))) == (MR_Integer) 0))))
              {
                MR_Word CtorCatSystem_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorCat_11, (MR_Integer) 1))));

                SubstituteName_12 = ((&ml_backend__mlds_to_cs_vector_common_10[0 + CtorCatSystem_82]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_0;
                ArrayDims0_13 = ((&ml_backend__mlds_to_cs_vector_common_10[0 + CtorCatSystem_82]))->ml_backend__mlds_to_cs__vector_common_type_10_0__vct_10_f_1;
                succeeded = MR_TRUE;
              }
              else
              if (((((MR_tag((MR_Word) CtorCat_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_11, (MR_Integer) 0))) == (MR_Integer) 1))))
              {
                MR_Word CtorCatUser_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorCat_11, (MR_Integer) 1))));
                MR_Word Var_90;

                succeeded = (CtorCatUser_83 == (MR_Integer) 4);
                if (succeeded)
                {
                  Var_90 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_90);
                  if (succeeded)
                  {
                    SubstituteName_12 = (MR_String) "runtime.TypeInfo_Struct";
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_91;

                    Var_91 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_91);
                    if (succeeded)
                    {
                      SubstituteName_12 = (MR_String) "runtime.PseudoTypeInfo";
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word Var_92;

                      Var_92 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_92);
                      if (succeeded)
                      {
                        SubstituteName_12 = (MR_String) "runtime.TypeCtorInfo_Struct";
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    ArrayDims0_13 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
                succeeded = (CtorCat_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                if (succeeded)
                {
                  *String_7 = (MR_String) "/* builtin_dummy */ object";
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
                else
                {
                  MR_Word Var_76;

                  Var_76 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_76);
                  if (succeeded)
                  {
                    *String_7 = (MR_String) "/* c_pointer */ object";
                    *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  else
                    ml_backend__mlds_to_cs__mercury_type_to_string_for_csharp_5_p_0(Info_5, Type_9, CtorCat_11, String_7, ArrayDims_8);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ElementType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word Var_55;

              succeeded = ((((MR_tag((MR_Word) ElementType_14)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 3))));
                succeeded = (Var_55 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              if (succeeded)
              {
                *String_7 = (MR_String) "System.Array";
                *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              else
              {
                MR_String Var_17;

                succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(ElementType_14, &Var_17);
                if (succeeded)
                {
                  MR_Word ArrayDims0_59;

                  ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_5, ElementType_14, String_7, &ArrayDims0_59);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_59));
                  }
                }
                else
                {
                  *String_7 = (MR_String) "object";
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "/* cont_type */ object";
              *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ForeignType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_18)) {
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
                    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_18, (MR_Integer) 0))));

                    *String_7 = (MR_String) (Var_54);
                    *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
          case (MR_Integer) 4:
            {
              MR_Word Type_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word ArrayDims0_65;

              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_5, Type_64, String_7, &ArrayDims0_65);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_65));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArrayDims0_67;

              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_5, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))), String_7, &ArrayDims0_67);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_67));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Type_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_MLDS_Type_6 = Type_63;

              // direct tailcall eliminated
              ;
              MLDS_Type_6 = next_value_of_MLDS_Type_6;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word RttiIdMaybeElement_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_34;

              backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(RttiIdMaybeElement_33, String_7, &IsArray_34);
              switch (IsArray_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]));
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TablingId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_73;

              backend_libs__rtti__tabling_id_java_type_3_p_0(TablingId_35, String_7, &IsArray_73);
              switch (IsArray_73) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]));
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
ml_backend__mlds_to_cs__mercury_type_to_string_for_csharp_5_p_0(
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
    ;
    switch (MR_tag((MR_Word) CtorCat_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *String_9 = (MR_String) "/* closure */ object";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]));
            }
            break;
          case (MR_Integer) 1:
            {
              *String_9 = (MR_String) "/* tuple */ object";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20]));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtor_31;
              MR_Word ArgsTypes_32;
              MR_Word ClassName_33;
              MR_Integer ClassArity_34;
              MR_Word ClassKind_36;
              MR_Word ClassId_37;
              MR_Word MLDS_Type_38;
              MR_String TypeString_39;
              MR_Word OutputGenerics_40;
              MR_Unsigned packed_args_0;
              MR_Unsigned packed_args_1;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_31, &ArgsTypes_32);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_31, &ClassName_33, &ClassArity_34);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                ClassKind_36 = (MR_Integer) 3;
              }
              else
                ClassKind_36 = (MR_Integer) 0;
              {
                ClassId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (ClassName_33));
                MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (ClassArity_34));
                MR_hl_field(MR_mktag(0), ClassId_37, 2) = ((MR_Box) (ClassKind_36));
              }
              MLDS_Type_38 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, MLDS_Type_38, &TypeString_39, ArrayDims_10);
              packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
              packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
              OutputGenerics_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) & (MR_Integer) 1);
              switch (OutputGenerics_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_39;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_41;

                    ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(Info_6, ArgsTypes_32, &GenericsString_41);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_39, GenericsString_41);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *String_9 = (MR_String) "object";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 4:
            {
              *String_9 = (MR_String) "builtin.Void_0";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *String_9 = (MR_String) "double";
                    *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *String_9 = (MR_String) "int";
                    *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *String_9 = (MR_String) "string";
                    *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));

                *String_9 = ((&ml_backend__mlds_to_cs_vector_common_9[10 + IntType_11]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_31;
          MR_Word ArgsTypes_32;
          MR_Word ClassName_33;
          MR_Integer ClassArity_34;
          MR_Word ClassKind_36;
          MR_Word ClassId_37;
          MR_Word MLDS_Type_38;
          MR_String TypeString_39;
          MR_Word OutputGenerics_40;
          MR_Unsigned packed_args_0;
          MR_Unsigned packed_args_1;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_31, &ArgsTypes_32);
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_31, &ClassName_33, &ClassArity_34);
          succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            ClassKind_36 = (MR_Integer) 3;
          }
          else
            ClassKind_36 = (MR_Integer) 0;
          {
            ClassId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (ClassName_33));
            MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (ClassArity_34));
            MR_hl_field(MR_mktag(0), ClassId_37, 2) = ((MR_Box) (ClassKind_36));
          }
          MLDS_Type_38 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
          ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, MLDS_Type_38, &TypeString_39, ArrayDims_10);
          packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          OutputGenerics_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) & (MR_Integer) 1);
          switch (OutputGenerics_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *String_9 = TypeString_39;
              break;
            case (MR_Integer) 0:
              {
                MR_String GenericsString_41;

                ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(Info_6, ArgsTypes_32, &GenericsString_41);
                *String_9 = mercury__string__f_43_43_2_f_0(TypeString_39, GenericsString_41);
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
              ;
              CtorCat_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_cs_scalar_common_1[21]));
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtor_31;
              MR_Word ArgsTypes_32;
              MR_Word ClassName_33;
              MR_Integer ClassArity_34;
              MR_Word ClassKind_36;
              MR_Word ClassId_37;
              MR_Word MLDS_Type_38;
              MR_String TypeString_39;
              MR_Word OutputGenerics_40;
              MR_Unsigned packed_args_0;
              MR_Unsigned packed_args_1;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_31, &ArgsTypes_32);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_31, &ClassName_33, &ClassArity_34);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                ClassKind_36 = (MR_Integer) 3;
              }
              else
                ClassKind_36 = (MR_Integer) 0;
              {
                ClassId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (ClassName_33));
                MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (ClassArity_34));
                MR_hl_field(MR_mktag(0), ClassId_37, 2) = ((MR_Box) (ClassKind_36));
              }
              MLDS_Type_38 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
              ml_backend__mlds_to_cs__type_to_string_for_csharp_4_p_0(Info_6, MLDS_Type_38, &TypeString_39, ArrayDims_10);
              packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
              packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
              OutputGenerics_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) & (MR_Integer) 1);
              switch (OutputGenerics_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_39;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_41;

                    ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(Info_6, ArgsTypes_32, &GenericsString_41);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_39, GenericsString_41);
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

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_String_6;

    ml_backend__mlds_to_cs__boxed_type_to_string_for_csharp_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_String_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_String_6));
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(
  MR_Word Info_5,
  MR_Word ArgTypes_6,
  MR_Word RetTypes_7)
{
  {
    MR_String String_8;
    MR_Integer Arity_9;
    MR_Integer NumRets_10;
    MR_Word ArgTypesStrings_11;
    MR_Word RetTypesStrings_12;
    MR_String TypesString_13;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_String Var_33;
    MR_String Var_35;
    MR_String Var_36;
    MR_String Var_43;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_53;

    Arity_9 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), ArgTypes_6);
    NumRets_10 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetTypes_7);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, ArgTypes_6, &ArgTypesStrings_11);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, RetTypes_7, &RetTypesStrings_12);
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgTypesStrings_11, RetTypesStrings_12);
    TypesString_13 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_17);
    Var_33 = mercury__string__f_43_43_2_f_0(TypesString_13, (MR_String) ">");
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_33);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), NumRets_10, &Var_36);
    Var_43 = mercury__string__f_43_43_2_f_0(Var_36, Var_35);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_r", Var_43);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[1]), Arity_9, &Var_46);
    Var_53 = mercury__string__f_43_43_2_f_0(Var_46, Var_45);
    String_8 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.MethodPtr", Var_53);
    return String_8;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(
  MR_Word Type_3,
  MR_String * TargetType_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Type_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_3)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *TargetType_4 = (MR_String) "bool";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 5:
            {
              *TargetType_4 = (MR_String) "int";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *TargetType_4 = (MR_String) "uint";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *TargetType_4 = (MR_String) "double";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_3_p_0((MR_String) "mlds_to_cs.m", (MR_String) "predicate \140ml_backend.mlds_to_cs.csharp_builtin_type\'/2", (MR_String) "unknown typed");
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word MerType_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
              MR_Word TypeCtorCat_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3))));

              if (((MR_tag((MR_Word) MerType_5)) == (MR_mktag((MR_Integer) 2))))
              {
                MR_Word BuiltinType_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MerType_5, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) BuiltinType_8)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(BuiltinType_8)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          *TargetType_4 = (MR_String) "double";
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          *TargetType_4 = (MR_String) "int";
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word IntType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_8, (MR_Integer) 0))));

                      *TargetType_4 = ((&ml_backend__mlds_to_cs_vector_common_9[0 + IntType_9]))->ml_backend__mlds_to_cs__vector_common_type_9_0__vct_9_f_0;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              else
              if (((MR_tag((MR_Word) MerType_5)) == (MR_mktag((MR_Integer) 1))))
              {
                succeeded = (TypeCtorCat_7 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                if (succeeded)
                {
                  *TargetType_4 = (MR_String) "int";
                  succeeded = MR_TRUE;
                }
              }
              else
                succeeded = MR_FALSE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_17;

    ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__2037__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word ArgsTypes_5,
  MR_String * String_6)
{
  if ((ArgsTypes_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *String_6 = (MR_String) "";
  else
  {
    MR_Word ToString_9;
    MR_Word ArgsTypesStrings_14;
    MR_String ArgsTypesString_15;
    MR_String Var_20;

    {
      ToString_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToString_9, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ToString_9, 1) = ((MR_Box) (ml_backend__mlds_to_cs__generic_args_types_to_string_for_csharp_3_p_0_1));
      MR_hl_field(MR_mktag(0), ToString_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToString_9, 3) = ((MR_Box) (Info_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToString_9, ArgsTypes_5, &ArgsTypesStrings_14);
    ArgsTypesString_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsTypesStrings_14);
    Var_20 = mercury__string__f_43_43_2_f_0(ArgsTypesString_15, (MR_String) ">");
    *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_20);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__qual_class_name_to_string_for_csharp_3_p_0(
  MR_Word QualName_4,
  MR_Integer Arity_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;
    MR_Word MLDS_ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualName_4, (MR_Integer) 0))));
    MR_Word QualKind_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualName_4, (MR_Integer) 1))));
    MR_String ClassName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualName_4, (MR_Integer) 2))));
    MR_Word SymName_10;
    MR_Word Var_16;

    SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
    Var_16 = parse_tree__java_names__csharp_mercury_runtime_package_name_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_10, Var_16);
    if (succeeded)
    {
      *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.", ClassName_9);
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
      MR_String MangledName_43;
      MR_String UppercaseMangledName_44;
      MR_String Var_45;
      MR_String Var_47;
      MR_Word StrippedSymName_33;
      MR_String Var_39;

      OuterName_21 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(MLDS_ModuleName_7);
      InnerName_22 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
      succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(OuterName_21, &Var_39, &StrippedSymName_33);
      if (succeeded)
        succeeded = (strcmp((MR_String) "mercury", Var_39) == 0);
      if (succeeded)
      {
        parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(StrippedSymName_33, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_23);
      }
      else
      {
        parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(OuterName_21, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_23);
      }
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_21, InnerName_22);
      if (succeeded)
        MangledSuffix_24 = (MR_String) "";
      else
      {
        MR_Word Suffix_25;
        MR_String MangledSuffix0_26;
        MR_Word Var_27;

        ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_22, OuterName_21, &Suffix_25);
        Var_27 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
        parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_25, Var_27, (MR_String) ".", &MangledSuffix0_26);
        MangledSuffix_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_26);
      }
      QualString_11 = mercury__string__f_43_43_2_f_0(MangledOuterName_23, MangledSuffix_24);
      MangledName_43 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_9);
      UppercaseMangledName_44 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_43);
      Var_47 = mercury__string__from_int_1_f_0(Arity_5);
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_47);
      UnqualString_12 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_44, Var_45);
      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", UnqualString_12);
      *String_6 = mercury__string__f_43_43_2_f_0(QualString_11, Var_14);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_identifier_string_for_csharp_3_p_0(
  MR_String String_4)
{
  {
    MR_bool succeeded;
    MR_Integer Length_6;

    Length_6 = mercury__string__length_1_f_0(String_4);
    succeeded = (Length_6 > (MR_Integer) 511);
    if (succeeded)
    {
      MR_String Left_7;
      MR_String Right_8;
      MR_Integer Hash_9;
      MR_Integer Var_15;
      MR_String Var_31;

      Left_7 = mercury__string__left_2_f_0(String_4, (MR_Integer) 251);
      Right_8 = mercury__string__right_2_f_0(String_4, (MR_Integer) 250);
      Var_15 = mercury__string__hash_1_f_0(String_4);
      Hash_9 = (Var_15 & (MR_Integer) 4294967295);
      mercury__io__write_string_3_p_0(Left_7);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) (&ml_backend__mlds_to_cs_scalar_common_7[0]), (MR_Integer) 8, (MR_Integer) 2, Hash_9, &Var_31);
      mercury__io__write_string_3_p_0(Var_31);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__io__write_string_3_p_0(Right_8);
    }
    else
      mercury__io__write_string_3_p_0(String_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_src_end_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "// :- end_module ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__550__1_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__543__1_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0(
  MR_Word MercuryModuleName_7,
  MR_Integer Indent_8,
  MR_Word StaticConstructors_9,
  MR_Word FinalPreds_10)
{
  {
    MR_String ClassName_12;
    MR_Word WriteCall_13;
    MR_Word WriteFinal_15;
    MR_Box conv0_STATE_VARIABLE_IO_38_38;
    MR_Box conv1_STATE_VARIABLE_IO_57_57;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "static ");
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(MercuryModuleName_7, (MR_Integer) 0, (MR_String) "__", &ClassName_12);
    mercury__io__write_string_3_p_0(ClassName_12);
    mercury__io__write_string_3_p_0((MR_String) "() {\n");
    {
      WriteCall_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), WriteCall_13, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), WriteCall_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1));
      MR_hl_field(MR_mktag(0), WriteCall_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), WriteCall_13, 3) = ((MR_Box) (Indent_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteCall_13, StaticConstructors_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_38_38);
    {
      WriteFinal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), WriteFinal_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), WriteFinal_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2));
      MR_hl_field(MR_mktag(0), WriteFinal_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), WriteFinal_15, 3) = ((MR_Box) (Indent_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteFinal_15, FinalPreds_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_57_57);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word CodeAddrs_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, CodeAddrs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_exported_enum_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnums_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exported_enums_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, ExportedEnums_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_export_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Exports_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exports_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, Exports_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word AllForeignCode_3)
{
  {
    MR_bool succeeded;
    MR_Word ForeignCode_4;
    MR_Word ForeignCode0_5;
    MR_Box conv0_ForeignCode0_5;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), AllForeignCode_3, ((MR_Box) ((MR_Integer) 1)), &conv0_ForeignCode0_5);
    if (succeeded)
    {
      ForeignCode0_5 = ((MR_Word) (conv0_ForeignCode0_5));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ForeignCode_4 = ForeignCode0_5;
    else
      ForeignCode_4 = (MR_Word) (&ml_backend__mlds_to_cs_scalar_common_3[0]);
    return ForeignCode_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__make_code_addr_map_for_csharp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrMap_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CodeAddrMap_3 = STATE_VARIABLE_CodeAddrMap_0_2;
    else
    {
      MR_Integer SeqNum_7;
      MR_Word CodeAddr_8;
      MR_Word SeqNumsCodeAddrs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_11;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_16;
      MR_Word STATE_VARIABLE_CodeAddrMap_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrMap_0_2;

      SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      CodeAddr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      Var_16 = mercury__string__from_int_1_f_0(SeqNum_7);
      Name_11 = mercury__string__f_43_43_2_f_0((MR_String) "MR_method_ptr_", Var_16);
      mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CodeAddr_8)), ((MR_Box) (Name_11)), STATE_VARIABLE_CodeAddrMap_0_2, &STATE_VARIABLE_CodeAddrMap_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SeqNumsCodeAddrs_9;
      next_value_of_STATE_VARIABLE_CodeAddrMap_0_2 = STATE_VARIABLE_CodeAddrMap_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrMap_0_2 = next_value_of_STATE_VARIABLE_CodeAddrMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Globals_10;
    MR_Word ModuleName_11;
    MR_String SourceFile_12;
    MR_Word Var_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".cs", ModuleName_11, &SourceFile_12);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (MLDS_7));
    }
    libs__file_util__output_to_file_6_p_0(Globals_10, SourceFile_12, Var_19, Succeeded_8);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ml_backend.mlds_to_cs.
