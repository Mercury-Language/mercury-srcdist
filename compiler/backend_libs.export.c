/*
** Automatically generated from `export.m'
** by the Mercury compiler,
** version rotd-2023-07-26
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


// :- module backend_libs.export.
// :- implementation.

/*
INIT mercury__backend_libs__export__init
ENDINIT
*/

#include "backend_libs.export.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
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
#include "backend_libs.foreign.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
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
#include "io.file.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__cord__pti_cord_1__plain_backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0;

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_0[2];

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_0;

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_1[2];

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_1;

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_1[1];

static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_name_and_tag_rep_0[2];

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_name_and_tag_rep_0[2];

static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_name_and_tag_rep_0[2];

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__1005__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer HeadVar__2_63);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__956__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__779__1_2_p_0(
  MR_Word Lang_18,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__295__1_2_p_0(
  MR_Word Lang_9,
  MR_Word HeadVar__2_29);

static void MR_CALL 
backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_4_p_0(
  MR_Word Mapping_5,
  MR_Word CtorRepn_6,
  MR_Word STATE_VARIABLE_NamesAndTagsCord_0_58,
  MR_Word * STATE_VARIABLE_NamesAndTagsCord_59);

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0(
  MR_Word Stream_7,
  MR_Word MaybeSetLineNumbers_8,
  MR_Word MaybeThisFileName_9,
  MR_Word ExportedEnumInfo_10);

static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tags_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
  MR_Word ExportedEnumInfo_2);

static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__export__output_foreign_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word MaybeSetLineNumbers_11,
  MR_Word MaybeThisFileName_12,
  MR_String SourceFileName_13,
  MR_Word MaybeDesiredIsLocal_14,
  MR_Word DeclCode_15,
  MR_Word * Res_16);

static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__export__write_export_decls_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredIdTable_6,
  MR_Word ExportedProc_7,
  MR_Word * ExportDefn_8);

static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer LastArgNum_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer LastArgNum_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word NameThem_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4);

static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredIdTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word NameThem_2,
  MR_Integer LastArgNum_3,
  MR_Word HeadVar__4_4,
  MR_String * HeadVar__5_5);

static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredIdTable_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_String * HowToDeclareLabel_15,
  MR_String * CRetType_16,
  MR_String * MaybeDeclareRetval_17,
  MR_String * MaybeFail_18,
  MR_String * MaybeSucceed_19,
  MR_Word * ArgInfoTypes_20);

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__export_scalar_common_1[3][3];

static /* final */ const MR_Box backend_libs__export_scalar_common_2[26][2];

static /* final */ const MR_Box backend_libs__export_scalar_common_3[3][1];

static /* final */ const MR_Box backend_libs__export_scalar_common_4[5][5];

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][4];

static /* final */ const MR_Box backend_libs__export_scalar_common_6[1][9];

static /* final */ const MR_Box backend_libs__export_scalar_common_7[1][12];

static /* final */ const MR_Box backend_libs__export_scalar_common_8[2][7];


struct backend_libs__export__vector_common_type_9_0_s {
  const MR_String backend_libs__export__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct backend_libs__export__vector_common_type_9_0_s backend_libs__export_vector_common_9[5];



static /* final */ const MR_Box backend_libs__export_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__export_scalar_common_5[0])),
    ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&backend_libs__export_scalar_common_4[3])),
    ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_2[26][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "// Do not edit.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "#include \"mercury_deep_profiling.h\"\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "#ifdef MR_DEEP_PROFILING\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "  #endif\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "  #include \"mercury_imp.h\"\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "  #ifndef MERCURY_HDR_EXCLUDE_IMP_H\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "#else\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "#include \"mercury.h\"\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "extern \"C\" {\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "#ifdef __cplusplus\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) " */\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "}\n\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\t}\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "\treturn MR_FALSE;\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_regs_from_mem(c_regs);\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "\tif (!MR_r1) {\n")),
    ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[24])))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_4[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&backend_libs__export_scalar_common_4[2])),
    ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0)),
    ((MR_Box) (&backend_libs__export__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0)),
    ((MR_Box) (&backend_libs__export__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_8[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__export__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&backend_libs__export__cord__pti_cord_1__plain_backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0)),
    ((MR_Box) (&backend_libs__export__cord__pti_cord_1__plain_backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0))
  },
};


static /* final */ const struct backend_libs__export__vector_common_type_9_0_s backend_libs__export_vector_common_9[5] = {
  /* row   0 */   { (MR_String) "MR_BaseTypeclassInfo" },
  /* row   1 */   { (MR_String) "MR_TypeClassInfo" },
  /* row   2 */   { (MR_String) "MR_TypeCtorInfo" },
  /* row   3 */   { (MR_String) "MR_TypeInfo" },
  /* row   4 */   { (MR_String) "MR_Word" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__cord__pti_cord_1__plain_backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0) }
};

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_0 = {
  (MR_String) "ee_name_and_tag_rep_int",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_1 = {
  (MR_String) "ee_name_and_tag_rep_string",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_0[1] = { &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_0 };

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_1[1] = { &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_1 };

static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_name_and_tag_rep_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_name_and_tag_rep_0[2] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_0,
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_1
};

static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_name_and_tag_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0_10001)),
  ((MR_Box) (backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0_10001)),
  (MR_String) "backend_libs.export",
  (MR_String) "exported_enum_name_and_tag_rep",
  { backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_name_and_tag_rep_0 },
  { backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_name_and_tag_rep_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__export__backend_libs__export__functor_number_map_exported_enum_name_and_tag_rep_0,

};

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__1005__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer HeadVar__2_63)
{
  MR_bool succeeded = (Arity_13 == HeadVar__2_63);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__956__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded = (Lang_14 == HeadVar__2_26);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__779__1_2_p_0(
  MR_Word Lang_18,
  MR_Word HeadVar__2_28)
{
  MR_bool succeeded = (Lang_18 == HeadVar__2_28);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__295__1_2_p_0(
  MR_Word Lang_9,
  MR_Word HeadVar__2_29)
{
  MR_bool succeeded = (Lang_9 == HeadVar__2_29);

  return succeeded;
}

static void MR_CALL 
backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_29 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_29, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (Var_28 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_28 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_String Var_30 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_31 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String ArgY1_18 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgY2_21 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_19;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_19, Var_31, ArgY1_18);
      succeeded = (SubResult1_19 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_19;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_30, ArgY2_21);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  else
  {
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_8;
    MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_9, ArgY2_10) == 0);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__1005__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_4_p_0(
  MR_Word Mapping_5,
  MR_Word CtorRepn_6,
  MR_Word STATE_VARIABLE_NamesAndTagsCord_0_58,
  MR_Word * STATE_VARIABLE_NamesAndTagsCord_59)
{
  MR_bool succeeded;
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 2))));
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 3))));
  MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 5))));
  MR_String Name_15;
  MR_String ForeignName_16;
  MR_Word NameAndTag_19;
  MR_Word Var_60;
  MR_Box conv0_ForeignName_16;

  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[4]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (backend_libs__export__foreign_const_name_and_tag_4_p_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (Arity_13));
    MR_hl_field(0, Var_60, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant arity != 0");
  Name_15 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mapping_5, ((MR_Box) (Name_15)), &conv0_ForeignName_16);
  ForeignName_16 = ((MR_String) (conv0_ForeignName_16));
  switch (MR_tag((MR_Word) ConsTag_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            NameAndTag_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NameAndTag_19, 0) = ((MR_Box) (ForeignName_16));
            MR_hl_field(0, NameAndTag_19, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_17 = ((MR_Word) ((MR_hl_field(1, ConsTag_11, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) IntTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_18 = ((MR_Integer) ((MR_hl_field(0, IntTag_17, (MR_Integer) 0))));

              {
                NameAndTag_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NameAndTag_19, 0) = ((MR_Box) (ForeignName_16));
                MR_hl_field(0, NameAndTag_19, 1) = ((MR_Box) (Int_18));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
              return;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ForeignTag_30 = ((MR_String) ((MR_hl_field(3, ConsTag_11, (MR_Integer) 2))));

            {
              NameAndTag_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NameAndTag_19, 0) = ((MR_Box) (ForeignName_16));
              MR_hl_field(1, NameAndTag_19, 1) = ((MR_Box) (ForeignTag_30));
            }
          }
          break;
      }
      break;
  }
  *STATE_VARIABLE_NamesAndTagsCord_59 = mercury__cord__snoc_2_f_0((MR_Word) (&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0), STATE_VARIABLE_NamesAndTagsCord_0_58, ((MR_Box) (NameAndTag_19)));
}

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_NamesAndTagsCord_59;

  backend_libs__export__foreign_const_name_and_tag_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NamesAndTagsCord_59);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NamesAndTagsCord_59));
}

static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__956__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0(
  MR_Word Stream_7,
  MR_Word MaybeSetLineNumbers_8,
  MR_Word MaybeThisFileName_9,
  MR_Word ExportedEnumInfo_10)
{
  MR_bool succeeded;
  MR_Word CtorRepns_13 = ((MR_Word) ((MR_hl_field(0, ExportedEnumInfo_10, (MR_Integer) 1))));
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(0, ExportedEnumInfo_10, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_Word NameMapping_15 = ((MR_Word) ((MR_hl_field(0, ExportedEnumInfo_10, (MR_Integer) 3))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ExportedEnumInfo_10, (MR_Integer) 4))));
  MR_Word ForeignNamesAndTagsCord_17;
  MR_Word ForeignNamesAndTags_18;
  MR_String File_19;
  MR_Integer Line_20;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Box conv1_ForeignNamesAndTagsCord_17;

  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_6_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Lang_14));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/6", (MR_String) "Lang != lang_c");
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&backend_libs__export_scalar_common_8[1]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_6_p_0_2));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (NameMapping_15));
  }
  Var_28 = mercury__cord__init_0_f_0((MR_Word) (&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&backend_libs__export_scalar_common_2[0]), Var_27, CtorRepns_13, ((MR_Box) (Var_28)), &conv1_ForeignNamesAndTagsCord_17);
  ForeignNamesAndTagsCord_17 = ((MR_Word) (conv1_ForeignNamesAndTagsCord_17));
  ForeignNamesAndTags_18 = mercury__cord__list_1_f_0((MR_Word) (&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0), ForeignNamesAndTagsCord_17);
  File_19 = mercury__term_context__context_file_1_f_0(Context_16);
  Line_20 = mercury__term_context__context_line_1_f_0(Context_16);
  backend_libs__c_util__maybe_set_line_num_6_p_0(Stream_7, MaybeSetLineNumbers_8, File_19, Line_20);
  backend_libs__export__output_exported_enum_constname_tags_4_p_0(Stream_7, ForeignNamesAndTags_18);
  backend_libs__c_util__maybe_reset_line_num_5_p_0(Stream_7, MaybeSetLineNumbers_8, MaybeThisFileName_9);
}

static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tags_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word NameAndTag_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word NameAndTags_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      if (((MR_tag((MR_Word) NameAndTag_10)) == (MR_Integer) 0))
      {
        MR_String Name_16 = ((MR_String) ((MR_hl_field(0, NameAndTag_10, (MR_Integer) 0))));
        MR_Integer RawIntTag_17 = ((MR_Integer) ((MR_hl_field(0, NameAndTag_10, (MR_Integer) 1))));
        MR_String Var_45;

        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "#define ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, Name_16);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__export_scalar_common_3[2]), RawIntTag_17, &Var_45);
        mercury__io__write_string_4_p_0(HeadVar__1_1, Var_45);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      }
      else
      {
        MR_String RawStrTag_18 = ((MR_String) ((MR_hl_field(1, NameAndTag_10, (MR_Integer) 1))));
        MR_String Name_31 = ((MR_String) ((MR_hl_field(1, NameAndTag_10, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "#define ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, Name_31);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, RawStrTag_18);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = NameAndTags_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
  MR_Word ExportedEnumInfo_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Unsigned) ((MR_hl_field(0, ExportedEnumInfo_2, (MR_Integer) 2))) & (MR_Integer) 3);

  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__export__IntroducedFrom__pred__output_foreign_decl__779__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__export__output_foreign_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word MaybeSetLineNumbers_11,
  MR_Word MaybeThisFileName_12,
  MR_String SourceFileName_13,
  MR_Word MaybeDesiredIsLocal_14,
  MR_Word DeclCode_15,
  MR_Word * Res_16)
{
  MR_bool succeeded;
  MR_Word Lang_18 = ((((MR_Unsigned) ((MR_hl_field(0, DeclCode_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
  MR_Word IsLocal_19 = ((MR_Unsigned) ((MR_hl_field(0, DeclCode_15, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word LiteralOrInclude_20 = ((MR_Word) ((MR_hl_field(0, DeclCode_15, (MR_Integer) 1))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, DeclCode_15, (MR_Integer) 2))));
  MR_Word Var_25;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (backend_libs__export__output_foreign_decl_9_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Lang_18));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140backend_libs.export.output_foreign_decl\'/9", (MR_String) "Lang != lang_c");
  if ((MaybeDesiredIsLocal_14 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_Word DesiredIsLocal_22 = ((MR_Word) ((MR_hl_field(1, MaybeDesiredIsLocal_14, (MR_Integer) 0))));

    succeeded = (DesiredIsLocal_22 == IsLocal_19);
  }
  if (succeeded)
  {
    if (((MR_tag((MR_Word) LiteralOrInclude_20)) == (MR_Integer) 1))
    {
      MR_String IncludeFileName_32 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_20, (MR_Integer) 0))));
      MR_String IncludePath_33;

      parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_13, IncludeFileName_32, &IncludePath_33);
      backend_libs__c_util__maybe_set_line_num_6_p_0(Stream_10, MaybeSetLineNumbers_11, IncludePath_33, (MR_Integer) 1);
      libs__file_util__write_include_file_contents_5_p_0(Stream_10, IncludePath_33, Res_16);
    }
    else
    {
      MR_String Code_29 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_20, (MR_Integer) 0))));
      MR_String File_30;
      MR_Integer Line_31;

      File_30 = mercury__term_context__context_file_1_f_0(Context_21);
      Line_31 = mercury__term_context__context_line_1_f_0(Context_21);
      backend_libs__c_util__maybe_set_line_num_6_p_0(Stream_10, MaybeSetLineNumbers_11, File_30, Line_31);
      mercury__io__write_string_4_p_0(Stream_10, Code_29);
      *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    mercury__io__nl_3_p_0(Stream_10);
    backend_libs__c_util__maybe_reset_line_num_5_p_0(Stream_10, MaybeSetLineNumbers_11, MaybeThisFileName_12);
  }
  else
    *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Mode_5;
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Var_8;

  Mode_5 = ((MR_Unsigned) ((MR_hl_field(0, Var_7, (MR_Integer) 1))) & (MR_Integer) 3);
  succeeded = (Mode_5 != (MR_Integer) 2);
  if (succeeded)
  {
    Var_8 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_3, Type_6);
    succeeded = (Var_8 == (MR_Integer) 1);
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 4;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&backend_libs__export_vector_common_9[0 + mid_2]))->backend_libs__export__vector_common_type_9_0__vct_9_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__file_util__report_error_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__2_2;

  succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Res_16;

  backend_libs__export__output_foreign_decl_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv1_Res_16);
  *wrapper_arg_2 = ((MR_Box) (conv1_Res_16));
}

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  backend_libs__export__output_exported_c_enum_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__export__exported_enum_is_for_c_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
backend_libs__export__produce_header_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ForeignExportDecls_7,
  MR_Word ModuleName_8)
{
  MR_bool succeeded;
  MR_Word Globals_10;
  MR_String FileName_11;
  MR_Word MaybeThisFileName_12;
  MR_String TmpFileName_13;
  MR_Word Result_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_10, (MR_String) "predicate \140backend_libs.export.produce_header_file\'/5", (MR_Word) (MR_mkword(2, &backend_libs__export_scalar_common_3[0])), ModuleName_8, &FileName_11);
  {
    MaybeThisFileName_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeThisFileName_12, 0) = ((MR_Box) (FileName_11));
  }
  TmpFileName_13 = mercury__string__f_43_43_2_f_0(FileName_11, (MR_String) ".tmp");
  mercury__io__open_output_4_p_0(TmpFileName_13, &Result_14);
  if (((MR_tag((MR_Word) Result_14)) == (MR_Integer) 1))
  {
    MR_String ProgName_36;
    MR_Word ErrorStream_175;

    libs__globals__get_error_output_stream_5_p_0(Globals_10, ModuleName_8, &ErrorStream_175);
    mercury__io__progname_base_4_p_0((MR_String) "export.m", &ProgName_36);
    mercury__io__write_string_4_p_0(ErrorStream_175, (MR_String) "\n");
    mercury__io__write_string_4_p_0(ErrorStream_175, ProgName_36);
    mercury__io__write_string_4_p_0(ErrorStream_175, (MR_String) ": can\'t open \140");
    mercury__io__write_string_4_p_0(ErrorStream_175, TmpFileName_13);
    mercury__io__write_string_4_p_0(ErrorStream_175, (MR_String) "\' for output\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word FileStream_15 = ((MR_Word) ((MR_hl_field(0, Result_14, (MR_Integer) 0))));
    MR_String SourceFileName_16;
    MR_String Version_17;
    MR_String Fullarch_18;
    MR_String MangledModuleName_19;
    MR_String UppercaseModuleName_20;
    MR_String GuardMacroName_21;
    MR_Word ExportedEnums_22;
    MR_Word CExportedEnums_23;
    MR_Word ForeignDeclCodes_24;
    MR_Word CExportDecls_25;
    MR_Word CForeignDeclCodes_26;
    MR_Word CForeignDeclCodeResults_27;
    MR_Word Errors_29;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_139;
    MR_Word Var_142;
    MR_Word Var_144;
    MR_Word Var_146;
    MR_Word Var_148;
    MR_Word Var_150;
    MR_Word Var_152;

    parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_8, &SourceFileName_16);
    mercury__library__version_2_p_0(&Version_17, &Fullarch_18);
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Fullarch_18));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[2])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) ((MR_String) "// configured for "));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Version_17));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_String) "// version "));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_String) "// by the Mercury compiler,\n"));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (SourceFileName_16));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) ((MR_String) "// Automatically generated from \140"));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    mercury__io__write_strings_4_p_0(FileStream_15, Var_46);
    MangledModuleName_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_8);
    mercury__string__to_upper_2_p_0(MangledModuleName_19, &UppercaseModuleName_20);
    GuardMacroName_21 = mercury__string__f_43_43_2_f_0(UppercaseModuleName_20, (MR_String) "_MH");
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (GuardMacroName_21));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[19])));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) ((MR_String) "#define "));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (GuardMacroName_21));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) ((MR_String) "#ifndef "));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
    }
    mercury__io__write_strings_4_p_0(FileStream_15, Var_68);
    hlds__hlds_module__module_info_get_exported_enums_2_p_0(ModuleInfo_6, &ExportedEnums_22);
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0), (MR_Word) (&backend_libs__export_scalar_common_1[1]), ExportedEnums_22, &CExportedEnums_23);
    ForeignDeclCodes_24 = ((MR_Word) ((MR_hl_field(0, ForeignExportDecls_7, (MR_Integer) 0))));
    CExportDecls_25 = ((MR_Word) ((MR_hl_field(0, ForeignExportDecls_7, (MR_Integer) 1))));
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&backend_libs__export_scalar_common_5[1]), ForeignDeclCodes_24, &CForeignDeclCodes_26);
    succeeded = (CExportedEnums_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (CForeignDeclCodes_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      CForeignDeclCodeResults_27 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MaybeSetLineNumbers_28;
      MR_Word Var_116;
      MR_Word Var_119;
      MR_String Var_120;
      MR_Word Var_121;
      MR_Word Var_123;
      MR_Word Var_125;
      MR_String Var_126;
      MR_Word Var_130;
      MR_Word Var_132;
      MR_Box conv0_STATE_VARIABLE_IO_131_131;
      MR_Box conv2_STATE_VARIABLE_IO_133_133;

      MaybeSetLineNumbers_28 = backend_libs__c_util__lookup_line_numbers_2_f_0(Globals_10, (MR_Integer) 176);
      Var_120 = backend_libs__foreign__decl_guard_1_f_0(ModuleName_8);
      Var_126 = backend_libs__foreign__decl_guard_1_f_0(ModuleName_8);
      {
        Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
        MR_hl_field(1, Var_125, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[3])));
      }
      {
        Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_123, 0) = ((MR_Box) ((MR_String) "#define "));
        MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_125));
      }
      {
        Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_121, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
      }
      {
        Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
        MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_121));
      }
      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) ((MR_String) "#ifndef "));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
      }
      mercury__io__write_strings_4_p_0(FileStream_15, Var_116);
      {
        Var_130 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_130, 0) = ((MR_Box) (&backend_libs__export_scalar_common_6[0]));
        MR_hl_field(0, Var_130, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_3));
        MR_hl_field(0, Var_130, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_130, 3) = ((MR_Box) (FileStream_15));
        MR_hl_field(0, Var_130, 4) = ((MR_Box) (MaybeSetLineNumbers_28));
        MR_hl_field(0, Var_130, 5) = ((MR_Box) (MaybeThisFileName_12));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_130, CExportedEnums_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_131_131);
      {
        Var_132 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_132, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[0]));
        MR_hl_field(0, Var_132, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_4));
        MR_hl_field(0, Var_132, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_132, 3) = ((MR_Box) (FileStream_15));
        MR_hl_field(0, Var_132, 4) = ((MR_Box) (MaybeSetLineNumbers_28));
        MR_hl_field(0, Var_132, 5) = ((MR_Box) (MaybeThisFileName_12));
        MR_hl_field(0, Var_132, 6) = ((MR_Box) (SourceFileName_16));
        MR_hl_field(0, Var_132, 7) = ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_3[1])));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_132, CForeignDeclCodes_26, &CForeignDeclCodeResults_27, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_133_133);
      mercury__io__write_string_4_p_0(FileStream_15, (MR_String) "\n#endif\n");
    }
    backend_libs__export__write_export_decls_4_p_0(FileStream_15, CExportDecls_25);
    {
      Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_152, 0) = ((MR_Box) (GuardMacroName_21));
      MR_hl_field(1, Var_152, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[20])));
    }
    {
      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_150, 0) = ((MR_Box) ((MR_String) "#endif /* "));
      MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_152));
    }
    {
      Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_148, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_150));
    }
    {
      Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_146, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_144, 0) = ((MR_Box) ((MR_String) "}\n"));
      MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_142, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
      MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_139, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
    }
    mercury__io__write_strings_4_p_0(FileStream_15, Var_139);
    mercury__io__close_output_3_p_0(FileStream_15);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__export_scalar_common_1[2]), CForeignDeclCodeResults_27, &Errors_29);
    if ((Errors_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word _Succeeded_30;

      parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_10, ModuleName_8, FileName_11, &_Succeeded_30);
    }
    else
    {
      MR_Word ErrorStream_34;
      MR_Word Var_161;
      MR_Word Var_33;
      MR_Box conv4_STATE_VARIABLE_IO_38;

      mercury__io__file__remove_file_4_p_0(TmpFileName_13, &Var_33);
      libs__globals__get_error_output_stream_5_p_0(Globals_10, ModuleName_8, &ErrorStream_34);
      {
        Var_161 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_161, 0) = ((MR_Box) (&backend_libs__export_scalar_common_8[0]));
        MR_hl_field(0, Var_161, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_6));
        MR_hl_field(0, Var_161, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_161, 3) = ((MR_Box) (ErrorStream_34));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_161, Errors_29, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_38);
    }
  }
}

static void MR_CALL 
backend_libs__export__write_export_decls_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ExportDecl_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ExportDecls_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(0, ExportDecl_10, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_String CRetType_14 = ((MR_String) ((MR_hl_field(0, ExportDecl_10, (MR_Integer) 1))));
      MR_String CFunction_15 = ((MR_String) ((MR_hl_field(0, ExportDecl_10, (MR_Integer) 2))));
      MR_String ArgDecls_16 = ((MR_String) ((MR_hl_field(0, ExportDecl_10, (MR_Integer) 3))));
      MR_Word next_value_of_HeadVar__2_2;

      switch (Lang_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_4_p_0(HeadVar__1_1, CRetType_14);
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " ");
            mercury__io__write_string_4_p_0(HeadVar__1_1, CFunction_15);
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "(");
            mercury__io__write_string_4_p_0(HeadVar__1_1, ArgDecls_16);
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ");\n");
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140backend_libs.export.write_export_decls\'/4", (MR_String) "foreign languages other than C unimplemented");
            return;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ExportDecls_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__export__get_foreign_export_defns_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * ExportedProcsCode_4)
{
  MR_Word ExportedProcsCord_5;
  MR_Word PredicateTable_6;
  MR_Word PredIdTable_7;
  MR_Word Var_8;

  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ModuleInfo_3, &ExportedProcsCord_5);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_3, &PredicateTable_6);
  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_6, &PredIdTable_7);
  Var_8 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcsCord_5);
  backend_libs__export__export_procs_to_c_4_p_0(ModuleInfo_3, PredIdTable_7, Var_8, ExportedProcsCode_4);
}

static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExportedProc_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ExportedProcs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ExportDefn_11;
    MR_Word ExportDefns_12;

    backend_libs__export__export_proc_to_c_4_p_0(HeadVar__1_1, HeadVar__2_2, ExportedProc_9, &ExportDefn_11);
    backend_libs__export__export_procs_to_c_4_p_0(HeadVar__1_1, HeadVar__2_2, ExportedProcs_10, &ExportDefns_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ExportDefn_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (ExportDefns_12));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__export__IntroducedFrom__pred__export_proc_to_c__295__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredIdTable_6,
  MR_Word ExportedProc_7,
  MR_Word * ExportDefn_8)
{
  MR_bool succeeded;
  MR_Word Lang_9 = ((MR_Unsigned) ((MR_hl_field(0, ExportedProc_7, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, ExportedProc_7, (MR_Integer) 1))));
  MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(0, ExportedProc_7, (MR_Integer) 2))));
  MR_String CFunction_12 = ((MR_String) ((MR_hl_field(0, ExportedProc_7, (MR_Integer) 3))));
  MR_String DeclareString_14;
  MR_String CRetType_15;
  MR_String MaybeDeclareRetval_16;
  MR_String MaybeFail_17;
  MR_String MaybeSucceed_18;
  MR_Word ArgInfoTypes_19;
  MR_String ArgDecls_20;
  MR_String PassInputArgs_21;
  MR_String RetrieveOutputArgs_22;
  MR_Word ProcLabel_23;
  MR_String ProcLabelString_24;
  MR_String Code_25;
  MR_Word Var_26;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_106;
  MR_Word Var_108;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_118;
  MR_Word Var_120;
  MR_Word Var_122;
  MR_Word Var_124;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_132;
  MR_Word Var_134;
  MR_Word Var_136;
  MR_Word Var_138;
  MR_Word Var_140;
  MR_Word Var_142;

  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (backend_libs__export__export_proc_to_c_4_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (Lang_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140backend_libs.export.export_proc_to_c\'/4", (MR_String) "foreign language other than C");
  backend_libs__export__get_export_info_for_lang_c_10_p_0(ModuleInfo_5, PredIdTable_6, PredId_10, ProcId_11, &DeclareString_14, &CRetType_15, &MaybeDeclareRetval_16, &MaybeFail_17, &MaybeSucceed_18, &ArgInfoTypes_19);
  backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(ModuleInfo_5, (MR_Integer) 1, ArgInfoTypes_19, &ArgDecls_20);
  backend_libs__export__pass_input_args_4_p_0(ModuleInfo_5, (MR_Integer) 0, ArgInfoTypes_19, &PassInputArgs_21);
  backend_libs__export__retrieve_output_args_4_p_0(ModuleInfo_5, (MR_Integer) 0, ArgInfoTypes_19, &RetrieveOutputArgs_22);
  ProcLabel_23 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_5, PredId_10, ProcId_11);
  ProcLabelString_24 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 1, ProcLabel_23);
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (MaybeSucceed_18));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__export_scalar_common_2[21])));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) ((MR_String) "\tMR_restore_regs_from_mem(c_regs);\n"));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) ((MR_String) "#endif\n"));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) ((MR_String) "\t}\n"));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) ((MR_String) "\t\t MR_finalize_thread_engine();\n"));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) ((MR_String) "\tif (must_finalize_engine) {\n"));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_132));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (RetrieveOutputArgs_22));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_130));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (MaybeFail_17));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_129));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) ((MR_String) "#endif\n"));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) ((MR_String) "\tMR_current_callback_site = saved_cur_callback;\n"));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_126));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) ((MR_String) "\tMR_current_call_site_dynamic = saved_cur_csd;\n"));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) ((MR_String) "\tMR_restore_transient_registers();\n"));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_120));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) ((MR_String) "), MR_FALSE);\n"));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (ProcLabelString_24));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) ((MR_String) "\t(void) MR_call_engine(MR_ENTRY("));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_115));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) ((MR_String) "\tMR_save_transient_registers();\n"));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_113));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (PassInputArgs_21));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) ((MR_String) "\tMR_restore_registers();\n"));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) ((MR_String) "#endif\n"));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) ((MR_String) "));\n"));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (ProcLabelString_24));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_104));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) ((MR_String) "\tMR_setup_callback(MR_ENTRY("));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_csd = MR_current_call_site_dynamic;\n"));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_callback = MR_current_callback_site;\n"));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) ((MR_String) "#endif\n"));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) ((MR_String) "\tmust_finalize_engine = MR_init_thread(MR_use_now);\n"));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_String) "\tMR_save_regs_to_mem(c_regs);\n"));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (MaybeDeclareRetval_16));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) ((MR_String) "#endif\n"));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynamic *saved_cur_csd;\n"));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynList **saved_cur_callback;\n"));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) ((MR_String) "#endif\n"));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) ((MR_String) "\tMR_bool must_finalize_engine;\n"));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) ((MR_String) "#endif\n"));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) ((MR_String) "\tMR_Word c_regs[MR_NUM_REAL_REGS];\n"));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_String) "#if MR_NUM_REAL_REGS > 0\n"));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) ((MR_String) ")\n{\n"));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (ArgDecls_20));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) ((MR_String) "("));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (CFunction_12));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (CRetType_15));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) ((MR_String) ");\n"));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (ArgDecls_20));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_String) "("));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (CFunction_12));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (CRetType_15));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) ");\n"));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (ProcLabelString_24));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) "("));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (DeclareString_14));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  mercury__string__append_list_2_p_0(Var_34, &Code_25);
  *ExportDefn_8 = (MR_Word) (Code_25);
}

static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer LastArgNum_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word AT_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ATs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgInfo_12 = ((MR_Word) ((MR_hl_field(0, AT_9, (MR_Integer) 0))));
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(0, AT_9, (MR_Integer) 1))));
    MR_Word ArgLoc_14 = ((MR_Word) ((MR_hl_field(0, ArgInfo_12, (MR_Integer) 0))));
    MR_Word Mode_15 = ((MR_Unsigned) ((MR_hl_field(0, ArgInfo_12, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Integer CurArgNum_16 = (MR_Integer) ((MR_Unsigned) LastArgNum_2 + (MR_Unsigned) 1);
    MR_String RetrieveHeadOutputArg_17;
    MR_String RetrieveTailOutputArgs_24;

    switch (Mode_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        RetrieveHeadOutputArg_17 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgName_18;
          MR_String ArgLocString0_19;
          MR_String ArgLocString_20;
          MR_Word MaybeForeignType_21;
          MR_String Var_27;
          MR_Word RegType_43;
          MR_Integer RegNum_44;

          Var_27 = mercury__string__int_to_string_1_f_0(CurArgNum_16);
          ArgName_18 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", Var_27);
          RegType_43 = ((MR_Unsigned) ((MR_hl_field(0, ArgLoc_14, (MR_Integer) 0))) & (MR_Integer) 1);
          RegNum_44 = ((MR_Integer) ((MR_hl_field(0, ArgLoc_14, (MR_Integer) 1))));
          switch (RegType_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String Var_53;
                MR_String Var_54;

                Var_54 = mercury__string__int_to_string_1_f_0(RegNum_44);
                Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ")");
                ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", Var_53);
              }
              break;
            case (MR_Integer) 0:
              {
                succeeded = (RegNum_44 > (MR_Integer) 32);
                if (succeeded)
                {
                  MR_String Var_47;
                  MR_String Var_48;

                  Var_48 = mercury__string__int_to_string_1_f_0(RegNum_44);
                  Var_47 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) ")");
                  ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", Var_47);
                }
                else
                {
                  MR_String Var_51;

                  Var_51 = mercury__string__int_to_string_1_f_0(RegNum_44);
                  ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", Var_51);
                }
              }
              break;
          }
          backend_libs__export__convert_type_from_mercury_4_p_0(ArgLoc_14, ArgLocString0_19, Type_13, &ArgLocString_20);
          MaybeForeignType_21 = backend_libs__foreign__is_this_a_foreign_type_2_f_0(ModuleInfo_1, Type_13);
          if ((MaybeForeignType_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_38;
            MR_String Var_39;
            MR_String Var_41;

            Var_41 = mercury__string__f_43_43_2_f_0(ArgLocString_20, (MR_String) ";\n");
            Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_41);
            Var_38 = mercury__string__f_43_43_2_f_0(ArgName_18, Var_39);
            RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t*", Var_38);
          }
          else
          {
            MR_Word ForeignType_22 = ((MR_Word) ((MR_hl_field(1, MaybeForeignType_21, (MR_Integer) 0))));
            MR_String CType_23;
            MR_String Var_29;
            MR_String Var_30;
            MR_String Var_32;
            MR_String Var_33;
            MR_String Var_35;

            CType_23 = backend_libs__foreign__foreign_type_to_c_string_1_f_0(ForeignType_22);
            Var_35 = mercury__string__f_43_43_2_f_0(ArgName_18, (MR_String) ");\n");
            Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ", * ", Var_35);
            Var_32 = mercury__string__f_43_43_2_f_0(ArgLocString_20, Var_33);
            Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_32);
            Var_29 = mercury__string__f_43_43_2_f_0(CType_23, Var_30);
            RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", Var_29);
          }
        }
        break;
      case (MR_Integer) 2:
        RetrieveHeadOutputArg_17 = (MR_String) "";
        break;
    }
    backend_libs__export__retrieve_output_args_4_p_0(ModuleInfo_1, CurArgNum_16, ATs_10, &RetrieveTailOutputArgs_24);
    *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(RetrieveHeadOutputArg_17, RetrieveTailOutputArgs_24);
  }
}

static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer LastArgNum_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word AT_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ATs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgInfo_12 = ((MR_Word) ((MR_hl_field(0, AT_9, (MR_Integer) 0))));
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(0, AT_9, (MR_Integer) 1))));
    MR_Word ArgLoc_14 = ((MR_Word) ((MR_hl_field(0, ArgInfo_12, (MR_Integer) 0))));
    MR_Word Mode_15 = ((MR_Unsigned) ((MR_hl_field(0, ArgInfo_12, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Integer CurArgNum_16 = (MR_Integer) ((MR_Unsigned) LastArgNum_2 + (MR_Unsigned) 1);
    MR_String PassHeadInputArg_23;
    MR_String PassTailInputArgs_24;

    switch (Mode_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ArgName0_17;
          MR_String ArgLocString_18;
          MR_String ArgName_19;
          MR_Word MaybeForeignType_20;
          MR_String Var_27;
          MR_Word RegType_43;
          MR_Integer RegNum_44;

          Var_27 = mercury__string__int_to_string_1_f_0(CurArgNum_16);
          ArgName0_17 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", Var_27);
          RegType_43 = ((MR_Unsigned) ((MR_hl_field(0, ArgLoc_14, (MR_Integer) 0))) & (MR_Integer) 1);
          RegNum_44 = ((MR_Integer) ((MR_hl_field(0, ArgLoc_14, (MR_Integer) 1))));
          switch (RegType_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String Var_53;
                MR_String Var_54;

                Var_54 = mercury__string__int_to_string_1_f_0(RegNum_44);
                Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ")");
                ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", Var_53);
              }
              break;
            case (MR_Integer) 0:
              {
                succeeded = (RegNum_44 > (MR_Integer) 32);
                if (succeeded)
                {
                  MR_String Var_47;
                  MR_String Var_48;

                  Var_48 = mercury__string__int_to_string_1_f_0(RegNum_44);
                  Var_47 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) ")");
                  ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", Var_47);
                }
                else
                {
                  MR_String Var_51;

                  Var_51 = mercury__string__int_to_string_1_f_0(RegNum_44);
                  ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", Var_51);
                }
              }
              break;
          }
          backend_libs__export__convert_type_to_mercury_4_p_0(ArgName0_17, Type_13, ArgLoc_14, &ArgName_19);
          MaybeForeignType_20 = backend_libs__foreign__is_this_a_foreign_type_2_f_0(ModuleInfo_1, Type_13);
          if ((MaybeForeignType_20 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_38;
            MR_String Var_39;
            MR_String Var_41;

            Var_41 = mercury__string__f_43_43_2_f_0(ArgName_19, (MR_String) ";\n");
            Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_41);
            Var_38 = mercury__string__f_43_43_2_f_0(ArgLocString_18, Var_39);
            PassHeadInputArg_23 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_38);
          }
          else
          {
            MR_Word ForeignType_21 = ((MR_Word) ((MR_hl_field(1, MaybeForeignType_20, (MR_Integer) 0))));
            MR_String CType_22;
            MR_String Var_29;
            MR_String Var_30;
            MR_String Var_32;
            MR_String Var_33;
            MR_String Var_35;

            CType_22 = backend_libs__foreign__foreign_type_to_c_string_1_f_0(ForeignType_21);
            Var_35 = mercury__string__f_43_43_2_f_0(ArgLocString_18, (MR_String) ");\n");
            Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_35);
            Var_32 = mercury__string__f_43_43_2_f_0(ArgName_19, Var_33);
            Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_32);
            Var_29 = mercury__string__f_43_43_2_f_0(CType_22, Var_30);
            PassHeadInputArg_23 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", Var_29);
          }
        }
        break;
      case (MR_Integer) 1:
        PassHeadInputArg_23 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        PassHeadInputArg_23 = (MR_String) "";
        break;
    }
    backend_libs__export__pass_input_args_4_p_0(ModuleInfo_1, CurArgNum_16, ATs_10, &PassTailInputArgs_24);
    *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(PassHeadInputArg_23, PassTailInputArgs_24);
  }
}

void MR_CALL 
backend_libs__export__convert_type_to_mercury_4_p_0(
  MR_String RvalStr_5,
  MR_Word Type_6,
  MR_Word TargetArgLoc_7,
  MR_String * ConvertedRvalStr_8)
{
  switch (MR_tag((MR_Word) Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *ConvertedRvalStr_8 = RvalStr_5;
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_9 = ((MR_Word) ((MR_hl_field(2, Type_6, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) BuiltinType_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(0, TargetArgLoc_7, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_44) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *ConvertedRvalStr_8 = RvalStr_5;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_33;

                        Var_33 = mercury__string__f_43_43_2_f_0(RvalStr_5, (MR_String) ")");
                        *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", Var_33);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", RvalStr_5);
                break;
              case (MR_Integer) 2:
                *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_UnsignedChar) ", RvalStr_5);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_12 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_9, (MR_Integer) 0))) & (MR_Integer) 15);

              switch (IntType_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 3:
                  *ConvertedRvalStr_8 = RvalStr_5;
                  break;
                case (MR_Integer) 8:
                  {
                    MR_String Var_38;

                    Var_38 = mercury__string__f_43_43_2_f_0(RvalStr_5, (MR_String) ")");
                    *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_int64_to_word(", Var_38);
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_String Var_41;

                    Var_41 = mercury__string__f_43_43_2_f_0(RvalStr_5, (MR_String) ")");
                    *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_uint64_to_word(", Var_41);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      *ConvertedRvalStr_8 = RvalStr_5;
      break;
  }
}

static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word NameThem_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_String) "void";
  else
    backend_libs__export__get_argument_declarations_nonvoid_5_p_0(ModuleInfo_1, NameThem_2, (MR_Integer) 0, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
backend_libs__export__get_foreign_export_decls_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * ForeignExportDecls_4)
{
  MR_Word PredIdTable_5;
  MR_Word ForeignDeclCodeUserCord_6;
  MR_Word ForeignDeclCodeAuxCord_7;
  MR_Word ForeignDeclCodes_8;
  MR_Word ExportedProcsCord_9;
  MR_Word ExportDecls_10;
  MR_Word Var_11;
  MR_Word Var_12;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_3, &PredIdTable_5);
  hlds__hlds_module__module_info_get_foreign_decl_codes_user_2_p_0(ModuleInfo_3, &ForeignDeclCodeUserCord_6);
  hlds__hlds_module__module_info_get_foreign_decl_codes_aux_2_p_0(ModuleInfo_3, &ForeignDeclCodeAuxCord_7);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodeUserCord_6, ForeignDeclCodeAuxCord_7);
  ForeignDeclCodes_8 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), Var_11);
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ModuleInfo_3, &ExportedProcsCord_9);
  Var_12 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcsCord_9);
  backend_libs__export__get_foreign_export_decls_loop_4_p_0(ModuleInfo_3, PredIdTable_5, Var_12, &ExportDecls_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ForeignExportDecls_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ForeignDeclCodes_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExportDecls_10));
  }
}

static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredIdTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadExportedProc_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailExportedProcs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadExportDecl_11;
    MR_Word TailExportDecls_12;
    MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadExportedProc_9, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(0, HeadExportedProc_9, (MR_Integer) 1))));
    MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(0, HeadExportedProc_9, (MR_Integer) 2))));
    MR_String ExportName_16 = ((MR_String) ((MR_hl_field(0, HeadExportedProc_9, (MR_Integer) 3))));
    MR_String RetType_19;
    MR_String ArgDecls_24;

    switch (Lang_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HeadArgInfoTypes_23;
          MR_String _HowToDeclare_18;
          MR_String _DeclareReturnVal_20;
          MR_String _FailureAction_21;
          MR_String _SuccessAction_22;

          backend_libs__export__get_export_info_for_lang_c_10_p_0(ModuleInfo_1, PredIdTable_2, PredId_14, ProcId_15, &_HowToDeclare_18, &RetType_19, &_DeclareReturnVal_20, &_FailureAction_21, &_SuccessAction_22, &HeadArgInfoTypes_23);
          if ((HeadArgInfoTypes_23 == (MR_Word) ((MR_Unsigned) 0U)))
            ArgDecls_24 = (MR_String) "void";
          else
            backend_libs__export__get_argument_declarations_nonvoid_5_p_0(ModuleInfo_1, (MR_Integer) 0, (MR_Integer) 0, HeadArgInfoTypes_23, &ArgDecls_24);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140backend_libs.export.get_foreign_export_decls_loop\'/4", (MR_String) ":- pragma foreign_export for non-C backends.");
          return;
        }
        break;
    }
    {
      HeadExportDecl_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadExportDecl_11, 0) = (MR_Box) ((MR_Unsigned) (Lang_13));
      MR_hl_field(0, HeadExportDecl_11, 1) = ((MR_Box) (RetType_19));
      MR_hl_field(0, HeadExportDecl_11, 2) = ((MR_Box) (ExportName_16));
      MR_hl_field(0, HeadExportDecl_11, 3) = ((MR_Box) (ArgDecls_24));
    }
    backend_libs__export__get_foreign_export_decls_loop_4_p_0(ModuleInfo_1, PredIdTable_2, TailExportedProcs_10, &TailExportDecls_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadExportDecl_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailExportDecls_12));
    }
  }
}

static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word NameThem_2,
  MR_Integer LastArgNum_3,
  MR_Word HeadVar__4_4,
  MR_String * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_String) "";
  else
  {
    MR_Word AT_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ATs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ArgInfo_15 = ((MR_Word) ((MR_hl_field(0, AT_12, (MR_Integer) 0))));
    MR_Word Type_16 = ((MR_Word) ((MR_hl_field(0, AT_12, (MR_Integer) 1))));
    MR_Integer CurArgNum_17 = (MR_Integer) ((MR_Unsigned) LastArgNum_3 + (MR_Unsigned) 1);
    MR_String TypeString_18;
    MR_String ArgName_19;
    MR_String HeadArgsDecl_20;
    MR_Word Mode_28 = ((MR_Unsigned) ((MR_hl_field(0, ArgInfo_15, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word MaybeForeignType_30;
    MR_String TypeString0_31;

    switch (NameThem_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ArgName_19 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgNumString_29;

          mercury__string__int_to_string_2_p_0(CurArgNum_17, &ArgNumString_29);
          mercury__string__append_3_p_2((MR_String) " Mercury__argument", ArgNumString_29, &ArgName_19);
        }
        break;
    }
    MaybeForeignType_30 = backend_libs__foreign__is_this_a_foreign_type_2_f_0(ModuleInfo_1, Type_16);
    TypeString0_31 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(Type_16, MaybeForeignType_30);
    switch (Mode_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        TypeString_18 = TypeString0_31;
        break;
      case (MR_Integer) 1:
        TypeString_18 = mercury__string__f_43_43_2_f_0(TypeString0_31, (MR_String) " *");
        break;
    }
    HeadArgsDecl_20 = mercury__string__f_43_43_2_f_0(TypeString_18, ArgName_19);
    if ((ATs_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = HeadArgsDecl_20;
    else
    {
      MR_String TailArgsDecl_23;
      MR_String Var_25;

      backend_libs__export__get_argument_declarations_nonvoid_5_p_0(ModuleInfo_1, NameThem_2, CurArgNum_17, ATs_13, &TailArgsDecl_23);
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ", ", TailArgsDecl_23);
      *HeadVar__5_5 = mercury__string__f_43_43_2_f_0(HeadArgsDecl_20, Var_25);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__export__include_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredIdTable_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_String * HowToDeclareLabel_15,
  MR_String * CRetType_16,
  MR_String * MaybeDeclareRetval_17,
  MR_String * MaybeFail_18,
  MR_String * MaybeSucceed_19,
  MR_Word * ArgInfoTypes_20)
{
  MR_bool succeeded;
  MR_Word PredInfo_21;
  MR_Word Status_22;
  MR_Word PredOrFunc_23;
  MR_Word ProcTable_24;
  MR_Word ProcInfo_25;
  MR_Word MaybeArgInfos_26;
  MR_Word Markers_27;
  MR_Word ArgTypes_28;
  MR_Word ArgInfos_30;
  MR_Word CodeModel_32;
  MR_Word ArgInfoTypes0_33;
  MR_Word ArgInfoTypes2_43;
  MR_Word Var_71;
  MR_Box conv0_PredInfo_21;
  MR_Box conv1_ProcInfo_25;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_12, ((MR_Box) (PredId_13)), &conv0_PredInfo_21);
  PredInfo_21 = ((MR_Word) (conv0_PredInfo_21));
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_21, &Status_22);
  succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_11, PredInfo_21, ProcId_14);
  if (!(succeeded))
  {
    MR_Word Var_44;

    Var_44 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_22);
    succeeded = (Var_44 == (MR_Integer) 0);
  }
  if (succeeded)
    *HowToDeclareLabel_15 = (MR_String) "MR_declare_entry";
  else
    *HowToDeclareLabel_15 = (MR_String) "MR_declare_static";
  PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &ProcTable_24);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_24, ((MR_Box) (ProcId_14)), &conv1_ProcInfo_25);
  ProcInfo_25 = ((MR_Word) (conv1_ProcInfo_25));
  hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(ProcInfo_25, &MaybeArgInfos_26);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_21, &Markers_27);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &ArgTypes_28);
  if ((MaybeArgInfos_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NewProcInfo_31;

    hlds__arg_info__generate_proc_arg_info_5_p_0(ModuleInfo_11, Markers_27, ArgTypes_28, ProcInfo_25, &NewProcInfo_31);
    hlds__hlds_pred__proc_info_arg_info_2_p_0(NewProcInfo_31, &ArgInfos_30);
  }
  else
    ArgInfos_30 = ((MR_Word) ((MR_hl_field(1, MaybeArgInfos_26, (MR_Integer) 0))));
  CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_25);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgInfos_30, ArgTypes_28, &ArgInfoTypes0_33);
  switch (CodeModel_32) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ArgInfoTypes1_34;
        MR_Word RetArgLoc_35;
        MR_Word RetType_37;
        MR_Word TypeInfo_78_78;
        MR_Word RetArgMode_36;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Box conv2_Var_45;

        succeeded = (PredOrFunc_23 == (MR_Integer) 1);
        if (succeeded)
        {
          TypeInfo_78_78 = (MR_Word) (&backend_libs__export_scalar_common_1[0]);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeInfo_78_78, ArgInfoTypes0_33, &ArgInfoTypes1_34, &conv2_Var_45);
          Var_45 = ((MR_Word) (conv2_Var_45));
          Var_46 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
          RetType_37 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 1))));
          RetArgLoc_35 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
          RetArgMode_36 = ((MR_Unsigned) ((MR_hl_field(0, Var_46, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (RetArgMode_36 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_47 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_11, RetType_37);
            succeeded = (Var_47 == (MR_Integer) 1);
          }
        }
        if (succeeded)
        {
          MR_Word MaybeForeignRetType_38;
          MR_String RetArgString0_39;
          MR_String RetArgString_40;
          MR_String Var_49;
          MR_Word RegType_81;
          MR_Integer RegNum_82;

          MaybeForeignRetType_38 = backend_libs__foreign__is_this_a_foreign_type_2_f_0(ModuleInfo_11, RetType_37);
          *CRetType_16 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(RetType_37, MaybeForeignRetType_38);
          RegType_81 = ((MR_Unsigned) ((MR_hl_field(0, RetArgLoc_35, (MR_Integer) 0))) & (MR_Integer) 1);
          RegNum_82 = ((MR_Integer) ((MR_hl_field(0, RetArgLoc_35, (MR_Integer) 1))));
          switch (RegType_81) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String Var_91;
                MR_String Var_92;

                Var_92 = mercury__string__int_to_string_1_f_0(RegNum_82);
                Var_91 = mercury__string__f_43_43_2_f_0(Var_92, (MR_String) ")");
                RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", Var_91);
              }
              break;
            case (MR_Integer) 0:
              {
                succeeded = (RegNum_82 > (MR_Integer) 32);
                if (succeeded)
                {
                  MR_String Var_85;
                  MR_String Var_86;

                  Var_86 = mercury__string__int_to_string_1_f_0(RegNum_82);
                  Var_85 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) ")");
                  RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", Var_85);
                }
                else
                {
                  MR_String Var_89;

                  Var_89 = mercury__string__int_to_string_1_f_0(RegNum_82);
                  RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", Var_89);
                }
              }
              break;
          }
          backend_libs__export__convert_type_from_mercury_4_p_0(RetArgLoc_35, RetArgString0_39, RetType_37, &RetArgString_40);
          Var_49 = mercury__string__f_43_43_2_f_0(*CRetType_16, (MR_String) " return_value;\n");
          *MaybeDeclareRetval_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_49);
          if ((MaybeForeignRetType_38 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_58;

            Var_58 = mercury__string__f_43_43_2_f_0(RetArgString_40, (MR_String) ";\n");
            *MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\treturn_value = ", Var_58);
          }
          else
          {
            MR_String Var_52;
            MR_String Var_53;
            MR_String Var_55;

            Var_55 = mercury__string__f_43_43_2_f_0(RetArgString_40, (MR_String) ", return_value);\n");
            Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_55);
            Var_52 = mercury__string__f_43_43_2_f_0(*CRetType_16, Var_53);
            *MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", Var_52);
          }
          *MaybeSucceed_19 = (MR_String) "\treturn return_value;\n";
          ArgInfoTypes2_43 = ArgInfoTypes1_34;
        }
        else
        {
          *CRetType_16 = (MR_String) "void";
          *MaybeDeclareRetval_17 = (MR_String) "";
          *MaybeFail_18 = (MR_String) "";
          *MaybeSucceed_19 = (MR_String) "";
          ArgInfoTypes2_43 = ArgInfoTypes0_33;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.get_export_info_for_lang_c\'/10", (MR_String) "Attempt to export model_non procedure.");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        *CRetType_16 = (MR_String) "MR_bool";
        *MaybeDeclareRetval_17 = (MR_String) "";
        mercury__string__append_list_2_p_0((MR_Word) (MR_mkword(1, &backend_libs__export_scalar_common_2[25])), MaybeFail_18);
        *MaybeSucceed_19 = (MR_String) "\treturn MR_TRUE;\n";
        ArgInfoTypes2_43 = ArgInfoTypes0_33;
      }
      break;
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[0]));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (backend_libs__export__get_export_info_for_lang_c_10_p_0_1));
    MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_71, 3) = ((MR_Box) (ModuleInfo_11));
  }
  mercury__list__filter_3_p_0((MR_Word) (&backend_libs__export_scalar_common_1[0]), Var_71, ArgInfoTypes2_43, ArgInfoTypes_20);
}

void MR_CALL 
backend_libs__export__convert_type_from_mercury_4_p_0(
  MR_Word SourceArgLoc_5,
  MR_String RvalStr_6,
  MR_Word Type_7,
  MR_String * ConvertedRvalStr_8)
{
  switch (MR_tag((MR_Word) Type_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *ConvertedRvalStr_8 = RvalStr_6;
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_9 = ((MR_Word) ((MR_hl_field(2, Type_7, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) BuiltinType_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, SourceArgLoc_5, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_43) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *ConvertedRvalStr_8 = RvalStr_6;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_33;

                        Var_33 = mercury__string__f_43_43_2_f_0(RvalStr_6, (MR_String) ")");
                        *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", Var_33);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", RvalStr_6);
                break;
              case (MR_Integer) 2:
                *ConvertedRvalStr_8 = RvalStr_6;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_12 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_9, (MR_Integer) 0))) & (MR_Integer) 15);

              switch (IntType_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 3:
                  *ConvertedRvalStr_8 = RvalStr_6;
                  break;
                case (MR_Integer) 8:
                  {
                    MR_String Var_37;

                    Var_37 = mercury__string__f_43_43_2_f_0(RvalStr_6, (MR_String) ")");
                    *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_int64(", Var_37);
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_String Var_40;

                    Var_40 = mercury__string__f_43_43_2_f_0(RvalStr_6, (MR_String) ")");
                    *ConvertedRvalStr_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_uint64(", Var_40);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      *ConvertedRvalStr_8 = RvalStr_6;
      break;
  }
}

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__export__init(void)
{
}

void mercury__backend_libs__export__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0);
}

void mercury__backend_libs__export__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__export__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.export.
