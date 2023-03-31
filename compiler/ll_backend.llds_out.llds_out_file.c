/*
** Automatically generated from `llds_out_file.m'
** by the Mercury compiler,
** version rotd-2023-03-31
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


// :- module ll_backend.llds_out.llds_out_file.
// :- implementation.

/*
INIT mercury__ll_backend__llds_out__llds_out_file__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_file.mih"


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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_global.mih"
#include "ll_backend.llds_out.llds_out_instr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4];

static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0;

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1];

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1];

static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1];

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2];

static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2];

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0;

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1];

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1];

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1];

static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1];

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1;

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_ordinal_ordered_linkage_0[2];

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2];

static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2];

static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_c_internal_label_no_layout_init_chunk__1140__1_4_p_0(
  MR_Integer HeadVar__1_27,
  MR_Word HeadVar__2_28);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_record_internal_label_decl_group__1006__1_4_p_0(
  MR_Integer HeadVar__1_34,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__387__1_2_p_0(
  MR_Word UndefWhileLabels_26,
  MR_Word HeadVar__2_90);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__217__1_4_p_0(
  MR_Word Stream_10,
  MR_Word LambdaHeadVar__1_131);

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AnnotatedProc_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_6_p_0(
  MR_Word Stream_7,
  MR_String VarName_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word AnnotatedProc_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_5_p_0(
  MR_Word Stream_6,
  MR_Word EntryLabelToLayoutMap_7,
  MR_Word Label_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_4_p_0(
  MR_Tuple HeadVar__1_1,
  MR_Word Stream_7);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String Suffix_10,
  MR_Word ProcLabel_11,
  MR_Word LabelSlotNums_12);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_String Suffix_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_5_p_0(
  MR_Word Stream_6,
  MR_Word ProcLabel_7,
  MR_Word LabelNums_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_7_p_0(
  MR_Word _Info_8,
  MR_Word Stream_9,
  MR_Word Label_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Word Label_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
  MR_Word ProcLabel_5,
  MR_Integer LabelNum_6,
  MR_Word STATE_VARIABLE_DeclSet_0_9,
  MR_Word * STATE_VARIABLE_DeclSet_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0(
  MR_Word Stream_8,
  MR_Word ProcLabel_9,
  MR_Word LabelNums_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word Decl_11,
  MR_Word * Res_12,
  MR_Word STATE_VARIABLE_AlreadyDone_0_19,
  MR_Word * STATE_VARIABLE_AlreadyDone_20);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_body_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_String PragmaType_12,
  MR_Word Lang_13,
  MR_Word LiteralOrInclude_14,
  MR_Word Context_15,
  MR_Word * Res_16);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word AnnotatedModule_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word EntryLabels_9,
  MR_Word InternalLabels_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NoLayoutMap_0_3,
  MR_Word * STATE_VARIABLE_NoLayoutMap_4,
  MR_Word STATE_VARIABLE_NoVarLayoutMap_0_5,
  MR_Word * STATE_VARIABLE_NoVarLayoutMap_6,
  MR_Word STATE_VARIABLE_SVarLayoutMap_0_7,
  MR_Word * STATE_VARIABLE_SVarLayoutMap_8,
  MR_Word STATE_VARIABLE_LVarLayoutMap_0_9,
  MR_Word * STATE_VARIABLE_LVarLayoutMap_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
  MR_Word EntryLabelToLayoutMap_3,
  MR_Word Label_4);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
  MR_Word InternalLabelToLayoutMap_3,
  MR_Word Label_4);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
  MR_Word Info_3,
  MR_Word AnnotatedModule_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_2_6_p_0(
  MR_Word Globals_7,
  MR_Word CFile_8,
  MR_Word Stream_9,
  MR_Word * Errors_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0(
  MR_Word Globals_9,
  MR_Word Stream_10,
  MR_Word CFile_11,
  MR_Word * Errors_12,
  MR_Word STATE_VARIABLE_DeclSet_0_73,
  MR_Word * STATE_VARIABLE_DeclSet_74);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word EntryLabels_11,
  MR_Word InternalLabels_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InternalLabelMap_0_2,
  MR_Word * STATE_VARIABLE_InternalLabelMap_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Decls_9,
  MR_Word * Results_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_3_p_0(
  MR_Word Stream_4);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_16_p_0(
  MR_Word Info_17,
  MR_Word Stream_18,
  MR_Word ModuleName_19,
  MR_Word AnnotatedModules_20,
  MR_Word RttiDatas_21,
  MR_Word ProcLayoutDatas_22,
  MR_Word ModuleLayoutDatas_23,
  MR_Word ComplexityProcs_24,
  MR_Word TSStringTable_25,
  MR_Word AllocSites_26,
  MR_Word InitPredNames_27,
  MR_Word FinalPredNames_28,
  MR_Word STATE_VARIABLE_DeclSet_0_55,
  MR_Word * STATE_VARIABLE_DeclSet_56);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AllocSites_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_String InitStatus_3,
  MR_Integer Seq_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_String InitStatus_3,
  MR_Integer Seq_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_EntryLabels_0_4,
  MR_Word * STATE_VARIABLE_EntryLabels_5,
  MR_Word STATE_VARIABLE_InternalLabels_0_6,
  MR_Word * STATE_VARIABLE_InternalLabels_7,
  MR_Word STATE_VARIABLE_EnvVarNames_0_8,
  MR_Word * STATE_VARIABLE_EnvVarNames_9);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_AllEntryLabels_0_4,
  MR_Word * STATE_VARIABLE_AllEntryLabels_5,
  MR_Word STATE_VARIABLE_AllInternalLabels_0_6,
  MR_Word * STATE_VARIABLE_AllInternalLabels_7,
  MR_Word STATE_VARIABLE_EnvVarNames_0_8,
  MR_Word * STATE_VARIABLE_EnvVarNames_9);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
  MR_Word Info_10,
  MR_Word Proc_11,
  MR_Word * AnnotatedProc_12,
  MR_Word STATE_VARIABLE_AllEntryLabels_0_30,
  MR_Word * STATE_VARIABLE_AllEntryLabels_31,
  MR_Word STATE_VARIABLE_AllInternalLabels_0_32,
  MR_Word * STATE_VARIABLE_AllInternalLabels_33,
  MR_Word STATE_VARIABLE_EnvVarNames_0_34,
  MR_Word * STATE_VARIABLE_EnvVarNames_35);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeCurWhileLabel0_2,
  MR_Word WhileLabels_3,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_4,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_2,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
  MR_Word MaybeLabel_4,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_7,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_2,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
  MR_Word CodeAddr_4,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_7,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_WhileSet_0_2,
  MR_Word * STATE_VARIABLE_WhileSet_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
  MR_Word Label_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Count_0_4,
  MR_Integer * STATE_VARIABLE_Count_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
  MR_Word Label_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Count_0_3,
  MR_Integer * STATE_VARIABLE_Count_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ContLabels_0_2,
  MR_Word * STATE_VARIABLE_ContLabels_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * CallerLabel_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevEntryLabels_0_2,
  MR_Word * STATE_VARIABLE_RevEntryLabels_3,
  MR_Word STATE_VARIABLE_RevInternalLabels_0_4,
  MR_Word * STATE_VARIABLE_RevInternalLabels_5);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_4_p_0(
  MR_Word Info_5,
  MR_Word Stream_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_3[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_4[2][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_5[7][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_6[5][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_7[1][11];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_8[13][10];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_9[5][7];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_10[3][8];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_1[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_9[3])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_9[3])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_9[4])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_4[2][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c"))))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_5[7][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_6[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_8[13][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_9[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_10[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
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



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0)
  }
};

static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0)
};

static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4] = {
  (MR_String) "acm_name",
  (MR_String) "acm_procs",
  (MR_String) "acm_entry_labels",
  (MR_String) "acm_internal_labels"
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0 = {
  (MR_String) "annotated_c_module",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "annotated_c_module",
  { ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0 },
  { ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0,

};

static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0)
};

static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2] = {
  (MR_String) "acp_proc",
  (MR_String) "acp_label_output_info"
};

static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0 = {
  (MR_String) "annotated_c_procedure",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "annotated_c_procedure",
  { ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0 },
  { ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0,

};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0 = {
  (MR_String) "extern",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1 = {
  (MR_String) "static",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_ordinal_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "linkage",
  { ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0 },
  { ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_ordinal_ordered_linkage_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0,

};

static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_c_internal_label_no_layout_init_chunk__1140__1_4_p_0(
  MR_Integer HeadVar__1_27,
  MR_Word HeadVar__2_28)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv1_HeadVar__4_30;

  func_0(((MR_Box) ((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[1]))), ((MR_Box) (HeadVar__1_27)), ((MR_Box) (HeadVar__2_28)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_30);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_record_internal_label_decl_group__1006__1_4_p_0(
  MR_Integer HeadVar__1_34,
  MR_Word HeadVar__2_35)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv1_HeadVar__4_37;

  func_0(((MR_Box) ((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[1]))), ((MR_Box) (HeadVar__1_34)), ((MR_Box) (HeadVar__2_35)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_37);
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__387__1_2_p_0(
  MR_Word UndefWhileLabels_26,
  MR_Word HeadVar__2_90)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), UndefWhileLabels_26, ((MR_Box) (HeadVar__2_90)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__217__1_4_p_0(
  MR_Word Stream_10,
  MR_Word LambdaHeadVar__1_131)
{
  MR_String ForeignExportCode_70 = (MR_String) (LambdaHeadVar__1_131);

  mercury__io__write_string_4_p_0(Stream_10, ForeignExportCode_70);
}

void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(
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
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
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

    ll_backend__llds____Compare____c_procedure_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = ll_backend__llds____Unify____c_procedure_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AnnotatedProc_8)
{
  MR_Word Proc_10 = ((MR_Word) ((MR_hl_field(0, AnnotatedProc_8, (MR_Integer) 0))));
  MR_Word LabelOutputInfo_11 = ((MR_Word) ((MR_hl_field(0, AnnotatedProc_8, (MR_Integer) 1))));
  MR_String Name_12 = ((MR_String) ((MR_hl_field(0, Proc_10, (MR_Integer) 0))));
  MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(0, Proc_10, (MR_Integer) 1))));
  MR_Word Instrs_14 = ((MR_Word) ((MR_hl_field(0, Proc_10, (MR_Integer) 5))));
  MR_Word PredProcId_15 = ((MR_Word) ((MR_hl_field(0, Proc_10, (MR_Integer) 2))));
  MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(0, PredProcId_15, (MR_Integer) 1))));
  MR_Integer ModeNum_18;
  MR_Word LocalThreadEngineBase_19;
  MR_String Var_123;
  MR_String Var_133;

  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_17, &ModeNum_18);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n/*-------------------------------------");
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "------------------------------------*/\n");
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/* code for \'");
  mercury__io__write_string_4_p_0(Stream_7, Name_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\'/");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), Arity_13, &Var_123);
  mercury__io__write_string_4_p_0(Stream_7, Var_123);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " mode ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), ModeNum_18, &Var_133);
  mercury__io__write_string_4_p_0(Stream_7, Var_133);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " */\n");
  LocalThreadEngineBase_19 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 7))) >> 12)) & (MR_Integer) 1);
  switch (LocalThreadEngineBase_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ll_backend__llds_out__llds_out_instr__output_instruction_list_7_p_0(Info_6, Stream_7, Instrs_14, LabelOutputInfo_11, (MR_Integer) 0);
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_39;
        MR_String Var_51;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
        Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "\t#define MR_maybe_local_thread_engine_base ", (MR_String) "MR_local_thread_engine_base\n");
        mercury__io__write_string_4_p_0(Stream_7, Var_39);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#endif\n");
        ll_backend__llds_out__llds_out_instr__output_instruction_list_7_p_0(Info_6, Stream_7, Instrs_14, LabelOutputInfo_11, (MR_Integer) 0);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "\t#define MR_maybe_local_thread_engine_base ", (MR_String) "MR_thread_engine_base\n");
        mercury__io__write_string_4_p_0(Stream_7, Var_51);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#endif\n");
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_6_p_0(
  MR_Word Stream_7,
  MR_String VarName_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  MR_bool succeeded;
  MR_Word GlobalVar_11 = (MR_Word) (VarName_8);
  MR_Word STATE_VARIABLE_DeclSet_17_17;
  MR_Word Var_16;

  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) (GlobalVar_11));
  }
  succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(Var_16, STATE_VARIABLE_DeclSet_0_12, &STATE_VARIABLE_DeclSet_17_17);
  if (succeeded)
  {
    MR_String Var_22;

    *STATE_VARIABLE_DeclSet_13 = STATE_VARIABLE_DeclSet_17_17;
    Var_22 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(GlobalVar_11);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "extern MR_Word ");
    mercury__io__write_string_4_p_0(Stream_7, Var_22);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
  }
  else
    *STATE_VARIABLE_DeclSet_13 = STATE_VARIABLE_DeclSet_0_12;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_13;

  ll_backend__llds_out__llds_out_file__output_c_global_var_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_13));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word AnnotatedProc_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  MR_Word Proc_13 = ((MR_Word) ((MR_hl_field(0, AnnotatedProc_10, (MR_Integer) 0))));
  MR_Word Instrs_14 = ((MR_Word) ((MR_hl_field(0, Proc_13, (MR_Integer) 5))));
  MR_Word CGlobalVarSet_15 = ((MR_Word) ((MR_hl_field(0, Proc_13, (MR_Integer) 8))));
  MR_Word CGlobalVars_16;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_DeclSet_22_22;
  MR_Word Var_24;
  MR_Box conv2_STATE_VARIABLE_DeclSet_22_22;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;
  MR_Box conv5_STATE_VARIABLE_DeclSet_18;
  MR_Box conv4_STATE_VARIABLE_IO_20;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CGlobalVarSet_15, &CGlobalVars_16);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[6]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, CGlobalVars_16, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_22_22));
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[12]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0_2));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Instrs_14, ((MR_Box) (STATE_VARIABLE_DeclSet_22_22)), &conv5_STATE_VARIABLE_DeclSet_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_20);
  *STATE_VARIABLE_DeclSet_18 = ((MR_Word) (conv5_STATE_VARIABLE_DeclSet_18));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_5_p_0(
  MR_Word Stream_6,
  MR_Word EntryLabelToLayoutMap_7,
  MR_Word Label_8)
{
  MR_bool succeeded;
  MR_String SuffixOpen_11;
  MR_Word ProcLabel_12;
  MR_String TabInitMacro_13;
  MR_String Var_25;
  MR_Box conv0__LayoutId_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), EntryLabelToLayoutMap_7, ((MR_Box) (Label_8)), &conv0__LayoutId_10);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    SuffixOpen_11 = (MR_String) "_sl(";
  else
    SuffixOpen_11 = (MR_String) "(";
  if (((MR_tag((MR_Word) Label_8)) == (MR_Integer) 1))
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Label_8, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Unsigned) ((MR_hl_field(1, Label_8, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (Var_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ProcLabel_12 = Var_36;
          TabInitMacro_13 = (MR_String) "\tMR_init_local1";
        }
        break;
      case (MR_Integer) 2:
        {
          ProcLabel_12 = Var_36;
          TabInitMacro_13 = (MR_String) "\tMR_init_entry1";
        }
        break;
      case (MR_Integer) 1:
        {
          ProcLabel_12 = Var_36;
          TabInitMacro_13 = (MR_String) "\tMR_init_entry1";
        }
        break;
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_c_entry_label_init\'/5", (MR_String) "internal label");
      return;
    }
  mercury__io__write_string_4_p_0(Stream_6, TabInitMacro_13);
  mercury__io__write_string_4_p_0(Stream_6, SuffixOpen_11);
  Var_25 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_12);
  mercury__io__write_string_4_p_0(Stream_6, Var_25);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ");\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tMR_INIT_PROC_LAYOUT_ADDR(");
  ll_backend__llds_out__llds_out_code_addr__output_label_4_p_0(Stream_6, Label_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ");\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_4_p_0(
  MR_Tuple HeadVar__1_1,
  MR_Word Stream_7)
{
  MR_Integer LabelNum_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer SlotNum_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  mercury__io__write_int_4_p_0(Stream_7, LabelNum_5);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
  mercury__io__write_int_4_p_0(Stream_7, SlotNum_6);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__write_int_pair_4_p_0(((MR_Tuple) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String Suffix_10,
  MR_Word ProcLabel_11,
  MR_Word LabelSlotNums_12)
{
  MR_String ModuleName_14 = ((MR_String) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
  MR_Integer Var_23;
  MR_String Var_26;
  MR_String Var_67;

  Var_23 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), LabelSlotNums_12);
  Var_26 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_11);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\tMR_init_label");
  mercury__io__write_string_4_p_0(Stream_9, Suffix_10);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), Var_23, &Var_67);
  mercury__io__write_string_4_p_0(Stream_9, Var_67);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_9, Var_26);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_9, ModuleName_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n\t\t");
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[7]), (MR_String) ", ", LabelSlotNums_12, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_String Suffix_9,
  MR_Word HeadVar__4_4)
{
  MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word RevLabelSlotNums_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word LabelSlotNums_13;
  MR_Word LabelSlotNumChunks_15;
  MR_Word Var_18;
  MR_Box conv0_STATE_VARIABLE_IO_17;

  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), RevLabelSlotNums_11, &LabelSlotNums_13);
  mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), LabelSlotNums_13, (MR_Integer) 10, &LabelSlotNumChunks_15);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[11]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (Suffix_9));
    MR_hl_field(0, Var_18, 6) = ((MR_Box) (ProcLabel_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, LabelSlotNumChunks_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_c_internal_label_no_layout_init_chunk__1140__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_5_p_0(
  MR_Word Stream_6,
  MR_Word ProcLabel_7,
  MR_Word LabelNums_8)
{
  MR_Integer Var_16;
  MR_String Var_19;
  MR_String Var_35;

  Var_16 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LabelNums_8);
  Var_19 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tMR_init_label");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), Var_16, &Var_35);
  mercury__io__write_string_4_p_0(Stream_6, Var_35);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_6, Var_19);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[6]), (MR_String) ",", LabelNums_8, Stream_6);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Word ProcLabel_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word RevLabelNums_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word LabelNums_9;
  MR_Word LabelNumChunks_11;
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLabelNums_7, &LabelNums_9);
  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LabelNums_9, (MR_Integer) 10, &LabelNumChunks_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_10[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Stream_5));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (ProcLabel_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, LabelNumChunks_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_7_p_0(
  MR_Word _Info_8,
  MR_Word Stream_9,
  MR_Word Label_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_7_p_0(Stream_9, Label_10, STATE_VARIABLE_DeclSet_0_19, STATE_VARIABLE_DeclSet_20);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Word Label_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  MR_String DeclMacro_14;
  MR_Word Var_34;
  MR_Word Var_36;

  if (((MR_tag((MR_Word) Label_10)) == (MR_Integer) 1))
  {
    MR_Word Var_38 = ((MR_Unsigned) ((MR_hl_field(1, Label_10, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (Var_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DeclMacro_14 = (MR_String) "MR_decl_local";
        break;
      case (MR_Integer) 2:
        DeclMacro_14 = (MR_String) "MR_def_extern_entry";
        break;
      case (MR_Integer) 1:
        DeclMacro_14 = (MR_String) "MR_decl_static";
        break;
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_record_entry_label_decl\'/7", (MR_String) "internal label");
      return;
    }
  mercury__io__write_string_4_p_0(Stream_9, DeclMacro_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
  ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_4_p_0(Stream_9, Label_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Label_10));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_36));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_34, STATE_VARIABLE_DeclSet_0_19, STATE_VARIABLE_DeclSet_20);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
  MR_Word ProcLabel_5,
  MR_Integer LabelNum_6,
  MR_Word STATE_VARIABLE_DeclSet_0_9,
  MR_Word * STATE_VARIABLE_DeclSet_10)
{
  MR_Word DeclId_8;
  MR_Word Var_11;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (LabelNum_6));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (ProcLabel_5));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
  }
  {
    DeclId_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, DeclId_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, DeclId_8, 1) = ((MR_Box) (Var_11));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_8, STATE_VARIABLE_DeclSet_0_9, STATE_VARIABLE_DeclSet_10);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_10;

  ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_10));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_record_internal_label_decl_group__1006__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0(
  MR_Word Stream_8,
  MR_Word ProcLabel_9,
  MR_Word LabelNums_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  MR_Integer Var_21;
  MR_String Var_24;
  MR_Word Var_32;
  MR_String Var_46;
  MR_Box conv1_STATE_VARIABLE_DeclSet_14;

  Var_21 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LabelNums_10);
  Var_24 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_decl_label");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), Var_21, &Var_46);
  mercury__io__write_string_4_p_0(Stream_8, Var_46);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_8, Var_24);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[5]), (MR_String) ",", LabelNums_10, Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")\n");
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_9[2]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0_2));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (ProcLabel_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), Var_32, LabelNums_10, ((MR_Box) (STATE_VARIABLE_DeclSet_0_13)), &conv1_STATE_VARIABLE_DeclSet_14);
  *STATE_VARIABLE_DeclSet_14 = ((MR_Word) (conv1_STATE_VARIABLE_DeclSet_14));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_DeclSet_10;

  ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DeclSet_10);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_10));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_14;

  ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_14));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0(
  MR_Word Stream_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_Word ProcLabel_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word RevLabelNums_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word LabelNums_12;
  MR_Word LabelNumChunks_14;
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_DeclSet_20_20;
  MR_Word Var_22;
  MR_Box conv2_STATE_VARIABLE_DeclSet_20_20;
  MR_Box conv1_STATE_VARIABLE_IO_18;
  MR_Box conv4_STATE_VARIABLE_DeclSet_16;

  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLabelNums_9, &LabelNums_12);
  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LabelNums_12, (MR_Integer) 10, &LabelNumChunks_14);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[10]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (ProcLabel_8));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[1]), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, LabelNumChunks_14, ((MR_Box) (STATE_VARIABLE_DeclSet_0_15)), &conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
  STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_20_20));
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_9[2]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0_2));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ProcLabel_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), Var_22, LabelNums_12, ((MR_Box) (STATE_VARIABLE_DeclSet_20_20)), &conv4_STATE_VARIABLE_DeclSet_16);
  *STATE_VARIABLE_DeclSet_16 = ((MR_Word) (conv4_STATE_VARIABLE_DeclSet_16));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word Decl_11,
  MR_Word * Res_12,
  MR_Word STATE_VARIABLE_AlreadyDone_0_19,
  MR_Word * STATE_VARIABLE_AlreadyDone_20)
{
  MR_bool succeeded;
  MR_Word Lang_15 = ((((MR_Unsigned) ((MR_hl_field(0, Decl_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_17 = ((MR_Word) ((MR_hl_field(0, Decl_11, (MR_Integer) 1))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, Decl_11, (MR_Integer) 2))));

  switch (Lang_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_AlreadyDone_23_23;

        succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0), ((MR_Box) (LiteralOrInclude_17)), STATE_VARIABLE_AlreadyDone_0_19, &STATE_VARIABLE_AlreadyDone_23_23);
        if (succeeded)
        {
          *STATE_VARIABLE_AlreadyDone_20 = STATE_VARIABLE_AlreadyDone_23_23;
          ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_9_p_0(Info_9, Stream_10, (MR_String) "foreign_decl", Lang_15, LiteralOrInclude_17, Context_18, Res_12);
        }
        else
        {
          *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_AlreadyDone_20 = STATE_VARIABLE_AlreadyDone_0_19;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_header_include_line\'/8", (MR_String) "foreign decl code other than C");
        return;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_body_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10)
{
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, ForeignBodyCode_9, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_13 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_9, (MR_Integer) 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_9, (MR_Integer) 2))));

  switch (Lang_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_9_p_0(Info_7, Stream_8, (MR_String) "foreign_code", Lang_12, LiteralOrInclude_13, Context_14, Res_10);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_body_code\'/6", (MR_String) "unimplemented: foreign code other than C");
        return;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_String PragmaType_12,
  MR_Word Lang_13,
  MR_Word LiteralOrInclude_14,
  MR_Word Context_15,
  MR_Word * Res_16)
{
  MR_bool succeeded;
  MR_Word AutoComments_18 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 7))) >> 16)) & (MR_Integer) 1);
  MR_Word ForeignLineNumbers_19 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 7))) >> 15)) & (MR_Integer) 1);

  succeeded = (AutoComments_18 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (ForeignLineNumbers_19 == (MR_Integer) 1);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "/* ");
    parse_tree__prog_out__write_context_4_p_0(Stream_11, Context_15);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) " pragma ");
    mercury__io__write_string_4_p_0(Stream_11, PragmaType_12);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "(");
    mercury__io__write_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Stream_11, ((MR_Box) (Lang_13)));
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) ") */\n");
  }
  if (((MR_tag((MR_Word) LiteralOrInclude_14)) == (MR_Integer) 1))
  {
    MR_String IncludeFileName_21 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_14, (MR_Integer) 0))));
    MR_String SourceFileName_22 = ((MR_String) ((MR_hl_field(0, Info_10, (MR_Integer) 2))));
    MR_String IncludePath_23;
    MR_Word Var_39;

    parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_22, IncludeFileName_21, &IncludePath_23);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (IncludePath_23));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    ll_backend__llds_out__llds_out_util__output_set_line_num_5_p_0(Stream_11, ForeignLineNumbers_19, Var_39);
    libs__file_util__write_include_file_contents_5_p_0(Stream_11, IncludePath_23, Res_16);
  }
  else
  {
    MR_String Code_20 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_14, (MR_Integer) 0))));

    ll_backend__llds_out__llds_out_util__output_set_line_num_5_p_0(Stream_11, ForeignLineNumbers_19, Context_15);
    mercury__io__write_string_4_p_0(Stream_11, Code_20);
    *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__io__nl_3_p_0(Stream_11);
  ll_backend__llds_out__llds_out_util__output_reset_line_num_4_p_0(Stream_11, ForeignLineNumbers_19);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_18;

  ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_18));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word AnnotatedModule_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  MR_String ModuleName_13 = ((MR_String) ((MR_hl_field(0, AnnotatedModule_10, (MR_Integer) 0))));
  MR_Word AnnotatedProcedures_14 = ((MR_Word) ((MR_hl_field(0, AnnotatedModule_10, (MR_Integer) 1))));
  MR_Word EntryLabels_15 = ((MR_Word) ((MR_hl_field(0, AnnotatedModule_10, (MR_Integer) 2))));
  MR_Word InternalLabels_16 = ((MR_Word) ((MR_hl_field(0, AnnotatedModule_10, (MR_Integer) 3))));
  MR_Word Var_23;
  MR_Word Var_36;
  MR_Box conv2_STATE_VARIABLE_DeclSet_18;
  MR_Box conv1_STATE_VARIABLE_IO_25_25;
  MR_Box conv3_STATE_VARIABLE_IO_37_37;

  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[9]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, AnnotatedProcedures_14, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
  *STATE_VARIABLE_DeclSet_18 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_18));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_BEGIN_MODULE(");
  mercury__io__write_string_4_p_0(Stream_9, ModuleName_13);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
  ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0(Info_8, Stream_9, EntryLabels_15, InternalLabels_16);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_BEGIN_CODE\n");
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_10[1]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0_2));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_36, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, AnnotatedProcedures_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_37_37);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_END_MODULE\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__output_c_entry_label_init_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word EntryLabels_9,
  MR_Word InternalLabels_10)
{
  MR_Word EntryLabelToLayoutMap_12 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 4))));
  MR_Word InternalLabelToLayoutMap_13;
  MR_Word NoLayoutInternalMap_14;
  MR_Word NoVarLayoutInternalMap_15;
  MR_Word SVarLayoutInternalMap_16;
  MR_Word LVarLayoutInternalMap_17;
  MR_Word NoLayoutInternalList_18;
  MR_Word NoVarLayoutInternalList_19;
  MR_Word SVarLayoutInternalList_20;
  MR_Word LVarLayoutInternalList_21;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Box conv0_STATE_VARIABLE_IO_25_25;
  MR_Box conv1_STATE_VARIABLE_IO_31_31;
  MR_Box conv2_STATE_VARIABLE_IO_33_33;
  MR_Box conv3_STATE_VARIABLE_IO_36_36;
  MR_Box conv4_STATE_VARIABLE_IO_23;

  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_10[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (EntryLabelToLayoutMap_12));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, EntryLabels_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25_25);
  InternalLabelToLayoutMap_13 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 3))));
  Var_26 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_27 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]));
  Var_28 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]));
  Var_29 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]));
  ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(InternalLabelToLayoutMap_13, InternalLabels_10, Var_26, &NoLayoutInternalMap_14, Var_27, &NoVarLayoutInternalMap_15, Var_28, &SVarLayoutInternalMap_16, Var_29, &LVarLayoutInternalMap_17);
  mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NoLayoutInternalMap_14, &NoLayoutInternalList_18);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_9[1]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_2));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (Stream_8));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, NoLayoutInternalList_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
  mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), NoVarLayoutInternalMap_15, &NoVarLayoutInternalList_19);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[5]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_3));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_32, 5) = ((MR_Box) ((MR_String) "_nvi"));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, NoVarLayoutInternalList_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
  mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), SVarLayoutInternalMap_16, &SVarLayoutInternalList_20);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[5]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_4));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) ((MR_String) "_svi"));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, SVarLayoutInternalList_20, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_36_36);
  mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), LVarLayoutInternalMap_17, &LVarLayoutInternalList_21);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[5]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_6_p_0_5));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_38, 5) = ((MR_Box) ((MR_String) "_lvi"));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, LVarLayoutInternalList_21, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_23);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NoLayoutMap_0_3,
  MR_Word * STATE_VARIABLE_NoLayoutMap_4,
  MR_Word STATE_VARIABLE_NoVarLayoutMap_0_5,
  MR_Word * STATE_VARIABLE_NoVarLayoutMap_6,
  MR_Word STATE_VARIABLE_SVarLayoutMap_0_7,
  MR_Word * STATE_VARIABLE_SVarLayoutMap_8,
  MR_Word STATE_VARIABLE_LVarLayoutMap_0_9,
  MR_Word * STATE_VARIABLE_LVarLayoutMap_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LVarLayoutMap_10 = STATE_VARIABLE_LVarLayoutMap_0_9;
      *STATE_VARIABLE_SVarLayoutMap_8 = STATE_VARIABLE_SVarLayoutMap_0_7;
      *STATE_VARIABLE_NoVarLayoutMap_6 = STATE_VARIABLE_NoVarLayoutMap_0_5;
      *STATE_VARIABLE_NoLayoutMap_4 = STATE_VARIABLE_NoLayoutMap_0_3;
    }
    else
    {
      MR_Word Label_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Labels_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_NoVarLayoutMap_48_48;
      MR_Word STATE_VARIABLE_SVarLayoutMap_49_49;
      MR_Word STATE_VARIABLE_LVarLayoutMap_50_50;
      MR_Word STATE_VARIABLE_NoLayoutMap_53_53;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_NoLayoutMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_NoVarLayoutMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_SVarLayoutMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_LVarLayoutMap_0_9;

      if (((MR_tag((MR_Word) Label_25)) == (MR_Integer) 1))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "entry label");
          return;
        }
      else
      {
        MR_Integer LabelNum_31 = ((MR_Integer) ((MR_hl_field(0, Label_25, (MR_Integer) 0))));
        MR_Word ProcLabel_32 = ((MR_Word) ((MR_hl_field(0, Label_25, (MR_Integer) 1))));
        MR_Word Slot_33;
        MR_Box conv0_Slot_33;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), HeadVar__1_1, ((MR_Box) (Label_25)), &conv0_Slot_33);
        if (succeeded)
        {
          Slot_33 = ((MR_Word) (conv0_Slot_33));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word ArrayName_34 = ((MR_Word) ((MR_hl_field(0, Slot_33, (MR_Integer) 0))));
          MR_Integer SlotNum_35 = ((MR_Integer) ((MR_hl_field(0, Slot_33, (MR_Integer) 1))));
          MR_Word Vars_36;

          succeeded = ((MR_tag((MR_Word) ArrayName_34)) == (MR_Integer) 1);
          if (succeeded)
          {
            Vars_36 = ((MR_Unsigned) ((MR_hl_field(1, ArrayName_34, (MR_Integer) 0))) & (MR_Integer) 3);
            {
              MR_Tuple Pair_37;

              {
                Pair_37 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Pair_37, 0) = ((MR_Box) (LabelNum_31));
                MR_hl_field(0, Pair_37, 1) = ((MR_Box) (SlotNum_35));
              }
              switch (Vars_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), ((MR_Box) (ProcLabel_32)), ((MR_Box) (Pair_37)), STATE_VARIABLE_LVarLayoutMap_0_9, &STATE_VARIABLE_LVarLayoutMap_50_50);
                    STATE_VARIABLE_NoVarLayoutMap_48_48 = STATE_VARIABLE_NoVarLayoutMap_0_5;
                    STATE_VARIABLE_SVarLayoutMap_49_49 = STATE_VARIABLE_SVarLayoutMap_0_7;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), ((MR_Box) (ProcLabel_32)), ((MR_Box) (Pair_37)), STATE_VARIABLE_NoVarLayoutMap_0_5, &STATE_VARIABLE_NoVarLayoutMap_48_48);
                    STATE_VARIABLE_SVarLayoutMap_49_49 = STATE_VARIABLE_SVarLayoutMap_0_7;
                    STATE_VARIABLE_LVarLayoutMap_50_50 = STATE_VARIABLE_LVarLayoutMap_0_9;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]), ((MR_Box) (ProcLabel_32)), ((MR_Box) (Pair_37)), STATE_VARIABLE_SVarLayoutMap_0_7, &STATE_VARIABLE_SVarLayoutMap_49_49);
                    STATE_VARIABLE_NoVarLayoutMap_48_48 = STATE_VARIABLE_NoVarLayoutMap_0_5;
                    STATE_VARIABLE_LVarLayoutMap_50_50 = STATE_VARIABLE_LVarLayoutMap_0_9;
                  }
                  break;
              }
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "bad slot type");
              return;
            }
          STATE_VARIABLE_NoLayoutMap_53_53 = STATE_VARIABLE_NoLayoutMap_0_3;
        }
        else
        {
          mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ProcLabel_32)), ((MR_Box) (LabelNum_31)), STATE_VARIABLE_NoLayoutMap_0_3, &STATE_VARIABLE_NoLayoutMap_53_53);
          STATE_VARIABLE_LVarLayoutMap_50_50 = STATE_VARIABLE_LVarLayoutMap_0_9;
          STATE_VARIABLE_SVarLayoutMap_49_49 = STATE_VARIABLE_SVarLayoutMap_0_7;
          STATE_VARIABLE_NoVarLayoutMap_48_48 = STATE_VARIABLE_NoVarLayoutMap_0_5;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Labels_26;
      next_value_of_STATE_VARIABLE_NoLayoutMap_0_3 = STATE_VARIABLE_NoLayoutMap_53_53;
      next_value_of_STATE_VARIABLE_NoVarLayoutMap_0_5 = STATE_VARIABLE_NoVarLayoutMap_48_48;
      next_value_of_STATE_VARIABLE_SVarLayoutMap_0_7 = STATE_VARIABLE_SVarLayoutMap_49_49;
      next_value_of_STATE_VARIABLE_LVarLayoutMap_0_9 = STATE_VARIABLE_LVarLayoutMap_50_50;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_NoLayoutMap_0_3 = next_value_of_STATE_VARIABLE_NoLayoutMap_0_3;
      STATE_VARIABLE_NoVarLayoutMap_0_5 = next_value_of_STATE_VARIABLE_NoVarLayoutMap_0_5;
      STATE_VARIABLE_SVarLayoutMap_0_7 = next_value_of_STATE_VARIABLE_SVarLayoutMap_0_7;
      STATE_VARIABLE_LVarLayoutMap_0_9 = next_value_of_STATE_VARIABLE_LVarLayoutMap_0_9;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
  MR_Word EntryLabelToLayoutMap_3,
  MR_Word Label_4)
{
  MR_bool succeeded;
  MR_Box conv0_Var_5;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), EntryLabelToLayoutMap_3, ((MR_Box) (Label_4)), &conv0_Var_5);
  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
  MR_Word InternalLabelToLayoutMap_3,
  MR_Word Label_4)
{
  MR_bool succeeded;
  MR_Box conv0_Var_5;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), InternalLabelToLayoutMap_3, ((MR_Box) (Label_4)), &conv0_Var_5);
  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
  MR_Word Info_3,
  MR_Word AnnotatedModule_4)
{
  MR_bool succeeded;
  MR_Word EntryLabels_7 = ((MR_Word) ((MR_hl_field(0, AnnotatedModule_4, (MR_Integer) 2))));
  MR_Word InternalLabels_8 = ((MR_Word) ((MR_hl_field(0, AnnotatedModule_4, (MR_Integer) 3))));
  MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 4))));
  MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 3))));

  {
    MR_Word TypeCtorInfo_64_64;
    MR_Word Var_13;
    MR_Box conv0_Var_10;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), Var_89);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeCtorInfo_64_64 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[3]));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1));
        MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_89));
      }
      succeeded = mercury__list__find_first_match_3_p_0(TypeCtorInfo_64_64, Var_13, InternalLabels_8, &conv0_Var_10);
      if (succeeded)
        succeeded = MR_TRUE;
    }
  }
  if (!(succeeded))
  {
    MR_Word TypeCtorInfo_68_68;
    MR_Word Var_14;
    MR_Box conv1_Var_12;

    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0), Var_88);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeCtorInfo_68_68 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[4]));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (Var_88));
      }
      succeeded = mercury__list__find_first_match_3_p_0(TypeCtorInfo_68_68, Var_14, EntryLabels_7, &conv1_Var_12);
      if (succeeded)
        succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_2_6_p_0(
  MR_Word Globals_7,
  MR_Word CFile_8,
  MR_Word Stream_9,
  MR_Word * Errors_10)
{
  MR_Word DeclSet0_12;
  MR_Word Var_13;

  ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&DeclSet0_12);
  ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0(Globals_7, Stream_9, CFile_8, Errors_10, DeclSet0_12, &Var_13);
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv34_HeadVar__2_2;

  succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv34_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv34_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv33_HeadVar__2_2;

  succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv33_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv33_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__217__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv29_STATE_VARIABLE_DeclSet_18;

  ll_backend__llds_out__llds_out_file__output_annotated_c_module_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_STATE_VARIABLE_DeclSet_18);
  *wrapper_arg_3 = ((MR_Box) (conv29_STATE_VARIABLE_DeclSet_18));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_Res_10;

  ll_backend__llds_out__llds_out_file__output_foreign_body_code_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv27_Res_10);
  *wrapper_arg_2 = ((MR_Box) (conv27_Res_10));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_HeadVar__5_5;

  ll_backend__layout_out__output_closure_layout_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv24_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv21_HeadVar__5_5;

  ll_backend__layout_out__output_module_layout_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv21_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv18_HeadVar__5_5;

  ll_backend__layout_out__output_proc_layout_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv18_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_HeadVar__5_5;

  ll_backend__rtti_out__output_rtti_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv15_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__5_5;

  ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__5_5;

  ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__5_5;

  ll_backend__llds_out__llds_out_global__output_tabling_info_struct_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__5_5));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_4;

  ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0(
  MR_Word Globals_9,
  MR_Word Stream_10,
  MR_Word CFile_11,
  MR_Word * Errors_12,
  MR_Word STATE_VARIABLE_DeclSet_0_73,
  MR_Word * STATE_VARIABLE_DeclSet_74)
{
  MR_bool succeeded;
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 0))));
  MR_Word C_HeaderLines_16 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 1))));
  MR_Word ForeignBodyCodes_17 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 2))));
  MR_Word Exports_18 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 3))));
  MR_Word TablingInfoStructs_19 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 4))));
  MR_Word ScalarCommonDatas_20 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 5))));
  MR_Word VectorCommonDatas_21 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 6))));
  MR_Word RttiDatas_22 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 7))));
  MR_Word PseudoTypeInfos_23 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 8))));
  MR_Word HLDSVarNums_24 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 9))));
  MR_Word ShortLocns_25 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 10))));
  MR_Word LongLocns_26 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 11))));
  MR_Word UserEventVarNums_27 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 12))));
  MR_Word UserEvents_28 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 13))));
  MR_Word NoVarLabelLayouts_29 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 14))));
  MR_Word SVarLabelLayouts_30 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 15))));
  MR_Word LVarLabelLayouts_31 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 16))));
  MR_Word InternalLabelToLayoutMap_32 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 17))));
  MR_Word EntryLabelToLayoutMap_33 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 18))));
  MR_Word CallSiteStatics_34 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 19))));
  MR_Word CoveragePoints_35 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 20))));
  MR_Word ProcStatics_36 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 21))));
  MR_Word ProcHeadVarNums_37 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 22))));
  MR_Word ProcVarNames_38 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 23))));
  MR_Word ProcBodyBytecodes_39 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 24))));
  MR_Word TSStringTable_40 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 25))));
  MR_Word TableIoEntries_41 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 26))));
  MR_Word TableIoEntryMap_42 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 27))));
  MR_Word ProcEventLayouts_43 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 28))));
  MR_Word ExecTraces_44 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 29))));
  MR_Word ProcLayoutDatas_45 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 30))));
  MR_Word ModuleLayoutDatas_46 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 31))));
  MR_Word ClosureLayoutDatas_47 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 32))));
  MR_Word AllocSites_48 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 33))));
  MR_Word AllocSiteMap_49 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 34))));
  MR_Word Modules_50 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 35))));
  MR_Word UserInitPredCNames_51 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 36))));
  MR_Word UserFinalPredCNames_52 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 37))));
  MR_Word ComplexityProcs_53 = ((MR_Word) ((MR_hl_field(0, CFile_11, (MR_Integer) 38))));
  MR_String Version_54;
  MR_String Fullarch_55;
  MR_String SourceFileName_56;
  MR_Word Info_57;
  MR_Word AnnotatedModules_58;
  MR_Word EntryLabelsCord_59;
  MR_Word InternalLabelsCord_60;
  MR_Word EnvVarNameSet_61;
  MR_Word EntryLabels_62;
  MR_Word InternalLabels_63;
  MR_Word EnvVarNames_64;
  MR_Word ForeignIncludeResults_65;
  MR_Word ForeignCodeResults_66;
  MR_Word WriteForeignExportDefn_67;
  MR_Word ErrorsA_71;
  MR_Word ErrorsB_72;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_88;
  MR_Word STATE_VARIABLE_DeclSet_89_89;
  MR_Word Var_91;
  MR_Word STATE_VARIABLE_DeclSet_92_92;
  MR_Word STATE_VARIABLE_DeclSet_94_94;
  MR_Word STATE_VARIABLE_DeclSet_96_96;
  MR_Word Var_98;
  MR_Word STATE_VARIABLE_DeclSet_99_99;
  MR_Word Var_101;
  MR_Word STATE_VARIABLE_DeclSet_102_102;
  MR_Word Var_104;
  MR_Word STATE_VARIABLE_DeclSet_105_105;
  MR_Word Var_107;
  MR_Word STATE_VARIABLE_DeclSet_108_108;
  MR_Word Var_112;
  MR_Word STATE_VARIABLE_DeclSet_113_113;
  MR_Word Var_115;
  MR_Word STATE_VARIABLE_DeclSet_116_116;
  MR_Word Var_118;
  MR_Word STATE_VARIABLE_DeclSet_119_119;
  MR_Word STATE_VARIABLE_DeclSet_122_122;
  MR_Word STATE_VARIABLE_DeclSet_124_124;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word STATE_VARIABLE_DeclSet_129_129;
  MR_Box conv2_STATE_VARIABLE_DeclSet_89_89;
  MR_Box conv1_STATE_VARIABLE_IO_90_90;
  MR_Box conv5_STATE_VARIABLE_DeclSet_92_92;
  MR_Box conv4_STATE_VARIABLE_IO_93_93;
  MR_Box conv8_STATE_VARIABLE_DeclSet_99_99;
  MR_Box conv7_STATE_VARIABLE_IO_100_100;
  MR_Box conv11_STATE_VARIABLE_DeclSet_102_102;
  MR_Box conv10_STATE_VARIABLE_IO_103_103;
  MR_Box conv14_STATE_VARIABLE_DeclSet_105_105;
  MR_Box conv13_STATE_VARIABLE_IO_106_106;
  MR_Box conv17_STATE_VARIABLE_DeclSet_108_108;
  MR_Box conv16_STATE_VARIABLE_IO_109_109;
  MR_Box conv20_STATE_VARIABLE_DeclSet_113_113;
  MR_Box conv19_STATE_VARIABLE_IO_114_114;
  MR_Box conv23_STATE_VARIABLE_DeclSet_116_116;
  MR_Box conv22_STATE_VARIABLE_IO_117_117;
  MR_Box conv26_STATE_VARIABLE_DeclSet_119_119;
  MR_Box conv25_STATE_VARIABLE_IO_120_120;
  MR_Box conv28_STATE_VARIABLE_IO_127_127;
  MR_Box conv31_STATE_VARIABLE_DeclSet_129_129;
  MR_Box conv30_STATE_VARIABLE_IO_130_130;
  MR_Box conv32_STATE_VARIABLE_IO_134_134;

  mercury__library__version_2_p_0(&Version_54, &Fullarch_55);
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_15, &SourceFileName_56);
  backend_libs__c_util__output_c_file_intro_and_grade_7_p_0(Globals_9, Stream_10, SourceFileName_56, Version_54, Fullarch_55);
  Info_57 = ll_backend__llds_out__llds_out_util__init_llds_out_info_7_f_0(ModuleName_15, SourceFileName_56, Globals_9, InternalLabelToLayoutMap_32, EntryLabelToLayoutMap_33, TableIoEntryMap_42, AllocSiteMap_49);
  Var_79 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  Var_80 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  Var_81 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(Info_57, Modules_50, &AnnotatedModules_58, Var_79, &EntryLabelsCord_59, Var_80, &InternalLabelsCord_60, Var_81, &EnvVarNameSet_61);
  EntryLabels_62 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), EntryLabelsCord_59);
  InternalLabels_63 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), InternalLabelsCord_60);
  EnvVarNames_64 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNameSet_61);
  backend_libs__c_util__output_init_c_comment_7_p_0(Stream_10, ModuleName_15, UserInitPredCNames_51, UserFinalPredCNames_52, EnvVarNames_64);
  ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_4_p_0(Info_57, Stream_10);
  ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_6_p_0(Info_57, Stream_10, C_HeaderLines_16, &ForeignIncludeResults_65);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__llds_out__llds_out_file__output_static_linkage_define_3_p_0(Stream_10);
  {
    Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_88, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[2]));
    MR_hl_field(0, Var_88, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_1));
    MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_88, 3) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_88, ScalarCommonDatas_20, ((MR_Box) (STATE_VARIABLE_DeclSet_0_73)), &conv2_STATE_VARIABLE_DeclSet_89_89, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_90_90);
  STATE_VARIABLE_DeclSet_89_89 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_89_89));
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_2));
    MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_91, 3) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_91, VectorCommonDatas_21, ((MR_Box) (STATE_VARIABLE_DeclSet_89_89)), &conv5_STATE_VARIABLE_DeclSet_92_92, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_93_93);
  STATE_VARIABLE_DeclSet_92_92 = ((MR_Word) (conv5_STATE_VARIABLE_DeclSet_92_92));
  ll_backend__rtti_out__output_rtti_data_decl_list_7_p_0(Info_57, Stream_10, RttiDatas_22, STATE_VARIABLE_DeclSet_92_92, &STATE_VARIABLE_DeclSet_94_94);
  ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0(Info_57, Stream_10, EntryLabels_62, InternalLabels_63, STATE_VARIABLE_DeclSet_94_94, &STATE_VARIABLE_DeclSet_96_96);
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[1]));
    MR_hl_field(0, Var_98, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_3));
    MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_98, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_98, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, TablingInfoStructs_19, ((MR_Box) (STATE_VARIABLE_DeclSet_96_96)), &conv8_STATE_VARIABLE_DeclSet_99_99, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_100_100);
  STATE_VARIABLE_DeclSet_99_99 = ((MR_Word) (conv8_STATE_VARIABLE_DeclSet_99_99));
  {
    Var_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_101, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[2]));
    MR_hl_field(0, Var_101, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_4));
    MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_101, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_101, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_101, ScalarCommonDatas_20, ((MR_Box) (STATE_VARIABLE_DeclSet_99_99)), &conv11_STATE_VARIABLE_DeclSet_102_102, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_103_103);
  STATE_VARIABLE_DeclSet_102_102 = ((MR_Word) (conv11_STATE_VARIABLE_DeclSet_102_102));
  {
    Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_104, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[3]));
    MR_hl_field(0, Var_104, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_5));
    MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_104, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_104, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, VectorCommonDatas_21, ((MR_Box) (STATE_VARIABLE_DeclSet_102_102)), &conv14_STATE_VARIABLE_DeclSet_105_105, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_106_106);
  STATE_VARIABLE_DeclSet_105_105 = ((MR_Word) (conv14_STATE_VARIABLE_DeclSet_105_105));
  {
    Var_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_107, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[4]));
    MR_hl_field(0, Var_107, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_6));
    MR_hl_field(0, Var_107, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_107, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_107, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_107, RttiDatas_22, ((MR_Box) (STATE_VARIABLE_DeclSet_105_105)), &conv17_STATE_VARIABLE_DeclSet_108_108, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_109_109);
  STATE_VARIABLE_DeclSet_108_108 = ((MR_Word) (conv17_STATE_VARIABLE_DeclSet_108_108));
  mercury__io__nl_3_p_0(Stream_10);
  ll_backend__layout_out__output_layout_array_decls_23_p_0(Info_57, Stream_10, PseudoTypeInfos_23, HLDSVarNums_24, ShortLocns_25, LongLocns_26, UserEventVarNums_27, UserEvents_28, NoVarLabelLayouts_29, SVarLabelLayouts_30, LVarLabelLayouts_31, CallSiteStatics_34, CoveragePoints_35, ProcStatics_36, ProcHeadVarNums_37, ProcVarNames_38, ProcBodyBytecodes_39, TableIoEntries_41, ProcEventLayouts_43, ExecTraces_44, AllocSites_48);
  {
    Var_112 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_112, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[5]));
    MR_hl_field(0, Var_112, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_7));
    MR_hl_field(0, Var_112, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_112, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_112, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_112, ProcLayoutDatas_45, ((MR_Box) (STATE_VARIABLE_DeclSet_108_108)), &conv20_STATE_VARIABLE_DeclSet_113_113, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_114_114);
  STATE_VARIABLE_DeclSet_113_113 = ((MR_Word) (conv20_STATE_VARIABLE_DeclSet_113_113));
  {
    Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_115, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[6]));
    MR_hl_field(0, Var_115, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_8));
    MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_115, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_115, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, ModuleLayoutDatas_46, ((MR_Box) (STATE_VARIABLE_DeclSet_113_113)), &conv23_STATE_VARIABLE_DeclSet_116_116, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_117_117);
  STATE_VARIABLE_DeclSet_116_116 = ((MR_Word) (conv23_STATE_VARIABLE_DeclSet_116_116));
  {
    Var_118 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_118, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[7]));
    MR_hl_field(0, Var_118, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_9));
    MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_118, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_118, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, ClosureLayoutDatas_47, ((MR_Box) (STATE_VARIABLE_DeclSet_116_116)), &conv26_STATE_VARIABLE_DeclSet_119_119, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_120_120);
  STATE_VARIABLE_DeclSet_119_119 = ((MR_Word) (conv26_STATE_VARIABLE_DeclSet_119_119));
  mercury__io__nl_3_p_0(Stream_10);
  ll_backend__llds_out__llds_out_data__output_record_rvals_decls_7_p_0(Info_57, Stream_10, PseudoTypeInfos_23, STATE_VARIABLE_DeclSet_119_119, &STATE_VARIABLE_DeclSet_122_122);
  ll_backend__layout_out__output_layout_array_defns_26_p_0(Info_57, Stream_10, PseudoTypeInfos_23, HLDSVarNums_24, ShortLocns_25, LongLocns_26, UserEventVarNums_27, UserEvents_28, NoVarLabelLayouts_29, SVarLabelLayouts_30, LVarLabelLayouts_31, CallSiteStatics_34, CoveragePoints_35, ProcStatics_36, ProcHeadVarNums_37, ProcVarNames_38, ProcBodyBytecodes_39, TableIoEntries_41, ProcEventLayouts_43, ExecTraces_44, TSStringTable_40, AllocSites_48, STATE_VARIABLE_DeclSet_122_122, &STATE_VARIABLE_DeclSet_124_124);
  {
    Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_126, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[4]));
    MR_hl_field(0, Var_126, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_10));
    MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_126, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_126, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_126, ForeignBodyCodes_17, &ForeignCodeResults_66, ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_IO_127_127);
  {
    Var_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_128, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[8]));
    MR_hl_field(0, Var_128, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_11));
    MR_hl_field(0, Var_128, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_128, 3) = ((MR_Box) (Info_57));
    MR_hl_field(0, Var_128, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_128, AnnotatedModules_58, ((MR_Box) (STATE_VARIABLE_DeclSet_124_124)), &conv31_STATE_VARIABLE_DeclSet_129_129, ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_IO_130_130);
  STATE_VARIABLE_DeclSet_129_129 = ((MR_Word) (conv31_STATE_VARIABLE_DeclSet_129_129));
  {
    WriteForeignExportDefn_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, WriteForeignExportDefn_67, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_9[0]));
    MR_hl_field(0, WriteForeignExportDefn_67, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_8_p_0_12));
    MR_hl_field(0, WriteForeignExportDefn_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, WriteForeignExportDefn_67, 3) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteForeignExportDefn_67, Exports_18, ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_IO_134_134);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  ll_backend__llds_out__llds_out_file__output_c_module_init_list_16_p_0(Info_57, Stream_10, ModuleName_15, AnnotatedModules_58, RttiDatas_22, ProcLayoutDatas_45, ModuleLayoutDatas_46, ComplexityProcs_53, TSStringTable_40, AllocSites_48, UserInitPredCNames_51, UserFinalPredCNames_52, STATE_VARIABLE_DeclSet_129_129, STATE_VARIABLE_DeclSet_74);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[3]), ForeignIncludeResults_65, &ErrorsA_71);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[4]), ForeignCodeResults_66, &ErrorsB_72);
  *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ErrorsA_71, ErrorsB_72);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_DeclSet_20;

  ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DeclSet_20);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DeclSet_20));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeclSet_16;

  ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_16));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word EntryLabels_11,
  MR_Word InternalLabels_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  MR_Word InternalLabelMap_15;
  MR_Word InternalLabelList_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_DeclSet_23_23;
  MR_Word Var_25;
  MR_Box conv2_STATE_VARIABLE_DeclSet_23_23;
  MR_Box conv1_STATE_VARIABLE_IO_24_24;
  MR_Box conv5_STATE_VARIABLE_DeclSet_18;
  MR_Box conv4_STATE_VARIABLE_IO_20;

  Var_21 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(InternalLabels_12, Var_21, &InternalLabelMap_15);
  mercury__multi_map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), InternalLabelMap_15, &InternalLabelList_16);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[1]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_2[0]), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, InternalLabelList_16, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_23_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
  STATE_VARIABLE_DeclSet_23_23 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_23_23));
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_label_decls_8_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Info_9));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, EntryLabels_11, ((MR_Box) (STATE_VARIABLE_DeclSet_23_23)), &conv5_STATE_VARIABLE_DeclSet_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_20);
  *STATE_VARIABLE_DeclSet_18 = ((MR_Word) (conv5_STATE_VARIABLE_DeclSet_18));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InternalLabelMap_0_2,
  MR_Word * STATE_VARIABLE_InternalLabelMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InternalLabelMap_3 = STATE_VARIABLE_InternalLabelMap_0_2;
    else
    {
      MR_Word Label_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_InternalLabelMap_16_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InternalLabelMap_0_2;

      if (((MR_tag((MR_Word) Label_7)) == (MR_Integer) 1))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_decl_c_labels\'/3", (MR_String) "entry label");
          return;
        }
      else
      {
        MR_Integer LabelNum_10 = ((MR_Integer) ((MR_hl_field(0, Label_7, (MR_Integer) 0))));
        MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(0, Label_7, (MR_Integer) 1))));

        mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ProcLabel_11)), ((MR_Box) (LabelNum_10)), STATE_VARIABLE_InternalLabelMap_0_2, &STATE_VARIABLE_InternalLabelMap_16_16);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Labels_8;
      next_value_of_STATE_VARIABLE_InternalLabelMap_0_2 = STATE_VARIABLE_InternalLabelMap_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InternalLabelMap_0_2 = next_value_of_STATE_VARIABLE_InternalLabelMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Res_12;
  MR_Word conv0_STATE_VARIABLE_AlreadyDone_20;

  ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Res_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_AlreadyDone_20);
  *wrapper_arg_2 = ((MR_Box) (conv1_Res_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_AlreadyDone_20));
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Decls_9,
  MR_Word * Results_10)
{
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Box conv3_Var_12;
  MR_Box conv2_STATE_VARIABLE_IO_14;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Stream_8));
  }
  Var_16 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0));
  mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, Decls_9, Results_10, ((MR_Box) (Var_16)), &conv3_Var_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_14);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_3_p_0(
  MR_Word Stream_4)
{
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#ifdef _MSC_VER\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#define MR_STATIC_LINKAGE extern\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#else\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#define MR_STATIC_LINKAGE static\n");
  mercury__io__write_string_4_p_0(Stream_4, (MR_String) "#endif\n");
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_16_p_0(
  MR_Word Info_17,
  MR_Word Stream_18,
  MR_Word ModuleName_19,
  MR_Word AnnotatedModules_20,
  MR_Word RttiDatas_21,
  MR_Word ProcLayoutDatas_22,
  MR_Word ModuleLayoutDatas_23,
  MR_Word ComplexityProcs_24,
  MR_Word TSStringTable_25,
  MR_Word AllocSites_26,
  MR_Word InitPredNames_27,
  MR_Word FinalPredNames_28,
  MR_Word STATE_VARIABLE_DeclSet_0_55,
  MR_Word * STATE_VARIABLE_DeclSet_56)
{
  MR_bool succeeded;
  MR_Word MustInit_31;
  MR_Word AlwaysInitAnnotatedModules_33;
  MR_Word MaybeInitAnnotatedModules_34;
  MR_Word AlwaysInitAnnotatedModuleBunches_35;
  MR_Word MaybeInitAnnotatedModuleBunches_36;
  MR_String ModuleInitName_39;
  MR_Word ModuleLayoutName_46;

  {
    MustInit_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MustInit_31, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[1]));
    MR_hl_field(0, MustInit_31, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_module_init_list_16_p_0_1));
    MR_hl_field(0, MustInit_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MustInit_31, 3) = ((MR_Box) (Info_17));
  }
  mercury__list__filter_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0), MustInit_31, AnnotatedModules_20, &AlwaysInitAnnotatedModules_33, &MaybeInitAnnotatedModules_34);
  mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0), AlwaysInitAnnotatedModules_33, (MR_Integer) 40, &AlwaysInitAnnotatedModuleBunches_35);
  mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0), MaybeInitAnnotatedModules_34, (MR_Integer) 40, &MaybeInitAnnotatedModuleBunches_36);
  ll_backend__llds_out__llds_out_file__output_init_bunch_defs_7_p_0(Info_17, Stream_18, (MR_String) "always", (MR_Integer) 0, AlwaysInitAnnotatedModuleBunches_35);
  if (!((MaybeInitAnnotatedModuleBunches_36 == (MR_Word) ((MR_Unsigned) 0U))))
    ll_backend__llds_out__llds_out_file__output_init_bunch_defs_7_p_0(Info_17, Stream_18, (MR_String) "maybe", (MR_Integer) 0, MaybeInitAnnotatedModuleBunches_36);
  ModuleInitName_39 = parse_tree__prog_foreign__make_init_name_1_f_0(ModuleName_19);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "/* suppress gcc -Wmissing-decls warnings */\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init(void);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_type_tables(void);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_debugger(void);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#ifdef MR_DEEP_PROFILING\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#endif\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_complexity_procs(void);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#endif\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#ifdef MR_THREADSCOPE\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_threadscope_string_table(void);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#endif\n");
  if (!((InitPredNames_27 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
    mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "required_init(void);\n");
  }
  if (!((FinalPredNames_28 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
    mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "required_final(void);\n");
  }
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "const char *");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "grade_check(void);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init(void)\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tif (done) {\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t\treturn;\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t}\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tdone = MR_TRUE;\n");
  ll_backend__llds_out__llds_out_file__output_init_bunch_calls_7_p_0(Info_17, Stream_18, (MR_String) "always", (MR_Integer) 0, AlwaysInitAnnotatedModuleBunches_35);
  if (!((MaybeInitAnnotatedModuleBunches_36 == (MR_Word) ((MR_Unsigned) 0U))))
    ll_backend__llds_out__llds_out_file__output_init_bunch_calls_7_p_0(Info_17, Stream_18, (MR_String) "maybe", (MR_Integer) 0, MaybeInitAnnotatedModuleBunches_36);
  ll_backend__llds_out__llds_out_file__output_c_data_init_list_4_p_0(Stream_18, RttiDatas_21);
  ll_backend__llds_out__llds_out_file__output_alloc_sites_init_5_p_0(Info_17, Stream_18, AllocSites_26);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_debugger();\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_type_tables(void)\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tif (done) {\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t\treturn;\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t}\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tdone = MR_TRUE;\n");
  ll_backend__llds_out__llds_out_file__output_type_tables_init_list_4_p_0(Stream_18, RttiDatas_21);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_debugger(void)\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tif (done) {\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t\treturn;\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t}\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tdone = MR_TRUE;\n");
  ll_backend__llds_out__llds_out_file__output_debugger_init_list_4_p_0(Stream_18, ModuleLayoutDatas_23);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#ifdef MR_DEEP_PROFILING\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\nvoid ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tMR_write_out_module_proc_reps_start(procrep_fp, &");
  {
    ModuleLayoutName_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ModuleLayoutName_46, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, ModuleLayoutName_46, 1) = ((MR_Box) (ModuleName_19));
  }
  ll_backend__layout_out__output_layout_name_4_p_0(Stream_18, ModuleLayoutName_46);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) ");\n");
  ll_backend__llds_out__llds_out_file__output_write_proc_static_list_4_p_0(Stream_18, ProcLayoutDatas_22);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tMR_write_out_module_proc_reps_end(procrep_fp);\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\n#endif\n\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
  ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_4_p_0(Stream_18, ComplexityProcs_24);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\nvoid ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_complexity_procs(void)\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
  ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_4_p_0(Stream_18, ComplexityProcs_24);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\n#endif\n\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "#ifdef MR_THREADSCOPE\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\nvoid ");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "init_threadscope_string_table(void)\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
  if (!((TSStringTable_25 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer TSStringTableSize_49;
    MR_String MangledModuleName_50;
    MR_String Var_340;

    TSStringTableSize_49 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TSStringTable_25);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\tMR_threadscope_register_strings_array(\n");
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\t\t");
    MangledModuleName_50 = ((MR_String) ((MR_hl_field(0, Info_17, (MR_Integer) 1))));
    ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_18, (MR_Integer) 1, MangledModuleName_50, (MR_Word) ((MR_Unsigned) 64U));
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) ", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), TSStringTableSize_49, &Var_340);
    mercury__io__write_string_4_p_0(Stream_18, Var_340);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) ");\n");
  }
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "\n#endif\n\n");
  if (!((InitPredNames_27 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
    mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "required_init(void)\n");
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
    ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_4_p_0(Stream_18, InitPredNames_27);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n");
    mercury__io__nl_3_p_0(Stream_18);
  }
  if (!((FinalPredNames_28 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "void ");
    mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "required_final(void)\n");
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
    ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_4_p_0(Stream_18, FinalPredNames_28);
    mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n");
    mercury__io__nl_3_p_0(Stream_18);
  }
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "// Ensure everything is compiled with the same grade.\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "const char *");
  mercury__io__write_string_4_p_0(Stream_18, ModuleInitName_39);
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "grade_check(void)\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "    return &MR_GRADE_VAR;\n");
  mercury__io__write_string_4_p_0(Stream_18, (MR_String) "}\n");
  *STATE_VARIABLE_DeclSet_56 = STATE_VARIABLE_DeclSet_0_55;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Name_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Names_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
      mercury__io__write_string_4_p_0(Stream_1, Name_10);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "();\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Names_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProcLayout_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcLayouts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RttiProcLabel_13 = ((MR_Word) ((MR_hl_field(0, ProcLayout_10, (MR_Integer) 0))));
      MR_Word MaybeMore_15 = ((MR_Word) ((MR_hl_field(0, ProcLayout_10, (MR_Integer) 2))));
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (MaybeMore_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(1, MaybeMore_15, (MR_Integer) 0))));
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ProcLabel_20;
        MR_Word UserOrUCI_21;
        MR_Word Kind_22;
        MR_Word Var_30;

        ProcLabel_20 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_13);
        UserOrUCI_21 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ProcLabel_20);
        {
          Kind_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Kind_22, 0) = (MR_Box) ((MR_Unsigned) (UserOrUCI_21));
        }
        switch (UserOrUCI_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\tMR_write_out_uci_proc_static(deep_fp, procrep_fp,\n\t\t&");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\tMR_write_out_user_proc_static(deep_fp, procrep_fp,\n\t\t&");
            break;
        }
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (RttiProcLabel_13));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (Kind_22));
        }
        ll_backend__layout_out__output_layout_name_4_p_0(Stream_1, Var_30);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ");\n");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcLayouts_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Data_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Datas_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, Data_10, (MR_Integer) 0))));
      MR_Word Var_26;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\tif (MR_register_module_layout != NULL) {\n");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t\t(*MR_register_module_layout)(");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n\t\t\t&");
      {
        Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 15U));
        MR_hl_field(3, Var_26, 1) = ((MR_Box) (ModuleName_13));
      }
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_1, Var_26);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ");\n\t}\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Datas_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Data_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Datas_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      ll_backend__rtti_out__register_rtti_data_if_nec_4_p_0(Stream_1, Data_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Datas_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AllocSites_8)
{
  if (!((AllocSites_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String MangledModuleName_12 = ((MR_String) ((MR_hl_field(0, Info_6, (MR_Integer) 1))));
    MR_Integer NumAllocSites_13;

    NumAllocSites_13 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0), AllocSites_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#ifdef MR_MPROF_PROFILE_MEMORY_ATTRIBUTION\n");
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\tMR_register_alloc_sites(");
    ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, MangledModuleName_12, (MR_Word) ((MR_Unsigned) 68U));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
    mercury__io__write_int_4_p_0(Stream_7, NumAllocSites_13);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ");\n");
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#endif\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Data_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Datas_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      ll_backend__rtti_out__init_rtti_data_if_nec_4_p_0(Stream_1, Data_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Datas_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_String InitStatus_3,
  MR_Integer Seq_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Bunches_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer NextSeq_22;
      MR_String MangledModuleName_31;
      MR_String Var_71;
      MR_Integer next_value_of_Seq_4;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\t");
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "mercury__");
      MangledModuleName_31 = ((MR_String) ((MR_hl_field(0, Info_1, (MR_Integer) 1))));
      mercury__io__write_string_4_p_0(Stream_2, MangledModuleName_31);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_");
      mercury__io__write_string_4_p_0(Stream_2, InitStatus_3);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_bunch_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), Seq_4, &Var_71);
      mercury__io__write_string_4_p_0(Stream_2, Var_71);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "();\n");
      NextSeq_22 = (MR_Integer) ((MR_Unsigned) Seq_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Seq_4 = NextSeq_22;
      next_value_of_HeadVar__5_5 = Bunches_20;
      Seq_4 = next_value_of_Seq_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_7_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_String InitStatus_3,
  MR_Integer Seq_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Bunch_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Bunches_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer NextSeq_22;
      MR_String MangledModuleName_36;
      MR_String Var_76;
      MR_Integer next_value_of_Seq_4;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "static void ");
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "mercury__");
      MangledModuleName_36 = ((MR_String) ((MR_hl_field(0, Info_1, (MR_Integer) 1))));
      mercury__io__write_string_4_p_0(Stream_2, MangledModuleName_36);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_");
      mercury__io__write_string_4_p_0(Stream_2, InitStatus_3);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_bunch_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]), Seq_4, &Var_76);
      mercury__io__write_string_4_p_0(Stream_2, Var_76);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "(void)\n");
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "{\n");
      ll_backend__llds_out__llds_out_file__output_init_bunch_def_4_p_0(Stream_2, Bunch_19);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "}\n\n");
      NextSeq_22 = (MR_Integer) ((MR_Unsigned) Seq_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Seq_4 = NextSeq_22;
      next_value_of_HeadVar__5_5 = Bunches_20;
      Seq_4 = next_value_of_Seq_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word AnnotatedModule_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word AnnotatedModules_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String C_ModuleName_13 = ((MR_String) ((MR_hl_field(0, AnnotatedModule_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
      mercury__io__write_string_4_p_0(Stream_1, C_ModuleName_13);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "();\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = AnnotatedModules_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_EntryLabels_0_4,
  MR_Word * STATE_VARIABLE_EntryLabels_5,
  MR_Word STATE_VARIABLE_InternalLabels_0_6,
  MR_Word * STATE_VARIABLE_InternalLabels_7,
  MR_Word STATE_VARIABLE_EnvVarNames_0_8,
  MR_Word * STATE_VARIABLE_EnvVarNames_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_EnvVarNames_9 = STATE_VARIABLE_EnvVarNames_0_8;
    *STATE_VARIABLE_InternalLabels_7 = STATE_VARIABLE_InternalLabels_0_6;
    *STATE_VARIABLE_EntryLabels_5 = STATE_VARIABLE_EntryLabels_0_4;
  }
  else
  {
    MR_Word Module_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modules_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word AnnotatedModule_23;
    MR_Word AnnotatedModules_24;
    MR_Word STATE_VARIABLE_EntryLabels_34_34;
    MR_Word STATE_VARIABLE_InternalLabels_35_35;
    MR_Word STATE_VARIABLE_EnvVarNames_36_36;
    MR_String ModuleName_37 = ((MR_String) ((MR_hl_field(0, Module_21, (MR_Integer) 0))));
    MR_Word Procs_38 = ((MR_Word) ((MR_hl_field(0, Module_21, (MR_Integer) 1))));
    MR_Word AnnotatedProcs_39;
    MR_Word ModuleEntryLabels_40;
    MR_Word ModuleInternalLabels_41;
    MR_Word ModuleEntryLabelList_42;
    MR_Word ModuleInternalLabelList_43;
    MR_Word Var_44;
    MR_Word Var_45;

    Var_44 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    Var_45 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(Info_1, Procs_38, &AnnotatedProcs_39, Var_44, &ModuleEntryLabels_40, Var_45, &ModuleInternalLabels_41, STATE_VARIABLE_EnvVarNames_0_8, &STATE_VARIABLE_EnvVarNames_36_36);
    ModuleEntryLabelList_42 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ModuleEntryLabels_40);
    ModuleInternalLabelList_43 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ModuleInternalLabels_41);
    {
      AnnotatedModule_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AnnotatedModule_23, 0) = ((MR_Box) (ModuleName_37));
      MR_hl_field(0, AnnotatedModule_23, 1) = ((MR_Box) (AnnotatedProcs_39));
      MR_hl_field(0, AnnotatedModule_23, 2) = ((MR_Box) (ModuleEntryLabelList_42));
      MR_hl_field(0, AnnotatedModule_23, 3) = ((MR_Box) (ModuleInternalLabelList_43));
    }
    STATE_VARIABLE_EntryLabels_34_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), STATE_VARIABLE_EntryLabels_0_4, ModuleEntryLabels_40);
    STATE_VARIABLE_InternalLabels_35_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), STATE_VARIABLE_InternalLabels_0_6, ModuleInternalLabels_41);
    ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(Info_1, Modules_22, &AnnotatedModules_24, STATE_VARIABLE_EntryLabels_34_34, STATE_VARIABLE_EntryLabels_5, STATE_VARIABLE_InternalLabels_35_35, STATE_VARIABLE_InternalLabels_7, STATE_VARIABLE_EnvVarNames_36_36, STATE_VARIABLE_EnvVarNames_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (AnnotatedModule_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (AnnotatedModules_24));
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_AllEntryLabels_0_4,
  MR_Word * STATE_VARIABLE_AllEntryLabels_5,
  MR_Word STATE_VARIABLE_AllInternalLabels_0_6,
  MR_Word * STATE_VARIABLE_AllInternalLabels_7,
  MR_Word STATE_VARIABLE_EnvVarNames_0_8,
  MR_Word * STATE_VARIABLE_EnvVarNames_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_EnvVarNames_9 = STATE_VARIABLE_EnvVarNames_0_8;
    *STATE_VARIABLE_AllInternalLabels_7 = STATE_VARIABLE_AllInternalLabels_0_6;
    *STATE_VARIABLE_AllEntryLabels_5 = STATE_VARIABLE_AllEntryLabels_0_4;
  }
  else
  {
    MR_Word Proc_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Procs_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word AnnotatedProc_23;
    MR_Word AnnotatedProcs_24;
    MR_Word STATE_VARIABLE_AllEntryLabels_34_34;
    MR_Word STATE_VARIABLE_AllInternalLabels_35_35;
    MR_Word STATE_VARIABLE_EnvVarNames_36_36;

    ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(Info_1, Proc_21, &AnnotatedProc_23, STATE_VARIABLE_AllEntryLabels_0_4, &STATE_VARIABLE_AllEntryLabels_34_34, STATE_VARIABLE_AllInternalLabels_0_6, &STATE_VARIABLE_AllInternalLabels_35_35, STATE_VARIABLE_EnvVarNames_0_8, &STATE_VARIABLE_EnvVarNames_36_36);
    ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(Info_1, Procs_22, &AnnotatedProcs_24, STATE_VARIABLE_AllEntryLabels_34_34, STATE_VARIABLE_AllEntryLabels_5, STATE_VARIABLE_AllInternalLabels_35_35, STATE_VARIABLE_AllInternalLabels_7, STATE_VARIABLE_EnvVarNames_36_36, STATE_VARIABLE_EnvVarNames_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (AnnotatedProc_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (AnnotatedProcs_24));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__387__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
  MR_Word Info_10,
  MR_Word Proc_11,
  MR_Word * AnnotatedProc_12,
  MR_Word STATE_VARIABLE_AllEntryLabels_0_30,
  MR_Word * STATE_VARIABLE_AllEntryLabels_31,
  MR_Word STATE_VARIABLE_AllInternalLabels_0_32,
  MR_Word * STATE_VARIABLE_AllInternalLabels_33,
  MR_Word STATE_VARIABLE_EnvVarNames_0_34,
  MR_Word * STATE_VARIABLE_EnvVarNames_35)
{
  MR_bool succeeded;
  MR_Word ProcEnvVarNames_16 = ((MR_Word) ((MR_hl_field(0, Proc_11, (MR_Integer) 8))));
  MR_Word Instrs_17;
  MR_Word RevEntryLabels_18;
  MR_Word RevInternalLabels0_19;
  MR_Word EntryLabels_20;
  MR_Word InternalLabels0_21;
  MR_Word CallerLabel_22;
  MR_Word ContLabels_23;
  MR_Word EmitCLoops_24;
  MR_Word WhileLabels_25;
  MR_Word UndefWhileLabels_26;
  MR_Word LabelOutputInfo_28;
  MR_Word InternalLabels_29;
  MR_Word Var_39;
  MR_Word Var_44;
  MR_Word Var_46;

  mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProcEnvVarNames_16, STATE_VARIABLE_EnvVarNames_0_34, STATE_VARIABLE_EnvVarNames_35);
  Instrs_17 = ((MR_Word) ((MR_hl_field(0, Proc_11, (MR_Integer) 5))));
  ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(Instrs_17, (MR_Word) ((MR_Unsigned) 0U), &RevEntryLabels_18, (MR_Word) ((MR_Unsigned) 0U), &RevInternalLabels0_19);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), RevEntryLabels_18, &EntryLabels_20);
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), RevInternalLabels0_19, &InternalLabels0_21);
  ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(Instrs_17, &CallerLabel_22);
  Var_39 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
  ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(Instrs_17, Var_39, &ContLabels_23);
  EmitCLoops_24 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 7))) >> 14)) & (MR_Integer) 1);
  switch (EmitCLoops_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        WhileLabels_25 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
        UndefWhileLabels_26 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word UndefWhileLabels0_27;
        MR_Word Var_40;

        Var_40 = mercury__set_tree234__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
        ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(Instrs_17, Var_40, &WhileLabels_25);
        mercury__set_tree234__difference_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), WhileLabels_25, ContLabels_23, &UndefWhileLabels0_27);
        succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), UndefWhileLabels0_27);
        if (succeeded)
          UndefWhileLabels_26 = UndefWhileLabels0_27;
        else
          ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(Instrs_17, (MR_Word) ((MR_Unsigned) 0U), WhileLabels_25, UndefWhileLabels0_27, &UndefWhileLabels_26);
      }
      break;
  }
  {
    LabelOutputInfo_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LabelOutputInfo_28, 0) = ((MR_Box) (CallerLabel_22));
    MR_hl_field(0, LabelOutputInfo_28, 1) = ((MR_Box) (ContLabels_23));
    MR_hl_field(0, LabelOutputInfo_28, 2) = ((MR_Box) (WhileLabels_25));
    MR_hl_field(0, LabelOutputInfo_28, 3) = ((MR_Box) (UndefWhileLabels_26));
  }
  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), UndefWhileLabels_26);
  if (succeeded)
    InternalLabels_29 = InternalLabels0_21;
  else
  {
    MR_Word Var_42;

    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[0]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (UndefWhileLabels_26));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Var_42, InternalLabels0_21, &InternalLabels_29);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *AnnotatedProc_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Proc_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (LabelOutputInfo_28));
  }
  Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), EntryLabels_20);
  *STATE_VARIABLE_AllEntryLabels_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), STATE_VARIABLE_AllEntryLabels_0_30, Var_44);
  Var_46 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), InternalLabels_29);
  *STATE_VARIABLE_AllInternalLabels_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), STATE_VARIABLE_AllInternalLabels_0_32, Var_46);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeCurWhileLabel0_2,
  MR_Word WhileLabels_3,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_4,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UndefWhileLabels_5 = STATE_VARIABLE_UndefWhileLabels_0_4;
    else
    {
      MR_Word Instr0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_16 = ((MR_Word) ((MR_hl_field(0, Instr0_11, (MR_Integer) 0))));
      MR_Word MaybeCurWhileLabel_19;
      MR_Word STATE_VARIABLE_UndefWhileLabels_115_115;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_MaybeCurWhileLabel0_2;
      MR_Word next_value_of_STATE_VARIABLE_UndefWhileLabels_0_4;

      switch (MR_tag((MR_Word) Uinstr0_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
            STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_0_4;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
            STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_0_4;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BlockInstrs_34 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 3))));

                ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(BlockInstrs_34, MaybeCurWhileLabel0_2, WhileLabels_3, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_38 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_39;
                MR_Word STATE_VARIABLE_UndefWhileLabels_123_123;
                MR_Word Rval_153 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word RvalCodeAddrs_154;
                MR_Word Var_40;
                MR_Word Var_41;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_38, &LvalCodeAddrs_39, &Var_40);
                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_153, &RvalCodeAddrs_154, &Var_41);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_39, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_123_123);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_154, STATE_VARIABLE_UndefWhileLabels_123_123, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Lval_185 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_186;
                MR_Word STATE_VARIABLE_UndefWhileLabels_123_189;
                MR_Word Rval_190 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word RvalCodeAddrs_191;
                MR_Word Var_183;
                MR_Word Var_184;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_185, &LvalCodeAddrs_186, &Var_183);
                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_190, &RvalCodeAddrs_191, &Var_184);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_186, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_123_189);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_191, STATE_VARIABLE_UndefWhileLabels_123_189, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Continuation_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_UndefWhileLabels_119_119;
                MR_Word Target_152 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(Target_152, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_119_119);
                ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(Continuation_27, STATE_VARIABLE_UndefWhileLabels_119_119, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word MaybeNextCodeAddr_36 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));

                if ((MaybeNextCodeAddr_36 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_0_4;
                else
                {
                  MR_Word NextCodeAddr_37 = ((MR_Word) ((MR_hl_field(1, MaybeNextCodeAddr_36, (MR_Integer) 0))));

                  ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(NextCodeAddr_37, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                }
                MaybeCurWhileLabel_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Label_18 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));

                succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), WhileLabels_3, ((MR_Box) (Label_18)));
                if (succeeded)
                  {
                    MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeCurWhileLabel_19, 0) = ((MR_Box) (Label_18));
                  }
                else
                  MaybeCurWhileLabel_19 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_0_4;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Target_148 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word TargetLabel_147;

                succeeded = ((MR_tag((MR_Word) Target_148)) == (MR_Integer) 1);
                if (succeeded)
                {
                  TargetLabel_147 = ((MR_Word) ((MR_hl_field(1, Target_148, (MR_Integer) 0))));
                  mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (TargetLabel_147)), STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                }
                else
                  STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_0_4;
                MaybeCurWhileLabel_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word MaybeTargets_25 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_UndefWhileLabels_117_117;
                MR_Word Rval_150 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word RvalCodeAddrs_151;
                MR_Word Var_26;

                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_150, &RvalCodeAddrs_151, &Var_26);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_151, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_117_117);
                ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(MaybeTargets_25, STATE_VARIABLE_UndefWhileLabels_117_117, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 8:
            case (MR_Integer) 16:
            case (MR_Integer) 19:
            case (MR_Integer) 24:
            case (MR_Integer) 25:
            case (MR_Integer) 26:
              {
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
                STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_0_4;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word Target_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word RvalCodeAddrs_22;
                MR_Word STATE_VARIABLE_UndefWhileLabels_114_114;
                MR_Word Var_23;
                MR_Word TargetLabel_24;

                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_20, &RvalCodeAddrs_22, &Var_23);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_22, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_114_114);
                succeeded = ((MR_tag((MR_Word) Target_21)) == (MR_Integer) 1);
                if (succeeded)
                {
                  TargetLabel_24 = ((MR_Word) ((MR_hl_field(1, Target_21, (MR_Integer) 0))));
                  {
                    MR_Word Var_174;

                    succeeded = (MaybeCurWhileLabel0_2 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_174 = ((MR_Word) ((MR_hl_field(1, MaybeCurWhileLabel0_2, (MR_Integer) 0))));
                      succeeded = ll_backend__llds____Unify____label_0_0(TargetLabel_24, Var_174);
                    }
                    if (succeeded)
                      STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_114_114;
                    else
                      mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (TargetLabel_24)), STATE_VARIABLE_UndefWhileLabels_114_114, &STATE_VARIABLE_UndefWhileLabels_115_115);
                  }
                }
                else
                  STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_114_114;
                MaybeCurWhileLabel_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Lval_226 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_227;
                MR_Word Var_224;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_226, &LvalCodeAddrs_227, &Var_224);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_227, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word Lval_222 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_223;
                MR_Word Var_220;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_222, &LvalCodeAddrs_223, &Var_220);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_223, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word TargetLval_52 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word SizeRval_55 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 4))));
                MR_Word MaybeRegionIdRval_58 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 7))));
                MR_Word TargetLvalCodeAddrs_60;
                MR_Word SizeRvalCodeAddrs_62;
                MR_Word STATE_VARIABLE_UndefWhileLabels_127_127;
                MR_Word STATE_VARIABLE_UndefWhileLabels_128_128;
                MR_Word Var_61;
                MR_Word Var_63;

                ll_backend__exprn_aux__lval_addrs_3_p_0(TargetLval_52, &TargetLvalCodeAddrs_60, &Var_61);
                ll_backend__exprn_aux__rval_addrs_3_p_0(SizeRval_55, &SizeRvalCodeAddrs_62, &Var_63);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(TargetLvalCodeAddrs_60, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_127_127);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(SizeRvalCodeAddrs_62, STATE_VARIABLE_UndefWhileLabels_127_127, &STATE_VARIABLE_UndefWhileLabels_128_128);
                if ((MaybeRegionIdRval_58 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_UndefWhileLabels_115_115 = STATE_VARIABLE_UndefWhileLabels_128_128;
                else
                {
                  MR_Word RegionIdRval_64 = ((MR_Word) ((MR_hl_field(1, MaybeRegionIdRval_58, (MR_Integer) 0))));
                  MR_Word RegionIdRvalCodeAddrs_65;
                  MR_Word Var_66;

                  ll_backend__exprn_aux__rval_addrs_3_p_0(RegionIdRval_64, &RegionIdRvalCodeAddrs_65, &Var_66);
                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RegionIdRvalCodeAddrs_65, STATE_VARIABLE_UndefWhileLabels_128_128, &STATE_VARIABLE_UndefWhileLabels_115_115);
                }
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Lval_198 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_199;
                MR_Word Var_196;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_198, &LvalCodeAddrs_199, &Var_196);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_199, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Rval_218 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word RvalCodeAddrs_219;
                MR_Word Var_216;

                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_218, &RvalCodeAddrs_219, &Var_216);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_219, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word Rval_157 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word RvalCodeAddrs_158;
                MR_Word Var_51;

                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_157, &RvalCodeAddrs_158, &Var_51);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_158, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word NumLval_79 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 4))));
                MR_Word AddrLval_80 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 5))));
                MR_Word NumLvalCodeAddrs_82;
                MR_Word AddrLvalCodeAddrs_84;
                MR_Word STATE_VARIABLE_UndefWhileLabels_135_135;
                MR_Word STATE_VARIABLE_UndefWhileLabels_136_136;
                MR_Word RegionIdRval_159 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 3))));
                MR_Word RegionIdRvalCodeAddrs_160;
                MR_Word Var_81;
                MR_Word Var_83;
                MR_Word Var_85;

                ll_backend__exprn_aux__rval_addrs_3_p_0(RegionIdRval_159, &RegionIdRvalCodeAddrs_160, &Var_81);
                ll_backend__exprn_aux__lval_addrs_3_p_0(NumLval_79, &NumLvalCodeAddrs_82, &Var_83);
                ll_backend__exprn_aux__lval_addrs_3_p_0(AddrLval_80, &AddrLvalCodeAddrs_84, &Var_85);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RegionIdRvalCodeAddrs_160, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_135_135);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(NumLvalCodeAddrs_82, STATE_VARIABLE_UndefWhileLabels_135_135, &STATE_VARIABLE_UndefWhileLabels_136_136);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(AddrLvalCodeAddrs_84, STATE_VARIABLE_UndefWhileLabels_136_136, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word Rval_210 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 3))));
                MR_Word RvalCodeAddrs_211;
                MR_Word Var_208;

                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_210, &RvalCodeAddrs_211, &Var_208);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_211, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word Lval_230 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_231;
                MR_Word Var_228;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_230, &LvalCodeAddrs_231, &Var_228);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_231, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 21:
              {
                MR_Word Rval_214 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word RvalCodeAddrs_215;
                MR_Word Var_212;

                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_214, &RvalCodeAddrs_215, &Var_212);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_215, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 22:
              {
                MR_Word Lval_202 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_203;
                MR_Word Var_200;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_202, &LvalCodeAddrs_203, &Var_200);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_203, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 23:
              {
                MR_Word Rval_206 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word RvalCodeAddrs_207;
                MR_Word Var_204;

                ll_backend__exprn_aux__rval_addrs_3_p_0(Rval_206, &RvalCodeAddrs_207, &Var_204);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(RvalCodeAddrs_207, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 27:
              {
                MR_Word MaybeFixNoLayoutLabel_70 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 4))));
                MR_Word MaybeFixLayoutLabel_71 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 5))));
                MR_Word MaybeFixOnlyLayoutLabel_72 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 6))));
                MR_Word MaybeNoFixLabel_73 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 7))));
                MR_Word MaybeHashDefLabel_74 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 8))));
                MR_Word STATE_VARIABLE_UndefWhileLabels_130_130;
                MR_Word STATE_VARIABLE_UndefWhileLabels_131_131;
                MR_Word STATE_VARIABLE_UndefWhileLabels_132_132;
                MR_Word STATE_VARIABLE_UndefWhileLabels_133_133;

                ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(MaybeFixNoLayoutLabel_70, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_130_130);
                ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(MaybeFixLayoutLabel_71, STATE_VARIABLE_UndefWhileLabels_130_130, &STATE_VARIABLE_UndefWhileLabels_131_131);
                ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(MaybeFixOnlyLayoutLabel_72, STATE_VARIABLE_UndefWhileLabels_131_131, &STATE_VARIABLE_UndefWhileLabels_132_132);
                ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(MaybeNoFixLabel_73, STATE_VARIABLE_UndefWhileLabels_132_132, &STATE_VARIABLE_UndefWhileLabels_133_133);
                ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(MaybeHashDefLabel_74, STATE_VARIABLE_UndefWhileLabels_133_133, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Word Lval_177 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_178;
                MR_Word Var_175;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_177, &LvalCodeAddrs_178, &Var_175);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_178, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Word Lval_155 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_156;
                MR_Word Var_47;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_155, &LvalCodeAddrs_156, &Var_47);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_156, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Word Lval_181 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LvalCodeAddrs_182;
                MR_Word Var_179;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_181, &LvalCodeAddrs_182, &Var_179);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_182, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 31:
              {
                MR_Word Lval_194 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word LvalCodeAddrs_195;
                MR_Word Var_192;

                ll_backend__exprn_aux__lval_addrs_3_p_0(Lval_194, &LvalCodeAddrs_195, &Var_192);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LvalCodeAddrs_195, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 32:
              {
                MR_Word LoopControlRval_86 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word SlotLval_87 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word LoopControlRvalCodeAddrs_88;
                MR_Word SlotLvalCodeAddrs_90;
                MR_Word STATE_VARIABLE_UndefWhileLabels_138_138;
                MR_Word STATE_VARIABLE_UndefWhileLabels_139_139;
                MR_Word Label_161 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 3))));
                MR_Word Var_89;
                MR_Word Var_91;

                ll_backend__exprn_aux__rval_addrs_3_p_0(LoopControlRval_86, &LoopControlRvalCodeAddrs_88, &Var_89);
                ll_backend__exprn_aux__lval_addrs_3_p_0(SlotLval_87, &SlotLvalCodeAddrs_90, &Var_91);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LoopControlRvalCodeAddrs_88, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_138_138);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(SlotLvalCodeAddrs_90, STATE_VARIABLE_UndefWhileLabels_138_138, &STATE_VARIABLE_UndefWhileLabels_139_139);
                mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_161)), STATE_VARIABLE_UndefWhileLabels_139_139, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 33:
              {
                MR_Word SlotRval_92 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word SlotRvalCodeAddrs_94;
                MR_Word STATE_VARIABLE_UndefWhileLabels_141_141;
                MR_Word STATE_VARIABLE_UndefWhileLabels_142_142;
                MR_Word Label_162 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 3))));
                MR_Word LoopControlRval_163 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LoopControlRvalCodeAddrs_164;
                MR_Word Var_93;
                MR_Word Var_95;

                ll_backend__exprn_aux__rval_addrs_3_p_0(LoopControlRval_163, &LoopControlRvalCodeAddrs_164, &Var_93);
                ll_backend__exprn_aux__rval_addrs_3_p_0(SlotRval_92, &SlotRvalCodeAddrs_94, &Var_95);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LoopControlRvalCodeAddrs_164, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_141_141);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(SlotRvalCodeAddrs_94, STATE_VARIABLE_UndefWhileLabels_141_141, &STATE_VARIABLE_UndefWhileLabels_142_142);
                mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_162)), STATE_VARIABLE_UndefWhileLabels_142_142, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
            case (MR_Integer) 34:
              {
                MR_Word STATE_VARIABLE_UndefWhileLabels_144_144;
                MR_Word LoopControlRval_165 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 1))));
                MR_Word LoopControlRvalCodeAddrs_166;
                MR_Word SlotRval_167 = ((MR_Word) ((MR_hl_field(3, Uinstr0_16, (MR_Integer) 2))));
                MR_Word SlotRvalCodeAddrs_168;
                MR_Word Var_96;
                MR_Word Var_97;

                ll_backend__exprn_aux__rval_addrs_3_p_0(LoopControlRval_165, &LoopControlRvalCodeAddrs_166, &Var_96);
                ll_backend__exprn_aux__rval_addrs_3_p_0(SlotRval_167, &SlotRvalCodeAddrs_168, &Var_97);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(LoopControlRvalCodeAddrs_166, STATE_VARIABLE_UndefWhileLabels_0_4, &STATE_VARIABLE_UndefWhileLabels_144_144);
                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(SlotRvalCodeAddrs_168, STATE_VARIABLE_UndefWhileLabels_144_144, &STATE_VARIABLE_UndefWhileLabels_115_115);
                MaybeCurWhileLabel_19 = MaybeCurWhileLabel0_2;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs0_12;
      next_value_of_MaybeCurWhileLabel0_2 = MaybeCurWhileLabel_19;
      next_value_of_STATE_VARIABLE_UndefWhileLabels_0_4 = STATE_VARIABLE_UndefWhileLabels_115_115;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      MaybeCurWhileLabel0_2 = next_value_of_MaybeCurWhileLabel0_2;
      STATE_VARIABLE_UndefWhileLabels_0_4 = next_value_of_STATE_VARIABLE_UndefWhileLabels_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_2,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UndefWhileLabels_3 = STATE_VARIABLE_UndefWhileLabels_0_2;
    else
    {
      MR_Word MaybeLabel_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeLabels_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UndefWhileLabels_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UndefWhileLabels_0_2;

      if ((MaybeLabel_7 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_UndefWhileLabels_12_12 = STATE_VARIABLE_UndefWhileLabels_0_2;
      else
      {
        MR_Word Label_13 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_7, (MR_Integer) 0))));

        mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_13)), STATE_VARIABLE_UndefWhileLabels_0_2, &STATE_VARIABLE_UndefWhileLabels_12_12);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeLabels_8;
      next_value_of_STATE_VARIABLE_UndefWhileLabels_0_2 = STATE_VARIABLE_UndefWhileLabels_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UndefWhileLabels_0_2 = next_value_of_STATE_VARIABLE_UndefWhileLabels_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
  MR_Word MaybeLabel_4,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_7,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_8)
{
  if ((MaybeLabel_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UndefWhileLabels_8 = STATE_VARIABLE_UndefWhileLabels_0_7;
  else
  {
    MR_Word Label_6 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_4, (MR_Integer) 0))));

    mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_6)), STATE_VARIABLE_UndefWhileLabels_0_7, STATE_VARIABLE_UndefWhileLabels_8);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_2,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UndefWhileLabels_3 = STATE_VARIABLE_UndefWhileLabels_0_2;
    else
    {
      MR_Word CodeAddr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CodeAddrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UndefWhileLabels_12_12;
      MR_Word Label_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UndefWhileLabels_0_2;

      succeeded = ((MR_tag((MR_Word) CodeAddr_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        Label_13 = ((MR_Word) ((MR_hl_field(1, CodeAddr_7, (MR_Integer) 0))));
        mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_13)), STATE_VARIABLE_UndefWhileLabels_0_2, &STATE_VARIABLE_UndefWhileLabels_12_12);
      }
      else
        STATE_VARIABLE_UndefWhileLabels_12_12 = STATE_VARIABLE_UndefWhileLabels_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CodeAddrs_8;
      next_value_of_STATE_VARIABLE_UndefWhileLabels_0_2 = STATE_VARIABLE_UndefWhileLabels_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UndefWhileLabels_0_2 = next_value_of_STATE_VARIABLE_UndefWhileLabels_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
  MR_Word CodeAddr_4,
  MR_Word STATE_VARIABLE_UndefWhileLabels_0_7,
  MR_Word * STATE_VARIABLE_UndefWhileLabels_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) CodeAddr_4)) == (MR_Integer) 1);
  MR_Word Label_6;

  if (succeeded)
  {
    Label_6 = ((MR_Word) ((MR_hl_field(1, CodeAddr_4, (MR_Integer) 0))));
    mercury__set_tree234__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_6)), STATE_VARIABLE_UndefWhileLabels_0_7, STATE_VARIABLE_UndefWhileLabels_8);
  }
  else
    *STATE_VARIABLE_UndefWhileLabels_8 = STATE_VARIABLE_UndefWhileLabels_0_7;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_WhileSet_0_2,
  MR_Word * STATE_VARIABLE_WhileSet_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_WhileSet_3 = STATE_VARIABLE_WhileSet_0_2;
    else
    {
      MR_Word Uinstr0_7;
      MR_Word Instrs0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Label_11;
      MR_Word Instrs1_12;
      MR_Integer UseCount_13;
      MR_Integer Var_17;
      MR_Integer Var_18;

      Uinstr0_7 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_11 = ((MR_Word) ((MR_hl_field(3, Uinstr0_7, (MR_Integer) 1))));
        Var_17 = (MR_Integer) 0;
        ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(Label_11, Instrs0_9, &Instrs1_12, Var_17, &UseCount_13);
        Var_18 = (MR_Integer) 0;
        succeeded = (UseCount_13 > Var_18);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_WhileSet_19_19;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_WhileSet_0_2;

        mercury__set_tree234__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_11)), STATE_VARIABLE_WhileSet_0_2, &STATE_VARIABLE_WhileSet_19_19);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Instrs1_12;
        next_value_of_STATE_VARIABLE_WhileSet_0_2 = STATE_VARIABLE_WhileSet_19_19;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_WhileSet_0_2 = next_value_of_STATE_VARIABLE_WhileSet_0_2;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Instrs0_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
  MR_Word Label_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Count_0_4,
  MR_Integer * STATE_VARIABLE_Count_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Count_5 = STATE_VARIABLE_Count_0_4;
    }
    else
    {
      MR_Word Instr0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Instrs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Uinstr0_15 = ((MR_Word) ((MR_hl_field(0, Instr0_11, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Uinstr0_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        *HeadVar__3_3 = HeadVar__2_2;
        *STATE_VARIABLE_Count_5 = STATE_VARIABLE_Count_0_4;
      }
      else
      {
        MR_Integer STATE_VARIABLE_Count_25_25;
        MR_Word Var_24;
        MR_Word Var_30;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_STATE_VARIABLE_Count_0_4;

        succeeded = ((((MR_tag((MR_Word) Uinstr0_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_30 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));
            succeeded = ll_backend__llds____Unify____label_0_0(Label_1, Var_30);
          }
        }
        if (succeeded)
          STATE_VARIABLE_Count_25_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_4 + (MR_Unsigned) 1);
        else
        {
          MR_Word Var_27;
          MR_Word Var_31;

          succeeded = ((((MR_tag((MR_Word) Uinstr0_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_31 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_1, Var_31);
            }
          }
          if (succeeded)
            STATE_VARIABLE_Count_25_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_4 + (MR_Unsigned) 1);
          else
          {
            MR_Word BlockInstrs_21;

            succeeded = ((((MR_tag((MR_Word) Uinstr0_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              BlockInstrs_21 = ((MR_Word) ((MR_hl_field(3, Uinstr0_15, (MR_Integer) 3))));
              ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(Label_1, BlockInstrs_21, STATE_VARIABLE_Count_0_4, &STATE_VARIABLE_Count_25_25);
            }
            else
              STATE_VARIABLE_Count_25_25 = STATE_VARIABLE_Count_0_4;
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Instrs0_12;
        next_value_of_STATE_VARIABLE_Count_0_4 = STATE_VARIABLE_Count_25_25;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Count_0_4 = next_value_of_STATE_VARIABLE_Count_0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
  MR_Word Label_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Count_0_3,
  MR_Integer * STATE_VARIABLE_Count_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Count_4 = STATE_VARIABLE_Count_0_3;
    else
    {
      MR_Word Instr0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Instrs0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Uinstr0_13 = ((MR_Word) ((MR_hl_field(0, Instr0_10, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Uinstr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "label in block");
          return;
        }
      else
      {
        MR_Integer STATE_VARIABLE_Count_25_25;
        MR_Word Var_24;
        MR_Word Var_32;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_STATE_VARIABLE_Count_0_3;

        succeeded = ((((MR_tag((MR_Word) Uinstr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_24 = ((MR_Word) ((MR_hl_field(3, Uinstr0_13, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));
            succeeded = ll_backend__llds____Unify____label_0_0(Label_1, Var_32);
          }
        }
        if (succeeded)
          STATE_VARIABLE_Count_25_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_3 + (MR_Unsigned) 1);
        else
        {
          MR_Word Var_27;
          MR_Word Var_33;

          succeeded = ((((MR_tag((MR_Word) Uinstr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) ((MR_hl_field(3, Uinstr0_13, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_33 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(Label_1, Var_33);
            }
          }
          if (succeeded)
            STATE_VARIABLE_Count_25_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_3 + (MR_Unsigned) 1);
          else
          {
            succeeded = ((((MR_tag((MR_Word) Uinstr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "block in block");
                return;
              }
            STATE_VARIABLE_Count_25_25 = STATE_VARIABLE_Count_0_3;
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Instrs0_11;
        next_value_of_STATE_VARIABLE_Count_0_3 = STATE_VARIABLE_Count_25_25;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Count_0_3 = next_value_of_STATE_VARIABLE_Count_0_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ContLabels_0_2,
  MR_Word * STATE_VARIABLE_ContLabels_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ContLabels_3 = STATE_VARIABLE_ContLabels_0_2;
    else
    {
      MR_Word Instr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr_10 = ((MR_Word) ((MR_hl_field(0, Instr_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ContLabels_35_35;
      MR_Word ContLabel_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ContLabels_0_2;

      switch (MR_tag((MR_Word) Uinstr_10)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_21;
                MR_Word Var_32 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 1))));
                MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 2))));
                MR_Word Var_34;

                succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Const_21 = ((MR_Word) ((MR_hl_field(3, Var_33, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) Const_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Const_21, (MR_Integer) 0)))) == (MR_Integer) 12)));
                    if (succeeded)
                    {
                      Var_34 = ((MR_Word) ((MR_hl_field(3, Const_21, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 1);
                      if (succeeded)
                        ContLabel_13 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 2))));

                succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
                if (succeeded)
                  ContLabel_13 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_30 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 2))));
                MR_Word Var_31;

                succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
                  if (succeeded)
                    ContLabel_13 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
                }
              }
              break;
            case (MR_Integer) 30:
              {
                ContLabel_13 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
        mercury__set_tree234__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (ContLabel_13)), STATE_VARIABLE_ContLabels_0_2, &STATE_VARIABLE_ContLabels_35_35);
      else
      {
        MR_Word Label1_23;

        succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 29)));
        if (succeeded)
        {
          Label1_23 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 2))));
          mercury__set_tree234__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label1_23)), STATE_VARIABLE_ContLabels_0_2, &STATE_VARIABLE_ContLabels_35_35);
        }
        else
        {
          MR_Word Block_26;

          succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Block_26 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, (MR_Integer) 3))));
            ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(Block_26, STATE_VARIABLE_ContLabels_0_2, &STATE_VARIABLE_ContLabels_35_35);
          }
          else
            STATE_VARIABLE_ContLabels_35_35 = STATE_VARIABLE_ContLabels_0_2;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_8;
      next_value_of_STATE_VARIABLE_ContLabels_0_2 = STATE_VARIABLE_ContLabels_35_35;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ContLabels_0_2 = next_value_of_STATE_VARIABLE_ContLabels_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * CallerLabel_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "cannot find caller label");
        return;
      }
    else
    {
      MR_Word Uinstr_6;
      MR_Word Instrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Label_10;

      Uinstr_6 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_10 = ((MR_Word) ((MR_hl_field(3, Uinstr_6, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) Label_10)) == (MR_Integer) 1))
          *CallerLabel_2 = Label_10;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "caller label is internal label");
            return;
          }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Instrs_8;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevEntryLabels_0_2,
  MR_Word * STATE_VARIABLE_RevEntryLabels_3,
  MR_Word STATE_VARIABLE_RevInternalLabels_0_4,
  MR_Word * STATE_VARIABLE_RevInternalLabels_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevInternalLabels_5 = STATE_VARIABLE_RevInternalLabels_0_4;
      *STATE_VARIABLE_RevEntryLabels_3 = STATE_VARIABLE_RevEntryLabels_0_2;
    }
    else
    {
      MR_Word Instr_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevEntryLabels_27_27;
      MR_Word STATE_VARIABLE_RevInternalLabels_28_28;
      MR_Word Label_16;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Instr_12, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevEntryLabels_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevInternalLabels_0_4;

      succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_16 = ((MR_Word) ((MR_hl_field(3, Var_26, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) Label_16)) == (MR_Integer) 1))
        {
          {
            STATE_VARIABLE_RevEntryLabels_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevEntryLabels_27_27, 0) = ((MR_Box) (Label_16));
            MR_hl_field(1, STATE_VARIABLE_RevEntryLabels_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevEntryLabels_0_2));
          }
          STATE_VARIABLE_RevInternalLabels_28_28 = STATE_VARIABLE_RevInternalLabels_0_4;
        }
        else
        {
          {
            STATE_VARIABLE_RevInternalLabels_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevInternalLabels_28_28, 0) = ((MR_Box) (Label_16));
            MR_hl_field(1, STATE_VARIABLE_RevInternalLabels_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevInternalLabels_0_4));
          }
          STATE_VARIABLE_RevEntryLabels_27_27 = STATE_VARIABLE_RevEntryLabels_0_2;
        }
      }
      else
      {
        STATE_VARIABLE_RevInternalLabels_28_28 = STATE_VARIABLE_RevInternalLabels_0_4;
        STATE_VARIABLE_RevEntryLabels_27_27 = STATE_VARIABLE_RevEntryLabels_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_13;
      next_value_of_STATE_VARIABLE_RevEntryLabels_0_2 = STATE_VARIABLE_RevEntryLabels_27_27;
      next_value_of_STATE_VARIABLE_RevInternalLabels_0_4 = STATE_VARIABLE_RevInternalLabels_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevEntryLabels_0_2 = next_value_of_STATE_VARIABLE_RevEntryLabels_0_2;
      STATE_VARIABLE_RevInternalLabels_0_4 = next_value_of_STATE_VARIABLE_RevInternalLabels_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_4_p_0(
  MR_Word Info_5,
  MR_Word Stream_6)
{
  MR_Word TraceLevel_8;
  MR_Word TraceEnabled_9;
  MR_Word DeepProfile_10;
  MR_Word GenerateBytecode_11;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#define MR_ALLOW_RESET\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#include \"mercury_imp.h\"\n");
  TraceLevel_8 = ((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 7))) & (MR_Integer) 3);
  TraceEnabled_9 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_8);
  switch (TraceEnabled_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#include \"mercury_trace_base.h\"\n");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  GenerateBytecode_11 = ((((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 7))) >> 13)) & (MR_Integer) 1);
  DeepProfile_10 = ((((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
  switch (DeepProfile_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#include \"mercury_deep_profiling.h\"\n");
      break;
  }
  switch (GenerateBytecode_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#include \"mb_interface_stub.h\"\n");
      break;
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(
  MR_Word Globals_4,
  MR_Word InclCodeAddr_5)
{
  MR_bool succeeded = (InclCodeAddr_5 == (MR_Integer) 1);
  MR_String HeadVar__3_3;
  MR_Word OptTuple_6;
  MR_Word Var_7;

  if (succeeded)
  {
    libs__globals__get_opt_tuple_2_p_0(Globals_4, &OptTuple_6);
    Var_7 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_6, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
    succeeded = (Var_7 == (MR_Integer) 1);
  }
  if (succeeded)
    HeadVar__3_3 = (MR_String) "";
  else
    HeadVar__3_3 = (MR_String) "const ";
  return HeadVar__3_3;
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(
  MR_Word DefaultLinkage_4,
  MR_Word BeingDefined_5)
{
  MR_String LinkageStr_6;

  switch (DefaultLinkage_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (BeingDefined_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          LinkageStr_6 = (MR_String) "extern ";
          break;
        case (MR_Integer) 1:
          LinkageStr_6 = (MR_String) "";
          break;
      }
      break;
    case (MR_Integer) 1:
      LinkageStr_6 = (MR_String) "static ";
      break;
  }
  return LinkageStr_6;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Errors_10;

  ll_backend__llds_out__llds_out_file__output_llds_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Errors_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Errors_10));
}

void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0(
  MR_Word Globals_6,
  MR_Word CFile_7,
  MR_Word * Succeeded_8)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, CFile_7, (MR_Integer) 0))));
  MR_String FileName_11;
  MR_Word Var_20;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_llds\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &ll_backend__llds_out__llds_out_file_scalar_common_4[0])), ModuleName_10, &FileName_11);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Globals_6));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (CFile_7));
  }
  libs__file_util__output_to_file_stream_7_p_0(Globals_6, ModuleName_10, FileName_11, Var_20, Succeeded_8);
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__llds_out__llds_out_file__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0);
}

void mercury__ll_backend__llds_out__llds_out_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__llds_out__llds_out_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.llds_out.llds_out_file.
