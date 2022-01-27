/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module hlds.make_hlds.add_pragma.add_foreign_enum. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_pragma__add_foreign_enum__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__611__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_25);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__267__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_104);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__248__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_68);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_17,
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[6][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[61][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_10[1][4];


/* sealed */ struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0_s {
  const MR_String hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[8];

/* sealed */ struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0_s {
  const MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_9[4];



static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[61][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is an atomic type"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not an enumeration type"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constructors."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It has one or more non-zero arity"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not an enumeration type."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign names does not form a bijection."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the user-specified mapping between Mercury and"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be converted:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not form a bijection."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the mapping between Mercury and foreign names"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign values does not form a bijection."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the mapping between Mercury enumeration values and"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not defined in this module."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has multiple foreign_enum pragmas."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: not all the constructors of the type"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The following"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the following"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not match any of the constructors of"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: not all constructors have a foreign value."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_uppercase_export_enum_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_10[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[8] = {
  /* row 0 */   {     (MR_String) "character" },
  /* row 1 */   {     (MR_String) "float" },
  /* row 2 */   {     (MR_String) "int" },
  /* row 3 */   {     (MR_String) "string" },
  /* row 4 */   {     (MR_String) "character" },
  /* row 5 */   {     (MR_String) "float" },
  /* row 6 */   {     (MR_String) "int" },
  /* row 7 */   {     (MR_String) "string" },
};

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_9[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18;

    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 1)));
        hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 2)));
        hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 3)));
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 == (MR_Integer) 0);
      }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17 = hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.make_foreign_tag\'/8", (MR_String) "non arity zero enumeration constant.");
          return;
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21);
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22;
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 2)));
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 3)));
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 5)));
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "unqualified constructor name");
          return;
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39);
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26);
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
      }
    else
      {
        switch (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
            break;
          case (MR_Integer) 0:
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = mercury__string__to_upper_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23);
            }
            break;
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30;
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27);
    }
    switch (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;

          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29 = mercury__bool__pred_to_bool_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "foreign_export_enum for target language");
            return;
          }
        }
        break;
    }
    switch (hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__list__cons_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
          }
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33);
          }
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__lo_0;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__hi_1;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__mid_2;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__result_3;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[60])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[43])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18 == (MR_Integer) 0);
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, (MR_Integer) 0)));
            /* binary string simple lookup switch */
            hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (MR_Integer) 0;
            hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (MR_Integer) 3;
            do
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 = (((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 + hlds__make_hlds__add_pragma__add_foreign_enum__hi_1)) / (MR_Integer) 2);
                hlds__make_hlds__add_pragma__add_foreign_enum__result_3 = MR_strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153, ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[4 + hlds__make_hlds__add_pragma__add_foreign_enum__mid_2]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0);
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 == (MR_Integer) 0))
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                else
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 < (MR_Integer) 0))
                  hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 - (MR_Integer) 1);
                else
                  hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 + (MR_Integer) 1);
              }
            while ((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 <= hlds__make_hlds__add_pragma__add_foreign_enum__hi_1));
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
          label_0:;
          }
      }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[8])));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23);
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24;

            {
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24);
            }
            switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[10])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122));
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TagValues_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___CheaperTagTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeUserEq_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeDirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ReservedTag_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ReservedAddr_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___IsForeignType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 7)));

                  switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 0)));
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 1)));
                            MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;

                            if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = (MR_String) "";
                            else
                              hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40, (MR_Integer) 0)));
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117);
                            }
                            if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              {
                                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                                hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;
                              }
                            else
                              {
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, (MR_Integer) 0)));
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45;

                                {
                                  hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238);
                                }
                                if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                                else
                                  {
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, (MR_Integer) 0)));
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49;

                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46));
                                    }
                                    {
                                      hlds__hlds_module__module_info_get_exported_enums_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48);
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48));
                                    }
                                    {
                                      hlds__hlds_module__module_info_set_exported_enums_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58);
                                    }
                                  }
                              }
                            hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100;
                            MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146;

                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[16])));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115));
                            }
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                            hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 1)));
                        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;

                        if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = (MR_String) "";
                        else
                          hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40, (MR_Integer) 0)));
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117);
                        }
                        if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                            hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;
                          }
                        else
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, (MR_Integer) 0)));
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45;

                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238);
                            }
                            if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                            else
                              {
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, (MR_Integer) 0)));
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47;
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48;
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49;

                                {
                                  hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14));
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46));
                                }
                                {
                                  hlds__hlds_module__module_info_get_exported_enums_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48);
                                }
                                {
                                  hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48));
                                }
                                {
                                  hlds__hlds_module__module_info_set_exported_enums_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58);
                                }
                              }
                          }
                        hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100;
                        MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146;

                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[16])));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115));
                        }
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
                      }
                      break;
                  }
                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238;
                  else
                    {
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201;
                      MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208;

                      hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202, (MR_Integer) 0)));
                      hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202, (MR_Integer) 1)));
                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199);
                      }
                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
                      }
                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203));
                      }
                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238));
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[10])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122));
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[10])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122));
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
                  }
                }
                break;
            }
          }
        else
          {
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
          }
      }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__611__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_25)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_26;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_25));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_26;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__267__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_104)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_104));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__248__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_68)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_68));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_35;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34, (MR_Integer) 1)));

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_20, hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14);
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_21));
          }
        else
          hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_35 = hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34;
      }
    else
      hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_35 = hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34;
    return hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_35;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[42])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[44])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[59])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
    }
    {
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_26;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_26 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__611__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_26));
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15;

    {
      mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8, &hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5], hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11, ((MR_Box) ((MR_String) "constructor does not have a foreign value")), ((MR_Box) ((MR_String) "constructors do not have foreign values")));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15);
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[58])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[52])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[56]));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52));
    }
    {
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_9[0 + hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0__vct_9_f_0;

    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 0)));
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_20 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 1)));

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6);
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_20));
            }
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16));
            }
            hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9;
          }
      }
    else
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_11));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15));
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_14;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_17;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_18;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_18;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15;

        hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_foreign_enum_tag_map\'/7", (MR_String) "unqualified type name while processing foreign tags.");
          return;
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_14));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2];
    {
      mercury__list__map_foldl_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_18);
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_18 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_18);
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_19;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_17, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_19);
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_20;

            {
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_20 = mercury__bimap__forward_map_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_20));
            }
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66;

            {
              hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[40]));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_8));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
            }
            {
              mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24);
            }
            *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      {
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14, hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12 = mercury__map__to_assoc_list_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12, &hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13);
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36;

        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[35]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_7));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17));
        }
      }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv8_LambdaHeadVar__2_105;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv8_LambdaHeadVar__2_105 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__267__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv8_LambdaHeadVar__2_105));
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv6_LambdaHeadVar__2_69;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv6_LambdaHeadVar__2_69 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__248__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv6_LambdaHeadVar__2_69));
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31));
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33));
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_17,
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25;

        hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "unqualified type name for foreign_export_enum");
          return;
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154);
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1];
    {
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27);
    hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28);
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_17, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47);
        }
      else
        {
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159;
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__What_32;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63;
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79;
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_80_80;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_92_92;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99;
          MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_80_80;

          switch (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__make_hlds__add_pragma__add_foreign_enum__What_32 = (MR_String) "C identifiers.";
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 3:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "foreign_export_enum pragma for unsupported language");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              hlds__make_hlds__add_pragma__add_foreign_enum__What_32 = (MR_String) "Java identifiers.";
              break;
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "can be converted into valid ", hlds__make_hlds__add_pragma__add_foreign_enum__What_32);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[51])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59));
          }
          {
            mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, &hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[3], hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
          }
          hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_80_80 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, ((MR_Box) ((MR_String) "constructor")), ((MR_Box) ((MR_String) "constructors")));
          }
          hlds__make_hlds__add_pragma__add_foreign_enum__V_80_80 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_80_80);
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_80_80));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[29])));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[52])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159, hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_92_92 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_92_92));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46));
          }
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112;
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_113_113;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141;
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_113_113;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41 = mercury__map__keys_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41);
        }
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_113_113 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
        }
        hlds__make_hlds__add_pragma__add_foreign_enum__V_113_113 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_113_113);
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_113_113));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[54])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[53])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161, hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_35;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_35 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_35));
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_23;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_24;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15;

        hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_overrides_map\'/7", (MR_String) "unqualified type name while building override map");
          return;
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_23 = mercury__assoc_list__map_keys_only_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_23, &hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_24);
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_25;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_25 = mercury__bimap__forward_map_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_24);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_25));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51;

        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[25]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_9));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21));
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_197_197;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__lo_0;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__hi_1;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__mid_2;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__result_3;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[44])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[43])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 == (MR_Integer) 0);
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, (MR_Integer) 0)));
            /* binary string simple lookup switch */
            hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (MR_Integer) 0;
            hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (MR_Integer) 3;
            do
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 = (((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 + hlds__make_hlds__add_pragma__add_foreign_enum__hi_1)) / (MR_Integer) 2);
                hlds__make_hlds__add_pragma__add_foreign_enum__result_3 = MR_strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_197_197, ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[0 + hlds__make_hlds__add_pragma__add_foreign_enum__mid_2]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0);
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 == (MR_Integer) 0))
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                else
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 < (MR_Integer) 0))
                  hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 - (MR_Integer) 1);
                else
                  hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 + (MR_Integer) 1);
              }
            while ((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 <= hlds__make_hlds__add_pragma__add_foreign_enum__hi_1));
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
          label_0:;
          }
      }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_165_165;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[18])));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_165_165 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_165_165));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22);
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23;

            {
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23);
            }
            switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 7)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40;

                  {
                    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38);
                  }
                  {
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38, &hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 = hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                  }
                  switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42;

                            {
                              hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                            }
                            switch (hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_126_126;

                                  {
                                    hlds__make_hlds__add_pragma__add_foreign_enum__V_126_126 = hlds__status__type_status_is_imported_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9);
                                  }
                                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_126_126 == (MR_Integer) 1);
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_198_198 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;

                                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
                                  else
                                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
                                  else
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
                                }
                                break;
                            }
                            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                              {
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43;
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44;
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129;
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45;

                                {
                                  hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
                                }
                                {
                                  hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129);
                                }
                                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                                  {
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44)) == (MR_mktag((MR_Integer) 1)));
                                    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                                      hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, (MR_Integer) 0)));
                                  }
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                                  {
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_131_131;
                                    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46;
                                    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47;

                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[0]));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45));
                                    }
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_131_131 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193);
                                    }
                                    {
                                      mercury__map__foldl2_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_131_131)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
                                    }
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46);
                                    hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
                                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                      {
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48;
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49;
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50;

                                        {
                                          hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 6) = ((MR_Box) ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 | ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 << (MR_Integer) 1)))));
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37));
                                        }
                                        {
                                          hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49);
                                        }
                                        {
                                          hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49, hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50);
                                        }
                                        {
                                          hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62);
                                        }
                                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129;
                                      }
                                    else
                                      {
                                        {
                                          hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
                                        }
                                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                                      }
                                  }
                                else
                                  {
                                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129;
                                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                                  }
                              }
                            else
                              {
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;

                                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                                hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;
                                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                                  {
                                    hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
                                  }
                                else
                                  {
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_250_250;
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253;

                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139));
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_250_250 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244);
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_250_250));
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248));
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245));
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                    {
                                      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
                                    }
                                  }
                              }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337;

                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
                            }
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328);
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
                        if (!(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded))
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_114_114 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;

                            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
                        else
                          {
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_291_291;
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294;

                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[50])));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_291_291 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285);
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_291_291));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337;

                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
                        }
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328);
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
                  }
                }
                break;
            }
          }
        else
          {
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
          }
      }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeStatus_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60);
    }
  }
}

void mercury__hlds__make_hlds__add_pragma__add_foreign_enum__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_foreign_enum__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_foreign_enum__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_pragma.add_foreign_enum. */
