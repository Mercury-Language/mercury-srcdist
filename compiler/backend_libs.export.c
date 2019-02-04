/*
** Automatically generated from `export.m'
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


/* :- module backend_libs.export. */
/* :- implementation. */

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

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1];

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0;

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1];

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1;

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1];

static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0[2];

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2];

static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2];

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__994__1_2_p_0(
  MR_Integer backend_libs__export__Arity_16,
  MR_Integer backend_libs__export__HeadVar__2_76);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__901__1_2_p_0(
  MR_Word backend_libs__export__Lang_12,
  MR_Word backend_libs__export__HeadVar__2_28);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__840__1_2_p_0(
  MR_Word backend_libs__export__Lang_16,
  MR_Word backend_libs__export__HeadVar__2_27);

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__289__1_2_p_0(
  MR_Word backend_libs__export__Lang_9,
  MR_Word backend_libs__export__HeadVar__2_30);

static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
  MR_Word * backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2,
  MR_Word backend_libs__export__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0_1(
  MR_Box backend_libs__export__closure_arg);

static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
  MR_Word backend_libs__export__TypeCtor_7,
  MR_Word backend_libs__export__Mapping_8,
  MR_Word backend_libs__export__TagValues_9,
  MR_Word backend_libs__export__Ctor_10,
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTagsCord_0_64,
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTagsCord_65);

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_2(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box * backend_libs__export__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_1(
  MR_Box backend_libs__export__closure_arg);

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0(
  MR_Word backend_libs__export__Stream_7,
  MR_Word backend_libs__export__MaybeSetLineNumbers_8,
  MR_Word backend_libs__export__MaybeThisFileName_9,
  MR_Word backend_libs__export__ExportedEnumInfo_10);

static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tags_4_p_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2);

static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
  MR_Word backend_libs__export__ExportedEnumInfo_2);

static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_8_p_0_1(
  MR_Box backend_libs__export__closure_arg);

static void MR_CALL 
backend_libs__export__output_foreign_decl_8_p_0(
  MR_Word backend_libs__export__Stream_9,
  MR_Word backend_libs__export__MaybeSetLineNumbers_10,
  MR_Word backend_libs__export__MaybeThisFileName_11,
  MR_String backend_libs__export__SourceFileName_12,
  MR_Word backend_libs__export__MaybeDesiredIsLocal_13,
  MR_Word backend_libs__export__DeclCode_14);

static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
  MR_Word backend_libs__export__ModuleInfo_3,
  MR_Word backend_libs__export__HeadVar__2_2);

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box * backend_libs__export__wrapper_arg_3);

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box * backend_libs__export__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1);

static void MR_CALL 
backend_libs__export__write_export_decls_4_p_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2);

static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_Word * backend_libs__export__HeadVar__4_4);

static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
  MR_Box backend_libs__export__closure_arg);

static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_5,
  MR_Word backend_libs__export__Preds_6,
  MR_Word backend_libs__export__ExportedProc_7,
  MR_Word * backend_libs__export__ExportDefn_8);

static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Integer backend_libs__export__LastArgNum_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_String * backend_libs__export__HeadVar__4_4);

static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Integer backend_libs__export__LastArgNum_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_String * backend_libs__export__HeadVar__4_4);

static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Word backend_libs__export__NameThem_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_String * backend_libs__export__HeadVar__4_4);

static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Word backend_libs__export__Preds_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_Word * backend_libs__export__HeadVar__4_4);

static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Word backend_libs__export__NameThem_2,
  MR_Integer backend_libs__export__LastArgNum_3,
  MR_Word backend_libs__export__HeadVar__4_4,
  MR_String * backend_libs__export__HeadVar__5_5);

static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1);

static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
  MR_Word backend_libs__export__ModuleInfo_11,
  MR_Word backend_libs__export__Preds_12,
  MR_Word backend_libs__export__PredId_13,
  MR_Integer backend_libs__export__ProcId_14,
  MR_String * backend_libs__export__HowToDeclareLabel_15,
  MR_String * backend_libs__export__CRetType_16,
  MR_String * backend_libs__export__MaybeDeclareRetval_17,
  MR_String * backend_libs__export__MaybeFail_18,
  MR_String * backend_libs__export__MaybeSucceed_19,
  MR_Word * backend_libs__export__ArgInfoTypes_20);

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2);

static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
  MR_Box * backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box backend_libs__export__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__export_scalar_common_1[3][3];

static /* final */ const MR_Box backend_libs__export_scalar_common_2[27][2];

static /* final */ const MR_Box backend_libs__export_scalar_common_3[4][5];

static /* final */ const MR_Box backend_libs__export_scalar_common_4[2][4];

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][9];

static /* final */ const MR_Box backend_libs__export_scalar_common_6[2][1];

static /* final */ const MR_Box backend_libs__export_scalar_common_7[1][11];


/* sealed */ struct backend_libs__export__vector_common_type_8_0_s {
  const MR_String backend_libs__export__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct backend_libs__export__vector_common_type_8_0_s backend_libs__export_vector_common_8[5];



static /* final */ const MR_Box backend_libs__export_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0))
  },
  /* row 2 */
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
    ((MR_Box) (&backend_libs__export_scalar_common_1[1]))
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

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][9] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&backend_libs__export__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0)),
    ((MR_Box) (&backend_libs__export__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0))
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

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__cord__pti_cord_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0 = {
  (MR_String) "ee_tag_rep_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1 = {
  (MR_String) "ee_tag_rep_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0
};

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0,
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001)),
  ((MR_Box) (backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001)),
  (MR_String) "backend_libs.export",
  (MR_String) "exported_enum_tag_rep",
  {     backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0 },
  {     backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0
};

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__994__1_2_p_0(
  MR_Integer backend_libs__export__Arity_16,
  MR_Integer backend_libs__export__HeadVar__2_76)
{
  {
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Arity_16 == backend_libs__export__HeadVar__2_76);

    return backend_libs__export__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__901__1_2_p_0(
  MR_Word backend_libs__export__Lang_12,
  MR_Word backend_libs__export__HeadVar__2_28)
{
  {
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_12 == backend_libs__export__HeadVar__2_28);

    return backend_libs__export__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__840__1_2_p_0(
  MR_Word backend_libs__export__Lang_16,
  MR_Word backend_libs__export__HeadVar__2_27)
{
  {
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_16 == backend_libs__export__HeadVar__2_27);

    return backend_libs__export__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__289__1_2_p_0(
  MR_Word backend_libs__export__Lang_9,
  MR_Word backend_libs__export__HeadVar__2_30)
{
  {
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_9 == backend_libs__export__HeadVar__2_30);

    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
  MR_Word * backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2,
  MR_Word backend_libs__export__HeadVar__3_3)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Integer backend_libs__export__CastX_12 = (MR_Integer) backend_libs__export__HeadVar__2_2;
    MR_Integer backend_libs__export__CastY_13 = (MR_Integer) backend_libs__export__HeadVar__3_3;

    backend_libs__export__succeeded = (backend_libs__export__CastX_12 == backend_libs__export__CastY_13);
    if (backend_libs__export__succeeded)
      *backend_libs__export__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer backend_libs__export__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer backend_libs__export__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__Var_16, backend_libs__export__ArgY1_5);
            }
          }
        else
          *backend_libs__export__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_String backend_libs__export__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *backend_libs__export__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String backend_libs__export__ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__Var_17, backend_libs__export__ArgY1_11);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Integer backend_libs__export__CastX_7 = (MR_Integer) backend_libs__export__HeadVar__1_1;
    MR_Integer backend_libs__export__CastY_8 = (MR_Integer) backend_libs__export__HeadVar__2_2;

    backend_libs__export__succeeded = (backend_libs__export__CastX_7 == backend_libs__export__CastY_8);
    if (backend_libs__export__succeeded)
      backend_libs__export__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) backend_libs__export__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer backend_libs__export__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer backend_libs__export__ArgY1_4;

        backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__export__succeeded)
          {
            backend_libs__export__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__export__succeeded = (backend_libs__export__ArgX1_3 == backend_libs__export__ArgY1_4);
          }
      }
    else
      {
        MR_String backend_libs__export__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
        MR_String backend_libs__export__ArgY1_6;

        backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__export__succeeded)
          {
            backend_libs__export__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__export__succeeded = (strcmp(backend_libs__export__ArgX1_5, backend_libs__export__ArgY1_6) == 0);
          }
      }
    return backend_libs__export__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0_1(
  MR_Box backend_libs__export__closure_arg)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__994__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
  MR_Word backend_libs__export__TypeCtor_7,
  MR_Word backend_libs__export__Mapping_8,
  MR_Word backend_libs__export__TagValues_9,
  MR_Word backend_libs__export__Ctor_10,
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTagsCord_0_64,
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTagsCord_65)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__QualifiedCtorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 2)));
    MR_Integer backend_libs__export__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 4)));
    MR_Word backend_libs__export__ConsId_18;
    MR_Word backend_libs__export__TagVal_19;
    MR_Word backend_libs__export__Tag_22;
    MR_Word backend_libs__export__UnqualifiedCtorName_62;
    MR_String backend_libs__export__ForeignName_63;
    MR_Word backend_libs__export__Var_72;
    MR_String backend_libs__export__Var_77;
    MR_Word backend_libs__export__Var_79;
    MR_Word backend_libs__export__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 0)));
    MR_Word backend_libs__export__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 1)));
    MR_Word backend_libs__export___Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 3)));
    MR_Word backend_libs__export__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 5)));
    MR_Box backend_libs__export__conv0_TagVal_19;
    MR_Box backend_libs__export__conv1_ForeignName_63;

    {
      backend_libs__export__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 1) = ((MR_Box) (backend_libs__export__QualifiedCtorName_14));
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 2) = ((MR_Box) (backend_libs__export__Arity_16));
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 3) = ((MR_Box) (backend_libs__export__TypeCtor_7));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__export__TagValues_9, ((MR_Box) (backend_libs__export__ConsId_18)), &backend_libs__export__conv0_TagVal_19);
    }
    backend_libs__export__TagVal_19 = ((MR_Word) backend_libs__export__conv0_TagVal_19);
    switch (MR_tag((MR_Word) backend_libs__export__TagVal_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word backend_libs__export__IntTagType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) backend_libs__export__IntTagType_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer backend_libs__export__IntTag_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__IntTagType_20, (MR_Integer) 0)));

                    {
                      backend_libs__export__Tag_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), backend_libs__export__Tag_22, 0) = ((MR_Box) (backend_libs__export__IntTag_21));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String backend_libs__export__ForeignTag_31 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 2)));
              MR_Word backend_libs__export___ForeignLang_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 1)));

              {
                backend_libs__export__Tag_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__export__Tag_22, 0) = ((MR_Box) (backend_libs__export__ForeignTag_31));
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
          case (MR_Integer) 15:
          case (MR_Integer) 16:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      backend_libs__export__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_72, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_72, 1) = ((MR_Box) (backend_libs__export__foreign_const_name_and_tag_6_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_72, 3) = ((MR_Box) (backend_libs__export__Arity_16));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(backend_libs__export__Var_72, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant arity != 0");
    }
    {
      backend_libs__export__Var_77 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__export__QualifiedCtorName_14);
    }
    {
      backend_libs__export__UnqualifiedCtorName_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__UnqualifiedCtorName_62, 0) = ((MR_Box) (backend_libs__export__Var_77));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__export__Mapping_8, ((MR_Box) (backend_libs__export__UnqualifiedCtorName_62)), &backend_libs__export__conv1_ForeignName_63);
    }
    backend_libs__export__ForeignName_63 = ((MR_String) backend_libs__export__conv1_ForeignName_63);
    {
      backend_libs__export__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_79, 0) = ((MR_Box) (backend_libs__export__ForeignName_63));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_79, 1) = ((MR_Box) (backend_libs__export__Tag_22));
    }
    {
      *backend_libs__export__STATE_VARIABLE_NamesAndTagsCord_65 = mercury__cord__snoc_2_f_0((MR_Word) &backend_libs__export_scalar_common_1[1], backend_libs__export__STATE_VARIABLE_NamesAndTagsCord_0_64, ((MR_Box) (backend_libs__export__Var_79)));
    }
  }
}

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_2(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box * backend_libs__export__wrapper_arg_3)
{
  {
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;
    MR_Word backend_libs__export__conv0_STATE_VARIABLE_NamesAndTagsCord_65;

    {
      backend_libs__export__foreign_const_name_and_tag_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2), &backend_libs__export__conv0_STATE_VARIABLE_NamesAndTagsCord_65);
    }
    *backend_libs__export__wrapper_arg_3 = ((MR_Box) (backend_libs__export__conv0_STATE_VARIABLE_NamesAndTagsCord_65));
  }
}

static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0_1(
  MR_Box backend_libs__export__closure_arg)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__901__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export__output_exported_c_enum_6_p_0(
  MR_Word backend_libs__export__Stream_7,
  MR_Word backend_libs__export__MaybeSetLineNumbers_8,
  MR_Word backend_libs__export__MaybeThisFileName_9,
  MR_Word backend_libs__export__ExportedEnumInfo_10)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__TypeInfo_38_38;
    MR_Word backend_libs__export__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_10, (MR_Integer) 0)));
    MR_Word backend_libs__export__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_10, (MR_Integer) 1)));
    MR_Word backend_libs__export__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_10, (MR_Integer) 2)));
    MR_Word backend_libs__export__NameMapping_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_10, (MR_Integer) 3)));
    MR_Word backend_libs__export__Ctors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_10, (MR_Integer) 4)));
    MR_Word backend_libs__export__TagValues_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_10, (MR_Integer) 5)));
    MR_Word backend_libs__export__ForeignNamesAndTagsCord_18;
    MR_Word backend_libs__export__ForeignNamesAndTags_19;
    MR_String backend_libs__export__File_20;
    MR_Integer backend_libs__export__Line_21;
    MR_Word backend_libs__export__Var_24;
    MR_Word backend_libs__export__Var_29;
    MR_Word backend_libs__export__Var_30;
    MR_Box backend_libs__export__conv1_ForeignNamesAndTagsCord_18;

    {
      backend_libs__export__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_24, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_24, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_6_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_24, 3) = ((MR_Box) (backend_libs__export__Lang_12));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(backend_libs__export__Var_24, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/6", (MR_String) "Lang != lang_c");
    }
    {
      backend_libs__export__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_29, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_29, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_6_p_0_2));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_29, 3) = ((MR_Box) (backend_libs__export__TypeCtor_14));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_29, 4) = ((MR_Box) (backend_libs__export__NameMapping_15));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_29, 5) = ((MR_Box) (backend_libs__export__TagValues_17));
    }
    backend_libs__export__TypeInfo_38_38 = (MR_Word) &backend_libs__export_scalar_common_1[1];
    {
      backend_libs__export__Var_30 = mercury__cord__init_0_f_0(backend_libs__export__TypeInfo_38_38);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &backend_libs__export_scalar_common_2[0], backend_libs__export__Var_29, backend_libs__export__Ctors_16, ((MR_Box) (backend_libs__export__Var_30)), &backend_libs__export__conv1_ForeignNamesAndTagsCord_18);
    }
    backend_libs__export__ForeignNamesAndTagsCord_18 = ((MR_Word) backend_libs__export__conv1_ForeignNamesAndTagsCord_18);
    {
      backend_libs__export__ForeignNamesAndTags_19 = mercury__cord__list_1_f_0(backend_libs__export__TypeInfo_38_38, backend_libs__export__ForeignNamesAndTagsCord_18);
    }
    {
      mercury__term__context_file_2_p_0(backend_libs__export__Context_13, &backend_libs__export__File_20);
    }
    {
      mercury__term__context_line_2_p_0(backend_libs__export__Context_13, &backend_libs__export__Line_21);
    }
    {
      backend_libs__c_util__maybe_set_line_num_6_p_0(backend_libs__export__Stream_7, backend_libs__export__MaybeSetLineNumbers_8, backend_libs__export__File_20, backend_libs__export__Line_21);
    }
    {
      backend_libs__export__output_exported_enum_constname_tags_4_p_0(backend_libs__export__Stream_7, backend_libs__export__ForeignNamesAndTags_19);
    }
    {
      backend_libs__c_util__maybe_reset_line_num_5_p_0(backend_libs__export__Stream_7, backend_libs__export__MaybeSetLineNumbers_8, backend_libs__export__MaybeThisFileName_9);
    }
  }
}

static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tags_4_p_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((backend_libs__export__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word backend_libs__export__ConstNameTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word backend_libs__export__ConstNameTags_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
          MR_String backend_libs__export__ConstName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__ConstNameTag_10, (MR_Integer) 0)));
          MR_Word backend_libs__export__Tag_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ConstNameTag_10, (MR_Integer) 1)));

          if (((MR_tag((MR_Word) backend_libs__export__Tag_21)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Integer backend_libs__export__RawIntTag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__Tag_21, (MR_Integer) 0)));
              MR_String backend_libs__export__Var_52;

              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) "#define ");
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__ConstName_20);
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) " ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__export_scalar_common_6[1], backend_libs__export__RawIntTag_23, &backend_libs__export__Var_52);
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__Var_52);
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) "\n");
              }
            }
          else
            {
              MR_String backend_libs__export__RawStrTag_24 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__Tag_21, (MR_Integer) 0)));

              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) "#define ");
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__ConstName_20);
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) " ");
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__RawStrTag_24);
              }
              {
                mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) "\n");
              }
            }
          /* direct tailcall eliminated */
          {
            MR_Word backend_libs__export__next_value_of_HeadVar__2_2 = backend_libs__export__ConstNameTags_11;

            backend_libs__export__HeadVar__2_2 = backend_libs__export__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
  MR_Word backend_libs__export__ExportedEnumInfo_2)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__Lang_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 0)));
    MR_Word backend_libs__export__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 1)));
    MR_Word backend_libs__export__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 2)));
    MR_Word backend_libs__export__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 3)));
    MR_Word backend_libs__export__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 4)));
    MR_Word backend_libs__export__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 5)));

    backend_libs__export__succeeded = (backend_libs__export__Lang_3 == (MR_Integer) 0);
    return backend_libs__export__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_8_p_0_1(
  MR_Box backend_libs__export__closure_arg)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__output_foreign_decl__840__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export__output_foreign_decl_8_p_0(
  MR_Word backend_libs__export__Stream_9,
  MR_Word backend_libs__export__MaybeSetLineNumbers_10,
  MR_Word backend_libs__export__MaybeThisFileName_11,
  MR_String backend_libs__export__SourceFileName_12,
  MR_Word backend_libs__export__MaybeDesiredIsLocal_13,
  MR_Word backend_libs__export__DeclCode_14)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_14, (MR_Integer) 0)));
    MR_Word backend_libs__export__IsLocal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_14, (MR_Integer) 1)));
    MR_Word backend_libs__export__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_14, (MR_Integer) 2)));
    MR_Word backend_libs__export__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_14, (MR_Integer) 3)));
    MR_Word backend_libs__export__Var_23;

    {
      backend_libs__export__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_23, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_23, 1) = ((MR_Box) (backend_libs__export__output_foreign_decl_8_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_23, 3) = ((MR_Box) (backend_libs__export__Lang_16));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(backend_libs__export__Var_23, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_foreign_decl\'/8", (MR_String) "Lang != lang_c");
    }
    if ((backend_libs__export__MaybeDesiredIsLocal_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      backend_libs__export__succeeded = MR_TRUE;
    else
      {
        MR_Word backend_libs__export__DesiredIsLocal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeDesiredIsLocal_13, (MR_Integer) 0)));

        backend_libs__export__succeeded = (backend_libs__export__DesiredIsLocal_20 == backend_libs__export__IsLocal_17);
      }
    if (backend_libs__export__succeeded)
      {
        if (((MR_tag((MR_Word) backend_libs__export__LiteralOrInclude_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String backend_libs__export__IncludeFileName_42 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__LiteralOrInclude_18, (MR_Integer) 0)));
            MR_String backend_libs__export__IncludePath_43;

            {
              parse_tree__file_names__make_include_file_path_3_p_0(backend_libs__export__SourceFileName_12, backend_libs__export__IncludeFileName_42, &backend_libs__export__IncludePath_43);
            }
            {
              backend_libs__c_util__maybe_set_line_num_6_p_0(backend_libs__export__Stream_9, backend_libs__export__MaybeSetLineNumbers_10, backend_libs__export__IncludePath_43, (MR_Integer) 1);
            }
            {
              libs__file_util__write_include_file_contents_4_p_0(backend_libs__export__Stream_9, backend_libs__export__IncludePath_43);
            }
          }
        else
          {
            MR_String backend_libs__export__Code_39 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__LiteralOrInclude_18, (MR_Integer) 0)));
            MR_String backend_libs__export__File_40;
            MR_Integer backend_libs__export__Line_41;

            {
              mercury__term__context_file_2_p_0(backend_libs__export__Context_19, &backend_libs__export__File_40);
            }
            {
              mercury__term__context_line_2_p_0(backend_libs__export__Context_19, &backend_libs__export__Line_41);
            }
            {
              backend_libs__c_util__maybe_set_line_num_6_p_0(backend_libs__export__Stream_9, backend_libs__export__MaybeSetLineNumbers_10, backend_libs__export__File_40, backend_libs__export__Line_41);
            }
            {
              mercury__io__write_string_4_p_0(backend_libs__export__Stream_9, backend_libs__export__Code_39);
            }
          }
        {
          mercury__io__nl_3_p_0(backend_libs__export__Stream_9);
        }
        {
          backend_libs__c_util__maybe_reset_line_num_5_p_0(backend_libs__export__Stream_9, backend_libs__export__MaybeSetLineNumbers_10, backend_libs__export__MaybeThisFileName_11);
        }
      }
    else
      {
      }
  }
}

static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
  MR_Word backend_libs__export__ModuleInfo_3,
  MR_Word backend_libs__export__HeadVar__2_2)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__Mode_5;
    MR_Word backend_libs__export__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word backend_libs__export__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word backend_libs__export__Var_8;
    MR_Word backend_libs__export___Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Var_7, (MR_Integer) 0)));

    backend_libs__export__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Var_7, (MR_Integer) 1)));
    backend_libs__export__succeeded = (backend_libs__export__Mode_5 == (MR_Integer) 2);
    backend_libs__export__succeeded = !(backend_libs__export__succeeded);
    if (backend_libs__export__succeeded)
      {
        {
          backend_libs__export__Var_8 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Type_6);
        }
        backend_libs__export__succeeded = (backend_libs__export__Var_8 == (MR_Integer) 1);
      }
    return backend_libs__export__succeeded;
  }
}

MR_bool MR_CALL 
backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(
  MR_String backend_libs__export__HeadVar__1_1)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Integer backend_libs__export__lo_0;
    MR_Integer backend_libs__export__hi_1;
    MR_Integer backend_libs__export__mid_2;
    MR_Integer backend_libs__export__result_3;

    /* binary string simple lookup switch */
    backend_libs__export__lo_0 = (MR_Integer) 0;
    backend_libs__export__hi_1 = (MR_Integer) 4;
    do
      {
        backend_libs__export__mid_2 = (((backend_libs__export__lo_0 + backend_libs__export__hi_1)) / (MR_Integer) 2);
        backend_libs__export__result_3 = MR_strcmp(backend_libs__export__HeadVar__1_1, ((&backend_libs__export_vector_common_8[0 + backend_libs__export__mid_2]))->backend_libs__export__vector_common_type_8_0__vct_8_f_0);
        if ((backend_libs__export__result_3 == (MR_Integer) 0))
          {
            backend_libs__export__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((backend_libs__export__result_3 < (MR_Integer) 0))
          backend_libs__export__hi_1 = (backend_libs__export__mid_2 - (MR_Integer) 1);
        else
          backend_libs__export__lo_0 = (backend_libs__export__mid_2 + (MR_Integer) 1);
      }
    while ((backend_libs__export__lo_0 <= backend_libs__export__hi_1));
    backend_libs__export__succeeded = MR_FALSE;
  label_0:;
    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box * backend_libs__export__wrapper_arg_3)
{
  {
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__output_foreign_decl_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 7))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box * backend_libs__export__wrapper_arg_3)
{
  {
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__output_exported_c_enum_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__succeeded = parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
    return backend_libs__export__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__succeeded = backend_libs__export__exported_enum_is_for_c_1_p_0(((MR_Word) backend_libs__export__wrapper_arg_1));
    }
    return backend_libs__export__succeeded;
  }
}

void MR_CALL 
backend_libs__export__produce_header_file_5_p_0(
  MR_Word backend_libs__export__ModuleInfo_6,
  MR_Word backend_libs__export__ForeignExportDecls_7,
  MR_Word backend_libs__export__ModuleName_8)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__Globals_10;
    MR_String backend_libs__export__FileName_12;
    MR_Word backend_libs__export__MaybeThisFileName_13;
    MR_Word backend_libs__export__Result_14;
    MR_String backend_libs__export__Var_34;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__Globals_10);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_10, (MR_Integer) 0, (MR_String) ".mh", backend_libs__export__ModuleName_8, &backend_libs__export__FileName_12);
    }
    {
      backend_libs__export__MaybeThisFileName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__MaybeThisFileName_13, 0) = ((MR_Box) (backend_libs__export__FileName_12));
    }
    {
      backend_libs__export__Var_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_12, (MR_String) ".tmp");
    }
    {
      mercury__io__open_output_4_p_0(backend_libs__export__Var_34, &backend_libs__export__Result_14);
    }
    if (((MR_tag((MR_Word) backend_libs__export__Result_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String backend_libs__export__ProgName_29;
        MR_String backend_libs__export__Var_44;

        {
          mercury__io__progname_base_4_p_0((MR_String) "export.m", &backend_libs__export__ProgName_29);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0(backend_libs__export__ProgName_29);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
        }
        {
          backend_libs__export__Var_44 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_12, (MR_String) ".tmp");
        }
        {
          mercury__io__write_string_3_p_0(backend_libs__export__Var_44);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    else
      {
        MR_Word backend_libs__export__TypeCtorInfo_171_171;
        MR_Word backend_libs__export__TypeCtorInfo_173_173;
        MR_Word backend_libs__export__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Result_14, (MR_Integer) 0)));
        MR_String backend_libs__export__SourceFileName_16;
        MR_String backend_libs__export__Version_17;
        MR_String backend_libs__export__Fullarch_18;
        MR_String backend_libs__export__MangledModuleName_19;
        MR_String backend_libs__export__UppercaseModuleName_20;
        MR_String backend_libs__export__GuardMacroName_21;
        MR_Word backend_libs__export__ExportedEnums_22;
        MR_Word backend_libs__export__CExportedEnums_23;
        MR_Word backend_libs__export__ForeignDeclCodes_24;
        MR_Word backend_libs__export__CExportDecls_25;
        MR_Word backend_libs__export__CForeignDeclCodes_26;
        MR_Word backend_libs__export__Var_54;
        MR_Word backend_libs__export__Var_57;
        MR_Word backend_libs__export__Var_59;
        MR_Word backend_libs__export__Var_60;
        MR_Word backend_libs__export__Var_62;
        MR_Word backend_libs__export__Var_64;
        MR_Word backend_libs__export__Var_66;
        MR_Word backend_libs__export__Var_67;
        MR_Word backend_libs__export__Var_69;
        MR_Word backend_libs__export__Var_71;
        MR_Word backend_libs__export__Var_80;
        MR_Word backend_libs__export__Var_83;
        MR_Word backend_libs__export__Var_84;
        MR_Word backend_libs__export__Var_86;
        MR_Word backend_libs__export__Var_88;
        MR_Word backend_libs__export__Var_151;
        MR_Word backend_libs__export__Var_154;
        MR_Word backend_libs__export__Var_156;
        MR_Word backend_libs__export__Var_158;
        MR_Word backend_libs__export__Var_160;
        MR_Word backend_libs__export__Var_162;
        MR_Word backend_libs__export__Var_164;

        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_10, (MR_Integer) 1, (MR_String) ".m", backend_libs__export__ModuleName_8, &backend_libs__export__SourceFileName_16);
        }
        {
          mercury__library__version_2_p_0(&backend_libs__export__Version_17, &backend_libs__export__Fullarch_18);
        }
        {
          backend_libs__export__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_71, 0) = ((MR_Box) (backend_libs__export__Fullarch_18));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[3])));
        }
        {
          backend_libs__export__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_69, 0) = ((MR_Box) ((MR_String) "** configured for "));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_69, 1) = ((MR_Box) (backend_libs__export__Var_71));
        }
        {
          backend_libs__export__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_67, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_67, 1) = ((MR_Box) (backend_libs__export__Var_69));
        }
        {
          backend_libs__export__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_66, 0) = ((MR_Box) (backend_libs__export__Version_17));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_66, 1) = ((MR_Box) (backend_libs__export__Var_67));
        }
        {
          backend_libs__export__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_64, 0) = ((MR_Box) ((MR_String) "** version "));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_64, 1) = ((MR_Box) (backend_libs__export__Var_66));
        }
        {
          backend_libs__export__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_62, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_62, 1) = ((MR_Box) (backend_libs__export__Var_64));
        }
        {
          backend_libs__export__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_60, 0) = ((MR_Box) ((MR_String) "\'\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_60, 1) = ((MR_Box) (backend_libs__export__Var_62));
        }
        {
          backend_libs__export__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_59, 0) = ((MR_Box) (backend_libs__export__SourceFileName_16));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_59, 1) = ((MR_Box) (backend_libs__export__Var_60));
        }
        {
          backend_libs__export__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_57, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_57, 1) = ((MR_Box) (backend_libs__export__Var_59));
        }
        {
          backend_libs__export__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_54, 0) = ((MR_Box) ((MR_String) "/*\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_54, 1) = ((MR_Box) (backend_libs__export__Var_57));
        }
        {
          mercury__io__write_strings_4_p_0(backend_libs__export__FileStream_15, backend_libs__export__Var_54);
        }
        {
          backend_libs__export__MangledModuleName_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__export__ModuleName_8);
        }
        {
          mercury__string__to_upper_2_p_0(backend_libs__export__MangledModuleName_19, &backend_libs__export__UppercaseModuleName_20);
        }
        {
          backend_libs__export__GuardMacroName_21 = mercury__string__f_43_43_2_f_0(backend_libs__export__UppercaseModuleName_20, (MR_String) "_MH");
        }
        {
          backend_libs__export__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_88, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_21));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[20])));
        }
        {
          backend_libs__export__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_86, 0) = ((MR_Box) ((MR_String) "#define "));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_86, 1) = ((MR_Box) (backend_libs__export__Var_88));
        }
        {
          backend_libs__export__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_84, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_84, 1) = ((MR_Box) (backend_libs__export__Var_86));
        }
        {
          backend_libs__export__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_83, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_21));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_83, 1) = ((MR_Box) (backend_libs__export__Var_84));
        }
        {
          backend_libs__export__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_80, 0) = ((MR_Box) ((MR_String) "#ifndef "));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_80, 1) = ((MR_Box) (backend_libs__export__Var_83));
        }
        {
          mercury__io__write_strings_4_p_0(backend_libs__export__FileStream_15, backend_libs__export__Var_80);
        }
        {
          hlds__hlds_module__module_info_get_exported_enums_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__ExportedEnums_22);
        }
        backend_libs__export__TypeCtorInfo_171_171 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0;
        {
          mercury__list__filter_3_p_0(backend_libs__export__TypeCtorInfo_171_171, (MR_Word) &backend_libs__export_scalar_common_1[2], backend_libs__export__ExportedEnums_22, &backend_libs__export__CExportedEnums_23);
        }
        backend_libs__export__ForeignDeclCodes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 0)));
        backend_libs__export__CExportDecls_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 1)));
        backend_libs__export__TypeCtorInfo_173_173 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
        {
          mercury__list__filter_3_p_0(backend_libs__export__TypeCtorInfo_173_173, (MR_Word) &backend_libs__export_scalar_common_4[1], backend_libs__export__ForeignDeclCodes_24, &backend_libs__export__CForeignDeclCodes_26);
        }
        backend_libs__export__succeeded = (backend_libs__export__CExportedEnums_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (backend_libs__export__succeeded)
          backend_libs__export__succeeded = (backend_libs__export__CForeignDeclCodes_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (backend_libs__export__succeeded)
          {
          }
        else
          {
            MR_Word backend_libs__export__TypeCtorInfo_177_177;
            MR_Word backend_libs__export__MaybeSetLineNumbers_27;
            MR_Word backend_libs__export__Var_128;
            MR_Word backend_libs__export__Var_131;
            MR_String backend_libs__export__Var_132;
            MR_Word backend_libs__export__Var_133;
            MR_Word backend_libs__export__Var_135;
            MR_Word backend_libs__export__Var_137;
            MR_String backend_libs__export__Var_138;
            MR_Word backend_libs__export__Var_142;
            MR_Word backend_libs__export__Var_144;
            MR_Box backend_libs__export__conv0_STATE_VARIABLE_IO_143_143;
            MR_Box backend_libs__export__conv1_STATE_VARIABLE_IO_145_145;

            {
              backend_libs__export__MaybeSetLineNumbers_27 = backend_libs__c_util__lookup_line_numbers_2_f_0(backend_libs__export__Globals_10, (MR_Integer) 150);
            }
            {
              backend_libs__export__Var_132 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
            }
            {
              backend_libs__export__Var_138 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
            }
            {
              backend_libs__export__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_137, 0) = ((MR_Box) (backend_libs__export__Var_138));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[4])));
            }
            {
              backend_libs__export__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_135, 0) = ((MR_Box) ((MR_String) "#define "));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_135, 1) = ((MR_Box) (backend_libs__export__Var_137));
            }
            {
              backend_libs__export__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_133, 0) = ((MR_Box) ((MR_String) "\n"));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_133, 1) = ((MR_Box) (backend_libs__export__Var_135));
            }
            {
              backend_libs__export__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_131, 0) = ((MR_Box) (backend_libs__export__Var_132));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_131, 1) = ((MR_Box) (backend_libs__export__Var_133));
            }
            {
              backend_libs__export__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_128, 0) = ((MR_Box) ((MR_String) "#ifndef "));
              MR_hl_field(MR_mktag(1), backend_libs__export__Var_128, 1) = ((MR_Box) (backend_libs__export__Var_131));
            }
            {
              mercury__io__write_strings_4_p_0(backend_libs__export__FileStream_15, backend_libs__export__Var_128);
            }
            {
              backend_libs__export__Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_142, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_142, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_3));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_142, 3) = ((MR_Box) (backend_libs__export__FileStream_15));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_142, 4) = ((MR_Box) (backend_libs__export__MaybeSetLineNumbers_27));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_142, 5) = ((MR_Box) (backend_libs__export__MaybeThisFileName_13));
            }
            backend_libs__export__TypeCtorInfo_177_177 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
            {
              mercury__list__foldl_4_p_2(backend_libs__export__TypeCtorInfo_171_171, backend_libs__export__TypeCtorInfo_177_177, backend_libs__export__Var_142, backend_libs__export__CExportedEnums_23, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv0_STATE_VARIABLE_IO_143_143);
            }
            {
              backend_libs__export__Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_4));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 3) = ((MR_Box) (backend_libs__export__FileStream_15));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 4) = ((MR_Box) (backend_libs__export__MaybeSetLineNumbers_27));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 5) = ((MR_Box) (backend_libs__export__MaybeThisFileName_13));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 6) = ((MR_Box) (backend_libs__export__SourceFileName_16));
              MR_hl_field(MR_mktag(0), backend_libs__export__Var_144, 7) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_6[0])));
            }
            {
              mercury__list__foldl_4_p_2(backend_libs__export__TypeCtorInfo_173_173, backend_libs__export__TypeCtorInfo_177_177, backend_libs__export__Var_144, backend_libs__export__CForeignDeclCodes_26, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv1_STATE_VARIABLE_IO_145_145);
            }
            {
              mercury__io__write_string_4_p_0(backend_libs__export__FileStream_15, (MR_String) "\n#endif\n");
            }
          }
        {
          backend_libs__export__write_export_decls_4_p_0(backend_libs__export__FileStream_15, backend_libs__export__CExportDecls_25);
        }
        {
          backend_libs__export__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_164, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_21));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[26])));
        }
        {
          backend_libs__export__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_162, 0) = ((MR_Box) ((MR_String) "#endif /* "));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_162, 1) = ((MR_Box) (backend_libs__export__Var_164));
        }
        {
          backend_libs__export__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_160, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_160, 1) = ((MR_Box) (backend_libs__export__Var_162));
        }
        {
          backend_libs__export__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_158, 0) = ((MR_Box) ((MR_String) "#endif\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_158, 1) = ((MR_Box) (backend_libs__export__Var_160));
        }
        {
          backend_libs__export__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_156, 0) = ((MR_Box) ((MR_String) "}\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_156, 1) = ((MR_Box) (backend_libs__export__Var_158));
        }
        {
          backend_libs__export__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_154, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_154, 1) = ((MR_Box) (backend_libs__export__Var_156));
        }
        {
          backend_libs__export__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_151, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), backend_libs__export__Var_151, 1) = ((MR_Box) (backend_libs__export__Var_154));
        }
        {
          mercury__io__write_strings_4_p_0(backend_libs__export__FileStream_15, backend_libs__export__Var_151);
        }
        {
          mercury__io__close_output_3_p_0(backend_libs__export__FileStream_15);
        }
        {
          parse_tree__module_cmds__update_interface_4_p_0(backend_libs__export__Globals_10, backend_libs__export__FileName_12);
        }
      }
  }
}

static void MR_CALL 
backend_libs__export__write_export_decls_4_p_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((backend_libs__export__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
        }
      else
        {
          MR_Word backend_libs__export__ExportDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word backend_libs__export__ExportDecls_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word backend_libs__export__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_10, (MR_Integer) 0)));
          MR_String backend_libs__export__CRetType_14 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_10, (MR_Integer) 1)));
          MR_String backend_libs__export__CFunction_15 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_10, (MR_Integer) 2)));
          MR_String backend_libs__export__ArgDecls_16 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_10, (MR_Integer) 3)));

          switch (backend_libs__export__Lang_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__CRetType_14);
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) " ");
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__CFunction_15);
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) "(");
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__ArgDecls_16);
                }
                {
                  mercury__io__write_string_4_p_0(backend_libs__export__HeadVar__1_1, (MR_String) ");\n");
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.write_export_decls\'/4", (MR_String) "foreign languages other than C unimplemented");
                  return;
                }
              }
              break;
          }
          /* direct tailcall eliminated */
          {
            MR_Word backend_libs__export__next_value_of_HeadVar__2_2 = backend_libs__export__ExportDecls_11;

            backend_libs__export__HeadVar__2_2 = backend_libs__export__next_value_of_HeadVar__2_2;
          }
          continue;
        }
      break;
    }
}

void MR_CALL 
backend_libs__export__get_foreign_export_defns_2_p_0(
  MR_Word backend_libs__export__ModuleInfo_3,
  MR_Word * backend_libs__export__ExportedProcsCode_4)
{
  {
    MR_Word backend_libs__export__ExportedProcsCord_5;
    MR_Word backend_libs__export__PredicateTable_6;
    MR_Word backend_libs__export__Preds_7;
    MR_Word backend_libs__export__Var_8;

    {
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ExportedProcsCord_5);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__PredicateTable_6);
    }
    {
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_6, &backend_libs__export__Preds_7);
    }
    {
      backend_libs__export__Var_8 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__export__ExportedProcsCord_5);
    }
    {
      backend_libs__export__export_procs_to_c_4_p_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Preds_7, backend_libs__export__Var_8, backend_libs__export__ExportedProcsCode_4);
    }
  }
}

static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
  MR_Word backend_libs__export__HeadVar__1_1,
  MR_Word backend_libs__export__HeadVar__2_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_Word * backend_libs__export__HeadVar__4_4)
{
  if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *backend_libs__export__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
    {
      MR_Word backend_libs__export__ExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word backend_libs__export__ExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word backend_libs__export__ExportDefn_11;
      MR_Word backend_libs__export__ExportDefns_12;

      {
        backend_libs__export__export_proc_to_c_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__HeadVar__2_2, backend_libs__export__ExportedProc_9, &backend_libs__export__ExportDefn_11);
      }
      {
        backend_libs__export__export_procs_to_c_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__HeadVar__2_2, backend_libs__export__ExportedProcs_10, &backend_libs__export__ExportDefns_12);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *backend_libs__export__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__ExportDefn_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__ExportDefns_12));
      }
    }
}

static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
  MR_Box backend_libs__export__closure_arg)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__export_proc_to_c__289__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_5,
  MR_Word backend_libs__export__Preds_6,
  MR_Word backend_libs__export__ExportedProc_7,
  MR_Word * backend_libs__export__ExportDefn_8)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__Lang_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 0)));
    MR_Word backend_libs__export__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 1)));
    MR_Integer backend_libs__export__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 2)));
    MR_String backend_libs__export__CFunction_12 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 3)));
    MR_String backend_libs__export__DeclareString_14;
    MR_String backend_libs__export__CRetType_15;
    MR_String backend_libs__export__MaybeDeclareRetval_16;
    MR_String backend_libs__export__MaybeFail_17;
    MR_String backend_libs__export__MaybeSucceed_18;
    MR_Word backend_libs__export__ArgInfoTypes_19;
    MR_String backend_libs__export__ArgDecls_20;
    MR_String backend_libs__export__PassInputArgs_21;
    MR_String backend_libs__export__RetrieveOutputArgs_22;
    MR_Word backend_libs__export__ProcLabel_23;
    MR_String backend_libs__export__ProcLabelString_24;
    MR_String backend_libs__export__Code_25;
    MR_Word backend_libs__export__Var_26;
    MR_Word backend_libs__export__Var_35;
    MR_Word backend_libs__export__Var_37;
    MR_Word backend_libs__export__Var_38;
    MR_Word backend_libs__export__Var_40;
    MR_Word backend_libs__export__Var_41;
    MR_Word backend_libs__export__Var_43;
    MR_Word backend_libs__export__Var_45;
    MR_Word backend_libs__export__Var_46;
    MR_Word backend_libs__export__Var_48;
    MR_Word backend_libs__export__Var_49;
    MR_Word backend_libs__export__Var_51;
    MR_Word backend_libs__export__Var_52;
    MR_Word backend_libs__export__Var_54;
    MR_Word backend_libs__export__Var_56;
    MR_Word backend_libs__export__Var_57;
    MR_Word backend_libs__export__Var_59;
    MR_Word backend_libs__export__Var_60;
    MR_Word backend_libs__export__Var_62;
    MR_Word backend_libs__export__Var_63;
    MR_Word backend_libs__export__Var_65;
    MR_Word backend_libs__export__Var_67;
    MR_Word backend_libs__export__Var_69;
    MR_Word backend_libs__export__Var_71;
    MR_Word backend_libs__export__Var_73;
    MR_Word backend_libs__export__Var_75;
    MR_Word backend_libs__export__Var_77;
    MR_Word backend_libs__export__Var_79;
    MR_Word backend_libs__export__Var_81;
    MR_Word backend_libs__export__Var_83;
    MR_Word backend_libs__export__Var_85;
    MR_Word backend_libs__export__Var_86;
    MR_Word backend_libs__export__Var_88;
    MR_Word backend_libs__export__Var_90;
    MR_Word backend_libs__export__Var_92;
    MR_Word backend_libs__export__Var_94;
    MR_Word backend_libs__export__Var_96;
    MR_Word backend_libs__export__Var_98;
    MR_Word backend_libs__export__Var_100;
    MR_Word backend_libs__export__Var_102;
    MR_Word backend_libs__export__Var_104;
    MR_Word backend_libs__export__Var_105;
    MR_Word backend_libs__export__Var_107;
    MR_Word backend_libs__export__Var_109;
    MR_Word backend_libs__export__Var_111;
    MR_Word backend_libs__export__Var_112;
    MR_Word backend_libs__export__Var_114;
    MR_Word backend_libs__export__Var_116;
    MR_Word backend_libs__export__Var_117;
    MR_Word backend_libs__export__Var_119;
    MR_Word backend_libs__export__Var_121;
    MR_Word backend_libs__export__Var_123;
    MR_Word backend_libs__export__Var_125;
    MR_Word backend_libs__export__Var_127;
    MR_Word backend_libs__export__Var_129;
    MR_Word backend_libs__export__Var_130;
    MR_Word backend_libs__export__Var_131;
    MR_Word backend_libs__export__Var_133;
    MR_Word backend_libs__export__Var_135;
    MR_Word backend_libs__export__Var_137;
    MR_Word backend_libs__export__Var_139;
    MR_Word backend_libs__export__Var_141;
    MR_Word backend_libs__export__Var_143;
    MR_Word backend_libs__export___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 4)));

    {
      backend_libs__export__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_26, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_26, 1) = ((MR_Box) (backend_libs__export__export_proc_to_c_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_26, 3) = ((MR_Box) (backend_libs__export__Lang_9));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_26, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(backend_libs__export__Var_26, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.export_proc_to_c\'/4", (MR_String) "foreign language other than C");
    }
    {
      backend_libs__export__get_export_info_for_lang_c_10_p_0(backend_libs__export__ModuleInfo_5, backend_libs__export__Preds_6, backend_libs__export__PredId_10, backend_libs__export__ProcId_11, &backend_libs__export__DeclareString_14, &backend_libs__export__CRetType_15, &backend_libs__export__MaybeDeclareRetval_16, &backend_libs__export__MaybeFail_17, &backend_libs__export__MaybeSucceed_18, &backend_libs__export__ArgInfoTypes_19);
    }
    {
      backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 1, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__ArgDecls_20);
    }
    {
      backend_libs__export__pass_input_args_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 0, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__PassInputArgs_21);
    }
    {
      backend_libs__export__retrieve_output_args_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 0, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__RetrieveOutputArgs_22);
    }
    {
      backend_libs__export__ProcLabel_23 = backend_libs__proc_label__make_proc_label_3_f_0(backend_libs__export__ModuleInfo_5, backend_libs__export__PredId_10, backend_libs__export__ProcId_11);
    }
    {
      backend_libs__export__ProcLabelString_24 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__export__ProcLabel_23, (MR_Integer) 1);
    }
    {
      backend_libs__export__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_143, 0) = ((MR_Box) (backend_libs__export__MaybeSucceed_18));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[25])));
    }
    {
      backend_libs__export__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_141, 0) = ((MR_Box) ((MR_String) "\tMR_restore_regs_from_mem(c_regs);\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_141, 1) = ((MR_Box) (backend_libs__export__Var_143));
    }
    {
      backend_libs__export__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_139, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_139, 1) = ((MR_Box) (backend_libs__export__Var_141));
    }
    {
      backend_libs__export__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_137, 0) = ((MR_Box) ((MR_String) "\t}\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_137, 1) = ((MR_Box) (backend_libs__export__Var_139));
    }
    {
      backend_libs__export__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_135, 0) = ((MR_Box) ((MR_String) "\t\t MR_finalize_thread_engine();\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_135, 1) = ((MR_Box) (backend_libs__export__Var_137));
    }
    {
      backend_libs__export__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_133, 0) = ((MR_Box) ((MR_String) "\tif (must_finalize_engine) {\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_133, 1) = ((MR_Box) (backend_libs__export__Var_135));
    }
    {
      backend_libs__export__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_131, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_131, 1) = ((MR_Box) (backend_libs__export__Var_133));
    }
    {
      backend_libs__export__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_130, 0) = ((MR_Box) (backend_libs__export__RetrieveOutputArgs_22));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_130, 1) = ((MR_Box) (backend_libs__export__Var_131));
    }
    {
      backend_libs__export__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_129, 0) = ((MR_Box) (backend_libs__export__MaybeFail_17));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_129, 1) = ((MR_Box) (backend_libs__export__Var_130));
    }
    {
      backend_libs__export__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_127, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_127, 1) = ((MR_Box) (backend_libs__export__Var_129));
    }
    {
      backend_libs__export__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_125, 0) = ((MR_Box) ((MR_String) "\tMR_current_callback_site = saved_cur_callback;\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_125, 1) = ((MR_Box) (backend_libs__export__Var_127));
    }
    {
      backend_libs__export__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_123, 0) = ((MR_Box) ((MR_String) "\tMR_current_call_site_dynamic = saved_cur_csd;\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_123, 1) = ((MR_Box) (backend_libs__export__Var_125));
    }
    {
      backend_libs__export__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_121, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_121, 1) = ((MR_Box) (backend_libs__export__Var_123));
    }
    {
      backend_libs__export__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_119, 0) = ((MR_Box) ((MR_String) "\tMR_restore_transient_registers();\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_119, 1) = ((MR_Box) (backend_libs__export__Var_121));
    }
    {
      backend_libs__export__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_117, 0) = ((MR_Box) ((MR_String) "), MR_FALSE);\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_117, 1) = ((MR_Box) (backend_libs__export__Var_119));
    }
    {
      backend_libs__export__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_116, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_116, 1) = ((MR_Box) (backend_libs__export__Var_117));
    }
    {
      backend_libs__export__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_114, 0) = ((MR_Box) ((MR_String) "\t(void) MR_call_engine(MR_ENTRY("));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_114, 1) = ((MR_Box) (backend_libs__export__Var_116));
    }
    {
      backend_libs__export__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_112, 0) = ((MR_Box) ((MR_String) "\tMR_save_transient_registers();\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_112, 1) = ((MR_Box) (backend_libs__export__Var_114));
    }
    {
      backend_libs__export__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_111, 0) = ((MR_Box) (backend_libs__export__PassInputArgs_21));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_111, 1) = ((MR_Box) (backend_libs__export__Var_112));
    }
    {
      backend_libs__export__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_109, 0) = ((MR_Box) ((MR_String) "\tMR_restore_registers();\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_109, 1) = ((MR_Box) (backend_libs__export__Var_111));
    }
    {
      backend_libs__export__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_107, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_107, 1) = ((MR_Box) (backend_libs__export__Var_109));
    }
    {
      backend_libs__export__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_105, 0) = ((MR_Box) ((MR_String) "));\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_105, 1) = ((MR_Box) (backend_libs__export__Var_107));
    }
    {
      backend_libs__export__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_104, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_104, 1) = ((MR_Box) (backend_libs__export__Var_105));
    }
    {
      backend_libs__export__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_102, 0) = ((MR_Box) ((MR_String) "\tMR_setup_callback(MR_ENTRY("));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_102, 1) = ((MR_Box) (backend_libs__export__Var_104));
    }
    {
      backend_libs__export__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_100, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_csd = MR_current_call_site_dynamic;\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_100, 1) = ((MR_Box) (backend_libs__export__Var_102));
    }
    {
      backend_libs__export__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_98, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_callback = MR_current_callback_site;\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_98, 1) = ((MR_Box) (backend_libs__export__Var_100));
    }
    {
      backend_libs__export__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_96, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_96, 1) = ((MR_Box) (backend_libs__export__Var_98));
    }
    {
      backend_libs__export__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_94, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_94, 1) = ((MR_Box) (backend_libs__export__Var_96));
    }
    {
      backend_libs__export__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_92, 0) = ((MR_Box) ((MR_String) "\tmust_finalize_engine = MR_init_thread(MR_use_now);\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_92, 1) = ((MR_Box) (backend_libs__export__Var_94));
    }
    {
      backend_libs__export__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_90, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_90, 1) = ((MR_Box) (backend_libs__export__Var_92));
    }
    {
      backend_libs__export__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_88, 0) = ((MR_Box) ((MR_String) "\tMR_save_regs_to_mem(c_regs);\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_88, 1) = ((MR_Box) (backend_libs__export__Var_90));
    }
    {
      backend_libs__export__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_86, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_86, 1) = ((MR_Box) (backend_libs__export__Var_88));
    }
    {
      backend_libs__export__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_85, 0) = ((MR_Box) (backend_libs__export__MaybeDeclareRetval_16));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_85, 1) = ((MR_Box) (backend_libs__export__Var_86));
    }
    {
      backend_libs__export__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_83, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_83, 1) = ((MR_Box) (backend_libs__export__Var_85));
    }
    {
      backend_libs__export__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_81, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynamic *saved_cur_csd;\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_81, 1) = ((MR_Box) (backend_libs__export__Var_83));
    }
    {
      backend_libs__export__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_79, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynList **saved_cur_callback;\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_79, 1) = ((MR_Box) (backend_libs__export__Var_81));
    }
    {
      backend_libs__export__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_77, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_77, 1) = ((MR_Box) (backend_libs__export__Var_79));
    }
    {
      backend_libs__export__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_75, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_75, 1) = ((MR_Box) (backend_libs__export__Var_77));
    }
    {
      backend_libs__export__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_73, 0) = ((MR_Box) ((MR_String) "\tMR_bool must_finalize_engine;\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_73, 1) = ((MR_Box) (backend_libs__export__Var_75));
    }
    {
      backend_libs__export__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_71, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_71, 1) = ((MR_Box) (backend_libs__export__Var_73));
    }
    {
      backend_libs__export__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_69, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_69, 1) = ((MR_Box) (backend_libs__export__Var_71));
    }
    {
      backend_libs__export__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_67, 0) = ((MR_Box) ((MR_String) "\tMR_Word c_regs[MR_NUM_REAL_REGS];\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_67, 1) = ((MR_Box) (backend_libs__export__Var_69));
    }
    {
      backend_libs__export__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_65, 0) = ((MR_Box) ((MR_String) "#if MR_NUM_REAL_REGS > 0\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_65, 1) = ((MR_Box) (backend_libs__export__Var_67));
    }
    {
      backend_libs__export__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_63, 0) = ((MR_Box) ((MR_String) ")\n{\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_63, 1) = ((MR_Box) (backend_libs__export__Var_65));
    }
    {
      backend_libs__export__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_62, 0) = ((MR_Box) (backend_libs__export__ArgDecls_20));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_62, 1) = ((MR_Box) (backend_libs__export__Var_63));
    }
    {
      backend_libs__export__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_60, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_60, 1) = ((MR_Box) (backend_libs__export__Var_62));
    }
    {
      backend_libs__export__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_59, 0) = ((MR_Box) (backend_libs__export__CFunction_12));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_59, 1) = ((MR_Box) (backend_libs__export__Var_60));
    }
    {
      backend_libs__export__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_57, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_57, 1) = ((MR_Box) (backend_libs__export__Var_59));
    }
    {
      backend_libs__export__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_56, 0) = ((MR_Box) (backend_libs__export__CRetType_15));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_56, 1) = ((MR_Box) (backend_libs__export__Var_57));
    }
    {
      backend_libs__export__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_54, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_54, 1) = ((MR_Box) (backend_libs__export__Var_56));
    }
    {
      backend_libs__export__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_52, 0) = ((MR_Box) ((MR_String) ");\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_52, 1) = ((MR_Box) (backend_libs__export__Var_54));
    }
    {
      backend_libs__export__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_51, 0) = ((MR_Box) (backend_libs__export__ArgDecls_20));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_51, 1) = ((MR_Box) (backend_libs__export__Var_52));
    }
    {
      backend_libs__export__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_49, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_49, 1) = ((MR_Box) (backend_libs__export__Var_51));
    }
    {
      backend_libs__export__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_48, 0) = ((MR_Box) (backend_libs__export__CFunction_12));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_48, 1) = ((MR_Box) (backend_libs__export__Var_49));
    }
    {
      backend_libs__export__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_46, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_46, 1) = ((MR_Box) (backend_libs__export__Var_48));
    }
    {
      backend_libs__export__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_45, 0) = ((MR_Box) (backend_libs__export__CRetType_15));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_45, 1) = ((MR_Box) (backend_libs__export__Var_46));
    }
    {
      backend_libs__export__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_43, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_43, 1) = ((MR_Box) (backend_libs__export__Var_45));
    }
    {
      backend_libs__export__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_41, 0) = ((MR_Box) ((MR_String) ");\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_41, 1) = ((MR_Box) (backend_libs__export__Var_43));
    }
    {
      backend_libs__export__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_40, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_40, 1) = ((MR_Box) (backend_libs__export__Var_41));
    }
    {
      backend_libs__export__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_38, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_38, 1) = ((MR_Box) (backend_libs__export__Var_40));
    }
    {
      backend_libs__export__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_37, 0) = ((MR_Box) (backend_libs__export__DeclareString_14));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_37, 1) = ((MR_Box) (backend_libs__export__Var_38));
    }
    {
      backend_libs__export__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_35, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__export__Var_35, 1) = ((MR_Box) (backend_libs__export__Var_37));
    }
    {
      mercury__string__append_list_2_p_0(backend_libs__export__Var_35, &backend_libs__export__Code_25);
    }
    *backend_libs__export__ExportDefn_8 = (MR_Word) backend_libs__export__Code_25;
  }
}

static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Integer backend_libs__export__LastArgNum_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_String * backend_libs__export__HeadVar__4_4)
{
  {
    MR_bool backend_libs__export__succeeded;

    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
    else
      {
        MR_Word backend_libs__export__AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__export__ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 0)));
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 1)));
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
        MR_Integer backend_libs__export__CurArgNum_16 = (backend_libs__export__LastArgNum_2 + (MR_Integer) 1);
        MR_String backend_libs__export__RetrieveHeadOutputArg_17;
        MR_String backend_libs__export__RetrieveTailOutputArgs_25;

        switch (backend_libs__export__Mode_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__export__RetrieveHeadOutputArg_17 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            {
              MR_String backend_libs__export__ArgName_18;
              MR_String backend_libs__export__ArgLocString0_19;
              MR_String backend_libs__export__ArgLocString_20;
              MR_Word backend_libs__export__ExportType_21;
              MR_Word backend_libs__export__ExportTypeIsForeign_22;
              MR_String backend_libs__export__Var_28;
              MR_Word backend_libs__export__RegType_46;
              MR_Integer backend_libs__export__RegNum_47;

              {
                backend_libs__export__Var_28 = mercury__string__int_to_string_1_f_0(backend_libs__export__CurArgNum_16);
              }
              {
                backend_libs__export__ArgName_18 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", backend_libs__export__Var_28);
              }
              backend_libs__export__RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
              backend_libs__export__RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
              switch (backend_libs__export__RegType_46) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_String backend_libs__export__Var_49;
                    MR_String backend_libs__export__Var_50;

                    {
                      backend_libs__export__Var_50 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                    }
                    {
                      backend_libs__export__Var_49 = mercury__string__f_43_43_2_f_0(backend_libs__export__Var_50, (MR_String) ")");
                    }
                    {
                      backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__Var_49);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    backend_libs__export__succeeded = (backend_libs__export__RegNum_47 > (MR_Integer) 32);
                    if (backend_libs__export__succeeded)
                      {
                        MR_String backend_libs__export__Var_54;
                        MR_String backend_libs__export__Var_55;

                        {
                          backend_libs__export__Var_55 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
                        {
                          backend_libs__export__Var_54 = mercury__string__f_43_43_2_f_0(backend_libs__export__Var_55, (MR_String) ")");
                        }
                        {
                          backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__Var_54);
                        }
                      }
                    else
                      {
                        MR_String backend_libs__export__Var_58;

                        {
                          backend_libs__export__Var_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
                        {
                          backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__Var_58);
                        }
                      }
                  }
                  break;
              }
              {
                backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__ArgLoc_14, backend_libs__export__ArgLocString0_19, backend_libs__export__Type_13, &backend_libs__export__ArgLocString_20);
              }
              {
                backend_libs__export__ExportType_21 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Type_13);
              }
              {
                backend_libs__export__ExportTypeIsForeign_22 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__ExportType_21);
              }
              if ((backend_libs__export__ExportTypeIsForeign_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String backend_libs__export__Var_30;
                  MR_String backend_libs__export__Var_31;
                  MR_String backend_libs__export__Var_33;

                  {
                    backend_libs__export__Var_33 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_20, (MR_String) ";\n");
                  }
                  {
                    backend_libs__export__Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__Var_33);
                  }
                  {
                    backend_libs__export__Var_30 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_18, backend_libs__export__Var_31);
                  }
                  {
                    backend_libs__export__RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t*", backend_libs__export__Var_30);
                  }
                }
              else
                {
                  MR_String backend_libs__export__CType_24;
                  MR_String backend_libs__export__Var_37;
                  MR_String backend_libs__export__Var_38;
                  MR_String backend_libs__export__Var_40;
                  MR_String backend_libs__export__Var_41;
                  MR_String backend_libs__export__Var_43;

                  {
                    backend_libs__export__CType_24 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__ExportType_21);
                  }
                  {
                    backend_libs__export__Var_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_18, (MR_String) ");\n");
                  }
                  {
                    backend_libs__export__Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ", * ", backend_libs__export__Var_43);
                  }
                  {
                    backend_libs__export__Var_40 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_20, backend_libs__export__Var_41);
                  }
                  {
                    backend_libs__export__Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__Var_40);
                  }
                  {
                    backend_libs__export__Var_37 = mercury__string__f_43_43_2_f_0(backend_libs__export__CType_24, backend_libs__export__Var_38);
                  }
                  {
                    backend_libs__export__RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", backend_libs__export__Var_37);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            backend_libs__export__RetrieveHeadOutputArg_17 = (MR_String) "";
            break;
        }
        {
          backend_libs__export__retrieve_output_args_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__CurArgNum_16, backend_libs__export__ATs_10, &backend_libs__export__RetrieveTailOutputArgs_25);
        }
        {
          *backend_libs__export__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetrieveHeadOutputArg_17, backend_libs__export__RetrieveTailOutputArgs_25);
        }
      }
  }
}

static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Integer backend_libs__export__LastArgNum_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_String * backend_libs__export__HeadVar__4_4)
{
  {
    MR_bool backend_libs__export__succeeded;

    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
    else
      {
        MR_Word backend_libs__export__AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__export__ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 0)));
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 1)));
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
        MR_Integer backend_libs__export__CurArgNum_16 = (backend_libs__export__LastArgNum_2 + (MR_Integer) 1);
        MR_String backend_libs__export__PassHeadInputArg_24;
        MR_String backend_libs__export__PassTailInputArgs_25;

        switch (backend_libs__export__Mode_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String backend_libs__export__ArgName0_17;
              MR_String backend_libs__export__ArgLocString_18;
              MR_String backend_libs__export__ArgName_19;
              MR_Word backend_libs__export__ExportType_20;
              MR_Word backend_libs__export__ExportTypeIsForeign_21;
              MR_String backend_libs__export__Var_28;
              MR_Word backend_libs__export__RegType_46;
              MR_Integer backend_libs__export__RegNum_47;

              {
                backend_libs__export__Var_28 = mercury__string__int_to_string_1_f_0(backend_libs__export__CurArgNum_16);
              }
              {
                backend_libs__export__ArgName0_17 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", backend_libs__export__Var_28);
              }
              backend_libs__export__RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
              backend_libs__export__RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
              switch (backend_libs__export__RegType_46) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_String backend_libs__export__Var_49;
                    MR_String backend_libs__export__Var_50;

                    {
                      backend_libs__export__Var_50 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                    }
                    {
                      backend_libs__export__Var_49 = mercury__string__f_43_43_2_f_0(backend_libs__export__Var_50, (MR_String) ")");
                    }
                    {
                      backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__Var_49);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    backend_libs__export__succeeded = (backend_libs__export__RegNum_47 > (MR_Integer) 32);
                    if (backend_libs__export__succeeded)
                      {
                        MR_String backend_libs__export__Var_54;
                        MR_String backend_libs__export__Var_55;

                        {
                          backend_libs__export__Var_55 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
                        {
                          backend_libs__export__Var_54 = mercury__string__f_43_43_2_f_0(backend_libs__export__Var_55, (MR_String) ")");
                        }
                        {
                          backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__Var_54);
                        }
                      }
                    else
                      {
                        MR_String backend_libs__export__Var_58;

                        {
                          backend_libs__export__Var_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
                        {
                          backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__Var_58);
                        }
                      }
                  }
                  break;
              }
              {
                backend_libs__export__convert_type_to_mercury_4_p_0(backend_libs__export__ArgName0_17, backend_libs__export__Type_13, backend_libs__export__ArgLoc_14, &backend_libs__export__ArgName_19);
              }
              {
                backend_libs__export__ExportType_20 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Type_13);
              }
              {
                backend_libs__export__ExportTypeIsForeign_21 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__ExportType_20);
              }
              if ((backend_libs__export__ExportTypeIsForeign_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String backend_libs__export__Var_30;
                  MR_String backend_libs__export__Var_31;
                  MR_String backend_libs__export__Var_33;

                  {
                    backend_libs__export__Var_33 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, (MR_String) ";\n");
                  }
                  {
                    backend_libs__export__Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__Var_33);
                  }
                  {
                    backend_libs__export__Var_30 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_18, backend_libs__export__Var_31);
                  }
                  {
                    backend_libs__export__PassHeadInputArg_24 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__Var_30);
                  }
                }
              else
                {
                  MR_String backend_libs__export__CType_23;
                  MR_String backend_libs__export__Var_37;
                  MR_String backend_libs__export__Var_38;
                  MR_String backend_libs__export__Var_40;
                  MR_String backend_libs__export__Var_41;
                  MR_String backend_libs__export__Var_43;

                  {
                    backend_libs__export__CType_23 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__ExportType_20);
                  }
                  {
                    backend_libs__export__Var_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_18, (MR_String) ");\n");
                  }
                  {
                    backend_libs__export__Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__Var_43);
                  }
                  {
                    backend_libs__export__Var_40 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, backend_libs__export__Var_41);
                  }
                  {
                    backend_libs__export__Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__Var_40);
                  }
                  {
                    backend_libs__export__Var_37 = mercury__string__f_43_43_2_f_0(backend_libs__export__CType_23, backend_libs__export__Var_38);
                  }
                  {
                    backend_libs__export__PassHeadInputArg_24 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", backend_libs__export__Var_37);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            backend_libs__export__PassHeadInputArg_24 = (MR_String) "";
            break;
          case (MR_Integer) 2:
            backend_libs__export__PassHeadInputArg_24 = (MR_String) "";
            break;
        }
        {
          backend_libs__export__pass_input_args_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__CurArgNum_16, backend_libs__export__ATs_10, &backend_libs__export__PassTailInputArgs_25);
        }
        {
          *backend_libs__export__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(backend_libs__export__PassHeadInputArg_24, backend_libs__export__PassTailInputArgs_25);
        }
      }
  }
}

void MR_CALL 
backend_libs__export__convert_type_to_mercury_4_p_0(
  MR_String backend_libs__export__Rval_5,
  MR_Word backend_libs__export__Type_6,
  MR_Word backend_libs__export__TargetArgLoc_7,
  MR_String * backend_libs__export__ConvertedRval_8)
{
  switch (MR_tag((MR_Word) backend_libs__export__Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
      break;
    case (MR_Integer) 2:
      {
        MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_6, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) backend_libs__export__BuiltinType_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(backend_libs__export__BuiltinType_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word backend_libs__export__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 0)));
                  MR_Integer backend_libs__export__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 1)));

                  switch (backend_libs__export__Var_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String backend_libs__export__Var_34;

                        {
                          backend_libs__export__Var_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_5, (MR_String) ")");
                        }
                        {
                          *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", backend_libs__export__Var_34);
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", backend_libs__export__Rval_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_UnsignedChar) ", backend_libs__export__Rval_5);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
      break;
  }
}

static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Word backend_libs__export__NameThem_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_String * backend_libs__export__HeadVar__4_4)
{
  if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *backend_libs__export__HeadVar__4_4 = (MR_String) "void";
  else
    {
      {
        backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__NameThem_2, (MR_Integer) 0, backend_libs__export__HeadVar__3_3, backend_libs__export__HeadVar__4_4);
      }
    }
}

void MR_CALL 
backend_libs__export__get_foreign_export_decls_2_p_0(
  MR_Word backend_libs__export__ModuleInfo_3,
  MR_Word * backend_libs__export__ForeignExportDecls_4)
{
  {
    MR_Word backend_libs__export__PredicateTable_5;
    MR_Word backend_libs__export__Preds_6;
    MR_Word backend_libs__export__ForeignDeclCodeCord_7;
    MR_Word backend_libs__export__ForeignDeclCodes_8;
    MR_Word backend_libs__export__ExportedProcsCord_9;
    MR_Word backend_libs__export__ExportDecls_10;
    MR_Word backend_libs__export__Var_11;

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__PredicateTable_5);
    }
    {
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_5, &backend_libs__export__Preds_6);
    }
    {
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ForeignDeclCodeCord_7);
    }
    {
      backend_libs__export__ForeignDeclCodes_8 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__export__ForeignDeclCodeCord_7);
    }
    {
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ExportedProcsCord_9);
    }
    {
      backend_libs__export__Var_11 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__export__ExportedProcsCord_9);
    }
    {
      backend_libs__export__get_foreign_export_decls_loop_4_p_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Preds_6, backend_libs__export__Var_11, &backend_libs__export__ExportDecls_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *backend_libs__export__ForeignExportDecls_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__export__ForeignDeclCodes_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__export__ExportDecls_10));
    }
  }
}

static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Word backend_libs__export__Preds_2,
  MR_Word backend_libs__export__HeadVar__3_3,
  MR_Word * backend_libs__export__HeadVar__4_4)
{
  if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *backend_libs__export__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
    {
      MR_Word backend_libs__export__HeadExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word backend_libs__export__TailExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word backend_libs__export__HeadExportDecl_11;
      MR_Word backend_libs__export__TailExportDecls_12;
      MR_Word backend_libs__export__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 0)));
      MR_Word backend_libs__export__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 1)));
      MR_Integer backend_libs__export__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 2)));
      MR_String backend_libs__export__ExportName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 3)));
      MR_String backend_libs__export__RetType_19;
      MR_String backend_libs__export__ArgDecls_24;
      MR_Word backend_libs__export___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 4)));

      switch (backend_libs__export__Lang_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word backend_libs__export__HeadArgInfoTypes_23;
            MR_String backend_libs__export___HowToDeclare_18;
            MR_String backend_libs__export___DeclareReturnVal_20;
            MR_String backend_libs__export___FailureAction_21;
            MR_String backend_libs__export___SuccessAction_22;

            {
              backend_libs__export__get_export_info_for_lang_c_10_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Preds_2, backend_libs__export__PredId_14, backend_libs__export__ProcId_15, &backend_libs__export___HowToDeclare_18, &backend_libs__export__RetType_19, &backend_libs__export___DeclareReturnVal_20, &backend_libs__export___FailureAction_21, &backend_libs__export___SuccessAction_22, &backend_libs__export__HeadArgInfoTypes_23);
            }
            if ((backend_libs__export__HeadArgInfoTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              backend_libs__export__ArgDecls_24 = (MR_String) "void";
            else
              {
                {
                  backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, (MR_Integer) 0, (MR_Integer) 0, backend_libs__export__HeadArgInfoTypes_23, &backend_libs__export__ArgDecls_24);
                }
              }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 2:
          {
            {
              mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_foreign_export_decls_loop\'/4", (MR_String) ":- pragma foreign_export for non-C backends.");
              return;
            }
          }
          break;
      }
      {
        backend_libs__export__HeadExportDecl_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 0) = ((MR_Box) (backend_libs__export__Lang_13));
        MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 1) = ((MR_Box) (backend_libs__export__RetType_19));
        MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 2) = ((MR_Box) (backend_libs__export__ExportName_16));
        MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 3) = ((MR_Box) (backend_libs__export__ArgDecls_24));
      }
      {
        backend_libs__export__get_foreign_export_decls_loop_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Preds_2, backend_libs__export__TailExportedProcs_10, &backend_libs__export__TailExportDecls_12);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *backend_libs__export__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__HeadExportDecl_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__TailExportDecls_12));
      }
    }
}

static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
  MR_Word backend_libs__export__ModuleInfo_1,
  MR_Word backend_libs__export__NameThem_2,
  MR_Integer backend_libs__export__LastArgNum_3,
  MR_Word backend_libs__export__HeadVar__4_4,
  MR_String * backend_libs__export__HeadVar__5_5)
{
  if ((backend_libs__export__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *backend_libs__export__HeadVar__5_5 = (MR_String) "";
  else
    {
      MR_Word backend_libs__export__AT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__4_4, (MR_Integer) 0)));
      MR_Word backend_libs__export__ATs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__4_4, (MR_Integer) 1)));
      MR_Word backend_libs__export__ArgInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_12, (MR_Integer) 0)));
      MR_Word backend_libs__export__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_12, (MR_Integer) 1)));
      MR_Integer backend_libs__export__CurArgNum_17 = (backend_libs__export__LastArgNum_3 + (MR_Integer) 1);
      MR_String backend_libs__export__TypeString_18;
      MR_String backend_libs__export__ArgName_19;
      MR_String backend_libs__export__HeadArgsDecl_20;
      MR_Word backend_libs__export__Mode_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 1)));
      MR_String backend_libs__export__TypeString0_37;
      MR_Word backend_libs__export___Loc_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 0)));

      switch (backend_libs__export__NameThem_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          backend_libs__export__ArgName_19 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          {
            MR_String backend_libs__export__ArgNumString_36;

            {
              mercury__string__int_to_string_2_p_0(backend_libs__export__CurArgNum_17, &backend_libs__export__ArgNumString_36);
            }
            {
              mercury__string__append_3_p_2((MR_String) " Mercury__argument", backend_libs__export__ArgNumString_36, &backend_libs__export__ArgName_19);
            }
          }
          break;
      }
      {
        backend_libs__export__TypeString0_37 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(backend_libs__export__ModuleInfo_1, (MR_Integer) 0, backend_libs__export__Type_16);
      }
      switch (backend_libs__export__Mode_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          backend_libs__export__TypeString_18 = backend_libs__export__TypeString0_37;
          break;
        case (MR_Integer) 1:
          {
            {
              backend_libs__export__TypeString_18 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString0_37, (MR_String) " *");
            }
          }
          break;
      }
      {
        backend_libs__export__HeadArgsDecl_20 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString_18, backend_libs__export__ArgName_19);
      }
      if ((backend_libs__export__ATs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *backend_libs__export__HeadVar__5_5 = backend_libs__export__HeadArgsDecl_20;
      else
        {
          MR_String backend_libs__export__TailArgsDecl_23;
          MR_String backend_libs__export__Var_25;

          {
            backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__NameThem_2, backend_libs__export__CurArgNum_17, backend_libs__export__ATs_13, &backend_libs__export__TailArgsDecl_23);
          }
          {
            backend_libs__export__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__TailArgsDecl_23);
          }
          {
            *backend_libs__export__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(backend_libs__export__HeadArgsDecl_20, backend_libs__export__Var_25);
          }
        }
    }
}

static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
  MR_Box backend_libs__export__closure_arg,
  MR_Box backend_libs__export__wrapper_arg_1)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

    {
      backend_libs__export__succeeded = backend_libs__export__include_arg_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
  MR_Word backend_libs__export__ModuleInfo_11,
  MR_Word backend_libs__export__Preds_12,
  MR_Word backend_libs__export__PredId_13,
  MR_Integer backend_libs__export__ProcId_14,
  MR_String * backend_libs__export__HowToDeclareLabel_15,
  MR_String * backend_libs__export__CRetType_16,
  MR_String * backend_libs__export__MaybeDeclareRetval_17,
  MR_String * backend_libs__export__MaybeFail_18,
  MR_String * backend_libs__export__MaybeSucceed_19,
  MR_Word * backend_libs__export__ArgInfoTypes_20)
{
  {
    MR_bool backend_libs__export__succeeded;
    MR_Word backend_libs__export__PredInfo_21;
    MR_Word backend_libs__export__Status_22;
    MR_Word backend_libs__export__PredOrFunc_23;
    MR_Word backend_libs__export__ProcTable_24;
    MR_Word backend_libs__export__ProcInfo_25;
    MR_Word backend_libs__export__MaybeArgInfos_26;
    MR_Word backend_libs__export__Markers_27;
    MR_Word backend_libs__export__ArgTypes_28;
    MR_Word backend_libs__export__ArgInfos_30;
    MR_Word backend_libs__export__CodeModel_32;
    MR_Word backend_libs__export__ArgInfoTypes0_33;
    MR_Word backend_libs__export__ArgInfoTypes2_44;
    MR_Word backend_libs__export__Var_74;
    MR_Box backend_libs__export__conv0_PredInfo_21;
    MR_Box backend_libs__export__conv1_ProcInfo_25;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, backend_libs__export__Preds_12, ((MR_Box) (backend_libs__export__PredId_13)), &backend_libs__export__conv0_PredInfo_21);
    }
    backend_libs__export__PredInfo_21 = ((MR_Word) backend_libs__export__conv0_PredInfo_21);
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__Status_22);
    }
    {
      backend_libs__export__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(backend_libs__export__ModuleInfo_11, backend_libs__export__PredInfo_21, backend_libs__export__ProcId_14);
    }
    if (!(backend_libs__export__succeeded))
      {
        MR_Word backend_libs__export__Var_45;

        {
          backend_libs__export__Var_45 = hlds__status__pred_status_defined_in_this_module_1_f_0(backend_libs__export__Status_22);
        }
        backend_libs__export__succeeded = (backend_libs__export__Var_45 == (MR_Integer) 0);
      }
    if (backend_libs__export__succeeded)
      *backend_libs__export__HowToDeclareLabel_15 = (MR_String) "MR_declare_entry";
    else
      *backend_libs__export__HowToDeclareLabel_15 = (MR_String) "MR_declare_static";
    {
      backend_libs__export__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(backend_libs__export__PredInfo_21);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__ProcTable_24);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, backend_libs__export__ProcTable_24, backend_libs__export__ProcId_14, &backend_libs__export__conv1_ProcInfo_25);
    }
    backend_libs__export__ProcInfo_25 = ((MR_Word) backend_libs__export__conv1_ProcInfo_25);
    {
      hlds__hlds_pred__proc_info_get_maybe_arg_info_2_p_0(backend_libs__export__ProcInfo_25, &backend_libs__export__MaybeArgInfos_26);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__Markers_27);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__ArgTypes_28);
    }
    if ((backend_libs__export__MaybeArgInfos_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word backend_libs__export__NewProcInfo_31;

        {
          hlds__arg_info__generate_proc_arg_info_5_p_0(backend_libs__export__Markers_27, backend_libs__export__ArgTypes_28, backend_libs__export__ModuleInfo_11, backend_libs__export__ProcInfo_25, &backend_libs__export__NewProcInfo_31);
        }
        {
          hlds__hlds_pred__proc_info_arg_info_2_p_0(backend_libs__export__NewProcInfo_31, &backend_libs__export__ArgInfos_30);
        }
      }
    else
      backend_libs__export__ArgInfos_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeArgInfos_26, (MR_Integer) 0)));
    {
      backend_libs__export__CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(backend_libs__export__ProcInfo_25);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__export__ArgInfos_30, backend_libs__export__ArgTypes_28, &backend_libs__export__ArgInfoTypes0_33);
    }
    switch (backend_libs__export__CodeModel_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word backend_libs__export__ArgInfoTypes1_34;
          MR_Word backend_libs__export__RetArgLoc_35;
          MR_Word backend_libs__export__RetType_37;
          MR_Word backend_libs__export__TypeInfo_81_81;
          MR_Word backend_libs__export__RetArgMode_36;
          MR_Word backend_libs__export__Var_58;
          MR_Word backend_libs__export__Var_59;
          MR_Word backend_libs__export__Var_60;
          MR_Box backend_libs__export__conv2_Var_58;

          backend_libs__export__succeeded = (backend_libs__export__PredOrFunc_23 == (MR_Integer) 1);
          if (backend_libs__export__succeeded)
            {
              backend_libs__export__TypeInfo_81_81 = (MR_Word) &backend_libs__export_scalar_common_1[0];
              {
                parse_tree__prog_util__pred_args_to_func_args_3_p_0(backend_libs__export__TypeInfo_81_81, backend_libs__export__ArgInfoTypes0_33, &backend_libs__export__ArgInfoTypes1_34, &backend_libs__export__conv2_Var_58);
              }
              backend_libs__export__Var_58 = ((MR_Word) backend_libs__export__conv2_Var_58);
              backend_libs__export__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Var_58, (MR_Integer) 0)));
              backend_libs__export__RetType_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Var_58, (MR_Integer) 1)));
              backend_libs__export__RetArgLoc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Var_59, (MR_Integer) 0)));
              backend_libs__export__RetArgMode_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Var_59, (MR_Integer) 1)));
              backend_libs__export__succeeded = (backend_libs__export__RetArgMode_36 == (MR_Integer) 1);
              if (backend_libs__export__succeeded)
                {
                  {
                    backend_libs__export__Var_60 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_11, backend_libs__export__RetType_37);
                  }
                  backend_libs__export__succeeded = (backend_libs__export__Var_60 == (MR_Integer) 1);
                }
            }
          if (backend_libs__export__succeeded)
            {
              MR_Word backend_libs__export__ExportRetType_38;
              MR_String backend_libs__export__RetArgString0_39;
              MR_String backend_libs__export__RetArgString_40;
              MR_Word backend_libs__export__ExportRetTypeIsForeign_41;
              MR_String backend_libs__export__Var_63;
              MR_Word backend_libs__export__RegType_85;
              MR_Integer backend_libs__export__RegNum_86;

              {
                backend_libs__export__ExportRetType_38 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_11, backend_libs__export__RetType_37);
              }
              {
                *backend_libs__export__CRetType_16 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__ExportRetType_38);
              }
              backend_libs__export__RegType_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__RetArgLoc_35, (MR_Integer) 0)));
              backend_libs__export__RegNum_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__RetArgLoc_35, (MR_Integer) 1)));
              switch (backend_libs__export__RegType_85) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_String backend_libs__export__Var_88;
                    MR_String backend_libs__export__Var_89;

                    {
                      backend_libs__export__Var_89 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                    }
                    {
                      backend_libs__export__Var_88 = mercury__string__f_43_43_2_f_0(backend_libs__export__Var_89, (MR_String) ")");
                    }
                    {
                      backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__Var_88);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    backend_libs__export__succeeded = (backend_libs__export__RegNum_86 > (MR_Integer) 32);
                    if (backend_libs__export__succeeded)
                      {
                        MR_String backend_libs__export__Var_93;
                        MR_String backend_libs__export__Var_94;

                        {
                          backend_libs__export__Var_94 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                        }
                        {
                          backend_libs__export__Var_93 = mercury__string__f_43_43_2_f_0(backend_libs__export__Var_94, (MR_String) ")");
                        }
                        {
                          backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__Var_93);
                        }
                      }
                    else
                      {
                        MR_String backend_libs__export__Var_97;

                        {
                          backend_libs__export__Var_97 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                        }
                        {
                          backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__Var_97);
                        }
                      }
                  }
                  break;
              }
              {
                backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__RetArgLoc_35, backend_libs__export__RetArgString0_39, backend_libs__export__RetType_37, &backend_libs__export__RetArgString_40);
              }
              {
                backend_libs__export__Var_63 = mercury__string__f_43_43_2_f_0(*backend_libs__export__CRetType_16, (MR_String) " return_value;\n");
              }
              {
                *backend_libs__export__MaybeDeclareRetval_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__Var_63);
              }
              {
                backend_libs__export__ExportRetTypeIsForeign_41 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__ExportRetType_38);
              }
              if ((backend_libs__export__ExportRetTypeIsForeign_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String backend_libs__export__Var_66;

                  {
                    backend_libs__export__Var_66 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_40, (MR_String) ";\n");
                  }
                  {
                    *backend_libs__export__MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\treturn_value = ", backend_libs__export__Var_66);
                  }
                }
              else
                {
                  MR_String backend_libs__export__Var_69;
                  MR_String backend_libs__export__Var_70;
                  MR_String backend_libs__export__Var_72;

                  {
                    backend_libs__export__Var_72 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_40, (MR_String) ", return_value);\n");
                  }
                  {
                    backend_libs__export__Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__Var_72);
                  }
                  {
                    backend_libs__export__Var_69 = mercury__string__f_43_43_2_f_0(*backend_libs__export__CRetType_16, backend_libs__export__Var_70);
                  }
                  {
                    *backend_libs__export__MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", backend_libs__export__Var_69);
                  }
                }
              *backend_libs__export__MaybeSucceed_19 = (MR_String) "\treturn return_value;\n";
              backend_libs__export__ArgInfoTypes2_44 = backend_libs__export__ArgInfoTypes1_34;
            }
          else
            {
              *backend_libs__export__CRetType_16 = (MR_String) "void";
              *backend_libs__export__MaybeDeclareRetval_17 = (MR_String) "";
              *backend_libs__export__MaybeFail_18 = (MR_String) "";
              *backend_libs__export__MaybeSucceed_19 = (MR_String) "";
              backend_libs__export__ArgInfoTypes2_44 = backend_libs__export__ArgInfoTypes0_33;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_export_info_for_lang_c\'/10", (MR_String) "Attempt to export model_non procedure.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *backend_libs__export__CRetType_16 = (MR_String) "MR_bool";
          *backend_libs__export__MaybeDeclareRetval_17 = (MR_String) "";
          {
            mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[24]), backend_libs__export__MaybeFail_18);
          }
          *backend_libs__export__MaybeSucceed_19 = (MR_String) "\treturn MR_TRUE;\n";
          backend_libs__export__ArgInfoTypes2_44 = backend_libs__export__ArgInfoTypes0_33;
        }
        break;
    }
    {
      backend_libs__export__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_74, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_74, 1) = ((MR_Box) (backend_libs__export__get_export_info_for_lang_c_10_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__export__Var_74, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_11));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &backend_libs__export_scalar_common_1[0], backend_libs__export__Var_74, backend_libs__export__ArgInfoTypes2_44, backend_libs__export__ArgInfoTypes_20);
    }
  }
}

void MR_CALL 
backend_libs__export__convert_type_from_mercury_4_p_0(
  MR_Word backend_libs__export__SourceArgLoc_5,
  MR_String backend_libs__export__Rval_6,
  MR_Word backend_libs__export__Type_7,
  MR_String * backend_libs__export__ConvertedRval_8)
{
  switch (MR_tag((MR_Word) backend_libs__export__Type_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
      break;
    case (MR_Integer) 2:
      {
        MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_7, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) backend_libs__export__BuiltinType_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(backend_libs__export__BuiltinType_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word backend_libs__export__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 0)));
                  MR_Integer backend_libs__export__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 1)));

                  switch (backend_libs__export__Var_37) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String backend_libs__export__Var_33;

                        {
                          backend_libs__export__Var_33 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_6, (MR_String) ")");
                        }
                        {
                          *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", backend_libs__export__Var_33);
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", backend_libs__export__Rval_6);
                  }
                }
                break;
              case (MR_Integer) 2:
                *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
                break;
            }
            break;
          case (MR_Integer) 1:
            *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
      break;
  }
}

static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
  MR_Box backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2)
{
  {
    MR_bool backend_libs__export__succeeded;

    {
      backend_libs__export__succeeded = backend_libs__export____Unify____exported_enum_tag_rep_0_0(((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2));
    }
    return backend_libs__export__succeeded;
  }
}

static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
  MR_Box * backend_libs__export__wrapper_arg_1,
  MR_Box backend_libs__export__wrapper_arg_2,
  MR_Box backend_libs__export__wrapper_arg_3)
{
  {
    MR_Word backend_libs__export__conv0_HeadVar__1_1;

    {
      backend_libs__export____Compare____exported_enum_tag_rep_0_0(&backend_libs__export__conv0_HeadVar__1_1, ((MR_Word) backend_libs__export__wrapper_arg_2), ((MR_Word) backend_libs__export__wrapper_arg_3));
    }
    *backend_libs__export__wrapper_arg_1 = ((MR_Box) (backend_libs__export__conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0);
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

/* :- end_module backend_libs.export. */
