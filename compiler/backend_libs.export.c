/*
** Automatically generated from `export.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 152 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;

#line 155 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 158 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 161 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 164 "backend_libs.export.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 167 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 170 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__export__type_ctor_info_exported_enum_tag_rep_0;

#line 173 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1];

#line 176 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0;

#line 179 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1];

#line 182 "backend_libs.export.c"
static const MR_DuFunctorDesc backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1;

#line 185 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1];

#line 188 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1];

#line 191 "backend_libs.export.c"
static const MR_DuPtagLayout backend_libs__export__backend_libs__export__du_ptag_ordered_exported_enum_tag_rep_0[2];

#line 194 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2];

#line 197 "backend_libs.export.c"
static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2];

#line 200 "backend_libs.export.c"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
#line 203 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 205 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2);

#line 208 "backend_libs.export.c"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
#line 211 "backend_libs.export.c"
  MR_Box * backend_libs__export__wrapper_arg_1,
#line 213 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 215 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_3);

#line 929 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_99_111_110_115_116_110_97_109_101_95_116_97_103_95_95_91_49_93_95_48_4_p_0(
#line 929 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 982 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__982__1_2_p_0(
#line 982 "export.m"
  MR_Integer backend_libs__export__Arity_17,
#line 982 "export.m"
  MR_Integer backend_libs__export__HeadVar__2_65);

#line 881 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__881__1_2_p_0(
#line 881 "export.m"
  MR_Word backend_libs__export__Lang_8,
#line 881 "export.m"
  MR_Word backend_libs__export__HeadVar__2_44);

#line 826 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__826__1_2_p_0(
#line 826 "export.m"
  MR_Word backend_libs__export__Lang_12,
#line 826 "export.m"
  MR_Word backend_libs__export__HeadVar__2_23);

#line 291 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__291__1_2_p_0(
#line 291 "export.m"
  MR_Word backend_libs__export__Lang_9,
#line 291 "export.m"
  MR_Word backend_libs__export__HeadVar__2_30);

#line 925 "export.m"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
#line 925 "export.m"
  MR_Word * backend_libs__export__HeadVar__1_1,
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3);

#line 925 "export.m"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 982 "export.m"
static MR_bool MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0_1(
#line 982 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 941 "export.m"
static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
#line 941 "export.m"
  MR_Word backend_libs__export__TypeCtor_7,
#line 941 "export.m"
  MR_Word backend_libs__export__Mapping_8,
#line 941 "export.m"
  MR_Word backend_libs__export__TagValues_9,
#line 941 "export.m"
  MR_Word backend_libs__export__Ctor_10,
#line 941 "export.m"
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56,
#line 941 "export.m"
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTags_57);

#line 929 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tag_4_p_0(
#line 929 "export.m"
  MR_Word backend_libs__export__HeadVar__1_5,
#line 929 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 916 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_3(
#line 916 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 916 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 916 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 916 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 907 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_2(
#line 907 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 907 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 907 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 907 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 881 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_1(
#line 881 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 875 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0(
#line 875 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 875 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_6);

#line 869 "export.m"
static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
#line 869 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_2);

#line 826 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0_1(
#line 826 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 819 "export.m"
static void MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0(
#line 819 "export.m"
  MR_Word backend_libs__export__Globals_7,
#line 819 "export.m"
  MR_String backend_libs__export__SourceFileName_8,
#line 819 "export.m"
  MR_Word backend_libs__export__MaybeDesiredIsLocal_9,
#line 819 "export.m"
  MR_Word backend_libs__export__DeclCode_10);

#line 794 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_2_3_p_0(
#line 794 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1);

#line 573 "export.m"
static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
#line 573 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 573 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 573 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 573 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 539 "export.m"
static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
#line 539 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 539 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 539 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 539 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 492 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
#line 492 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 492 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 492 "export.m"
  MR_Integer backend_libs__export__LastArgNum_3,
#line 492 "export.m"
  MR_Word backend_libs__export__HeadVar__4_4,
#line 492 "export.m"
  MR_String * backend_libs__export__HeadVar__5_5);

#line 483 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
#line 483 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 483 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 483 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 483 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4);

#line 472 "export.m"
static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
#line 472 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 472 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2);

#line 465 "export.m"
static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
#line 465 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 465 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1);

#line 372 "export.m"
static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
#line 372 "export.m"
  MR_Word backend_libs__export__ModuleInfo_11,
#line 372 "export.m"
  MR_Word backend_libs__export__Preds_12,
#line 372 "export.m"
  MR_Word backend_libs__export__PredId_13,
#line 372 "export.m"
  MR_Integer backend_libs__export__ProcId_14,
#line 372 "export.m"
  MR_String * backend_libs__export__HowToDeclareLabel_15,
#line 372 "export.m"
  MR_String * backend_libs__export__C_RetType_16,
#line 372 "export.m"
  MR_String * backend_libs__export__MaybeDeclareRetval_17,
#line 372 "export.m"
  MR_String * backend_libs__export__MaybeFail_18,
#line 372 "export.m"
  MR_String * backend_libs__export__MaybeSucceed_19,
#line 372 "export.m"
  MR_Word * backend_libs__export__ArgInfoTypes_20);

#line 291 "export.m"
static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
#line 291 "export.m"
  MR_Box backend_libs__export__closure_arg);

#line 285 "export.m"
static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
#line 285 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 285 "export.m"
  MR_Word backend_libs__export__Preds_6,
#line 285 "export.m"
  MR_Word backend_libs__export__ExportedProc_7,
#line 285 "export.m"
  MR_Word * backend_libs__export__ExportDefn_8);

#line 170 "export.m"
static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
#line 170 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 170 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 170 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 170 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4);

#line 133 "export.m"
static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
#line 133 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 133 "export.m"
  MR_Word backend_libs__export__Preds_2,
#line 133 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 133 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4);

#line 765 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
#line 765 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 765 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 765 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 765 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 762 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
#line 762 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 762 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 762 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 762 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3);

#line 749 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
#line 749 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 749 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1);

#line 748 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
#line 748 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 748 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__export_scalar_common_1[3][3];

static /* final */ const MR_Box backend_libs__export_scalar_common_2[27][2];

static /* final */ const MR_Box backend_libs__export_scalar_common_3[2][4];

static /* final */ const MR_Box backend_libs__export_scalar_common_4[4][5];

static /* final */ const MR_Box backend_libs__export_scalar_common_5[2][7];

static /* final */ const MR_Box backend_libs__export_scalar_common_6[2][1];

static /* final */ const MR_Box backend_libs__export_scalar_common_7[2][9];




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



#line 851 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0
  }
};

#line 859 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_arg_info_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 868 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 877 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 886 "backend_libs.export.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 895 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__export__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__export__pair__ti_pair_2builtin__type_ctor_info_string_0backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 903 "backend_libs.export.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__export__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__export__type_ctor_info_exported_enum_tag_rep_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__export__backend_libs__export__type_ctor_info_exported_enum_tag_rep_0
  }
};

#line 912 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 917 "backend_libs.export.c"
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

#line 932 "backend_libs.export.c"
static const MR_PseudoTypeInfo backend_libs__export__backend_libs__export__field_types_exported_enum_tag_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 937 "backend_libs.export.c"
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

#line 952 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_0[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0
};

#line 957 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_stag_ordered_exported_enum_tag_rep_0_1[1] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

#line 962 "backend_libs.export.c"
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

#line 976 "backend_libs.export.c"
static const MR_DuFunctorDescPtr backend_libs__export__backend_libs__export__du_name_ordered_exported_enum_tag_rep_0[2] = {
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_0,
  &backend_libs__export__backend_libs__export__du_functor_desc_exported_enum_tag_rep_0_1
};

#line 982 "backend_libs.export.c"
static const MR_Integer backend_libs__export__backend_libs__export__functor_number_map_exported_enum_tag_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 988 "backend_libs.export.c"
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

#line 1009 "backend_libs.export.c"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0_10001(
#line 1012 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 1014 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2)
#line 1016 "backend_libs.export.c"
{
#line 1018 "backend_libs.export.c"
  {
#line 1020 "backend_libs.export.c"
    MR_bool backend_libs__export__succeeded;

#line 1023 "backend_libs.export.c"
    {
#line 1025 "backend_libs.export.c"
      backend_libs__export__succeeded = backend_libs__export____Unify____exported_enum_tag_rep_0_0(((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2));
    }
#line 1028 "backend_libs.export.c"
    return backend_libs__export__succeeded;
#line 1030 "backend_libs.export.c"
  }
#line 1032 "backend_libs.export.c"
}

#line 1035 "backend_libs.export.c"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0_10001(
#line 1038 "backend_libs.export.c"
  MR_Box * backend_libs__export__wrapper_arg_1,
#line 1040 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 1042 "backend_libs.export.c"
  MR_Box backend_libs__export__wrapper_arg_3)
#line 1044 "backend_libs.export.c"
{
#line 1046 "backend_libs.export.c"
  {
#line 1048 "backend_libs.export.c"
    MR_Word backend_libs__export__conv0_HeadVar__1_1;

#line 1051 "backend_libs.export.c"
    {
#line 1053 "backend_libs.export.c"
      backend_libs__export____Compare____exported_enum_tag_rep_0_0(&backend_libs__export__conv0_HeadVar__1_1, ((MR_Word) backend_libs__export__wrapper_arg_2), ((MR_Word) backend_libs__export__wrapper_arg_3));
    }
#line 1056 "backend_libs.export.c"
    *backend_libs__export__wrapper_arg_1 = ((MR_Box) (backend_libs__export__conv0_HeadVar__1_1));
#line 1058 "backend_libs.export.c"
  }
#line 1060 "backend_libs.export.c"
}

#line 929 "export.m"
static void MR_CALL 
backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_99_111_110_115_116_110_97_109_101_95_116_97_103_95_95_91_49_93_95_48_4_p_0(
#line 929 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 929 "export.m"
{
#line 932 "export.m"
  {
#line 932 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 932 "export.m"
    MR_String backend_libs__export__ConstName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 932 "export.m"
    MR_Word backend_libs__export__Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));

#line 936 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Tag_7)) == (MR_mktag((MR_Integer) 0))))
#line 934 "export.m"
      {
#line 934 "export.m"
        MR_Integer backend_libs__export__RawIntTag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__Tag_7, (MR_Integer) 0)));
#line 934 "export.m"
        MR_String backend_libs__export__V_49_49;
#line 934 "export.m"
        MR_Word backend_libs__export__V_55_55;
#line 934 "export.m"
        MR_String backend_libs__export__V_58_58;

#line 935 "export.m"
        {
#line 935 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "#define ");
        }
#line 1097 "backend_libs.export.c"
        backend_libs__export__V_55_55 = (MR_Word) &backend_libs__export_scalar_common_6[1];
#line 935 "export.m"
        {
#line 935 "export.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__export__V_55_55, backend_libs__export__ConstName_6, &backend_libs__export__V_49_49);
        }
#line 935 "export.m"
        {
#line 935 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_49_49);
        }
#line 935 "export.m"
        {
#line 935 "export.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 935 "export.m"
        {
#line 935 "export.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(backend_libs__export__V_55_55, backend_libs__export__RawIntTag_9, &backend_libs__export__V_58_58);
        }
#line 935 "export.m"
        {
#line 935 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_58_58);
#line 935 "export.m"
          return;
        }
#line 934 "export.m"
      }
#line 936 "export.m"
    else
#line 937 "export.m"
      {
#line 937 "export.m"
        MR_String backend_libs__export__RawStrTag_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__Tag_7, (MR_Integer) 0)));
#line 937 "export.m"
        MR_String backend_libs__export__V_30_30;
#line 937 "export.m"
        MR_Word backend_libs__export__V_36_36;
#line 937 "export.m"
        MR_String backend_libs__export__V_39_39;

#line 938 "export.m"
        {
#line 938 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "#define ");
        }
#line 1146 "backend_libs.export.c"
        backend_libs__export__V_36_36 = (MR_Word) &backend_libs__export_scalar_common_6[1];
#line 938 "export.m"
        {
#line 938 "export.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__export__V_36_36, backend_libs__export__ConstName_6, &backend_libs__export__V_30_30);
        }
#line 938 "export.m"
        {
#line 938 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_30_30);
        }
#line 938 "export.m"
        {
#line 938 "export.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 938 "export.m"
        {
#line 938 "export.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__export__V_36_36, backend_libs__export__RawStrTag_10, &backend_libs__export__V_39_39);
        }
#line 938 "export.m"
        {
#line 938 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_39_39);
#line 938 "export.m"
          return;
        }
#line 937 "export.m"
      }
#line 932 "export.m"
  }
#line 929 "export.m"
}

#line 982 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__foreign_const_name_and_tag__982__1_2_p_0(
#line 982 "export.m"
  MR_Integer backend_libs__export__Arity_17,
#line 982 "export.m"
  MR_Integer backend_libs__export__HeadVar__2_65)
#line 982 "export.m"
{
#line 982 "export.m"
  {
#line 982 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Arity_17 == backend_libs__export__HeadVar__2_65);

#line 982 "export.m"
    return backend_libs__export__succeeded;
#line 982 "export.m"
  }
#line 982 "export.m"
}

#line 881 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__881__1_2_p_0(
#line 881 "export.m"
  MR_Word backend_libs__export__Lang_8,
#line 881 "export.m"
  MR_Word backend_libs__export__HeadVar__2_44)
#line 881 "export.m"
{
#line 881 "export.m"
  {
#line 881 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_8 == backend_libs__export__HeadVar__2_44);

#line 881 "export.m"
    return backend_libs__export__succeeded;
#line 881 "export.m"
  }
#line 881 "export.m"
}

#line 826 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__output_foreign_decl__826__1_2_p_0(
#line 826 "export.m"
  MR_Word backend_libs__export__Lang_12,
#line 826 "export.m"
  MR_Word backend_libs__export__HeadVar__2_23)
#line 826 "export.m"
{
#line 826 "export.m"
  {
#line 826 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_12 == backend_libs__export__HeadVar__2_23);

#line 826 "export.m"
    return backend_libs__export__succeeded;
#line 826 "export.m"
  }
#line 826 "export.m"
}

#line 291 "export.m"
static MR_bool MR_CALL 
backend_libs__export__IntroducedFrom__pred__export_proc_to_c__291__1_2_p_0(
#line 291 "export.m"
  MR_Word backend_libs__export__Lang_9,
#line 291 "export.m"
  MR_Word backend_libs__export__HeadVar__2_30)
#line 291 "export.m"
{
#line 291 "export.m"
  {
#line 291 "export.m"
    MR_bool backend_libs__export__succeeded = (backend_libs__export__Lang_9 == backend_libs__export__HeadVar__2_30);

#line 291 "export.m"
    return backend_libs__export__succeeded;
#line 291 "export.m"
  }
#line 291 "export.m"
}

#line 925 "export.m"
static void MR_CALL 
backend_libs__export____Compare____exported_enum_tag_rep_0_0(
#line 925 "export.m"
  MR_Word * backend_libs__export__HeadVar__1_1,
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3)
#line 925 "export.m"
{
#line 925 "export.m"
  {
#line 925 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 925 "export.m"
    MR_Integer backend_libs__export__CastX_12 = (MR_Integer) backend_libs__export__HeadVar__2_2;
#line 925 "export.m"
    MR_Integer backend_libs__export__CastY_13 = (MR_Integer) backend_libs__export__HeadVar__3_3;

#line 925 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__CastX_12 == backend_libs__export__CastY_13);
#line 925 "export.m"
    if (backend_libs__export__succeeded)
#line 1290 "backend_libs.export.c"
      *backend_libs__export__HeadVar__1_1 = (MR_Integer) 0;
#line 925 "export.m"
    else
#line 925 "export.m"
      if (((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 925 "export.m"
        {
#line 925 "export.m"
          MR_Integer backend_libs__export__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

#line 925 "export.m"
          if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 925 "export.m"
            {
#line 925 "export.m"
              MR_Integer backend_libs__export__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

#line 925 "export.m"
              {
#line 925 "export.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__V_16_16, backend_libs__export__V_5_5);
#line 925 "export.m"
                return;
              }
#line 925 "export.m"
            }
#line 925 "export.m"
          else
#line 1319 "backend_libs.export.c"
            *backend_libs__export__HeadVar__1_1 = (MR_Integer) 1;
#line 925 "export.m"
        }
#line 925 "export.m"
      else
#line 925 "export.m"
        {
#line 925 "export.m"
          MR_String backend_libs__export__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));

#line 925 "export.m"
          if (((MR_tag((MR_Word) backend_libs__export__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1332 "backend_libs.export.c"
            *backend_libs__export__HeadVar__1_1 = (MR_Integer) 2;
#line 925 "export.m"
          else
#line 925 "export.m"
            {
#line 925 "export.m"
              MR_String backend_libs__export__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));

#line 925 "export.m"
              {
#line 925 "export.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__V_17_17, backend_libs__export__V_11_11);
#line 925 "export.m"
                return;
              }
#line 925 "export.m"
            }
#line 925 "export.m"
        }
#line 925 "export.m"
  }
#line 925 "export.m"
}

#line 925 "export.m"
static MR_bool MR_CALL 
backend_libs__export____Unify____exported_enum_tag_rep_0_0(
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 925 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 925 "export.m"
{
#line 925 "export.m"
  {
#line 925 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 925 "export.m"
    MR_Integer backend_libs__export__CastX_7 = (MR_Integer) backend_libs__export__HeadVar__1_1;
#line 925 "export.m"
    MR_Integer backend_libs__export__CastY_8 = (MR_Integer) backend_libs__export__HeadVar__2_2;

#line 925 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__CastX_7 == backend_libs__export__CastY_8);
#line 925 "export.m"
    if (backend_libs__export__succeeded)
#line 925 "export.m"
      backend_libs__export__succeeded = MR_TRUE;
#line 925 "export.m"
    else
#line 925 "export.m"
      if (((MR_tag((MR_Word) backend_libs__export__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 925 "export.m"
        {
#line 925 "export.m"
          MR_Integer backend_libs__export__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 925 "export.m"
          MR_Integer backend_libs__export__V_4_4;

#line 925 "export.m"
          backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 925 "export.m"
          if (backend_libs__export__succeeded)
#line 925 "export.m"
            {
#line 925 "export.m"
              backend_libs__export__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 1400 "backend_libs.export.c"
              backend_libs__export__succeeded = (backend_libs__export__V_3_3 == backend_libs__export__V_4_4);
#line 925 "export.m"
            }
#line 925 "export.m"
        }
#line 925 "export.m"
      else
#line 925 "export.m"
        {
#line 925 "export.m"
          MR_String backend_libs__export__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 925 "export.m"
          MR_String backend_libs__export__V_6_6;

#line 925 "export.m"
          backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 925 "export.m"
          if (backend_libs__export__succeeded)
#line 925 "export.m"
            {
#line 925 "export.m"
              backend_libs__export__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 1423 "backend_libs.export.c"
              backend_libs__export__succeeded = (strcmp(backend_libs__export__V_5_5, backend_libs__export__V_6_6) == 0);
#line 925 "export.m"
            }
#line 925 "export.m"
        }
#line 925 "export.m"
    return backend_libs__export__succeeded;
#line 925 "export.m"
  }
#line 925 "export.m"
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

#line 941 "export.m"
static void MR_CALL 
backend_libs__export__foreign_const_name_and_tag_6_p_0(
#line 941 "export.m"
  MR_Word backend_libs__export__TypeCtor_7,
#line 941 "export.m"
  MR_Word backend_libs__export__Mapping_8,
#line 941 "export.m"
  MR_Word backend_libs__export__TagValues_9,
#line 941 "export.m"
  MR_Word backend_libs__export__Ctor_10,
#line 941 "export.m"
  MR_Word backend_libs__export__STATE_VARIABLE_NamesAndTags_0_56,
#line 941 "export.m"
  MR_Word * backend_libs__export__STATE_VARIABLE_NamesAndTags_57)
#line 941 "export.m"
{
#line 947 "export.m"
  {
#line 947 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 947 "export.m"
    MR_Word backend_libs__export__QualifiedCtorName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 2)));
#line 947 "export.m"
    MR_Word backend_libs__export__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 3)));
#line 947 "export.m"
    MR_Integer backend_libs__export__Arity_17;
#line 947 "export.m"
    MR_Word backend_libs__export__ConsId_18;
#line 947 "export.m"
    MR_Word backend_libs__export__TagVal_19;
#line 947 "export.m"
    MR_Word backend_libs__export__Tag_21;
#line 947 "export.m"
    MR_Word backend_libs__export__UnqualifiedCtorName_54;
#line 947 "export.m"
    MR_String backend_libs__export__ForeignName_55;
#line 947 "export.m"
    MR_Word backend_libs__export__V_61_61;
#line 947 "export.m"
    MR_String backend_libs__export__V_66_66;
#line 947 "export.m"
    MR_Word backend_libs__export__V_67_67;
#line 948 "export.m"
    MR_Word backend_libs__export__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 0)));
#line 948 "export.m"
    MR_Word backend_libs__export__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 1)));
#line 948 "export.m"
    MR_Word backend_libs__export__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Ctor_10, (MR_Integer) 4)));
#line 951 "export.m"
    MR_Box backend_libs__export__conv0_TagVal_19;
#line 984 "export.m"
    MR_Box backend_libs__export__conv1_ForeignName_55;

#line 949 "export.m"
    {
#line 949 "export.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__export__Args_15, &backend_libs__export__Arity_17);
    }
#line 950 "export.m"
    {
#line 950 "export.m"
      backend_libs__export__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 950 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 950 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 1) = ((MR_Box) (backend_libs__export__QualifiedCtorName_14));
#line 950 "export.m"
      MR_hl_field(MR_mktag(3), backend_libs__export__ConsId_18, 2) = ((MR_Box) (backend_libs__export__Arity_17));
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
    if (((((MR_tag((MR_Word) backend_libs__export__TagVal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
    else
#line 955 "export.m"
      if (((((MR_tag((MR_Word) backend_libs__export__TagVal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__export__TagVal_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
      else
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
      MR_hl_field(MR_mktag(0), backend_libs__export__V_61_61, 3) = ((MR_Box) (backend_libs__export__Arity_17));
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
#line 947 "export.m"
  }
#line 941 "export.m"
}

#line 929 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_enum_constname_tag_4_p_0(
#line 929 "export.m"
  MR_Word backend_libs__export__HeadVar__1_5,
#line 929 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 929 "export.m"
{
#line 932 "export.m"
  {
#line 932 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 932 "export.m"
    {
#line 932 "export.m"
      backend_libs__export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_99_111_110_115_116_110_97_109_101_95_116_97_103_95_95_91_49_93_95_48_4_p_0(backend_libs__export__HeadVar__2_2);
#line 932 "export.m"
      return;
    }
#line 932 "export.m"
  }
#line 929 "export.m"
}

#line 916 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_3(
#line 916 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 916 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 916 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 916 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 916 "export.m"
{
#line 916 "export.m"
  {
#line 916 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 916 "export.m"
    {
#line 916 "export.m"
      backend_libs__export__output_exported_enum_constname_tag_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 916 "export.m"
      return;
    }
#line 916 "export.m"
  }
#line 916 "export.m"
}

#line 907 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_2(
#line 907 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 907 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 907 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 907 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 907 "export.m"
{
#line 907 "export.m"
  {
#line 907 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;
#line 907 "export.m"
    MR_Word backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57;

#line 907 "export.m"
    {
#line 907 "export.m"
      backend_libs__export__foreign_const_name_and_tag_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1), ((MR_Word) backend_libs__export__wrapper_arg_2), &backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57);
    }
#line 907 "export.m"
    *backend_libs__export__wrapper_arg_3 = ((MR_Box) (backend_libs__export__conv0_STATE_VARIABLE_NamesAndTags_57));
#line 907 "export.m"
  }
#line 907 "export.m"
}

#line 881 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0_1(
#line 881 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 881 "export.m"
{
#line 881 "export.m"
  {
#line 881 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 881 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 881 "export.m"
    {
#line 881 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__output_exported_c_enum__881__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 881 "export.m"
    return backend_libs__export__succeeded;
#line 881 "export.m"
  }
#line 881 "export.m"
}

#line 875 "export.m"
static void MR_CALL 
backend_libs__export__output_exported_c_enum_4_p_0(
#line 875 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 875 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_6)
#line 875 "export.m"
{
#line 878 "export.m"
  {
#line 878 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 878 "export.m"
    MR_Word backend_libs__export__Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 0)));
#line 878 "export.m"
    MR_Word backend_libs__export__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 1)));
#line 878 "export.m"
    MR_Word backend_libs__export__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 2)));
#line 878 "export.m"
    MR_Word backend_libs__export__NameMapping_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_6, (MR_Integer) 3)));
#line 878 "export.m"
    MR_Word backend_libs__export__TypeTable_12;
#line 878 "export.m"
    MR_Word backend_libs__export__TypeDefn_13;
#line 878 "export.m"
    MR_Word backend_libs__export__TypeBody_14;
#line 878 "export.m"
    MR_Word backend_libs__export__V_40_40;

#line 881 "export.m"
    {
#line 881 "export.m"
      backend_libs__export__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 881 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
#line 881 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_1));
#line 881 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 881 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 3) = ((MR_Box) (backend_libs__export__Lang_8));
#line 881 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_40_40, 4) = ((MR_Box) ((MR_Integer) 0));
#line 881 "export.m"
    }
#line 881 "export.m"
    {
#line 881 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_40_40, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "Lang != lang_c");
    }
#line 882 "export.m"
    {
#line 882 "export.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__export__ModuleInfo_5, &backend_libs__export__TypeTable_12);
    }
#line 883 "export.m"
    {
#line 883 "export.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__export__TypeTable_12, backend_libs__export__TypeCtor_10, &backend_libs__export__TypeDefn_13);
    }
#line 884 "export.m"
    {
#line 884 "export.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__export__TypeDefn_13, &backend_libs__export__TypeBody_14);
    }
#line 892 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__TypeBody_14)) == (MR_mktag((MR_Integer) 1))))
#line 895 "export.m"
      {
#line 895 "export.m"
        MR_Word backend_libs__export__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 0)));
#line 895 "export.m"
        MR_Word backend_libs__export__TagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 1)));
#line 895 "export.m"
        MR_Word backend_libs__export__DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 3)));
#line 893 "export.m"
        MR_Word backend_libs__export___CheaperTagTest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 2)));
#line 893 "export.m"
        MR_Word backend_libs__export___MaybeUserEq_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 4)));
#line 893 "export.m"
        MR_Word backend_libs__export___MaybeDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 5)));
#line 893 "export.m"
        MR_Word backend_libs__export___ReservedTag_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 893 "export.m"
        MR_Word backend_libs__export___ReservedAddr_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 893 "export.m"
        MR_Word backend_libs__export___IsForeignType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__TypeBody_14, (MR_Integer) 7)));

#line 901 "export.m"
        if ((((backend_libs__export__DuTypeKind_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((MR_tag((MR_Word) backend_libs__export__DuTypeKind_23)) == (MR_mktag((MR_Integer) 2))))))
#line 899 "export.m"
          {
#line 900 "export.m"
            {
#line 900 "export.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "d.u. is not an enumeration.");
#line 900 "export.m"
              return;
            }
#line 899 "export.m"
          }
#line 901 "export.m"
        else
#line 905 "export.m"
          {
#line 905 "export.m"
            MR_Word backend_libs__export__TypeInfo_65_65;
#line 905 "export.m"
            MR_Word backend_libs__export__ForeignNamesAndTags0_33;
#line 905 "export.m"
            MR_Word backend_libs__export__ForeignNamesAndTags_34;
#line 905 "export.m"
            MR_Word backend_libs__export__Globals_35;
#line 905 "export.m"
            MR_String backend_libs__export__File_36;
#line 905 "export.m"
            MR_Integer backend_libs__export__Line_37;
#line 905 "export.m"
            MR_Word backend_libs__export__V_45_45;
#line 905 "export.m"
            MR_Word backend_libs__export__V_49_49;
#line 906 "export.m"
            MR_Box backend_libs__export__conv1_ForeignNamesAndTags0_33;

#line 907 "export.m"
            {
#line 907 "export.m"
              backend_libs__export__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 907 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[1]));
#line 907 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_2));
#line 907 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 907 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 3) = ((MR_Box) (backend_libs__export__TypeCtor_10));
#line 907 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 4) = ((MR_Box) (backend_libs__export__NameMapping_11));
#line 907 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_45_45, 5) = ((MR_Box) (backend_libs__export__TagValues_21));
#line 907 "export.m"
            }
#line 906 "export.m"
            {
#line 906 "export.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &backend_libs__export_scalar_common_2[0], backend_libs__export__V_45_45, backend_libs__export__Ctors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__export__conv1_ForeignNamesAndTags0_33);
            }
#line 906 "export.m"
            backend_libs__export__ForeignNamesAndTags0_33 = ((MR_Word) backend_libs__export__conv1_ForeignNamesAndTags0_33);
#line 1920 "backend_libs.export.c"
            backend_libs__export__TypeInfo_65_65 = (MR_Word) &backend_libs__export_scalar_common_1[1];
#line 910 "export.m"
            {
#line 910 "export.m"
              mercury__list__reverse_2_p_0(backend_libs__export__TypeInfo_65_65, backend_libs__export__ForeignNamesAndTags0_33, &backend_libs__export__ForeignNamesAndTags_34);
            }
#line 911 "export.m"
            {
#line 911 "export.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_5, &backend_libs__export__Globals_35);
            }
#line 912 "export.m"
            {
#line 912 "export.m"
              mercury__term__context_file_2_p_0(backend_libs__export__Context_9, &backend_libs__export__File_36);
            }
#line 913 "export.m"
            {
#line 913 "export.m"
              mercury__term__context_line_2_p_0(backend_libs__export__Context_9, &backend_libs__export__Line_37);
            }
#line 914 "export.m"
            {
#line 914 "export.m"
              backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_35, backend_libs__export__File_36, backend_libs__export__Line_37);
            }
#line 916 "export.m"
            {
#line 916 "export.m"
              backend_libs__export__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[1]));
#line 916 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 1) = ((MR_Box) (backend_libs__export__output_exported_c_enum_4_p_0_3));
#line 916 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 916 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_49_49, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_5));
#line 916 "export.m"
            }
#line 915 "export.m"
            {
#line 915 "export.m"
              mercury__io__write_list_5_p_0(backend_libs__export__TypeInfo_65_65, backend_libs__export__ForeignNamesAndTags_34, (MR_String) "\n", backend_libs__export__V_49_49);
            }
#line 917 "export.m"
            {
#line 917 "export.m"
              mercury__io__nl_2_p_0();
            }
#line 918 "export.m"
            {
#line 918 "export.m"
              backend_libs__c_util__reset_line_num_3_p_0(backend_libs__export__Globals_35);
#line 918 "export.m"
              return;
            }
#line 905 "export.m"
          }
#line 895 "export.m"
      }
#line 892 "export.m"
    else
#line 890 "export.m"
      {
#line 891 "export.m"
        {
#line 891 "export.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_exported_c_enum\'/4", (MR_String) "invalid type for foreign_export_enum");
#line 891 "export.m"
          return;
        }
#line 890 "export.m"
      }
#line 878 "export.m"
  }
#line 875 "export.m"
}

#line 869 "export.m"
static MR_bool MR_CALL 
backend_libs__export__exported_enum_is_for_c_1_p_0(
#line 869 "export.m"
  MR_Word backend_libs__export__ExportedEnumInfo_2)
#line 869 "export.m"
{
#line 871 "export.m"
  {
#line 871 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 871 "export.m"
    MR_Word backend_libs__export__Lang_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 0)));
#line 872 "export.m"
    MR_Word backend_libs__export__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 1)));
#line 872 "export.m"
    MR_Word backend_libs__export__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 2)));
#line 872 "export.m"
    MR_Word backend_libs__export__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedEnumInfo_2, (MR_Integer) 3)));

#line 873 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__Lang_3 == (MR_Integer) 0);
#line 871 "export.m"
    return backend_libs__export__succeeded;
#line 871 "export.m"
  }
#line 869 "export.m"
}

#line 826 "export.m"
static MR_bool MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0_1(
#line 826 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 826 "export.m"
{
#line 826 "export.m"
  {
#line 826 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 826 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 826 "export.m"
    {
#line 826 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__output_foreign_decl__826__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 826 "export.m"
    return backend_libs__export__succeeded;
#line 826 "export.m"
  }
#line 826 "export.m"
}

#line 819 "export.m"
static void MR_CALL 
backend_libs__export__output_foreign_decl_6_p_0(
#line 819 "export.m"
  MR_Word backend_libs__export__Globals_7,
#line 819 "export.m"
  MR_String backend_libs__export__SourceFileName_8,
#line 819 "export.m"
  MR_Word backend_libs__export__MaybeDesiredIsLocal_9,
#line 819 "export.m"
  MR_Word backend_libs__export__DeclCode_10)
#line 819 "export.m"
{
#line 824 "export.m"
  {
#line 824 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 824 "export.m"
    MR_Word backend_libs__export__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 0)));
#line 824 "export.m"
    MR_Word backend_libs__export__IsLocal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 1)));
#line 824 "export.m"
    MR_Word backend_libs__export__LiteralOrInclude_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 2)));
#line 824 "export.m"
    MR_Word backend_libs__export__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__DeclCode_10, (MR_Integer) 3)));
#line 824 "export.m"
    MR_Word backend_libs__export__V_19_19;

#line 826 "export.m"
    {
#line 826 "export.m"
      backend_libs__export__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 826 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
#line 826 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 1) = ((MR_Box) (backend_libs__export__output_foreign_decl_6_p_0_1));
#line 826 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 826 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 3) = ((MR_Box) (backend_libs__export__Lang_12));
#line 826 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_19_19, 4) = ((MR_Box) ((MR_Integer) 0));
#line 826 "export.m"
    }
#line 826 "export.m"
    {
#line 826 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_19_19, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.output_foreign_decl\'/6", (MR_String) "Lang != lang_c");
    }
#line 830 "export.m"
    if ((backend_libs__export__MaybeDesiredIsLocal_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "export.m"
      backend_libs__export__succeeded = MR_TRUE;
#line 830 "export.m"
    else
#line 831 "export.m"
      {
#line 831 "export.m"
        MR_Word backend_libs__export__DesiredIsLocal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeDesiredIsLocal_9, (MR_Integer) 0)));

#line 832 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__DesiredIsLocal_16 == backend_libs__export__IsLocal_13);
#line 831 "export.m"
      }
#line 839 "export.m"
    if (backend_libs__export__succeeded)
#line 836 "export.m"
      {
#line 849 "export.m"
        if (((MR_tag((MR_Word) backend_libs__export__LiteralOrInclude_14)) == (MR_mktag((MR_Integer) 1))))
#line 855 "export.m"
          {
#line 855 "export.m"
            MR_String backend_libs__export__IncludeFileName_38 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__export__LiteralOrInclude_14, (MR_Integer) 0)));
#line 855 "export.m"
            MR_String backend_libs__export__IncludePath_39;

#line 856 "export.m"
            {
#line 856 "export.m"
              parse_tree__file_names__make_include_file_path_3_p_0(backend_libs__export__SourceFileName_8, backend_libs__export__IncludeFileName_38, &backend_libs__export__IncludePath_39);
            }
#line 857 "export.m"
            {
#line 857 "export.m"
              backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_7, backend_libs__export__IncludePath_39, (MR_Integer) 1);
            }
#line 858 "export.m"
            {
#line 858 "export.m"
              libs__file_util__write_include_file_contents_3_p_0(backend_libs__export__IncludePath_39);
            }
#line 855 "export.m"
          }
#line 849 "export.m"
        else
#line 849 "export.m"
          {
#line 849 "export.m"
            MR_String backend_libs__export__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__LiteralOrInclude_14, (MR_Integer) 0)));
#line 849 "export.m"
            MR_String backend_libs__export__File_36;
#line 849 "export.m"
            MR_Integer backend_libs__export__Line_37;

#line 850 "export.m"
            {
#line 850 "export.m"
              mercury__term__context_file_2_p_0(backend_libs__export__Context_15, &backend_libs__export__File_36);
            }
#line 851 "export.m"
            {
#line 851 "export.m"
              mercury__term__context_line_2_p_0(backend_libs__export__Context_15, &backend_libs__export__Line_37);
            }
#line 852 "export.m"
            {
#line 852 "export.m"
              backend_libs__c_util__set_line_num_5_p_0(backend_libs__export__Globals_7, backend_libs__export__File_36, backend_libs__export__Line_37);
            }
#line 853 "export.m"
            {
#line 853 "export.m"
              mercury__io__write_string_3_p_0(backend_libs__export__Code_35);
            }
#line 849 "export.m"
          }
#line 837 "export.m"
        {
#line 837 "export.m"
          mercury__io__nl_2_p_0();
        }
#line 838 "export.m"
        {
#line 838 "export.m"
          backend_libs__c_util__reset_line_num_3_p_0(backend_libs__export__Globals_7);
#line 838 "export.m"
          return;
        }
#line 836 "export.m"
      }
#line 839 "export.m"
    else
#line 838 "export.m"
      {
#line 838 "export.m"
      }
#line 824 "export.m"
  }
#line 819 "export.m"
}

#line 794 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_2_3_p_0(
#line 794 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1)
#line 794 "export.m"
{
#line 797 "export.m"
  while (MR_TRUE)
#line 797 "export.m"
    {
#line 797 "export.m"
      /* tailcall optimized into a loop */
#line 797 "export.m"
      {
#line 797 "export.m"
        MR_bool backend_libs__export__succeeded;

#line 797 "export.m"
        if ((backend_libs__export__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "export.m"
          {
#line 797 "export.m"
          }
#line 797 "export.m"
        else
#line 798 "export.m"
          {
#line 798 "export.m"
            MR_Word backend_libs__export__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 0)));
#line 798 "export.m"
            MR_Word backend_libs__export__ExportedProcs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__1_1, (MR_Integer) 1)));
#line 798 "export.m"
            MR_Word backend_libs__export__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 0)));
#line 798 "export.m"
            MR_String backend_libs__export__C_RetType_11 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 1)));
#line 798 "export.m"
            MR_String backend_libs__export__C_Function_12 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 2)));
#line 798 "export.m"
            MR_String backend_libs__export__ArgDecls_13 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__E_7, (MR_Integer) 3)));

#line 809 "export.m"
            if ((backend_libs__export__Lang_10 == (MR_Integer) 0))
#line 801 "export.m"
              {
#line 803 "export.m"
                {
#line 803 "export.m"
                  mercury__io__write_string_3_p_0(backend_libs__export__C_RetType_11);
                }
#line 804 "export.m"
                {
#line 804 "export.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 805 "export.m"
                {
#line 805 "export.m"
                  mercury__io__write_string_3_p_0(backend_libs__export__C_Function_12);
                }
#line 806 "export.m"
                {
#line 806 "export.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 807 "export.m"
                {
#line 807 "export.m"
                  mercury__io__write_string_3_p_0(backend_libs__export__ArgDecls_13);
                }
#line 808 "export.m"
                {
#line 808 "export.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
#line 801 "export.m"
              }
#line 809 "export.m"
            else
#line 814 "export.m"
              {
#line 815 "export.m"
                {
#line 815 "export.m"
                  mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.produce_header_file_2\'/3", (MR_String) "foreign languages other than C unimplemented");
#line 815 "export.m"
                  return;
                }
#line 814 "export.m"
              }
#line 817 "export.m"
            /* direct tailcall eliminated */
#line 817 "export.m"
            {
#line 817 "export.m"
              MR_Word backend_libs__export__HeadVar__1__tmp_copy_1 = backend_libs__export__ExportedProcs_8;

#line 817 "export.m"
              backend_libs__export__HeadVar__1_1 = backend_libs__export__HeadVar__1__tmp_copy_1;
#line 817 "export.m"
            }
#line 817 "export.m"
            continue;
#line 798 "export.m"
          }
#line 797 "export.m"
      }
#line 797 "export.m"
      break;
#line 797 "export.m"
    }
#line 794 "export.m"
}

#line 573 "export.m"
static void MR_CALL 
backend_libs__export__retrieve_output_args_4_p_0(
#line 573 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 573 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 573 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 573 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 573 "export.m"
{
#line 576 "export.m"
  {
#line 576 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 576 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
#line 576 "export.m"
    else
#line 577 "export.m"
      {
#line 577 "export.m"
        MR_Word backend_libs__export__AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 577 "export.m"
        MR_Word backend_libs__export__ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 577 "export.m"
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 0)));
#line 577 "export.m"
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 1)));
#line 577 "export.m"
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
#line 577 "export.m"
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
#line 577 "export.m"
        MR_Integer backend_libs__export__CurArgNum_16 = (backend_libs__export__LastArgNum_2 + (MR_Integer) 1);
#line 577 "export.m"
        MR_String backend_libs__export__RetrieveHeadOutputArg_17;
#line 577 "export.m"
        MR_String backend_libs__export__RetrieveTailOutputArgs_24;

#line 584 "export.m"
        if ((backend_libs__export__Mode_15 == (MR_Integer) 0))
#line 583 "export.m"
          backend_libs__export__RetrieveHeadOutputArg_17 = (MR_String) "";
#line 584 "export.m"
        else
#line 584 "export.m"
          if ((backend_libs__export__Mode_15 == (MR_Integer) 1))
#line 585 "export.m"
            {
#line 585 "export.m"
              MR_String backend_libs__export__ArgName_18;
#line 585 "export.m"
              MR_String backend_libs__export__ArgLocString0_19;
#line 585 "export.m"
              MR_String backend_libs__export__ArgLocString_20;
#line 585 "export.m"
              MR_Word backend_libs__export__Export_Type_21;
#line 585 "export.m"
              MR_String backend_libs__export__V_27_27;
#line 585 "export.m"
              MR_Word backend_libs__export__RegType_46;
#line 585 "export.m"
              MR_Integer backend_libs__export__RegNum_47;
#line 592 "export.m"
              MR_Word backend_libs__export__V_28_28;
#line 592 "export.m"
              MR_Word backend_libs__export__V_22_22;

#line 586 "export.m"
              {
#line 586 "export.m"
                backend_libs__export__V_27_27 = mercury__string__int_to_string_1_f_0(backend_libs__export__CurArgNum_16);
              }
#line 586 "export.m"
              {
#line 586 "export.m"
                backend_libs__export__ArgName_18 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", backend_libs__export__V_27_27);
              }
#line 612 "export.m"
              backend_libs__export__RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
#line 612 "export.m"
              backend_libs__export__RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
#line 622 "export.m"
              if ((backend_libs__export__RegType_46 == (MR_Integer) 1))
#line 623 "export.m"
                {
#line 623 "export.m"
                  MR_String backend_libs__export__V_49_49;
#line 623 "export.m"
                  MR_String backend_libs__export__V_50_50;

#line 624 "export.m"
                  {
#line 624 "export.m"
                    backend_libs__export__V_50_50 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                  }
#line 624 "export.m"
                  {
#line 624 "export.m"
                    backend_libs__export__V_49_49 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_50_50, (MR_String) ")");
                  }
#line 624 "export.m"
                  {
#line 624 "export.m"
                    backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_49_49);
                  }
#line 623 "export.m"
                }
#line 622 "export.m"
              else
#line 619 "export.m"
                {
#line 617 "export.m"
                  backend_libs__export__succeeded = (backend_libs__export__RegNum_47 > (MR_Integer) 32);
#line 619 "export.m"
                  if (backend_libs__export__succeeded)
#line 618 "export.m"
                    {
#line 618 "export.m"
                      MR_String backend_libs__export__V_54_54;
#line 618 "export.m"
                      MR_String backend_libs__export__V_55_55;

#line 618 "export.m"
                      {
#line 618 "export.m"
                        backend_libs__export__V_55_55 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                      }
#line 618 "export.m"
                      {
#line 618 "export.m"
                        backend_libs__export__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_55_55, (MR_String) ")");
                      }
#line 618 "export.m"
                      {
#line 618 "export.m"
                        backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_54_54);
                      }
#line 618 "export.m"
                    }
#line 619 "export.m"
                  else
#line 620 "export.m"
                    {
#line 620 "export.m"
                      MR_String backend_libs__export__V_58_58;

#line 620 "export.m"
                      {
#line 620 "export.m"
                        backend_libs__export__V_58_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                      }
#line 620 "export.m"
                      {
#line 620 "export.m"
                        backend_libs__export__ArgLocString0_19 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_58_58);
                      }
#line 620 "export.m"
                    }
#line 619 "export.m"
                }
#line 588 "export.m"
              {
#line 588 "export.m"
                backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__ArgLoc_14, backend_libs__export__ArgLocString0_19, backend_libs__export__Type_13, &backend_libs__export__ArgLocString_20);
              }
#line 589 "export.m"
              {
#line 589 "export.m"
                backend_libs__export__Export_Type_21 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Type_13);
              }
#line 592 "export.m"
              {
#line 592 "export.m"
                backend_libs__export__V_28_28 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_Type_21);
              }
#line 592 "export.m"
              backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 592 "export.m"
              if (backend_libs__export__succeeded)
#line 592 "export.m"
                {
#line 592 "export.m"
                  backend_libs__export__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_28_28, (MR_Integer) 0)));
#line 593 "export.m"
                  {
#line 593 "export.m"
                    MR_String backend_libs__export__C_Type_23;
#line 593 "export.m"
                    MR_String backend_libs__export__V_31_31;
#line 593 "export.m"
                    MR_String backend_libs__export__V_32_32;
#line 593 "export.m"
                    MR_String backend_libs__export__V_34_34;
#line 593 "export.m"
                    MR_String backend_libs__export__V_35_35;
#line 593 "export.m"
                    MR_String backend_libs__export__V_37_37;

#line 593 "export.m"
                    {
#line 593 "export.m"
                      backend_libs__export__C_Type_23 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_Type_21);
                    }
#line 595 "export.m"
                    {
#line 595 "export.m"
                      backend_libs__export__V_37_37 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_18, (MR_String) ");\n");
                    }
#line 595 "export.m"
                    {
#line 595 "export.m"
                      backend_libs__export__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", * ", backend_libs__export__V_37_37);
                    }
#line 595 "export.m"
                    {
#line 595 "export.m"
                      backend_libs__export__V_34_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_20, backend_libs__export__V_35_35);
                    }
#line 595 "export.m"
                    {
#line 595 "export.m"
                      backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_34_34);
                    }
#line 595 "export.m"
                    {
#line 595 "export.m"
                      backend_libs__export__V_31_31 = mercury__string__f_43_43_2_f_0(backend_libs__export__C_Type_23, backend_libs__export__V_32_32);
                    }
#line 594 "export.m"
                    {
#line 594 "export.m"
                      backend_libs__export__RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", backend_libs__export__V_31_31);
                    }
#line 593 "export.m"
                  }
#line 592 "export.m"
                }
#line 592 "export.m"
              else
#line 597 "export.m"
                {
#line 597 "export.m"
                  MR_String backend_libs__export__V_40_40;
#line 597 "export.m"
                  MR_String backend_libs__export__V_41_41;
#line 597 "export.m"
                  MR_String backend_libs__export__V_43_43;

#line 598 "export.m"
                  {
#line 598 "export.m"
                    backend_libs__export__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_20, (MR_String) ";\n");
                  }
#line 598 "export.m"
                  {
#line 598 "export.m"
                    backend_libs__export__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__V_43_43);
                  }
#line 598 "export.m"
                  {
#line 598 "export.m"
                    backend_libs__export__V_40_40 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_18, backend_libs__export__V_41_41);
                  }
#line 598 "export.m"
                  {
#line 598 "export.m"
                    backend_libs__export__RetrieveHeadOutputArg_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t*", backend_libs__export__V_40_40);
                  }
#line 597 "export.m"
                }
#line 585 "export.m"
            }
#line 584 "export.m"
          else
#line 602 "export.m"
            backend_libs__export__RetrieveHeadOutputArg_17 = (MR_String) "";
#line 604 "export.m"
        {
#line 604 "export.m"
          backend_libs__export__retrieve_output_args_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__CurArgNum_16, backend_libs__export__ATs_10, &backend_libs__export__RetrieveTailOutputArgs_24);
        }
#line 605 "export.m"
        {
#line 605 "export.m"
          *backend_libs__export__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetrieveHeadOutputArg_17, backend_libs__export__RetrieveTailOutputArgs_24);
        }
#line 577 "export.m"
      }
#line 576 "export.m"
  }
#line 573 "export.m"
}

#line 539 "export.m"
static void MR_CALL 
backend_libs__export__pass_input_args_4_p_0(
#line 539 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 539 "export.m"
  MR_Integer backend_libs__export__LastArgNum_2,
#line 539 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 539 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 539 "export.m"
{
#line 542 "export.m"
  {
#line 542 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 542 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "";
#line 542 "export.m"
    else
#line 543 "export.m"
      {
#line 543 "export.m"
        MR_Word backend_libs__export__AT_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 543 "export.m"
        MR_Word backend_libs__export__ATs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 543 "export.m"
        MR_Word backend_libs__export__ArgInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 0)));
#line 543 "export.m"
        MR_Word backend_libs__export__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_9, (MR_Integer) 1)));
#line 543 "export.m"
        MR_Word backend_libs__export__ArgLoc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 0)));
#line 543 "export.m"
        MR_Word backend_libs__export__Mode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_12, (MR_Integer) 1)));
#line 543 "export.m"
        MR_Integer backend_libs__export__CurArgNum_16 = (backend_libs__export__LastArgNum_2 + (MR_Integer) 1);
#line 543 "export.m"
        MR_String backend_libs__export__PassHeadInputArg_23;
#line 543 "export.m"
        MR_String backend_libs__export__PassTailInputArgs_24;

#line 563 "export.m"
        if ((backend_libs__export__Mode_15 == (MR_Integer) 0))
#line 548 "export.m"
          {
#line 548 "export.m"
            MR_String backend_libs__export__ArgName0_17;
#line 548 "export.m"
            MR_String backend_libs__export__ArgLocString_18;
#line 548 "export.m"
            MR_String backend_libs__export__ArgName_19;
#line 548 "export.m"
            MR_Word backend_libs__export__Export_Type_20;
#line 548 "export.m"
            MR_String backend_libs__export__V_27_27;
#line 548 "export.m"
            MR_Word backend_libs__export__RegType_46;
#line 548 "export.m"
            MR_Integer backend_libs__export__RegNum_47;
#line 555 "export.m"
            MR_Word backend_libs__export__V_28_28;
#line 555 "export.m"
            MR_Word backend_libs__export__V_21_21;

#line 549 "export.m"
            {
#line 549 "export.m"
              backend_libs__export__V_27_27 = mercury__string__int_to_string_1_f_0(backend_libs__export__CurArgNum_16);
            }
#line 549 "export.m"
            {
#line 549 "export.m"
              backend_libs__export__ArgName0_17 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury__argument", backend_libs__export__V_27_27);
            }
#line 612 "export.m"
            backend_libs__export__RegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 0)));
#line 612 "export.m"
            backend_libs__export__RegNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgLoc_14, (MR_Integer) 1)));
#line 622 "export.m"
            if ((backend_libs__export__RegType_46 == (MR_Integer) 1))
#line 623 "export.m"
              {
#line 623 "export.m"
                MR_String backend_libs__export__V_49_49;
#line 623 "export.m"
                MR_String backend_libs__export__V_50_50;

#line 624 "export.m"
                {
#line 624 "export.m"
                  backend_libs__export__V_50_50 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                }
#line 624 "export.m"
                {
#line 624 "export.m"
                  backend_libs__export__V_49_49 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_50_50, (MR_String) ")");
                }
#line 624 "export.m"
                {
#line 624 "export.m"
                  backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_49_49);
                }
#line 623 "export.m"
              }
#line 622 "export.m"
            else
#line 619 "export.m"
              {
#line 617 "export.m"
                backend_libs__export__succeeded = (backend_libs__export__RegNum_47 > (MR_Integer) 32);
#line 619 "export.m"
                if (backend_libs__export__succeeded)
#line 618 "export.m"
                  {
#line 618 "export.m"
                    MR_String backend_libs__export__V_54_54;
#line 618 "export.m"
                    MR_String backend_libs__export__V_55_55;

#line 618 "export.m"
                    {
#line 618 "export.m"
                      backend_libs__export__V_55_55 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                    }
#line 618 "export.m"
                    {
#line 618 "export.m"
                      backend_libs__export__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_55_55, (MR_String) ")");
                    }
#line 618 "export.m"
                    {
#line 618 "export.m"
                      backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_54_54);
                    }
#line 618 "export.m"
                  }
#line 619 "export.m"
                else
#line 620 "export.m"
                  {
#line 620 "export.m"
                    MR_String backend_libs__export__V_58_58;

#line 620 "export.m"
                    {
#line 620 "export.m"
                      backend_libs__export__V_58_58 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_47);
                    }
#line 620 "export.m"
                    {
#line 620 "export.m"
                      backend_libs__export__ArgLocString_18 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_58_58);
                    }
#line 620 "export.m"
                  }
#line 619 "export.m"
              }
#line 551 "export.m"
            {
#line 551 "export.m"
              backend_libs__export__convert_type_to_mercury_4_p_0(backend_libs__export__ArgName0_17, backend_libs__export__Type_13, backend_libs__export__ArgLoc_14, &backend_libs__export__ArgName_19);
            }
#line 552 "export.m"
            {
#line 552 "export.m"
              backend_libs__export__Export_Type_20 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Type_13);
            }
#line 555 "export.m"
            {
#line 555 "export.m"
              backend_libs__export__V_28_28 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_Type_20);
            }
#line 555 "export.m"
            backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 555 "export.m"
            if (backend_libs__export__succeeded)
#line 555 "export.m"
              {
#line 555 "export.m"
                backend_libs__export__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_28_28, (MR_Integer) 0)));
#line 556 "export.m"
                {
#line 556 "export.m"
                  MR_String backend_libs__export__C_Type_22;
#line 556 "export.m"
                  MR_String backend_libs__export__V_31_31;
#line 556 "export.m"
                  MR_String backend_libs__export__V_32_32;
#line 556 "export.m"
                  MR_String backend_libs__export__V_34_34;
#line 556 "export.m"
                  MR_String backend_libs__export__V_35_35;
#line 556 "export.m"
                  MR_String backend_libs__export__V_37_37;

#line 556 "export.m"
                  {
#line 556 "export.m"
                    backend_libs__export__C_Type_22 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_Type_20);
                  }
#line 558 "export.m"
                  {
#line 558 "export.m"
                    backend_libs__export__V_37_37 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_18, (MR_String) ");\n");
                  }
#line 558 "export.m"
                  {
#line 558 "export.m"
                    backend_libs__export__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_37_37);
                  }
#line 558 "export.m"
                  {
#line 558 "export.m"
                    backend_libs__export__V_34_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, backend_libs__export__V_35_35);
                  }
#line 558 "export.m"
                  {
#line 558 "export.m"
                    backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_34_34);
                  }
#line 558 "export.m"
                  {
#line 558 "export.m"
                    backend_libs__export__V_31_31 = mercury__string__f_43_43_2_f_0(backend_libs__export__C_Type_22, backend_libs__export__V_32_32);
                  }
#line 557 "export.m"
                  {
#line 557 "export.m"
                    backend_libs__export__PassHeadInputArg_23 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", backend_libs__export__V_31_31);
                  }
#line 556 "export.m"
                }
#line 555 "export.m"
              }
#line 555 "export.m"
            else
#line 560 "export.m"
              {
#line 560 "export.m"
                MR_String backend_libs__export__V_40_40;
#line 560 "export.m"
                MR_String backend_libs__export__V_41_41;
#line 560 "export.m"
                MR_String backend_libs__export__V_43_43;

#line 561 "export.m"
                {
#line 561 "export.m"
                  backend_libs__export__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgName_19, (MR_String) ";\n");
                }
#line 561 "export.m"
                {
#line 561 "export.m"
                  backend_libs__export__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) " = ", backend_libs__export__V_43_43);
                }
#line 561 "export.m"
                {
#line 561 "export.m"
                  backend_libs__export__V_40_40 = mercury__string__f_43_43_2_f_0(backend_libs__export__ArgLocString_18, backend_libs__export__V_41_41);
                }
#line 561 "export.m"
                {
#line 561 "export.m"
                  backend_libs__export__PassHeadInputArg_23 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__V_40_40);
                }
#line 560 "export.m"
              }
#line 548 "export.m"
          }
#line 563 "export.m"
        else
#line 563 "export.m"
          if ((backend_libs__export__Mode_15 == (MR_Integer) 1))
#line 565 "export.m"
            backend_libs__export__PassHeadInputArg_23 = (MR_String) "";
#line 563 "export.m"
          else
#line 568 "export.m"
            backend_libs__export__PassHeadInputArg_23 = (MR_String) "";
#line 570 "export.m"
        {
#line 570 "export.m"
          backend_libs__export__pass_input_args_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__CurArgNum_16, backend_libs__export__ATs_10, &backend_libs__export__PassTailInputArgs_24);
        }
#line 571 "export.m"
        {
#line 571 "export.m"
          *backend_libs__export__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(backend_libs__export__PassHeadInputArg_23, backend_libs__export__PassTailInputArgs_24);
        }
#line 543 "export.m"
      }
#line 542 "export.m"
  }
#line 539 "export.m"
}

#line 492 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_nonvoid_5_p_0(
#line 492 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 492 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 492 "export.m"
  MR_Integer backend_libs__export__LastArgNum_3,
#line 492 "export.m"
  MR_Word backend_libs__export__HeadVar__4_4,
#line 492 "export.m"
  MR_String * backend_libs__export__HeadVar__5_5)
#line 492 "export.m"
{
#line 495 "export.m"
  {
#line 495 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 495 "export.m"
    if ((backend_libs__export__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "export.m"
      *backend_libs__export__HeadVar__5_5 = (MR_String) "";
#line 495 "export.m"
    else
#line 497 "export.m"
      {
#line 497 "export.m"
        MR_Word backend_libs__export__AT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__4_4, (MR_Integer) 0)));
#line 497 "export.m"
        MR_Word backend_libs__export__ATs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__4_4, (MR_Integer) 1)));
#line 497 "export.m"
        MR_Word backend_libs__export__ArgInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_12, (MR_Integer) 0)));
#line 497 "export.m"
        MR_Word backend_libs__export__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__AT_12, (MR_Integer) 1)));
#line 497 "export.m"
        MR_Integer backend_libs__export__CurArgNum_17 = (backend_libs__export__LastArgNum_3 + (MR_Integer) 1);
#line 497 "export.m"
        MR_String backend_libs__export__TypeString_18;
#line 497 "export.m"
        MR_String backend_libs__export__ArgName_19;
#line 497 "export.m"
        MR_String backend_libs__export__HeadArgsDecl_20;
#line 497 "export.m"
        MR_Word backend_libs__export__Mode_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 1)));
#line 497 "export.m"
        MR_String backend_libs__export__TypeString0_37;
#line 518 "export.m"
        MR_Word backend_libs__export___Loc_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ArgInfo_15, (MR_Integer) 0)));

#line 523 "export.m"
        if ((backend_libs__export__NameThem_2 == (MR_Integer) 0))
#line 525 "export.m"
          backend_libs__export__ArgName_19 = (MR_String) "";
#line 523 "export.m"
        else
#line 520 "export.m"
          {
#line 520 "export.m"
            MR_String backend_libs__export__ArgNumString_36;

#line 521 "export.m"
            {
#line 521 "export.m"
              mercury__string__int_to_string_2_p_0(backend_libs__export__CurArgNum_17, &backend_libs__export__ArgNumString_36);
            }
#line 522 "export.m"
            {
#line 522 "export.m"
              mercury__string__append_3_p_2((MR_String) " Mercury__argument", backend_libs__export__ArgNumString_36, &backend_libs__export__ArgName_19);
            }
#line 520 "export.m"
          }
#line 527 "export.m"
        {
#line 527 "export.m"
          backend_libs__export__TypeString0_37 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(backend_libs__export__ModuleInfo_1, (MR_Integer) 0, backend_libs__export__Type_16);
        }
#line 532 "export.m"
        if ((backend_libs__export__Mode_35 == (MR_Integer) 1))
#line 529 "export.m"
          {
#line 531 "export.m"
            {
#line 531 "export.m"
              backend_libs__export__TypeString_18 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString0_37, (MR_String) " *");
            }
#line 529 "export.m"
          }
#line 532 "export.m"
        else
#line 536 "export.m"
          backend_libs__export__TypeString_18 = backend_libs__export__TypeString0_37;
#line 502 "export.m"
        {
#line 502 "export.m"
          backend_libs__export__HeadArgsDecl_20 = mercury__string__f_43_43_2_f_0(backend_libs__export__TypeString_18, backend_libs__export__ArgName_19);
        }
#line 506 "export.m"
        if ((backend_libs__export__ATs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "export.m"
          *backend_libs__export__HeadVar__5_5 = backend_libs__export__HeadArgsDecl_20;
#line 506 "export.m"
        else
#line 507 "export.m"
          {
#line 507 "export.m"
            MR_String backend_libs__export__TailArgsDecl_23;
#line 507 "export.m"
            MR_String backend_libs__export__V_25_25;

#line 508 "export.m"
            {
#line 508 "export.m"
              backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__NameThem_2, backend_libs__export__CurArgNum_17, backend_libs__export__ATs_13, &backend_libs__export__TailArgsDecl_23);
            }
#line 510 "export.m"
            {
#line 510 "export.m"
              backend_libs__export__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__TailArgsDecl_23);
            }
#line 510 "export.m"
            {
#line 510 "export.m"
              *backend_libs__export__HeadVar__5_5 = mercury__string__f_43_43_2_f_0(backend_libs__export__HeadArgsDecl_20, backend_libs__export__V_25_25);
            }
#line 507 "export.m"
          }
#line 497 "export.m"
      }
#line 495 "export.m"
  }
#line 492 "export.m"
}

#line 483 "export.m"
static void MR_CALL 
backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(
#line 483 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 483 "export.m"
  MR_Word backend_libs__export__NameThem_2,
#line 483 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 483 "export.m"
  MR_String * backend_libs__export__HeadVar__4_4)
#line 483 "export.m"
{
#line 486 "export.m"
  {
#line 486 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 486 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_String) "void";
#line 486 "export.m"
    else
#line 488 "export.m"
      {
#line 489 "export.m"
        {
#line 489 "export.m"
          backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__NameThem_2, (MR_Integer) 0, backend_libs__export__HeadVar__3_3, backend_libs__export__HeadVar__4_4);
#line 489 "export.m"
          return;
        }
#line 488 "export.m"
      }
#line 486 "export.m"
  }
#line 483 "export.m"
}

#line 472 "export.m"
static MR_bool MR_CALL 
backend_libs__export__include_arg_2_p_0(
#line 472 "export.m"
  MR_Word backend_libs__export__ModuleInfo_3,
#line 472 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2)
#line 472 "export.m"
{
#line 474 "export.m"
  {
#line 474 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 474 "export.m"
    MR_Word backend_libs__export__Mode_5;
#line 474 "export.m"
    MR_Word backend_libs__export__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 1)));
#line 474 "export.m"
    MR_Word backend_libs__export__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadVar__2_2, (MR_Integer) 0)));
#line 474 "export.m"
    MR_Word backend_libs__export__V_8_8;
#line 474 "export.m"
    MR_Word backend_libs__export___Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_7_7, (MR_Integer) 0)));

#line 474 "export.m"
    backend_libs__export__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_7_7, (MR_Integer) 1)));
#line 475 "export.m"
    backend_libs__export__succeeded = (backend_libs__export__Mode_5 == (MR_Integer) 2);
#line 475 "export.m"
    backend_libs__export__succeeded = !(backend_libs__export__succeeded);
#line 474 "export.m"
    if (backend_libs__export__succeeded)
#line 474 "export.m"
      {
#line 476 "export.m"
        {
#line 476 "export.m"
          backend_libs__export__V_8_8 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Type_6);
        }
#line 476 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__V_8_8 == (MR_Integer) 1);
#line 474 "export.m"
      }
#line 474 "export.m"
    return backend_libs__export__succeeded;
#line 474 "export.m"
  }
#line 472 "export.m"
}

#line 465 "export.m"
static MR_bool MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0_1(
#line 465 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 465 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1)
#line 465 "export.m"
{
#line 465 "export.m"
  {
#line 465 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 465 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 465 "export.m"
    {
#line 465 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__include_arg_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
#line 465 "export.m"
    return backend_libs__export__succeeded;
#line 465 "export.m"
  }
#line 465 "export.m"
}

#line 372 "export.m"
static void MR_CALL 
backend_libs__export__get_export_info_for_lang_c_10_p_0(
#line 372 "export.m"
  MR_Word backend_libs__export__ModuleInfo_11,
#line 372 "export.m"
  MR_Word backend_libs__export__Preds_12,
#line 372 "export.m"
  MR_Word backend_libs__export__PredId_13,
#line 372 "export.m"
  MR_Integer backend_libs__export__ProcId_14,
#line 372 "export.m"
  MR_String * backend_libs__export__HowToDeclareLabel_15,
#line 372 "export.m"
  MR_String * backend_libs__export__C_RetType_16,
#line 372 "export.m"
  MR_String * backend_libs__export__MaybeDeclareRetval_17,
#line 372 "export.m"
  MR_String * backend_libs__export__MaybeFail_18,
#line 372 "export.m"
  MR_String * backend_libs__export__MaybeSucceed_19,
#line 372 "export.m"
  MR_Word * backend_libs__export__ArgInfoTypes_20)
#line 372 "export.m"
{
#line 378 "export.m"
  {
#line 378 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 378 "export.m"
    MR_Word backend_libs__export__PredInfo_21;
#line 378 "export.m"
    MR_Word backend_libs__export__Status_22;
#line 378 "export.m"
    MR_Word backend_libs__export__PredOrFunc_23;
#line 378 "export.m"
    MR_Word backend_libs__export__ProcTable_24;
#line 378 "export.m"
    MR_Word backend_libs__export__ProcInfo_25;
#line 378 "export.m"
    MR_Word backend_libs__export__MaybeArgInfos_26;
#line 378 "export.m"
    MR_Word backend_libs__export__Markers_27;
#line 378 "export.m"
    MR_Word backend_libs__export__ArgTypes_28;
#line 378 "export.m"
    MR_Word backend_libs__export__ArgInfos_30;
#line 378 "export.m"
    MR_Word backend_libs__export__CodeModel_32;
#line 378 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes0_33;
#line 378 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes2_43;
#line 378 "export.m"
    MR_Word backend_libs__export__V_74_74;
#line 379 "export.m"
    MR_Box backend_libs__export__conv0_PredInfo_21;
#line 394 "export.m"
    MR_Box backend_libs__export__conv1_ProcInfo_25;

#line 379 "export.m"
    {
#line 379 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, backend_libs__export__Preds_12, ((MR_Box) (backend_libs__export__PredId_13)), &backend_libs__export__conv0_PredInfo_21);
    }
#line 379 "export.m"
    backend_libs__export__PredInfo_21 = ((MR_Word) backend_libs__export__conv0_PredInfo_21);
#line 380 "export.m"
    {
#line 380 "export.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__Status_22);
    }
#line 383 "export.m"
    {
#line 383 "export.m"
      backend_libs__export__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(backend_libs__export__ModuleInfo_11, backend_libs__export__PredInfo_21, backend_libs__export__ProcId_14);
    }
#line 384 "export.m"
    if (!(backend_libs__export__succeeded))
#line 385 "export.m"
      {
#line 385 "export.m"
        MR_Word backend_libs__export__V_44_44;

#line 385 "export.m"
        {
#line 385 "export.m"
          backend_libs__export__V_44_44 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(backend_libs__export__Status_22);
        }
#line 385 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__V_44_44 == (MR_Integer) 0);
#line 385 "export.m"
      }
#line 389 "export.m"
    if (backend_libs__export__succeeded)
#line 388 "export.m"
      *backend_libs__export__HowToDeclareLabel_15 = (MR_String) "MR_declare_entry";
#line 389 "export.m"
    else
#line 390 "export.m"
      *backend_libs__export__HowToDeclareLabel_15 = (MR_String) "MR_declare_static";
#line 392 "export.m"
    {
#line 392 "export.m"
      backend_libs__export__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(backend_libs__export__PredInfo_21);
    }
#line 393 "export.m"
    {
#line 393 "export.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__ProcTable_24);
    }
#line 394 "export.m"
    {
#line 394 "export.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, backend_libs__export__ProcTable_24, ((MR_Box) (backend_libs__export__ProcId_14)), &backend_libs__export__conv1_ProcInfo_25);
    }
#line 394 "export.m"
    backend_libs__export__ProcInfo_25 = ((MR_Word) backend_libs__export__conv1_ProcInfo_25);
#line 395 "export.m"
    {
#line 395 "export.m"
      hlds__hlds_pred__proc_info_maybe_arg_info_2_p_0(backend_libs__export__ProcInfo_25, &backend_libs__export__MaybeArgInfos_26);
    }
#line 396 "export.m"
    {
#line 396 "export.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__Markers_27);
    }
#line 397 "export.m"
    {
#line 397 "export.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(backend_libs__export__PredInfo_21, &backend_libs__export__ArgTypes_28);
    }
#line 401 "export.m"
    if ((backend_libs__export__MaybeArgInfos_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "export.m"
      {
#line 402 "export.m"
        MR_Word backend_libs__export__NewProcInfo_31;

#line 403 "export.m"
        {
#line 403 "export.m"
          hlds__arg_info__generate_proc_arg_info_5_p_0(backend_libs__export__Markers_27, backend_libs__export__ArgTypes_28, backend_libs__export__ModuleInfo_11, backend_libs__export__ProcInfo_25, &backend_libs__export__NewProcInfo_31);
        }
#line 405 "export.m"
        {
#line 405 "export.m"
          hlds__hlds_pred__proc_info_arg_info_2_p_0(backend_libs__export__NewProcInfo_31, &backend_libs__export__ArgInfos_30);
        }
#line 402 "export.m"
      }
#line 401 "export.m"
    else
#line 399 "export.m"
      backend_libs__export__ArgInfos_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__MaybeArgInfos_26, (MR_Integer) 0)));
#line 407 "export.m"
    {
#line 407 "export.m"
      backend_libs__export__CodeModel_32 = hlds__code_model__proc_info_interface_code_model_1_f_0(backend_libs__export__ProcInfo_25);
    }
#line 408 "export.m"
    {
#line 408 "export.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__export__ArgInfos_30, backend_libs__export__ArgTypes_28, &backend_libs__export__ArgInfoTypes0_33);
    }
#line 446 "export.m"
    if ((backend_libs__export__CodeModel_32 == (MR_Integer) 0))
#line 439 "export.m"
      {
#line 439 "export.m"
        MR_Word backend_libs__export__ArgInfoTypes1_34;
#line 439 "export.m"
        MR_Word backend_libs__export__RetArgLoc_35;
#line 439 "export.m"
        MR_Word backend_libs__export__RetType_37;
#line 415 "export.m"
        MR_Word backend_libs__export__TypeInfo_81_81;
#line 415 "export.m"
        MR_Word backend_libs__export__RetArgMode_36;
#line 415 "export.m"
        MR_Word backend_libs__export__V_57_57;
#line 415 "export.m"
        MR_Word backend_libs__export__V_58_58;
#line 415 "export.m"
        MR_Word backend_libs__export__V_59_59;
#line 416 "export.m"
        MR_Box backend_libs__export__conv2_V_57_57;

#line 415 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__PredOrFunc_23 == (MR_Integer) 1);
#line 415 "export.m"
        if (backend_libs__export__succeeded)
#line 415 "export.m"
          {
#line 3370 "backend_libs.export.c"
            backend_libs__export__TypeInfo_81_81 = (MR_Word) &backend_libs__export_scalar_common_1[0];
#line 416 "export.m"
            {
#line 416 "export.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(backend_libs__export__TypeInfo_81_81, backend_libs__export__ArgInfoTypes0_33, &backend_libs__export__ArgInfoTypes1_34, &backend_libs__export__conv2_V_57_57);
            }
#line 416 "export.m"
            backend_libs__export__V_57_57 = ((MR_Word) backend_libs__export__conv2_V_57_57);
#line 417 "export.m"
            backend_libs__export__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_57_57, (MR_Integer) 0)));
#line 417 "export.m"
            backend_libs__export__RetType_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_57_57, (MR_Integer) 1)));
#line 417 "export.m"
            backend_libs__export__RetArgLoc_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_58_58, (MR_Integer) 0)));
#line 417 "export.m"
            backend_libs__export__RetArgMode_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__V_58_58, (MR_Integer) 1)));
#line 418 "export.m"
            backend_libs__export__succeeded = (backend_libs__export__RetArgMode_36 == (MR_Integer) 1);
#line 415 "export.m"
            if (backend_libs__export__succeeded)
#line 415 "export.m"
              {
#line 419 "export.m"
                {
#line 419 "export.m"
                  backend_libs__export__V_59_59 = check_hlds__type_util__check_dummy_type_2_f_0(backend_libs__export__ModuleInfo_11, backend_libs__export__RetType_37);
                }
#line 419 "export.m"
                backend_libs__export__succeeded = (backend_libs__export__V_59_59 == (MR_Integer) 1);
#line 415 "export.m"
              }
#line 415 "export.m"
          }
#line 439 "export.m"
        if (backend_libs__export__succeeded)
#line 421 "export.m"
          {
#line 421 "export.m"
            MR_Word backend_libs__export__Export_RetType_38;
#line 421 "export.m"
            MR_String backend_libs__export__RetArgString0_39;
#line 421 "export.m"
            MR_String backend_libs__export__RetArgString_40;
#line 421 "export.m"
            MR_String backend_libs__export__V_62_62;
#line 421 "export.m"
            MR_Word backend_libs__export__RegType_85;
#line 421 "export.m"
            MR_Integer backend_libs__export__RegNum_86;
#line 429 "export.m"
            MR_Word backend_libs__export__V_64_64;
#line 429 "export.m"
            MR_Word backend_libs__export__V_41_41;

#line 421 "export.m"
            {
#line 421 "export.m"
              backend_libs__export__Export_RetType_38 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__export__ModuleInfo_11, backend_libs__export__RetType_37);
            }
#line 422 "export.m"
            {
#line 422 "export.m"
              *backend_libs__export__C_RetType_16 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, backend_libs__export__Export_RetType_38);
            }
#line 612 "export.m"
            backend_libs__export__RegType_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__RetArgLoc_35, (MR_Integer) 0)));
#line 612 "export.m"
            backend_libs__export__RegNum_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__RetArgLoc_35, (MR_Integer) 1)));
#line 622 "export.m"
            if ((backend_libs__export__RegType_85 == (MR_Integer) 1))
#line 623 "export.m"
              {
#line 623 "export.m"
                MR_String backend_libs__export__V_88_88;
#line 623 "export.m"
                MR_String backend_libs__export__V_89_89;

#line 624 "export.m"
                {
#line 624 "export.m"
                  backend_libs__export__V_89_89 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                }
#line 624 "export.m"
                {
#line 624 "export.m"
                  backend_libs__export__V_88_88 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_89_89, (MR_String) ")");
                }
#line 624 "export.m"
                {
#line 624 "export.m"
                  backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", backend_libs__export__V_88_88);
                }
#line 623 "export.m"
              }
#line 622 "export.m"
            else
#line 619 "export.m"
              {
#line 617 "export.m"
                backend_libs__export__succeeded = (backend_libs__export__RegNum_86 > (MR_Integer) 32);
#line 619 "export.m"
                if (backend_libs__export__succeeded)
#line 618 "export.m"
                  {
#line 618 "export.m"
                    MR_String backend_libs__export__V_93_93;
#line 618 "export.m"
                    MR_String backend_libs__export__V_94_94;

#line 618 "export.m"
                    {
#line 618 "export.m"
                      backend_libs__export__V_94_94 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                    }
#line 618 "export.m"
                    {
#line 618 "export.m"
                      backend_libs__export__V_93_93 = mercury__string__f_43_43_2_f_0(backend_libs__export__V_94_94, (MR_String) ")");
                    }
#line 618 "export.m"
                    {
#line 618 "export.m"
                      backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", backend_libs__export__V_93_93);
                    }
#line 618 "export.m"
                  }
#line 619 "export.m"
                else
#line 620 "export.m"
                  {
#line 620 "export.m"
                    MR_String backend_libs__export__V_97_97;

#line 620 "export.m"
                    {
#line 620 "export.m"
                      backend_libs__export__V_97_97 = mercury__string__int_to_string_1_f_0(backend_libs__export__RegNum_86);
                    }
#line 620 "export.m"
                    {
#line 620 "export.m"
                      backend_libs__export__RetArgString0_39 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", backend_libs__export__V_97_97);
                    }
#line 620 "export.m"
                  }
#line 619 "export.m"
              }
#line 424 "export.m"
            {
#line 424 "export.m"
              backend_libs__export__convert_type_from_mercury_4_p_0(backend_libs__export__RetArgLoc_35, backend_libs__export__RetArgString0_39, backend_libs__export__RetType_37, &backend_libs__export__RetArgString_40);
            }
#line 426 "export.m"
            {
#line 426 "export.m"
              backend_libs__export__V_62_62 = mercury__string__f_43_43_2_f_0(*backend_libs__export__C_RetType_16, (MR_String) " return_value;\n");
            }
#line 426 "export.m"
            {
#line 426 "export.m"
              *backend_libs__export__MaybeDeclareRetval_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t", backend_libs__export__V_62_62);
            }
#line 429 "export.m"
            {
#line 429 "export.m"
              backend_libs__export__V_64_64 = backend_libs__foreign__is_foreign_type_1_f_0(backend_libs__export__Export_RetType_38);
            }
#line 429 "export.m"
            backend_libs__export__succeeded = ((MR_tag((MR_Word) backend_libs__export__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 429 "export.m"
            if (backend_libs__export__succeeded)
#line 429 "export.m"
              {
#line 429 "export.m"
                backend_libs__export__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__V_64_64, (MR_Integer) 0)));
#line 430 "export.m"
                {
#line 430 "export.m"
                  MR_String backend_libs__export__V_66_66;
#line 430 "export.m"
                  MR_String backend_libs__export__V_67_67;
#line 430 "export.m"
                  MR_String backend_libs__export__V_69_69;

#line 432 "export.m"
                  {
#line 432 "export.m"
                    backend_libs__export__V_69_69 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_40, (MR_String) ", return_value);\n");
                  }
#line 431 "export.m"
                  {
#line 431 "export.m"
                    backend_libs__export__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", backend_libs__export__V_69_69);
                  }
#line 431 "export.m"
                  {
#line 431 "export.m"
                    backend_libs__export__V_66_66 = mercury__string__f_43_43_2_f_0(*backend_libs__export__C_RetType_16, backend_libs__export__V_67_67);
                  }
#line 431 "export.m"
                  {
#line 431 "export.m"
                    *backend_libs__export__MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", backend_libs__export__V_66_66);
                  }
#line 430 "export.m"
                }
#line 429 "export.m"
              }
#line 429 "export.m"
            else
#line 434 "export.m"
              {
#line 434 "export.m"
                MR_String backend_libs__export__V_72_72;

#line 434 "export.m"
                {
#line 434 "export.m"
                  backend_libs__export__V_72_72 = mercury__string__f_43_43_2_f_0(backend_libs__export__RetArgString_40, (MR_String) ";\n");
                }
#line 434 "export.m"
                {
#line 434 "export.m"
                  *backend_libs__export__MaybeFail_18 = mercury__string__f_43_43_2_f_0((MR_String) "\treturn_value = ", backend_libs__export__V_72_72);
                }
#line 434 "export.m"
              }
#line 437 "export.m"
            *backend_libs__export__MaybeSucceed_19 = (MR_String) "\treturn return_value;\n";
#line 438 "export.m"
            backend_libs__export__ArgInfoTypes2_43 = backend_libs__export__ArgInfoTypes1_34;
#line 421 "export.m"
          }
#line 439 "export.m"
        else
#line 440 "export.m"
          {
#line 440 "export.m"
            *backend_libs__export__C_RetType_16 = (MR_String) "void";
#line 441 "export.m"
            *backend_libs__export__MaybeDeclareRetval_17 = (MR_String) "";
#line 442 "export.m"
            *backend_libs__export__MaybeFail_18 = (MR_String) "";
#line 443 "export.m"
            *backend_libs__export__MaybeSucceed_19 = (MR_String) "";
#line 444 "export.m"
            backend_libs__export__ArgInfoTypes2_43 = backend_libs__export__ArgInfoTypes0_33;
#line 440 "export.m"
          }
#line 439 "export.m"
      }
#line 446 "export.m"
    else
#line 446 "export.m"
      if ((backend_libs__export__CodeModel_32 == (MR_Integer) 2))
#line 462 "export.m"
        {
#line 463 "export.m"
          {
#line 463 "export.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_export_info_for_lang_c\'/10", (MR_String) "Attempt to export model_non procedure.");
#line 463 "export.m"
            return;
          }
#line 462 "export.m"
        }
#line 446 "export.m"
      else
#line 447 "export.m"
        {
#line 452 "export.m"
          *backend_libs__export__C_RetType_16 = (MR_String) "MR_bool";
#line 453 "export.m"
          *backend_libs__export__MaybeDeclareRetval_17 = (MR_String) "";
#line 454 "export.m"
          {
#line 454 "export.m"
            mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[24]), backend_libs__export__MaybeFail_18);
          }
#line 459 "export.m"
          *backend_libs__export__MaybeSucceed_19 = (MR_String) "\treturn MR_TRUE;\n";
#line 460 "export.m"
          backend_libs__export__ArgInfoTypes2_43 = backend_libs__export__ArgInfoTypes0_33;
#line 447 "export.m"
        }
#line 465 "export.m"
    {
#line 465 "export.m"
      backend_libs__export__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 465 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[2]));
#line 465 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 1) = ((MR_Box) (backend_libs__export__get_export_info_for_lang_c_10_p_0_1));
#line 465 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 465 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_74_74, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_11));
#line 465 "export.m"
    }
#line 465 "export.m"
    {
#line 465 "export.m"
      mercury__list__filter_3_p_0((MR_Word) &backend_libs__export_scalar_common_1[0], backend_libs__export__V_74_74, backend_libs__export__ArgInfoTypes2_43, backend_libs__export__ArgInfoTypes_20);
#line 465 "export.m"
      return;
    }
#line 378 "export.m"
  }
#line 372 "export.m"
}

#line 291 "export.m"
static MR_bool MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0_1(
#line 291 "export.m"
  MR_Box backend_libs__export__closure_arg)
#line 291 "export.m"
{
#line 291 "export.m"
  {
#line 291 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 291 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 291 "export.m"
    {
#line 291 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__IntroducedFrom__pred__export_proc_to_c__291__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))));
    }
#line 291 "export.m"
    return backend_libs__export__succeeded;
#line 291 "export.m"
  }
#line 291 "export.m"
}

#line 285 "export.m"
static void MR_CALL 
backend_libs__export__export_proc_to_c_4_p_0(
#line 285 "export.m"
  MR_Word backend_libs__export__ModuleInfo_5,
#line 285 "export.m"
  MR_Word backend_libs__export__Preds_6,
#line 285 "export.m"
  MR_Word backend_libs__export__ExportedProc_7,
#line 285 "export.m"
  MR_Word * backend_libs__export__ExportDefn_8)
#line 285 "export.m"
{
#line 288 "export.m"
  {
#line 288 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 288 "export.m"
    MR_Word backend_libs__export__Lang_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 0)));
#line 288 "export.m"
    MR_Word backend_libs__export__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 1)));
#line 288 "export.m"
    MR_Integer backend_libs__export__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 2)));
#line 288 "export.m"
    MR_String backend_libs__export__C_Function_12 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 3)));
#line 288 "export.m"
    MR_String backend_libs__export__DeclareString_14;
#line 288 "export.m"
    MR_String backend_libs__export__C_RetType_15;
#line 288 "export.m"
    MR_String backend_libs__export__MaybeDeclareRetval_16;
#line 288 "export.m"
    MR_String backend_libs__export__MaybeFail_17;
#line 288 "export.m"
    MR_String backend_libs__export__MaybeSucceed_18;
#line 288 "export.m"
    MR_Word backend_libs__export__ArgInfoTypes_19;
#line 288 "export.m"
    MR_String backend_libs__export__ArgDecls_20;
#line 288 "export.m"
    MR_String backend_libs__export__PassInputArgs_21;
#line 288 "export.m"
    MR_String backend_libs__export__RetrieveOutputArgs_22;
#line 288 "export.m"
    MR_Word backend_libs__export__ProcLabel_23;
#line 288 "export.m"
    MR_String backend_libs__export__ProcLabelString_24;
#line 288 "export.m"
    MR_String backend_libs__export__Code_25;
#line 288 "export.m"
    MR_Word backend_libs__export__V_26_26;
#line 288 "export.m"
    MR_Word backend_libs__export__V_35_35;
#line 288 "export.m"
    MR_Word backend_libs__export__V_37_37;
#line 288 "export.m"
    MR_Word backend_libs__export__V_38_38;
#line 288 "export.m"
    MR_Word backend_libs__export__V_40_40;
#line 288 "export.m"
    MR_Word backend_libs__export__V_41_41;
#line 288 "export.m"
    MR_Word backend_libs__export__V_43_43;
#line 288 "export.m"
    MR_Word backend_libs__export__V_45_45;
#line 288 "export.m"
    MR_Word backend_libs__export__V_46_46;
#line 288 "export.m"
    MR_Word backend_libs__export__V_48_48;
#line 288 "export.m"
    MR_Word backend_libs__export__V_49_49;
#line 288 "export.m"
    MR_Word backend_libs__export__V_51_51;
#line 288 "export.m"
    MR_Word backend_libs__export__V_52_52;
#line 288 "export.m"
    MR_Word backend_libs__export__V_54_54;
#line 288 "export.m"
    MR_Word backend_libs__export__V_56_56;
#line 288 "export.m"
    MR_Word backend_libs__export__V_57_57;
#line 288 "export.m"
    MR_Word backend_libs__export__V_59_59;
#line 288 "export.m"
    MR_Word backend_libs__export__V_60_60;
#line 288 "export.m"
    MR_Word backend_libs__export__V_62_62;
#line 288 "export.m"
    MR_Word backend_libs__export__V_63_63;
#line 288 "export.m"
    MR_Word backend_libs__export__V_65_65;
#line 288 "export.m"
    MR_Word backend_libs__export__V_67_67;
#line 288 "export.m"
    MR_Word backend_libs__export__V_69_69;
#line 288 "export.m"
    MR_Word backend_libs__export__V_71_71;
#line 288 "export.m"
    MR_Word backend_libs__export__V_73_73;
#line 288 "export.m"
    MR_Word backend_libs__export__V_75_75;
#line 288 "export.m"
    MR_Word backend_libs__export__V_77_77;
#line 288 "export.m"
    MR_Word backend_libs__export__V_79_79;
#line 288 "export.m"
    MR_Word backend_libs__export__V_81_81;
#line 288 "export.m"
    MR_Word backend_libs__export__V_83_83;
#line 288 "export.m"
    MR_Word backend_libs__export__V_85_85;
#line 288 "export.m"
    MR_Word backend_libs__export__V_86_86;
#line 288 "export.m"
    MR_Word backend_libs__export__V_88_88;
#line 288 "export.m"
    MR_Word backend_libs__export__V_90_90;
#line 288 "export.m"
    MR_Word backend_libs__export__V_92_92;
#line 288 "export.m"
    MR_Word backend_libs__export__V_94_94;
#line 288 "export.m"
    MR_Word backend_libs__export__V_96_96;
#line 288 "export.m"
    MR_Word backend_libs__export__V_98_98;
#line 288 "export.m"
    MR_Word backend_libs__export__V_100_100;
#line 288 "export.m"
    MR_Word backend_libs__export__V_102_102;
#line 288 "export.m"
    MR_Word backend_libs__export__V_104_104;
#line 288 "export.m"
    MR_Word backend_libs__export__V_105_105;
#line 288 "export.m"
    MR_Word backend_libs__export__V_107_107;
#line 288 "export.m"
    MR_Word backend_libs__export__V_109_109;
#line 288 "export.m"
    MR_Word backend_libs__export__V_111_111;
#line 288 "export.m"
    MR_Word backend_libs__export__V_112_112;
#line 288 "export.m"
    MR_Word backend_libs__export__V_114_114;
#line 288 "export.m"
    MR_Word backend_libs__export__V_116_116;
#line 288 "export.m"
    MR_Word backend_libs__export__V_117_117;
#line 288 "export.m"
    MR_Word backend_libs__export__V_119_119;
#line 288 "export.m"
    MR_Word backend_libs__export__V_121_121;
#line 288 "export.m"
    MR_Word backend_libs__export__V_123_123;
#line 288 "export.m"
    MR_Word backend_libs__export__V_125_125;
#line 288 "export.m"
    MR_Word backend_libs__export__V_127_127;
#line 288 "export.m"
    MR_Word backend_libs__export__V_129_129;
#line 288 "export.m"
    MR_Word backend_libs__export__V_130_130;
#line 288 "export.m"
    MR_Word backend_libs__export__V_131_131;
#line 288 "export.m"
    MR_Word backend_libs__export__V_133_133;
#line 288 "export.m"
    MR_Word backend_libs__export__V_135_135;
#line 288 "export.m"
    MR_Word backend_libs__export__V_137_137;
#line 288 "export.m"
    MR_Word backend_libs__export__V_139_139;
#line 288 "export.m"
    MR_Word backend_libs__export__V_141_141;
#line 288 "export.m"
    MR_Word backend_libs__export__V_143_143;
#line 289 "export.m"
    MR_Word backend_libs__export___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ExportedProc_7, (MR_Integer) 4)));

#line 291 "export.m"
    {
#line 291 "export.m"
      backend_libs__export__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 291 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 0) = ((MR_Box) (&backend_libs__export_scalar_common_4[1]));
#line 291 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 1) = ((MR_Box) (backend_libs__export__export_proc_to_c_4_p_0_1));
#line 291 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 291 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 3) = ((MR_Box) (backend_libs__export__Lang_9));
#line 291 "export.m"
      MR_hl_field(MR_mktag(0), backend_libs__export__V_26_26, 4) = ((MR_Box) ((MR_Integer) 0));
#line 291 "export.m"
    }
#line 291 "export.m"
    {
#line 291 "export.m"
      mercury__require__expect_4_p_0(backend_libs__export__V_26_26, (MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.export_proc_to_c\'/4", (MR_String) "foreign language other than C");
    }
#line 293 "export.m"
    {
#line 293 "export.m"
      backend_libs__export__get_export_info_for_lang_c_10_p_0(backend_libs__export__ModuleInfo_5, backend_libs__export__Preds_6, backend_libs__export__PredId_10, backend_libs__export__ProcId_11, &backend_libs__export__DeclareString_14, &backend_libs__export__C_RetType_15, &backend_libs__export__MaybeDeclareRetval_16, &backend_libs__export__MaybeFail_17, &backend_libs__export__MaybeSucceed_18, &backend_libs__export__ArgInfoTypes_19);
    }
#line 296 "export.m"
    {
#line 296 "export.m"
      backend_libs__export__get_argument_declarations_for_lang_c_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 1, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__ArgDecls_20);
    }
#line 301 "export.m"
    {
#line 301 "export.m"
      backend_libs__export__pass_input_args_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 0, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__PassInputArgs_21);
    }
#line 302 "export.m"
    {
#line 302 "export.m"
      backend_libs__export__retrieve_output_args_4_p_0(backend_libs__export__ModuleInfo_5, (MR_Integer) 0, backend_libs__export__ArgInfoTypes_19, &backend_libs__export__RetrieveOutputArgs_22);
    }
#line 304 "export.m"
    {
#line 304 "export.m"
      backend_libs__export__ProcLabel_23 = backend_libs__proc_label__make_proc_label_3_f_0(backend_libs__export__ModuleInfo_5, backend_libs__export__PredId_10, backend_libs__export__ProcId_11);
    }
#line 305 "export.m"
    {
#line 305 "export.m"
      backend_libs__export__ProcLabelString_24 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__export__ProcLabel_23, (MR_Integer) 1);
    }
#line 355 "export.m"
    {
#line 355 "export.m"
      backend_libs__export__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_143_143, 0) = ((MR_Box) (backend_libs__export__MaybeSucceed_18));
#line 355 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[26])));
#line 355 "export.m"
    }
#line 354 "export.m"
    {
#line 354 "export.m"
      backend_libs__export__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_141_141, 0) = ((MR_Box) ((MR_String) "\tMR_restore_regs_from_mem(c_regs);\n"));
#line 354 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_141_141, 1) = ((MR_Box) (backend_libs__export__V_143_143));
#line 354 "export.m"
    }
#line 353 "export.m"
    {
#line 353 "export.m"
      backend_libs__export__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_139_139, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 353 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_139_139, 1) = ((MR_Box) (backend_libs__export__V_141_141));
#line 353 "export.m"
    }
#line 352 "export.m"
    {
#line 352 "export.m"
      backend_libs__export__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 0) = ((MR_Box) ((MR_String) "\t}\n"));
#line 352 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 1) = ((MR_Box) (backend_libs__export__V_139_139));
#line 352 "export.m"
    }
#line 351 "export.m"
    {
#line 351 "export.m"
      backend_libs__export__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 0) = ((MR_Box) ((MR_String) "\t\t MR_finalize_thread_engine();\n"));
#line 351 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 1) = ((MR_Box) (backend_libs__export__V_137_137));
#line 351 "export.m"
    }
#line 350 "export.m"
    {
#line 350 "export.m"
      backend_libs__export__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 0) = ((MR_Box) ((MR_String) "\tif (must_finalize_engine) {\n"));
#line 350 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 1) = ((MR_Box) (backend_libs__export__V_135_135));
#line 350 "export.m"
    }
#line 349 "export.m"
    {
#line 349 "export.m"
      backend_libs__export__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 349 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 1) = ((MR_Box) (backend_libs__export__V_133_133));
#line 349 "export.m"
    }
#line 348 "export.m"
    {
#line 348 "export.m"
      backend_libs__export__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 0) = ((MR_Box) (backend_libs__export__RetrieveOutputArgs_22));
#line 348 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_130_130, 1) = ((MR_Box) (backend_libs__export__V_131_131));
#line 348 "export.m"
    }
#line 347 "export.m"
    {
#line 347 "export.m"
      backend_libs__export__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_129_129, 0) = ((MR_Box) (backend_libs__export__MaybeFail_17));
#line 347 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_129_129, 1) = ((MR_Box) (backend_libs__export__V_130_130));
#line 347 "export.m"
    }
#line 346 "export.m"
    {
#line 346 "export.m"
      backend_libs__export__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_127_127, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 346 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_127_127, 1) = ((MR_Box) (backend_libs__export__V_129_129));
#line 346 "export.m"
    }
#line 345 "export.m"
    {
#line 345 "export.m"
      backend_libs__export__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_125_125, 0) = ((MR_Box) ((MR_String) "\tMR_current_callback_site = saved_cur_callback;\n"));
#line 345 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_125_125, 1) = ((MR_Box) (backend_libs__export__V_127_127));
#line 345 "export.m"
    }
#line 344 "export.m"
    {
#line 344 "export.m"
      backend_libs__export__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_123_123, 0) = ((MR_Box) ((MR_String) "\tMR_current_call_site_dynamic = saved_cur_csd;\n"));
#line 344 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_123_123, 1) = ((MR_Box) (backend_libs__export__V_125_125));
#line 344 "export.m"
    }
#line 343 "export.m"
    {
#line 343 "export.m"
      backend_libs__export__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_121_121, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 343 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_121_121, 1) = ((MR_Box) (backend_libs__export__V_123_123));
#line 343 "export.m"
    }
#line 342 "export.m"
    {
#line 342 "export.m"
      backend_libs__export__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_119_119, 0) = ((MR_Box) ((MR_String) "\tMR_restore_transient_registers();\n"));
#line 342 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_119_119, 1) = ((MR_Box) (backend_libs__export__V_121_121));
#line 342 "export.m"
    }
#line 341 "export.m"
    {
#line 341 "export.m"
      backend_libs__export__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_117_117, 0) = ((MR_Box) ((MR_String) "), MR_FALSE);\n"));
#line 341 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_117_117, 1) = ((MR_Box) (backend_libs__export__V_119_119));
#line 341 "export.m"
    }
#line 341 "export.m"
    {
#line 341 "export.m"
      backend_libs__export__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_116_116, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
#line 341 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_116_116, 1) = ((MR_Box) (backend_libs__export__V_117_117));
#line 341 "export.m"
    }
#line 340 "export.m"
    {
#line 340 "export.m"
      backend_libs__export__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_114_114, 0) = ((MR_Box) ((MR_String) "\t(void) MR_call_engine(MR_ENTRY("));
#line 340 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_114_114, 1) = ((MR_Box) (backend_libs__export__V_116_116));
#line 340 "export.m"
    }
#line 339 "export.m"
    {
#line 339 "export.m"
      backend_libs__export__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_112_112, 0) = ((MR_Box) ((MR_String) "\tMR_save_transient_registers();\n"));
#line 339 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_112_112, 1) = ((MR_Box) (backend_libs__export__V_114_114));
#line 339 "export.m"
    }
#line 338 "export.m"
    {
#line 338 "export.m"
      backend_libs__export__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_111_111, 0) = ((MR_Box) (backend_libs__export__PassInputArgs_21));
#line 338 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_111_111, 1) = ((MR_Box) (backend_libs__export__V_112_112));
#line 338 "export.m"
    }
#line 337 "export.m"
    {
#line 337 "export.m"
      backend_libs__export__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_109_109, 0) = ((MR_Box) ((MR_String) "\tMR_restore_registers();\n"));
#line 337 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_109_109, 1) = ((MR_Box) (backend_libs__export__V_111_111));
#line 337 "export.m"
    }
#line 336 "export.m"
    {
#line 336 "export.m"
      backend_libs__export__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_107_107, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 336 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_107_107, 1) = ((MR_Box) (backend_libs__export__V_109_109));
#line 336 "export.m"
    }
#line 335 "export.m"
    {
#line 335 "export.m"
      backend_libs__export__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_105_105, 0) = ((MR_Box) ((MR_String) "));\n"));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_105_105, 1) = ((MR_Box) (backend_libs__export__V_107_107));
#line 335 "export.m"
    }
#line 335 "export.m"
    {
#line 335 "export.m"
      backend_libs__export__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_104_104, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_104_104, 1) = ((MR_Box) (backend_libs__export__V_105_105));
#line 335 "export.m"
    }
#line 335 "export.m"
    {
#line 335 "export.m"
      backend_libs__export__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_102_102, 0) = ((MR_Box) ((MR_String) "\tMR_setup_callback(MR_ENTRY("));
#line 335 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_102_102, 1) = ((MR_Box) (backend_libs__export__V_104_104));
#line 335 "export.m"
    }
#line 334 "export.m"
    {
#line 334 "export.m"
      backend_libs__export__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_100_100, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_csd = MR_current_call_site_dynamic;\n"));
#line 334 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_100_100, 1) = ((MR_Box) (backend_libs__export__V_102_102));
#line 334 "export.m"
    }
#line 333 "export.m"
    {
#line 333 "export.m"
      backend_libs__export__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_98_98, 0) = ((MR_Box) ((MR_String) "\tsaved_cur_callback = MR_current_callback_site;\n"));
#line 333 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_98_98, 1) = ((MR_Box) (backend_libs__export__V_100_100));
#line 333 "export.m"
    }
#line 332 "export.m"
    {
#line 332 "export.m"
      backend_libs__export__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_96_96, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 332 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_96_96, 1) = ((MR_Box) (backend_libs__export__V_98_98));
#line 332 "export.m"
    }
#line 331 "export.m"
    {
#line 331 "export.m"
      backend_libs__export__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_94_94, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 331 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_94_94, 1) = ((MR_Box) (backend_libs__export__V_96_96));
#line 331 "export.m"
    }
#line 330 "export.m"
    {
#line 330 "export.m"
      backend_libs__export__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_92_92, 0) = ((MR_Box) ((MR_String) "\tmust_finalize_engine = MR_init_thread(MR_use_now);\n"));
#line 330 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_92_92, 1) = ((MR_Box) (backend_libs__export__V_94_94));
#line 330 "export.m"
    }
#line 329 "export.m"
    {
#line 329 "export.m"
      backend_libs__export__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_90_90, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 329 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_90_90, 1) = ((MR_Box) (backend_libs__export__V_92_92));
#line 329 "export.m"
    }
#line 328 "export.m"
    {
#line 328 "export.m"
      backend_libs__export__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_88_88, 0) = ((MR_Box) ((MR_String) "\tMR_save_regs_to_mem(c_regs);\n"));
#line 328 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_88_88, 1) = ((MR_Box) (backend_libs__export__V_90_90));
#line 328 "export.m"
    }
#line 327 "export.m"
    {
#line 327 "export.m"
      backend_libs__export__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_86_86, 0) = ((MR_Box) ((MR_String) "\n"));
#line 327 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_86_86, 1) = ((MR_Box) (backend_libs__export__V_88_88));
#line 327 "export.m"
    }
#line 326 "export.m"
    {
#line 326 "export.m"
      backend_libs__export__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 0) = ((MR_Box) (backend_libs__export__MaybeDeclareRetval_16));
#line 326 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 1) = ((MR_Box) (backend_libs__export__V_86_86));
#line 326 "export.m"
    }
#line 325 "export.m"
    {
#line 325 "export.m"
      backend_libs__export__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_83_83, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 325 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_83_83, 1) = ((MR_Box) (backend_libs__export__V_85_85));
#line 325 "export.m"
    }
#line 324 "export.m"
    {
#line 324 "export.m"
      backend_libs__export__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynamic *saved_cur_csd;\n"));
#line 324 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 1) = ((MR_Box) (backend_libs__export__V_83_83));
#line 324 "export.m"
    }
#line 323 "export.m"
    {
#line 323 "export.m"
      backend_libs__export__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_79_79, 0) = ((MR_Box) ((MR_String) "\tMR_CallSiteDynList **saved_cur_callback;\n"));
#line 323 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_79_79, 1) = ((MR_Box) (backend_libs__export__V_81_81));
#line 323 "export.m"
    }
#line 322 "export.m"
    {
#line 322 "export.m"
      backend_libs__export__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_77_77, 0) = ((MR_Box) ((MR_String) "#if MR_DEEP_PROFILING\n"));
#line 322 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_77_77, 1) = ((MR_Box) (backend_libs__export__V_79_79));
#line 322 "export.m"
    }
#line 321 "export.m"
    {
#line 321 "export.m"
      backend_libs__export__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_75_75, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 321 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_75_75, 1) = ((MR_Box) (backend_libs__export__V_77_77));
#line 321 "export.m"
    }
#line 320 "export.m"
    {
#line 320 "export.m"
      backend_libs__export__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_73_73, 0) = ((MR_Box) ((MR_String) "\tMR_bool must_finalize_engine;\n"));
#line 320 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_73_73, 1) = ((MR_Box) (backend_libs__export__V_75_75));
#line 320 "export.m"
    }
#line 319 "export.m"
    {
#line 319 "export.m"
      backend_libs__export__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_71_71, 0) = ((MR_Box) ((MR_String) "#if MR_THREAD_SAFE\n"));
#line 319 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_71_71, 1) = ((MR_Box) (backend_libs__export__V_73_73));
#line 319 "export.m"
    }
#line 318 "export.m"
    {
#line 318 "export.m"
      backend_libs__export__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_69_69, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 318 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_69_69, 1) = ((MR_Box) (backend_libs__export__V_71_71));
#line 318 "export.m"
    }
#line 317 "export.m"
    {
#line 317 "export.m"
      backend_libs__export__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 0) = ((MR_Box) ((MR_String) "\tMR_Word c_regs[MR_NUM_REAL_REGS];\n"));
#line 317 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 1) = ((MR_Box) (backend_libs__export__V_69_69));
#line 317 "export.m"
    }
#line 316 "export.m"
    {
#line 316 "export.m"
      backend_libs__export__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 0) = ((MR_Box) ((MR_String) "#if MR_NUM_REAL_REGS > 0\n"));
#line 316 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 1) = ((MR_Box) (backend_libs__export__V_67_67));
#line 316 "export.m"
    }
#line 315 "export.m"
    {
#line 315 "export.m"
      backend_libs__export__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 0) = ((MR_Box) ((MR_String) ")\n{\n"));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 1) = ((MR_Box) (backend_libs__export__V_65_65));
#line 315 "export.m"
    }
#line 315 "export.m"
    {
#line 315 "export.m"
      backend_libs__export__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_62_62, 0) = ((MR_Box) (backend_libs__export__ArgDecls_20));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_62_62, 1) = ((MR_Box) (backend_libs__export__V_63_63));
#line 315 "export.m"
    }
#line 315 "export.m"
    {
#line 315 "export.m"
      backend_libs__export__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 0) = ((MR_Box) ((MR_String) "("));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 1) = ((MR_Box) (backend_libs__export__V_62_62));
#line 315 "export.m"
    }
#line 315 "export.m"
    {
#line 315 "export.m"
      backend_libs__export__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 0) = ((MR_Box) (backend_libs__export__C_Function_12));
#line 315 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_59_59, 1) = ((MR_Box) (backend_libs__export__V_60_60));
#line 315 "export.m"
    }
#line 314 "export.m"
    {
#line 314 "export.m"
      backend_libs__export__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_57_57, 0) = ((MR_Box) ((MR_String) "\n"));
#line 314 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_57_57, 1) = ((MR_Box) (backend_libs__export__V_59_59));
#line 314 "export.m"
    }
#line 314 "export.m"
    {
#line 314 "export.m"
      backend_libs__export__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 0) = ((MR_Box) (backend_libs__export__C_RetType_15));
#line 314 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_56_56, 1) = ((MR_Box) (backend_libs__export__V_57_57));
#line 314 "export.m"
    }
#line 313 "export.m"
    {
#line 313 "export.m"
      backend_libs__export__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_54_54, 0) = ((MR_Box) ((MR_String) "\n"));
#line 313 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_54_54, 1) = ((MR_Box) (backend_libs__export__V_56_56));
#line 313 "export.m"
    }
#line 312 "export.m"
    {
#line 312 "export.m"
      backend_libs__export__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_52_52, 0) = ((MR_Box) ((MR_String) ");\n"));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_52_52, 1) = ((MR_Box) (backend_libs__export__V_54_54));
#line 312 "export.m"
    }
#line 312 "export.m"
    {
#line 312 "export.m"
      backend_libs__export__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_51_51, 0) = ((MR_Box) (backend_libs__export__ArgDecls_20));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_51_51, 1) = ((MR_Box) (backend_libs__export__V_52_52));
#line 312 "export.m"
    }
#line 312 "export.m"
    {
#line 312 "export.m"
      backend_libs__export__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_49_49, 0) = ((MR_Box) ((MR_String) "("));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_49_49, 1) = ((MR_Box) (backend_libs__export__V_51_51));
#line 312 "export.m"
    }
#line 312 "export.m"
    {
#line 312 "export.m"
      backend_libs__export__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_48_48, 0) = ((MR_Box) (backend_libs__export__C_Function_12));
#line 312 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_48_48, 1) = ((MR_Box) (backend_libs__export__V_49_49));
#line 312 "export.m"
    }
#line 311 "export.m"
    {
#line 311 "export.m"
      backend_libs__export__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_46_46, 0) = ((MR_Box) ((MR_String) "\n"));
#line 311 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_46_46, 1) = ((MR_Box) (backend_libs__export__V_48_48));
#line 311 "export.m"
    }
#line 311 "export.m"
    {
#line 311 "export.m"
      backend_libs__export__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_45_45, 0) = ((MR_Box) (backend_libs__export__C_RetType_15));
#line 311 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_45_45, 1) = ((MR_Box) (backend_libs__export__V_46_46));
#line 311 "export.m"
    }
#line 310 "export.m"
    {
#line 310 "export.m"
      backend_libs__export__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_43_43, 0) = ((MR_Box) ((MR_String) "\n"));
#line 310 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_43_43, 1) = ((MR_Box) (backend_libs__export__V_45_45));
#line 310 "export.m"
    }
#line 309 "export.m"
    {
#line 309 "export.m"
      backend_libs__export__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_41_41, 0) = ((MR_Box) ((MR_String) ");\n"));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_41_41, 1) = ((MR_Box) (backend_libs__export__V_43_43));
#line 309 "export.m"
    }
#line 309 "export.m"
    {
#line 309 "export.m"
      backend_libs__export__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_40_40, 0) = ((MR_Box) (backend_libs__export__ProcLabelString_24));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_40_40, 1) = ((MR_Box) (backend_libs__export__V_41_41));
#line 309 "export.m"
    }
#line 309 "export.m"
    {
#line 309 "export.m"
      backend_libs__export__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 0) = ((MR_Box) ((MR_String) "("));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_38_38, 1) = ((MR_Box) (backend_libs__export__V_40_40));
#line 309 "export.m"
    }
#line 309 "export.m"
    {
#line 309 "export.m"
      backend_libs__export__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_37_37, 0) = ((MR_Box) (backend_libs__export__DeclareString_14));
#line 309 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_37_37, 1) = ((MR_Box) (backend_libs__export__V_38_38));
#line 309 "export.m"
    }
#line 308 "export.m"
    {
#line 308 "export.m"
      backend_libs__export__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 0) = ((MR_Box) ((MR_String) "\n"));
#line 308 "export.m"
      MR_hl_field(MR_mktag(1), backend_libs__export__V_35_35, 1) = ((MR_Box) (backend_libs__export__V_37_37));
#line 308 "export.m"
    }
#line 307 "export.m"
    {
#line 307 "export.m"
      mercury__string__append_list_2_p_0(backend_libs__export__V_35_35, &backend_libs__export__Code_25);
    }
#line 358 "export.m"
    *backend_libs__export__ExportDefn_8 = (MR_Word) backend_libs__export__Code_25;
#line 288 "export.m"
  }
#line 285 "export.m"
}

#line 170 "export.m"
static void MR_CALL 
backend_libs__export__export_procs_to_c_4_p_0(
#line 170 "export.m"
  MR_Word backend_libs__export__HeadVar__1_1,
#line 170 "export.m"
  MR_Word backend_libs__export__HeadVar__2_2,
#line 170 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 170 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4)
#line 170 "export.m"
{
#line 173 "export.m"
  {
#line 173 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 173 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "export.m"
    else
#line 175 "export.m"
      {
#line 175 "export.m"
        MR_Word backend_libs__export__ExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 175 "export.m"
        MR_Word backend_libs__export__ExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 175 "export.m"
        MR_Word backend_libs__export__ExportDefn_11;
#line 175 "export.m"
        MR_Word backend_libs__export__ExportDefns_12;

#line 176 "export.m"
        {
#line 176 "export.m"
          backend_libs__export__export_proc_to_c_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__HeadVar__2_2, backend_libs__export__ExportedProc_9, &backend_libs__export__ExportDefn_11);
        }
#line 177 "export.m"
        {
#line 177 "export.m"
          backend_libs__export__export_procs_to_c_4_p_0(backend_libs__export__HeadVar__1_1, backend_libs__export__HeadVar__2_2, backend_libs__export__ExportedProcs_10, &backend_libs__export__ExportDefns_12);
        }
#line 175 "export.m"
        {
#line 175 "export.m"
          MR_Word base;
#line 175 "export.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "export.m"
          *backend_libs__export__HeadVar__4_4 = base;
#line 175 "export.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__ExportDefn_11));
#line 175 "export.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__ExportDefns_12));
#line 175 "export.m"
        }
#line 175 "export.m"
      }
#line 173 "export.m"
  }
#line 170 "export.m"
}

#line 133 "export.m"
static void MR_CALL 
backend_libs__export__get_foreign_export_decls_loop_4_p_0(
#line 133 "export.m"
  MR_Word backend_libs__export__ModuleInfo_1,
#line 133 "export.m"
  MR_Word backend_libs__export__Preds_2,
#line 133 "export.m"
  MR_Word backend_libs__export__HeadVar__3_3,
#line 133 "export.m"
  MR_Word * backend_libs__export__HeadVar__4_4)
#line 133 "export.m"
{
#line 136 "export.m"
  {
#line 136 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 136 "export.m"
    if ((backend_libs__export__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "export.m"
      *backend_libs__export__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "export.m"
    else
#line 139 "export.m"
      {
#line 139 "export.m"
        MR_Word backend_libs__export__HeadExportedProc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 0)));
#line 139 "export.m"
        MR_Word backend_libs__export__TailExportedProcs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__export__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "export.m"
        MR_Word backend_libs__export__HeadExportDecl_11;
#line 139 "export.m"
        MR_Word backend_libs__export__TailExportDecls_12;
#line 139 "export.m"
        MR_Word backend_libs__export__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 0)));
#line 139 "export.m"
        MR_Word backend_libs__export__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 1)));
#line 139 "export.m"
        MR_Integer backend_libs__export__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 2)));
#line 139 "export.m"
        MR_String backend_libs__export__ExportName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 3)));
#line 139 "export.m"
        MR_String backend_libs__export__RetType_19;
#line 139 "export.m"
        MR_String backend_libs__export__ArgDecls_24;
#line 140 "export.m"
        MR_Word backend_libs__export___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportedProc_9, (MR_Integer) 4)));

#line 149 "export.m"
        if ((backend_libs__export__Lang_13 == (MR_Integer) 0))
#line 143 "export.m"
          {
#line 143 "export.m"
            MR_Word backend_libs__export__HeadArgInfoTypes_23;
#line 144 "export.m"
            MR_String backend_libs__export___HowToDeclare_18;
#line 144 "export.m"
            MR_String backend_libs__export___DeclareReturnVal_20;
#line 144 "export.m"
            MR_String backend_libs__export___FailureAction_21;
#line 144 "export.m"
            MR_String backend_libs__export___SuccessAction_22;

#line 144 "export.m"
            {
#line 144 "export.m"
              backend_libs__export__get_export_info_for_lang_c_10_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Preds_2, backend_libs__export__PredId_14, backend_libs__export__ProcId_15, &backend_libs__export___HowToDeclare_18, &backend_libs__export__RetType_19, &backend_libs__export___DeclareReturnVal_20, &backend_libs__export___FailureAction_21, &backend_libs__export___SuccessAction_22, &backend_libs__export__HeadArgInfoTypes_23);
            }
#line 486 "export.m"
            if ((backend_libs__export__HeadArgInfoTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "export.m"
              backend_libs__export__ArgDecls_24 = (MR_String) "void";
#line 486 "export.m"
            else
#line 488 "export.m"
              {
#line 489 "export.m"
                {
#line 489 "export.m"
                  backend_libs__export__get_argument_declarations_nonvoid_5_p_0(backend_libs__export__ModuleInfo_1, (MR_Integer) 0, (MR_Integer) 0, backend_libs__export__HeadArgInfoTypes_23, &backend_libs__export__ArgDecls_24);
                }
#line 488 "export.m"
              }
#line 143 "export.m"
          }
#line 149 "export.m"
        else
#line 154 "export.m"
          {
#line 155 "export.m"
            {
#line 155 "export.m"
              mercury__require__sorry_3_p_0((MR_String) "backend_libs.export", (MR_String) "predicate \140backend_libs.export.get_foreign_export_decls_loop\'/4", (MR_String) ":- pragma foreign_export for non-C backends.");
#line 155 "export.m"
              return;
            }
#line 154 "export.m"
          }
#line 157 "export.m"
        {
#line 157 "export.m"
          backend_libs__export__HeadExportDecl_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 157 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 0) = ((MR_Box) (backend_libs__export__Lang_13));
#line 157 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 1) = ((MR_Box) (backend_libs__export__RetType_19));
#line 157 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 2) = ((MR_Box) (backend_libs__export__ExportName_16));
#line 157 "export.m"
          MR_hl_field(MR_mktag(0), backend_libs__export__HeadExportDecl_11, 3) = ((MR_Box) (backend_libs__export__ArgDecls_24));
#line 157 "export.m"
        }
#line 158 "export.m"
        {
#line 158 "export.m"
          backend_libs__export__get_foreign_export_decls_loop_4_p_0(backend_libs__export__ModuleInfo_1, backend_libs__export__Preds_2, backend_libs__export__TailExportedProcs_10, &backend_libs__export__TailExportDecls_12);
        }
#line 139 "export.m"
        {
#line 139 "export.m"
          MR_Word base;
#line 139 "export.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "export.m"
          *backend_libs__export__HeadVar__4_4 = base;
#line 139 "export.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__export__HeadExportDecl_11));
#line 139 "export.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__export__TailExportDecls_12));
#line 139 "export.m"
        }
#line 139 "export.m"
      }
#line 136 "export.m"
  }
#line 133 "export.m"
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
    if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_Word") == 0))
#line 989 "export.m"
      backend_libs__export__succeeded = MR_TRUE;
#line 989 "export.m"
    else
#line 989 "export.m"
      if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_TypeInfo") == 0))
#line 990 "export.m"
        backend_libs__export__succeeded = MR_TRUE;
#line 989 "export.m"
      else
#line 989 "export.m"
        if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_TypeCtorInfo") == 0))
#line 991 "export.m"
          backend_libs__export__succeeded = MR_TRUE;
#line 989 "export.m"
        else
#line 989 "export.m"
          if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_TypeClassInfo") == 0))
#line 992 "export.m"
            backend_libs__export__succeeded = MR_TRUE;
#line 989 "export.m"
          else
#line 989 "export.m"
            if ((strcmp(backend_libs__export__HeadVar__1_1, (MR_String) "MR_BaseTypeclassInfo") == 0))
#line 993 "export.m"
              backend_libs__export__succeeded = MR_TRUE;
#line 989 "export.m"
            else
#line 989 "export.m"
              backend_libs__export__succeeded = MR_FALSE;
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
#line 665 "export.m"
  {
#line 665 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 665 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Type_7)) == (MR_mktag((MR_Integer) 2))))
#line 665 "export.m"
      {
#line 665 "export.m"
        MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_7, (MR_Integer) 0)));

#line 669 "export.m"
        if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 1))
#line 670 "export.m"
          {
#line 670 "export.m"
            MR_Word backend_libs__export__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 0)));
#line 672 "export.m"
            MR_Integer backend_libs__export__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__SourceArgLoc_5, (MR_Integer) 1)));

#line 674 "export.m"
            if ((backend_libs__export__V_35_35 == (MR_Integer) 1))
#line 676 "export.m"
              *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 674 "export.m"
            else
#line 672 "export.m"
              {
#line 672 "export.m"
                MR_String backend_libs__export__V_31_31;

#line 673 "export.m"
                {
#line 673 "export.m"
                  backend_libs__export__V_31_31 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_6, (MR_String) ")");
                }
#line 673 "export.m"
                {
#line 673 "export.m"
                  *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", backend_libs__export__V_31_31);
                }
#line 672 "export.m"
              }
#line 670 "export.m"
          }
#line 669 "export.m"
        else
#line 669 "export.m"
          if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 2))
#line 667 "export.m"
            {
#line 668 "export.m"
              {
#line 668 "export.m"
                *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", backend_libs__export__Rval_6);
              }
#line 667 "export.m"
            }
#line 669 "export.m"
          else
#line 681 "export.m"
            *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 665 "export.m"
      }
#line 665 "export.m"
    else
#line 691 "export.m"
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_6;
#line 665 "export.m"
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
#line 629 "export.m"
  {
#line 629 "export.m"
    MR_bool backend_libs__export__succeeded;

#line 629 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Type_6)) == (MR_mktag((MR_Integer) 2))))
#line 629 "export.m"
      {
#line 629 "export.m"
        MR_Word backend_libs__export__BuiltinType_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__export__Type_6, (MR_Integer) 0)));

#line 633 "export.m"
        if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 3))
#line 643 "export.m"
          {
#line 647 "export.m"
            {
#line 647 "export.m"
              *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_UnsignedChar) ", backend_libs__export__Rval_5);
            }
#line 643 "export.m"
          }
#line 633 "export.m"
        else
#line 633 "export.m"
          if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 1))
#line 634 "export.m"
            {
#line 634 "export.m"
              MR_Word backend_libs__export__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 0)));
#line 636 "export.m"
              MR_Integer backend_libs__export__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__export__TargetArgLoc_7, (MR_Integer) 1)));

#line 638 "export.m"
              if ((backend_libs__export__V_36_36 == (MR_Integer) 1))
#line 640 "export.m"
                *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 638 "export.m"
              else
#line 636 "export.m"
                {
#line 636 "export.m"
                  MR_String backend_libs__export__V_32_32;

#line 637 "export.m"
                  {
#line 637 "export.m"
                    backend_libs__export__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__export__Rval_5, (MR_String) ")");
                  }
#line 637 "export.m"
                  {
#line 637 "export.m"
                    *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", backend_libs__export__V_32_32);
                  }
#line 636 "export.m"
                }
#line 634 "export.m"
            }
#line 633 "export.m"
          else
#line 633 "export.m"
            if ((backend_libs__export__BuiltinType_9 == (MR_Integer) 0))
#line 649 "export.m"
              *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 633 "export.m"
            else
#line 631 "export.m"
              {
#line 632 "export.m"
                {
#line 632 "export.m"
                  *backend_libs__export__ConvertedRval_8 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", backend_libs__export__Rval_5);
                }
#line 631 "export.m"
              }
#line 629 "export.m"
      }
#line 629 "export.m"
    else
#line 659 "export.m"
      *backend_libs__export__ConvertedRval_8 = backend_libs__export__Rval_5;
#line 629 "export.m"
  }
#line 65 "export.m"
}

#line 765 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_4(
#line 765 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 765 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 765 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 765 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 765 "export.m"
{
#line 765 "export.m"
  {
#line 765 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 765 "export.m"
    {
#line 765 "export.m"
      backend_libs__export__output_foreign_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 765 "export.m"
      return;
    }
#line 765 "export.m"
  }
#line 765 "export.m"
}

#line 762 "export.m"
static void MR_CALL 
backend_libs__export__produce_header_file_5_p_0_3(
#line 762 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 762 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1,
#line 762 "export.m"
  MR_Box backend_libs__export__wrapper_arg_2,
#line 762 "export.m"
  MR_Box * backend_libs__export__wrapper_arg_3)
#line 762 "export.m"
{
#line 762 "export.m"
  {
#line 762 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 762 "export.m"
    {
#line 762 "export.m"
      backend_libs__export__output_exported_c_enum_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
#line 762 "export.m"
      return;
    }
#line 762 "export.m"
  }
#line 762 "export.m"
}

#line 749 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_2(
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
      return backend_libs__export__succeeded = parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__export__wrapper_arg_1));
    }
#line 749 "export.m"
    return backend_libs__export__succeeded;
#line 749 "export.m"
  }
#line 749 "export.m"
}

#line 748 "export.m"
static MR_bool MR_CALL 
backend_libs__export__produce_header_file_5_p_0_1(
#line 748 "export.m"
  MR_Box backend_libs__export__closure_arg,
#line 748 "export.m"
  MR_Box backend_libs__export__wrapper_arg_1)
#line 748 "export.m"
{
#line 748 "export.m"
  {
#line 748 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 748 "export.m"
    MR_Box backend_libs__export__closure = backend_libs__export__closure_arg;

#line 748 "export.m"
    {
#line 748 "export.m"
      return backend_libs__export__succeeded = backend_libs__export__exported_enum_is_for_c_1_p_0(((MR_Word) backend_libs__export__wrapper_arg_1));
    }
#line 748 "export.m"
    return backend_libs__export__succeeded;
#line 748 "export.m"
  }
#line 748 "export.m"
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
#line 700 "export.m"
  {
#line 700 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 700 "export.m"
    MR_Word backend_libs__export__ForeignDeclCodes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 0)));
#line 700 "export.m"
    MR_Word backend_libs__export__C_ExportDecls_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__ForeignExportDecls_7, (MR_Integer) 1)));
#line 700 "export.m"
    MR_Word backend_libs__export__ExportedEnums_12;
#line 700 "export.m"
    MR_Word backend_libs__export__Globals_14;
#line 700 "export.m"
    MR_String backend_libs__export__FileName_15;
#line 700 "export.m"
    MR_Word backend_libs__export__Result_16;
#line 700 "export.m"
    MR_String backend_libs__export__V_34_34;

#line 705 "export.m"
    {
#line 705 "export.m"
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__ExportedEnums_12);
    }
#line 707 "export.m"
    {
#line 707 "export.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__export__ModuleInfo_6, &backend_libs__export__Globals_14);
    }
#line 708 "export.m"
    {
#line 708 "export.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_14, backend_libs__export__ModuleName_8, (MR_String) ".mh", (MR_Integer) 0, &backend_libs__export__FileName_15);
    }
#line 710 "export.m"
    {
#line 710 "export.m"
      backend_libs__export__V_34_34 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_15, (MR_String) ".tmp");
    }
#line 710 "export.m"
    {
#line 710 "export.m"
      mercury__io__open_output_4_p_0(backend_libs__export__V_34_34, &backend_libs__export__Result_16);
    }
#line 783 "export.m"
    if (((MR_tag((MR_Word) backend_libs__export__Result_16)) == (MR_mktag((MR_Integer) 1))))
#line 784 "export.m"
      {
#line 784 "export.m"
        MR_String backend_libs__export__ProgName_29;
#line 784 "export.m"
        MR_String backend_libs__export__V_44_44;

#line 785 "export.m"
        {
#line 785 "export.m"
          mercury__io__progname_base_4_p_0((MR_String) "export.m", &backend_libs__export__ProgName_29);
        }
#line 786 "export.m"
        {
#line 786 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 787 "export.m"
        {
#line 787 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__ProgName_29);
        }
#line 788 "export.m"
        {
#line 788 "export.m"
          mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
        }
#line 789 "export.m"
        {
#line 789 "export.m"
          backend_libs__export__V_44_44 = mercury__string__f_43_43_2_f_0(backend_libs__export__FileName_15, (MR_String) ".tmp");
        }
#line 789 "export.m"
        {
#line 789 "export.m"
          mercury__io__write_string_3_p_0(backend_libs__export__V_44_44);
        }
#line 790 "export.m"
        {
#line 790 "export.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
        }
#line 791 "export.m"
        {
#line 791 "export.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 791 "export.m"
          return;
        }
#line 784 "export.m"
      }
#line 783 "export.m"
    else
#line 712 "export.m"
      {
#line 712 "export.m"
        MR_Word backend_libs__export__TypeCtorInfo_172_172;
#line 712 "export.m"
        MR_Word backend_libs__export__TypeCtorInfo_174_174;
#line 712 "export.m"
        MR_Word backend_libs__export__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__export__Result_16, (MR_Integer) 0)));
#line 712 "export.m"
        MR_Word backend_libs__export__OutputStream_18;
#line 712 "export.m"
        MR_String backend_libs__export__SourceFileName_19;
#line 712 "export.m"
        MR_String backend_libs__export__Version_20;
#line 712 "export.m"
        MR_String backend_libs__export__Fullarch_21;
#line 712 "export.m"
        MR_String backend_libs__export__MangledModuleName_22;
#line 712 "export.m"
        MR_String backend_libs__export__UppercaseModuleName_23;
#line 712 "export.m"
        MR_String backend_libs__export__GuardMacroName_24;
#line 712 "export.m"
        MR_Word backend_libs__export__CExportedEnums_25;
#line 712 "export.m"
        MR_Word backend_libs__export__CForeignDeclCodes_26;
#line 712 "export.m"
        MR_Word backend_libs__export__V_55_55;
#line 712 "export.m"
        MR_Word backend_libs__export__V_58_58;
#line 712 "export.m"
        MR_Word backend_libs__export__V_60_60;
#line 712 "export.m"
        MR_Word backend_libs__export__V_61_61;
#line 712 "export.m"
        MR_Word backend_libs__export__V_63_63;
#line 712 "export.m"
        MR_Word backend_libs__export__V_65_65;
#line 712 "export.m"
        MR_Word backend_libs__export__V_67_67;
#line 712 "export.m"
        MR_Word backend_libs__export__V_68_68;
#line 712 "export.m"
        MR_Word backend_libs__export__V_70_70;
#line 712 "export.m"
        MR_Word backend_libs__export__V_72_72;
#line 712 "export.m"
        MR_Word backend_libs__export__V_81_81;
#line 712 "export.m"
        MR_Word backend_libs__export__V_84_84;
#line 712 "export.m"
        MR_Word backend_libs__export__V_85_85;
#line 712 "export.m"
        MR_Word backend_libs__export__V_87_87;
#line 712 "export.m"
        MR_Word backend_libs__export__V_89_89;
#line 712 "export.m"
        MR_Word backend_libs__export__V_151_151;
#line 712 "export.m"
        MR_Word backend_libs__export__V_154_154;
#line 712 "export.m"
        MR_Word backend_libs__export__V_156_156;
#line 712 "export.m"
        MR_Word backend_libs__export__V_158_158;
#line 712 "export.m"
        MR_Word backend_libs__export__V_160_160;
#line 712 "export.m"
        MR_Word backend_libs__export__V_162_162;
#line 712 "export.m"
        MR_Word backend_libs__export__V_164_164;
#line 779 "export.m"
        MR_Word backend_libs__export__V_27_27;

#line 713 "export.m"
        {
#line 713 "export.m"
          mercury__io__set_output_stream_4_p_0(backend_libs__export__FileStream_17, &backend_libs__export__OutputStream_18);
        }
#line 714 "export.m"
        {
#line 714 "export.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(backend_libs__export__Globals_14, backend_libs__export__ModuleName_8, (MR_String) ".m", (MR_Integer) 1, &backend_libs__export__SourceFileName_19);
        }
#line 716 "export.m"
        {
#line 716 "export.m"
          mercury__library__version_2_p_0(&backend_libs__export__Version_20, &backend_libs__export__Fullarch_21);
        }
#line 722 "export.m"
        {
#line 722 "export.m"
          backend_libs__export__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_72_72, 0) = ((MR_Box) (backend_libs__export__Fullarch_21));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[3])));
#line 722 "export.m"
        }
#line 722 "export.m"
        {
#line 722 "export.m"
          backend_libs__export__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 0) = ((MR_Box) ((MR_String) "** configured for "));
#line 722 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_70_70, 1) = ((MR_Box) (backend_libs__export__V_72_72));
#line 722 "export.m"
        }
#line 721 "export.m"
        {
#line 721 "export.m"
          backend_libs__export__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 0) = ((MR_Box) ((MR_String) "\n"));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_68_68, 1) = ((MR_Box) (backend_libs__export__V_70_70));
#line 721 "export.m"
        }
#line 721 "export.m"
        {
#line 721 "export.m"
          backend_libs__export__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 0) = ((MR_Box) (backend_libs__export__Version_20));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_67_67, 1) = ((MR_Box) (backend_libs__export__V_68_68));
#line 721 "export.m"
        }
#line 721 "export.m"
        {
#line 721 "export.m"
          backend_libs__export__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 0) = ((MR_Box) ((MR_String) "** version "));
#line 721 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_65_65, 1) = ((MR_Box) (backend_libs__export__V_67_67));
#line 721 "export.m"
        }
#line 720 "export.m"
        {
#line 720 "export.m"
          backend_libs__export__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
#line 720 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_63_63, 1) = ((MR_Box) (backend_libs__export__V_65_65));
#line 720 "export.m"
        }
#line 719 "export.m"
        {
#line 719 "export.m"
          backend_libs__export__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_61_61, 1) = ((MR_Box) (backend_libs__export__V_63_63));
#line 719 "export.m"
        }
#line 719 "export.m"
        {
#line 719 "export.m"
          backend_libs__export__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 0) = ((MR_Box) (backend_libs__export__SourceFileName_19));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_60_60, 1) = ((MR_Box) (backend_libs__export__V_61_61));
#line 719 "export.m"
        }
#line 719 "export.m"
        {
#line 719 "export.m"
          backend_libs__export__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_58_58, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
#line 719 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_58_58, 1) = ((MR_Box) (backend_libs__export__V_60_60));
#line 719 "export.m"
        }
#line 718 "export.m"
        {
#line 718 "export.m"
          backend_libs__export__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_55_55, 0) = ((MR_Box) ((MR_String) "/*\n"));
#line 718 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_55_55, 1) = ((MR_Box) (backend_libs__export__V_58_58));
#line 718 "export.m"
        }
#line 717 "export.m"
        {
#line 717 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_55_55);
        }
#line 725 "export.m"
        {
#line 725 "export.m"
          backend_libs__export__MangledModuleName_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__export__ModuleName_8);
        }
#line 726 "export.m"
        {
#line 726 "export.m"
          mercury__string__to_upper_2_p_0(backend_libs__export__MangledModuleName_22, &backend_libs__export__UppercaseModuleName_23);
        }
#line 727 "export.m"
        {
#line 727 "export.m"
          backend_libs__export__GuardMacroName_24 = mercury__string__f_43_43_2_f_0(backend_libs__export__UppercaseModuleName_23, (MR_String) "_MH");
        }
#line 730 "export.m"
        {
#line 730 "export.m"
          backend_libs__export__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_89_89, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[20])));
#line 730 "export.m"
        }
#line 730 "export.m"
        {
#line 730 "export.m"
          backend_libs__export__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_87_87, 0) = ((MR_Box) ((MR_String) "#define "));
#line 730 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_87_87, 1) = ((MR_Box) (backend_libs__export__V_89_89));
#line 730 "export.m"
        }
#line 729 "export.m"
        {
#line 729 "export.m"
          backend_libs__export__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 0) = ((MR_Box) ((MR_String) "\n"));
#line 729 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_85_85, 1) = ((MR_Box) (backend_libs__export__V_87_87));
#line 729 "export.m"
        }
#line 729 "export.m"
        {
#line 729 "export.m"
          backend_libs__export__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_84_84, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 729 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_84_84, 1) = ((MR_Box) (backend_libs__export__V_85_85));
#line 729 "export.m"
        }
#line 729 "export.m"
        {
#line 729 "export.m"
          backend_libs__export__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 0) = ((MR_Box) ((MR_String) "#ifndef "));
#line 729 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_81_81, 1) = ((MR_Box) (backend_libs__export__V_84_84));
#line 729 "export.m"
        }
#line 728 "export.m"
        {
#line 728 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_81_81);
        }
#line 5501 "backend_libs.export.c"
        backend_libs__export__TypeCtorInfo_172_172 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0;
#line 748 "export.m"
        {
#line 748 "export.m"
          mercury__list__filter_3_p_0(backend_libs__export__TypeCtorInfo_172_172, (MR_Word) &backend_libs__export_scalar_common_1[2], backend_libs__export__ExportedEnums_12, &backend_libs__export__CExportedEnums_25);
        }
#line 5508 "backend_libs.export.c"
        backend_libs__export__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
#line 749 "export.m"
        {
#line 749 "export.m"
          mercury__list__filter_3_p_0(backend_libs__export__TypeCtorInfo_174_174, (MR_Word) &backend_libs__export_scalar_common_3[1], backend_libs__export__ForeignDeclCodes_10, &backend_libs__export__CForeignDeclCodes_26);
        }
#line 752 "export.m"
        backend_libs__export__succeeded = (backend_libs__export__CExportedEnums_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "export.m"
        if (backend_libs__export__succeeded)
#line 753 "export.m"
          backend_libs__export__succeeded = (backend_libs__export__CForeignDeclCodes_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "export.m"
        if (backend_libs__export__succeeded)
#line 753 "export.m"
          {
#line 753 "export.m"
          }
#line 758 "export.m"
        else
#line 761 "export.m"
          {
#line 761 "export.m"
            MR_Word backend_libs__export__TypeCtorInfo_178_178;
#line 761 "export.m"
            MR_Word backend_libs__export__V_128_128;
#line 761 "export.m"
            MR_Word backend_libs__export__V_131_131;
#line 761 "export.m"
            MR_String backend_libs__export__V_132_132;
#line 761 "export.m"
            MR_Word backend_libs__export__V_133_133;
#line 761 "export.m"
            MR_Word backend_libs__export__V_135_135;
#line 761 "export.m"
            MR_Word backend_libs__export__V_137_137;
#line 761 "export.m"
            MR_String backend_libs__export__V_138_138;
#line 761 "export.m"
            MR_Word backend_libs__export__V_142_142;
#line 761 "export.m"
            MR_Word backend_libs__export__V_144_144;
#line 762 "export.m"
            MR_Box backend_libs__export__conv0_STATE_VARIABLE_IO_143_143;
#line 764 "export.m"
            MR_Box backend_libs__export__conv1_STATE_VARIABLE_IO_145_145;

#line 760 "export.m"
            {
#line 760 "export.m"
              backend_libs__export__V_132_132 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
            }
#line 761 "export.m"
            {
#line 761 "export.m"
              backend_libs__export__V_138_138 = backend_libs__foreign__decl_guard_1_f_0(backend_libs__export__ModuleName_8);
            }
#line 761 "export.m"
            {
#line 761 "export.m"
              backend_libs__export__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 0) = ((MR_Box) (backend_libs__export__V_138_138));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[4])));
#line 761 "export.m"
            }
#line 761 "export.m"
            {
#line 761 "export.m"
              backend_libs__export__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 0) = ((MR_Box) ((MR_String) "#define "));
#line 761 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_135_135, 1) = ((MR_Box) (backend_libs__export__V_137_137));
#line 761 "export.m"
            }
#line 760 "export.m"
            {
#line 760 "export.m"
              backend_libs__export__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 0) = ((MR_Box) ((MR_String) "\n"));
#line 760 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_133_133, 1) = ((MR_Box) (backend_libs__export__V_135_135));
#line 760 "export.m"
            }
#line 760 "export.m"
            {
#line 760 "export.m"
              backend_libs__export__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 0) = ((MR_Box) (backend_libs__export__V_132_132));
#line 760 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_131_131, 1) = ((MR_Box) (backend_libs__export__V_133_133));
#line 760 "export.m"
            }
#line 760 "export.m"
            {
#line 760 "export.m"
              backend_libs__export__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 0) = ((MR_Box) ((MR_String) "#ifndef "));
#line 760 "export.m"
              MR_hl_field(MR_mktag(1), backend_libs__export__V_128_128, 1) = ((MR_Box) (backend_libs__export__V_131_131));
#line 760 "export.m"
            }
#line 759 "export.m"
            {
#line 759 "export.m"
              mercury__io__write_strings_3_p_0(backend_libs__export__V_128_128);
            }
#line 762 "export.m"
            {
#line 762 "export.m"
              backend_libs__export__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 762 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 0) = ((MR_Box) (&backend_libs__export_scalar_common_5[0]));
#line 762 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_3));
#line 762 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_142_142, 3) = ((MR_Box) (backend_libs__export__ModuleInfo_6));
#line 762 "export.m"
            }
#line 5635 "backend_libs.export.c"
            backend_libs__export__TypeCtorInfo_178_178 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 762 "export.m"
            {
#line 762 "export.m"
              mercury__list__foldl_4_p_2(backend_libs__export__TypeCtorInfo_172_172, backend_libs__export__TypeCtorInfo_178_178, backend_libs__export__V_142_142, backend_libs__export__CExportedEnums_25, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv0_STATE_VARIABLE_IO_143_143);
            }
#line 765 "export.m"
            {
#line 765 "export.m"
              backend_libs__export__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 765 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 0) = ((MR_Box) (&backend_libs__export_scalar_common_7[0]));
#line 765 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 1) = ((MR_Box) (backend_libs__export__produce_header_file_5_p_0_4));
#line 765 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 765 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 3) = ((MR_Box) (backend_libs__export__Globals_14));
#line 765 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 4) = ((MR_Box) (backend_libs__export__SourceFileName_19));
#line 765 "export.m"
              MR_hl_field(MR_mktag(0), backend_libs__export__V_144_144, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_6[0])));
#line 765 "export.m"
            }
#line 764 "export.m"
            {
#line 764 "export.m"
              mercury__list__foldl_4_p_2(backend_libs__export__TypeCtorInfo_174_174, backend_libs__export__TypeCtorInfo_178_178, backend_libs__export__V_144_144, backend_libs__export__CForeignDeclCodes_26, ((MR_Box) ((MR_Integer) 0)), &backend_libs__export__conv1_STATE_VARIABLE_IO_145_145);
            }
#line 768 "export.m"
            {
#line 768 "export.m"
              mercury__io__write_string_3_p_0((MR_String) "\n#endif\n");
            }
#line 761 "export.m"
          }
#line 771 "export.m"
        {
#line 771 "export.m"
          backend_libs__export__produce_header_file_2_3_p_0(backend_libs__export__C_ExportDecls_11);
        }
#line 778 "export.m"
        {
#line 778 "export.m"
          backend_libs__export__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_164_164, 0) = ((MR_Box) (backend_libs__export__GuardMacroName_24));
#line 778 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__export_scalar_common_2[25])));
#line 778 "export.m"
        }
#line 778 "export.m"
        {
#line 778 "export.m"
          backend_libs__export__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_162_162, 0) = ((MR_Box) ((MR_String) "#endif /* "));
#line 778 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_162_162, 1) = ((MR_Box) (backend_libs__export__V_164_164));
#line 778 "export.m"
        }
#line 777 "export.m"
        {
#line 777 "export.m"
          backend_libs__export__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_160_160, 0) = ((MR_Box) ((MR_String) "\n"));
#line 777 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_160_160, 1) = ((MR_Box) (backend_libs__export__V_162_162));
#line 777 "export.m"
        }
#line 776 "export.m"
        {
#line 776 "export.m"
          backend_libs__export__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_158_158, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 776 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_158_158, 1) = ((MR_Box) (backend_libs__export__V_160_160));
#line 776 "export.m"
        }
#line 775 "export.m"
        {
#line 775 "export.m"
          backend_libs__export__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_156_156, 0) = ((MR_Box) ((MR_String) "}\n"));
#line 775 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_156_156, 1) = ((MR_Box) (backend_libs__export__V_158_158));
#line 775 "export.m"
        }
#line 774 "export.m"
        {
#line 774 "export.m"
          backend_libs__export__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_154_154, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
#line 774 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_154_154, 1) = ((MR_Box) (backend_libs__export__V_156_156));
#line 774 "export.m"
        }
#line 773 "export.m"
        {
#line 773 "export.m"
          backend_libs__export__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_151_151, 0) = ((MR_Box) ((MR_String) "\n"));
#line 773 "export.m"
          MR_hl_field(MR_mktag(1), backend_libs__export__V_151_151, 1) = ((MR_Box) (backend_libs__export__V_154_154));
#line 773 "export.m"
        }
#line 772 "export.m"
        {
#line 772 "export.m"
          mercury__io__write_strings_3_p_0(backend_libs__export__V_151_151);
        }
#line 779 "export.m"
        {
#line 779 "export.m"
          mercury__io__set_output_stream_4_p_0(backend_libs__export__OutputStream_18, &backend_libs__export__V_27_27);
        }
#line 780 "export.m"
        {
#line 780 "export.m"
          mercury__io__close_output_3_p_0(backend_libs__export__FileStream_17);
        }
#line 782 "export.m"
        {
#line 782 "export.m"
          parse_tree__module_cmds__update_interface_4_p_0(backend_libs__export__Globals_14, backend_libs__export__FileName_15);
#line 782 "export.m"
          return;
        }
#line 712 "export.m"
      }
#line 700 "export.m"
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
#line 163 "export.m"
  {
#line 163 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 163 "export.m"
    MR_Word backend_libs__export__ExportedProcsCord_5;
#line 163 "export.m"
    MR_Word backend_libs__export__PredicateTable_6;
#line 163 "export.m"
    MR_Word backend_libs__export__Preds_7;
#line 163 "export.m"
    MR_Word backend_libs__export__V_8_8;

#line 164 "export.m"
    {
#line 164 "export.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ExportedProcsCord_5);
    }
#line 165 "export.m"
    {
#line 165 "export.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__PredicateTable_6);
    }
#line 166 "export.m"
    {
#line 166 "export.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_6, &backend_libs__export__Preds_7);
    }
#line 168 "export.m"
    {
#line 168 "export.m"
      backend_libs__export__V_8_8 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__export__ExportedProcsCord_5);
    }
#line 167 "export.m"
    {
#line 167 "export.m"
      backend_libs__export__export_procs_to_c_4_p_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Preds_7, backend_libs__export__V_8_8, backend_libs__export__ExportedProcsCode_4);
#line 167 "export.m"
      return;
    }
#line 163 "export.m"
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
#line 120 "export.m"
  {
#line 120 "export.m"
    MR_bool backend_libs__export__succeeded;
#line 120 "export.m"
    MR_Word backend_libs__export__PredicateTable_5;
#line 120 "export.m"
    MR_Word backend_libs__export__Preds_6;
#line 120 "export.m"
    MR_Word backend_libs__export__ForeignDeclCodeCord_7;
#line 120 "export.m"
    MR_Word backend_libs__export__ForeignDeclCodes_8;
#line 120 "export.m"
    MR_Word backend_libs__export__ExportedProcsCord_9;
#line 120 "export.m"
    MR_Word backend_libs__export__ExportDecls_10;
#line 120 "export.m"
    MR_Word backend_libs__export__V_11_11;

#line 121 "export.m"
    {
#line 121 "export.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__PredicateTable_5);
    }
#line 122 "export.m"
    {
#line 122 "export.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(backend_libs__export__PredicateTable_5, &backend_libs__export__Preds_6);
    }
#line 124 "export.m"
    {
#line 124 "export.m"
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ForeignDeclCodeCord_7);
    }
#line 125 "export.m"
    {
#line 125 "export.m"
      backend_libs__export__ForeignDeclCodes_8 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__export__ForeignDeclCodeCord_7);
    }
#line 127 "export.m"
    {
#line 127 "export.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(backend_libs__export__ModuleInfo_3, &backend_libs__export__ExportedProcsCord_9);
    }
#line 129 "export.m"
    {
#line 129 "export.m"
      backend_libs__export__V_11_11 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__export__ExportedProcsCord_9);
    }
#line 128 "export.m"
    {
#line 128 "export.m"
      backend_libs__export__get_foreign_export_decls_loop_4_p_0(backend_libs__export__ModuleInfo_3, backend_libs__export__Preds_6, backend_libs__export__V_11_11, &backend_libs__export__ExportDecls_10);
    }
#line 131 "export.m"
    {
#line 131 "export.m"
      MR_Word base;
#line 131 "export.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "export.m"
      *backend_libs__export__ForeignExportDecls_4 = base;
#line 131 "export.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__export__ForeignDeclCodes_8));
#line 131 "export.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__export__ExportDecls_10));
#line 131 "export.m"
    }
#line 120 "export.m"
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
