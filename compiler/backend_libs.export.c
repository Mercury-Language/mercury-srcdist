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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 156 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;

#line 159 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 162 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 165 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 168 "backend_libs.export.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 171 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 174 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 177 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1];

#line 180 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0;

#line 183 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1];

#line 186 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1;

#line 189 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1];

#line 192 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1];

#line 195 "backend_libs.export.c"
static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0[2];

#line 198 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2];

#line 201 "backend_libs.export.c"
static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2];

#line 204 "backend_libs.export.c"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
#line 207 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 209 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2);

#line 212 "backend_libs.export.c"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
#line 215 "backend_libs.export.c"
  MR_Box * backend_libs__export__wrapper_arg_1,
#line 217 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 219 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_3);

#line 930 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_99_111_110_115_116_110_97_109_101_95_116_97_103_95_95_91_49_93_95_48_4_p_0(
#line 930 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 982 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__982__1_2_p_0(
#line 982 "export.m"
  MR_Integer backend_libs__export__Arity_16,
#line 982 "export.m"
  MR_Integer backend_libs__export__HeadVar__2_65);

#line 882 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__882__1_2_p_0(
#line 882 "export.m"
  MR_Word backend_libs__export__Lang_8,
#line 882 "export.m"
  MR_Word backend_libs__export__HeadVar__2_44);

#line 827 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__827__1_2_p_0(
#line 827 "export.m"
  MR_Word backend_libs__export__Lang_12,
#line 827 "export.m"
  MR_Word backend_libs__export__HeadVar__2_23);

#line 292 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__292__1_2_p_0(
#line 292 "export.m"
  MR_Word backend_libs__export__Lang_9,
#line 292 "export.m"
  MR_Word backend_libs__export__HeadVar__2_30);

#line 926 "export.m"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
#line 926 "export.m"
  MR_Word * backend_libs__export__HeadVar__1_1,
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3);

#line 926 "export.m"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 982 "export.m"
static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0_1(
#line 982 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 942 "export.m"
static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
#line 942 "export.m"
  MR_Word backend_libs__export__TypeCtor_7,
#line 942 "export.m"
  MR_Word backend_libs__export__Mapping_8,
#line 942 "export.m"
  MR_Word backend_libs__export__TagValues_9,
#line 942 "export.m"
  MR_Word backend_libs__export__Ctor_10,
#line 942 "export.m"
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56,
#line 942 "export.m"
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTags_57);

#line 930 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tag_4_p_0(
#line 930 "export.m"
  MR_Word backend_libs__export__HeadVar__1_5,
#line 930 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 917 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_3(
#line 917 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 917 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 917 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 917 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 908 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_2(
#line 908 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 908 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 908 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 908 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 882 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_1(
#line 882 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 876 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0(
#line 876 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 876 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_6);

#line 870 "export.m"
static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
#line 870 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_2);

#line 827 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0_1(
#line 827 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 820 "export.m"
static void MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0(
#line 820 "export.m"
  MR_Word backend_libs__export__Globals_7,
#line 820 "export.m"
  MR_String backend_libs__export__SourceFileName_8,
#line 820 "export.m"
  MR_Word backend_libs__export__MaybeDesiredIsLocal_9,
#line 820 "export.m"
  MR_Word backend_libs__export__DeclCode_10);

#line 795 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_2_3_p_0(
#line 795 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1);

#line 574 "export.m"
static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
#line 574 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 574 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 574 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 574 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 540 "export.m"
static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
#line 540 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 540 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 540 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 540 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 493 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
#line 493 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 493 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 493 "export.m"
  MR_Integer backend_libs__export__LastArgNum_3,
#line 493 "export.m"
  MR_Word backend_libs__export__HeadVar__4_4,
#line 493 "export.m"
  MR_String * backend_libs__export__HeadVar__5_5);

#line 484 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
#line 484 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 484 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 484 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 484 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 473 "export.m"
static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
#line 473 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 473 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 466 "export.m"
static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
#line 466 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 466 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1);

#line 373 "export.m"
static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
#line 373 "export.m"
  MR_Word backend_libs__export__ModuleInfo_11,
#line 373 "export.m"
  MR_Word backend_libs__export__Preds_12,
#line 373 "export.m"
  MR_Word backend_libs__export__PredId_13,
#line 373 "export.m"
  MR_Integer backend_libs__export__ProcId_14,
#line 373 "export.m"
  MR_String * backend_libs__export__HowToDeclareLabel_15,
#line 373 "export.m"
  MR_String * backend_libs__export__C_RetType_16,
#line 373 "export.m"
  MR_String * backend_libs__export__MaybeDeclareRetval_17,
#line 373 "export.m"
  MR_String * backend_libs__export__MaybeFail_18,
#line 373 "export.m"
  MR_String * backend_libs__export__MaybeSucceed_19,
#line 373 "export.m"
  MR_Word * backend_libs__export__ArgInfoTypes_20);

#line 292 "export.m"
static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
#line 292 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 286 "export.m"
static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
#line 286 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 286 "export.m"
  MR_Word backend_libs__export__Preds_6,
#line 286 "export.m"
  MR_Word backend_libs__export__ExportedProc_7,
#line 286 "export.m"
  MR_Word * backend_libs__export__ExportDefn_8);

#line 171 "export.m"
static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
#line 171 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 171 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 171 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 171 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4);

#line 134 "export.m"
static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
#line 134 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 134 "export.m"
  MR_Word backend_libs__export__Preds_2,
#line 134 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 134 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4);

#line 766 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
#line 766 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 766 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 766 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 766 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 763 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
#line 763 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 763 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 763 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 763 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 750 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
#line 750 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 750 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1);

#line 749 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
#line 749 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 749 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__export_scalar_common_1[3][3];

static /* final */ const MR_Box backend_libs__export_scalar_common_2[27][2];

static /* final */ const MR_Box backend_libs__export_scalar_common_3[2][4];

static /* final */ const MR_Box backend_libs__export_scalar_common_4[4][5];

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][7];

static /* final */ const MR_Box backend_libs__export_scalar_common_6[2][1];

static /* final */ const MR_Box backend_libs__export_scalar_common_7[2][9];


#line 989 "export.m"
/* sealed */ struct backend_libs__export__vector_common_type_8_0_s {
#line 989 "export.m"
  const MR_String backend_libs__export__vector_common_type_8_0__vct_8_f_0;
#line 989 "export.m"
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
    ((MR_Box) (&backend_libs__export_scalar_common_3[0])),
    ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_2[27][2] = {
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
};

static /* final */ const MR_Box backend_libs__export_scalar_common_3[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__export_scalar_common_4[0])),
    ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__export_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
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
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
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

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][7] = {
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

static /* final */ const MR_Box backend_libs__export_scalar_common_7[2][9] = {
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



#line 864 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0
  }
};

#line 872 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 881 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 890 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 899 "backend_libs.export.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 908 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 916 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 925 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 930 "backend_libs.export.c"
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

#line 945 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 950 "backend_libs.export.c"
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

#line 965 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0
};

#line 970 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

#line 975 "backend_libs.export.c"
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

#line 989 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0,
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

#line 995 "backend_libs.export.c"
static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1001 "backend_libs.export.c"
const MR_TypeCtorInfo_Struct backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1018 "backend_libs.export.c"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
#line 1021 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 1023 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2)
#line 1025 "backend_libs.export.c"
{
#line 1027 "backend_libs.export.c"
  {
#line 1029 "backend_libs.export.c"
    MR_bool backend_libs__export__succeeded;

#line 1032 "backend_libs.export.c"
    {
#line 1034 "backend_libs.export.c"
      backend_libs__export__succeeded = backend_libs__export____Unify____exported_enum_tag_rep_0_0(((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2));
    }
#line 1037 "backend_libs.export.c"
    return backend_libs__export__succeeded;
#line 1039 "backend_libs.export.c"
  }
#line 1041 "backend_libs.export.c"
}

#line 1044 "backend_libs.export.c"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
#line 1047 "backend_libs.export.c"
  MR_Box * backend_libs__export__wrapper_arg_1,
#line 1049 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 1051 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_3)
#line 1053 "backend_libs.export.c"
{
#line 1055 "backend_libs.export.c"
  {
#line 1057 "backend_libs.export.c"
    MR_Word backend_libs__export__conv0_HeadVar__1_1;

#line 1060 "backend_libs.export.c"
    {
#line 1062 "backend_libs.export.c"
      backend_libs__export____Compare____exported_enum_tag_rep_0_0(&backend_libs__export__conv0_HeadVar__1_1, ((MR_Word) backend_libs__export__wrapper_arg_2), ((MR_Word) backend_libs__export__wrapper_arg_3));
    }
#line 1065 "backend_libs.export.c"
    *backend_libs__export__wrapper_arg_1 = ((MR_Box) (backend_libs__export__conv0_HeadVar__1_1));
#line 1067 "backend_libs.export.c"
  }
#line 1069 "backend_libs.export.c"
}

#line 930 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_99_111_110_115_116_110_97_109_101_95_116_97_103_95_95_91_49_93_95_48_4_p_0(
#line 930 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 930 "export.m"
{
#line 933 "export.m"
  {
#line 933 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 933 "export.m"
    MR_String backend_libs__export__ConstName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 933 "export.m"
    MR_Word backend_libs__export__Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));

#line 937 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Tag_7)) == (MR_mktag((MR_Integer) 0))))
#line 935 "export.m"
      {
#line 935 "export.m"
        MR_Integer backend_libs__export__RawIntTag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__Tag_7, (MR_Integer) 0)));
#line 935 "export.m"
        MR_String backend_libs__export__V_49_49;
#line 935 "export.m"
        MR_Word backend_libs__export__V_55_55;
#line 935 "export.m"
        MR_String backend_libs__export__V_58_58;

#line 936 "export.m"
        {
#line 936 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "#define ");
        }
#line 1106 "backend_libs.export.c"
        backend_libs__export__V_55_55 = (MR_Word) &backend_libs__export_scalar_common_6[1];
#line 936 "export.m"
        {
#line 936 "export.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__export__V_55_55, backend_libs__export__ConstName_6, &backend_libs__export__V_49_49);
        }
#line 936 "export.m"
        {
#line 936 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_49_49);
        }
#line 936 "export.m"
        {
#line 936 "export.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 936 "export.m"
        {
#line 936 "export.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(backend_libs__export__V_55_55, backend_libs__export__RawIntTag_9, &backend_libs__export__V_58_58);
        }
#line 936 "export.m"
        {
#line 936 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_58_58);
#line 936 "export.m"
          return;
        }
#line 935 "export.m"
      }
#line 937 "export.m"
    else
#line 938 "export.m"
      {
#line 938 "export.m"
        MR_String backend_libs__export__RawStrTag_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__Tag_7, (MR_Integer) 0)));
#line 938 "export.m"
        MR_String backend_libs__export__V_30_30;
#line 938 "export.m"
        MR_Word backend_libs__export__V_36_36;
#line 938 "export.m"
        MR_String backend_libs__export__V_39_39;

#line 939 "export.m"
        {
#line 939 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "#define ");
        }
#line 1155 "backend_libs.export.c"
        backend_libs__export__V_36_36 = (MR_Word) &backend_libs__export_scalar_common_6[1];
#line 939 "export.m"
        {
#line 939 "export.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__export__V_36_36, backend_libs__export__ConstName_6, &backend_libs__export__V_30_30);
        }
#line 939 "export.m"
        {
#line 939 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_30_30);
        }
#line 939 "export.m"
        {
#line 939 "export.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 939 "export.m"
        {
#line 939 "export.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__export__V_36_36, backend_libs__export__RawStrTag_10, &backend_libs__export__V_39_39);
        }
#line 939 "export.m"
        {
#line 939 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_39_39);
#line 939 "export.m"
          return;
        }
#line 938 "export.m"
      }
#line 933 "export.m"
  }
#line 930 "export.m"
}

#line 982 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__982__1_2_p_0(
#line 982 "export.m"
  MR_Integer backend_libs__export__Arity_16,
#line 982 "export.m"
  MR_Integer backend_libs__export__HeadVar__2_65)
#line 982 "export.m"
{
#line 982 "export.m"
  {
#line 982 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Arity_16 == backend_libs__export__HeadVar__2_65);

#line 982 "export.m"
    return backend_libs__export__succeeded;
#line 982 "export.m"
  }
#line 982 "export.m"
}

#line 882 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__882__1_2_p_0(
#line 882 "export.m"
  MR_Word backend_libs__export__Lang_8,
#line 882 "export.m"
  MR_Word backend_libs__export__HeadVar__2_44)
#line 882 "export.m"
{
#line 882 "export.m"
  {
#line 882 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_8 == backend_libs__export__HeadVar__2_44);

#line 882 "export.m"
    return backend_libs__export__succeeded;
#line 882 "export.m"
  }
#line 882 "export.m"
}

#line 827 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__827__1_2_p_0(
#line 827 "export.m"
  MR_Word backend_libs__export__Lang_12,
#line 827 "export.m"
  MR_Word backend_libs__export__HeadVar__2_23)
#line 827 "export.m"
{
#line 827 "export.m"
  {
#line 827 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_12 == backend_libs__export__HeadVar__2_23);

#line 827 "export.m"
    return backend_libs__export__succeeded;
#line 827 "export.m"
  }
#line 827 "export.m"
}

#line 292 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__292__1_2_p_0(
#line 292 "export.m"
  MR_Word backend_libs__export__Lang_9,
#line 292 "export.m"
  MR_Word backend_libs__export__HeadVar__2_30)
#line 292 "export.m"
{
#line 292 "export.m"
  {
#line 292 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_9 == backend_libs__export__HeadVar__2_30);

#line 292 "export.m"
    return backend_libs__export__succeeded;
#line 292 "export.m"
  }
#line 292 "export.m"
}

#line 926 "export.m"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
#line 926 "export.m"
  MR_Word * backend_libs__export__HeadVar__1_1,
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3)
#line 926 "export.m"
{
#line 926 "export.m"
  {
#line 926 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 926 "export.m"
    MR_Integer backend_libs__export__CastX_12 = (MR_Integer) backend_libs__export__HeadVar__2_2;
#line 926 "export.m"
    MR_Integer backend_libs__export__CastY_13 = (MR_Integer) backend_libs__export__HeadVar__3_3;

#line 926 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__CastX_12 == backend_libs__export__CastY_13);
#line 926 "export.m"
    if (backend_libs__export__succeeded)
#line 1299 "backend_libs.export.c"
      *backend_libs__export__HeadVar__1_1 = (MR_Integer) 0;
#line 926 "export.m"
    else
#line 926 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 926 "export.m"
      {
#line 926 "export.m"
        MR_Integer backend_libs__export__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

#line 926 "export.m"
        if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 926 "export.m"
          {
#line 926 "export.m"
            MR_Integer backend_libs__export__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

#line 926 "export.m"
            {
#line 926 "export.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__V_16_16, backend_libs__export__V_5_5);
#line 926 "export.m"
              return;
            }
#line 926 "export.m"
          }
#line 926 "export.m"
        else
#line 1328 "backend_libs.export.c"
          *backend_libs__export__HeadVar__1_1 = (MR_Integer) 1;
#line 926 "export.m"
      }
#line 926 "export.m"
    else
#line 926 "export.m"
      {
#line 926 "export.m"
        MR_String backend_libs__export__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

#line 926 "export.m"
        if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1341 "backend_libs.export.c"
          *backend_libs__export__HeadVar__1_1 = (MR_Integer) 2;
#line 926 "export.m"
        else
#line 926 "export.m"
          {
#line 926 "export.m"
            MR_String backend_libs__export__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

#line 926 "export.m"
            {
#line 926 "export.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__V_17_17, backend_libs__export__V_11_11);
#line 926 "export.m"
              return;
            }
#line 926 "export.m"
          }
#line 926 "export.m"
      }
#line 926 "export.m"
  }
#line 926 "export.m"
}

#line 926 "export.m"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 926 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 926 "export.m"
{
#line 926 "export.m"
  {
#line 926 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 926 "export.m"
    MR_Integer backend_libs__export__CastX_7 = (MR_Integer) backend_libs__export__HeadVar__1_1;
#line 926 "export.m"
    MR_Integer backend_libs__export__CastY_8 = (MR_Integer) backend_libs__export__HeadVar__2_2;

#line 926 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__CastX_7 == backend_libs__export__CastY_8);
#line 926 "export.m"
    if (backend_libs__export__succeeded)
#line 926 "export.m"
      backend_libs__export__succeeded = MR_TRUE;
#line 926 "export.m"
    else
#line 926 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 926 "export.m"
      {
#line 926 "export.m"
        MR_Integer backend_libs__export__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 926 "export.m"
        MR_Integer backend_libs__export__V_4_4;

#line 926 "export.m"
        backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 926 "export.m"
        if (backend_libs__export__succeeded)
#line 926 "export.m"
          {
#line 926 "export.m"
            backend_libs__export__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 1409 "backend_libs.export.c"
            backend_libs__export__succeeded = (backend_libs__export__V_3_3 == backend_libs__export__V_4_4);
#line 926 "export.m"
          }
#line 926 "export.m"
      }
#line 926 "export.m"
    else
#line 926 "export.m"
      {
#line 926 "export.m"
        MR_String backend_libs__export__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 926 "export.m"
        MR_String backend_libs__export__V_6_6;

#line 926 "export.m"
        backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 926 "export.m"
        if (backend_libs__export__succeeded)
#line 926 "export.m"
          {
#line 926 "export.m"
            backend_libs__export__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 1432 "backend_libs.export.c"
            backend_libs__export__succeeded = (strcmp(backend_libs__export__V_5_5, backend_libs__export__V_6_6) == 0);
#line 926 "export.m"
          }
#line 926 "export.m"
      }
#line 926 "export.m"
    return backend_libs__export__succeeded;
#line 926 "export.m"
  }
#line 926 "export.m"
}

#line 982 "export.m"
static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0_1(
#line 982 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 982 "export.m"
{
#line 982 "export.m"
  {
#line 982 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 982 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 982 "export.m"
    {
#line 982 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__982__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 982 "export.m"
    return backend_libs__export__succeeded;
#line 982 "export.m"
  }
#line 982 "export.m"
}

#line 942 "export.m"
static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
#line 942 "export.m"
  MR_Word backend_libs__export__TypeCtor_7,
#line 942 "export.m"
  MR_Word backend_libs__export__Mapping_8,
#line 942 "export.m"
  MR_Word backend_libs__export__TagValues_9,
#line 942 "export.m"
  MR_Word backend_libs__export__Ctor_10,
#line 942 "export.m"
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56,
#line 942 "export.m"
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTags_57)
#line 942 "export.m"
{
#line 948 "export.m"
  {
#line 948 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 948 "export.m"
    MR_Word backend_libs__export__QualifiedCtorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 2)));
#line 948 "export.m"
    MR_Integer backend_libs__export__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 4)));
#line 948 "export.m"
    MR_Word backend_libs__export__ConsId_18;
#line 948 "export.m"
    MR_Word backend_libs__export__TagVal_19;
#line 948 "export.m"
    MR_Word backend_libs__export__Tag_21;
#line 948 "export.m"
    MR_Word backend_libs__export__UnqualifiedCtorName_54;
#line 948 "export.m"
    MR_String backend_libs__export__ForeignName_55;
#line 948 "export.m"
    MR_Word backend_libs__export__V_61_61;
#line 948 "export.m"
    MR_String backend_libs__export__V_66_66;
#line 948 "export.m"
    MR_Word backend_libs__export__V_67_67;
#line 949 "export.m"
    MR_Word backend_libs__export__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 0)));
#line 949 "export.m"
    MR_Word backend_libs__export__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 1)));
#line 949 "export.m"
    MR_Word backend_libs__export___Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 3)));
#line 949 "export.m"
    MR_Word backend_libs__export__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 5)));
#line 951 "export.m"
    MR_Box backend_libs__export__conv0_TagVal_19;
#line 984 "export.m"
    MR_Box backend_libs__export__conv1_ForeignName_55;

#line 950 "export.m"
    {
#line 950 "export.m"
      backend_libs__export__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 950 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 950 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 1) = ((MR_Box) (backend_libs__export__QualifiedCtorName_14));
#line 950 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 2) = ((MR_Box) (backend_libs__export__Arity_16));
#line 950 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 3) = ((MR_Box) (backend_libs__export__TypeCtor_7));
#line 950 "export.m"
    }
#line 951 "export.m"
    {
#line 951 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__export__TagValues_9, ((MR_Box) (backend_libs__export__ConsId_18)), &backend_libs__export__conv0_TagVal_19);
    }
#line 951 "export.m"
    backend_libs__export__TagVal_19 = ((MR_Word) backend_libs__export__conv0_TagVal_19);
#line 955 "export.m"
#line 955 "export.m"
    switch (MR_tag((MR_Word) backend_libs__export__TagVal_19)) {
#line 955 "export.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 955 "export.m"
      case (MR_Integer) 0:
#line 978 "export.m"
        {
#line 979 "export.m"
          {
#line 979 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
#line 979 "export.m"
            return;
          }
#line 978 "export.m"
        }
#line 955 "export.m"
        break;
#line 955 "export.m"
      case (MR_Integer) 1:
#line 955 "export.m"
      case (MR_Integer) 2:
#line 978 "export.m"
        {
#line 979 "export.m"
          {
#line 979 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
#line 979 "export.m"
            return;
          }
#line 978 "export.m"
        }
#line 955 "export.m"
        break;
#line 955 "export.m"
      case (MR_Integer) 3:
#line 955 "export.m"
#line 955 "export.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 0)))) {
#line 955 "export.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 955 "export.m"
          case (MR_Integer) 0:
#line 953 "export.m"
            {
#line 953 "export.m"
              MR_Integer backend_libs__export__IntTag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 1)));

#line 954 "export.m"
              {
#line 954 "export.m"
                backend_libs__export__Tag_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 954 "export.m"
                MR_hl_field(MR_mktag(0), backend_libs__export__Tag_21, 0) = ((MR_Box) (backend_libs__export__IntTag_20));
#line 954 "export.m"
              }
#line 953 "export.m"
            }
#line 955 "export.m"
            break;
#line 955 "export.m"
          case (MR_Integer) 1:
#line 956 "export.m"
            {
#line 956 "export.m"
              MR_String backend_libs__export__ForeignTag_23 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 2)));
#line 956 "export.m"
              MR_Word backend_libs__export___ForeignLang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 1)));

#line 957 "export.m"
              {
#line 957 "export.m"
                backend_libs__export__Tag_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 957 "export.m"
                MR_hl_field(MR_mktag(1), backend_libs__export__Tag_21, 0) = ((MR_Box) (backend_libs__export__ForeignTag_23));
#line 957 "export.m"
              }
#line 956 "export.m"
            }
#line 955 "export.m"
            break;
#line 955 "export.m"
          case (MR_Integer) 2:
#line 955 "export.m"
          case (MR_Integer) 3:
#line 955 "export.m"
          case (MR_Integer) 4:
#line 955 "export.m"
          case (MR_Integer) 5:
#line 955 "export.m"
          case (MR_Integer) 6:
#line 955 "export.m"
          case (MR_Integer) 7:
#line 955 "export.m"
          case (MR_Integer) 8:
#line 955 "export.m"
          case (MR_Integer) 9:
#line 955 "export.m"
          case (MR_Integer) 10:
#line 955 "export.m"
          case (MR_Integer) 11:
#line 955 "export.m"
          case (MR_Integer) 12:
#line 955 "export.m"
          case (MR_Integer) 13:
#line 955 "export.m"
          case (MR_Integer) 14:
#line 955 "export.m"
          case (MR_Integer) 15:
#line 955 "export.m"
          case (MR_Integer) 16:
#line 978 "export.m"
            {
#line 979 "export.m"
              {
#line 979 "export.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant requires an int tag");
#line 979 "export.m"
                return;
              }
#line 978 "export.m"
            }
#line 955 "export.m"
            break;
#line 955 "export.m"
        }
#line 955 "export.m"
        break;
#line 955 "export.m"
    }
#line 982 "export.m"
    {
#line 982 "export.m"
      backend_libs__export__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 982 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[3]));
#line 982 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 1) = ((MR_Box) (backend_libs__export__foreign_const_name_and_tag_6_p_0_1));
#line 982 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 982 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 3) = ((MR_Box) (backend_libs__export__Arity_16));
#line 982 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 4) = ((MR_Box) ((MR_Integer) 0));
#line 982 "export.m"
    }
#line 982 "export.m"
    {
#line 982 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_61_61, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.foreign_const_name_and_tag\'/6", (MR_String) "enum constant arity != 0");
    }
#line 983 "export.m"
    {
#line 983 "export.m"
      backend_libs__export__V_66_66 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__export__QualifiedCtorName_14);
    }
#line 983 "export.m"
    {
#line 983 "export.m"
      backend_libs__export__UnqualifiedCtorName_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 983 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__UnqualifiedCtorName_54, 0) = ((MR_Box) (backend_libs__export__V_66_66));
#line 983 "export.m"
    }
#line 984 "export.m"
    {
#line 984 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__export__Mapping_8, ((MR_Box) (backend_libs__export__UnqualifiedCtorName_54)), &backend_libs__export__conv1_ForeignName_55);
    }
#line 984 "export.m"
    backend_libs__export__ForeignName_55 = ((MR_String) backend_libs__export__conv1_ForeignName_55);
#line 985 "export.m"
    {
#line 985 "export.m"
      backend_libs__export__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 985 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_67_67, 0) = ((MR_Box) (backend_libs__export__ForeignName_55));
#line 985 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_67_67, 1) = ((MR_Box) (backend_libs__export__Tag_21));
#line 985 "export.m"
    }
#line 985 "export.m"
    {
#line 985 "export.m"
      mercury__list__cons_3_p_0((MR_Word) &backend_libs__export_scalar_common_1[1], ((MR_Box) (backend_libs__export__V_67_67)), backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56, backend_libs__export__STATE_VARIABLE_NamesAndTags_57);
#line 985 "export.m"
      return;
    }
#line 948 "export.m"
  }
#line 942 "export.m"
}

#line 930 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tag_4_p_0(
#line 930 "export.m"
  MR_Word backend_libs__export__HeadVar__1_5,
#line 930 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 930 "export.m"
{
#line 933 "export.m"
  {
#line 933 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 933 "export.m"
    {
#line 933 "export.m"
      backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_99_111_110_115_116_110_97_109_101_95_116_97_103_95_95_91_49_93_95_48_4_p_0(backend_libs__export__HeadVar__2_2);
#line 933 "export.m"
      return;
    }
#line 933 "export.m"
  }
#line 930 "export.m"
}

#line 917 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_3(
#line 917 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 917 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 917 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 917 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 917 "export.m"
{
#line 917 "export.m"
  {
#line 917 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 917 "export.m"
    {
#line 917 "export.m"
      backend_libs__export__output_exported_enum_constname_tag_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 917 "export.m"
      return;
    }
#line 917 "export.m"
  }
#line 917 "export.m"
}

#line 908 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_2(
#line 908 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 908 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 908 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 908 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 908 "export.m"
{
#line 908 "export.m"
  {
#line 908 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;
#line 908 "export.m"
    MR_Word backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57;

#line 908 "export.m"
    {
#line 908 "export.m"
      backend_libs__export__foreign_const_name_and_tag_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2), &backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57);
    }
#line 908 "export.m"
    *backend_libs__export__wrapper_arg_3 = ((MR_Box) (backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57));
#line 908 "export.m"
  }
#line 908 "export.m"
}

#line 882 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_1(
#line 882 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 882 "export.m"
{
#line 882 "export.m"
  {
#line 882 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 882 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 882 "export.m"
    {
#line 882 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__882__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 882 "export.m"
    return backend_libs__export__succeeded;
#line 882 "export.m"
  }
#line 882 "export.m"
}

#line 876 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0(
#line 876 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 876 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_6)
#line 876 "export.m"
{
#line 879 "export.m"
  {
#line 879 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 879 "export.m"
    MR_Word backend_libs__export__Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 0)));
#line 879 "export.m"
    MR_Word backend_libs__export__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 1)));
#line 879 "export.m"
    MR_Word backend_libs__export__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 2)));
#line 879 "export.m"
    MR_Word backend_libs__export__NameMapping_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 3)));
#line 879 "export.m"
    MR_Word backend_libs__export__TypeTable_12;
#line 879 "export.m"
    MR_Word backend_libs__export__TypeDefn_13;
#line 879 "export.m"
    MR_Word backend_libs__export__TypeBody_14;
#line 879 "export.m"
    MR_Word backend_libs__export__V_40_40;

#line 882 "export.m"
    {
#line 882 "export.m"
      backend_libs__export__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 882 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
#line 882 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_1));
#line 882 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 882 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 3) = ((MR_Box) (backend_libs__export__Lang_8));
#line 882 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 4) = ((MR_Box) ((MR_Integer) 0));
#line 882 "export.m"
    }
#line 882 "export.m"
    {
#line 882 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_40_40, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "Lang != lang_c");
    }
#line 883 "export.m"
    {
#line 883 "export.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__export__ModuleInfo_5, &backend_libs__export__TypeTable_12);
    }
#line 884 "export.m"
    {
#line 884 "export.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__export__TypeTable_12, backend_libs__export__TypeCtor_10, &backend_libs__export__TypeDefn_13);
    }
#line 885 "export.m"
    {
#line 885 "export.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__export__TypeDefn_13, &backend_libs__export__TypeBody_14);
    }
#line 893 "export.m"
#line 893 "export.m"
    switch (MR_tag((MR_Word) backend_libs__export__TypeBody_14)) {
#line 893 "export.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 893 "export.m"
      case (MR_Integer) 0:
#line 891 "export.m"
        {
#line 892 "export.m"
          {
#line 892 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "invalid type for foreign_export_enum");
#line 892 "export.m"
            return;
          }
#line 891 "export.m"
        }
#line 893 "export.m"
        break;
#line 893 "export.m"
      case (MR_Integer) 1:
#line 896 "export.m"
        {
#line 896 "export.m"
          MR_Word backend_libs__export__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 0)));
#line 896 "export.m"
          MR_Word backend_libs__export__TagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 1)));
#line 896 "export.m"
          MR_Word backend_libs__export__DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 3)));
#line 894 "export.m"
          MR_Word backend_libs__export___CheaperTagTest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 2)));
#line 894 "export.m"
          MR_Word backend_libs__export___MaybeUserEq_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 4)));
#line 894 "export.m"
          MR_Word backend_libs__export___MaybeDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 5)));
#line 894 "export.m"
          MR_Word backend_libs__export___ReservedTag_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 894 "export.m"
          MR_Word backend_libs__export___ReservedAddr_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 894 "export.m"
          MR_Word backend_libs__export___IsForeignType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 7)));

#line 902 "export.m"
#line 902 "export.m"
          switch (MR_tag((MR_Word) backend_libs__export__DuTypeKind_23)) {
#line 902 "export.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 902 "export.m"
            case (MR_Integer) 0:
#line 902 "export.m"
#line 902 "export.m"
              switch (MR_unmkbody(backend_libs__export__DuTypeKind_23)) {
#line 902 "export.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 902 "export.m"
                case (MR_Integer) 0:
#line 902 "export.m"
                case (MR_Integer) 1:
#line 906 "export.m"
                  {
#line 906 "export.m"
                    MR_Word backend_libs__export__TypeInfo_65_65;
#line 906 "export.m"
                    MR_Word backend_libs__export__ForeignNamesAndTags0_33;
#line 906 "export.m"
                    MR_Word backend_libs__export__ForeignNamesAndTags_34;
#line 906 "export.m"
                    MR_Word backend_libs__export__Globals_35;
#line 906 "export.m"
                    MR_String backend_libs__export__File_36;
#line 906 "export.m"
                    MR_Integer backend_libs__export__Line_37;
#line 906 "export.m"
                    MR_Word backend_libs__export__V_45_45;
#line 906 "export.m"
                    MR_Word backend_libs__export__V_49_49;
#line 907 "export.m"
                    MR_Box backend_libs__export__conv1_ForeignNamesAndTags0_33;

#line 908 "export.m"
                    {
#line 908 "export.m"
                      backend_libs__export__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 908 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[1]));
#line 908 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_2));
#line 908 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 908 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 3) = ((MR_Box) (backend_libs__export__TypeCtor_10));
#line 908 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 4) = ((MR_Box) (backend_libs__export__NameMapping_11));
#line 908 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 5) = ((MR_Box) (backend_libs__export__TagValues_21));
#line 908 "export.m"
                    }
#line 907 "export.m"
                    {
#line 907 "export.m"
                      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &backend_libs__export_scalar_common_2[0], backend_libs__export__V_45_45, backend_libs__export__Ctors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__export__conv1_ForeignNamesAndTags0_33);
                    }
#line 907 "export.m"
                    backend_libs__export__ForeignNamesAndTags0_33 = ((MR_Word) backend_libs__export__conv1_ForeignNamesAndTags0_33);
#line 2027 "backend_libs.export.c"
                    backend_libs__export__TypeInfo_65_65 = (MR_Word) &backend_libs__export_scalar_common_1[1];
#line 911 "export.m"
                    {
#line 911 "export.m"
                      mercury__list__reverse_2_p_0(backend_libs__export__TypeInfo_65_65, backend_libs__export__ForeignNamesAndTags0_33, &backend_libs__export__ForeignNamesAndTags_34);
                    }
#line 912 "export.m"
                    {
#line 912 "export.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_5, &backend_libs__export__Globals_35);
                    }
#line 913 "export.m"
                    {
#line 913 "export.m"
                      mercury__term__context_file_2_p_0(backend_libs__export__Context_9, &backend_libs__export__File_36);
                    }
#line 914 "export.m"
                    {
#line 914 "export.m"
                      mercury__term__context_line_2_p_0(backend_libs__export__Context_9, &backend_libs__export__Line_37);
                    }
#line 915 "export.m"
                    {
#line 915 "export.m"
                      backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_35, backend_libs__export__File_36, backend_libs__export__Line_37);
                    }
#line 917 "export.m"
                    {
#line 917 "export.m"
                      backend_libs__export__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 917 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[1]));
#line 917 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_3));
#line 917 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 917 "export.m"
                      MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_5));
#line 917 "export.m"
                    }
#line 916 "export.m"
                    {
#line 916 "export.m"
                      mercury__io__write_list_5_p_0(backend_libs__export__TypeInfo_65_65, backend_libs__export__ForeignNamesAndTags_34, (MR_String) "\n", backend_libs__export__V_49_49);
                    }
#line 918 "export.m"
                    {
#line 918 "export.m"
                      mercury__io__nl_2_p_0();
                    }
#line 919 "export.m"
                    {
#line 919 "export.m"
                      backend_libs__c_util__reset_line_num_3_p_0(backend_libs__export__Globals_35);
#line 919 "export.m"
                      return;
                    }
#line 906 "export.m"
                  }
#line 902 "export.m"
                  break;
#line 902 "export.m"
                case (MR_Integer) 2:
#line 900 "export.m"
                  {
#line 901 "export.m"
                    {
#line 901 "export.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "d.u. is not an enumeration.");
#line 901 "export.m"
                      return;
                    }
#line 900 "export.m"
                  }
#line 902 "export.m"
                  break;
#line 902 "export.m"
              }
#line 902 "export.m"
              break;
#line 902 "export.m"
            case (MR_Integer) 1:
#line 906 "export.m"
              {
#line 906 "export.m"
                MR_Word backend_libs__export__TypeInfo_65_65;
#line 906 "export.m"
                MR_Word backend_libs__export__ForeignNamesAndTags0_33;
#line 906 "export.m"
                MR_Word backend_libs__export__ForeignNamesAndTags_34;
#line 906 "export.m"
                MR_Word backend_libs__export__Globals_35;
#line 906 "export.m"
                MR_String backend_libs__export__File_36;
#line 906 "export.m"
                MR_Integer backend_libs__export__Line_37;
#line 906 "export.m"
                MR_Word backend_libs__export__V_45_45;
#line 906 "export.m"
                MR_Word backend_libs__export__V_49_49;
#line 907 "export.m"
                MR_Box backend_libs__export__conv1_ForeignNamesAndTags0_33;

#line 908 "export.m"
                {
#line 908 "export.m"
                  backend_libs__export__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 908 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[1]));
#line 908 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_2));
#line 908 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 908 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 3) = ((MR_Box) (backend_libs__export__TypeCtor_10));
#line 908 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 4) = ((MR_Box) (backend_libs__export__NameMapping_11));
#line 908 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 5) = ((MR_Box) (backend_libs__export__TagValues_21));
#line 908 "export.m"
                }
#line 907 "export.m"
                {
#line 907 "export.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &backend_libs__export_scalar_common_2[0], backend_libs__export__V_45_45, backend_libs__export__Ctors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__export__conv1_ForeignNamesAndTags0_33);
                }
#line 907 "export.m"
                backend_libs__export__ForeignNamesAndTags0_33 = ((MR_Word) backend_libs__export__conv1_ForeignNamesAndTags0_33);
#line 2156 "backend_libs.export.c"
                backend_libs__export__TypeInfo_65_65 = (MR_Word) &backend_libs__export_scalar_common_1[1];
#line 911 "export.m"
                {
#line 911 "export.m"
                  mercury__list__reverse_2_p_0(backend_libs__export__TypeInfo_65_65, backend_libs__export__ForeignNamesAndTags0_33, &backend_libs__export__ForeignNamesAndTags_34);
                }
#line 912 "export.m"
                {
#line 912 "export.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_5, &backend_libs__export__Globals_35);
                }
#line 913 "export.m"
                {
#line 913 "export.m"
                  mercury__term__context_file_2_p_0(backend_libs__export__Context_9, &backend_libs__export__File_36);
                }
#line 914 "export.m"
                {
#line 914 "export.m"
                  mercury__term__context_line_2_p_0(backend_libs__export__Context_9, &backend_libs__export__Line_37);
                }
#line 915 "export.m"
                {
#line 915 "export.m"
                  backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_35, backend_libs__export__File_36, backend_libs__export__Line_37);
                }
#line 917 "export.m"
                {
#line 917 "export.m"
                  backend_libs__export__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 917 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[1]));
#line 917 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_3));
#line 917 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 917 "export.m"
                  MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_5));
#line 917 "export.m"
                }
#line 916 "export.m"
                {
#line 916 "export.m"
                  mercury__io__write_list_5_p_0(backend_libs__export__TypeInfo_65_65, backend_libs__export__ForeignNamesAndTags_34, (MR_String) "\n", backend_libs__export__V_49_49);
                }
#line 918 "export.m"
                {
#line 918 "export.m"
                  mercury__io__nl_2_p_0();
                }
#line 919 "export.m"
                {
#line 919 "export.m"
                  backend_libs__c_util__reset_line_num_3_p_0(backend_libs__export__Globals_35);
#line 919 "export.m"
                  return;
                }
#line 906 "export.m"
              }
#line 902 "export.m"
              break;
#line 902 "export.m"
            case (MR_Integer) 2:
#line 900 "export.m"
              {
#line 901 "export.m"
                {
#line 901 "export.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "d.u. is not an enumeration.");
#line 901 "export.m"
                  return;
                }
#line 900 "export.m"
              }
#line 902 "export.m"
              break;
#line 902 "export.m"
          }
#line 896 "export.m"
        }
#line 893 "export.m"
        break;
#line 893 "export.m"
      case (MR_Integer) 2:
#line 891 "export.m"
        {
#line 892 "export.m"
          {
#line 892 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "invalid type for foreign_export_enum");
#line 892 "export.m"
            return;
          }
#line 891 "export.m"
        }
#line 893 "export.m"
        break;
#line 893 "export.m"
      case (MR_Integer) 3:
#line 891 "export.m"
        {
#line 892 "export.m"
          {
#line 892 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "invalid type for foreign_export_enum");
#line 892 "export.m"
            return;
          }
#line 891 "export.m"
        }
#line 893 "export.m"
        break;
#line 893 "export.m"
    }
#line 879 "export.m"
  }
#line 876 "export.m"
}

#line 870 "export.m"
static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
#line 870 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_2)
#line 870 "export.m"
{
#line 872 "export.m"
  {
#line 872 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 872 "export.m"
    MR_Word backend_libs__export__Lang_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 0)));
#line 873 "export.m"
    MR_Word backend_libs__export__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 1)));
#line 873 "export.m"
    MR_Word backend_libs__export__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 2)));
#line 873 "export.m"
    MR_Word backend_libs__export__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 3)));

#line 874 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__Lang_3 == (MR_Integer) 0);
#line 872 "export.m"
    return backend_libs__export__succeeded;
#line 872 "export.m"
  }
#line 870 "export.m"
}

#line 827 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0_1(
#line 827 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 827 "export.m"
{
#line 827 "export.m"
  {
#line 827 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 827 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 827 "export.m"
    {
#line 827 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__output_foreign_decl__827__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 827 "export.m"
    return backend_libs__export__succeeded;
#line 827 "export.m"
  }
#line 827 "export.m"
}

#line 820 "export.m"
static void MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0(
#line 820 "export.m"
  MR_Word backend_libs__export__Globals_7,
#line 820 "export.m"
  MR_String backend_libs__export__SourceFileName_8,
#line 820 "export.m"
  MR_Word backend_libs__export__MaybeDesiredIsLocal_9,
#line 820 "export.m"
  MR_Word backend_libs__export__DeclCode_10)
#line 820 "export.m"
{
#line 825 "export.m"
  {
#line 825 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 825 "export.m"
    MR_Word backend_libs__export__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 0)));
#line 825 "export.m"
    MR_Word backend_libs__export__IsLocal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 1)));
#line 825 "export.m"
    MR_Word backend_libs__export__LiteralOrInclude_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 2)));
#line 825 "export.m"
    MR_Word backend_libs__export__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 3)));
#line 825 "export.m"
    MR_Word backend_libs__export__V_19_19;

#line 827 "export.m"
    {
#line 827 "export.m"
      backend_libs__export__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 827 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
#line 827 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 1) = ((MR_Box) (backend_libs__export__output_foreign_decl_6_p_0_1));
#line 827 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 827 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 3) = ((MR_Box) (backend_libs__export__Lang_12));
#line 827 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 4) = ((MR_Box) ((MR_Integer) 0));
#line 827 "export.m"
    }
#line 827 "export.m"
    {
#line 827 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_19_19, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_foreign_decl\'/6", (MR_String) "Lang != lang_c");
    }
#line 831 "export.m"
    if ((backend_libs__export__MaybeDesiredIsLocal_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "export.m"
      backend_libs__export__succeeded = MR_TRUE;
#line 831 "export.m"
    else
#line 832 "export.m"
      {
#line 832 "export.m"
        MR_Word backend_libs__export__DesiredIsLocal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeDesiredIsLocal_9, (MR_Integer) 0)));

#line 833 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__DesiredIsLocal_16 == backend_libs__export__IsLocal_13);
#line 832 "export.m"
      }
#line 840 "export.m"
    if (backend_libs__export__succeeded)
#line 837 "export.m"
      {
#line 850 "export.m"
        if (((MR_tag((MR_Word) backend_libs__export__LiteralOrInclude_14)) == (MR_mktag((MR_Integer) 1))))
#line 856 "export.m"
          {
#line 856 "export.m"
            MR_String backend_libs__export__IncludeFileName_38 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__LiteralOrInclude_14, (MR_Integer) 0)));
#line 856 "export.m"
            MR_String backend_libs__export__IncludePath_39;

#line 857 "export.m"
            {
#line 857 "export.m"
              parse_tree__file_names__make_include_file_path_3_p_0(backend_libs__export__SourceFileName_8, backend_libs__export__IncludeFileName_38, &backend_libs__export__IncludePath_39);
            }
#line 858 "export.m"
            {
#line 858 "export.m"
              backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_7, backend_libs__export__IncludePath_39, (MR_Integer) 1);
            }
#line 859 "export.m"
            {
#line 859 "export.m"
              libs__file_util__write_include_file_contents_3_p_0(backend_libs__export__IncludePath_39);
            }
#line 856 "export.m"
          }
#line 850 "export.m"
        else
#line 850 "export.m"
          {
#line 850 "export.m"
            MR_String backend_libs__export__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__LiteralOrInclude_14, (MR_Integer) 0)));
#line 850 "export.m"
            MR_String backend_libs__export__File_36;
#line 850 "export.m"
            MR_Integer backend_libs__export__Line_37;

#line 851 "export.m"
            {
#line 851 "export.m"
              mercury__term__context_file_2_p_0(backend_libs__export__Context_15, &backend_libs__export__File_36);
            }
#line 852 "export.m"
            {
#line 852 "export.m"
              mercury__term__context_line_2_p_0(backend_libs__export__Context_15, &backend_libs__export__Line_37);
            }
#line 853 "export.m"
            {
#line 853 "export.m"
              backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_7, backend_libs__export__File_36, backend_libs__export__Line_37);
            }
#line 854 "export.m"
            {
#line 854 "export.m"
              mercury__io__write_string_3_p_0(backend_libs__export__Code_35);
            }
#line 850 "export.m"
          }
#line 838 "export.m"
        {
#line 838 "export.m"
          mercury__io__nl_2_p_0();
        }
#line 839 "export.m"
        {
#line 839 "export.m"
          backend_libs__c_util__reset_line_num_3_p_0(backend_libs__export__Globals_7);
#line 839 "export.m"
          return;
        }
#line 837 "export.m"
      }
#line 840 "export.m"
    else
#line 840 "export.m"
      {
#line 840 "export.m"
      }
#line 825 "export.m"
  }
#line 820 "export.m"
}

#line 795 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_2_3_p_0(
#line 795 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1)
#line 795 "export.m"
{
#line 798 "export.m"
  while (MR_TRUE)
#line 798 "export.m"
    {
#line 798 "export.m"
      /* tailcall optimized into a loop */
#line 798 "export.m"
      {
#line 798 "export.m"
        MR_bool backend_libs__export__succeeded;

#line 798 "export.m"
        if ((backend_libs__export__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "export.m"
          {
#line 798 "export.m"
          }
#line 798 "export.m"
        else
#line 799 "export.m"
          {
#line 799 "export.m"
            MR_Word backend_libs__export__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 799 "export.m"
            MR_Word backend_libs__export__ExportedProcs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 1)));
#line 799 "export.m"
            MR_Word backend_libs__export__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 0)));
#line 799 "export.m"
            MR_String backend_libs__export__C_RetType_11 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 1)));
#line 799 "export.m"
            MR_String backend_libs__export__C_Function_12 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 2)));
#line 799 "export.m"
            MR_String backend_libs__export__ArgDecls_13 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 3)));

#line 810 "export.m"
#line 810 "export.m"
            switch (backend_libs__export__Lang_10) {
#line 810 "export.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 810 "export.m"
              case (MR_Integer) 0:
#line 802 "export.m"
                {
#line 804 "export.m"
                  {
#line 804 "export.m"
                    mercury__io__write_string_3_p_0(backend_libs__export__C_RetType_11);
                  }
#line 805 "export.m"
                  {
#line 805 "export.m"
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
#line 806 "export.m"
                  {
#line 806 "export.m"
                    mercury__io__write_string_3_p_0(backend_libs__export__C_Function_12);
                  }
#line 807 "export.m"
                  {
#line 807 "export.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 808 "export.m"
                  {
#line 808 "export.m"
                    mercury__io__write_string_3_p_0(backend_libs__export__ArgDecls_13);
                  }
#line 809 "export.m"
                  {
#line 809 "export.m"
                    mercury__io__write_string_3_p_0((MR_String) ");\n");
                  }
#line 802 "export.m"
                }
#line 810 "export.m"
                break;
#line 810 "export.m"
              case (MR_Integer) 1:
#line 810 "export.m"
              case (MR_Integer) 4:
#line 810 "export.m"
              case (MR_Integer) 3:
#line 810 "export.m"
              case (MR_Integer) 2:
#line 815 "export.m"
                {
#line 816 "export.m"
                  {
#line 816 "export.m"
                    mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.produce_header_file_2\'/3", (MR_String) "foreign languages other than C unimplemented");
#line 816 "export.m"
                    return;
                  }
#line 815 "export.m"
                }
#line 810 "export.m"
                break;
#line 810 "export.m"
            }
#line 818 "export.m"
            /* direct tailcall eliminated */
#line 818 "export.m"
            {
#line 818 "export.m"
              MR_Word backend_libs__export__HeadVar__1__tmp_copy_1 = backend_libs__export__ExportedProcs_8;

#line 818 "export.m"
              backend_libs__export__HeadVar__1_1 = backend_libs__export__HeadVar__1__tmp_copy_1;
#line 818 "export.m"
            }
#line 818 "export.m"
            continue;
#line 799 "export.m"
          }
#line 798 "export.m"
      }
#line 798 "export.m"
      break;
#line 798 "export.m"
    }
#line 795 "export.m"
}

#line 574 "export.m"
static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
#line 574 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 574 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 574 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 574 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 574 "export.m"
{
#line 577 "export.m"
  {
#line 577 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 577 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
#line 577 "export.m"
    else
#line 578 "export.m"
      {
#line 578 "export.m"
        MR_Word backend_libs__export__AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 578 "export.m"
        MR_Word backend_libs__export__ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 578 "export.m"
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 0)));
#line 578 "export.m"
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 1)));
#line 578 "export.m"
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
#line 578 "export.m"
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
#line 578 "export.m"
        MR_Integer backend_libs__export__CurArgNum_16 = (backend_libs__export__LastArgNum_2 + (MR_Integer) 1);
#line 578 "export.m"
        MR_String backend_libs__export__RetrieveHeadOutputArg_17;
#line 578 "export.m"
        MR_String backend_libs__export__RetrieveTailOutputArgs_24;

#line 585 "export.m"
#line 585 "export.m"
        switch (backend_libs__export__Mode_15) {
#line 585 "export.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "export.m"
          case (MR_Integer) 0:
#line 584 "export.m"
            backend_libs__export__RetrieveHeadOutputArg_17 = (MR_String) "";
#line 585 "export.m"
            break;
#line 585 "export.m"
          case (MR_Integer) 1:
#line 586 "export.m"
            {
#line 586 "export.m"
              MR_String backend_libs__export__ArgName_18;
#line 586 "export.m"
              MR_String backend_libs__export__ArgLocString0_19;
#line 586 "export.m"
              MR_String backend_libs__export__ArgLocString_20;
#line 586 "export.m"
              MR_Word backend_libs__export__Export_Type_21;
#line 586 "export.m"
              MR_String backend_libs__export__V_27_27;
#line 586 "export.m"
              MR_Word backend_libs__export__RegType_46;
#line 586 "export.m"
              MR_Integer backend_libs__export__RegNum_47;
#line 593 "export.m"
              MR_Word backend_libs__export__V_28_28;
#line 593 "export.m"
              MR_Word backend_libs__export__V_22_22;

#line 587 "export.m"
              {
#line 587 "export.m"
                backend_libs__export__V_27_27 = mercury__string__int_to_string_1_f_0(backend_libs__export__CurArgNum_16);
              }
#line 587 "export.m"
              {
#line 587 "export.m"
                backend_libs__export__ArgName_18 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", backend_libs__export__V_27_27);
              }
#line 613 "export.m"
              backend_libs__export__RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
#line 613 "export.m"
              backend_libs__export__RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
#line 623 "export.m"
#line 623 "export.m"
              switch (backend_libs__export__RegType_46) {
#line 623 "export.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 623 "export.m"
                case (MR_Integer) 1:
#line 624 "export.m"
                  {
#line 624 "export.m"
                    MR_String backend_libs__export__V_49_49;
#line 624 "export.m"
                    MR_String backend_libs__export__V_50_50;

#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__V_50_50 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                    }
#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__V_49_49 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_50_50, (MR_String) ")");
                    }
#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_49_49);
                    }
#line 624 "export.m"
                  }
#line 623 "export.m"
                  break;
#line 623 "export.m"
                case (MR_Integer) 0:
#line 620 "export.m"
                  {
#line 618 "export.m"
                    backend_libs__export__succeeded = (backend_libs__export__RegNum_47 > (MR_Integer) 32);
#line 620 "export.m"
                    if (backend_libs__export__succeeded)
#line 619 "export.m"
                      {
#line 619 "export.m"
                        MR_String backend_libs__export__V_54_54;
#line 619 "export.m"
                        MR_String backend_libs__export__V_55_55;

#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__V_55_55 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_55_55, (MR_String) ")");
                        }
#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_54_54);
                        }
#line 619 "export.m"
                      }
#line 620 "export.m"
                    else
#line 621 "export.m"
                      {
#line 621 "export.m"
                        MR_String backend_libs__export__V_58_58;

#line 621 "export.m"
                        {
#line 621 "export.m"
                          backend_libs__export__V_58_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
#line 621 "export.m"
                        {
#line 621 "export.m"
                          backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_58_58);
                        }
#line 621 "export.m"
                      }
#line 620 "export.m"
                  }
#line 623 "export.m"
                  break;
#line 623 "export.m"
              }
#line 589 "export.m"
              {
#line 589 "export.m"
                backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__ArgLoc_14, backend_libs__export__ArgLocString0_19, backend_libs__export__Type_13, &backend_libs__export__ArgLocString_20);
              }
#line 590 "export.m"
              {
#line 590 "export.m"
                backend_libs__export__Export_Type_21 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Type_13);
              }
#line 593 "export.m"
              {
#line 593 "export.m"
                backend_libs__export__V_28_28 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_Type_21);
              }
#line 593 "export.m"
              backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 593 "export.m"
              if (backend_libs__export__succeeded)
#line 593 "export.m"
                {
#line 593 "export.m"
                  backend_libs__export__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_28_28, (MR_Integer) 0)));
#line 594 "export.m"
                  {
#line 594 "export.m"
                    MR_String backend_libs__export__C_Type_23;
#line 594 "export.m"
                    MR_String backend_libs__export__V_31_31;
#line 594 "export.m"
                    MR_String backend_libs__export__V_32_32;
#line 594 "export.m"
                    MR_String backend_libs__export__V_34_34;
#line 594 "export.m"
                    MR_String backend_libs__export__V_35_35;
#line 594 "export.m"
                    MR_String backend_libs__export__V_37_37;

#line 594 "export.m"
                    {
#line 594 "export.m"
                      backend_libs__export__C_Type_23 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_Type_21);
                    }
#line 596 "export.m"
                    {
#line 596 "export.m"
                      backend_libs__export__V_37_37 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_18, (MR_String) ");\n");
                    }
#line 596 "export.m"
                    {
#line 596 "export.m"
                      backend_libs__export__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", * ", backend_libs__export__V_37_37);
                    }
#line 596 "export.m"
                    {
#line 596 "export.m"
                      backend_libs__export__V_34_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_20, backend_libs__export__V_35_35);
                    }
#line 596 "export.m"
                    {
#line 596 "export.m"
                      backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_34_34);
                    }
#line 596 "export.m"
                    {
#line 596 "export.m"
                      backend_libs__export__V_31_31 = mercury__string__f_43_43_2_f_0(backend_libs__export__C_Type_23, backend_libs__export__V_32_32);
                    }
#line 595 "export.m"
                    {
#line 595 "export.m"
                      backend_libs__export__RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", backend_libs__export__V_31_31);
                    }
#line 594 "export.m"
                  }
#line 593 "export.m"
                }
#line 593 "export.m"
              else
#line 598 "export.m"
                {
#line 598 "export.m"
                  MR_String backend_libs__export__V_40_40;
#line 598 "export.m"
                  MR_String backend_libs__export__V_41_41;
#line 598 "export.m"
                  MR_String backend_libs__export__V_43_43;

#line 599 "export.m"
                  {
#line 599 "export.m"
                    backend_libs__export__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_20, (MR_String) ";\n");
                  }
#line 599 "export.m"
                  {
#line 599 "export.m"
                    backend_libs__export__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__V_43_43);
                  }
#line 599 "export.m"
                  {
#line 599 "export.m"
                    backend_libs__export__V_40_40 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_18, backend_libs__export__V_41_41);
                  }
#line 599 "export.m"
                  {
#line 599 "export.m"
                    backend_libs__export__RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t*", backend_libs__export__V_40_40);
                  }
#line 598 "export.m"
                }
#line 586 "export.m"
            }
#line 585 "export.m"
            break;
#line 585 "export.m"
          case (MR_Integer) 2:
#line 603 "export.m"
            backend_libs__export__RetrieveHeadOutputArg_17 = (MR_String) "";
#line 585 "export.m"
            break;
#line 585 "export.m"
        }
#line 605 "export.m"
        {
#line 605 "export.m"
          backend_libs__export__retrieve_output_args_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__CurArgNum_16, backend_libs__export__ATs_10, &backend_libs__export__RetrieveTailOutputArgs_24);
        }
#line 606 "export.m"
        {
#line 606 "export.m"
          *backend_libs__export__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetrieveHeadOutputArg_17, backend_libs__export__RetrieveTailOutputArgs_24);
        }
#line 578 "export.m"
      }
#line 577 "export.m"
  }
#line 574 "export.m"
}

#line 540 "export.m"
static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
#line 540 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 540 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 540 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 540 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 540 "export.m"
{
#line 543 "export.m"
  {
#line 543 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 543 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
#line 543 "export.m"
    else
#line 544 "export.m"
      {
#line 544 "export.m"
        MR_Word backend_libs__export__AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 544 "export.m"
        MR_Word backend_libs__export__ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 544 "export.m"
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 0)));
#line 544 "export.m"
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 1)));
#line 544 "export.m"
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
#line 544 "export.m"
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
#line 544 "export.m"
        MR_Integer backend_libs__export__CurArgNum_16 = (backend_libs__export__LastArgNum_2 + (MR_Integer) 1);
#line 544 "export.m"
        MR_String backend_libs__export__PassHeadInputArg_23;
#line 544 "export.m"
        MR_String backend_libs__export__PassTailInputArgs_24;

#line 564 "export.m"
#line 564 "export.m"
        switch (backend_libs__export__Mode_15) {
#line 564 "export.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 564 "export.m"
          case (MR_Integer) 0:
#line 549 "export.m"
            {
#line 549 "export.m"
              MR_String backend_libs__export__ArgName0_17;
#line 549 "export.m"
              MR_String backend_libs__export__ArgLocString_18;
#line 549 "export.m"
              MR_String backend_libs__export__ArgName_19;
#line 549 "export.m"
              MR_Word backend_libs__export__Export_Type_20;
#line 549 "export.m"
              MR_String backend_libs__export__V_27_27;
#line 549 "export.m"
              MR_Word backend_libs__export__RegType_46;
#line 549 "export.m"
              MR_Integer backend_libs__export__RegNum_47;
#line 556 "export.m"
              MR_Word backend_libs__export__V_28_28;
#line 556 "export.m"
              MR_Word backend_libs__export__V_21_21;

#line 550 "export.m"
              {
#line 550 "export.m"
                backend_libs__export__V_27_27 = mercury__string__int_to_string_1_f_0(backend_libs__export__CurArgNum_16);
              }
#line 550 "export.m"
              {
#line 550 "export.m"
                backend_libs__export__ArgName0_17 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", backend_libs__export__V_27_27);
              }
#line 613 "export.m"
              backend_libs__export__RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
#line 613 "export.m"
              backend_libs__export__RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
#line 623 "export.m"
#line 623 "export.m"
              switch (backend_libs__export__RegType_46) {
#line 623 "export.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 623 "export.m"
                case (MR_Integer) 1:
#line 624 "export.m"
                  {
#line 624 "export.m"
                    MR_String backend_libs__export__V_49_49;
#line 624 "export.m"
                    MR_String backend_libs__export__V_50_50;

#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__V_50_50 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                    }
#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__V_49_49 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_50_50, (MR_String) ")");
                    }
#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_49_49);
                    }
#line 624 "export.m"
                  }
#line 623 "export.m"
                  break;
#line 623 "export.m"
                case (MR_Integer) 0:
#line 620 "export.m"
                  {
#line 618 "export.m"
                    backend_libs__export__succeeded = (backend_libs__export__RegNum_47 > (MR_Integer) 32);
#line 620 "export.m"
                    if (backend_libs__export__succeeded)
#line 619 "export.m"
                      {
#line 619 "export.m"
                        MR_String backend_libs__export__V_54_54;
#line 619 "export.m"
                        MR_String backend_libs__export__V_55_55;

#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__V_55_55 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_55_55, (MR_String) ")");
                        }
#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_54_54);
                        }
#line 619 "export.m"
                      }
#line 620 "export.m"
                    else
#line 621 "export.m"
                      {
#line 621 "export.m"
                        MR_String backend_libs__export__V_58_58;

#line 621 "export.m"
                        {
#line 621 "export.m"
                          backend_libs__export__V_58_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                        }
#line 621 "export.m"
                        {
#line 621 "export.m"
                          backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_58_58);
                        }
#line 621 "export.m"
                      }
#line 620 "export.m"
                  }
#line 623 "export.m"
                  break;
#line 623 "export.m"
              }
#line 552 "export.m"
              {
#line 552 "export.m"
                backend_libs__export__convert_type_to_mercury_4_p_0(backend_libs__export__ArgName0_17, backend_libs__export__Type_13, backend_libs__export__ArgLoc_14, &backend_libs__export__ArgName_19);
              }
#line 553 "export.m"
              {
#line 553 "export.m"
                backend_libs__export__Export_Type_20 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Type_13);
              }
#line 556 "export.m"
              {
#line 556 "export.m"
                backend_libs__export__V_28_28 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_Type_20);
              }
#line 556 "export.m"
              backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 556 "export.m"
              if (backend_libs__export__succeeded)
#line 556 "export.m"
                {
#line 556 "export.m"
                  backend_libs__export__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_28_28, (MR_Integer) 0)));
#line 557 "export.m"
                  {
#line 557 "export.m"
                    MR_String backend_libs__export__C_Type_22;
#line 557 "export.m"
                    MR_String backend_libs__export__V_31_31;
#line 557 "export.m"
                    MR_String backend_libs__export__V_32_32;
#line 557 "export.m"
                    MR_String backend_libs__export__V_34_34;
#line 557 "export.m"
                    MR_String backend_libs__export__V_35_35;
#line 557 "export.m"
                    MR_String backend_libs__export__V_37_37;

#line 557 "export.m"
                    {
#line 557 "export.m"
                      backend_libs__export__C_Type_22 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_Type_20);
                    }
#line 559 "export.m"
                    {
#line 559 "export.m"
                      backend_libs__export__V_37_37 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_18, (MR_String) ");\n");
                    }
#line 559 "export.m"
                    {
#line 559 "export.m"
                      backend_libs__export__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_37_37);
                    }
#line 559 "export.m"
                    {
#line 559 "export.m"
                      backend_libs__export__V_34_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, backend_libs__export__V_35_35);
                    }
#line 559 "export.m"
                    {
#line 559 "export.m"
                      backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_34_34);
                    }
#line 559 "export.m"
                    {
#line 559 "export.m"
                      backend_libs__export__V_31_31 = mercury__string__f_43_43_2_f_0(backend_libs__export__C_Type_22, backend_libs__export__V_32_32);
                    }
#line 558 "export.m"
                    {
#line 558 "export.m"
                      backend_libs__export__PassHeadInputArg_23 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", backend_libs__export__V_31_31);
                    }
#line 557 "export.m"
                  }
#line 556 "export.m"
                }
#line 556 "export.m"
              else
#line 561 "export.m"
                {
#line 561 "export.m"
                  MR_String backend_libs__export__V_40_40;
#line 561 "export.m"
                  MR_String backend_libs__export__V_41_41;
#line 561 "export.m"
                  MR_String backend_libs__export__V_43_43;

#line 562 "export.m"
                  {
#line 562 "export.m"
                    backend_libs__export__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, (MR_String) ";\n");
                  }
#line 562 "export.m"
                  {
#line 562 "export.m"
                    backend_libs__export__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__V_43_43);
                  }
#line 562 "export.m"
                  {
#line 562 "export.m"
                    backend_libs__export__V_40_40 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_18, backend_libs__export__V_41_41);
                  }
#line 562 "export.m"
                  {
#line 562 "export.m"
                    backend_libs__export__PassHeadInputArg_23 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__V_40_40);
                  }
#line 561 "export.m"
                }
#line 549 "export.m"
            }
#line 564 "export.m"
            break;
#line 564 "export.m"
          case (MR_Integer) 1:
#line 566 "export.m"
            backend_libs__export__PassHeadInputArg_23 = (MR_String) "";
#line 564 "export.m"
            break;
#line 564 "export.m"
          case (MR_Integer) 2:
#line 569 "export.m"
            backend_libs__export__PassHeadInputArg_23 = (MR_String) "";
#line 564 "export.m"
            break;
#line 564 "export.m"
        }
#line 571 "export.m"
        {
#line 571 "export.m"
          backend_libs__export__pass_input_args_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__CurArgNum_16, backend_libs__export__ATs_10, &backend_libs__export__PassTailInputArgs_24);
        }
#line 572 "export.m"
        {
#line 572 "export.m"
          *backend_libs__export__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(backend_libs__export__PassHeadInputArg_23, backend_libs__export__PassTailInputArgs_24);
        }
#line 544 "export.m"
      }
#line 543 "export.m"
  }
#line 540 "export.m"
}

#line 493 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
#line 493 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 493 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 493 "export.m"
  MR_Integer backend_libs__export__LastArgNum_3,
#line 493 "export.m"
  MR_Word backend_libs__export__HeadVar__4_4,
#line 493 "export.m"
  MR_String * backend_libs__export__HeadVar__5_5)
#line 493 "export.m"
{
#line 496 "export.m"
  {
#line 496 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 496 "export.m"
    if ((backend_libs__export__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "export.m"
      *backend_libs__export__HeadVar__5_5 = (MR_String) "";
#line 496 "export.m"
    else
#line 498 "export.m"
      {
#line 498 "export.m"
        MR_Word backend_libs__export__AT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__4_4, (MR_Integer) 0)));
#line 498 "export.m"
        MR_Word backend_libs__export__ATs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__4_4, (MR_Integer) 1)));
#line 498 "export.m"
        MR_Word backend_libs__export__ArgInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_12, (MR_Integer) 0)));
#line 498 "export.m"
        MR_Word backend_libs__export__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_12, (MR_Integer) 1)));
#line 498 "export.m"
        MR_Integer backend_libs__export__CurArgNum_17 = (backend_libs__export__LastArgNum_3 + (MR_Integer) 1);
#line 498 "export.m"
        MR_String backend_libs__export__TypeString_18;
#line 498 "export.m"
        MR_String backend_libs__export__ArgName_19;
#line 498 "export.m"
        MR_String backend_libs__export__HeadArgsDecl_20;
#line 498 "export.m"
        MR_Word backend_libs__export__Mode_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 1)));
#line 498 "export.m"
        MR_String backend_libs__export__TypeString0_37;
#line 519 "export.m"
        MR_Word backend_libs__export___Loc_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 0)));

#line 524 "export.m"
#line 524 "export.m"
        switch (backend_libs__export__NameThem_2) {
#line 524 "export.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 524 "export.m"
          case (MR_Integer) 0:
#line 526 "export.m"
            backend_libs__export__ArgName_19 = (MR_String) "";
#line 524 "export.m"
            break;
#line 524 "export.m"
          case (MR_Integer) 1:
#line 521 "export.m"
            {
#line 521 "export.m"
              MR_String backend_libs__export__ArgNumString_36;

#line 522 "export.m"
              {
#line 522 "export.m"
                mercury__string__int_to_string_2_p_0(backend_libs__export__CurArgNum_17, &backend_libs__export__ArgNumString_36);
              }
#line 523 "export.m"
              {
#line 523 "export.m"
                mercury__string__append_3_p_2((MR_String) " Mercury__argument", backend_libs__export__ArgNumString_36, &backend_libs__export__ArgName_19);
              }
#line 521 "export.m"
            }
#line 524 "export.m"
            break;
#line 524 "export.m"
        }
#line 528 "export.m"
        {
#line 528 "export.m"
          backend_libs__export__TypeString0_37 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(backend_libs__export__ModuleInfo_1, (MR_Integer) 0, backend_libs__export__Type_16);
        }
#line 533 "export.m"
#line 533 "export.m"
        switch (backend_libs__export__Mode_35) {
#line 533 "export.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 533 "export.m"
          case (MR_Integer) 0:
#line 533 "export.m"
          case (MR_Integer) 2:
#line 537 "export.m"
            backend_libs__export__TypeString_18 = backend_libs__export__TypeString0_37;
#line 533 "export.m"
            break;
#line 533 "export.m"
          case (MR_Integer) 1:
#line 530 "export.m"
            {
#line 532 "export.m"
              {
#line 532 "export.m"
                backend_libs__export__TypeString_18 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString0_37, (MR_String) " *");
              }
#line 530 "export.m"
            }
#line 533 "export.m"
            break;
#line 533 "export.m"
        }
#line 503 "export.m"
        {
#line 503 "export.m"
          backend_libs__export__HeadArgsDecl_20 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString_18, backend_libs__export__ArgName_19);
        }
#line 507 "export.m"
        if ((backend_libs__export__ATs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "export.m"
          *backend_libs__export__HeadVar__5_5 = backend_libs__export__HeadArgsDecl_20;
#line 507 "export.m"
        else
#line 508 "export.m"
          {
#line 508 "export.m"
            MR_String backend_libs__export__TailArgsDecl_23;
#line 508 "export.m"
            MR_String backend_libs__export__V_25_25;

#line 509 "export.m"
            {
#line 509 "export.m"
              backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__NameThem_2, backend_libs__export__CurArgNum_17, backend_libs__export__ATs_13, &backend_libs__export__TailArgsDecl_23);
            }
#line 511 "export.m"
            {
#line 511 "export.m"
              backend_libs__export__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__TailArgsDecl_23);
            }
#line 511 "export.m"
            {
#line 511 "export.m"
              *backend_libs__export__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(backend_libs__export__HeadArgsDecl_20, backend_libs__export__V_25_25);
            }
#line 508 "export.m"
          }
#line 498 "export.m"
      }
#line 496 "export.m"
  }
#line 493 "export.m"
}

#line 484 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
#line 484 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 484 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 484 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 484 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 484 "export.m"
{
#line 487 "export.m"
  {
#line 487 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 487 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "void";
#line 487 "export.m"
    else
#line 489 "export.m"
      {
#line 490 "export.m"
        {
#line 490 "export.m"
          backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__NameThem_2, (MR_Integer) 0, backend_libs__export__HeadVar__3_3, backend_libs__export__HeadVar__4_4);
#line 490 "export.m"
          return;
        }
#line 489 "export.m"
      }
#line 487 "export.m"
  }
#line 484 "export.m"
}

#line 473 "export.m"
static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
#line 473 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 473 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 473 "export.m"
{
#line 475 "export.m"
  {
#line 475 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 475 "export.m"
    MR_Word backend_libs__export__Mode_5;
#line 475 "export.m"
    MR_Word backend_libs__export__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
#line 475 "export.m"
    MR_Word backend_libs__export__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 475 "export.m"
    MR_Word backend_libs__export__V_8_8;
#line 475 "export.m"
    MR_Word backend_libs__export___Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_7_7, (MR_Integer) 0)));

#line 475 "export.m"
    backend_libs__export__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_7_7, (MR_Integer) 1)));
#line 476 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__Mode_5 == (MR_Integer) 2);
#line 476 "export.m"
    backend_libs__export__succeeded = !(backend_libs__export__succeeded);
#line 475 "export.m"
    if (backend_libs__export__succeeded)
#line 475 "export.m"
      {
#line 477 "export.m"
        {
#line 477 "export.m"
          backend_libs__export__V_8_8 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Type_6);
        }
#line 477 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__V_8_8 == (MR_Integer) 1);
#line 475 "export.m"
      }
#line 475 "export.m"
    return backend_libs__export__succeeded;
#line 475 "export.m"
  }
#line 473 "export.m"
}

#line 466 "export.m"
static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
#line 466 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 466 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1)
#line 466 "export.m"
{
#line 466 "export.m"
  {
#line 466 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 466 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 466 "export.m"
    {
#line 466 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__include_arg_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
#line 466 "export.m"
    return backend_libs__export__succeeded;
#line 466 "export.m"
  }
#line 466 "export.m"
}

#line 373 "export.m"
static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
#line 373 "export.m"
  MR_Word backend_libs__export__ModuleInfo_11,
#line 373 "export.m"
  MR_Word backend_libs__export__Preds_12,
#line 373 "export.m"
  MR_Word backend_libs__export__PredId_13,
#line 373 "export.m"
  MR_Integer backend_libs__export__ProcId_14,
#line 373 "export.m"
  MR_String * backend_libs__export__HowToDeclareLabel_15,
#line 373 "export.m"
  MR_String * backend_libs__export__C_RetType_16,
#line 373 "export.m"
  MR_String * backend_libs__export__MaybeDeclareRetval_17,
#line 373 "export.m"
  MR_String * backend_libs__export__MaybeFail_18,
#line 373 "export.m"
  MR_String * backend_libs__export__MaybeSucceed_19,
#line 373 "export.m"
  MR_Word * backend_libs__export__ArgInfoTypes_20)
#line 373 "export.m"
{
#line 379 "export.m"
  {
#line 379 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 379 "export.m"
    MR_Word backend_libs__export__PredInfo_21;
#line 379 "export.m"
    MR_Word backend_libs__export__Status_22;
#line 379 "export.m"
    MR_Word backend_libs__export__PredOrFunc_23;
#line 379 "export.m"
    MR_Word backend_libs__export__ProcTable_24;
#line 379 "export.m"
    MR_Word backend_libs__export__ProcInfo_25;
#line 379 "export.m"
    MR_Word backend_libs__export__MaybeArgInfos_26;
#line 379 "export.m"
    MR_Word backend_libs__export__Markers_27;
#line 379 "export.m"
    MR_Word backend_libs__export__ArgTypes_28;
#line 379 "export.m"
    MR_Word backend_libs__export__ArgInfos_30;
#line 379 "export.m"
    MR_Word backend_libs__export__CodeModel_32;
#line 379 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes0_33;
#line 379 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes2_43;
#line 379 "export.m"
    MR_Word backend_libs__export__V_74_74;
#line 380 "export.m"
    MR_Box backend_libs__export__conv0_PredInfo_21;
#line 395 "export.m"
    MR_Box backend_libs__export__conv1_ProcInfo_25;

#line 380 "export.m"
    {
#line 380 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, backend_libs__export__Preds_12, ((MR_Box) (backend_libs__export__PredId_13)), &backend_libs__export__conv0_PredInfo_21);
    }
#line 380 "export.m"
    backend_libs__export__PredInfo_21 = ((MR_Word) backend_libs__export__conv0_PredInfo_21);
#line 381 "export.m"
    {
#line 381 "export.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__Status_22);
    }
#line 384 "export.m"
    {
#line 384 "export.m"
      backend_libs__export__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(backend_libs__export__ModuleInfo_11, backend_libs__export__PredInfo_21, backend_libs__export__ProcId_14);
    }
#line 385 "export.m"
    if (!(backend_libs__export__succeeded))
#line 386 "export.m"
      {
#line 386 "export.m"
        MR_Word backend_libs__export__V_44_44;

#line 386 "export.m"
        {
#line 386 "export.m"
          backend_libs__export__V_44_44 = parse_tree__status__status_defined_in_this_module_1_f_0(backend_libs__export__Status_22);
        }
#line 386 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__V_44_44 == (MR_Integer) 0);
#line 386 "export.m"
      }
#line 390 "export.m"
    if (backend_libs__export__succeeded)
#line 389 "export.m"
      *backend_libs__export__HowToDeclareLabel_15 = (MR_String) "MR_declare_entry";
#line 390 "export.m"
    else
#line 391 "export.m"
      *backend_libs__export__HowToDeclareLabel_15 = (MR_String) "MR_declare_static";
#line 393 "export.m"
    {
#line 393 "export.m"
      backend_libs__export__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(backend_libs__export__PredInfo_21);
    }
#line 394 "export.m"
    {
#line 394 "export.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__ProcTable_24);
    }
#line 395 "export.m"
    {
#line 395 "export.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, backend_libs__export__ProcTable_24, backend_libs__export__ProcId_14, &backend_libs__export__conv1_ProcInfo_25);
    }
#line 395 "export.m"
    backend_libs__export__ProcInfo_25 = ((MR_Word) backend_libs__export__conv1_ProcInfo_25);
#line 396 "export.m"
    {
#line 396 "export.m"
      hlds__hlds_pred__proc_info_maybe_arg_info_2_p_0(backend_libs__export__ProcInfo_25, &backend_libs__export__MaybeArgInfos_26);
    }
#line 397 "export.m"
    {
#line 397 "export.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__Markers_27);
    }
#line 398 "export.m"
    {
#line 398 "export.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__ArgTypes_28);
    }
#line 402 "export.m"
    if ((backend_libs__export__MaybeArgInfos_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "export.m"
      {
#line 403 "export.m"
        MR_Word backend_libs__export__NewProcInfo_31;

#line 404 "export.m"
        {
#line 404 "export.m"
          hlds__arg_info__generate_proc_arg_info_5_p_0(backend_libs__export__Markers_27, backend_libs__export__ArgTypes_28, backend_libs__export__ModuleInfo_11, backend_libs__export__ProcInfo_25, &backend_libs__export__NewProcInfo_31);
        }
#line 406 "export.m"
        {
#line 406 "export.m"
          hlds__hlds_pred__proc_info_arg_info_2_p_0(backend_libs__export__NewProcInfo_31, &backend_libs__export__ArgInfos_30);
        }
#line 403 "export.m"
      }
#line 402 "export.m"
    else
#line 400 "export.m"
      backend_libs__export__ArgInfos_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeArgInfos_26, (MR_Integer) 0)));
#line 408 "export.m"
    {
#line 408 "export.m"
      backend_libs__export__CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(backend_libs__export__ProcInfo_25);
    }
#line 409 "export.m"
    {
#line 409 "export.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__export__ArgInfos_30, backend_libs__export__ArgTypes_28, &backend_libs__export__ArgInfoTypes0_33);
    }
#line 447 "export.m"
#line 447 "export.m"
    switch (backend_libs__export__CodeModel_32) {
#line 447 "export.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 447 "export.m"
      case (MR_Integer) 0:
#line 440 "export.m"
        {
#line 440 "export.m"
          MR_Word backend_libs__export__ArgInfoTypes1_34;
#line 440 "export.m"
          MR_Word backend_libs__export__RetArgLoc_35;
#line 440 "export.m"
          MR_Word backend_libs__export__RetType_37;
#line 416 "export.m"
          MR_Word backend_libs__export__TypeInfo_81_81;
#line 416 "export.m"
          MR_Word backend_libs__export__RetArgMode_36;
#line 416 "export.m"
          MR_Word backend_libs__export__V_57_57;
#line 416 "export.m"
          MR_Word backend_libs__export__V_58_58;
#line 416 "export.m"
          MR_Word backend_libs__export__V_59_59;
#line 417 "export.m"
          MR_Box backend_libs__export__conv2_V_57_57;

#line 416 "export.m"
          backend_libs__export__succeeded = (backend_libs__export__PredOrFunc_23 == (MR_Integer) 1);
#line 416 "export.m"
          if (backend_libs__export__succeeded)
#line 416 "export.m"
            {
#line 3736 "backend_libs.export.c"
              backend_libs__export__TypeInfo_81_81 = (MR_Word) &backend_libs__export_scalar_common_1[0];
#line 417 "export.m"
              {
#line 417 "export.m"
                parse_tree__prog_util__pred_args_to_func_args_3_p_0(backend_libs__export__TypeInfo_81_81, backend_libs__export__ArgInfoTypes0_33, &backend_libs__export__ArgInfoTypes1_34, &backend_libs__export__conv2_V_57_57);
              }
#line 417 "export.m"
              backend_libs__export__V_57_57 = ((MR_Word) backend_libs__export__conv2_V_57_57);
#line 418 "export.m"
              backend_libs__export__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_57_57, (MR_Integer) 0)));
#line 418 "export.m"
              backend_libs__export__RetType_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_57_57, (MR_Integer) 1)));
#line 418 "export.m"
              backend_libs__export__RetArgLoc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_58_58, (MR_Integer) 0)));
#line 418 "export.m"
              backend_libs__export__RetArgMode_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_58_58, (MR_Integer) 1)));
#line 419 "export.m"
              backend_libs__export__succeeded = (backend_libs__export__RetArgMode_36 == (MR_Integer) 1);
#line 416 "export.m"
              if (backend_libs__export__succeeded)
#line 416 "export.m"
                {
#line 420 "export.m"
                  {
#line 420 "export.m"
                    backend_libs__export__V_59_59 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_11, backend_libs__export__RetType_37);
                  }
#line 420 "export.m"
                  backend_libs__export__succeeded = (backend_libs__export__V_59_59 == (MR_Integer) 1);
#line 416 "export.m"
                }
#line 416 "export.m"
            }
#line 440 "export.m"
          if (backend_libs__export__succeeded)
#line 422 "export.m"
            {
#line 422 "export.m"
              MR_Word backend_libs__export__Export_RetType_38;
#line 422 "export.m"
              MR_String backend_libs__export__RetArgString0_39;
#line 422 "export.m"
              MR_String backend_libs__export__RetArgString_40;
#line 422 "export.m"
              MR_String backend_libs__export__V_62_62;
#line 422 "export.m"
              MR_Word backend_libs__export__RegType_85;
#line 422 "export.m"
              MR_Integer backend_libs__export__RegNum_86;
#line 430 "export.m"
              MR_Word backend_libs__export__V_64_64;
#line 430 "export.m"
              MR_Word backend_libs__export__V_41_41;

#line 422 "export.m"
              {
#line 422 "export.m"
                backend_libs__export__Export_RetType_38 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_11, backend_libs__export__RetType_37);
              }
#line 423 "export.m"
              {
#line 423 "export.m"
                *backend_libs__export__C_RetType_16 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_RetType_38);
              }
#line 613 "export.m"
              backend_libs__export__RegType_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__RetArgLoc_35, (MR_Integer) 0)));
#line 613 "export.m"
              backend_libs__export__RegNum_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__RetArgLoc_35, (MR_Integer) 1)));
#line 623 "export.m"
#line 623 "export.m"
              switch (backend_libs__export__RegType_85) {
#line 623 "export.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 623 "export.m"
                case (MR_Integer) 1:
#line 624 "export.m"
                  {
#line 624 "export.m"
                    MR_String backend_libs__export__V_88_88;
#line 624 "export.m"
                    MR_String backend_libs__export__V_89_89;

#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__V_89_89 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                    }
#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__V_88_88 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_89_89, (MR_String) ")");
                    }
#line 625 "export.m"
                    {
#line 625 "export.m"
                      backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_88_88);
                    }
#line 624 "export.m"
                  }
#line 623 "export.m"
                  break;
#line 623 "export.m"
                case (MR_Integer) 0:
#line 620 "export.m"
                  {
#line 618 "export.m"
                    backend_libs__export__succeeded = (backend_libs__export__RegNum_86 > (MR_Integer) 32);
#line 620 "export.m"
                    if (backend_libs__export__succeeded)
#line 619 "export.m"
                      {
#line 619 "export.m"
                        MR_String backend_libs__export__V_93_93;
#line 619 "export.m"
                        MR_String backend_libs__export__V_94_94;

#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__V_94_94 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                        }
#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__V_93_93 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_94_94, (MR_String) ")");
                        }
#line 619 "export.m"
                        {
#line 619 "export.m"
                          backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_93_93);
                        }
#line 619 "export.m"
                      }
#line 620 "export.m"
                    else
#line 621 "export.m"
                      {
#line 621 "export.m"
                        MR_String backend_libs__export__V_97_97;

#line 621 "export.m"
                        {
#line 621 "export.m"
                          backend_libs__export__V_97_97 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                        }
#line 621 "export.m"
                        {
#line 621 "export.m"
                          backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_97_97);
                        }
#line 621 "export.m"
                      }
#line 620 "export.m"
                  }
#line 623 "export.m"
                  break;
#line 623 "export.m"
              }
#line 425 "export.m"
              {
#line 425 "export.m"
                backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__RetArgLoc_35, backend_libs__export__RetArgString0_39, backend_libs__export__RetType_37, &backend_libs__export__RetArgString_40);
              }
#line 427 "export.m"
              {
#line 427 "export.m"
                backend_libs__export__V_62_62 = mercury__string__f_43_43_2_f_0(*backend_libs__export__C_RetType_16, (MR_String) " return_value;\n");
              }
#line 427 "export.m"
              {
#line 427 "export.m"
                *backend_libs__export__MaybeDeclareRetval_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__V_62_62);
              }
#line 430 "export.m"
              {
#line 430 "export.m"
                backend_libs__export__V_64_64 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_RetType_38);
              }
#line 430 "export.m"
              backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 430 "export.m"
              if (backend_libs__export__succeeded)
#line 430 "export.m"
                {
#line 430 "export.m"
                  backend_libs__export__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_64_64, (MR_Integer) 0)));
#line 431 "export.m"
                  {
#line 431 "export.m"
                    MR_String backend_libs__export__V_66_66;
#line 431 "export.m"
                    MR_String backend_libs__export__V_67_67;
#line 431 "export.m"
                    MR_String backend_libs__export__V_69_69;

#line 433 "export.m"
                    {
#line 433 "export.m"
                      backend_libs__export__V_69_69 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_40, (MR_String) ", return_value);\n");
                    }
#line 432 "export.m"
                    {
#line 432 "export.m"
                      backend_libs__export__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_69_69);
                    }
#line 432 "export.m"
                    {
#line 432 "export.m"
                      backend_libs__export__V_66_66 = mercury__string__f_43_43_2_f_0(*backend_libs__export__C_RetType_16, backend_libs__export__V_67_67);
                    }
#line 432 "export.m"
                    {
#line 432 "export.m"
                      *backend_libs__export__MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", backend_libs__export__V_66_66);
                    }
#line 431 "export.m"
                  }
#line 430 "export.m"
                }
#line 430 "export.m"
              else
#line 435 "export.m"
                {
#line 435 "export.m"
                  MR_String backend_libs__export__V_72_72;

#line 435 "export.m"
                  {
#line 435 "export.m"
                    backend_libs__export__V_72_72 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_40, (MR_String) ";\n");
                  }
#line 435 "export.m"
                  {
#line 435 "export.m"
                    *backend_libs__export__MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\treturn_value = ", backend_libs__export__V_72_72);
                  }
#line 435 "export.m"
                }
#line 438 "export.m"
              *backend_libs__export__MaybeSucceed_19 = (MR_String) "\treturn return_value;\n";
#line 439 "export.m"
              backend_libs__export__ArgInfoTypes2_43 = backend_libs__export__ArgInfoTypes1_34;
#line 422 "export.m"
            }
#line 440 "export.m"
          else
#line 441 "export.m"
            {
#line 441 "export.m"
              *backend_libs__export__C_RetType_16 = (MR_String) "void";
#line 442 "export.m"
              *backend_libs__export__MaybeDeclareRetval_17 = (MR_String) "";
#line 443 "export.m"
              *backend_libs__export__MaybeFail_18 = (MR_String) "";
#line 444 "export.m"
              *backend_libs__export__MaybeSucceed_19 = (MR_String) "";
#line 445 "export.m"
              backend_libs__export__ArgInfoTypes2_43 = backend_libs__export__ArgInfoTypes0_33;
#line 441 "export.m"
            }
#line 440 "export.m"
        }
#line 447 "export.m"
        break;
#line 447 "export.m"
      case (MR_Integer) 2:
#line 463 "export.m"
        {
#line 464 "export.m"
          {
#line 464 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_export_info_for_lang_c\'/10", (MR_String) "Attempt to export model_non procedure.");
#line 464 "export.m"
            return;
          }
#line 463 "export.m"
        }
#line 447 "export.m"
        break;
#line 447 "export.m"
      case (MR_Integer) 1:
#line 448 "export.m"
        {
#line 453 "export.m"
          *backend_libs__export__C_RetType_16 = (MR_String) "MR_bool";
#line 454 "export.m"
          *backend_libs__export__MaybeDeclareRetval_17 = (MR_String) "";
#line 455 "export.m"
          {
#line 455 "export.m"
            mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[24]), backend_libs__export__MaybeFail_18);
          }
#line 460 "export.m"
          *backend_libs__export__MaybeSucceed_19 = (MR_String) "\treturn MR_TRUE;\n";
#line 461 "export.m"
          backend_libs__export__ArgInfoTypes2_43 = backend_libs__export__ArgInfoTypes0_33;
#line 448 "export.m"
        }
#line 447 "export.m"
        break;
#line 447 "export.m"
    }
#line 466 "export.m"
    {
#line 466 "export.m"
      backend_libs__export__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 466 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[2]));
#line 466 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 1) = ((MR_Box) (backend_libs__export__get_export_info_for_lang_c_10_p_0_1));
#line 466 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 466 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_11));
#line 466 "export.m"
    }
#line 466 "export.m"
    {
#line 466 "export.m"
      mercury__list__filter_3_p_0((MR_Word) &backend_libs__export_scalar_common_1[0], backend_libs__export__V_74_74, backend_libs__export__ArgInfoTypes2_43, backend_libs__export__ArgInfoTypes_20);
#line 466 "export.m"
      return;
    }
#line 379 "export.m"
  }
#line 373 "export.m"
}

#line 292 "export.m"
static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
#line 292 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 292 "export.m"
{
#line 292 "export.m"
  {
#line 292 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 292 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 292 "export.m"
    {
#line 292 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__export_proc_to_c__292__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 292 "export.m"
    return backend_libs__export__succeeded;
#line 292 "export.m"
  }
#line 292 "export.m"
}

#line 286 "export.m"
static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
#line 286 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 286 "export.m"
  MR_Word backend_libs__export__Preds_6,
#line 286 "export.m"
  MR_Word backend_libs__export__ExportedProc_7,
#line 286 "export.m"
  MR_Word * backend_libs__export__ExportDefn_8)
#line 286 "export.m"
{
#line 289 "export.m"
  {
#line 289 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 289 "export.m"
    MR_Word backend_libs__export__Lang_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 0)));
#line 289 "export.m"
    MR_Word backend_libs__export__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 1)));
#line 289 "export.m"
    MR_Integer backend_libs__export__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 2)));
#line 289 "export.m"
    MR_String backend_libs__export__C_Function_12 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 3)));
#line 289 "export.m"
    MR_String backend_libs__export__DeclareString_14;
#line 289 "export.m"
    MR_String backend_libs__export__C_RetType_15;
#line 289 "export.m"
    MR_String backend_libs__export__MaybeDeclareRetval_16;
#line 289 "export.m"
    MR_String backend_libs__export__MaybeFail_17;
#line 289 "export.m"
    MR_String backend_libs__export__MaybeSucceed_18;
#line 289 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes_19;
#line 289 "export.m"
    MR_String backend_libs__export__ArgDecls_20;
#line 289 "export.m"
    MR_String backend_libs__export__PassInputArgs_21;
#line 289 "export.m"
    MR_String backend_libs__export__RetrieveOutputArgs_22;
#line 289 "export.m"
    MR_Word backend_libs__export__ProcLabel_23;
#line 289 "export.m"
    MR_String backend_libs__export__ProcLabelString_24;
#line 289 "export.m"
    MR_String backend_libs__export__Code_25;
#line 289 "export.m"
    MR_Word backend_libs__export__V_26_26;
#line 289 "export.m"
    MR_Word backend_libs__export__V_35_35;
#line 289 "export.m"
    MR_Word backend_libs__export__V_37_37;
#line 289 "export.m"
    MR_Word backend_libs__export__V_38_38;
#line 289 "export.m"
    MR_Word backend_libs__export__V_40_40;
#line 289 "export.m"
    MR_Word backend_libs__export__V_41_41;
#line 289 "export.m"
    MR_Word backend_libs__export__V_43_43;
#line 289 "export.m"
    MR_Word backend_libs__export__V_45_45;
#line 289 "export.m"
    MR_Word backend_libs__export__V_46_46;
#line 289 "export.m"
    MR_Word backend_libs__export__V_48_48;
#line 289 "export.m"
    MR_Word backend_libs__export__V_49_49;
#line 289 "export.m"
    MR_Word backend_libs__export__V_51_51;
#line 289 "export.m"
    MR_Word backend_libs__export__V_52_52;
#line 289 "export.m"
    MR_Word backend_libs__export__V_54_54;
#line 289 "export.m"
    MR_Word backend_libs__export__V_56_56;
#line 289 "export.m"
    MR_Word backend_libs__export__V_57_57;
#line 289 "export.m"
    MR_Word backend_libs__export__V_59_59;
#line 289 "export.m"
    MR_Word backend_libs__export__V_60_60;
#line 289 "export.m"
    MR_Word backend_libs__export__V_62_62;
#line 289 "export.m"
    MR_Word backend_libs__export__V_63_63;
#line 289 "export.m"
    MR_Word backend_libs__export__V_65_65;
#line 289 "export.m"
    MR_Word backend_libs__export__V_67_67;
#line 289 "export.m"
    MR_Word backend_libs__export__V_69_69;
#line 289 "export.m"
    MR_Word backend_libs__export__V_71_71;
#line 289 "export.m"
    MR_Word backend_libs__export__V_73_73;
#line 289 "export.m"
    MR_Word backend_libs__export__V_75_75;
#line 289 "export.m"
    MR_Word backend_libs__export__V_77_77;
#line 289 "export.m"
    MR_Word backend_libs__export__V_79_79;
#line 289 "export.m"
    MR_Word backend_libs__export__V_81_81;
#line 289 "export.m"
    MR_Word backend_libs__export__V_83_83;
#line 289 "export.m"
    MR_Word backend_libs__export__V_85_85;
#line 289 "export.m"
    MR_Word backend_libs__export__V_86_86;
#line 289 "export.m"
    MR_Word backend_libs__export__V_88_88;
#line 289 "export.m"
    MR_Word backend_libs__export__V_90_90;
#line 289 "export.m"
    MR_Word backend_libs__export__V_92_92;
#line 289 "export.m"
    MR_Word backend_libs__export__V_94_94;
#line 289 "export.m"
    MR_Word backend_libs__export__V_96_96;
#line 289 "export.m"
    MR_Word backend_libs__export__V_98_98;
#line 289 "export.m"
    MR_Word backend_libs__export__V_100_100;
#line 289 "export.m"
    MR_Word backend_libs__export__V_102_102;
#line 289 "export.m"
    MR_Word backend_libs__export__V_104_104;
#line 289 "export.m"
    MR_Word backend_libs__export__V_105_105;
#line 289 "export.m"
    MR_Word backend_libs__export__V_107_107;
#line 289 "export.m"
    MR_Word backend_libs__export__V_109_109;
#line 289 "export.m"
    MR_Word backend_libs__export__V_111_111;
#line 289 "export.m"
    MR_Word backend_libs__export__V_112_112;
#line 289 "export.m"
    MR_Word backend_libs__export__V_114_114;
#line 289 "export.m"
    MR_Word backend_libs__export__V_116_116;
#line 289 "export.m"
    MR_Word backend_libs__export__V_117_117;
#line 289 "export.m"
    MR_Word backend_libs__export__V_119_119;
#line 289 "export.m"
    MR_Word backend_libs__export__V_121_121;
#line 289 "export.m"
    MR_Word backend_libs__export__V_123_123;
#line 289 "export.m"
    MR_Word backend_libs__export__V_125_125;
#line 289 "export.m"
    MR_Word backend_libs__export__V_127_127;
#line 289 "export.m"
    MR_Word backend_libs__export__V_129_129;
#line 289 "export.m"
    MR_Word backend_libs__export__V_130_130;
#line 289 "export.m"
    MR_Word backend_libs__export__V_131_131;
#line 289 "export.m"
    MR_Word backend_libs__export__V_133_133;
#line 289 "export.m"
    MR_Word backend_libs__export__V_135_135;
#line 289 "export.m"
    MR_Word backend_libs__export__V_137_137;
#line 289 "export.m"
    MR_Word backend_libs__export__V_139_139;
#line 289 "export.m"
    MR_Word backend_libs__export__V_141_141;
#line 289 "export.m"
    MR_Word backend_libs__export__V_143_143;
#line 290 "export.m"
    MR_Word backend_libs__export___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 4)));

#line 292 "export.m"
    {
#line 292 "export.m"
      backend_libs__export__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 292 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
#line 292 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 1) = ((MR_Box) (backend_libs__export__export_proc_to_c_4_p_0_1));
#line 292 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 292 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 3) = ((MR_Box) (backend_libs__export__Lang_9));
#line 292 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 4) = ((MR_Box) ((MR_Integer) 0));
#line 292 "export.m"
    }
#line 292 "export.m"
    {
#line 292 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_26_26, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.export_proc_to_c\'/4", (MR_String) "foreign language other than C");
    }
#line 294 "export.m"
    {
#line 294 "export.m"
      backend_libs__export__get_export_info_for_lang_c_10_p_0(backend_libs__export__ModuleInfo_5, backend_libs__export__Preds_6, backend_libs__export__PredId_10, backend_libs__export__ProcId_11, &backend_libs__export__DeclareString_14, &backend_libs__export__C_RetType_15, &backend_libs__export__MaybeDeclareRetval_16, &backend_libs__export__MaybeFail_17, &backend_libs__export__MaybeSucceed_18, &backend_libs__export__ArgInfoTypes_19);
    }
#line 297 "export.m"
    {
#line 297 "export.m"
      backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 1, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__ArgDecls_20);
    }
#line 302 "export.m"
    {
#line 302 "export.m"
      backend_libs__export__pass_input_args_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 0, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__PassInputArgs_21);
    }
#line 303 "export.m"
    {
#line 303 "export.m"
      backend_libs__export__retrieve_output_args_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 0, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__RetrieveOutputArgs_22);
    }
#line 305 "export.m"
    {
#line 305 "export.m"
      backend_libs__export__ProcLabel_23 = backend_libs__proc_label__make_proc_label_3_f_0(backend_libs__export__ModuleInfo_5, backend_libs__export__PredId_10, backend_libs__export__ProcId_11);
    }
#line 306 "export.m"
    {
#line 306 "export.m"
      backend_libs__export__ProcLabelString_24 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__export__ProcLabel_23, (MR_Integer) 1);
    }
#line 356 "export.m"
    {
#line 356 "export.m"
      backend_libs__export__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_143_143, 0) = ((MR_Box) (backend_libs__export__MaybeSucceed_18));
#line 356 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[26])));
#line 356 "export.m"
    }
#line 355 "export.m"
    {
#line 355 "export.m"
      backend_libs__export__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_141_141, 0) = ((MR_Box) ((MR_String) "\tMR_restore_regs_from_mem(c_regs);\n"));
#line 355 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_141_141, 1) = ((MR_Box) (backend_libs__export__V_143_143));
#line 355 "export.m"
    }
#line 354 "export.m"
    {
#line 354 "export.m"
      backend_libs__export__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_139_139, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 354 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_139_139, 1) = ((MR_Box) (backend_libs__export__V_141_141));
#line 354 "export.m"
    }
#line 353 "export.m"
    {
#line 353 "export.m"
      backend_libs__export__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 0) = ((MR_Box) ((MR_String) "\t}\n"));
#line 353 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 1) = ((MR_Box) (backend_libs__export__V_139_139));
#line 353 "export.m"
    }
#line 352 "export.m"
    {
#line 352 "export.m"
      backend_libs__export__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 0) = ((MR_Box) ((MR_String) "\t\t MR_finalize_thread_engine();\n"));
#line 352 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 1) = ((MR_Box) (backend_libs__export__V_137_137));
#line 352 "export.m"
    }
#line 351 "export.m"
    {
#line 351 "export.m"
      backend_libs__export__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 0) = ((MR_Box) ((MR_String) "\tif (must_finalize_engine) {\n"));
#line 351 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 1) = ((MR_Box) (backend_libs__export__V_135_135));
#line 351 "export.m"
    }
#line 350 "export.m"
    {
#line 350 "export.m"
      backend_libs__export__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 350 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 1) = ((MR_Box) (backend_libs__export__V_133_133));
#line 350 "export.m"
    }
#line 349 "export.m"
    {
#line 349 "export.m"
      backend_libs__export__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 0) = ((MR_Box) (backend_libs__export__RetrieveOutputArgs_22));
#line 349 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 1) = ((MR_Box) (backend_libs__export__V_131_131));
#line 349 "export.m"
    }
#line 348 "export.m"
    {
#line 348 "export.m"
      backend_libs__export__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_129_129, 0) = ((MR_Box) (backend_libs__export__MaybeFail_17));
#line 348 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_129_129, 1) = ((MR_Box) (backend_libs__export__V_130_130));
#line 348 "export.m"
    }
#line 347 "export.m"
    {
#line 347 "export.m"
      backend_libs__export__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_127_127, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 347 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_127_127, 1) = ((MR_Box) (backend_libs__export__V_129_129));
#line 347 "export.m"
    }
#line 346 "export.m"
    {
#line 346 "export.m"
      backend_libs__export__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_125_125, 0) = ((MR_Box) ((MR_String) "\tMR_current_callback_site = saved_cur_callback;\n"));
#line 346 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_125_125, 1) = ((MR_Box) (backend_libs__export__V_127_127));
#line 346 "export.m"
    }
#line 345 "export.m"
    {
#line 345 "export.m"
      backend_libs__export__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_123_123, 0) = ((MR_Box) ((MR_String) "\tMR_current_call_site_dynamic = saved_cur_csd;\n"));
#line 345 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_123_123, 1) = ((MR_Box) (backend_libs__export__V_125_125));
#line 345 "export.m"
    }
#line 344 "export.m"
    {
#line 344 "export.m"
      backend_libs__export__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_121_121, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 344 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_121_121, 1) = ((MR_Box) (backend_libs__export__V_123_123));
#line 344 "export.m"
    }
#line 343 "export.m"
    {
#line 343 "export.m"
      backend_libs__export__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_119_119, 0) = ((MR_Box) ((MR_String) "\tMR_restore_transient_registers();\n"));
#line 343 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_119_119, 1) = ((MR_Box) (backend_libs__export__V_121_121));
#line 343 "export.m"
    }
#line 342 "export.m"
    {
#line 342 "export.m"
      backend_libs__export__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_117_117, 0) = ((MR_Box) ((MR_String) "), MR_FALSE);\n"));
#line 342 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_117_117, 1) = ((MR_Box) (backend_libs__export__V_119_119));
#line 342 "export.m"
    }
#line 342 "export.m"
    {
#line 342 "export.m"
      backend_libs__export__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_116_116, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
#line 342 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_116_116, 1) = ((MR_Box) (backend_libs__export__V_117_117));
#line 342 "export.m"
    }
#line 341 "export.m"
    {
#line 341 "export.m"
      backend_libs__export__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_114_114, 0) = ((MR_Box) ((MR_String) "\t(void) MR_call_engine(MR_ENTRY("));
#line 341 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_114_114, 1) = ((MR_Box) (backend_libs__export__V_116_116));
#line 341 "export.m"
    }
#line 340 "export.m"
    {
#line 340 "export.m"
      backend_libs__export__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_112_112, 0) = ((MR_Box) ((MR_String) "\tMR_save_transient_registers();\n"));
#line 340 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_112_112, 1) = ((MR_Box) (backend_libs__export__V_114_114));
#line 340 "export.m"
    }
#line 339 "export.m"
    {
#line 339 "export.m"
      backend_libs__export__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_111_111, 0) = ((MR_Box) (backend_libs__export__PassInputArgs_21));
#line 339 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_111_111, 1) = ((MR_Box) (backend_libs__export__V_112_112));
#line 339 "export.m"
    }
#line 338 "export.m"
    {
#line 338 "export.m"
      backend_libs__export__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_109_109, 0) = ((MR_Box) ((MR_String) "\tMR_restore_registers();\n"));
#line 338 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_109_109, 1) = ((MR_Box) (backend_libs__export__V_111_111));
#line 338 "export.m"
    }
#line 337 "export.m"
    {
#line 337 "export.m"
      backend_libs__export__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_107_107, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 337 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_107_107, 1) = ((MR_Box) (backend_libs__export__V_109_109));
#line 337 "export.m"
    }
#line 336 "export.m"
    {
#line 336 "export.m"
      backend_libs__export__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_105_105, 0) = ((MR_Box) ((MR_String) "));\n"));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_105_105, 1) = ((MR_Box) (backend_libs__export__V_107_107));
#line 336 "export.m"
    }
#line 336 "export.m"
    {
#line 336 "export.m"
      backend_libs__export__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_104_104, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_104_104, 1) = ((MR_Box) (backend_libs__export__V_105_105));
#line 336 "export.m"
    }
#line 336 "export.m"
    {
#line 336 "export.m"
      backend_libs__export__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_102_102, 0) = ((MR_Box) ((MR_String) "\tMR_setup_callback(MR_ENTRY("));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_102_102, 1) = ((MR_Box) (backend_libs__export__V_104_104));
#line 336 "export.m"
    }
#line 335 "export.m"
    {
#line 335 "export.m"
      backend_libs__export__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_100_100, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_csd = MR_current_call_site_dynamic;\n"));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_100_100, 1) = ((MR_Box) (backend_libs__export__V_102_102));
#line 335 "export.m"
    }
#line 334 "export.m"
    {
#line 334 "export.m"
      backend_libs__export__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_98_98, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_callback = MR_current_callback_site;\n"));
#line 334 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_98_98, 1) = ((MR_Box) (backend_libs__export__V_100_100));
#line 334 "export.m"
    }
#line 333 "export.m"
    {
#line 333 "export.m"
      backend_libs__export__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_96_96, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 333 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_96_96, 1) = ((MR_Box) (backend_libs__export__V_98_98));
#line 333 "export.m"
    }
#line 332 "export.m"
    {
#line 332 "export.m"
      backend_libs__export__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_94_94, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 332 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_94_94, 1) = ((MR_Box) (backend_libs__export__V_96_96));
#line 332 "export.m"
    }
#line 331 "export.m"
    {
#line 331 "export.m"
      backend_libs__export__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_92_92, 0) = ((MR_Box) ((MR_String) "\tmust_finalize_engine = MR_init_thread(MR_use_now);\n"));
#line 331 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_92_92, 1) = ((MR_Box) (backend_libs__export__V_94_94));
#line 331 "export.m"
    }
#line 330 "export.m"
    {
#line 330 "export.m"
      backend_libs__export__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_90_90, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 330 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_90_90, 1) = ((MR_Box) (backend_libs__export__V_92_92));
#line 330 "export.m"
    }
#line 329 "export.m"
    {
#line 329 "export.m"
      backend_libs__export__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_88_88, 0) = ((MR_Box) ((MR_String) "\tMR_save_regs_to_mem(c_regs);\n"));
#line 329 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_88_88, 1) = ((MR_Box) (backend_libs__export__V_90_90));
#line 329 "export.m"
    }
#line 328 "export.m"
    {
#line 328 "export.m"
      backend_libs__export__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_86_86, 0) = ((MR_Box) ((MR_String) "\n"));
#line 328 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_86_86, 1) = ((MR_Box) (backend_libs__export__V_88_88));
#line 328 "export.m"
    }
#line 327 "export.m"
    {
#line 327 "export.m"
      backend_libs__export__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 0) = ((MR_Box) (backend_libs__export__MaybeDeclareRetval_16));
#line 327 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 1) = ((MR_Box) (backend_libs__export__V_86_86));
#line 327 "export.m"
    }
#line 326 "export.m"
    {
#line 326 "export.m"
      backend_libs__export__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_83_83, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 326 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_83_83, 1) = ((MR_Box) (backend_libs__export__V_85_85));
#line 326 "export.m"
    }
#line 325 "export.m"
    {
#line 325 "export.m"
      backend_libs__export__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynamic *saved_cur_csd;\n"));
#line 325 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 1) = ((MR_Box) (backend_libs__export__V_83_83));
#line 325 "export.m"
    }
#line 324 "export.m"
    {
#line 324 "export.m"
      backend_libs__export__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_79_79, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynList **saved_cur_callback;\n"));
#line 324 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_79_79, 1) = ((MR_Box) (backend_libs__export__V_81_81));
#line 324 "export.m"
    }
#line 323 "export.m"
    {
#line 323 "export.m"
      backend_libs__export__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_77_77, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 323 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_77_77, 1) = ((MR_Box) (backend_libs__export__V_79_79));
#line 323 "export.m"
    }
#line 322 "export.m"
    {
#line 322 "export.m"
      backend_libs__export__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_75_75, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 322 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_75_75, 1) = ((MR_Box) (backend_libs__export__V_77_77));
#line 322 "export.m"
    }
#line 321 "export.m"
    {
#line 321 "export.m"
      backend_libs__export__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_73_73, 0) = ((MR_Box) ((MR_String) "\tMR_bool must_finalize_engine;\n"));
#line 321 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_73_73, 1) = ((MR_Box) (backend_libs__export__V_75_75));
#line 321 "export.m"
    }
#line 320 "export.m"
    {
#line 320 "export.m"
      backend_libs__export__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_71_71, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 320 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_71_71, 1) = ((MR_Box) (backend_libs__export__V_73_73));
#line 320 "export.m"
    }
#line 319 "export.m"
    {
#line 319 "export.m"
      backend_libs__export__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_69_69, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 319 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_69_69, 1) = ((MR_Box) (backend_libs__export__V_71_71));
#line 319 "export.m"
    }
#line 318 "export.m"
    {
#line 318 "export.m"
      backend_libs__export__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 0) = ((MR_Box) ((MR_String) "\tMR_Word c_regs[MR_NUM_REAL_REGS];\n"));
#line 318 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 1) = ((MR_Box) (backend_libs__export__V_69_69));
#line 318 "export.m"
    }
#line 317 "export.m"
    {
#line 317 "export.m"
      backend_libs__export__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 0) = ((MR_Box) ((MR_String) "#if MR_NUM_REAL_REGS > 0\n"));
#line 317 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 1) = ((MR_Box) (backend_libs__export__V_67_67));
#line 317 "export.m"
    }
#line 316 "export.m"
    {
#line 316 "export.m"
      backend_libs__export__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 0) = ((MR_Box) ((MR_String) ")\n{\n"));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 1) = ((MR_Box) (backend_libs__export__V_65_65));
#line 316 "export.m"
    }
#line 316 "export.m"
    {
#line 316 "export.m"
      backend_libs__export__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_62_62, 0) = ((MR_Box) (backend_libs__export__ArgDecls_20));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_62_62, 1) = ((MR_Box) (backend_libs__export__V_63_63));
#line 316 "export.m"
    }
#line 316 "export.m"
    {
#line 316 "export.m"
      backend_libs__export__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 0) = ((MR_Box) ((MR_String) "("));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 1) = ((MR_Box) (backend_libs__export__V_62_62));
#line 316 "export.m"
    }
#line 316 "export.m"
    {
#line 316 "export.m"
      backend_libs__export__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 0) = ((MR_Box) (backend_libs__export__C_Function_12));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 1) = ((MR_Box) (backend_libs__export__V_60_60));
#line 316 "export.m"
    }
#line 315 "export.m"
    {
#line 315 "export.m"
      backend_libs__export__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_57_57, 0) = ((MR_Box) ((MR_String) "\n"));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_57_57, 1) = ((MR_Box) (backend_libs__export__V_59_59));
#line 315 "export.m"
    }
#line 315 "export.m"
    {
#line 315 "export.m"
      backend_libs__export__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 0) = ((MR_Box) (backend_libs__export__C_RetType_15));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 1) = ((MR_Box) (backend_libs__export__V_57_57));
#line 315 "export.m"
    }
#line 314 "export.m"
    {
#line 314 "export.m"
      backend_libs__export__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_54_54, 0) = ((MR_Box) ((MR_String) "\n"));
#line 314 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_54_54, 1) = ((MR_Box) (backend_libs__export__V_56_56));
#line 314 "export.m"
    }
#line 313 "export.m"
    {
#line 313 "export.m"
      backend_libs__export__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_52_52, 0) = ((MR_Box) ((MR_String) ");\n"));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_52_52, 1) = ((MR_Box) (backend_libs__export__V_54_54));
#line 313 "export.m"
    }
#line 313 "export.m"
    {
#line 313 "export.m"
      backend_libs__export__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_51_51, 0) = ((MR_Box) (backend_libs__export__ArgDecls_20));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_51_51, 1) = ((MR_Box) (backend_libs__export__V_52_52));
#line 313 "export.m"
    }
#line 313 "export.m"
    {
#line 313 "export.m"
      backend_libs__export__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_49_49, 0) = ((MR_Box) ((MR_String) "("));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_49_49, 1) = ((MR_Box) (backend_libs__export__V_51_51));
#line 313 "export.m"
    }
#line 313 "export.m"
    {
#line 313 "export.m"
      backend_libs__export__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_48_48, 0) = ((MR_Box) (backend_libs__export__C_Function_12));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_48_48, 1) = ((MR_Box) (backend_libs__export__V_49_49));
#line 313 "export.m"
    }
#line 312 "export.m"
    {
#line 312 "export.m"
      backend_libs__export__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_46_46, 0) = ((MR_Box) ((MR_String) "\n"));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_46_46, 1) = ((MR_Box) (backend_libs__export__V_48_48));
#line 312 "export.m"
    }
#line 312 "export.m"
    {
#line 312 "export.m"
      backend_libs__export__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_45_45, 0) = ((MR_Box) (backend_libs__export__C_RetType_15));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_45_45, 1) = ((MR_Box) (backend_libs__export__V_46_46));
#line 312 "export.m"
    }
#line 311 "export.m"
    {
#line 311 "export.m"
      backend_libs__export__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_43_43, 0) = ((MR_Box) ((MR_String) "\n"));
#line 311 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_43_43, 1) = ((MR_Box) (backend_libs__export__V_45_45));
#line 311 "export.m"
    }
#line 310 "export.m"
    {
#line 310 "export.m"
      backend_libs__export__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_41_41, 0) = ((MR_Box) ((MR_String) ");\n"));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_41_41, 1) = ((MR_Box) (backend_libs__export__V_43_43));
#line 310 "export.m"
    }
#line 310 "export.m"
    {
#line 310 "export.m"
      backend_libs__export__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_40_40, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_40_40, 1) = ((MR_Box) (backend_libs__export__V_41_41));
#line 310 "export.m"
    }
#line 310 "export.m"
    {
#line 310 "export.m"
      backend_libs__export__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 0) = ((MR_Box) ((MR_String) "("));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 1) = ((MR_Box) (backend_libs__export__V_40_40));
#line 310 "export.m"
    }
#line 310 "export.m"
    {
#line 310 "export.m"
      backend_libs__export__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_37_37, 0) = ((MR_Box) (backend_libs__export__DeclareString_14));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_37_37, 1) = ((MR_Box) (backend_libs__export__V_38_38));
#line 310 "export.m"
    }
#line 309 "export.m"
    {
#line 309 "export.m"
      backend_libs__export__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 0) = ((MR_Box) ((MR_String) "\n"));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 1) = ((MR_Box) (backend_libs__export__V_37_37));
#line 309 "export.m"
    }
#line 308 "export.m"
    {
#line 308 "export.m"
      mercury__string__append_list_2_p_0(backend_libs__export__V_35_35, &backend_libs__export__Code_25);
    }
#line 359 "export.m"
    *backend_libs__export__ExportDefn_8 = (MR_Word) backend_libs__export__Code_25;
#line 289 "export.m"
  }
#line 286 "export.m"
}

#line 171 "export.m"
static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
#line 171 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 171 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 171 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 171 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4)
#line 171 "export.m"
{
#line 174 "export.m"
  {
#line 174 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 174 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 174 "export.m"
    else
#line 176 "export.m"
      {
#line 176 "export.m"
        MR_Word backend_libs__export__ExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 176 "export.m"
        MR_Word backend_libs__export__ExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 176 "export.m"
        MR_Word backend_libs__export__ExportDefn_11;
#line 176 "export.m"
        MR_Word backend_libs__export__ExportDefns_12;

#line 177 "export.m"
        {
#line 177 "export.m"
          backend_libs__export__export_proc_to_c_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__HeadVar__2_2, backend_libs__export__ExportedProc_9, &backend_libs__export__ExportDefn_11);
        }
#line 178 "export.m"
        {
#line 178 "export.m"
          backend_libs__export__export_procs_to_c_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__HeadVar__2_2, backend_libs__export__ExportedProcs_10, &backend_libs__export__ExportDefns_12);
        }
#line 176 "export.m"
        {
#line 176 "export.m"
          MR_Word base;
#line 176 "export.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "export.m"
          *backend_libs__export__HeadVar__4_4 = base;
#line 176 "export.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__ExportDefn_11));
#line 176 "export.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__ExportDefns_12));
#line 176 "export.m"
        }
#line 176 "export.m"
      }
#line 174 "export.m"
  }
#line 171 "export.m"
}

#line 134 "export.m"
static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
#line 134 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 134 "export.m"
  MR_Word backend_libs__export__Preds_2,
#line 134 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 134 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4)
#line 134 "export.m"
{
#line 137 "export.m"
  {
#line 137 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 137 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 137 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 137 "export.m"
    else
#line 140 "export.m"
      {
#line 140 "export.m"
        MR_Word backend_libs__export__HeadExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 140 "export.m"
        MR_Word backend_libs__export__TailExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 140 "export.m"
        MR_Word backend_libs__export__HeadExportDecl_11;
#line 140 "export.m"
        MR_Word backend_libs__export__TailExportDecls_12;
#line 140 "export.m"
        MR_Word backend_libs__export__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 0)));
#line 140 "export.m"
        MR_Word backend_libs__export__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 1)));
#line 140 "export.m"
        MR_Integer backend_libs__export__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 2)));
#line 140 "export.m"
        MR_String backend_libs__export__ExportName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 3)));
#line 140 "export.m"
        MR_String backend_libs__export__RetType_19;
#line 140 "export.m"
        MR_String backend_libs__export__ArgDecls_24;
#line 141 "export.m"
        MR_Word backend_libs__export___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 4)));

#line 150 "export.m"
#line 150 "export.m"
        switch (backend_libs__export__Lang_13) {
#line 150 "export.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 150 "export.m"
          case (MR_Integer) 0:
#line 144 "export.m"
            {
#line 144 "export.m"
              MR_Word backend_libs__export__HeadArgInfoTypes_23;
#line 145 "export.m"
              MR_String backend_libs__export___HowToDeclare_18;
#line 145 "export.m"
              MR_String backend_libs__export___DeclareReturnVal_20;
#line 145 "export.m"
              MR_String backend_libs__export___FailureAction_21;
#line 145 "export.m"
              MR_String backend_libs__export___SuccessAction_22;

#line 145 "export.m"
              {
#line 145 "export.m"
                backend_libs__export__get_export_info_for_lang_c_10_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Preds_2, backend_libs__export__PredId_14, backend_libs__export__ProcId_15, &backend_libs__export___HowToDeclare_18, &backend_libs__export__RetType_19, &backend_libs__export___DeclareReturnVal_20, &backend_libs__export___FailureAction_21, &backend_libs__export___SuccessAction_22, &backend_libs__export__HeadArgInfoTypes_23);
              }
#line 487 "export.m"
              if ((backend_libs__export__HeadArgInfoTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "export.m"
                backend_libs__export__ArgDecls_24 = (MR_String) "void";
#line 487 "export.m"
              else
#line 489 "export.m"
                {
#line 490 "export.m"
                  {
#line 490 "export.m"
                    backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, (MR_Integer) 0, (MR_Integer) 0, backend_libs__export__HeadArgInfoTypes_23, &backend_libs__export__ArgDecls_24);
                  }
#line 489 "export.m"
                }
#line 144 "export.m"
            }
#line 150 "export.m"
            break;
#line 150 "export.m"
          case (MR_Integer) 1:
#line 150 "export.m"
          case (MR_Integer) 4:
#line 150 "export.m"
          case (MR_Integer) 3:
#line 150 "export.m"
          case (MR_Integer) 2:
#line 155 "export.m"
            {
#line 156 "export.m"
              {
#line 156 "export.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_foreign_export_decls_loop\'/4", (MR_String) ":- pragma foreign_export for non-C backends.");
#line 156 "export.m"
                return;
              }
#line 155 "export.m"
            }
#line 150 "export.m"
            break;
#line 150 "export.m"
        }
#line 158 "export.m"
        {
#line 158 "export.m"
          backend_libs__export__HeadExportDecl_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 0) = ((MR_Box) (backend_libs__export__Lang_13));
#line 158 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 1) = ((MR_Box) (backend_libs__export__RetType_19));
#line 158 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 2) = ((MR_Box) (backend_libs__export__ExportName_16));
#line 158 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 3) = ((MR_Box) (backend_libs__export__ArgDecls_24));
#line 158 "export.m"
        }
#line 159 "export.m"
        {
#line 159 "export.m"
          backend_libs__export__get_foreign_export_decls_loop_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Preds_2, backend_libs__export__TailExportedProcs_10, &backend_libs__export__TailExportDecls_12);
        }
#line 140 "export.m"
        {
#line 140 "export.m"
          MR_Word base;
#line 140 "export.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "export.m"
          *backend_libs__export__HeadVar__4_4 = base;
#line 140 "export.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__HeadExportDecl_11));
#line 140 "export.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__TailExportDecls_12));
#line 140 "export.m"
        }
#line 140 "export.m"
      }
#line 137 "export.m"
  }
#line 134 "export.m"
}

#line 78 "export.m"
MR_bool MR_CALL 
backend_libs__export__c_type_is_word_sized_int_or_ptr_1_p_0(
#line 78 "export.m"
  MR_String backend_libs__export__HeadVar__1_1)
#line 78 "export.m"
{
#line 989 "export.m"
  {
#line 989 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 989 "export.m"
    MR_Integer backend_libs__export__lo_0;
#line 989 "export.m"
    MR_Integer backend_libs__export__hi_1;
#line 989 "export.m"
    MR_Integer backend_libs__export__mid_2;
#line 989 "export.m"
    MR_Integer backend_libs__export__result_3;

#line 989 "export.m"
    /* binary string simple lookup switch */
#line 989 "export.m"
    backend_libs__export__lo_0 = (MR_Integer) 0;
#line 989 "export.m"
    backend_libs__export__hi_1 = (MR_Integer) 4;
#line 989 "export.m"
    do
#line 989 "export.m"
      {
#line 989 "export.m"
        backend_libs__export__mid_2 = (((backend_libs__export__lo_0 + backend_libs__export__hi_1)) / (MR_Integer) 2);
#line 989 "export.m"
        backend_libs__export__result_3 = MR_strcmp(backend_libs__export__HeadVar__1_1, ((&backend_libs__export_vector_common_8[0 + backend_libs__export__mid_2]))->backend_libs__export__vector_common_type_8_0__vct_8_f_0);
#line 989 "export.m"
        if ((backend_libs__export__result_3 == (MR_Integer) 0))
#line 989 "export.m"
          {
#line 989 "export.m"
            backend_libs__export__succeeded = MR_TRUE;
#line 989 "export.m"
            /* jump out of search loop */
#line 989 "export.m"
            goto label_0;
#line 989 "export.m"
          }
#line 989 "export.m"
        else
#line 989 "export.m"
        if ((backend_libs__export__result_3 < (MR_Integer) 0))
#line 989 "export.m"
          backend_libs__export__hi_1 = (backend_libs__export__mid_2 - (MR_Integer) 1);
#line 989 "export.m"
        else
#line 989 "export.m"
          backend_libs__export__lo_0 = (backend_libs__export__mid_2 + (MR_Integer) 1);
#line 989 "export.m"
      }
#line 989 "export.m"
    while ((backend_libs__export__lo_0 <= backend_libs__export__hi_1));
#line 989 "export.m"
    backend_libs__export__succeeded = MR_FALSE;
#line 989 "export.m"
  label_0:;
#line 989 "export.m"
    return backend_libs__export__succeeded;
#line 989 "export.m"
  }
#line 78 "export.m"
}

#line 72 "export.m"
void MR_CALL 
backend_libs__export__convert_type_from_mercury_4_p_0(
#line 72 "export.m"
  MR_Word backend_libs__export__SourceArgLoc_5,
#line 72 "export.m"
  MR_String backend_libs__export__Rval_6,
#line 72 "export.m"
  MR_Word backend_libs__export__Type_7,
#line 72 "export.m"
  MR_String * backend_libs__export__ConvertedRval_8)
#line 72 "export.m"
{
#line 666 "export.m"
  {
#line 666 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 666 "export.m"
#line 666 "export.m"
    switch (MR_tag((MR_Word) backend_libs__export__Type_7)) {
#line 666 "export.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 666 "export.m"
      case (MR_Integer) 0:
#line 666 "export.m"
      case (MR_Integer) 1:
#line 692 "export.m"
        *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 666 "export.m"
        break;
#line 666 "export.m"
      case (MR_Integer) 2:
#line 666 "export.m"
        {
#line 666 "export.m"
          MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_7, (MR_Integer) 0)));

#line 670 "export.m"
#line 670 "export.m"
          switch (backend_libs__export__BuiltinType_9) {
#line 670 "export.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 670 "export.m"
            case (MR_Integer) 3:
#line 670 "export.m"
            case (MR_Integer) 0:
#line 682 "export.m"
              *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 670 "export.m"
              break;
#line 670 "export.m"
            case (MR_Integer) 1:
#line 671 "export.m"
              {
#line 671 "export.m"
                MR_Word backend_libs__export__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 0)));
#line 673 "export.m"
                MR_Integer backend_libs__export__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 1)));

#line 675 "export.m"
#line 675 "export.m"
                switch (backend_libs__export__V_35_35) {
#line 675 "export.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 675 "export.m"
                  case (MR_Integer) 1:
#line 677 "export.m"
                    *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 675 "export.m"
                    break;
#line 675 "export.m"
                  case (MR_Integer) 0:
#line 673 "export.m"
                    {
#line 673 "export.m"
                      MR_String backend_libs__export__V_31_31;

#line 674 "export.m"
                      {
#line 674 "export.m"
                        backend_libs__export__V_31_31 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_6, (MR_String) ")");
                      }
#line 674 "export.m"
                      {
#line 674 "export.m"
                        *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", backend_libs__export__V_31_31);
                      }
#line 673 "export.m"
                    }
#line 675 "export.m"
                    break;
#line 675 "export.m"
                }
#line 671 "export.m"
              }
#line 670 "export.m"
              break;
#line 670 "export.m"
            case (MR_Integer) 2:
#line 668 "export.m"
              {
#line 669 "export.m"
                {
#line 669 "export.m"
                  *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", backend_libs__export__Rval_6);
                }
#line 668 "export.m"
              }
#line 670 "export.m"
              break;
#line 670 "export.m"
          }
#line 666 "export.m"
        }
#line 666 "export.m"
        break;
#line 666 "export.m"
      case (MR_Integer) 3:
#line 692 "export.m"
        *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 666 "export.m"
        break;
#line 666 "export.m"
    }
#line 666 "export.m"
  }
#line 72 "export.m"
}

#line 65 "export.m"
void MR_CALL 
backend_libs__export__convert_type_to_mercury_4_p_0(
#line 65 "export.m"
  MR_String backend_libs__export__Rval_5,
#line 65 "export.m"
  MR_Word backend_libs__export__Type_6,
#line 65 "export.m"
  MR_Word backend_libs__export__TargetArgLoc_7,
#line 65 "export.m"
  MR_String * backend_libs__export__ConvertedRval_8)
#line 65 "export.m"
{
#line 630 "export.m"
  {
#line 630 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 630 "export.m"
#line 630 "export.m"
    switch (MR_tag((MR_Word) backend_libs__export__Type_6)) {
#line 630 "export.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 630 "export.m"
      case (MR_Integer) 0:
#line 630 "export.m"
      case (MR_Integer) 1:
#line 660 "export.m"
        *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 630 "export.m"
        break;
#line 630 "export.m"
      case (MR_Integer) 2:
#line 630 "export.m"
        {
#line 630 "export.m"
          MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_6, (MR_Integer) 0)));

#line 634 "export.m"
#line 634 "export.m"
          switch (backend_libs__export__BuiltinType_9) {
#line 634 "export.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 634 "export.m"
            case (MR_Integer) 3:
#line 644 "export.m"
              {
#line 648 "export.m"
                {
#line 648 "export.m"
                  *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_UnsignedChar) ", backend_libs__export__Rval_5);
                }
#line 644 "export.m"
              }
#line 634 "export.m"
              break;
#line 634 "export.m"
            case (MR_Integer) 1:
#line 635 "export.m"
              {
#line 635 "export.m"
                MR_Word backend_libs__export__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 0)));
#line 637 "export.m"
                MR_Integer backend_libs__export__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 1)));

#line 639 "export.m"
#line 639 "export.m"
                switch (backend_libs__export__V_36_36) {
#line 639 "export.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 639 "export.m"
                  case (MR_Integer) 1:
#line 641 "export.m"
                    *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 639 "export.m"
                    break;
#line 639 "export.m"
                  case (MR_Integer) 0:
#line 637 "export.m"
                    {
#line 637 "export.m"
                      MR_String backend_libs__export__V_32_32;

#line 638 "export.m"
                      {
#line 638 "export.m"
                        backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_5, (MR_String) ")");
                      }
#line 638 "export.m"
                      {
#line 638 "export.m"
                        *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", backend_libs__export__V_32_32);
                      }
#line 637 "export.m"
                    }
#line 639 "export.m"
                    break;
#line 639 "export.m"
                }
#line 635 "export.m"
              }
#line 634 "export.m"
              break;
#line 634 "export.m"
            case (MR_Integer) 0:
#line 650 "export.m"
              *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 634 "export.m"
              break;
#line 634 "export.m"
            case (MR_Integer) 2:
#line 632 "export.m"
              {
#line 633 "export.m"
                {
#line 633 "export.m"
                  *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", backend_libs__export__Rval_5);
                }
#line 632 "export.m"
              }
#line 634 "export.m"
              break;
#line 634 "export.m"
          }
#line 630 "export.m"
        }
#line 630 "export.m"
        break;
#line 630 "export.m"
      case (MR_Integer) 3:
#line 660 "export.m"
        *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 630 "export.m"
        break;
#line 630 "export.m"
    }
#line 630 "export.m"
  }
#line 65 "export.m"
}

#line 766 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
#line 766 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 766 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 766 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 766 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 766 "export.m"
{
#line 766 "export.m"
  {
#line 766 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 766 "export.m"
    {
#line 766 "export.m"
      backend_libs__export__output_foreign_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 766 "export.m"
      return;
    }
#line 766 "export.m"
  }
#line 766 "export.m"
}

#line 763 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
#line 763 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 763 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 763 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 763 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 763 "export.m"
{
#line 763 "export.m"
  {
#line 763 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 763 "export.m"
    {
#line 763 "export.m"
      backend_libs__export__output_exported_c_enum_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 763 "export.m"
      return;
    }
#line 763 "export.m"
  }
#line 763 "export.m"
}

#line 750 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
#line 750 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 750 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1)
#line 750 "export.m"
{
#line 750 "export.m"
  {
#line 750 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 750 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 750 "export.m"
    {
#line 750 "export.m"
      return backend_libs__export__succeeded = parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
#line 750 "export.m"
    return backend_libs__export__succeeded;
#line 750 "export.m"
  }
#line 750 "export.m"
}

#line 749 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
#line 749 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 749 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1)
#line 749 "export.m"
{
#line 749 "export.m"
  {
#line 749 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 749 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 749 "export.m"
    {
#line 749 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__exported_enum_is_for_c_1_p_0(((MR_Word) backend_libs__export__wrapper_arg_1));
    }
#line 749 "export.m"
    return backend_libs__export__succeeded;
#line 749 "export.m"
  }
#line 749 "export.m"
}

#line 53 "export.m"
void MR_CALL 
backend_libs__export__produce_header_file_5_p_0(
#line 53 "export.m"
  MR_Word backend_libs__export__ModuleInfo_6,
#line 53 "export.m"
  MR_Word backend_libs__export__ForeignExportDecls_7,
#line 53 "export.m"
  MR_Word backend_libs__export__ModuleName_8)
#line 53 "export.m"
{
#line 701 "export.m"
  {
#line 701 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 701 "export.m"
    MR_Word backend_libs__export__ForeignDeclCodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 0)));
#line 701 "export.m"
    MR_Word backend_libs__export__C_ExportDecls_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 1)));
#line 701 "export.m"
    MR_Word backend_libs__export__ExportedEnums_12;
#line 701 "export.m"
    MR_Word backend_libs__export__Globals_14;
#line 701 "export.m"
    MR_String backend_libs__export__FileName_15;
#line 701 "export.m"
    MR_Word backend_libs__export__Result_16;
#line 701 "export.m"
    MR_String backend_libs__export__V_34_34;

#line 706 "export.m"
    {
#line 706 "export.m"
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__ExportedEnums_12);
    }
#line 708 "export.m"
    {
#line 708 "export.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__Globals_14);
    }
#line 709 "export.m"
    {
#line 709 "export.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_14, backend_libs__export__ModuleName_8, (MR_String) ".mh", (MR_Integer) 0, &backend_libs__export__FileName_15);
    }
#line 711 "export.m"
    {
#line 711 "export.m"
      backend_libs__export__V_34_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_15, (MR_String) ".tmp");
    }
#line 711 "export.m"
    {
#line 711 "export.m"
      mercury__io__open_output_4_p_0(backend_libs__export__V_34_34, &backend_libs__export__Result_16);
    }
#line 784 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Result_16)) == (MR_mktag((MR_Integer) 1))))
#line 785 "export.m"
      {
#line 785 "export.m"
        MR_String backend_libs__export__ProgName_29;
#line 785 "export.m"
        MR_String backend_libs__export__V_44_44;

#line 786 "export.m"
        {
#line 786 "export.m"
          mercury__io__progname_base_4_p_0((MR_String) "export.m", &backend_libs__export__ProgName_29);
        }
#line 787 "export.m"
        {
#line 787 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 788 "export.m"
        {
#line 788 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__ProgName_29);
        }
#line 789 "export.m"
        {
#line 789 "export.m"
          mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
        }
#line 790 "export.m"
        {
#line 790 "export.m"
          backend_libs__export__V_44_44 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_15, (MR_String) ".tmp");
        }
#line 790 "export.m"
        {
#line 790 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_44_44);
        }
#line 791 "export.m"
        {
#line 791 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
        }
#line 792 "export.m"
        {
#line 792 "export.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 792 "export.m"
          return;
        }
#line 785 "export.m"
      }
#line 784 "export.m"
    else
#line 713 "export.m"
      {
#line 713 "export.m"
        MR_Word backend_libs__export__TypeCtorInfo_172_172;
#line 713 "export.m"
        MR_Word backend_libs__export__TypeCtorInfo_174_174;
#line 713 "export.m"
        MR_Word backend_libs__export__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Result_16, (MR_Integer) 0)));
#line 713 "export.m"
        MR_Word backend_libs__export__OutputStream_18;
#line 713 "export.m"
        MR_String backend_libs__export__SourceFileName_19;
#line 713 "export.m"
        MR_String backend_libs__export__Version_20;
#line 713 "export.m"
        MR_String backend_libs__export__Fullarch_21;
#line 713 "export.m"
        MR_String backend_libs__export__MangledModuleName_22;
#line 713 "export.m"
        MR_String backend_libs__export__UppercaseModuleName_23;
#line 713 "export.m"
        MR_String backend_libs__export__GuardMacroName_24;
#line 713 "export.m"
        MR_Word backend_libs__export__CExportedEnums_25;
#line 713 "export.m"
        MR_Word backend_libs__export__CForeignDeclCodes_26;
#line 713 "export.m"
        MR_Word backend_libs__export__V_55_55;
#line 713 "export.m"
        MR_Word backend_libs__export__V_58_58;
#line 713 "export.m"
        MR_Word backend_libs__export__V_60_60;
#line 713 "export.m"
        MR_Word backend_libs__export__V_61_61;
#line 713 "export.m"
        MR_Word backend_libs__export__V_63_63;
#line 713 "export.m"
        MR_Word backend_libs__export__V_65_65;
#line 713 "export.m"
        MR_Word backend_libs__export__V_67_67;
#line 713 "export.m"
        MR_Word backend_libs__export__V_68_68;
#line 713 "export.m"
        MR_Word backend_libs__export__V_70_70;
#line 713 "export.m"
        MR_Word backend_libs__export__V_72_72;
#line 713 "export.m"
        MR_Word backend_libs__export__V_81_81;
#line 713 "export.m"
        MR_Word backend_libs__export__V_84_84;
#line 713 "export.m"
        MR_Word backend_libs__export__V_85_85;
#line 713 "export.m"
        MR_Word backend_libs__export__V_87_87;
#line 713 "export.m"
        MR_Word backend_libs__export__V_89_89;
#line 713 "export.m"
        MR_Word backend_libs__export__V_151_151;
#line 713 "export.m"
        MR_Word backend_libs__export__V_154_154;
#line 713 "export.m"
        MR_Word backend_libs__export__V_156_156;
#line 713 "export.m"
        MR_Word backend_libs__export__V_158_158;
#line 713 "export.m"
        MR_Word backend_libs__export__V_160_160;
#line 713 "export.m"
        MR_Word backend_libs__export__V_162_162;
#line 713 "export.m"
        MR_Word backend_libs__export__V_164_164;
#line 780 "export.m"
        MR_Word backend_libs__export__V_27_27;

#line 714 "export.m"
        {
#line 714 "export.m"
          mercury__io__set_output_stream_4_p_0(backend_libs__export__FileStream_17, &backend_libs__export__OutputStream_18);
        }
#line 715 "export.m"
        {
#line 715 "export.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_14, backend_libs__export__ModuleName_8, (MR_String) ".m", (MR_Integer) 1, &backend_libs__export__SourceFileName_19);
        }
#line 717 "export.m"
        {
#line 717 "export.m"
          mercury__library__version_2_p_0(&backend_libs__export__Version_20, &backend_libs__export__Fullarch_21);
        }
#line 723 "export.m"
        {
#line 723 "export.m"
          backend_libs__export__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_72_72, 0) = ((MR_Box) (backend_libs__export__Fullarch_21));
#line 723 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[3])));
#line 723 "export.m"
        }
#line 723 "export.m"
        {
#line 723 "export.m"
          backend_libs__export__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 0) = ((MR_Box) ((MR_String) "** configured for "));
#line 723 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 1) = ((MR_Box) (backend_libs__export__V_72_72));
#line 723 "export.m"
        }
#line 722 "export.m"
        {
#line 722 "export.m"
          backend_libs__export__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 0) = ((MR_Box) ((MR_String) "\n"));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 1) = ((MR_Box) (backend_libs__export__V_70_70));
#line 722 "export.m"
        }
#line 722 "export.m"
        {
#line 722 "export.m"
          backend_libs__export__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 0) = ((MR_Box) (backend_libs__export__Version_20));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 1) = ((MR_Box) (backend_libs__export__V_68_68));
#line 722 "export.m"
        }
#line 722 "export.m"
        {
#line 722 "export.m"
          backend_libs__export__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 0) = ((MR_Box) ((MR_String) "** version "));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 1) = ((MR_Box) (backend_libs__export__V_67_67));
#line 722 "export.m"
        }
#line 721 "export.m"
        {
#line 721 "export.m"
          backend_libs__export__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 1) = ((MR_Box) (backend_libs__export__V_65_65));
#line 721 "export.m"
        }
#line 720 "export.m"
        {
#line 720 "export.m"
          backend_libs__export__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 1) = ((MR_Box) (backend_libs__export__V_63_63));
#line 720 "export.m"
        }
#line 720 "export.m"
        {
#line 720 "export.m"
          backend_libs__export__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 0) = ((MR_Box) (backend_libs__export__SourceFileName_19));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 1) = ((MR_Box) (backend_libs__export__V_61_61));
#line 720 "export.m"
        }
#line 720 "export.m"
        {
#line 720 "export.m"
          backend_libs__export__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_58_58, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_58_58, 1) = ((MR_Box) (backend_libs__export__V_60_60));
#line 720 "export.m"
        }
#line 719 "export.m"
        {
#line 719 "export.m"
          backend_libs__export__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_55_55, 0) = ((MR_Box) ((MR_String) "/*\n"));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_55_55, 1) = ((MR_Box) (backend_libs__export__V_58_58));
#line 719 "export.m"
        }
#line 718 "export.m"
        {
#line 718 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_55_55);
        }
#line 726 "export.m"
        {
#line 726 "export.m"
          backend_libs__export__MangledModuleName_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__export__ModuleName_8);
        }
#line 727 "export.m"
        {
#line 727 "export.m"
          mercury__string__to_upper_2_p_0(backend_libs__export__MangledModuleName_22, &backend_libs__export__UppercaseModuleName_23);
        }
#line 728 "export.m"
        {
#line 728 "export.m"
          backend_libs__export__GuardMacroName_24 = mercury__string__f_43_43_2_f_0(backend_libs__export__UppercaseModuleName_23, (MR_String) "_MH");
        }
#line 731 "export.m"
        {
#line 731 "export.m"
          backend_libs__export__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_89_89, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 731 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[20])));
#line 731 "export.m"
        }
#line 731 "export.m"
        {
#line 731 "export.m"
          backend_libs__export__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_87_87, 0) = ((MR_Box) ((MR_String) "#define "));
#line 731 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_87_87, 1) = ((MR_Box) (backend_libs__export__V_89_89));
#line 731 "export.m"
        }
#line 730 "export.m"
        {
#line 730 "export.m"
          backend_libs__export__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 0) = ((MR_Box) ((MR_String) "\n"));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 1) = ((MR_Box) (backend_libs__export__V_87_87));
#line 730 "export.m"
        }
#line 730 "export.m"
        {
#line 730 "export.m"
          backend_libs__export__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_84_84, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_84_84, 1) = ((MR_Box) (backend_libs__export__V_85_85));
#line 730 "export.m"
        }
#line 730 "export.m"
        {
#line 730 "export.m"
          backend_libs__export__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 0) = ((MR_Box) ((MR_String) "#ifndef "));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 1) = ((MR_Box) (backend_libs__export__V_84_84));
#line 730 "export.m"
        }
#line 729 "export.m"
        {
#line 729 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_81_81);
        }
#line 6005 "backend_libs.export.c"
        backend_libs__export__TypeCtorInfo_172_172 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0;
#line 749 "export.m"
        {
#line 749 "export.m"
          mercury__list__filter_3_p_0(backend_libs__export__TypeCtorInfo_172_172, (MR_Word) &backend_libs__export_scalar_common_1[2], backend_libs__export__ExportedEnums_12, &backend_libs__export__CExportedEnums_25);
        }
#line 6012 "backend_libs.export.c"
        backend_libs__export__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
#line 750 "export.m"
        {
#line 750 "export.m"
          mercury__list__filter_3_p_0(backend_libs__export__TypeCtorInfo_174_174, (MR_Word) &backend_libs__export_scalar_common_3[1], backend_libs__export__ForeignDeclCodes_10, &backend_libs__export__CForeignDeclCodes_26);
        }
#line 753 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__CExportedEnums_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "export.m"
        if (backend_libs__export__succeeded)
#line 754 "export.m"
          backend_libs__export__succeeded = (backend_libs__export__CForeignDeclCodes_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "export.m"
        if (backend_libs__export__succeeded)
#line 759 "export.m"
          {
#line 759 "export.m"
          }
#line 759 "export.m"
        else
#line 762 "export.m"
          {
#line 762 "export.m"
            MR_Word backend_libs__export__TypeCtorInfo_178_178;
#line 762 "export.m"
            MR_Word backend_libs__export__V_128_128;
#line 762 "export.m"
            MR_Word backend_libs__export__V_131_131;
#line 762 "export.m"
            MR_String backend_libs__export__V_132_132;
#line 762 "export.m"
            MR_Word backend_libs__export__V_133_133;
#line 762 "export.m"
            MR_Word backend_libs__export__V_135_135;
#line 762 "export.m"
            MR_Word backend_libs__export__V_137_137;
#line 762 "export.m"
            MR_String backend_libs__export__V_138_138;
#line 762 "export.m"
            MR_Word backend_libs__export__V_142_142;
#line 762 "export.m"
            MR_Word backend_libs__export__V_144_144;
#line 763 "export.m"
            MR_Box backend_libs__export__conv0_STATE_VARIABLE_IO_143_143;
#line 765 "export.m"
            MR_Box backend_libs__export__conv1_STATE_VARIABLE_IO_145_145;

#line 761 "export.m"
            {
#line 761 "export.m"
              backend_libs__export__V_132_132 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
            }
#line 762 "export.m"
            {
#line 762 "export.m"
              backend_libs__export__V_138_138 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
            }
#line 762 "export.m"
            {
#line 762 "export.m"
              backend_libs__export__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 0) = ((MR_Box) (backend_libs__export__V_138_138));
#line 762 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[4])));
#line 762 "export.m"
            }
#line 762 "export.m"
            {
#line 762 "export.m"
              backend_libs__export__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 0) = ((MR_Box) ((MR_String) "#define "));
#line 762 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 1) = ((MR_Box) (backend_libs__export__V_137_137));
#line 762 "export.m"
            }
#line 761 "export.m"
            {
#line 761 "export.m"
              backend_libs__export__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 0) = ((MR_Box) ((MR_String) "\n"));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 1) = ((MR_Box) (backend_libs__export__V_135_135));
#line 761 "export.m"
            }
#line 761 "export.m"
            {
#line 761 "export.m"
              backend_libs__export__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 0) = ((MR_Box) (backend_libs__export__V_132_132));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 1) = ((MR_Box) (backend_libs__export__V_133_133));
#line 761 "export.m"
            }
#line 761 "export.m"
            {
#line 761 "export.m"
              backend_libs__export__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 0) = ((MR_Box) ((MR_String) "#ifndef "));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 1) = ((MR_Box) (backend_libs__export__V_131_131));
#line 761 "export.m"
            }
#line 760 "export.m"
            {
#line 760 "export.m"
              mercury__io__write_strings_3_p_0(backend_libs__export__V_128_128);
            }
#line 763 "export.m"
            {
#line 763 "export.m"
              backend_libs__export__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 763 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[0]));
#line 763 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_3));
#line 763 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 763 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_6));
#line 763 "export.m"
            }
#line 6139 "backend_libs.export.c"
            backend_libs__export__TypeCtorInfo_178_178 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 763 "export.m"
            {
#line 763 "export.m"
              mercury__list__foldl_4_p_2(backend_libs__export__TypeCtorInfo_172_172, backend_libs__export__TypeCtorInfo_178_178, backend_libs__export__V_142_142, backend_libs__export__CExportedEnums_25, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv0_STATE_VARIABLE_IO_143_143);
            }
#line 766 "export.m"
            {
#line 766 "export.m"
              backend_libs__export__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 766 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[0]));
#line 766 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_4));
#line 766 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 766 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 3) = ((MR_Box) (backend_libs__export__Globals_14));
#line 766 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 4) = ((MR_Box) (backend_libs__export__SourceFileName_19));
#line 766 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_6[0])));
#line 766 "export.m"
            }
#line 765 "export.m"
            {
#line 765 "export.m"
              mercury__list__foldl_4_p_2(backend_libs__export__TypeCtorInfo_174_174, backend_libs__export__TypeCtorInfo_178_178, backend_libs__export__V_144_144, backend_libs__export__CForeignDeclCodes_26, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv1_STATE_VARIABLE_IO_145_145);
            }
#line 769 "export.m"
            {
#line 769 "export.m"
              mercury__io__write_string_3_p_0((MR_String) "\n#endif\n");
            }
#line 762 "export.m"
          }
#line 772 "export.m"
        {
#line 772 "export.m"
          backend_libs__export__produce_header_file_2_3_p_0(backend_libs__export__C_ExportDecls_11);
        }
#line 779 "export.m"
        {
#line 779 "export.m"
          backend_libs__export__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_164_164, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 779 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[25])));
#line 779 "export.m"
        }
#line 779 "export.m"
        {
#line 779 "export.m"
          backend_libs__export__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_162_162, 0) = ((MR_Box) ((MR_String) "#endif /* "));
#line 779 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_162_162, 1) = ((MR_Box) (backend_libs__export__V_164_164));
#line 779 "export.m"
        }
#line 778 "export.m"
        {
#line 778 "export.m"
          backend_libs__export__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_160_160, 0) = ((MR_Box) ((MR_String) "\n"));
#line 778 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_160_160, 1) = ((MR_Box) (backend_libs__export__V_162_162));
#line 778 "export.m"
        }
#line 777 "export.m"
        {
#line 777 "export.m"
          backend_libs__export__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_158_158, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 777 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_158_158, 1) = ((MR_Box) (backend_libs__export__V_160_160));
#line 777 "export.m"
        }
#line 776 "export.m"
        {
#line 776 "export.m"
          backend_libs__export__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_156_156, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 776 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_156_156, 1) = ((MR_Box) (backend_libs__export__V_158_158));
#line 776 "export.m"
        }
#line 775 "export.m"
        {
#line 775 "export.m"
          backend_libs__export__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_154_154, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
#line 775 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_154_154, 1) = ((MR_Box) (backend_libs__export__V_156_156));
#line 775 "export.m"
        }
#line 774 "export.m"
        {
#line 774 "export.m"
          backend_libs__export__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_151_151, 0) = ((MR_Box) ((MR_String) "\n"));
#line 774 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_151_151, 1) = ((MR_Box) (backend_libs__export__V_154_154));
#line 774 "export.m"
        }
#line 773 "export.m"
        {
#line 773 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_151_151);
        }
#line 780 "export.m"
        {
#line 780 "export.m"
          mercury__io__set_output_stream_4_p_0(backend_libs__export__OutputStream_18, &backend_libs__export__V_27_27);
        }
#line 781 "export.m"
        {
#line 781 "export.m"
          mercury__io__close_output_3_p_0(backend_libs__export__FileStream_17);
        }
#line 783 "export.m"
        {
#line 783 "export.m"
          parse_tree__module_cmds__update_interface_4_p_0(backend_libs__export__Globals_14, backend_libs__export__FileName_15);
#line 783 "export.m"
          return;
        }
#line 713 "export.m"
      }
#line 701 "export.m"
  }
#line 53 "export.m"
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
#line 164 "export.m"
  {
#line 164 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 164 "export.m"
    MR_Word backend_libs__export__ExportedProcsCord_5;
#line 164 "export.m"
    MR_Word backend_libs__export__PredicateTable_6;
#line 164 "export.m"
    MR_Word backend_libs__export__Preds_7;
#line 164 "export.m"
    MR_Word backend_libs__export__V_8_8;

#line 165 "export.m"
    {
#line 165 "export.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ExportedProcsCord_5);
    }
#line 166 "export.m"
    {
#line 166 "export.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__PredicateTable_6);
    }
#line 167 "export.m"
    {
#line 167 "export.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_6, &backend_libs__export__Preds_7);
    }
#line 169 "export.m"
    {
#line 169 "export.m"
      backend_libs__export__V_8_8 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__export__ExportedProcsCord_5);
    }
#line 168 "export.m"
    {
#line 168 "export.m"
      backend_libs__export__export_procs_to_c_4_p_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Preds_7, backend_libs__export__V_8_8, backend_libs__export__ExportedProcsCode_4);
#line 168 "export.m"
      return;
    }
#line 164 "export.m"
  }
#line 45 "export.m"
}

#line 38 "export.m"
void MR_CALL 
backend_libs__export__get_foreign_export_decls_2_p_0(
#line 38 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 38 "export.m"
  MR_Word * backend_libs__export__ForeignExportDecls_4)
#line 38 "export.m"
{
#line 121 "export.m"
  {
#line 121 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 121 "export.m"
    MR_Word backend_libs__export__PredicateTable_5;
#line 121 "export.m"
    MR_Word backend_libs__export__Preds_6;
#line 121 "export.m"
    MR_Word backend_libs__export__ForeignDeclCodeCord_7;
#line 121 "export.m"
    MR_Word backend_libs__export__ForeignDeclCodes_8;
#line 121 "export.m"
    MR_Word backend_libs__export__ExportedProcsCord_9;
#line 121 "export.m"
    MR_Word backend_libs__export__ExportDecls_10;
#line 121 "export.m"
    MR_Word backend_libs__export__V_11_11;

#line 122 "export.m"
    {
#line 122 "export.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__PredicateTable_5);
    }
#line 123 "export.m"
    {
#line 123 "export.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_5, &backend_libs__export__Preds_6);
    }
#line 125 "export.m"
    {
#line 125 "export.m"
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ForeignDeclCodeCord_7);
    }
#line 126 "export.m"
    {
#line 126 "export.m"
      backend_libs__export__ForeignDeclCodes_8 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__export__ForeignDeclCodeCord_7);
    }
#line 128 "export.m"
    {
#line 128 "export.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ExportedProcsCord_9);
    }
#line 130 "export.m"
    {
#line 130 "export.m"
      backend_libs__export__V_11_11 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__export__ExportedProcsCord_9);
    }
#line 129 "export.m"
    {
#line 129 "export.m"
      backend_libs__export__get_foreign_export_decls_loop_4_p_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Preds_6, backend_libs__export__V_11_11, &backend_libs__export__ExportDecls_10);
    }
#line 132 "export.m"
    {
#line 132 "export.m"
      MR_Word base;
#line 132 "export.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "export.m"
      *backend_libs__export__ForeignExportDecls_4 = base;
#line 132 "export.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__export__ForeignDeclCodes_8));
#line 132 "export.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__export__ExportDecls_10));
#line 132 "export.m"
    }
#line 121 "export.m"
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
