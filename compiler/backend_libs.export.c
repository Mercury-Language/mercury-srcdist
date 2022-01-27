/*
** Automatically generated from `export.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 148 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;

#line 151 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 154 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 157 "backend_libs.export.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 160 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 163 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 166 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 169 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1];

#line 172 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0;

#line 175 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1];

#line 178 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1;

#line 181 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1];

#line 184 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1];

#line 187 "backend_libs.export.c"
static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0[2];

#line 190 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2];

#line 193 "backend_libs.export.c"
static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2];

#line 196 "backend_libs.export.c"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
#line 199 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 201 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2);

#line 204 "backend_libs.export.c"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
#line 207 "backend_libs.export.c"
  MR_Box * backend_libs__export__wrapper_arg_1,
#line 209 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 211 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_3);

#line 912 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_51_95_95_91_49_93_95_48_4_p_0(
#line 912 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 456 "export.m"
static MR_bool MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_p_0_1(
#line 456 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 456 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1);

#line 363 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_p_0(
#line 363 "export.m"
  MR_Word backend_libs__export__Preds_12,
#line 363 "export.m"
  MR_Word backend_libs__export__PredId_13,
#line 363 "export.m"
  MR_Integer backend_libs__export__ProcId_14,
#line 363 "export.m"
  MR_Word backend_libs__export__ModuleInfo_16,
#line 363 "export.m"
  MR_String * backend_libs__export__HowToDeclareLabel_17,
#line 363 "export.m"
  MR_String * backend_libs__export__C_RetType_18,
#line 363 "export.m"
  MR_String * backend_libs__export__MaybeDeclareRetval_19,
#line 363 "export.m"
  MR_String * backend_libs__export__MaybeFail_20,
#line 363 "export.m"
  MR_String * backend_libs__export__MaybeSucceed_21,
#line 363 "export.m"
  MR_Word * backend_libs__export__ArgInfoTypes_22);

#line 131 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 131 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 131 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 131 "export.m"
  MR_Word backend_libs__export__ModuleInfo_4,
#line 131 "export.m"
  MR_Word * backend_libs__export__HeadVar__5_5);

#line 965 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__965__1_2_p_0(
#line 965 "export.m"
  MR_Integer backend_libs__export__Arity_17,
#line 965 "export.m"
  MR_Integer backend_libs__export__HeadVar__2_65);

#line 278 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__to_c__278__1_2_p_0(
#line 278 "export.m"
  MR_Word backend_libs__export__Lang_12,
#line 278 "export.m"
  MR_Word backend_libs__export__HeadVar__2_35);

#line 908 "export.m"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
#line 908 "export.m"
  MR_Word * backend_libs__export__HeadVar__1_1,
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3);

#line 908 "export.m"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 965 "export.m"
static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0_1(
#line 965 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 924 "export.m"
static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
#line 924 "export.m"
  MR_Word backend_libs__export__TypeCtor_7,
#line 924 "export.m"
  MR_Word backend_libs__export__Mapping_8,
#line 924 "export.m"
  MR_Word backend_libs__export__TagValues_9,
#line 924 "export.m"
  MR_Word backend_libs__export__Ctor_10,
#line 924 "export.m"
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56,
#line 924 "export.m"
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTags_57);

#line 912 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_3_4_p_0(
#line 912 "export.m"
  MR_Word backend_libs__export__HeadVar__1_5,
#line 912 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 899 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_4_p_0_2(
#line 899 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 899 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 899 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 899 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 890 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_4_p_0_1(
#line 890 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 890 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 890 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 890 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 843 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_4_p_0(
#line 843 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 843 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_6);

#line 793 "export.m"
static void MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0(
#line 793 "export.m"
  MR_Word backend_libs__export__Globals_7,
#line 793 "export.m"
  MR_String backend_libs__export__SourceFileName_8,
#line 793 "export.m"
  MR_Word backend_libs__export__MaybeDesiredIsLocal_9,
#line 793 "export.m"
  MR_Word backend_libs__export__DeclCode_10);

#line 768 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_2_3_p_0(
#line 768 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1);

#line 597 "export.m"
static void MR_CALL 
backend_libs__export__arg_loc_to_string_2_p_0(
#line 597 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 597 "export.m"
  MR_String * backend_libs__export__RegName_5);

#line 560 "export.m"
static void MR_CALL 
backend_libs__export__copy_output_args_4_p_0(
#line 560 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 560 "export.m"
  MR_Integer backend_libs__export__Num0_2,
#line 560 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 560 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 526 "export.m"
static void MR_CALL 
backend_libs__export__get_input_args_4_p_0(
#line 526 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 526 "export.m"
  MR_Integer backend_libs__export__Num0_2,
#line 526 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 526 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 482 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_2_5_p_0(
#line 482 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 482 "export.m"
  MR_Integer backend_libs__export__Num0_2,
#line 482 "export.m"
  MR_Word backend_libs__export__NameThem_3,
#line 482 "export.m"
  MR_Word backend_libs__export__ModuleInfo_4,
#line 482 "export.m"
  MR_String * backend_libs__export__HeadVar__5_5);

#line 474 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
#line 474 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 474 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 474 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 474 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 463 "export.m"
static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
#line 463 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 463 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 278 "export.m"
static MR_bool MR_CALL 
backend_libs__export__to_c_4_p_0_1(
#line 278 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 272 "export.m"
static void MR_CALL 
backend_libs__export__to_c_4_p_0(
#line 272 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 272 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 272 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 272 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4);

#line 741 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
#line 741 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 741 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 741 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 741 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 740 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
#line 740 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 740 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 740 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 740 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__export_scalar_common_1[2][3];

static /* final */ const MR_Box backend_libs__export_scalar_common_2[28][2];

static /* final */ const MR_Box backend_libs__export_scalar_common_3[2][7];

static /* final */ const MR_Box backend_libs__export_scalar_common_4[1][1];

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][9];

static /* final */ const MR_Box backend_libs__export_scalar_common_6[3][5];




static /* final */ const MR_Box backend_libs__export_scalar_common_1[2][3] = {
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
};

static /* final */ const MR_Box backend_libs__export_scalar_common_2[28][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
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
    ((MR_Box) ((MR_String) " */\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "}\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) ");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__export__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__export__type_ctor_info_exported_enum_tag_rep_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
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
    ((MR_Box) (&backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0)),
    ((MR_Box) (&backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 761 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0
  }
};

#line 769 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 778 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 787 "backend_libs.export.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 796 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 804 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 813 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 822 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 827 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0 = {
  (MR_String) "ee_tag_rep_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0,
  NULL,
  NULL,
  NULL
};

#line 842 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 847 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1 = {
  (MR_String) "ee_tag_rep_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1,
  NULL,
  NULL,
  NULL
};

#line 862 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0
};

#line 867 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

#line 872 "backend_libs.export.c"
static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1
  }
};

#line 886 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0,
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

#line 892 "backend_libs.export.c"
static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 898 "backend_libs.export.c"
const MR_TypeCtorInfo_Struct backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001)),
  ((MR_Box) (backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001)),
  (MR_String) "backend_libs.export",
  (MR_String) "exported_enum_tag_rep",
  {
    backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0
  },
  {
    backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0
};

#line 919 "backend_libs.export.c"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
#line 922 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 924 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2)
#line 926 "backend_libs.export.c"
{
#line 928 "backend_libs.export.c"
  {
#line 930 "backend_libs.export.c"
    MR_bool backend_libs__export__succeeded;

#line 933 "backend_libs.export.c"
    {
#line 935 "backend_libs.export.c"
      backend_libs__export__succeeded = backend_libs__export____Unify____exported_enum_tag_rep_0_0(((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2));
    }
#line 938 "backend_libs.export.c"
    return backend_libs__export__succeeded;
#line 940 "backend_libs.export.c"
  }
#line 942 "backend_libs.export.c"
}

#line 945 "backend_libs.export.c"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
#line 948 "backend_libs.export.c"
  MR_Box * backend_libs__export__wrapper_arg_1,
#line 950 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 952 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_3)
#line 954 "backend_libs.export.c"
{
#line 956 "backend_libs.export.c"
  {
#line 958 "backend_libs.export.c"
    MR_Word backend_libs__export__conv0_HeadVar__1_1;

#line 961 "backend_libs.export.c"
    {
#line 963 "backend_libs.export.c"
      backend_libs__export____Compare____exported_enum_tag_rep_0_0(&backend_libs__export__conv0_HeadVar__1_1, ((MR_Word) backend_libs__export__wrapper_arg_2), ((MR_Word) backend_libs__export__wrapper_arg_3));
    }
#line 966 "backend_libs.export.c"
    *backend_libs__export__wrapper_arg_1 = ((MR_Box) (backend_libs__export__conv0_HeadVar__1_1));
#line 968 "backend_libs.export.c"
  }
#line 970 "backend_libs.export.c"
}

#line 912 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_51_95_95_91_49_93_95_48_4_p_0(
#line 912 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 912 "export.m"
{
#line 915 "export.m"
  {
#line 915 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 915 "export.m"
    MR_String backend_libs__export__ConstName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 915 "export.m"
    MR_Word backend_libs__export__Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));

#line 919 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Tag_7)) == (MR_mktag((MR_Integer) 0))))
#line 917 "export.m"
      {
#line 917 "export.m"
        MR_Integer backend_libs__export__RawIntTag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__Tag_7, (MR_Integer) 0)));
#line 917 "export.m"
        MR_String backend_libs__export__V_27_27;
#line 917 "export.m"
        MR_String backend_libs__export__V_29_29;
#line 917 "export.m"
        MR_String backend_libs__export__V_30_30;
#line 917 "export.m"
        MR_String backend_libs__export__V_32_32;

#line 1004 "backend_libs.export.c"
        {
#line 1006 "backend_libs.export.c"
          backend_libs__export__V_27_27 = mercury__string__int_to_string_1_f_0(backend_libs__export__RawIntTag_9);
        }
#line 1009 "backend_libs.export.c"
        {
#line 1011 "backend_libs.export.c"
          backend_libs__export__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__export__V_27_27);
        }
#line 1014 "backend_libs.export.c"
        {
#line 1016 "backend_libs.export.c"
          backend_libs__export__V_30_30 = mercury__string__f_43_43_2_f_0(backend_libs__export__ConstName_6, backend_libs__export__V_29_29);
        }
#line 1019 "backend_libs.export.c"
        {
#line 1021 "backend_libs.export.c"
          backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "#define ", backend_libs__export__V_30_30);
        }
#line 1024 "backend_libs.export.c"
        {
#line 1026 "backend_libs.export.c"
          mercury__io__write_string_3_p_0(backend_libs__export__V_32_32);
#line 1028 "backend_libs.export.c"
          return;
        }
#line 917 "export.m"
      }
#line 919 "export.m"
    else
#line 920 "export.m"
      {
#line 920 "export.m"
        MR_String backend_libs__export__RawStrTag_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__Tag_7, (MR_Integer) 0)));
#line 920 "export.m"
        MR_String backend_libs__export__V_34_34;
#line 920 "export.m"
        MR_String backend_libs__export__V_35_35;
#line 920 "export.m"
        MR_String backend_libs__export__V_37_37;

#line 1046 "backend_libs.export.c"
        {
#line 1048 "backend_libs.export.c"
          backend_libs__export__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " ", backend_libs__export__RawStrTag_10);
        }
#line 1051 "backend_libs.export.c"
        {
#line 1053 "backend_libs.export.c"
          backend_libs__export__V_35_35 = mercury__string__f_43_43_2_f_0(backend_libs__export__ConstName_6, backend_libs__export__V_34_34);
        }
#line 1056 "backend_libs.export.c"
        {
#line 1058 "backend_libs.export.c"
          backend_libs__export__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "#define ", backend_libs__export__V_35_35);
        }
#line 1061 "backend_libs.export.c"
        {
#line 1063 "backend_libs.export.c"
          mercury__io__write_string_3_p_0(backend_libs__export__V_37_37);
#line 1065 "backend_libs.export.c"
          return;
        }
#line 920 "export.m"
      }
#line 915 "export.m"
  }
#line 912 "export.m"
}

#line 456 "export.m"
static MR_bool MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_p_0_1(
#line 456 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 456 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1)
#line 456 "export.m"
{
#line 456 "export.m"
  {
#line 456 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 456 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 456 "export.m"
    {
#line 456 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__include_arg_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
#line 456 "export.m"
    return backend_libs__export__succeeded;
#line 456 "export.m"
  }
#line 456 "export.m"
}

#line 363 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_p_0(
#line 363 "export.m"
  MR_Word backend_libs__export__Preds_12,
#line 363 "export.m"
  MR_Word backend_libs__export__PredId_13,
#line 363 "export.m"
  MR_Integer backend_libs__export__ProcId_14,
#line 363 "export.m"
  MR_Word backend_libs__export__ModuleInfo_16,
#line 363 "export.m"
  MR_String * backend_libs__export__HowToDeclareLabel_17,
#line 363 "export.m"
  MR_String * backend_libs__export__C_RetType_18,
#line 363 "export.m"
  MR_String * backend_libs__export__MaybeDeclareRetval_19,
#line 363 "export.m"
  MR_String * backend_libs__export__MaybeFail_20,
#line 363 "export.m"
  MR_String * backend_libs__export__MaybeSucceed_21,
#line 363 "export.m"
  MR_Word * backend_libs__export__ArgInfoTypes_22)
#line 363 "export.m"
{
#line 369 "export.m"
  {
#line 369 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 369 "export.m"
    MR_Word backend_libs__export__PredInfo_23;
#line 369 "export.m"
    MR_Word backend_libs__export__Status_24;
#line 369 "export.m"
    MR_Word backend_libs__export__PredOrFunc_25;
#line 369 "export.m"
    MR_Word backend_libs__export__ProcTable_26;
#line 369 "export.m"
    MR_Word backend_libs__export__ProcInfo_27;
#line 369 "export.m"
    MR_Word backend_libs__export__MaybeArgInfos_28;
#line 369 "export.m"
    MR_Word backend_libs__export__Markers_29;
#line 369 "export.m"
    MR_Word backend_libs__export__ArgTypes_30;
#line 369 "export.m"
    MR_Word backend_libs__export__ArgInfos_32;
#line 369 "export.m"
    MR_Word backend_libs__export__CodeModel_34;
#line 369 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes0_35;
#line 369 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes2_45;
#line 369 "export.m"
    MR_Word backend_libs__export__V_76_76;
#line 370 "export.m"
    MR_Box backend_libs__export__conv0_PredInfo_23;
#line 385 "export.m"
    MR_Box backend_libs__export__conv1_ProcInfo_27;

#line 370 "export.m"
    {
#line 370 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, backend_libs__export__Preds_12, ((MR_Box) (backend_libs__export__PredId_13)), &backend_libs__export__conv0_PredInfo_23);
    }
#line 370 "export.m"
    backend_libs__export__PredInfo_23 = ((MR_Word) backend_libs__export__conv0_PredInfo_23);
#line 371 "export.m"
    {
#line 371 "export.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(backend_libs__export__PredInfo_23, &backend_libs__export__Status_24);
    }
#line 374 "export.m"
    {
#line 374 "export.m"
      backend_libs__export__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(backend_libs__export__ModuleInfo_16, backend_libs__export__PredInfo_23, backend_libs__export__ProcId_14);
    }
#line 375 "export.m"
    if (!(backend_libs__export__succeeded))
#line 376 "export.m"
      {
#line 376 "export.m"
        MR_Word backend_libs__export__V_46_46;

#line 376 "export.m"
        {
#line 376 "export.m"
          backend_libs__export__V_46_46 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(backend_libs__export__Status_24);
        }
#line 376 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__V_46_46 == (MR_Integer) 0);
#line 376 "export.m"
      }
#line 380 "export.m"
    if (backend_libs__export__succeeded)
#line 379 "export.m"
      *backend_libs__export__HowToDeclareLabel_17 = (MR_String) "MR_declare_entry";
#line 380 "export.m"
    else
#line 381 "export.m"
      *backend_libs__export__HowToDeclareLabel_17 = (MR_String) "MR_declare_static";
#line 383 "export.m"
    {
#line 383 "export.m"
      backend_libs__export__PredOrFunc_25 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(backend_libs__export__PredInfo_23);
    }
#line 384 "export.m"
    {
#line 384 "export.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(backend_libs__export__PredInfo_23, &backend_libs__export__ProcTable_26);
    }
#line 385 "export.m"
    {
#line 385 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, backend_libs__export__ProcTable_26, ((MR_Box) (backend_libs__export__ProcId_14)), &backend_libs__export__conv1_ProcInfo_27);
    }
#line 385 "export.m"
    backend_libs__export__ProcInfo_27 = ((MR_Word) backend_libs__export__conv1_ProcInfo_27);
#line 386 "export.m"
    {
#line 386 "export.m"
      hlds__hlds_pred__proc_info_maybe_arg_info_2_p_0(backend_libs__export__ProcInfo_27, &backend_libs__export__MaybeArgInfos_28);
    }
#line 387 "export.m"
    {
#line 387 "export.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(backend_libs__export__PredInfo_23, &backend_libs__export__Markers_29);
    }
#line 388 "export.m"
    {
#line 388 "export.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(backend_libs__export__PredInfo_23, &backend_libs__export__ArgTypes_30);
    }
#line 392 "export.m"
    if ((backend_libs__export__MaybeArgInfos_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "export.m"
      {
#line 393 "export.m"
        MR_Word backend_libs__export__NewProcInfo_33;

#line 394 "export.m"
        {
#line 394 "export.m"
          hlds__arg_info__generate_proc_arg_info_5_p_0(backend_libs__export__Markers_29, backend_libs__export__ArgTypes_30, backend_libs__export__ModuleInfo_16, backend_libs__export__ProcInfo_27, &backend_libs__export__NewProcInfo_33);
        }
#line 396 "export.m"
        {
#line 396 "export.m"
          hlds__hlds_pred__proc_info_arg_info_2_p_0(backend_libs__export__NewProcInfo_33, &backend_libs__export__ArgInfos_32);
        }
#line 393 "export.m"
      }
#line 392 "export.m"
    else
#line 390 "export.m"
      backend_libs__export__ArgInfos_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeArgInfos_28, (MR_Integer) 0)));
#line 398 "export.m"
    {
#line 398 "export.m"
      backend_libs__export__CodeModel_34 = hlds__code_model__proc_info_interface_code_model_1_f_0(backend_libs__export__ProcInfo_27);
    }
#line 399 "export.m"
    {
#line 399 "export.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__export__ArgInfos_32, backend_libs__export__ArgTypes_30, &backend_libs__export__ArgInfoTypes0_35);
    }
#line 437 "export.m"
    if ((backend_libs__export__CodeModel_34 == (MR_Integer) 0))
#line 430 "export.m"
      {
#line 430 "export.m"
        MR_Word backend_libs__export__ArgInfoTypes1_36;
#line 430 "export.m"
        MR_Word backend_libs__export__RetArgLoc_37;
#line 430 "export.m"
        MR_Word backend_libs__export__RetType_39;
#line 406 "export.m"
        MR_Word backend_libs__export__TypeInfo_83_83;
#line 406 "export.m"
        MR_Word backend_libs__export__RetArgMode_38;
#line 406 "export.m"
        MR_Word backend_libs__export__V_59_59;
#line 406 "export.m"
        MR_Word backend_libs__export__V_60_60;
#line 406 "export.m"
        MR_Word backend_libs__export__V_61_61;
#line 407 "export.m"
        MR_Box backend_libs__export__conv2_V_59_59;

#line 406 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__PredOrFunc_25 == (MR_Integer) 1);
#line 406 "export.m"
        if (backend_libs__export__succeeded)
#line 406 "export.m"
          {
#line 1298 "backend_libs.export.c"
            backend_libs__export__TypeInfo_83_83 = (MR_Word) &backend_libs__export_scalar_common_1[0];
#line 407 "export.m"
            {
#line 407 "export.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(backend_libs__export__TypeInfo_83_83, backend_libs__export__ArgInfoTypes0_35, &backend_libs__export__ArgInfoTypes1_36, &backend_libs__export__conv2_V_59_59);
            }
#line 407 "export.m"
            backend_libs__export__V_59_59 = ((MR_Word) backend_libs__export__conv2_V_59_59);
#line 408 "export.m"
            backend_libs__export__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_59_59, (MR_Integer) 0)));
#line 408 "export.m"
            backend_libs__export__RetType_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_59_59, (MR_Integer) 1)));
#line 408 "export.m"
            backend_libs__export__RetArgLoc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_60_60, (MR_Integer) 0)));
#line 408 "export.m"
            backend_libs__export__RetArgMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_60_60, (MR_Integer) 1)));
#line 409 "export.m"
            backend_libs__export__succeeded = (backend_libs__export__RetArgMode_38 == (MR_Integer) 1);
#line 406 "export.m"
            if (backend_libs__export__succeeded)
#line 406 "export.m"
              {
#line 410 "export.m"
                {
#line 410 "export.m"
                  backend_libs__export__V_61_61 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_16, backend_libs__export__RetType_39);
                }
#line 410 "export.m"
                backend_libs__export__succeeded = (backend_libs__export__V_61_61 == (MR_Integer) 1);
#line 406 "export.m"
              }
#line 406 "export.m"
          }
#line 430 "export.m"
        if (backend_libs__export__succeeded)
#line 412 "export.m"
          {
#line 412 "export.m"
            MR_Word backend_libs__export__Export_RetType_40;
#line 412 "export.m"
            MR_String backend_libs__export__RetArgString0_41;
#line 412 "export.m"
            MR_String backend_libs__export__RetArgString_42;
#line 412 "export.m"
            MR_String backend_libs__export__V_64_64;
#line 420 "export.m"
            MR_Word backend_libs__export__V_66_66;
#line 420 "export.m"
            MR_Word backend_libs__export__V_43_43;

#line 412 "export.m"
            {
#line 412 "export.m"
              backend_libs__export__Export_RetType_40 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_16, backend_libs__export__RetType_39);
            }
#line 413 "export.m"
            {
#line 413 "export.m"
              *backend_libs__export__C_RetType_18 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_RetType_40);
            }
#line 414 "export.m"
            {
#line 414 "export.m"
              backend_libs__export__arg_loc_to_string_2_p_0(backend_libs__export__RetArgLoc_37, &backend_libs__export__RetArgString0_41);
            }
#line 415 "export.m"
            {
#line 415 "export.m"
              backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__RetArgLoc_37, backend_libs__export__RetArgString0_41, backend_libs__export__RetType_39, &backend_libs__export__RetArgString_42);
            }
#line 417 "export.m"
            {
#line 417 "export.m"
              backend_libs__export__V_64_64 = mercury__string__f_43_43_2_f_0(*backend_libs__export__C_RetType_18, (MR_String) " return_value;\n");
            }
#line 417 "export.m"
            {
#line 417 "export.m"
              *backend_libs__export__MaybeDeclareRetval_19 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__V_64_64);
            }
#line 420 "export.m"
            {
#line 420 "export.m"
              backend_libs__export__V_66_66 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_RetType_40);
            }
#line 420 "export.m"
            backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 420 "export.m"
            if (backend_libs__export__succeeded)
#line 420 "export.m"
              {
#line 420 "export.m"
                backend_libs__export__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_66_66, (MR_Integer) 0)));
#line 421 "export.m"
                {
#line 421 "export.m"
                  MR_String backend_libs__export__V_68_68;
#line 421 "export.m"
                  MR_String backend_libs__export__V_69_69;
#line 421 "export.m"
                  MR_String backend_libs__export__V_71_71;

#line 423 "export.m"
                  {
#line 423 "export.m"
                    backend_libs__export__V_71_71 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_42, (MR_String) ", return_value);\n");
                  }
#line 422 "export.m"
                  {
#line 422 "export.m"
                    backend_libs__export__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_71_71);
                  }
#line 422 "export.m"
                  {
#line 422 "export.m"
                    backend_libs__export__V_68_68 = mercury__string__f_43_43_2_f_0(*backend_libs__export__C_RetType_18, backend_libs__export__V_69_69);
                  }
#line 422 "export.m"
                  {
#line 422 "export.m"
                    *backend_libs__export__MaybeFail_20 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", backend_libs__export__V_68_68);
                  }
#line 421 "export.m"
                }
#line 420 "export.m"
              }
#line 420 "export.m"
            else
#line 425 "export.m"
              {
#line 425 "export.m"
                MR_String backend_libs__export__V_74_74;

#line 425 "export.m"
                {
#line 425 "export.m"
                  backend_libs__export__V_74_74 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_42, (MR_String) ";\n");
                }
#line 425 "export.m"
                {
#line 425 "export.m"
                  *backend_libs__export__MaybeFail_20 = mercury__string__f_43_43_2_f_0((MR_String) "\treturn_value = ", backend_libs__export__V_74_74);
                }
#line 425 "export.m"
              }
#line 428 "export.m"
            *backend_libs__export__MaybeSucceed_21 = (MR_String) "\treturn return_value;\n";
#line 429 "export.m"
            backend_libs__export__ArgInfoTypes2_45 = backend_libs__export__ArgInfoTypes1_36;
#line 412 "export.m"
          }
#line 430 "export.m"
        else
#line 431 "export.m"
          {
#line 431 "export.m"
            *backend_libs__export__C_RetType_18 = (MR_String) "void";
#line 432 "export.m"
            *backend_libs__export__MaybeDeclareRetval_19 = (MR_String) "";
#line 433 "export.m"
            *backend_libs__export__MaybeFail_20 = (MR_String) "";
#line 434 "export.m"
            *backend_libs__export__MaybeSucceed_21 = (MR_String) "";
#line 435 "export.m"
            backend_libs__export__ArgInfoTypes2_45 = backend_libs__export__ArgInfoTypes0_35;
#line 431 "export.m"
          }
#line 430 "export.m"
      }
#line 437 "export.m"
    else
#line 437 "export.m"
      if ((backend_libs__export__CodeModel_34 == (MR_Integer) 2))
#line 453 "export.m"
        {
#line 454 "export.m"
          {
#line 454 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_export_info_for_lang_c\'/11", (MR_String) "Attempt to export model_non procedure.");
#line 454 "export.m"
            return;
          }
#line 453 "export.m"
        }
#line 437 "export.m"
      else
#line 438 "export.m"
        {
#line 443 "export.m"
          *backend_libs__export__C_RetType_18 = (MR_String) "MR_bool";
#line 444 "export.m"
          *backend_libs__export__MaybeDeclareRetval_19 = (MR_String) "";
#line 445 "export.m"
          {
#line 445 "export.m"
            mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[24]), backend_libs__export__MaybeFail_20);
          }
#line 450 "export.m"
          *backend_libs__export__MaybeSucceed_21 = (MR_String) "\treturn MR_TRUE;\n";
#line 451 "export.m"
          backend_libs__export__ArgInfoTypes2_45 = backend_libs__export__ArgInfoTypes0_35;
#line 438 "export.m"
        }
#line 456 "export.m"
    {
#line 456 "export.m"
      backend_libs__export__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 456 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_76_76, 0) = ((MR_Box) (&backend_libs__export_scalar_common_6[2]));
#line 456 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_76_76, 1) = ((MR_Box) (backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_p_0_1));
#line 456 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 456 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_76_76, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_16));
#line 456 "export.m"
    }
#line 456 "export.m"
    {
#line 456 "export.m"
      mercury__list__filter_3_p_0((MR_Word) &backend_libs__export_scalar_common_1[0], backend_libs__export__V_76_76, backend_libs__export__ArgInfoTypes2_45, backend_libs__export__ArgInfoTypes_22);
#line 456 "export.m"
      return;
    }
#line 369 "export.m"
  }
#line 363 "export.m"
}

#line 131 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 131 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 131 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 131 "export.m"
  MR_Word backend_libs__export__ModuleInfo_4,
#line 131 "export.m"
  MR_Word * backend_libs__export__HeadVar__5_5)
#line 131 "export.m"
{
#line 135 "export.m"
  {
#line 135 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 135 "export.m"
    if ((backend_libs__export__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "export.m"
      *backend_libs__export__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "export.m"
    else
#line 137 "export.m"
      {
#line 137 "export.m"
        MR_Word backend_libs__export__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "export.m"
        MR_Word backend_libs__export__ExportedProcs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "export.m"
        MR_Word backend_libs__export__Lang_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_10, (MR_Integer) 0)));
#line 137 "export.m"
        MR_Word backend_libs__export__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_10, (MR_Integer) 1)));
#line 137 "export.m"
        MR_Integer backend_libs__export__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__E_10, (MR_Integer) 2)));
#line 137 "export.m"
        MR_String backend_libs__export__ExportName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_10, (MR_Integer) 3)));
#line 137 "export.m"
        MR_String backend_libs__export__RetType_21;
#line 137 "export.m"
        MR_String backend_libs__export__ArgDecls_26;
#line 137 "export.m"
        MR_Word backend_libs__export__ExportDecl_27;
#line 137 "export.m"
        MR_Word backend_libs__export__ExportDecls0_28;
#line 138 "export.m"
        MR_Word backend_libs__export___Ctxt_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_10, (MR_Integer) 4)));

#line 146 "export.m"
        if ((backend_libs__export__Lang_15 == (MR_Integer) 0))
#line 140 "export.m"
          {
#line 140 "export.m"
            MR_Word backend_libs__export__HeadArgInfoTypes_25;
#line 141 "export.m"
            MR_String backend_libs__export___HowToDeclare_20;
#line 141 "export.m"
            MR_String backend_libs__export___DeclareReturnVal_22;
#line 141 "export.m"
            MR_String backend_libs__export___FailureAction_23;
#line 141 "export.m"
            MR_String backend_libs__export___SuccessAction_24;

#line 141 "export.m"
            {
#line 141 "export.m"
              backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__PredId_16, backend_libs__export__ProcId_17, backend_libs__export__ModuleInfo_4, &backend_libs__export___HowToDeclare_20, &backend_libs__export__RetType_21, &backend_libs__export___DeclareReturnVal_22, &backend_libs__export___FailureAction_23, &backend_libs__export___SuccessAction_24, &backend_libs__export__HeadArgInfoTypes_25);
            }
#line 478 "export.m"
            if ((backend_libs__export__HeadArgInfoTypes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "export.m"
              backend_libs__export__ArgDecls_26 = (MR_String) "void";
#line 478 "export.m"
            else
#line 479 "export.m"
              {
#line 480 "export.m"
                {
#line 480 "export.m"
                  backend_libs__export__get_argument_declarations_2_5_p_0(backend_libs__export__HeadArgInfoTypes_25, (MR_Integer) 0, (MR_Integer) 0, backend_libs__export__ModuleInfo_4, &backend_libs__export__ArgDecls_26);
                }
#line 479 "export.m"
              }
#line 140 "export.m"
          }
#line 146 "export.m"
        else
#line 151 "export.m"
          {
#line 152 "export.m"
            {
#line 152 "export.m"
              mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_foreign_export_decls_2\'/5", (MR_String) ":- pragma foreign_export for non-C backends.");
#line 152 "export.m"
              return;
            }
#line 151 "export.m"
          }
#line 154 "export.m"
        {
#line 154 "export.m"
          backend_libs__export__ExportDecl_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 154 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_27, 0) = ((MR_Box) (backend_libs__export__Lang_15));
#line 154 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_27, 1) = ((MR_Box) (backend_libs__export__RetType_21));
#line 154 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_27, 2) = ((MR_Box) (backend_libs__export__ExportName_18));
#line 154 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__ExportDecl_27, 3) = ((MR_Box) (backend_libs__export__ArgDecls_26));
#line 154 "export.m"
        }
#line 155 "export.m"
        {
#line 155 "export.m"
          backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__ExportedProcs_11, backend_libs__export__ModuleInfo_4, &backend_libs__export__ExportDecls0_28);
        }
#line 157 "export.m"
        {
#line 157 "export.m"
          MR_Word base;
#line 157 "export.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "export.m"
          *backend_libs__export__HeadVar__5_5 = base;
#line 157 "export.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__ExportDecl_27));
#line 157 "export.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__ExportDecls0_28));
#line 157 "export.m"
        }
#line 137 "export.m"
      }
#line 135 "export.m"
  }
#line 131 "export.m"
}

#line 965 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__965__1_2_p_0(
#line 965 "export.m"
  MR_Integer backend_libs__export__Arity_17,
#line 965 "export.m"
  MR_Integer backend_libs__export__HeadVar__2_65)
#line 965 "export.m"
{
#line 965 "export.m"
  {
#line 965 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Arity_17 == backend_libs__export__HeadVar__2_65);

#line 965 "export.m"
    return backend_libs__export__succeeded;
#line 965 "export.m"
  }
#line 965 "export.m"
}

#line 278 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__to_c__278__1_2_p_0(
#line 278 "export.m"
  MR_Word backend_libs__export__Lang_12,
#line 278 "export.m"
  MR_Word backend_libs__export__HeadVar__2_35)
#line 278 "export.m"
{
#line 278 "export.m"
  {
#line 278 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_12 == backend_libs__export__HeadVar__2_35);

#line 278 "export.m"
    return backend_libs__export__succeeded;
#line 278 "export.m"
  }
#line 278 "export.m"
}

#line 908 "export.m"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
#line 908 "export.m"
  MR_Word * backend_libs__export__HeadVar__1_1,
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3)
#line 908 "export.m"
{
#line 908 "export.m"
  {
#line 908 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 908 "export.m"
    MR_Integer backend_libs__export__CastX_12 = (MR_Integer) backend_libs__export__HeadVar__2_2;
#line 908 "export.m"
    MR_Integer backend_libs__export__CastY_13 = (MR_Integer) backend_libs__export__HeadVar__3_3;

#line 908 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__CastX_12 == backend_libs__export__CastY_13);
#line 908 "export.m"
    if (backend_libs__export__succeeded)
#line 1733 "backend_libs.export.c"
      *backend_libs__export__HeadVar__1_1 = (MR_Integer) 0;
#line 908 "export.m"
    else
#line 908 "export.m"
      if (((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 908 "export.m"
        {
#line 908 "export.m"
          MR_Integer backend_libs__export__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

#line 908 "export.m"
          if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 908 "export.m"
            {
#line 908 "export.m"
              MR_Integer backend_libs__export__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

#line 908 "export.m"
              {
#line 908 "export.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__V_16_16, backend_libs__export__V_5_5);
#line 908 "export.m"
                return;
              }
#line 908 "export.m"
            }
#line 908 "export.m"
          else
#line 1762 "backend_libs.export.c"
            *backend_libs__export__HeadVar__1_1 = (MR_Integer) 1;
#line 908 "export.m"
        }
#line 908 "export.m"
      else
#line 908 "export.m"
        {
#line 908 "export.m"
          MR_String backend_libs__export__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

#line 908 "export.m"
          if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1775 "backend_libs.export.c"
            *backend_libs__export__HeadVar__1_1 = (MR_Integer) 2;
#line 908 "export.m"
          else
#line 908 "export.m"
            {
#line 908 "export.m"
              MR_String backend_libs__export__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

#line 908 "export.m"
              {
#line 908 "export.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__V_17_17, backend_libs__export__V_11_11);
#line 908 "export.m"
                return;
              }
#line 908 "export.m"
            }
#line 908 "export.m"
        }
#line 908 "export.m"
  }
#line 908 "export.m"
}

#line 908 "export.m"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 908 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 908 "export.m"
{
#line 908 "export.m"
  {
#line 908 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 908 "export.m"
    MR_Integer backend_libs__export__CastX_7 = (MR_Integer) backend_libs__export__HeadVar__1_1;
#line 908 "export.m"
    MR_Integer backend_libs__export__CastY_8 = (MR_Integer) backend_libs__export__HeadVar__2_2;

#line 908 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__CastX_7 == backend_libs__export__CastY_8);
#line 908 "export.m"
    if (backend_libs__export__succeeded)
#line 908 "export.m"
      backend_libs__export__succeeded = MR_TRUE;
#line 908 "export.m"
    else
#line 908 "export.m"
      if (((MR_tag((MR_Word) backend_libs__export__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 908 "export.m"
        {
#line 908 "export.m"
          MR_Integer backend_libs__export__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 908 "export.m"
          MR_Integer backend_libs__export__V_4_4;

#line 908 "export.m"
          backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 908 "export.m"
          if (backend_libs__export__succeeded)
#line 908 "export.m"
            {
#line 908 "export.m"
              backend_libs__export__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 1843 "backend_libs.export.c"
              backend_libs__export__succeeded = (backend_libs__export__V_3_3 == backend_libs__export__V_4_4);
#line 908 "export.m"
            }
#line 908 "export.m"
        }
#line 908 "export.m"
      else
#line 908 "export.m"
        {
#line 908 "export.m"
          MR_String backend_libs__export__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 908 "export.m"
          MR_String backend_libs__export__V_6_6;

#line 908 "export.m"
          backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 908 "export.m"
          if (backend_libs__export__succeeded)
#line 908 "export.m"
            {
#line 908 "export.m"
              backend_libs__export__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 1866 "backend_libs.export.c"
              backend_libs__export__succeeded = (strcmp(backend_libs__export__V_5_5, backend_libs__export__V_6_6) == 0);
#line 908 "export.m"
            }
#line 908 "export.m"
        }
#line 908 "export.m"
    return backend_libs__export__succeeded;
#line 908 "export.m"
  }
#line 908 "export.m"
}

#line 965 "export.m"
static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0_1(
#line 965 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 965 "export.m"
{
#line 965 "export.m"
  {
#line 965 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 965 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 965 "export.m"
    {
#line 965 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__965__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 965 "export.m"
    return backend_libs__export__succeeded;
#line 965 "export.m"
  }
#line 965 "export.m"
}

#line 924 "export.m"
static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
#line 924 "export.m"
  MR_Word backend_libs__export__TypeCtor_7,
#line 924 "export.m"
  MR_Word backend_libs__export__Mapping_8,
#line 924 "export.m"
  MR_Word backend_libs__export__TagValues_9,
#line 924 "export.m"
  MR_Word backend_libs__export__Ctor_10,
#line 924 "export.m"
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56,
#line 924 "export.m"
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTags_57)
#line 924 "export.m"
{
#line 930 "export.m"
  {
#line 930 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 930 "export.m"
    MR_Word backend_libs__export__QualifiedCtorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 2)));
#line 930 "export.m"
    MR_Word backend_libs__export__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 3)));
#line 930 "export.m"
    MR_Integer backend_libs__export__Arity_17;
#line 930 "export.m"
    MR_Word backend_libs__export__ConsId_18;
#line 930 "export.m"
    MR_Word backend_libs__export__TagVal_19;
#line 930 "export.m"
    MR_Word backend_libs__export__Tag_21;
#line 930 "export.m"
    MR_Word backend_libs__export__UnqualifiedCtorName_54;
#line 930 "export.m"
    MR_String backend_libs__export__ForeignName_55;
#line 930 "export.m"
    MR_Word backend_libs__export__V_61_61;
#line 930 "export.m"
    MR_String backend_libs__export__V_66_66;
#line 930 "export.m"
    MR_Word backend_libs__export__V_67_67;
#line 931 "export.m"
    MR_Word backend_libs__export__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 0)));
#line 931 "export.m"
    MR_Word backend_libs__export__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 1)));
#line 931 "export.m"
    MR_Word backend_libs__export__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 4)));
#line 934 "export.m"
    MR_Box backend_libs__export__conv0_TagVal_19;
#line 967 "export.m"
    MR_Box backend_libs__export__conv1_ForeignName_55;

#line 932 "export.m"
    {
#line 932 "export.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__export__Args_15, &backend_libs__export__Arity_17);
    }
#line 933 "export.m"
    {
#line 933 "export.m"
      backend_libs__export__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 933 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 933 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 1) = ((MR_Box) (backend_libs__export__QualifiedCtorName_14));
#line 933 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 2) = ((MR_Box) (backend_libs__export__Arity_17));
#line 933 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 3) = ((MR_Box) (backend_libs__export__TypeCtor_7));
#line 933 "export.m"
    }
#line 934 "export.m"
    {
#line 934 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__export__TagValues_9, ((MR_Box) (backend_libs__export__ConsId_18)), &backend_libs__export__conv0_TagVal_19);
    }
#line 934 "export.m"
    backend_libs__export__TagVal_19 = ((MR_Word) backend_libs__export__conv0_TagVal_19);
#line 938 "export.m"
    if (((((MR_tag((MR_Word) backend_libs__export__TagVal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 939 "export.m"
      {
#line 939 "export.m"
        MR_String backend_libs__export__ForeignTag_23 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 2)));
#line 939 "export.m"
        MR_Word backend_libs__export___ForeignLang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 1)));

#line 940 "export.m"
        {
#line 940 "export.m"
          backend_libs__export__Tag_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 940 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__Tag_21, 0) = ((MR_Box) (backend_libs__export__ForeignTag_23));
#line 940 "export.m"
        }
#line 939 "export.m"
      }
#line 938 "export.m"
    else
#line 938 "export.m"
      if (((((MR_tag((MR_Word) backend_libs__export__TagVal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 936 "export.m"
        {
#line 936 "export.m"
          MR_Integer backend_libs__export__IntTag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 1)));

#line 937 "export.m"
          {
#line 937 "export.m"
            backend_libs__export__Tag_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 937 "export.m"
            MR_hl_field(MR_mktag(0), backend_libs__export__Tag_21, 0) = ((MR_Box) (backend_libs__export__IntTag_20));
#line 937 "export.m"
          }
#line 936 "export.m"
        }
#line 938 "export.m"
      else
#line 961 "export.m"
        {
#line 962 "export.m"
          {
#line 962 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
#line 962 "export.m"
            return;
          }
#line 961 "export.m"
        }
#line 965 "export.m"
    {
#line 965 "export.m"
      backend_libs__export__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 965 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 0) = ((MR_Box) (&backend_libs__export_scalar_common_6[1]));
#line 965 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 1) = ((MR_Box) (backend_libs__export__foreign_const_name_and_tag_6_p_0_1));
#line 965 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 965 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 3) = ((MR_Box) (backend_libs__export__Arity_17));
#line 965 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 4) = ((MR_Box) ((MR_Integer) 0));
#line 965 "export.m"
    }
#line 965 "export.m"
    {
#line 965 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_61_61, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant arity != 0");
    }
#line 966 "export.m"
    {
#line 966 "export.m"
      backend_libs__export__V_66_66 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__export__QualifiedCtorName_14);
    }
#line 966 "export.m"
    {
#line 966 "export.m"
      backend_libs__export__UnqualifiedCtorName_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 966 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__UnqualifiedCtorName_54, 0) = ((MR_Box) (backend_libs__export__V_66_66));
#line 966 "export.m"
    }
#line 967 "export.m"
    {
#line 967 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__export__Mapping_8, ((MR_Box) (backend_libs__export__UnqualifiedCtorName_54)), &backend_libs__export__conv1_ForeignName_55);
    }
#line 967 "export.m"
    backend_libs__export__ForeignName_55 = ((MR_String) backend_libs__export__conv1_ForeignName_55);
#line 968 "export.m"
    {
#line 968 "export.m"
      backend_libs__export__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 968 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_67_67, 0) = ((MR_Box) (backend_libs__export__ForeignName_55));
#line 968 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_67_67, 1) = ((MR_Box) (backend_libs__export__Tag_21));
#line 968 "export.m"
    }
#line 968 "export.m"
    {
#line 968 "export.m"
      mercury__list__cons_3_p_0((MR_Word) &backend_libs__export_scalar_common_1[1], ((MR_Box) (backend_libs__export__V_67_67)), backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56, backend_libs__export__STATE_VARIABLE_NamesAndTags_57);
#line 968 "export.m"
      return;
    }
#line 930 "export.m"
  }
#line 924 "export.m"
}

#line 912 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_3_4_p_0(
#line 912 "export.m"
  MR_Word backend_libs__export__HeadVar__1_5,
#line 912 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 912 "export.m"
{
#line 915 "export.m"
  {
#line 915 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 915 "export.m"
    {
#line 915 "export.m"
      backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_51_95_95_91_49_93_95_48_4_p_0(backend_libs__export__HeadVar__2_2);
#line 915 "export.m"
      return;
    }
#line 915 "export.m"
  }
#line 912 "export.m"
}

#line 899 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_4_p_0_2(
#line 899 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 899 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 899 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 899 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 899 "export.m"
{
#line 899 "export.m"
  {
#line 899 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 899 "export.m"
    {
#line 899 "export.m"
      backend_libs__export__output_exported_enum_3_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 899 "export.m"
      return;
    }
#line 899 "export.m"
  }
#line 899 "export.m"
}

#line 890 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_4_p_0_1(
#line 890 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 890 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 890 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 890 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 890 "export.m"
{
#line 890 "export.m"
  {
#line 890 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;
#line 890 "export.m"
    MR_Word backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57;

#line 890 "export.m"
    {
#line 890 "export.m"
      backend_libs__export__foreign_const_name_and_tag_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2), &backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57);
    }
#line 890 "export.m"
    *backend_libs__export__wrapper_arg_3 = ((MR_Box) (backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57));
#line 890 "export.m"
  }
#line 890 "export.m"
}

#line 843 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_4_p_0(
#line 843 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 843 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_6)
#line 843 "export.m"
{
#line 846 "export.m"
  {
#line 846 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 846 "export.m"
    MR_Word backend_libs__export__Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 0)));
#line 846 "export.m"
    MR_Word backend_libs__export__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 1)));
#line 846 "export.m"
    MR_Word backend_libs__export__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 2)));
#line 846 "export.m"
    MR_Word backend_libs__export__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 3)));

#line 851 "export.m"
    if ((backend_libs__export__Lang_8 == (MR_Integer) 0))
#line 862 "export.m"
      {
#line 862 "export.m"
        MR_Word backend_libs__export__TypeTable_24;
#line 862 "export.m"
        MR_Word backend_libs__export__TypeDefn_25;
#line 862 "export.m"
        MR_Word backend_libs__export__TypeBody_26;

#line 865 "export.m"
        {
#line 865 "export.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__export__ModuleInfo_5, &backend_libs__export__TypeTable_24);
        }
#line 866 "export.m"
        {
#line 866 "export.m"
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__export__TypeTable_24, backend_libs__export__V_10_10, &backend_libs__export__TypeDefn_25);
        }
#line 867 "export.m"
        {
#line 867 "export.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__export__TypeDefn_25, &backend_libs__export__TypeBody_26);
        }
#line 875 "export.m"
        if (((MR_tag((MR_Word) backend_libs__export__TypeBody_26)) == (MR_mktag((MR_Integer) 1))))
#line 878 "export.m"
          {
#line 878 "export.m"
            MR_Word backend_libs__export__Ctors_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 0)));
#line 878 "export.m"
            MR_Word backend_libs__export__TagValues_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 1)));
#line 878 "export.m"
            MR_Word backend_libs__export__DuTypeKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 3)));
#line 876 "export.m"
            MR_Word backend_libs__export___CheaperTagTest_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 2)));
#line 876 "export.m"
            MR_Word backend_libs__export___MaybeUserEq_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 4)));
#line 876 "export.m"
            MR_Word backend_libs__export___MaybeDirectArgCtors_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 5)));
#line 876 "export.m"
            MR_Word backend_libs__export___ReservedTag_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 876 "export.m"
            MR_Word backend_libs__export___ReservedAddr_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 876 "export.m"
            MR_Word backend_libs__export___IsForeignType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_26, (MR_Integer) 7)));

#line 884 "export.m"
            if ((((backend_libs__export__DuTypeKind_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((MR_tag((MR_Word) backend_libs__export__DuTypeKind_35)) == (MR_mktag((MR_Integer) 2))))))
#line 882 "export.m"
              {
#line 883 "export.m"
                {
#line 883 "export.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_enum_2\'/4", (MR_String) "d.u. is not an enumeration.");
#line 883 "export.m"
                  return;
                }
#line 882 "export.m"
              }
#line 884 "export.m"
            else
#line 888 "export.m"
              {
#line 888 "export.m"
                MR_Word backend_libs__export__TypeInfo_59_69;
#line 888 "export.m"
                MR_Word backend_libs__export__ForeignNamesAndTags0_45;
#line 888 "export.m"
                MR_Word backend_libs__export__ForeignNamesAndTags_46;
#line 888 "export.m"
                MR_Word backend_libs__export__Globals_47;
#line 888 "export.m"
                MR_String backend_libs__export__File_48;
#line 888 "export.m"
                MR_Integer backend_libs__export__Line_49;
#line 888 "export.m"
                MR_Word backend_libs__export__V_50_50;
#line 888 "export.m"
                MR_Word backend_libs__export__V_54_54;
#line 889 "export.m"
                MR_Box backend_libs__export__conv1_ForeignNamesAndTags0_45;

#line 890 "export.m"
                {
#line 890 "export.m"
                  backend_libs__export__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 890 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_50_50, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[1]));
#line 890 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_50_50, 1) = ((MR_Box) (backend_libs__export__output_exported_enum_4_p_0_1));
#line 890 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 890 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_50_50, 3) = ((MR_Box) (backend_libs__export__V_10_10));
#line 890 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_50_50, 4) = ((MR_Box) (backend_libs__export__V_11_11));
#line 890 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_50_50, 5) = ((MR_Box) (backend_libs__export__TagValues_33));
#line 890 "export.m"
                }
#line 889 "export.m"
                {
#line 889 "export.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &backend_libs__export_scalar_common_2[0], backend_libs__export__V_50_50, backend_libs__export__Ctors_32, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__export__conv1_ForeignNamesAndTags0_45);
                }
#line 889 "export.m"
                backend_libs__export__ForeignNamesAndTags0_45 = ((MR_Word) backend_libs__export__conv1_ForeignNamesAndTags0_45);
#line 2319 "backend_libs.export.c"
                backend_libs__export__TypeInfo_59_69 = (MR_Word) &backend_libs__export_scalar_common_1[1];
#line 893 "export.m"
                {
#line 893 "export.m"
                  mercury__list__reverse_2_p_0(backend_libs__export__TypeInfo_59_69, backend_libs__export__ForeignNamesAndTags0_45, &backend_libs__export__ForeignNamesAndTags_46);
                }
#line 894 "export.m"
                {
#line 894 "export.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_5, &backend_libs__export__Globals_47);
                }
#line 895 "export.m"
                {
#line 895 "export.m"
                  mercury__term__context_file_2_p_0(backend_libs__export__V_9_9, &backend_libs__export__File_48);
                }
#line 896 "export.m"
                {
#line 896 "export.m"
                  mercury__term__context_line_2_p_0(backend_libs__export__V_9_9, &backend_libs__export__Line_49);
                }
#line 897 "export.m"
                {
#line 897 "export.m"
                  backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_47, backend_libs__export__File_48, backend_libs__export__Line_49);
                }
#line 899 "export.m"
                {
#line 899 "export.m"
                  backend_libs__export__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 899 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_54_54, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[1]));
#line 899 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_54_54, 1) = ((MR_Box) (backend_libs__export__output_exported_enum_4_p_0_2));
#line 899 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 899 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_54_54, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_5));
#line 899 "export.m"
                }
#line 898 "export.m"
                {
#line 898 "export.m"
                  mercury__io__write_list_5_p_0(backend_libs__export__TypeInfo_59_69, backend_libs__export__ForeignNamesAndTags_46, (MR_String) "\n", backend_libs__export__V_54_54);
                }
#line 900 "export.m"
                {
#line 900 "export.m"
                  mercury__io__nl_2_p_0();
                }
#line 901 "export.m"
                {
#line 901 "export.m"
                  backend_libs__c_util__reset_line_num_3_p_0(backend_libs__export__Globals_47);
#line 901 "export.m"
                  return;
                }
#line 888 "export.m"
              }
#line 878 "export.m"
          }
#line 875 "export.m"
        else
#line 873 "export.m"
          {
#line 874 "export.m"
            {
#line 874 "export.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_enum_2\'/4", (MR_String) "invalid type for foreign_export_enum");
#line 874 "export.m"
              return;
            }
#line 873 "export.m"
          }
#line 862 "export.m"
      }
#line 851 "export.m"
    else
#line 851 "export.m"
      if ((backend_libs__export__Lang_8 == (MR_Integer) 1))
#line 852 "export.m"
        {
#line 852 "export.m"
        }
#line 851 "export.m"
      else
#line 851 "export.m"
        if ((backend_libs__export__Lang_8 == (MR_Integer) 4))
#line 855 "export.m"
          {
#line 855 "export.m"
          }
#line 851 "export.m"
        else
#line 851 "export.m"
          if ((backend_libs__export__Lang_8 == (MR_Integer) 3))
#line 854 "export.m"
            {
#line 854 "export.m"
            }
#line 851 "export.m"
          else
#line 853 "export.m"
            {
#line 853 "export.m"
            }
#line 846 "export.m"
  }
#line 843 "export.m"
}

#line 793 "export.m"
static void MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0(
#line 793 "export.m"
  MR_Word backend_libs__export__Globals_7,
#line 793 "export.m"
  MR_String backend_libs__export__SourceFileName_8,
#line 793 "export.m"
  MR_Word backend_libs__export__MaybeDesiredIsLocal_9,
#line 793 "export.m"
  MR_Word backend_libs__export__DeclCode_10)
#line 793 "export.m"
{
#line 798 "export.m"
  {
#line 798 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 798 "export.m"
    MR_Word backend_libs__export__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 0)));
#line 798 "export.m"
    MR_Word backend_libs__export__IsLocal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 1)));
#line 798 "export.m"
    MR_Word backend_libs__export__LiteralOrInclude_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 2)));
#line 798 "export.m"
    MR_Word backend_libs__export__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 3)));

#line 801 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__Lang_12 == (MR_Integer) 0);
#line 801 "export.m"
    if (backend_libs__export__succeeded)
#line 804 "export.m"
      {
#line 804 "export.m"
        if ((backend_libs__export__MaybeDesiredIsLocal_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "export.m"
          backend_libs__export__succeeded = MR_TRUE;
#line 804 "export.m"
        else
#line 805 "export.m"
          {
#line 805 "export.m"
            MR_Word backend_libs__export__DesiredIsLocal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeDesiredIsLocal_9, (MR_Integer) 0)));

#line 806 "export.m"
            backend_libs__export__succeeded = (backend_libs__export__DesiredIsLocal_16 == backend_libs__export__IsLocal_13);
#line 805 "export.m"
          }
#line 804 "export.m"
      }
#line 813 "export.m"
    if (backend_libs__export__succeeded)
#line 810 "export.m"
      {
#line 823 "export.m"
        if (((MR_tag((MR_Word) backend_libs__export__LiteralOrInclude_14)) == (MR_mktag((MR_Integer) 1))))
#line 829 "export.m"
          {
#line 829 "export.m"
            MR_String backend_libs__export__IncludeFileName_32 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__LiteralOrInclude_14, (MR_Integer) 0)));
#line 829 "export.m"
            MR_String backend_libs__export__IncludePath_33;

#line 830 "export.m"
            {
#line 830 "export.m"
              parse_tree__file_names__make_include_file_path_3_p_0(backend_libs__export__SourceFileName_8, backend_libs__export__IncludeFileName_32, &backend_libs__export__IncludePath_33);
            }
#line 831 "export.m"
            {
#line 831 "export.m"
              backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_7, backend_libs__export__IncludePath_33, (MR_Integer) 1);
            }
#line 832 "export.m"
            {
#line 832 "export.m"
              libs__file_util__write_include_file_contents_3_p_0(backend_libs__export__IncludePath_33);
            }
#line 829 "export.m"
          }
#line 823 "export.m"
        else
#line 823 "export.m"
          {
#line 823 "export.m"
            MR_String backend_libs__export__Code_29 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__LiteralOrInclude_14, (MR_Integer) 0)));
#line 823 "export.m"
            MR_String backend_libs__export__File_30;
#line 823 "export.m"
            MR_Integer backend_libs__export__Line_31;

#line 824 "export.m"
            {
#line 824 "export.m"
              mercury__term__context_file_2_p_0(backend_libs__export__Context_15, &backend_libs__export__File_30);
            }
#line 825 "export.m"
            {
#line 825 "export.m"
              mercury__term__context_line_2_p_0(backend_libs__export__Context_15, &backend_libs__export__Line_31);
            }
#line 826 "export.m"
            {
#line 826 "export.m"
              backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_7, backend_libs__export__File_30, backend_libs__export__Line_31);
            }
#line 827 "export.m"
            {
#line 827 "export.m"
              mercury__io__write_string_3_p_0(backend_libs__export__Code_29);
            }
#line 823 "export.m"
          }
#line 811 "export.m"
        {
#line 811 "export.m"
          mercury__io__nl_2_p_0();
        }
#line 812 "export.m"
        {
#line 812 "export.m"
          backend_libs__c_util__reset_line_num_3_p_0(backend_libs__export__Globals_7);
#line 812 "export.m"
          return;
        }
#line 810 "export.m"
      }
#line 813 "export.m"
    else
#line 812 "export.m"
      {
#line 812 "export.m"
      }
#line 798 "export.m"
  }
#line 793 "export.m"
}

#line 768 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_2_3_p_0(
#line 768 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1)
#line 768 "export.m"
{
#line 771 "export.m"
  while (MR_TRUE)
#line 771 "export.m"
    {
#line 771 "export.m"
      /* tailcall optimized into a loop */
#line 771 "export.m"
      {
#line 771 "export.m"
        MR_bool backend_libs__export__succeeded;

#line 771 "export.m"
        if ((backend_libs__export__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "export.m"
          {
#line 771 "export.m"
          }
#line 771 "export.m"
        else
#line 772 "export.m"
          {
#line 772 "export.m"
            MR_Word backend_libs__export__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 772 "export.m"
            MR_Word backend_libs__export__ExportedProcs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 1)));
#line 772 "export.m"
            MR_Word backend_libs__export__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 0)));
#line 772 "export.m"
            MR_String backend_libs__export__C_RetType_11 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 1)));
#line 772 "export.m"
            MR_String backend_libs__export__C_Function_12 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 2)));
#line 772 "export.m"
            MR_String backend_libs__export__ArgDecls_13 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 3)));

#line 783 "export.m"
            if ((backend_libs__export__Lang_10 == (MR_Integer) 0))
#line 775 "export.m"
              {
#line 777 "export.m"
                {
#line 777 "export.m"
                  mercury__io__write_string_3_p_0(backend_libs__export__C_RetType_11);
                }
#line 778 "export.m"
                {
#line 778 "export.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 779 "export.m"
                {
#line 779 "export.m"
                  mercury__io__write_string_3_p_0(backend_libs__export__C_Function_12);
                }
#line 780 "export.m"
                {
#line 780 "export.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 781 "export.m"
                {
#line 781 "export.m"
                  mercury__io__write_string_3_p_0(backend_libs__export__ArgDecls_13);
                }
#line 782 "export.m"
                {
#line 782 "export.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
#line 775 "export.m"
              }
#line 783 "export.m"
            else
#line 788 "export.m"
              {
#line 789 "export.m"
                {
#line 789 "export.m"
                  mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.produce_header_file_2\'/3", (MR_String) "foreign languages other than C unimplemented");
#line 789 "export.m"
                  return;
                }
#line 788 "export.m"
              }
#line 791 "export.m"
            /* direct tailcall eliminated */
#line 791 "export.m"
            {
#line 791 "export.m"
              MR_Word backend_libs__export__HeadVar__1__tmp_copy_1 = backend_libs__export__ExportedProcs_8;

#line 791 "export.m"
              backend_libs__export__HeadVar__1_1 = backend_libs__export__HeadVar__1__tmp_copy_1;
#line 791 "export.m"
            }
#line 791 "export.m"
            continue;
#line 772 "export.m"
          }
#line 771 "export.m"
      }
#line 771 "export.m"
      break;
#line 771 "export.m"
    }
#line 768 "export.m"
}

#line 597 "export.m"
static void MR_CALL 
backend_libs__export__arg_loc_to_string_2_p_0(
#line 597 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 597 "export.m"
  MR_String * backend_libs__export__RegName_5)
#line 597 "export.m"
{
#line 599 "export.m"
  {
#line 599 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 599 "export.m"
    MR_Word backend_libs__export__RegType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "export.m"
    MR_Integer backend_libs__export__RegNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__1_1, (MR_Integer) 1)));

#line 609 "export.m"
    if ((backend_libs__export__RegType_3 == (MR_Integer) 1))
#line 610 "export.m"
      {
#line 610 "export.m"
        MR_String backend_libs__export__V_7_7;
#line 610 "export.m"
        MR_String backend_libs__export__V_8_8;

#line 611 "export.m"
        {
#line 611 "export.m"
          backend_libs__export__V_8_8 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_4);
        }
#line 611 "export.m"
        {
#line 611 "export.m"
          backend_libs__export__V_7_7 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_8_8, (MR_String) ")");
        }
#line 611 "export.m"
        {
#line 611 "export.m"
          *backend_libs__export__RegName_5 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_7_7);
        }
#line 610 "export.m"
      }
#line 609 "export.m"
    else
#line 606 "export.m"
      {
#line 604 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__RegNum_4 > (MR_Integer) 32);
#line 606 "export.m"
        if (backend_libs__export__succeeded)
#line 605 "export.m"
          {
#line 605 "export.m"
            MR_String backend_libs__export__V_12_12;
#line 605 "export.m"
            MR_String backend_libs__export__V_13_13;

#line 605 "export.m"
            {
#line 605 "export.m"
              backend_libs__export__V_13_13 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_4);
            }
#line 605 "export.m"
            {
#line 605 "export.m"
              backend_libs__export__V_12_12 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_13_13, (MR_String) ")");
            }
#line 605 "export.m"
            {
#line 605 "export.m"
              *backend_libs__export__RegName_5 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_12_12);
            }
#line 605 "export.m"
          }
#line 606 "export.m"
        else
#line 607 "export.m"
          {
#line 607 "export.m"
            MR_String backend_libs__export__V_16_16;

#line 607 "export.m"
            {
#line 607 "export.m"
              backend_libs__export__V_16_16 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_4);
            }
#line 607 "export.m"
            {
#line 607 "export.m"
              *backend_libs__export__RegName_5 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_16_16);
            }
#line 607 "export.m"
          }
#line 606 "export.m"
      }
#line 599 "export.m"
  }
#line 597 "export.m"
}

#line 560 "export.m"
static void MR_CALL 
backend_libs__export__copy_output_args_4_p_0(
#line 560 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 560 "export.m"
  MR_Integer backend_libs__export__Num0_2,
#line 560 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 560 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 560 "export.m"
{
#line 563 "export.m"
  {
#line 563 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 563 "export.m"
    if ((backend_libs__export__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 563 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
#line 563 "export.m"
    else
#line 564 "export.m"
      {
#line 564 "export.m"
        MR_Word backend_libs__export__AT_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 564 "export.m"
        MR_Word backend_libs__export__ATs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 1)));
#line 564 "export.m"
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_7, (MR_Integer) 0)));
#line 564 "export.m"
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_7, (MR_Integer) 1)));
#line 564 "export.m"
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
#line 564 "export.m"
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
#line 564 "export.m"
        MR_Integer backend_libs__export__Num_16 = (backend_libs__export__Num0_2 + (MR_Integer) 1);
#line 564 "export.m"
        MR_String backend_libs__export__OutputArg_17;
#line 564 "export.m"
        MR_String backend_libs__export__TheRest_25;

#line 571 "export.m"
        if ((backend_libs__export__Mode_15 == (MR_Integer) 0))
#line 570 "export.m"
          backend_libs__export__OutputArg_17 = (MR_String) "";
#line 571 "export.m"
        else
#line 571 "export.m"
          if ((backend_libs__export__Mode_15 == (MR_Integer) 1))
#line 572 "export.m"
            {
#line 572 "export.m"
              MR_String backend_libs__export__NumString_18;
#line 572 "export.m"
              MR_String backend_libs__export__ArgName_19;
#line 572 "export.m"
              MR_String backend_libs__export__ArgLocString0_20;
#line 572 "export.m"
              MR_String backend_libs__export__ArgLocString_21;
#line 572 "export.m"
              MR_Word backend_libs__export__Export_Type_22;
#line 572 "export.m"
              MR_Word backend_libs__export__RegType_49;
#line 572 "export.m"
              MR_Integer backend_libs__export__RegNum_50;
#line 580 "export.m"
              MR_Word backend_libs__export__V_28_28;
#line 580 "export.m"
              MR_Word backend_libs__export__V_23_23;

#line 573 "export.m"
              {
#line 573 "export.m"
                mercury__string__int_to_string_2_p_0(backend_libs__export__Num_16, &backend_libs__export__NumString_18);
              }
#line 574 "export.m"
              {
#line 574 "export.m"
                mercury__string__append_3_p_2((MR_String) "Mercury__argument", backend_libs__export__NumString_18, &backend_libs__export__ArgName_19);
              }
#line 599 "export.m"
              backend_libs__export__RegType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
#line 599 "export.m"
              backend_libs__export__RegNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
#line 609 "export.m"
              if ((backend_libs__export__RegType_49 == (MR_Integer) 1))
#line 610 "export.m"
                {
#line 610 "export.m"
                  MR_String backend_libs__export__V_52_52;
#line 610 "export.m"
                  MR_String backend_libs__export__V_53_53;

#line 611 "export.m"
                  {
#line 611 "export.m"
                    backend_libs__export__V_53_53 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_50);
                  }
#line 611 "export.m"
                  {
#line 611 "export.m"
                    backend_libs__export__V_52_52 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_53_53, (MR_String) ")");
                  }
#line 611 "export.m"
                  {
#line 611 "export.m"
                    backend_libs__export__ArgLocString0_20 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_52_52);
                  }
#line 610 "export.m"
                }
#line 609 "export.m"
              else
#line 606 "export.m"
                {
#line 604 "export.m"
                  backend_libs__export__succeeded = (backend_libs__export__RegNum_50 > (MR_Integer) 32);
#line 606 "export.m"
                  if (backend_libs__export__succeeded)
#line 605 "export.m"
                    {
#line 605 "export.m"
                      MR_String backend_libs__export__V_57_57;
#line 605 "export.m"
                      MR_String backend_libs__export__V_58_58;

#line 605 "export.m"
                      {
#line 605 "export.m"
                        backend_libs__export__V_58_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_50);
                      }
#line 605 "export.m"
                      {
#line 605 "export.m"
                        backend_libs__export__V_57_57 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_58_58, (MR_String) ")");
                      }
#line 605 "export.m"
                      {
#line 605 "export.m"
                        backend_libs__export__ArgLocString0_20 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_57_57);
                      }
#line 605 "export.m"
                    }
#line 606 "export.m"
                  else
#line 607 "export.m"
                    {
#line 607 "export.m"
                      MR_String backend_libs__export__V_61_61;

#line 607 "export.m"
                      {
#line 607 "export.m"
                        backend_libs__export__V_61_61 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_50);
                      }
#line 607 "export.m"
                      {
#line 607 "export.m"
                        backend_libs__export__ArgLocString0_20 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_61_61);
                      }
#line 607 "export.m"
                    }
#line 606 "export.m"
                }
#line 576 "export.m"
              {
#line 576 "export.m"
                backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__ArgLoc_14, backend_libs__export__ArgLocString0_20, backend_libs__export__Type_13, &backend_libs__export__ArgLocString_21);
              }
#line 577 "export.m"
              {
#line 577 "export.m"
                backend_libs__export__Export_Type_22 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Type_13);
              }
#line 580 "export.m"
              {
#line 580 "export.m"
                backend_libs__export__V_28_28 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_Type_22);
              }
#line 580 "export.m"
              backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 580 "export.m"
              if (backend_libs__export__succeeded)
#line 580 "export.m"
                {
#line 580 "export.m"
                  backend_libs__export__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_28_28, (MR_Integer) 0)));
#line 581 "export.m"
                  {
#line 581 "export.m"
                    MR_String backend_libs__export__C_Type_24;
#line 581 "export.m"
                    MR_Word backend_libs__export__V_30_30;
#line 581 "export.m"
                    MR_Word backend_libs__export__V_32_32;
#line 581 "export.m"
                    MR_Word backend_libs__export__V_33_33;
#line 581 "export.m"
                    MR_Word backend_libs__export__V_35_35;
#line 581 "export.m"
                    MR_Word backend_libs__export__V_36_36;
#line 581 "export.m"
                    MR_Word backend_libs__export__V_38_38;

#line 581 "export.m"
                    {
#line 581 "export.m"
                      backend_libs__export__C_Type_24 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_Type_22);
                    }
#line 583 "export.m"
                    {
#line 583 "export.m"
                      backend_libs__export__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 0) = ((MR_Box) (backend_libs__export__ArgName_19));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[27])));
#line 583 "export.m"
                    }
#line 583 "export.m"
                    {
#line 583 "export.m"
                      backend_libs__export__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_36_36, 0) = ((MR_Box) ((MR_String) ", * "));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_36_36, 1) = ((MR_Box) (backend_libs__export__V_38_38));
#line 583 "export.m"
                    }
#line 583 "export.m"
                    {
#line 583 "export.m"
                      backend_libs__export__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 0) = ((MR_Box) (backend_libs__export__ArgLocString_21));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 1) = ((MR_Box) (backend_libs__export__V_36_36));
#line 583 "export.m"
                    }
#line 583 "export.m"
                    {
#line 583 "export.m"
                      backend_libs__export__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_33_33, 0) = ((MR_Box) ((MR_String) ", "));
#line 583 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_33_33, 1) = ((MR_Box) (backend_libs__export__V_35_35));
#line 583 "export.m"
                    }
#line 582 "export.m"
                    {
#line 582 "export.m"
                      backend_libs__export__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_32_32, 0) = ((MR_Box) (backend_libs__export__C_Type_24));
#line 582 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_32_32, 1) = ((MR_Box) (backend_libs__export__V_33_33));
#line 582 "export.m"
                    }
#line 582 "export.m"
                    {
#line 582 "export.m"
                      backend_libs__export__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_30_30, 0) = ((MR_Box) ((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE("));
#line 582 "export.m"
                      MR_hl_field(MR_mktag(1), backend_libs__export__V_30_30, 1) = ((MR_Box) (backend_libs__export__V_32_32));
#line 582 "export.m"
                    }
#line 582 "export.m"
                    {
#line 582 "export.m"
                      mercury__string__append_list_2_p_0(backend_libs__export__V_30_30, &backend_libs__export__OutputArg_17);
                    }
#line 581 "export.m"
                  }
#line 580 "export.m"
                }
#line 580 "export.m"
              else
#line 585 "export.m"
                {
#line 585 "export.m"
                  MR_String backend_libs__export__V_43_43;
#line 585 "export.m"
                  MR_String backend_libs__export__V_44_44;
#line 585 "export.m"
                  MR_String backend_libs__export__V_46_46;

#line 585 "export.m"
                  {
#line 585 "export.m"
                    backend_libs__export__V_46_46 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_21, (MR_String) ";\n");
                  }
#line 585 "export.m"
                  {
#line 585 "export.m"
                    backend_libs__export__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__V_46_46);
                  }
#line 585 "export.m"
                  {
#line 585 "export.m"
                    backend_libs__export__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, backend_libs__export__V_44_44);
                  }
#line 585 "export.m"
                  {
#line 585 "export.m"
                    backend_libs__export__OutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t*", backend_libs__export__V_43_43);
                  }
#line 585 "export.m"
                }
#line 572 "export.m"
            }
#line 571 "export.m"
          else
#line 589 "export.m"
            backend_libs__export__OutputArg_17 = (MR_String) "";
#line 591 "export.m"
        {
#line 591 "export.m"
          backend_libs__export__copy_output_args_4_p_0(backend_libs__export__ATs_8, backend_libs__export__Num_16, backend_libs__export__ModuleInfo_3, &backend_libs__export__TheRest_25);
        }
#line 592 "export.m"
        {
#line 592 "export.m"
          mercury__string__append_3_p_2(backend_libs__export__OutputArg_17, backend_libs__export__TheRest_25, backend_libs__export__HeadVar__4_4);
#line 592 "export.m"
          return;
        }
#line 564 "export.m"
      }
#line 563 "export.m"
  }
#line 560 "export.m"
}

#line 526 "export.m"
static void MR_CALL 
backend_libs__export__get_input_args_4_p_0(
#line 526 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 526 "export.m"
  MR_Integer backend_libs__export__Num0_2,
#line 526 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 526 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 526 "export.m"
{
#line 529 "export.m"
  {
#line 529 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 529 "export.m"
    if ((backend_libs__export__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
#line 529 "export.m"
    else
#line 530 "export.m"
      {
#line 530 "export.m"
        MR_Word backend_libs__export__AT_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "export.m"
        MR_Word backend_libs__export__ATs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 1)));
#line 530 "export.m"
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_7, (MR_Integer) 0)));
#line 530 "export.m"
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_7, (MR_Integer) 1)));
#line 530 "export.m"
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
#line 530 "export.m"
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
#line 530 "export.m"
        MR_Integer backend_libs__export__Num_16 = (backend_libs__export__Num0_2 + (MR_Integer) 1);
#line 530 "export.m"
        MR_String backend_libs__export__InputArg_24;
#line 530 "export.m"
        MR_String backend_libs__export__TheRest_25;

#line 550 "export.m"
        if ((backend_libs__export__Mode_15 == (MR_Integer) 0))
#line 535 "export.m"
          {
#line 535 "export.m"
            MR_String backend_libs__export__NumString_17;
#line 535 "export.m"
            MR_String backend_libs__export__ArgName0_18;
#line 535 "export.m"
            MR_String backend_libs__export__ArgLocString_19;
#line 535 "export.m"
            MR_String backend_libs__export__ArgName_20;
#line 535 "export.m"
            MR_Word backend_libs__export__Export_Type_21;
#line 535 "export.m"
            MR_Word backend_libs__export__RegType_49;
#line 535 "export.m"
            MR_Integer backend_libs__export__RegNum_50;
#line 543 "export.m"
            MR_Word backend_libs__export__V_28_28;
#line 543 "export.m"
            MR_Word backend_libs__export__V_22_22;

#line 536 "export.m"
            {
#line 536 "export.m"
              mercury__string__int_to_string_2_p_0(backend_libs__export__Num_16, &backend_libs__export__NumString_17);
            }
#line 537 "export.m"
            {
#line 537 "export.m"
              backend_libs__export__ArgName0_18 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", backend_libs__export__NumString_17);
            }
#line 599 "export.m"
            backend_libs__export__RegType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
#line 599 "export.m"
            backend_libs__export__RegNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
#line 609 "export.m"
            if ((backend_libs__export__RegType_49 == (MR_Integer) 1))
#line 610 "export.m"
              {
#line 610 "export.m"
                MR_String backend_libs__export__V_52_52;
#line 610 "export.m"
                MR_String backend_libs__export__V_53_53;

#line 611 "export.m"
                {
#line 611 "export.m"
                  backend_libs__export__V_53_53 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_50);
                }
#line 611 "export.m"
                {
#line 611 "export.m"
                  backend_libs__export__V_52_52 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_53_53, (MR_String) ")");
                }
#line 611 "export.m"
                {
#line 611 "export.m"
                  backend_libs__export__ArgLocString_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_52_52);
                }
#line 610 "export.m"
              }
#line 609 "export.m"
            else
#line 606 "export.m"
              {
#line 604 "export.m"
                backend_libs__export__succeeded = (backend_libs__export__RegNum_50 > (MR_Integer) 32);
#line 606 "export.m"
                if (backend_libs__export__succeeded)
#line 605 "export.m"
                  {
#line 605 "export.m"
                    MR_String backend_libs__export__V_57_57;
#line 605 "export.m"
                    MR_String backend_libs__export__V_58_58;

#line 605 "export.m"
                    {
#line 605 "export.m"
                      backend_libs__export__V_58_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_50);
                    }
#line 605 "export.m"
                    {
#line 605 "export.m"
                      backend_libs__export__V_57_57 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_58_58, (MR_String) ")");
                    }
#line 605 "export.m"
                    {
#line 605 "export.m"
                      backend_libs__export__ArgLocString_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_57_57);
                    }
#line 605 "export.m"
                  }
#line 606 "export.m"
                else
#line 607 "export.m"
                  {
#line 607 "export.m"
                    MR_String backend_libs__export__V_61_61;

#line 607 "export.m"
                    {
#line 607 "export.m"
                      backend_libs__export__V_61_61 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_50);
                    }
#line 607 "export.m"
                    {
#line 607 "export.m"
                      backend_libs__export__ArgLocString_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_61_61);
                    }
#line 607 "export.m"
                  }
#line 606 "export.m"
              }
#line 539 "export.m"
            {
#line 539 "export.m"
              backend_libs__export__convert_type_to_mercury_4_p_0(backend_libs__export__ArgName0_18, backend_libs__export__Type_13, backend_libs__export__ArgLoc_14, &backend_libs__export__ArgName_20);
            }
#line 540 "export.m"
            {
#line 540 "export.m"
              backend_libs__export__Export_Type_21 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Type_13);
            }
#line 543 "export.m"
            {
#line 543 "export.m"
              backend_libs__export__V_28_28 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_Type_21);
            }
#line 543 "export.m"
            backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 543 "export.m"
            if (backend_libs__export__succeeded)
#line 543 "export.m"
              {
#line 543 "export.m"
                backend_libs__export__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_28_28, (MR_Integer) 0)));
#line 544 "export.m"
                {
#line 544 "export.m"
                  MR_String backend_libs__export__C_Type_23;
#line 544 "export.m"
                  MR_Word backend_libs__export__V_30_30;
#line 544 "export.m"
                  MR_Word backend_libs__export__V_32_32;
#line 544 "export.m"
                  MR_Word backend_libs__export__V_33_33;
#line 544 "export.m"
                  MR_Word backend_libs__export__V_35_35;
#line 544 "export.m"
                  MR_Word backend_libs__export__V_36_36;
#line 544 "export.m"
                  MR_Word backend_libs__export__V_38_38;

#line 544 "export.m"
                  {
#line 544 "export.m"
                    backend_libs__export__C_Type_23 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_Type_21);
                  }
#line 546 "export.m"
                  {
#line 546 "export.m"
                    backend_libs__export__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 0) = ((MR_Box) (backend_libs__export__ArgLocString_19));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[27])));
#line 546 "export.m"
                  }
#line 546 "export.m"
                  {
#line 546 "export.m"
                    backend_libs__export__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_36_36, 0) = ((MR_Box) ((MR_String) ", "));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_36_36, 1) = ((MR_Box) (backend_libs__export__V_38_38));
#line 546 "export.m"
                  }
#line 546 "export.m"
                  {
#line 546 "export.m"
                    backend_libs__export__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 0) = ((MR_Box) (backend_libs__export__ArgName_20));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 1) = ((MR_Box) (backend_libs__export__V_36_36));
#line 546 "export.m"
                  }
#line 546 "export.m"
                  {
#line 546 "export.m"
                    backend_libs__export__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_33_33, 0) = ((MR_Box) ((MR_String) ", "));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_33_33, 1) = ((MR_Box) (backend_libs__export__V_35_35));
#line 546 "export.m"
                  }
#line 546 "export.m"
                  {
#line 546 "export.m"
                    backend_libs__export__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_32_32, 0) = ((MR_Box) (backend_libs__export__C_Type_23));
#line 546 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_32_32, 1) = ((MR_Box) (backend_libs__export__V_33_33));
#line 546 "export.m"
                  }
#line 545 "export.m"
                  {
#line 545 "export.m"
                    backend_libs__export__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_30_30, 0) = ((MR_Box) ((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE("));
#line 545 "export.m"
                    MR_hl_field(MR_mktag(1), backend_libs__export__V_30_30, 1) = ((MR_Box) (backend_libs__export__V_32_32));
#line 545 "export.m"
                  }
#line 545 "export.m"
                  {
#line 545 "export.m"
                    mercury__string__append_list_2_p_0(backend_libs__export__V_30_30, &backend_libs__export__InputArg_24);
                  }
#line 544 "export.m"
                }
#line 543 "export.m"
              }
#line 543 "export.m"
            else
#line 548 "export.m"
              {
#line 548 "export.m"
                MR_String backend_libs__export__V_43_43;
#line 548 "export.m"
                MR_String backend_libs__export__V_44_44;
#line 548 "export.m"
                MR_String backend_libs__export__V_46_46;

#line 548 "export.m"
                {
#line 548 "export.m"
                  backend_libs__export__V_46_46 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_20, (MR_String) ";\n");
                }
#line 548 "export.m"
                {
#line 548 "export.m"
                  backend_libs__export__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__V_46_46);
                }
#line 548 "export.m"
                {
#line 548 "export.m"
                  backend_libs__export__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_19, backend_libs__export__V_44_44);
                }
#line 548 "export.m"
                {
#line 548 "export.m"
                  backend_libs__export__InputArg_24 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__V_43_43);
                }
#line 548 "export.m"
              }
#line 535 "export.m"
          }
#line 550 "export.m"
        else
#line 550 "export.m"
          if ((backend_libs__export__Mode_15 == (MR_Integer) 1))
#line 552 "export.m"
            backend_libs__export__InputArg_24 = (MR_String) "";
#line 550 "export.m"
          else
#line 555 "export.m"
            backend_libs__export__InputArg_24 = (MR_String) "";
#line 557 "export.m"
        {
#line 557 "export.m"
          backend_libs__export__get_input_args_4_p_0(backend_libs__export__ATs_8, backend_libs__export__Num_16, backend_libs__export__ModuleInfo_3, &backend_libs__export__TheRest_25);
        }
#line 558 "export.m"
        {
#line 558 "export.m"
          *backend_libs__export__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(backend_libs__export__InputArg_24, backend_libs__export__TheRest_25);
        }
#line 530 "export.m"
      }
#line 529 "export.m"
  }
#line 526 "export.m"
}

#line 482 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_2_5_p_0(
#line 482 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 482 "export.m"
  MR_Integer backend_libs__export__Num0_2,
#line 482 "export.m"
  MR_Word backend_libs__export__NameThem_3,
#line 482 "export.m"
  MR_Word backend_libs__export__ModuleInfo_4,
#line 482 "export.m"
  MR_String * backend_libs__export__HeadVar__5_5)
#line 482 "export.m"
{
#line 485 "export.m"
  {
#line 485 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 485 "export.m"
    if ((backend_libs__export__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "export.m"
      *backend_libs__export__HeadVar__5_5 = (MR_String) "";
#line 485 "export.m"
    else
#line 486 "export.m"
      {
#line 486 "export.m"
        MR_Word backend_libs__export__AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 486 "export.m"
        MR_Word backend_libs__export__ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 1)));
#line 486 "export.m"
        MR_Word backend_libs__export__ArgInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 0)));
#line 486 "export.m"
        MR_Word backend_libs__export__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 1)));
#line 486 "export.m"
        MR_Integer backend_libs__export__Num_17 = (backend_libs__export__Num0_2 + (MR_Integer) 1);
#line 486 "export.m"
        MR_String backend_libs__export__TypeString_18;
#line 486 "export.m"
        MR_String backend_libs__export__ArgName_19;
#line 486 "export.m"
        MR_Word backend_libs__export__Mode_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 1)));
#line 486 "export.m"
        MR_String backend_libs__export__TypeString0_37;
#line 505 "export.m"
        MR_Word backend_libs__export___Loc_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 0)));

#line 510 "export.m"
        if ((backend_libs__export__NameThem_3 == (MR_Integer) 0))
#line 512 "export.m"
          backend_libs__export__ArgName_19 = (MR_String) "";
#line 510 "export.m"
        else
#line 507 "export.m"
          {
#line 507 "export.m"
            MR_String backend_libs__export__NumString_36;

#line 508 "export.m"
            {
#line 508 "export.m"
              mercury__string__int_to_string_2_p_0(backend_libs__export__Num_17, &backend_libs__export__NumString_36);
            }
#line 509 "export.m"
            {
#line 509 "export.m"
              mercury__string__append_3_p_2((MR_String) " Mercury__argument", backend_libs__export__NumString_36, &backend_libs__export__ArgName_19);
            }
#line 507 "export.m"
          }
#line 514 "export.m"
        {
#line 514 "export.m"
          backend_libs__export__TypeString0_37 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(backend_libs__export__ModuleInfo_4, (MR_Integer) 0, backend_libs__export__Type_16);
        }
#line 519 "export.m"
        if ((backend_libs__export__Mode_35 == (MR_Integer) 1))
#line 516 "export.m"
          {
#line 518 "export.m"
            {
#line 518 "export.m"
              backend_libs__export__TypeString_18 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString0_37, (MR_String) " *");
            }
#line 516 "export.m"
          }
#line 519 "export.m"
        else
#line 523 "export.m"
          backend_libs__export__TypeString_18 = backend_libs__export__TypeString0_37;
#line 494 "export.m"
        if ((backend_libs__export__ATs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "export.m"
          {
#line 493 "export.m"
            *backend_libs__export__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString_18, backend_libs__export__ArgName_19);
          }
#line 494 "export.m"
        else
#line 495 "export.m"
          {
#line 495 "export.m"
            MR_String backend_libs__export__TheRest_22;
#line 495 "export.m"
            MR_String backend_libs__export__V_24_24;
#line 495 "export.m"
            MR_String backend_libs__export__V_25_25;

#line 496 "export.m"
            {
#line 496 "export.m"
              backend_libs__export__get_argument_declarations_2_5_p_0(backend_libs__export__ATs_10, backend_libs__export__Num_17, backend_libs__export__NameThem_3, backend_libs__export__ModuleInfo_4, &backend_libs__export__TheRest_22);
            }
#line 497 "export.m"
            {
#line 497 "export.m"
              backend_libs__export__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__TheRest_22);
            }
#line 497 "export.m"
            {
#line 497 "export.m"
              backend_libs__export__V_24_24 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, backend_libs__export__V_25_25);
            }
#line 497 "export.m"
            {
#line 497 "export.m"
              *backend_libs__export__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString_18, backend_libs__export__V_24_24);
            }
#line 495 "export.m"
          }
#line 486 "export.m"
      }
#line 485 "export.m"
  }
#line 482 "export.m"
}

#line 474 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
#line 474 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 474 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 474 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 474 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 474 "export.m"
{
#line 478 "export.m"
  {
#line 478 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 478 "export.m"
    if ((backend_libs__export__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "void";
#line 478 "export.m"
    else
#line 479 "export.m"
      {
#line 480 "export.m"
        {
#line 480 "export.m"
          backend_libs__export__get_argument_declarations_2_5_p_0(backend_libs__export__HeadVar__1_1, (MR_Integer) 0, backend_libs__export__NameThem_2, backend_libs__export__ModuleInfo_3, backend_libs__export__HeadVar__4_4);
#line 480 "export.m"
          return;
        }
#line 479 "export.m"
      }
#line 478 "export.m"
  }
#line 474 "export.m"
}

#line 463 "export.m"
static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
#line 463 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 463 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 463 "export.m"
{
#line 465 "export.m"
  {
#line 465 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 465 "export.m"
    MR_Word backend_libs__export__Mode_5;
#line 465 "export.m"
    MR_Word backend_libs__export__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
#line 465 "export.m"
    MR_Word backend_libs__export__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 465 "export.m"
    MR_Word backend_libs__export__V_8_8;
#line 465 "export.m"
    MR_Word backend_libs__export___Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_7_7, (MR_Integer) 0)));

#line 465 "export.m"
    backend_libs__export__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_7_7, (MR_Integer) 1)));
#line 466 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__Mode_5 == (MR_Integer) 2);
#line 466 "export.m"
    backend_libs__export__succeeded = !(backend_libs__export__succeeded);
#line 465 "export.m"
    if (backend_libs__export__succeeded)
#line 465 "export.m"
      {
#line 467 "export.m"
        {
#line 467 "export.m"
          backend_libs__export__V_8_8 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Type_6);
        }
#line 467 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__V_8_8 == (MR_Integer) 1);
#line 465 "export.m"
      }
#line 465 "export.m"
    return backend_libs__export__succeeded;
#line 465 "export.m"
  }
#line 463 "export.m"
}

#line 278 "export.m"
static MR_bool MR_CALL 
backend_libs__export__to_c_4_p_0_1(
#line 278 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 278 "export.m"
{
#line 278 "export.m"
  {
#line 278 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 278 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 278 "export.m"
    {
#line 278 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__to_c__278__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 278 "export.m"
    return backend_libs__export__succeeded;
#line 278 "export.m"
  }
#line 278 "export.m"
}

#line 272 "export.m"
static void MR_CALL 
backend_libs__export__to_c_4_p_0(
#line 272 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 272 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 272 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 272 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4)
#line 272 "export.m"
{
#line 275 "export.m"
  {
#line 275 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 275 "export.m"
    if ((backend_libs__export__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 275 "export.m"
    else
#line 276 "export.m"
      {
#line 276 "export.m"
        MR_Word backend_libs__export__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "export.m"
        MR_Word backend_libs__export__ExportedProcs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "export.m"
        MR_Word backend_libs__export__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_8, (MR_Integer) 0)));
#line 276 "export.m"
        MR_Word backend_libs__export__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_8, (MR_Integer) 1)));
#line 276 "export.m"
        MR_Integer backend_libs__export__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__E_8, (MR_Integer) 2)));
#line 276 "export.m"
        MR_String backend_libs__export__C_Function_15 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_8, (MR_Integer) 3)));
#line 276 "export.m"
        MR_String backend_libs__export__DeclareString_18;
#line 276 "export.m"
        MR_String backend_libs__export__C_RetType_19;
#line 276 "export.m"
        MR_String backend_libs__export__MaybeDeclareRetval_20;
#line 276 "export.m"
        MR_String backend_libs__export__MaybeFail_21;
#line 276 "export.m"
        MR_String backend_libs__export__MaybeSucceed_22;
#line 276 "export.m"
        MR_Word backend_libs__export__ArgInfoTypes_23;
#line 276 "export.m"
        MR_String backend_libs__export__ArgDecls_24;
#line 276 "export.m"
        MR_String backend_libs__export__InputArgs_25;
#line 276 "export.m"
        MR_String backend_libs__export__OutputArgs_26;
#line 276 "export.m"
        MR_Word backend_libs__export__ProcLabel_27;
#line 276 "export.m"
        MR_String backend_libs__export__ProcLabelString_28;
#line 276 "export.m"
        MR_String backend_libs__export__Code_29;
#line 276 "export.m"
        MR_Word backend_libs__export__TheRest_30;
#line 276 "export.m"
        MR_Word backend_libs__export__V_31_31;
#line 276 "export.m"
        MR_Word backend_libs__export__V_40_40;
#line 276 "export.m"
        MR_Word backend_libs__export__V_42_42;
#line 276 "export.m"
        MR_Word backend_libs__export__V_43_43;
#line 276 "export.m"
        MR_Word backend_libs__export__V_45_45;
#line 276 "export.m"
        MR_Word backend_libs__export__V_46_46;
#line 276 "export.m"
        MR_Word backend_libs__export__V_48_48;
#line 276 "export.m"
        MR_Word backend_libs__export__V_50_50;
#line 276 "export.m"
        MR_Word backend_libs__export__V_51_51;
#line 276 "export.m"
        MR_Word backend_libs__export__V_53_53;
#line 276 "export.m"
        MR_Word backend_libs__export__V_54_54;
#line 276 "export.m"
        MR_Word backend_libs__export__V_56_56;
#line 276 "export.m"
        MR_Word backend_libs__export__V_57_57;
#line 276 "export.m"
        MR_Word backend_libs__export__V_59_59;
#line 276 "export.m"
        MR_Word backend_libs__export__V_61_61;
#line 276 "export.m"
        MR_Word backend_libs__export__V_62_62;
#line 276 "export.m"
        MR_Word backend_libs__export__V_64_64;
#line 276 "export.m"
        MR_Word backend_libs__export__V_65_65;
#line 276 "export.m"
        MR_Word backend_libs__export__V_67_67;
#line 276 "export.m"
        MR_Word backend_libs__export__V_68_68;
#line 276 "export.m"
        MR_Word backend_libs__export__V_70_70;
#line 276 "export.m"
        MR_Word backend_libs__export__V_72_72;
#line 276 "export.m"
        MR_Word backend_libs__export__V_74_74;
#line 276 "export.m"
        MR_Word backend_libs__export__V_76_76;
#line 276 "export.m"
        MR_Word backend_libs__export__V_78_78;
#line 276 "export.m"
        MR_Word backend_libs__export__V_80_80;
#line 276 "export.m"
        MR_Word backend_libs__export__V_82_82;
#line 276 "export.m"
        MR_Word backend_libs__export__V_84_84;
#line 276 "export.m"
        MR_Word backend_libs__export__V_86_86;
#line 276 "export.m"
        MR_Word backend_libs__export__V_88_88;
#line 276 "export.m"
        MR_Word backend_libs__export__V_90_90;
#line 276 "export.m"
        MR_Word backend_libs__export__V_91_91;
#line 276 "export.m"
        MR_Word backend_libs__export__V_93_93;
#line 276 "export.m"
        MR_Word backend_libs__export__V_95_95;
#line 276 "export.m"
        MR_Word backend_libs__export__V_97_97;
#line 276 "export.m"
        MR_Word backend_libs__export__V_99_99;
#line 276 "export.m"
        MR_Word backend_libs__export__V_101_101;
#line 276 "export.m"
        MR_Word backend_libs__export__V_103_103;
#line 276 "export.m"
        MR_Word backend_libs__export__V_105_105;
#line 276 "export.m"
        MR_Word backend_libs__export__V_107_107;
#line 276 "export.m"
        MR_Word backend_libs__export__V_109_109;
#line 276 "export.m"
        MR_Word backend_libs__export__V_110_110;
#line 276 "export.m"
        MR_Word backend_libs__export__V_112_112;
#line 276 "export.m"
        MR_Word backend_libs__export__V_114_114;
#line 276 "export.m"
        MR_Word backend_libs__export__V_116_116;
#line 276 "export.m"
        MR_Word backend_libs__export__V_117_117;
#line 276 "export.m"
        MR_Word backend_libs__export__V_119_119;
#line 276 "export.m"
        MR_Word backend_libs__export__V_121_121;
#line 276 "export.m"
        MR_Word backend_libs__export__V_122_122;
#line 276 "export.m"
        MR_Word backend_libs__export__V_124_124;
#line 276 "export.m"
        MR_Word backend_libs__export__V_126_126;
#line 276 "export.m"
        MR_Word backend_libs__export__V_128_128;
#line 276 "export.m"
        MR_Word backend_libs__export__V_130_130;
#line 276 "export.m"
        MR_Word backend_libs__export__V_132_132;
#line 276 "export.m"
        MR_Word backend_libs__export__V_134_134;
#line 276 "export.m"
        MR_Word backend_libs__export__V_135_135;
#line 276 "export.m"
        MR_Word backend_libs__export__V_136_136;
#line 276 "export.m"
        MR_Word backend_libs__export__V_138_138;
#line 276 "export.m"
        MR_Word backend_libs__export__V_140_140;
#line 276 "export.m"
        MR_Word backend_libs__export__V_142_142;
#line 276 "export.m"
        MR_Word backend_libs__export__V_144_144;
#line 276 "export.m"
        MR_Word backend_libs__export__V_146_146;
#line 276 "export.m"
        MR_Word backend_libs__export__V_148_148;
#line 277 "export.m"
        MR_Word backend_libs__export___Ctxt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_8, (MR_Integer) 4)));
#line 280 "export.m"
        MR_Word backend_libs__export__Globals_17;

#line 278 "export.m"
        {
#line 278 "export.m"
          backend_libs__export__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 278 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_31_31, 0) = ((MR_Box) (&backend_libs__export_scalar_common_6[0]));
#line 278 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_31_31, 1) = ((MR_Box) (backend_libs__export__to_c_4_p_0_1));
#line 278 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 278 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_31_31, 3) = ((MR_Box) (backend_libs__export__Lang_12));
#line 278 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 278 "export.m"
        }
#line 278 "export.m"
        {
#line 278 "export.m"
          mercury__require__expect_4_p_0(backend_libs__export__V_31_31, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.to_c\'/4", (MR_String) "foreign language other than C");
        }
#line 280 "export.m"
        {
#line 280 "export.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__HeadVar__3_3, &backend_libs__export__Globals_17);
        }
#line 281 "export.m"
        {
#line 281 "export.m"
          backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__PredId_13, backend_libs__export__ProcId_14, backend_libs__export__HeadVar__3_3, &backend_libs__export__DeclareString_18, &backend_libs__export__C_RetType_19, &backend_libs__export__MaybeDeclareRetval_20, &backend_libs__export__MaybeFail_21, &backend_libs__export__MaybeSucceed_22, &backend_libs__export__ArgInfoTypes_23);
        }
#line 284 "export.m"
        {
#line 284 "export.m"
          backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(backend_libs__export__ArgInfoTypes_23, (MR_Integer) 1, backend_libs__export__HeadVar__3_3, &backend_libs__export__ArgDecls_24);
        }
#line 290 "export.m"
        {
#line 290 "export.m"
          backend_libs__export__get_input_args_4_p_0(backend_libs__export__ArgInfoTypes_23, (MR_Integer) 0, backend_libs__export__HeadVar__3_3, &backend_libs__export__InputArgs_25);
        }
#line 291 "export.m"
        {
#line 291 "export.m"
          backend_libs__export__copy_output_args_4_p_0(backend_libs__export__ArgInfoTypes_23, (MR_Integer) 0, backend_libs__export__HeadVar__3_3, &backend_libs__export__OutputArgs_26);
        }
#line 293 "export.m"
        {
#line 293 "export.m"
          backend_libs__export__ProcLabel_27 = backend_libs__proc_label__make_proc_label_3_f_0(backend_libs__export__HeadVar__3_3, backend_libs__export__PredId_13, backend_libs__export__ProcId_14);
        }
#line 294 "export.m"
        {
#line 294 "export.m"
          backend_libs__export__ProcLabelString_28 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__export__ProcLabel_27, (MR_Integer) 1);
        }
#line 344 "export.m"
        {
#line 344 "export.m"
          backend_libs__export__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_148_148, 0) = ((MR_Box) (backend_libs__export__MaybeSucceed_22));
#line 344 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[26])));
#line 344 "export.m"
        }
#line 343 "export.m"
        {
#line 343 "export.m"
          backend_libs__export__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_146_146, 0) = ((MR_Box) ((MR_String) "\tMR_restore_regs_from_mem(c_regs);\n"));
#line 343 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_146_146, 1) = ((MR_Box) (backend_libs__export__V_148_148));
#line 343 "export.m"
        }
#line 342 "export.m"
        {
#line 342 "export.m"
          backend_libs__export__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_144_144, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 342 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_144_144, 1) = ((MR_Box) (backend_libs__export__V_146_146));
#line 342 "export.m"
        }
#line 341 "export.m"
        {
#line 341 "export.m"
          backend_libs__export__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_142_142, 0) = ((MR_Box) ((MR_String) "\t}\n"));
#line 341 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_142_142, 1) = ((MR_Box) (backend_libs__export__V_144_144));
#line 341 "export.m"
        }
#line 340 "export.m"
        {
#line 340 "export.m"
          backend_libs__export__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_140_140, 0) = ((MR_Box) ((MR_String) "\t\t MR_finalize_thread_engine();\n"));
#line 340 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_140_140, 1) = ((MR_Box) (backend_libs__export__V_142_142));
#line 340 "export.m"
        }
#line 339 "export.m"
        {
#line 339 "export.m"
          backend_libs__export__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_138_138, 0) = ((MR_Box) ((MR_String) "\tif (must_finalize_engine) {\n"));
#line 339 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_138_138, 1) = ((MR_Box) (backend_libs__export__V_140_140));
#line 339 "export.m"
        }
#line 338 "export.m"
        {
#line 338 "export.m"
          backend_libs__export__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_136_136, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 338 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_136_136, 1) = ((MR_Box) (backend_libs__export__V_138_138));
#line 338 "export.m"
        }
#line 337 "export.m"
        {
#line 337 "export.m"
          backend_libs__export__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 0) = ((MR_Box) (backend_libs__export__OutputArgs_26));
#line 337 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 1) = ((MR_Box) (backend_libs__export__V_136_136));
#line 337 "export.m"
        }
#line 336 "export.m"
        {
#line 336 "export.m"
          backend_libs__export__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_134_134, 0) = ((MR_Box) (backend_libs__export__MaybeFail_21));
#line 336 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_134_134, 1) = ((MR_Box) (backend_libs__export__V_135_135));
#line 336 "export.m"
        }
#line 335 "export.m"
        {
#line 335 "export.m"
          backend_libs__export__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_132_132, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 335 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_132_132, 1) = ((MR_Box) (backend_libs__export__V_134_134));
#line 335 "export.m"
        }
#line 334 "export.m"
        {
#line 334 "export.m"
          backend_libs__export__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 0) = ((MR_Box) ((MR_String) "\tMR_current_callback_site = saved_cur_callback;\n"));
#line 334 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 1) = ((MR_Box) (backend_libs__export__V_132_132));
#line 334 "export.m"
        }
#line 333 "export.m"
        {
#line 333 "export.m"
          backend_libs__export__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 0) = ((MR_Box) ((MR_String) "\tMR_current_call_site_dynamic = saved_cur_csd;\n"));
#line 333 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 1) = ((MR_Box) (backend_libs__export__V_130_130));
#line 333 "export.m"
        }
#line 332 "export.m"
        {
#line 332 "export.m"
          backend_libs__export__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_126_126, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 332 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_126_126, 1) = ((MR_Box) (backend_libs__export__V_128_128));
#line 332 "export.m"
        }
#line 331 "export.m"
        {
#line 331 "export.m"
          backend_libs__export__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_124_124, 0) = ((MR_Box) ((MR_String) "\tMR_restore_transient_registers();\n"));
#line 331 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_124_124, 1) = ((MR_Box) (backend_libs__export__V_126_126));
#line 331 "export.m"
        }
#line 330 "export.m"
        {
#line 330 "export.m"
          backend_libs__export__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_122_122, 0) = ((MR_Box) ((MR_String) "), MR_FALSE);\n"));
#line 330 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_122_122, 1) = ((MR_Box) (backend_libs__export__V_124_124));
#line 330 "export.m"
        }
#line 330 "export.m"
        {
#line 330 "export.m"
          backend_libs__export__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_121_121, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_28));
#line 330 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_121_121, 1) = ((MR_Box) (backend_libs__export__V_122_122));
#line 330 "export.m"
        }
#line 329 "export.m"
        {
#line 329 "export.m"
          backend_libs__export__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_119_119, 0) = ((MR_Box) ((MR_String) "\t(void) MR_call_engine(MR_ENTRY("));
#line 329 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_119_119, 1) = ((MR_Box) (backend_libs__export__V_121_121));
#line 329 "export.m"
        }
#line 328 "export.m"
        {
#line 328 "export.m"
          backend_libs__export__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_117_117, 0) = ((MR_Box) ((MR_String) "\tMR_save_transient_registers();\n"));
#line 328 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_117_117, 1) = ((MR_Box) (backend_libs__export__V_119_119));
#line 328 "export.m"
        }
#line 327 "export.m"
        {
#line 327 "export.m"
          backend_libs__export__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_116_116, 0) = ((MR_Box) (backend_libs__export__InputArgs_25));
#line 327 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_116_116, 1) = ((MR_Box) (backend_libs__export__V_117_117));
#line 327 "export.m"
        }
#line 326 "export.m"
        {
#line 326 "export.m"
          backend_libs__export__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_114_114, 0) = ((MR_Box) ((MR_String) "\tMR_restore_registers();\n"));
#line 326 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_114_114, 1) = ((MR_Box) (backend_libs__export__V_116_116));
#line 326 "export.m"
        }
#line 325 "export.m"
        {
#line 325 "export.m"
          backend_libs__export__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_112_112, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 325 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_112_112, 1) = ((MR_Box) (backend_libs__export__V_114_114));
#line 325 "export.m"
        }
#line 324 "export.m"
        {
#line 324 "export.m"
          backend_libs__export__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_110_110, 0) = ((MR_Box) ((MR_String) "));\n"));
#line 324 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_110_110, 1) = ((MR_Box) (backend_libs__export__V_112_112));
#line 324 "export.m"
        }
#line 324 "export.m"
        {
#line 324 "export.m"
          backend_libs__export__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_109_109, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_28));
#line 324 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_109_109, 1) = ((MR_Box) (backend_libs__export__V_110_110));
#line 324 "export.m"
        }
#line 324 "export.m"
        {
#line 324 "export.m"
          backend_libs__export__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_107_107, 0) = ((MR_Box) ((MR_String) "\tMR_setup_callback(MR_ENTRY("));
#line 324 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_107_107, 1) = ((MR_Box) (backend_libs__export__V_109_109));
#line 324 "export.m"
        }
#line 323 "export.m"
        {
#line 323 "export.m"
          backend_libs__export__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_105_105, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_csd = MR_current_call_site_dynamic;\n"));
#line 323 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_105_105, 1) = ((MR_Box) (backend_libs__export__V_107_107));
#line 323 "export.m"
        }
#line 322 "export.m"
        {
#line 322 "export.m"
          backend_libs__export__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_103_103, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_callback = MR_current_callback_site;\n"));
#line 322 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_103_103, 1) = ((MR_Box) (backend_libs__export__V_105_105));
#line 322 "export.m"
        }
#line 321 "export.m"
        {
#line 321 "export.m"
          backend_libs__export__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_101_101, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 321 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_101_101, 1) = ((MR_Box) (backend_libs__export__V_103_103));
#line 321 "export.m"
        }
#line 320 "export.m"
        {
#line 320 "export.m"
          backend_libs__export__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_99_99, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 320 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_99_99, 1) = ((MR_Box) (backend_libs__export__V_101_101));
#line 320 "export.m"
        }
#line 319 "export.m"
        {
#line 319 "export.m"
          backend_libs__export__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_97_97, 0) = ((MR_Box) ((MR_String) "\tmust_finalize_engine = MR_init_thread(MR_use_now);\n"));
#line 319 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_97_97, 1) = ((MR_Box) (backend_libs__export__V_99_99));
#line 319 "export.m"
        }
#line 318 "export.m"
        {
#line 318 "export.m"
          backend_libs__export__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_95_95, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 318 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_95_95, 1) = ((MR_Box) (backend_libs__export__V_97_97));
#line 318 "export.m"
        }
#line 317 "export.m"
        {
#line 317 "export.m"
          backend_libs__export__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_93_93, 0) = ((MR_Box) ((MR_String) "\tMR_save_regs_to_mem(c_regs);\n"));
#line 317 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_93_93, 1) = ((MR_Box) (backend_libs__export__V_95_95));
#line 317 "export.m"
        }
#line 316 "export.m"
        {
#line 316 "export.m"
          backend_libs__export__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_91_91, 0) = ((MR_Box) ((MR_String) "\n"));
#line 316 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_91_91, 1) = ((MR_Box) (backend_libs__export__V_93_93));
#line 316 "export.m"
        }
#line 315 "export.m"
        {
#line 315 "export.m"
          backend_libs__export__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_90_90, 0) = ((MR_Box) (backend_libs__export__MaybeDeclareRetval_20));
#line 315 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_90_90, 1) = ((MR_Box) (backend_libs__export__V_91_91));
#line 315 "export.m"
        }
#line 314 "export.m"
        {
#line 314 "export.m"
          backend_libs__export__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_88_88, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 314 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_88_88, 1) = ((MR_Box) (backend_libs__export__V_90_90));
#line 314 "export.m"
        }
#line 313 "export.m"
        {
#line 313 "export.m"
          backend_libs__export__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_86_86, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynamic *saved_cur_csd;\n"));
#line 313 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_86_86, 1) = ((MR_Box) (backend_libs__export__V_88_88));
#line 313 "export.m"
        }
#line 312 "export.m"
        {
#line 312 "export.m"
          backend_libs__export__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_84_84, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynList **saved_cur_callback;\n"));
#line 312 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_84_84, 1) = ((MR_Box) (backend_libs__export__V_86_86));
#line 312 "export.m"
        }
#line 311 "export.m"
        {
#line 311 "export.m"
          backend_libs__export__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_82_82, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 311 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_82_82, 1) = ((MR_Box) (backend_libs__export__V_84_84));
#line 311 "export.m"
        }
#line 310 "export.m"
        {
#line 310 "export.m"
          backend_libs__export__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_80_80, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 310 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_80_80, 1) = ((MR_Box) (backend_libs__export__V_82_82));
#line 310 "export.m"
        }
#line 309 "export.m"
        {
#line 309 "export.m"
          backend_libs__export__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_78_78, 0) = ((MR_Box) ((MR_String) "\tMR_bool must_finalize_engine;\n"));
#line 309 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_78_78, 1) = ((MR_Box) (backend_libs__export__V_80_80));
#line 309 "export.m"
        }
#line 308 "export.m"
        {
#line 308 "export.m"
          backend_libs__export__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_76_76, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 308 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_76_76, 1) = ((MR_Box) (backend_libs__export__V_78_78));
#line 308 "export.m"
        }
#line 307 "export.m"
        {
#line 307 "export.m"
          backend_libs__export__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_74_74, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 307 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_74_74, 1) = ((MR_Box) (backend_libs__export__V_76_76));
#line 307 "export.m"
        }
#line 306 "export.m"
        {
#line 306 "export.m"
          backend_libs__export__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_72_72, 0) = ((MR_Box) ((MR_String) "\tMR_Word c_regs[MR_NUM_REAL_REGS];\n"));
#line 306 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_72_72, 1) = ((MR_Box) (backend_libs__export__V_74_74));
#line 306 "export.m"
        }
#line 305 "export.m"
        {
#line 305 "export.m"
          backend_libs__export__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 0) = ((MR_Box) ((MR_String) "#if MR_NUM_REAL_REGS > 0\n"));
#line 305 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 1) = ((MR_Box) (backend_libs__export__V_72_72));
#line 305 "export.m"
        }
#line 304 "export.m"
        {
#line 304 "export.m"
          backend_libs__export__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 0) = ((MR_Box) ((MR_String) ")\n{\n"));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 1) = ((MR_Box) (backend_libs__export__V_70_70));
#line 304 "export.m"
        }
#line 304 "export.m"
        {
#line 304 "export.m"
          backend_libs__export__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 0) = ((MR_Box) (backend_libs__export__ArgDecls_24));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 1) = ((MR_Box) (backend_libs__export__V_68_68));
#line 304 "export.m"
        }
#line 304 "export.m"
        {
#line 304 "export.m"
          backend_libs__export__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 0) = ((MR_Box) ((MR_String) "("));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 1) = ((MR_Box) (backend_libs__export__V_67_67));
#line 304 "export.m"
        }
#line 304 "export.m"
        {
#line 304 "export.m"
          backend_libs__export__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_64_64, 0) = ((MR_Box) (backend_libs__export__C_Function_15));
#line 304 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_64_64, 1) = ((MR_Box) (backend_libs__export__V_65_65));
#line 304 "export.m"
        }
#line 303 "export.m"
        {
#line 303 "export.m"
          backend_libs__export__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_62_62, 0) = ((MR_Box) ((MR_String) "\n"));
#line 303 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_62_62, 1) = ((MR_Box) (backend_libs__export__V_64_64));
#line 303 "export.m"
        }
#line 303 "export.m"
        {
#line 303 "export.m"
          backend_libs__export__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 0) = ((MR_Box) (backend_libs__export__C_RetType_19));
#line 303 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 1) = ((MR_Box) (backend_libs__export__V_62_62));
#line 303 "export.m"
        }
#line 302 "export.m"
        {
#line 302 "export.m"
          backend_libs__export__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 0) = ((MR_Box) ((MR_String) "\n"));
#line 302 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 1) = ((MR_Box) (backend_libs__export__V_61_61));
#line 302 "export.m"
        }
#line 301 "export.m"
        {
#line 301 "export.m"
          backend_libs__export__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_57_57, 0) = ((MR_Box) ((MR_String) ");\n"));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_57_57, 1) = ((MR_Box) (backend_libs__export__V_59_59));
#line 301 "export.m"
        }
#line 301 "export.m"
        {
#line 301 "export.m"
          backend_libs__export__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 0) = ((MR_Box) (backend_libs__export__ArgDecls_24));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 1) = ((MR_Box) (backend_libs__export__V_57_57));
#line 301 "export.m"
        }
#line 301 "export.m"
        {
#line 301 "export.m"
          backend_libs__export__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_54_54, 0) = ((MR_Box) ((MR_String) "("));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_54_54, 1) = ((MR_Box) (backend_libs__export__V_56_56));
#line 301 "export.m"
        }
#line 301 "export.m"
        {
#line 301 "export.m"
          backend_libs__export__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_53_53, 0) = ((MR_Box) (backend_libs__export__C_Function_15));
#line 301 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_53_53, 1) = ((MR_Box) (backend_libs__export__V_54_54));
#line 301 "export.m"
        }
#line 300 "export.m"
        {
#line 300 "export.m"
          backend_libs__export__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_51_51, 0) = ((MR_Box) ((MR_String) "\n"));
#line 300 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_51_51, 1) = ((MR_Box) (backend_libs__export__V_53_53));
#line 300 "export.m"
        }
#line 300 "export.m"
        {
#line 300 "export.m"
          backend_libs__export__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_50_50, 0) = ((MR_Box) (backend_libs__export__C_RetType_19));
#line 300 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_50_50, 1) = ((MR_Box) (backend_libs__export__V_51_51));
#line 300 "export.m"
        }
#line 299 "export.m"
        {
#line 299 "export.m"
          backend_libs__export__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_48_48, 0) = ((MR_Box) ((MR_String) "\n"));
#line 299 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_48_48, 1) = ((MR_Box) (backend_libs__export__V_50_50));
#line 299 "export.m"
        }
#line 298 "export.m"
        {
#line 298 "export.m"
          backend_libs__export__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_46_46, 0) = ((MR_Box) ((MR_String) ");\n"));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_46_46, 1) = ((MR_Box) (backend_libs__export__V_48_48));
#line 298 "export.m"
        }
#line 298 "export.m"
        {
#line 298 "export.m"
          backend_libs__export__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_45_45, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_28));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_45_45, 1) = ((MR_Box) (backend_libs__export__V_46_46));
#line 298 "export.m"
        }
#line 298 "export.m"
        {
#line 298 "export.m"
          backend_libs__export__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_43_43, 0) = ((MR_Box) ((MR_String) "("));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_43_43, 1) = ((MR_Box) (backend_libs__export__V_45_45));
#line 298 "export.m"
        }
#line 298 "export.m"
        {
#line 298 "export.m"
          backend_libs__export__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_42_42, 0) = ((MR_Box) (backend_libs__export__DeclareString_18));
#line 298 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_42_42, 1) = ((MR_Box) (backend_libs__export__V_43_43));
#line 298 "export.m"
        }
#line 297 "export.m"
        {
#line 297 "export.m"
          backend_libs__export__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_40_40, 0) = ((MR_Box) ((MR_String) "\n"));
#line 297 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_40_40, 1) = ((MR_Box) (backend_libs__export__V_42_42));
#line 297 "export.m"
        }
#line 296 "export.m"
        {
#line 296 "export.m"
          mercury__string__append_list_2_p_0(backend_libs__export__V_40_40, &backend_libs__export__Code_29);
        }
#line 348 "export.m"
        {
#line 348 "export.m"
          backend_libs__export__to_c_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__ExportedProcs_9, backend_libs__export__HeadVar__3_3, &backend_libs__export__TheRest_30);
        }
#line 349 "export.m"
        {
#line 349 "export.m"
          MR_Word base;
#line 349 "export.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "export.m"
          *backend_libs__export__HeadVar__4_4 = base;
#line 349 "export.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__Code_29));
#line 349 "export.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__TheRest_30));
#line 349 "export.m"
        }
#line 276 "export.m"
      }
#line 275 "export.m"
  }
#line 272 "export.m"
}

#line 76 "export.m"
MR_bool MR_CALL 
backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(
#line 76 "export.m"
  MR_String backend_libs__export__HeadVar__1_1)
#line 76 "export.m"
{
#line 972 "export.m"
  {
#line 972 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 972 "export.m"
    if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_Word") == 0))
#line 972 "export.m"
      backend_libs__export__succeeded = MR_TRUE;
#line 972 "export.m"
    else
#line 972 "export.m"
      if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_TypeInfo") == 0))
#line 973 "export.m"
        backend_libs__export__succeeded = MR_TRUE;
#line 972 "export.m"
      else
#line 972 "export.m"
        if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_TypeCtorInfo") == 0))
#line 974 "export.m"
          backend_libs__export__succeeded = MR_TRUE;
#line 972 "export.m"
        else
#line 972 "export.m"
          if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_TypeClassInfo") == 0))
#line 975 "export.m"
            backend_libs__export__succeeded = MR_TRUE;
#line 972 "export.m"
          else
#line 972 "export.m"
            if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_BaseTypeclassInfo") == 0))
#line 976 "export.m"
              backend_libs__export__succeeded = MR_TRUE;
#line 972 "export.m"
            else
#line 972 "export.m"
              backend_libs__export__succeeded = MR_FALSE;
#line 972 "export.m"
    return backend_libs__export__succeeded;
#line 972 "export.m"
  }
#line 76 "export.m"
}

#line 70 "export.m"
void MR_CALL 
backend_libs__export__convert_type_from_mercury_4_p_0(
#line 70 "export.m"
  MR_Word backend_libs__export__SourceArgLoc_5,
#line 70 "export.m"
  MR_String backend_libs__export__Rval_6,
#line 70 "export.m"
  MR_Word backend_libs__export__Type_7,
#line 70 "export.m"
  MR_String * backend_libs__export__ConvertedRval_8)
#line 70 "export.m"
{
#line 652 "export.m"
  {
#line 652 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 652 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Type_7)) == (MR_mktag((MR_Integer) 2))))
#line 652 "export.m"
      {
#line 652 "export.m"
        MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_7, (MR_Integer) 0)));

#line 656 "export.m"
        if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 1))
#line 657 "export.m"
          {
#line 657 "export.m"
            MR_Word backend_libs__export__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 0)));
#line 659 "export.m"
            MR_Integer backend_libs__export__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 1)));

#line 661 "export.m"
            if ((backend_libs__export__V_35_35 == (MR_Integer) 1))
#line 663 "export.m"
              *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 661 "export.m"
            else
#line 659 "export.m"
              {
#line 659 "export.m"
                MR_String backend_libs__export__V_31_31;

#line 660 "export.m"
                {
#line 660 "export.m"
                  backend_libs__export__V_31_31 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_6, (MR_String) ")");
                }
#line 660 "export.m"
                {
#line 660 "export.m"
                  *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", backend_libs__export__V_31_31);
                }
#line 659 "export.m"
              }
#line 657 "export.m"
          }
#line 656 "export.m"
        else
#line 656 "export.m"
          if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 2))
#line 654 "export.m"
            {
#line 655 "export.m"
              {
#line 655 "export.m"
                *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", backend_libs__export__Rval_6);
              }
#line 654 "export.m"
            }
#line 656 "export.m"
          else
#line 668 "export.m"
            *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 652 "export.m"
      }
#line 652 "export.m"
    else
#line 678 "export.m"
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 652 "export.m"
  }
#line 70 "export.m"
}

#line 63 "export.m"
void MR_CALL 
backend_libs__export__convert_type_to_mercury_4_p_0(
#line 63 "export.m"
  MR_String backend_libs__export__Rval_5,
#line 63 "export.m"
  MR_Word backend_libs__export__Type_6,
#line 63 "export.m"
  MR_Word backend_libs__export__TargetArgLoc_7,
#line 63 "export.m"
  MR_String * backend_libs__export__ConvertedRval_8)
#line 63 "export.m"
{
#line 616 "export.m"
  {
#line 616 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 616 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Type_6)) == (MR_mktag((MR_Integer) 2))))
#line 616 "export.m"
      {
#line 616 "export.m"
        MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_6, (MR_Integer) 0)));

#line 620 "export.m"
        if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 3))
#line 630 "export.m"
          {
#line 634 "export.m"
            {
#line 634 "export.m"
              *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_UnsignedChar) ", backend_libs__export__Rval_5);
            }
#line 630 "export.m"
          }
#line 620 "export.m"
        else
#line 620 "export.m"
          if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 1))
#line 621 "export.m"
            {
#line 621 "export.m"
              MR_Word backend_libs__export__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 0)));
#line 623 "export.m"
              MR_Integer backend_libs__export__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 1)));

#line 625 "export.m"
              if ((backend_libs__export__V_36_36 == (MR_Integer) 1))
#line 627 "export.m"
                *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 625 "export.m"
              else
#line 623 "export.m"
                {
#line 623 "export.m"
                  MR_String backend_libs__export__V_32_32;

#line 624 "export.m"
                  {
#line 624 "export.m"
                    backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_5, (MR_String) ")");
                  }
#line 624 "export.m"
                  {
#line 624 "export.m"
                    *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", backend_libs__export__V_32_32);
                  }
#line 623 "export.m"
                }
#line 621 "export.m"
            }
#line 620 "export.m"
          else
#line 620 "export.m"
            if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 0))
#line 636 "export.m"
              *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 620 "export.m"
            else
#line 618 "export.m"
              {
#line 619 "export.m"
                {
#line 619 "export.m"
                  *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", backend_libs__export__Rval_5);
                }
#line 618 "export.m"
              }
#line 616 "export.m"
      }
#line 616 "export.m"
    else
#line 646 "export.m"
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 616 "export.m"
  }
#line 63 "export.m"
}

#line 741 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
#line 741 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 741 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 741 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 741 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 741 "export.m"
{
#line 741 "export.m"
  {
#line 741 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 741 "export.m"
    {
#line 741 "export.m"
      backend_libs__export__output_foreign_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 741 "export.m"
      return;
    }
#line 741 "export.m"
  }
#line 741 "export.m"
}

#line 740 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
#line 740 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 740 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 740 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 740 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 740 "export.m"
{
#line 740 "export.m"
  {
#line 740 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 740 "export.m"
    {
#line 740 "export.m"
      backend_libs__export__output_exported_enum_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 740 "export.m"
      return;
    }
#line 740 "export.m"
  }
#line 740 "export.m"
}

#line 51 "export.m"
void MR_CALL 
backend_libs__export__produce_header_file_5_p_0(
#line 51 "export.m"
  MR_Word backend_libs__export__ModuleInfo_6,
#line 51 "export.m"
  MR_Word backend_libs__export__ForeignExportDecls_7,
#line 51 "export.m"
  MR_Word backend_libs__export__ModuleName_8)
#line 51 "export.m"
{
#line 689 "export.m"
  {
#line 689 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 689 "export.m"
    MR_Word backend_libs__export__ForeignDecls_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 0)));
#line 689 "export.m"
    MR_Word backend_libs__export__C_ExportDecls_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 1)));
#line 689 "export.m"
    MR_Word backend_libs__export__ExportedEnums_12;
#line 689 "export.m"
    MR_Word backend_libs__export__Globals_14;
#line 689 "export.m"
    MR_String backend_libs__export__FileName_15;
#line 689 "export.m"
    MR_Word backend_libs__export__Result_16;
#line 689 "export.m"
    MR_String backend_libs__export__V_32_32;

#line 694 "export.m"
    {
#line 694 "export.m"
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__ExportedEnums_12);
    }
#line 696 "export.m"
    {
#line 696 "export.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__Globals_14);
    }
#line 697 "export.m"
    {
#line 697 "export.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_14, backend_libs__export__ModuleName_8, (MR_String) ".mh", (MR_Integer) 0, &backend_libs__export__FileName_15);
    }
#line 699 "export.m"
    {
#line 699 "export.m"
      backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_15, (MR_String) ".tmp");
    }
#line 699 "export.m"
    {
#line 699 "export.m"
      mercury__io__open_output_4_p_0(backend_libs__export__V_32_32, &backend_libs__export__Result_16);
    }
#line 757 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Result_16)) == (MR_mktag((MR_Integer) 1))))
#line 758 "export.m"
      {
#line 758 "export.m"
        MR_String backend_libs__export__ProgName_27;
#line 758 "export.m"
        MR_String backend_libs__export__V_42_42;

#line 759 "export.m"
        {
#line 759 "export.m"
          mercury__io__progname_base_4_p_0((MR_String) "export.m", &backend_libs__export__ProgName_27);
        }
#line 760 "export.m"
        {
#line 760 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 761 "export.m"
        {
#line 761 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__ProgName_27);
        }
#line 762 "export.m"
        {
#line 762 "export.m"
          mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
        }
#line 763 "export.m"
        {
#line 763 "export.m"
          backend_libs__export__V_42_42 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_15, (MR_String) ".tmp");
        }
#line 763 "export.m"
        {
#line 763 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_42_42);
        }
#line 764 "export.m"
        {
#line 764 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
        }
#line 765 "export.m"
        {
#line 765 "export.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 765 "export.m"
          return;
        }
#line 758 "export.m"
      }
#line 757 "export.m"
    else
#line 701 "export.m"
      {
#line 701 "export.m"
        MR_Word backend_libs__export__TypeCtorInfo_170_170;
#line 701 "export.m"
        MR_Word backend_libs__export__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Result_16, (MR_Integer) 0)));
#line 701 "export.m"
        MR_Word backend_libs__export__OutputStream_18;
#line 701 "export.m"
        MR_String backend_libs__export__SourceFileName_19;
#line 701 "export.m"
        MR_String backend_libs__export__Version_20;
#line 701 "export.m"
        MR_String backend_libs__export__Fullarch_21;
#line 701 "export.m"
        MR_String backend_libs__export__MangledModuleName_22;
#line 701 "export.m"
        MR_String backend_libs__export__UppercaseModuleName_23;
#line 701 "export.m"
        MR_String backend_libs__export__GuardMacroName_24;
#line 701 "export.m"
        MR_Word backend_libs__export__V_53_53;
#line 701 "export.m"
        MR_Word backend_libs__export__V_56_56;
#line 701 "export.m"
        MR_Word backend_libs__export__V_58_58;
#line 701 "export.m"
        MR_Word backend_libs__export__V_59_59;
#line 701 "export.m"
        MR_Word backend_libs__export__V_61_61;
#line 701 "export.m"
        MR_Word backend_libs__export__V_63_63;
#line 701 "export.m"
        MR_Word backend_libs__export__V_65_65;
#line 701 "export.m"
        MR_Word backend_libs__export__V_66_66;
#line 701 "export.m"
        MR_Word backend_libs__export__V_68_68;
#line 701 "export.m"
        MR_Word backend_libs__export__V_70_70;
#line 701 "export.m"
        MR_Word backend_libs__export__V_79_79;
#line 701 "export.m"
        MR_Word backend_libs__export__V_82_82;
#line 701 "export.m"
        MR_Word backend_libs__export__V_83_83;
#line 701 "export.m"
        MR_Word backend_libs__export__V_85_85;
#line 701 "export.m"
        MR_Word backend_libs__export__V_87_87;
#line 701 "export.m"
        MR_Word backend_libs__export__V_123_123;
#line 701 "export.m"
        MR_Word backend_libs__export__V_126_126;
#line 701 "export.m"
        MR_String backend_libs__export__V_127_127;
#line 701 "export.m"
        MR_Word backend_libs__export__V_128_128;
#line 701 "export.m"
        MR_Word backend_libs__export__V_130_130;
#line 701 "export.m"
        MR_Word backend_libs__export__V_132_132;
#line 701 "export.m"
        MR_String backend_libs__export__V_133_133;
#line 701 "export.m"
        MR_Word backend_libs__export__V_137_137;
#line 701 "export.m"
        MR_Word backend_libs__export__V_139_139;
#line 701 "export.m"
        MR_Word backend_libs__export__V_146_146;
#line 701 "export.m"
        MR_Word backend_libs__export__V_149_149;
#line 701 "export.m"
        MR_Word backend_libs__export__V_151_151;
#line 701 "export.m"
        MR_Word backend_libs__export__V_153_153;
#line 701 "export.m"
        MR_Word backend_libs__export__V_155_155;
#line 701 "export.m"
        MR_Word backend_libs__export__V_157_157;
#line 701 "export.m"
        MR_Word backend_libs__export__V_159_159;
#line 740 "export.m"
        MR_Box backend_libs__export__conv0_STATE_VARIABLE_IO_138_138;
#line 741 "export.m"
        MR_Box backend_libs__export__conv1_STATE_VARIABLE_IO_140_140;
#line 753 "export.m"
        MR_Word backend_libs__export__V_25_25;

#line 702 "export.m"
        {
#line 702 "export.m"
          mercury__io__set_output_stream_4_p_0(backend_libs__export__FileStream_17, &backend_libs__export__OutputStream_18);
        }
#line 703 "export.m"
        {
#line 703 "export.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_14, backend_libs__export__ModuleName_8, (MR_String) ".m", (MR_Integer) 1, &backend_libs__export__SourceFileName_19);
        }
#line 705 "export.m"
        {
#line 705 "export.m"
          mercury__library__version_2_p_0(&backend_libs__export__Version_20, &backend_libs__export__Fullarch_21);
        }
#line 711 "export.m"
        {
#line 711 "export.m"
          backend_libs__export__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 0) = ((MR_Box) (backend_libs__export__Fullarch_21));
#line 711 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[3])));
#line 711 "export.m"
        }
#line 711 "export.m"
        {
#line 711 "export.m"
          backend_libs__export__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 0) = ((MR_Box) ((MR_String) "** configured for "));
#line 711 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 1) = ((MR_Box) (backend_libs__export__V_70_70));
#line 711 "export.m"
        }
#line 710 "export.m"
        {
#line 710 "export.m"
          backend_libs__export__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_66_66, 0) = ((MR_Box) ((MR_String) "\n"));
#line 710 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_66_66, 1) = ((MR_Box) (backend_libs__export__V_68_68));
#line 710 "export.m"
        }
#line 710 "export.m"
        {
#line 710 "export.m"
          backend_libs__export__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 0) = ((MR_Box) (backend_libs__export__Version_20));
#line 710 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 1) = ((MR_Box) (backend_libs__export__V_66_66));
#line 710 "export.m"
        }
#line 710 "export.m"
        {
#line 710 "export.m"
          backend_libs__export__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 0) = ((MR_Box) ((MR_String) "** version "));
#line 710 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 1) = ((MR_Box) (backend_libs__export__V_65_65));
#line 710 "export.m"
        }
#line 709 "export.m"
        {
#line 709 "export.m"
          backend_libs__export__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
#line 709 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 1) = ((MR_Box) (backend_libs__export__V_63_63));
#line 709 "export.m"
        }
#line 708 "export.m"
        {
#line 708 "export.m"
          backend_libs__export__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 708 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 1) = ((MR_Box) (backend_libs__export__V_61_61));
#line 708 "export.m"
        }
#line 708 "export.m"
        {
#line 708 "export.m"
          backend_libs__export__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_58_58, 0) = ((MR_Box) (backend_libs__export__SourceFileName_19));
#line 708 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_58_58, 1) = ((MR_Box) (backend_libs__export__V_59_59));
#line 708 "export.m"
        }
#line 708 "export.m"
        {
#line 708 "export.m"
          backend_libs__export__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
#line 708 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 1) = ((MR_Box) (backend_libs__export__V_58_58));
#line 708 "export.m"
        }
#line 707 "export.m"
        {
#line 707 "export.m"
          backend_libs__export__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_53_53, 0) = ((MR_Box) ((MR_String) "/*\n"));
#line 707 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_53_53, 1) = ((MR_Box) (backend_libs__export__V_56_56));
#line 707 "export.m"
        }
#line 706 "export.m"
        {
#line 706 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_53_53);
        }
#line 714 "export.m"
        {
#line 714 "export.m"
          backend_libs__export__MangledModuleName_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__export__ModuleName_8);
        }
#line 715 "export.m"
        {
#line 715 "export.m"
          mercury__string__to_upper_2_p_0(backend_libs__export__MangledModuleName_22, &backend_libs__export__UppercaseModuleName_23);
        }
#line 716 "export.m"
        {
#line 716 "export.m"
          backend_libs__export__GuardMacroName_24 = mercury__string__f_43_43_2_f_0(backend_libs__export__UppercaseModuleName_23, (MR_String) "_MH");
        }
#line 719 "export.m"
        {
#line 719 "export.m"
          backend_libs__export__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_87_87, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[20])));
#line 719 "export.m"
        }
#line 719 "export.m"
        {
#line 719 "export.m"
          backend_libs__export__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 0) = ((MR_Box) ((MR_String) "#define "));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 1) = ((MR_Box) (backend_libs__export__V_87_87));
#line 719 "export.m"
        }
#line 718 "export.m"
        {
#line 718 "export.m"
          backend_libs__export__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_83_83, 0) = ((MR_Box) ((MR_String) "\n"));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_83_83, 1) = ((MR_Box) (backend_libs__export__V_85_85));
#line 718 "export.m"
        }
#line 718 "export.m"
        {
#line 718 "export.m"
          backend_libs__export__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_82_82, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_82_82, 1) = ((MR_Box) (backend_libs__export__V_83_83));
#line 718 "export.m"
        }
#line 718 "export.m"
        {
#line 718 "export.m"
          backend_libs__export__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_79_79, 0) = ((MR_Box) ((MR_String) "#ifndef "));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_79_79, 1) = ((MR_Box) (backend_libs__export__V_82_82));
#line 718 "export.m"
        }
#line 717 "export.m"
        {
#line 717 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_79_79);
        }
#line 738 "export.m"
        {
#line 738 "export.m"
          backend_libs__export__V_127_127 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
        }
#line 739 "export.m"
        {
#line 739 "export.m"
          backend_libs__export__V_133_133 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
        }
#line 739 "export.m"
        {
#line 739 "export.m"
          backend_libs__export__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_132_132, 0) = ((MR_Box) (backend_libs__export__V_133_133));
#line 739 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[4])));
#line 739 "export.m"
        }
#line 739 "export.m"
        {
#line 739 "export.m"
          backend_libs__export__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 0) = ((MR_Box) ((MR_String) "#define "));
#line 739 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 1) = ((MR_Box) (backend_libs__export__V_132_132));
#line 739 "export.m"
        }
#line 738 "export.m"
        {
#line 738 "export.m"
          backend_libs__export__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 0) = ((MR_Box) ((MR_String) "\n"));
#line 738 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 1) = ((MR_Box) (backend_libs__export__V_130_130));
#line 738 "export.m"
        }
#line 738 "export.m"
        {
#line 738 "export.m"
          backend_libs__export__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_126_126, 0) = ((MR_Box) (backend_libs__export__V_127_127));
#line 738 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_126_126, 1) = ((MR_Box) (backend_libs__export__V_128_128));
#line 738 "export.m"
        }
#line 738 "export.m"
        {
#line 738 "export.m"
          backend_libs__export__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_123_123, 0) = ((MR_Box) ((MR_String) "#ifndef "));
#line 738 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_123_123, 1) = ((MR_Box) (backend_libs__export__V_126_126));
#line 738 "export.m"
        }
#line 737 "export.m"
        {
#line 737 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_123_123);
        }
#line 740 "export.m"
        {
#line 740 "export.m"
          backend_libs__export__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 740 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_137_137, 0) = ((MR_Box) (&backend_libs__export_scalar_common_3[0]));
#line 740 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_137_137, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_1));
#line 740 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_137_137, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_137_137, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_6));
#line 740 "export.m"
        }
#line 5383 "backend_libs.export.c"
        backend_libs__export__TypeCtorInfo_170_170 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 740 "export.m"
        {
#line 740 "export.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0, backend_libs__export__TypeCtorInfo_170_170, backend_libs__export__V_137_137, backend_libs__export__ExportedEnums_12, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv0_STATE_VARIABLE_IO_138_138);
        }
#line 741 "export.m"
        {
#line 741 "export.m"
          backend_libs__export__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 741 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_139_139, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[0]));
#line 741 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_139_139, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_2));
#line 741 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_139_139, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 741 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_139_139, 3) = ((MR_Box) (backend_libs__export__Globals_14));
#line 741 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_139_139, 4) = ((MR_Box) (backend_libs__export__SourceFileName_19));
#line 741 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__V_139_139, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_4[0])));
#line 741 "export.m"
        }
#line 741 "export.m"
        {
#line 741 "export.m"
          mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__export__TypeCtorInfo_170_170, backend_libs__export__V_139_139, backend_libs__export__ForeignDecls_10, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv1_STATE_VARIABLE_IO_140_140);
        }
#line 743 "export.m"
        {
#line 743 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "\n#endif\n");
        }
#line 745 "export.m"
        {
#line 745 "export.m"
          backend_libs__export__produce_header_file_2_3_p_0(backend_libs__export__C_ExportDecls_11);
        }
#line 752 "export.m"
        {
#line 752 "export.m"
          backend_libs__export__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_159_159, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 752 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[25])));
#line 752 "export.m"
        }
#line 752 "export.m"
        {
#line 752 "export.m"
          backend_libs__export__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_157_157, 0) = ((MR_Box) ((MR_String) "#endif /* "));
#line 752 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_157_157, 1) = ((MR_Box) (backend_libs__export__V_159_159));
#line 752 "export.m"
        }
#line 751 "export.m"
        {
#line 751 "export.m"
          backend_libs__export__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_155_155, 0) = ((MR_Box) ((MR_String) "\n"));
#line 751 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_155_155, 1) = ((MR_Box) (backend_libs__export__V_157_157));
#line 751 "export.m"
        }
#line 750 "export.m"
        {
#line 750 "export.m"
          backend_libs__export__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_153_153, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 750 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_153_153, 1) = ((MR_Box) (backend_libs__export__V_155_155));
#line 750 "export.m"
        }
#line 749 "export.m"
        {
#line 749 "export.m"
          backend_libs__export__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_151_151, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 749 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_151_151, 1) = ((MR_Box) (backend_libs__export__V_153_153));
#line 749 "export.m"
        }
#line 748 "export.m"
        {
#line 748 "export.m"
          backend_libs__export__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_149_149, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
#line 748 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_149_149, 1) = ((MR_Box) (backend_libs__export__V_151_151));
#line 748 "export.m"
        }
#line 747 "export.m"
        {
#line 747 "export.m"
          backend_libs__export__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_146_146, 0) = ((MR_Box) ((MR_String) "\n"));
#line 747 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_146_146, 1) = ((MR_Box) (backend_libs__export__V_149_149));
#line 747 "export.m"
        }
#line 746 "export.m"
        {
#line 746 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_146_146);
        }
#line 753 "export.m"
        {
#line 753 "export.m"
          mercury__io__set_output_stream_4_p_0(backend_libs__export__OutputStream_18, &backend_libs__export__V_25_25);
        }
#line 754 "export.m"
        {
#line 754 "export.m"
          mercury__io__close_output_3_p_0(backend_libs__export__FileStream_17);
        }
#line 756 "export.m"
        {
#line 756 "export.m"
          parse_tree__module_cmds__update_interface_4_p_0(backend_libs__export__Globals_14, backend_libs__export__FileName_15);
#line 756 "export.m"
          return;
        }
#line 701 "export.m"
      }
#line 689 "export.m"
  }
#line 51 "export.m"
}

#line 45 "export.m"
void MR_CALL 
backend_libs__export__get_foreign_export_defns_2_p_0(
#line 45 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 45 "export.m"
  MR_Word * backend_libs__export__ExportedProcsCode_4)
#line 45 "export.m"
{
#line 161 "export.m"
  {
#line 161 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 161 "export.m"
    MR_Word backend_libs__export__ExportedProcs_5;
#line 161 "export.m"
    MR_Word backend_libs__export__PredicateTable_6;
#line 161 "export.m"
    MR_Word backend_libs__export__Preds_7;

#line 162 "export.m"
    {
#line 162 "export.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ExportedProcs_5);
    }
#line 163 "export.m"
    {
#line 163 "export.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__PredicateTable_6);
    }
#line 164 "export.m"
    {
#line 164 "export.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_6, &backend_libs__export__Preds_7);
    }
#line 165 "export.m"
    {
#line 165 "export.m"
      backend_libs__export__to_c_4_p_0(backend_libs__export__Preds_7, backend_libs__export__ExportedProcs_5, backend_libs__export__ModuleInfo_3, backend_libs__export__ExportedProcsCode_4);
#line 165 "export.m"
      return;
    }
#line 161 "export.m"
  }
#line 45 "export.m"
}

#line 38 "export.m"
void MR_CALL 
backend_libs__export__get_foreign_export_decls_2_p_0(
#line 38 "export.m"
  MR_Word backend_libs__export__HLDS_3,
#line 38 "export.m"
  MR_Word * backend_libs__export__ForeignExportDecls_4)
#line 38 "export.m"
{
#line 117 "export.m"
  {
#line 117 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 117 "export.m"
    MR_Word backend_libs__export__PredicateTable_5;
#line 117 "export.m"
    MR_Word backend_libs__export__Preds_6;
#line 117 "export.m"
    MR_Word backend_libs__export__RevForeignDecls_7;
#line 117 "export.m"
    MR_Word backend_libs__export__ForeignDecls_8;
#line 117 "export.m"
    MR_Word backend_libs__export__ExportedProcs_9;
#line 117 "export.m"
    MR_Word backend_libs__export__ExportDecls_11;
#line 125 "export.m"
    MR_Word backend_libs__export__Globals_10;

#line 118 "export.m"
    {
#line 118 "export.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__HLDS_3, &backend_libs__export__PredicateTable_5);
    }
#line 119 "export.m"
    {
#line 119 "export.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_5, &backend_libs__export__Preds_6);
    }
#line 121 "export.m"
    {
#line 121 "export.m"
      hlds__hlds_module__module_info_get_foreign_decl_2_p_0(backend_libs__export__HLDS_3, &backend_libs__export__RevForeignDecls_7);
    }
#line 122 "export.m"
    {
#line 122 "export.m"
      backend_libs__export__ForeignDecls_8 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__export__RevForeignDecls_7);
    }
#line 124 "export.m"
    {
#line 124 "export.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__HLDS_3, &backend_libs__export__ExportedProcs_9);
    }
#line 125 "export.m"
    {
#line 125 "export.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__HLDS_3, &backend_libs__export__Globals_10);
    }
#line 126 "export.m"
    {
#line 126 "export.m"
      backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_p_0(backend_libs__export__Preds_6, backend_libs__export__ExportedProcs_9, backend_libs__export__HLDS_3, &backend_libs__export__ExportDecls_11);
    }
#line 129 "export.m"
    {
#line 129 "export.m"
      MR_Word base;
#line 129 "export.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "export.m"
      *backend_libs__export__ForeignExportDecls_4 = base;
#line 129 "export.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__export__ForeignDecls_8));
#line 129 "export.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__export__ExportDecls_11));
#line 129 "export.m"
    }
#line 117 "export.m"
  }
#line 38 "export.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.export. */
