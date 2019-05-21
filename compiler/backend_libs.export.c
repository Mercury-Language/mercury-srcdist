/*
** Automatically generated from `export.m'
** by the Mercury compiler,
** version rotd-2018-04-02
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__983__1_2_p_0(
  MR_Integer Arity_12,
  MR_Integer HeadVar__2_62);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__934__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__874__1_2_p_0(
  MR_Word Lang_16,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__289__1_2_p_0(
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
  MR_Word STATE_VARIABLE_NamesAndTagsCord_0_57,
  MR_Word * STATE_VARIABLE_NamesAndTagsCord_58);

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
backend_libs__export__output_foreign_decl_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__export__output_foreign_decl_8_p_0(
  MR_Word Stream_9,
  MR_Word MaybeSetLineNumbers_10,
  MR_Word MaybeThisFileName_11,
  MR_String SourceFileName_12,
  MR_Word MaybeDesiredIsLocal_13,
  MR_Word DeclCode_14);

static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word Preds_6,
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
  MR_Word Preds_2,
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
  MR_Word Preds_12,
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


static /* final */ const MR_Box backend_libs__export_scalar_common_1[2][3];

static /* final */ const MR_Box backend_libs__export_scalar_common_2[27][2];

static /* final */ const MR_Box backend_libs__export_scalar_common_3[4][5];

static /* final */ const MR_Box backend_libs__export_scalar_common_4[2][4];

static /* final */ const MR_Box backend_libs__export_scalar_common_5[1][9];

static /* final */ const MR_Box backend_libs__export_scalar_common_6[2][1];

static /* final */ const MR_Box backend_libs__export_scalar_common_7[1][11];

static /* final */ const MR_Box backend_libs__export_scalar_common_9[1][7];


/* sealed */ struct backend_libs__export__vector_common_type_8_0_s {
  const MR_String backend_libs__export__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct backend_libs__export__vector_common_type_8_0_s backend_libs__export_vector_common_8[5];



static /* final */ const MR_Box backend_libs__export_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__export_scalar_common_4[0])),
    ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_2[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "*/\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "** Do not edit.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "#include \"mercury_deep_profiling.h\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "#ifdef MR_DEEP_PROFILING\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "  #endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "  #include \"mercury_imp.h\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "  #ifndef MERCURY_HDR_EXCLUDE_IMP_H\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "#else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "#include \"mercury.h\"\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "extern \"C\" {\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "#ifdef __cplusplus\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\t}\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\treturn MR_FALSE;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_regs_from_mem(c_regs);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\tif (!MR_r1) {\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "}\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) " */\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_4[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__export_scalar_common_3[2])),
    ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0)),
    ((MR_Box) (&backend_libs__export__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0)),
    ((MR_Box) (&backend_libs__export__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__export__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&backend_libs__export__cord__pti_cord_1__plain_backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0)),
    ((MR_Box) (&backend_libs__export__cord__pti_cord_1__plain_backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0))
  },
};


static /* final */ const struct backend_libs__export__vector_common_type_8_0_s backend_libs__export_vector_common_8[5] = {
  /* row 0 */   {     (MR_String) "MR_BaseTypeclassInfo" },
  /* row 1 */   {     (MR_String) "MR_TypeClassInfo" },
  /* row 2 */   {     (MR_String) "MR_TypeCtorInfo" },
  /* row 3 */   {     (MR_String) "MR_TypeInfo" },
  /* row 4 */   {     (MR_String) "MR_Word" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__cord__pti_cord_1__plain_backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0
  }
};

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_0 = {
  (MR_String) "ee_name_and_tag_rep_int",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_1 = {
  (MR_String) "ee_name_and_tag_rep_string",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__export__backend_libs__export__field_types_exported_enum_name_and_tag_rep_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_0[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_0
};

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_1[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_name_and_tag_rep_0_1
};

static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_name_and_tag_rep_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_name_and_tag_rep_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0_10001)),
  ((MR_Box) (backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0_10001)),
  (MR_String) "backend_libs.export",
  (MR_String) "exported_enum_name_and_tag_rep",
  {     backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_name_and_tag_rep_0 },
  {     backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_name_and_tag_rep_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__export__backend_libs__export__functor_number_map_exported_enum_name_and_tag_rep_0
};

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__983__1_2_p_0(
  MR_Integer Arity_12,
  MR_Integer HeadVar__2_62)
{
  {
    MR_bool succeeded = (Arity_12 == HeadVar__2_62);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__934__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_26)
{
  {
    MR_bool succeeded = (Lang_14 == HeadVar__2_26);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__874__1_2_p_0(
  MR_Word Lang_16,
  MR_Word HeadVar__2_26)
{
  {
    MR_bool succeeded = (Lang_16 == HeadVar__2_26);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__289__1_2_p_0(
  MR_Word Lang_9,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded = (Lang_9 == HeadVar__2_29);

    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_23 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_8, Var_29, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_28, ArgY2_7);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_String Var_30 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_31 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_String ArgY2_20 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_21;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_21, Var_31, ArgY1_18);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_30, ArgY2_20);
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
          succeeded = (ArgX2_5 == ArgY2_6);
      }
    }
    else
    {
      MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_8;
      MR_String ArgX2_9 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_10 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
        if (succeeded)
          succeeded = (strcmp(ArgX2_9, ArgY2_10) == 0);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__983__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_4_p_0(
  MR_Word Mapping_5,
  MR_Word CtorRepn_6,
  MR_Word STATE_VARIABLE_NamesAndTagsCord_0_57,
  MR_Word * STATE_VARIABLE_NamesAndTagsCord_58)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_69_69;
    MR_Word SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_6, (MR_Integer) 1)));
    MR_Word ConsTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_6, (MR_Integer) 2)));
    MR_Integer Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepn_6, (MR_Integer) 4)));
    MR_String Name_14;
    MR_String ForeignName_15;
    MR_Word NameAndTag_18;
    MR_Word Var_59;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_6, (MR_Integer) 5)));
    MR_Box conv0_ForeignName_15;

    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (backend_libs__export__foreign_const_name_and_tag_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Arity_12));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant arity != 0");
    Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
    TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_69_69, TypeCtorInfo_69_69, Mapping_5, ((MR_Box) (Name_14)), &conv0_ForeignName_15);
    ForeignName_15 = ((MR_String) conv0_ForeignName_15);
    switch (MR_tag((MR_Word) ConsTag_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) IntTag_16)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_16, (MR_Integer) 0)));

                    {
                      NameAndTag_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), NameAndTag_18, 0) = ((MR_Box) (ForeignName_15));
                      MR_hl_field(MR_mktag(0), NameAndTag_18, 1) = ((MR_Box) (Int_17));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ForeignTag_29 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2)));
              MR_Word _ForeignLang_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));

              {
                NameAndTag_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NameAndTag_18, 0) = ((MR_Box) (ForeignName_15));
                MR_hl_field(MR_mktag(1), NameAndTag_18, 1) = ((MR_Box) (ForeignTag_29));
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
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/4", (MR_String) "enum constant requires an int tag");
                return;
              }
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_NamesAndTagsCord_58 = mercury__cord__snoc_2_f_0((MR_Word) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0, STATE_VARIABLE_NamesAndTagsCord_0_57, ((MR_Box) (NameAndTag_18)));
  }
}

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_NamesAndTagsCord_58;

    backend_libs__export__foreign_const_name_and_tag_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_NamesAndTagsCord_58);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NamesAndTagsCord_58));
  }
}

static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__934__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0(
  MR_Word Stream_7,
  MR_Word MaybeSetLineNumbers_8,
  MR_Word MaybeThisFileName_9,
  MR_Word ExportedEnumInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_36_36;
    MR_Word CtorRepns_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_10, (MR_Integer) 1)));
    MR_Word Lang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_10, (MR_Integer) 2)));
    MR_Word NameMapping_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_10, (MR_Integer) 3)));
    MR_Word Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_10, (MR_Integer) 4)));
    MR_Word ForeignNamesAndTagsCord_17;
    MR_Word ForeignNamesAndTags_18;
    MR_String File_19;
    MR_Integer Line_20;
    MR_Word Var_23;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word _TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_10, (MR_Integer) 0)));
    MR_Box conv1_ForeignNamesAndTagsCord_17;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Lang_14));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/6", (MR_String) "Lang != lang_c");
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&backend_libs__export_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (NameMapping_15));
    }
    TypeCtorInfo_36_36 = (MR_Word) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_name_and_tag_rep_0;
    Var_28 = mercury__cord__init_0_f_0(TypeCtorInfo_36_36);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0, (MR_Word) &backend_libs__export_scalar_common_2[0], Var_27, CtorRepns_13, ((MR_Box) (Var_28)), &conv1_ForeignNamesAndTagsCord_17);
    ForeignNamesAndTagsCord_17 = ((MR_Word) conv1_ForeignNamesAndTagsCord_17);
    ForeignNamesAndTags_18 = mercury__cord__list_1_f_0(TypeCtorInfo_36_36, ForeignNamesAndTagsCord_17);
    mercury__term__context_file_2_p_0(Context_16, &File_19);
    mercury__term__context_line_2_p_0(Context_16, &Line_20);
    backend_libs__c_util__maybe_set_line_num_6_p_0(Stream_7, MaybeSetLineNumbers_8, File_19, Line_20);
    backend_libs__export__output_exported_enum_constname_tags_4_p_0(Stream_7, ForeignNamesAndTags_18);
    backend_libs__c_util__maybe_reset_line_num_5_p_0(Stream_7, MaybeSetLineNumbers_8, MaybeThisFileName_9);
  }
}

static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tags_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word NameAndTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word NameAndTags_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      if (((MR_tag((MR_Word) NameAndTag_10)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), NameAndTag_10, (MR_Integer) 0)));
        MR_Integer RawIntTag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NameAndTag_10, (MR_Integer) 1)));
        MR_String Var_53;

        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "#define ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, Name_22);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__export_scalar_common_6[1], RawIntTag_23, &Var_53);
        mercury__io__write_string_4_p_0(HeadVar__1_1, Var_53);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      }
      else
      {
        MR_String RawStrTag_24 = ((MR_String) (MR_hl_field(MR_mktag(1), NameAndTag_10, (MR_Integer) 1)));
        MR_String Name_39 = ((MR_String) (MR_hl_field(MR_mktag(1), NameAndTag_10, (MR_Integer) 0)));

        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "#define ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, Name_39);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " ");
        mercury__io__write_string_4_p_0(HeadVar__1_1, RawStrTag_24);
        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      }
      // direct tailcall eliminated
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
  {
    MR_bool succeeded;
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_2, (MR_Integer) 2)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_2, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_2, (MR_Integer) 1)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_2, (MR_Integer) 3)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_2, (MR_Integer) 4)));

    succeeded = (Var_3 == (MR_Integer) 0);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__export__IntroducedFrom__pred__output_foreign_decl__874__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export__output_foreign_decl_8_p_0(
  MR_Word Stream_9,
  MR_Word MaybeSetLineNumbers_10,
  MR_Word MaybeThisFileName_11,
  MR_String SourceFileName_12,
  MR_Word MaybeDesiredIsLocal_13,
  MR_Word DeclCode_14)
{
  {
    MR_bool succeeded;
    MR_Word Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_14, (MR_Integer) 0)));
    MR_Word IsLocal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_14, (MR_Integer) 1)));
    MR_Word LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_14, (MR_Integer) 2)));
    MR_Word Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeclCode_14, (MR_Integer) 3)));
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (backend_libs__export__output_foreign_decl_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Lang_16));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140backend_libs.export.output_foreign_decl\'/8", (MR_String) "Lang != lang_c");
    if ((MaybeDesiredIsLocal_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word DesiredIsLocal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDesiredIsLocal_13, (MR_Integer) 0)));

      succeeded = (DesiredIsLocal_20 == IsLocal_17);
    }
    if (succeeded)
    {
      if (((MR_tag((MR_Word) LiteralOrInclude_18)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String IncludeFileName_41 = ((MR_String) (MR_hl_field(MR_mktag(1), LiteralOrInclude_18, (MR_Integer) 0)));
        MR_String IncludePath_42;

        parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_12, IncludeFileName_41, &IncludePath_42);
        backend_libs__c_util__maybe_set_line_num_6_p_0(Stream_9, MaybeSetLineNumbers_10, IncludePath_42, (MR_Integer) 1);
        libs__file_util__write_include_file_contents_4_p_0(Stream_9, IncludePath_42);
      }
      else
      {
        MR_String Code_38 = ((MR_String) (MR_hl_field(MR_mktag(0), LiteralOrInclude_18, (MR_Integer) 0)));
        MR_String File_39;
        MR_Integer Line_40;

        mercury__term__context_file_2_p_0(Context_19, &File_39);
        mercury__term__context_line_2_p_0(Context_19, &Line_40);
        backend_libs__c_util__maybe_set_line_num_6_p_0(Stream_9, MaybeSetLineNumbers_10, File_39, Line_40);
        mercury__io__write_string_4_p_0(Stream_9, Code_38);
      }
      mercury__io__nl_3_p_0(Stream_9);
      backend_libs__c_util__maybe_reset_line_num_5_p_0(Stream_9, MaybeSetLineNumbers_10, MaybeThisFileName_11);
    }
    else
    {
    }
  }
}

static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Mode_5;
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Var_8;
    MR_Word _Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0)));

    Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1)));
    succeeded = (Mode_5 == (MR_Integer) 2);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_8 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_3, Type_6);
      succeeded = (Var_8 == (MR_Integer) 1);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(
  MR_String HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 4;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string simple lookup switch
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&backend_libs__export_vector_common_8[0 + mid_2]))->backend_libs__export__vector_common_type_8_0__vct_8_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        succeeded = MR_TRUE;
        // jump out of search loop
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    backend_libs__export__output_foreign_decl_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    backend_libs__export__output_exported_c_enum_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__export__exported_enum_is_for_c_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__export__produce_header_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ForeignExportDecls_7,
  MR_Word ModuleName_8)
{
  {
    MR_bool succeeded;
    MR_Word Globals_10;
    MR_String FileName_12;
    MR_Word MaybeThisFileName_13;
    MR_Word Result_14;
    MR_String Var_34;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".mh", ModuleName_8, &FileName_12);
    {
      MaybeThisFileName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeThisFileName_13, 0) = ((MR_Box) (FileName_12));
    }
    Var_34 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) ".tmp");
    mercury__io__open_output_4_p_0(Var_34, &Result_14);
    if (((MR_tag((MR_Word) Result_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ProgName_29;
      MR_String Var_44;

      mercury__io__progname_base_4_p_0((MR_String) "export.m", &ProgName_29);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0(ProgName_29);
      mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
      Var_44 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) ".tmp");
      mercury__io__write_string_3_p_0(Var_44);
      mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word TypeCtorInfo_171_171;
      MR_Word TypeCtorInfo_173_173;
      MR_Word FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_14, (MR_Integer) 0)));
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
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Word Var_71;
      MR_Word Var_80;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_86;
      MR_Word Var_88;
      MR_Word Var_151;
      MR_Word Var_154;
      MR_Word Var_156;
      MR_Word Var_158;
      MR_Word Var_160;
      MR_Word Var_162;
      MR_Word Var_164;

      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 1, (MR_String) ".m", ModuleName_8, &SourceFileName_16);
      mercury__library__version_2_p_0(&Version_17, &Fullarch_18);
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Fullarch_18));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[3])));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "** configured for "));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Version_17));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) ((MR_String) "** version "));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_String) "\'\n"));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SourceFileName_16));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_String) "/*\n"));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      mercury__io__write_strings_4_p_0(FileStream_15, Var_54);
      MangledModuleName_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_8);
      mercury__string__to_upper_2_p_0(MangledModuleName_19, &UppercaseModuleName_20);
      GuardMacroName_21 = mercury__string__f_43_43_2_f_0(UppercaseModuleName_20, (MR_String) "_MH");
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (GuardMacroName_21));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[20])));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) ((MR_String) "#define "));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (GuardMacroName_21));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) ((MR_String) "#ifndef "));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
      }
      mercury__io__write_strings_4_p_0(FileStream_15, Var_80);
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(ModuleInfo_6, &ExportedEnums_22);
      TypeCtorInfo_171_171 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0;
      mercury__list__filter_3_p_0(TypeCtorInfo_171_171, (MR_Word) &backend_libs__export_scalar_common_1[1], ExportedEnums_22, &CExportedEnums_23);
      ForeignDeclCodes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignExportDecls_7, (MR_Integer) 0)));
      CExportDecls_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignExportDecls_7, (MR_Integer) 1)));
      TypeCtorInfo_173_173 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
      mercury__list__filter_3_p_0(TypeCtorInfo_173_173, (MR_Word) &backend_libs__export_scalar_common_4[1], ForeignDeclCodes_24, &CForeignDeclCodes_26);
      succeeded = (CExportedEnums_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (CForeignDeclCodes_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (!(succeeded))
      {
        MR_Word TypeCtorInfo_177_177;
        MR_Word MaybeSetLineNumbers_27;
        MR_Word Var_128;
        MR_Word Var_131;
        MR_String Var_132;
        MR_Word Var_133;
        MR_Word Var_135;
        MR_Word Var_137;
        MR_String Var_138;
        MR_Word Var_142;
        MR_Word Var_144;
        MR_Box conv0_STATE_VARIABLE_IO_143_143;
        MR_Box conv1_STATE_VARIABLE_IO_145_145;

        MaybeSetLineNumbers_27 = backend_libs__c_util__lookup_line_numbers_2_f_0(Globals_10, (MR_Integer) 152);
        Var_132 = backend_libs__foreign__decl_guard_1_f_0(ModuleName_8);
        Var_138 = backend_libs__foreign__decl_guard_1_f_0(ModuleName_8);
        {
          Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
          MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[4])));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) ((MR_String) "#define "));
          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_137));
        }
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_135));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_133));
        }
        {
          Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) ((MR_String) "#ifndef "));
          MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_131));
        }
        mercury__io__write_strings_4_p_0(FileStream_15, Var_128);
        {
          Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_142, 3) = ((MR_Box) (FileStream_15));
          MR_hl_field(MR_mktag(0), Var_142, 4) = ((MR_Box) (MaybeSetLineNumbers_27));
          MR_hl_field(MR_mktag(0), Var_142, 5) = ((MR_Box) (MaybeThisFileName_13));
        }
        TypeCtorInfo_177_177 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
        mercury__list__foldl_4_p_2(TypeCtorInfo_171_171, TypeCtorInfo_177_177, Var_142, CExportedEnums_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_143_143);
        {
          Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_4));
          MR_hl_field(MR_mktag(0), Var_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_144, 3) = ((MR_Box) (FileStream_15));
          MR_hl_field(MR_mktag(0), Var_144, 4) = ((MR_Box) (MaybeSetLineNumbers_27));
          MR_hl_field(MR_mktag(0), Var_144, 5) = ((MR_Box) (MaybeThisFileName_13));
          MR_hl_field(MR_mktag(0), Var_144, 6) = ((MR_Box) (SourceFileName_16));
          MR_hl_field(MR_mktag(0), Var_144, 7) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_6[0])));
        }
        mercury__list__foldl_4_p_2(TypeCtorInfo_173_173, TypeCtorInfo_177_177, Var_144, CForeignDeclCodes_26, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_145_145);
        mercury__io__write_string_4_p_0(FileStream_15, (MR_String) "\n#endif\n");
      }
      backend_libs__export__write_export_decls_4_p_0(FileStream_15, CExportDecls_25);
      {
        Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (GuardMacroName_21));
        MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[26])));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) ((MR_String) "#endif /* "));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_164));
      }
      {
        Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_162));
      }
      {
        Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) ((MR_String) "#endif\n"));
        MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_160));
      }
      {
        Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) ((MR_String) "}\n"));
        MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_158));
      }
      {
        Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
        MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_156));
      }
      {
        Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_154));
      }
      mercury__io__write_strings_4_p_0(FileStream_15, Var_151);
      mercury__io__close_output_3_p_0(FileStream_15);
      parse_tree__module_cmds__update_interface_4_p_0(Globals_10, FileName_12);
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
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word ExportDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ExportDecls_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportDecl_10, (MR_Integer) 0)));
      MR_String CRetType_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ExportDecl_10, (MR_Integer) 1)));
      MR_String CFunction_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ExportDecl_10, (MR_Integer) 2)));
      MR_String ArgDecls_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ExportDecl_10, (MR_Integer) 3)));
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
        case (MR_Integer) 3:
        case (MR_Integer) 2:
          {
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140backend_libs.export.write_export_decls\'/4", (MR_String) "foreign languages other than C unimplemented");
              return;
            }
          }
          break;
      }
      // direct tailcall eliminated
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
  {
    MR_Word ExportedProcsCord_5;
    MR_Word PredicateTable_6;
    MR_Word Preds_7;
    MR_Word Var_8;

    hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ModuleInfo_3, &ExportedProcsCord_5);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_3, &PredicateTable_6);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_6, &Preds_7);
    Var_8 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, ExportedProcsCord_5);
    backend_libs__export__export_procs_to_c_4_p_0(ModuleInfo_3, Preds_7, Var_8, ExportedProcsCode_4);
  }
}

static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word ExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ExportDefn_11;
    MR_Word ExportDefns_12;

    backend_libs__export__export_proc_to_c_4_p_0(HeadVar__1_1, HeadVar__2_2, ExportedProc_9, &ExportDefn_11);
    backend_libs__export__export_procs_to_c_4_p_0(HeadVar__1_1, HeadVar__2_2, ExportedProcs_10, &ExportDefns_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ExportDefn_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ExportDefns_12));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__export__IntroducedFrom__pred__export_proc_to_c__289__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Preds_6,
  MR_Word ExportedProc_7,
  MR_Word * ExportDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word Lang_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedProc_7, (MR_Integer) 0)));
    MR_Word PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedProc_7, (MR_Integer) 1)));
    MR_Integer ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ExportedProc_7, (MR_Integer) 2)));
    MR_String CFunction_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ExportedProc_7, (MR_Integer) 3)));
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
    MR_Word _Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedProc_7, (MR_Integer) 4)));

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (backend_libs__export__export_proc_to_c_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140backend_libs.export.export_proc_to_c\'/4", (MR_String) "foreign language other than C");
    backend_libs__export__get_export_info_for_lang_c_10_p_0(ModuleInfo_5, Preds_6, PredId_10, ProcId_11, &DeclareString_14, &CRetType_15, &MaybeDeclareRetval_16, &MaybeFail_17, &MaybeSucceed_18, &ArgInfoTypes_19);
    backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(ModuleInfo_5, (MR_Integer) 1, ArgInfoTypes_19, &ArgDecls_20);
    backend_libs__export__pass_input_args_4_p_0(ModuleInfo_5, (MR_Integer) 0, ArgInfoTypes_19, &PassInputArgs_21);
    backend_libs__export__retrieve_output_args_4_p_0(ModuleInfo_5, (MR_Integer) 0, ArgInfoTypes_19, &RetrieveOutputArgs_22);
    ProcLabel_23 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_5, PredId_10, ProcId_11);
    ProcLabelString_24 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_23, (MR_Integer) 1);
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (MaybeSucceed_18));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[25])));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_String) "\tMR_restore_regs_from_mem(c_regs);\n"));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) ((MR_String) "\t}\n"));
      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) ((MR_String) "\t\t MR_finalize_thread_engine();\n"));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) "\tif (must_finalize_engine) {\n"));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (RetrieveOutputArgs_22));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (MaybeFail_17));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) ((MR_String) "\tMR_current_callback_site = saved_cur_callback;\n"));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) ((MR_String) "\tMR_current_call_site_dynamic = saved_cur_csd;\n"));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) ((MR_String) "\tMR_restore_transient_registers();\n"));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) ((MR_String) "), MR_FALSE);\n"));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (ProcLabelString_24));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) ((MR_String) "\t(void) MR_call_engine(MR_ENTRY("));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) ((MR_String) "\tMR_save_transient_registers();\n"));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_113));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (PassInputArgs_21));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) ((MR_String) "\tMR_restore_registers();\n"));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) ((MR_String) "));\n"));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (ProcLabelString_24));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) ((MR_String) "\tMR_setup_callback(MR_ENTRY("));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_csd = MR_current_call_site_dynamic;\n"));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_callback = MR_current_callback_site;\n"));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) ((MR_String) "\tmust_finalize_engine = MR_init_thread(MR_use_now);\n"));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) ((MR_String) "\tMR_save_regs_to_mem(c_regs);\n"));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MaybeDeclareRetval_16));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynamic *saved_cur_csd;\n"));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynList **saved_cur_callback;\n"));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) ((MR_String) "\tMR_bool must_finalize_engine;\n"));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "\tMR_Word c_regs[MR_NUM_REAL_REGS];\n"));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) ((MR_String) "#if MR_NUM_REAL_REGS > 0\n"));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) ")\n{\n"));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ArgDecls_20));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CFunction_12));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CRetType_15));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) ");\n"));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ArgDecls_20));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (CFunction_12));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (CRetType_15));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) ");\n"));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ProcLabelString_24));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (DeclareString_14));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    mercury__string__append_list_2_p_0(Var_34, &Code_25);
    *ExportDefn_8 = (MR_Word) Code_25;
  }
}

static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer LastArgNum_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_String) "";
    else
    {
      MR_Word AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), AT_9, (MR_Integer) 0)));
      MR_Word Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), AT_9, (MR_Integer) 1)));
      MR_Word ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_12, (MR_Integer) 0)));
      MR_Word Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_12, (MR_Integer) 1)));
      MR_Integer CurArgNum_16 = (LastArgNum_2 + (MR_Integer) 1);
      MR_String RetrieveHeadOutputArg_17;
      MR_String RetrieveTailOutputArgs_25;

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
            MR_Word ExportType_21;
            MR_Word ExportTypeIsForeign_22;
            MR_String Var_28;
            MR_Word RegType_46;
            MR_Integer RegNum_47;

            Var_28 = mercury__string__int_to_string_1_f_0(CurArgNum_16);
            ArgName_18 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", Var_28);
            RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgLoc_14, (MR_Integer) 0)));
            RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgLoc_14, (MR_Integer) 1)));
            switch (RegType_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String Var_49;
                  MR_String Var_50;

                  Var_50 = mercury__string__int_to_string_1_f_0(RegNum_47);
                  Var_49 = mercury__string__f_43_43_2_f_0(Var_50, (MR_String) ")");
                  ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", Var_49);
                }
                break;
              case (MR_Integer) 0:
                {
                  succeeded = (RegNum_47 > (MR_Integer) 32);
                  if (succeeded)
                  {
                    MR_String Var_54;
                    MR_String Var_55;

                    Var_55 = mercury__string__int_to_string_1_f_0(RegNum_47);
                    Var_54 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) ")");
                    ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", Var_54);
                  }
                  else
                  {
                    MR_String Var_58;

                    Var_58 = mercury__string__int_to_string_1_f_0(RegNum_47);
                    ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", Var_58);
                  }
                }
                break;
            }
            backend_libs__export__convert_type_from_mercury_4_p_0(ArgLoc_14, ArgLocString0_19, Type_13, &ArgLocString_20);
            ExportType_21 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_1, Type_13);
            ExportTypeIsForeign_22 = backend_libs__foreign__is_foreign_type_1_f_0(ExportType_21);
            if ((ExportTypeIsForeign_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String Var_30;
              MR_String Var_31;
              MR_String Var_33;

              Var_33 = mercury__string__f_43_43_2_f_0(ArgLocString_20, (MR_String) ";\n");
              Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_33);
              Var_30 = mercury__string__f_43_43_2_f_0(ArgName_18, Var_31);
              RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t*", Var_30);
            }
            else
            {
              MR_String CType_24;
              MR_String Var_37;
              MR_String Var_38;
              MR_String Var_40;
              MR_String Var_41;
              MR_String Var_43;

              CType_24 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ExportType_21);
              Var_43 = mercury__string__f_43_43_2_f_0(ArgName_18, (MR_String) ");\n");
              Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ", * ", Var_43);
              Var_40 = mercury__string__f_43_43_2_f_0(ArgLocString_20, Var_41);
              Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_40);
              Var_37 = mercury__string__f_43_43_2_f_0(CType_24, Var_38);
              RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", Var_37);
            }
          }
          break;
        case (MR_Integer) 2:
          RetrieveHeadOutputArg_17 = (MR_String) "";
          break;
      }
      backend_libs__export__retrieve_output_args_4_p_0(ModuleInfo_1, CurArgNum_16, ATs_10, &RetrieveTailOutputArgs_25);
      *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(RetrieveHeadOutputArg_17, RetrieveTailOutputArgs_25);
    }
  }
}

static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer LastArgNum_2,
  MR_Word HeadVar__3_3,
  MR_String * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_String) "";
    else
    {
      MR_Word AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), AT_9, (MR_Integer) 0)));
      MR_Word Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), AT_9, (MR_Integer) 1)));
      MR_Word ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_12, (MR_Integer) 0)));
      MR_Word Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_12, (MR_Integer) 1)));
      MR_Integer CurArgNum_16 = (LastArgNum_2 + (MR_Integer) 1);
      MR_String PassHeadInputArg_24;
      MR_String PassTailInputArgs_25;

      switch (Mode_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgName0_17;
            MR_String ArgLocString_18;
            MR_String ArgName_19;
            MR_Word ExportType_20;
            MR_Word ExportTypeIsForeign_21;
            MR_String Var_28;
            MR_Word RegType_46;
            MR_Integer RegNum_47;

            Var_28 = mercury__string__int_to_string_1_f_0(CurArgNum_16);
            ArgName0_17 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", Var_28);
            RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgLoc_14, (MR_Integer) 0)));
            RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgLoc_14, (MR_Integer) 1)));
            switch (RegType_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String Var_49;
                  MR_String Var_50;

                  Var_50 = mercury__string__int_to_string_1_f_0(RegNum_47);
                  Var_49 = mercury__string__f_43_43_2_f_0(Var_50, (MR_String) ")");
                  ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", Var_49);
                }
                break;
              case (MR_Integer) 0:
                {
                  succeeded = (RegNum_47 > (MR_Integer) 32);
                  if (succeeded)
                  {
                    MR_String Var_54;
                    MR_String Var_55;

                    Var_55 = mercury__string__int_to_string_1_f_0(RegNum_47);
                    Var_54 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) ")");
                    ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", Var_54);
                  }
                  else
                  {
                    MR_String Var_58;

                    Var_58 = mercury__string__int_to_string_1_f_0(RegNum_47);
                    ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", Var_58);
                  }
                }
                break;
            }
            backend_libs__export__convert_type_to_mercury_4_p_0(ArgName0_17, Type_13, ArgLoc_14, &ArgName_19);
            ExportType_20 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_1, Type_13);
            ExportTypeIsForeign_21 = backend_libs__foreign__is_foreign_type_1_f_0(ExportType_20);
            if ((ExportTypeIsForeign_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String Var_30;
              MR_String Var_31;
              MR_String Var_33;

              Var_33 = mercury__string__f_43_43_2_f_0(ArgName_19, (MR_String) ";\n");
              Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_33);
              Var_30 = mercury__string__f_43_43_2_f_0(ArgLocString_18, Var_31);
              PassHeadInputArg_24 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_30);
            }
            else
            {
              MR_String CType_23;
              MR_String Var_37;
              MR_String Var_38;
              MR_String Var_40;
              MR_String Var_41;
              MR_String Var_43;

              CType_23 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ExportType_20);
              Var_43 = mercury__string__f_43_43_2_f_0(ArgLocString_18, (MR_String) ");\n");
              Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_43);
              Var_40 = mercury__string__f_43_43_2_f_0(ArgName_19, Var_41);
              Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_40);
              Var_37 = mercury__string__f_43_43_2_f_0(CType_23, Var_38);
              PassHeadInputArg_24 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", Var_37);
            }
          }
          break;
        case (MR_Integer) 1:
          PassHeadInputArg_24 = (MR_String) "";
          break;
        case (MR_Integer) 2:
          PassHeadInputArg_24 = (MR_String) "";
          break;
      }
      backend_libs__export__pass_input_args_4_p_0(ModuleInfo_1, CurArgNum_16, ATs_10, &PassTailInputArgs_25);
      *HeadVar__4_4 = mercury__string__f_43_43_2_f_0(PassHeadInputArg_24, PassTailInputArgs_25);
    }
  }
}

void MR_CALL 
backend_libs__export__convert_type_to_mercury_4_p_0(
  MR_String Rval_5,
  MR_Word Type_6,
  MR_Word TargetArgLoc_7,
  MR_String * ConvertedRval_8)
{
  switch (MR_tag((MR_Word) Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *ConvertedRval_8 = Rval_5;
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_6, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) BuiltinType_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), TargetArgLoc_7, (MR_Integer) 0)));
                  MR_Integer Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TargetArgLoc_7, (MR_Integer) 1)));

                  switch (Var_44) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *ConvertedRval_8 = Rval_5;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_40;

                        Var_40 = mercury__string__f_43_43_2_f_0(Rval_5, (MR_String) ")");
                        *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", Var_40);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", Rval_5);
                }
                break;
              case (MR_Integer) 2:
                {
                  *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_UnsignedChar) ", Rval_5);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), BuiltinType_9, (MR_Integer) 0)));

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
                  *ConvertedRval_8 = Rval_5;
                  break;
                case (MR_Integer) 8:
                  {
                    MR_String Var_34;

                    Var_34 = mercury__string__f_43_43_2_f_0(Rval_5, (MR_String) ")");
                    *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_int64_to_word(", Var_34);
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_String Var_31;

                    Var_31 = mercury__string__f_43_43_2_f_0(Rval_5, (MR_String) ")");
                    *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_uint64_to_word(", Var_31);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      *ConvertedRval_8 = Rval_5;
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
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_String) "void";
  else
  {
    backend_libs__export__get_argument_declarations_nonvoid_5_p_0(ModuleInfo_1, NameThem_2, (MR_Integer) 0, HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
backend_libs__export__get_foreign_export_decls_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * ForeignExportDecls_4)
{
  {
    MR_Word PredicateTable_5;
    MR_Word Preds_6;
    MR_Word ForeignDeclCodeCord_7;
    MR_Word ForeignDeclCodes_8;
    MR_Word ExportedProcsCord_9;
    MR_Word ExportDecls_10;
    MR_Word Var_11;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_3, &PredicateTable_5);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_5, &Preds_6);
    hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(ModuleInfo_3, &ForeignDeclCodeCord_7);
    ForeignDeclCodes_8 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ForeignDeclCodeCord_7);
    hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ModuleInfo_3, &ExportedProcsCord_9);
    Var_11 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, ExportedProcsCord_9);
    backend_libs__export__get_foreign_export_decls_loop_4_p_0(ModuleInfo_3, Preds_6, Var_11, &ExportDecls_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ForeignExportDecls_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ForeignDeclCodes_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExportDecls_10));
    }
  }
}

static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Preds_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word HeadExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word TailExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word HeadExportDecl_11;
    MR_Word TailExportDecls_12;
    MR_Word Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadExportedProc_9, (MR_Integer) 0)));
    MR_Word PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadExportedProc_9, (MR_Integer) 1)));
    MR_Integer ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadExportedProc_9, (MR_Integer) 2)));
    MR_String ExportName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadExportedProc_9, (MR_Integer) 3)));
    MR_String RetType_19;
    MR_String ArgDecls_24;
    MR_Word _Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadExportedProc_9, (MR_Integer) 4)));

    switch (Lang_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HeadArgInfoTypes_23;
          MR_String _HowToDeclare_18;
          MR_String _DeclareReturnVal_20;
          MR_String _FailureAction_21;
          MR_String _SuccessAction_22;

          backend_libs__export__get_export_info_for_lang_c_10_p_0(ModuleInfo_1, Preds_2, PredId_14, ProcId_15, &_HowToDeclare_18, &RetType_19, &_DeclareReturnVal_20, &_FailureAction_21, &_SuccessAction_22, &HeadArgInfoTypes_23);
          if ((HeadArgInfoTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ArgDecls_24 = (MR_String) "void";
          else
          {
            backend_libs__export__get_argument_declarations_nonvoid_5_p_0(ModuleInfo_1, (MR_Integer) 0, (MR_Integer) 0, HeadArgInfoTypes_23, &ArgDecls_24);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140backend_libs.export.get_foreign_export_decls_loop\'/4", (MR_String) ":- pragma foreign_export for non-C backends.");
            return;
          }
        }
        break;
    }
    {
      HeadExportDecl_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadExportDecl_11, 0) = ((MR_Box) (Lang_13));
      MR_hl_field(MR_mktag(0), HeadExportDecl_11, 1) = ((MR_Box) (RetType_19));
      MR_hl_field(MR_mktag(0), HeadExportDecl_11, 2) = ((MR_Box) (ExportName_16));
      MR_hl_field(MR_mktag(0), HeadExportDecl_11, 3) = ((MR_Box) (ArgDecls_24));
    }
    backend_libs__export__get_foreign_export_decls_loop_4_p_0(ModuleInfo_1, Preds_2, TailExportedProcs_10, &TailExportDecls_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadExportDecl_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailExportDecls_12));
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
  if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__5_5 = (MR_String) "";
  else
  {
    MR_Word AT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
    MR_Word ATs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word ArgInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), AT_12, (MR_Integer) 0)));
    MR_Word Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), AT_12, (MR_Integer) 1)));
    MR_Integer CurArgNum_17 = (LastArgNum_3 + (MR_Integer) 1);
    MR_String TypeString_18;
    MR_String ArgName_19;
    MR_String HeadArgsDecl_20;
    MR_Word Mode_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_15, (MR_Integer) 1)));
    MR_String TypeString0_37;
    MR_Word _Loc_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_15, (MR_Integer) 0)));

    switch (NameThem_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ArgName_19 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgNumString_36;

          mercury__string__int_to_string_2_p_0(CurArgNum_17, &ArgNumString_36);
          mercury__string__append_3_p_2((MR_String) " Mercury__argument", ArgNumString_36, &ArgName_19);
        }
        break;
    }
    TypeString0_37 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ModuleInfo_1, (MR_Integer) 0, Type_16);
    switch (Mode_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        TypeString_18 = TypeString0_37;
        break;
      case (MR_Integer) 1:
        {
          TypeString_18 = mercury__string__f_43_43_2_f_0(TypeString0_37, (MR_String) " *");
        }
        break;
    }
    HeadArgsDecl_20 = mercury__string__f_43_43_2_f_0(TypeString_18, ArgName_19);
    if ((ATs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__export__include_arg_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Preds_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_String * HowToDeclareLabel_15,
  MR_String * CRetType_16,
  MR_String * MaybeDeclareRetval_17,
  MR_String * MaybeFail_18,
  MR_String * MaybeSucceed_19,
  MR_Word * ArgInfoTypes_20)
{
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
    MR_Word ArgInfoTypes2_44;
    MR_Word Var_73;
    MR_Box conv0_PredInfo_21;
    MR_Box conv1_ProcInfo_25;

    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, Preds_12, ((MR_Box) (PredId_13)), &conv0_PredInfo_21);
    PredInfo_21 = ((MR_Word) conv0_PredInfo_21);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_21, &Status_22);
    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_11, PredInfo_21, ProcId_14);
    if (!(succeeded))
    {
      MR_Word Var_45;

      Var_45 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_22);
      succeeded = (Var_45 == (MR_Integer) 0);
    }
    if (succeeded)
      *HowToDeclareLabel_15 = (MR_String) "MR_declare_entry";
    else
      *HowToDeclareLabel_15 = (MR_String) "MR_declare_static";
    PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_21);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &ProcTable_24);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_24, ((MR_Box) (ProcId_14)), &conv1_ProcInfo_25);
    ProcInfo_25 = ((MR_Word) conv1_ProcInfo_25);
    hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(ProcInfo_25, &MaybeArgInfos_26);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_21, &Markers_27);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_21, &ArgTypes_28);
    if ((MaybeArgInfos_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word NewProcInfo_31;

      hlds__arg_info__generate_proc_arg_info_5_p_0(Markers_27, ArgTypes_28, ModuleInfo_11, ProcInfo_25, &NewProcInfo_31);
      hlds__hlds_pred__proc_info_arg_info_2_p_0(NewProcInfo_31, &ArgInfos_30);
    }
    else
      ArgInfos_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgInfos_26, (MR_Integer) 0)));
    CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_25);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgInfos_30, ArgTypes_28, &ArgInfoTypes0_33);
    switch (CodeModel_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgInfoTypes1_34;
          MR_Word RetArgLoc_35;
          MR_Word RetType_37;
          MR_Word TypeInfo_80_80;
          MR_Word RetArgMode_36;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Box conv2_Var_57;

          succeeded = (PredOrFunc_23 == (MR_Integer) 1);
          if (succeeded)
          {
            TypeInfo_80_80 = (MR_Word) &backend_libs__export_scalar_common_1[0];
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeInfo_80_80, ArgInfoTypes0_33, &ArgInfoTypes1_34, &conv2_Var_57);
            Var_57 = ((MR_Word) conv2_Var_57);
            Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0)));
            RetType_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1)));
            RetArgLoc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0)));
            RetArgMode_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1)));
            succeeded = (RetArgMode_36 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_59 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_11, RetType_37);
              succeeded = (Var_59 == (MR_Integer) 1);
            }
          }
          if (succeeded)
          {
            MR_Word ExportRetType_38;
            MR_String RetArgString0_39;
            MR_String RetArgString_40;
            MR_Word ExportRetTypeIsForeign_41;
            MR_String Var_62;
            MR_Word RegType_84;
            MR_Integer RegNum_85;

            ExportRetType_38 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_11, RetType_37);
            *CRetType_16 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ExportRetType_38);
            RegType_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), RetArgLoc_35, (MR_Integer) 0)));
            RegNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RetArgLoc_35, (MR_Integer) 1)));
            switch (RegType_84) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String Var_87;
                  MR_String Var_88;

                  Var_88 = mercury__string__int_to_string_1_f_0(RegNum_85);
                  Var_87 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) ")");
                  RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", Var_87);
                }
                break;
              case (MR_Integer) 0:
                {
                  succeeded = (RegNum_85 > (MR_Integer) 32);
                  if (succeeded)
                  {
                    MR_String Var_92;
                    MR_String Var_93;

                    Var_93 = mercury__string__int_to_string_1_f_0(RegNum_85);
                    Var_92 = mercury__string__f_43_43_2_f_0(Var_93, (MR_String) ")");
                    RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", Var_92);
                  }
                  else
                  {
                    MR_String Var_96;

                    Var_96 = mercury__string__int_to_string_1_f_0(RegNum_85);
                    RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", Var_96);
                  }
                }
                break;
            }
            backend_libs__export__convert_type_from_mercury_4_p_0(RetArgLoc_35, RetArgString0_39, RetType_37, &RetArgString_40);
            Var_62 = mercury__string__f_43_43_2_f_0(*CRetType_16, (MR_String) " return_value;\n");
            *MaybeDeclareRetval_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_62);
            ExportRetTypeIsForeign_41 = backend_libs__foreign__is_foreign_type_1_f_0(ExportRetType_38);
            if ((ExportRetTypeIsForeign_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String Var_65;

              Var_65 = mercury__string__f_43_43_2_f_0(RetArgString_40, (MR_String) ";\n");
              *MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\treturn_value = ", Var_65);
            }
            else
            {
              MR_String Var_68;
              MR_String Var_69;
              MR_String Var_71;

              Var_71 = mercury__string__f_43_43_2_f_0(RetArgString_40, (MR_String) ", return_value);\n");
              Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_71);
              Var_68 = mercury__string__f_43_43_2_f_0(*CRetType_16, Var_69);
              *MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", Var_68);
            }
            *MaybeSucceed_19 = (MR_String) "\treturn return_value;\n";
            ArgInfoTypes2_44 = ArgInfoTypes1_34;
          }
          else
          {
            *CRetType_16 = (MR_String) "void";
            *MaybeDeclareRetval_17 = (MR_String) "";
            *MaybeFail_18 = (MR_String) "";
            *MaybeSucceed_19 = (MR_String) "";
            ArgInfoTypes2_44 = ArgInfoTypes0_33;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.export.get_export_info_for_lang_c\'/10", (MR_String) "Attempt to export model_non procedure.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *CRetType_16 = (MR_String) "MR_bool";
          *MaybeDeclareRetval_17 = (MR_String) "";
          mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[24]), MaybeFail_18);
          *MaybeSucceed_19 = (MR_String) "\treturn MR_TRUE;\n";
          ArgInfoTypes2_44 = ArgInfoTypes0_33;
        }
        break;
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (backend_libs__export__get_export_info_for_lang_c_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ModuleInfo_11));
    }
    mercury__list__filter_3_p_0((MR_Word) &backend_libs__export_scalar_common_1[0], Var_73, ArgInfoTypes2_44, ArgInfoTypes_20);
  }
}

void MR_CALL 
backend_libs__export__convert_type_from_mercury_4_p_0(
  MR_Word SourceArgLoc_5,
  MR_String Rval_6,
  MR_Word Type_7,
  MR_String * ConvertedRval_8)
{
  switch (MR_tag((MR_Word) Type_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *ConvertedRval_8 = Rval_6;
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_7, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) BuiltinType_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), SourceArgLoc_5, (MR_Integer) 0)));
                  MR_Integer Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SourceArgLoc_5, (MR_Integer) 1)));

                  switch (Var_43) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *ConvertedRval_8 = Rval_6;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_39;

                        Var_39 = mercury__string__f_43_43_2_f_0(Rval_6, (MR_String) ")");
                        *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", Var_39);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", Rval_6);
                }
                break;
              case (MR_Integer) 2:
                *ConvertedRval_8 = Rval_6;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), BuiltinType_9, (MR_Integer) 0)));

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
                  *ConvertedRval_8 = Rval_6;
                  break;
                case (MR_Integer) 8:
                  {
                    MR_String Var_34;

                    Var_34 = mercury__string__f_43_43_2_f_0(Rval_6, (MR_String) ")");
                    *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_int64(", Var_34);
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_String Var_31;

                    Var_31 = mercury__string__f_43_43_2_f_0(Rval_6, (MR_String) ")");
                    *ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_uint64(", Var_31);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      *ConvertedRval_8 = Rval_6;
      break;
  }
}

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__export____Unify____exported_enum_name_and_tag_rep_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__export____Compare____exported_enum_name_and_tag_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
