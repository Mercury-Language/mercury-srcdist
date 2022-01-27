/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 161 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 164 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 167 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 170 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 173 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 583 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

#line 350 "add_foreign_enum.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
#line 350 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg);

#line 308 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 308 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

#line 611 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__611__1_1_f_0(
#line 611 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25);

#line 267 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__267__1_1_f_0(
#line 267 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_104);

#line 248 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__248__1_1_f_0(
#line 248 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_68);

#line 177 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14,
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_34);

#line 635 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
#line 635 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 635 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
#line 635 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
#line 635 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
#line 635 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);

#line 611 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
#line 611 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 611 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 602 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
#line 602 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);

#line 583 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

#line 575 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
#line 575 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1);

#line 551 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
#line 551 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
#line 551 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
#line 551 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
#line 551 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
#line 551 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17);

#line 530 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
#line 530 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 530 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 530 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 530 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 530 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4);

#line 516 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
#line 516 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23,
#line 516 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24);

#line 308 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 308 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

#line 288 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
#line 288 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
#line 288 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18);

#line 267 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
#line 267 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 267 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 248 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
#line 248 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 248 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 216 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 216 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 216 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6,
#line 216 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7);

#line 198 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15,
#line 198 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_17,
#line 198 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21,
#line 198 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46,
#line 198 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47);

#line 169 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
#line 169 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 169 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 152 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11,
#line 152 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29,
#line 152 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30);

#line 441 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 441 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 441 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[6][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[61][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_10[1][4];


#line 377 "add_foreign_enum.m"
/* sealed */ struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0_s {
#line 377 "add_foreign_enum.m"
  const MR_String hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0;
#line 377 "add_foreign_enum.m"
};

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[8];

#line 578 "add_foreign_enum.m"
/* sealed */ struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0_s {
#line 578 "add_foreign_enum.m"
  const MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0__vct_9_f_0;
#line 578 "add_foreign_enum.m"
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uppercase_export_enum_0)),
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



#line 1004 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1013 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 1022 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1030 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1038 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 583 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
#line 583 "add_foreign_enum.m"
{
#line 589 "add_foreign_enum.m"
  {
#line 589 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 589 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17;
#line 592 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
#line 590 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
#line 590 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16;
#line 598 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18;
#line 595 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18;

#line 590 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 590 "add_foreign_enum.m"
      {
#line 590 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 1)));
#line 590 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 2)));
#line 590 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 3)));
#line 590 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 == (MR_Integer) 0);
#line 590 "add_foreign_enum.m"
      }
#line 592 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 591 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17 = hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
#line 592 "add_foreign_enum.m"
    else
#line 593 "add_foreign_enum.m"
      {
#line 593 "add_foreign_enum.m"
        {
#line 593 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.make_foreign_tag\'/8", (MR_String) "non arity zero enumeration constant.");
#line 593 "add_foreign_enum.m"
          return;
        }
#line 593 "add_foreign_enum.m"
      }
#line 595 "add_foreign_enum.m"
    {
#line 595 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
    }
#line 595 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 595 "add_foreign_enum.m"
      {
#line 595 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
#line 595 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 595 "add_foreign_enum.m"
      }
#line 598 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 596 "add_foreign_enum.m"
      {
#line 596 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19;

#line 596 "add_foreign_enum.m"
        {
#line 596 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 596 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 596 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9));
#line 596 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18));
#line 596 "add_foreign_enum.m"
        }
#line 597 "add_foreign_enum.m"
        {
#line 597 "add_foreign_enum.m"
          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21);
        }
#line 596 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22;
#line 596 "add_foreign_enum.m"
      }
#line 598 "add_foreign_enum.m"
    else
#line 599 "add_foreign_enum.m"
      {
#line 599 "add_foreign_enum.m"
        {
#line 599 "add_foreign_enum.m"
          MR_Word base;
#line 599 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = base;
#line 599 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17));
#line 599 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22));
#line 599 "add_foreign_enum.m"
        }
#line 599 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20;
#line 599 "add_foreign_enum.m"
      }
#line 589 "add_foreign_enum.m"
  }
#line 583 "add_foreign_enum.m"
}

#line 350 "add_foreign_enum.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
#line 350 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg)
#line 350 "add_foreign_enum.m"
{
#line 350 "add_foreign_enum.m"
  {
#line 350 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 350 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;

#line 350 "add_foreign_enum.m"
    {
#line 350 "add_foreign_enum.m"
      return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))));
    }
#line 350 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 350 "add_foreign_enum.m"
  }
#line 350 "add_foreign_enum.m"
}

#line 308 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 308 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
#line 308 "add_foreign_enum.m"
{
#line 315 "add_foreign_enum.m"
  {
#line 315 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 315 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 2)));
#line 315 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
#line 315 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24;
#line 315 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27;
#line 315 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28;
#line 315 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29;
#line 316 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 0)));
#line 316 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 1)));
#line 316 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 3)));
#line 316 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 4)));
#line 316 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 5)));
#line 333 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
#line 333 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
#line 331 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26;

#line 325 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20)) == (MR_mktag((MR_Integer) 1))))
#line 322 "add_foreign_enum.m"
      {
#line 323 "add_foreign_enum.m"
        {
#line 323 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20);
        }
#line 324 "add_foreign_enum.m"
        {
#line 324 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 324 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23));
#line 324 "add_foreign_enum.m"
        }
#line 322 "add_foreign_enum.m"
      }
#line 325 "add_foreign_enum.m"
    else
#line 326 "add_foreign_enum.m"
      {
#line 327 "add_foreign_enum.m"
        {
#line 327 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "unqualified constructor name");
#line 327 "add_foreign_enum.m"
          return;
        }
#line 326 "add_foreign_enum.m"
      }
#line 331 "add_foreign_enum.m"
    {
#line 331 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39);
    }
#line 331 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 331 "add_foreign_enum.m"
      {
#line 331 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26);
#line 331 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 331 "add_foreign_enum.m"
      }
#line 333 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 332 "add_foreign_enum.m"
      {
#line 332 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
#line 332 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
#line 332 "add_foreign_enum.m"
      }
#line 333 "add_foreign_enum.m"
    else
#line 339 "add_foreign_enum.m"
      {
#line 339 "add_foreign_enum.m"
#line 339 "add_foreign_enum.m"
        switch (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14) {
#line 339 "add_foreign_enum.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 339 "add_foreign_enum.m"
          case (MR_Integer) 1:
#line 341 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
#line 339 "add_foreign_enum.m"
            break;
#line 339 "add_foreign_enum.m"
          case (MR_Integer) 0:
#line 338 "add_foreign_enum.m"
            {
#line 338 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = mercury__string__to_upper_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23);
            }
#line 339 "add_foreign_enum.m"
            break;
#line 339 "add_foreign_enum.m"
        }
#line 339 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30;
#line 339 "add_foreign_enum.m"
      }
#line 344 "add_foreign_enum.m"
    {
#line 344 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27);
    }
#line 351 "add_foreign_enum.m"
#line 351 "add_foreign_enum.m"
    switch (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12) {
#line 351 "add_foreign_enum.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 351 "add_foreign_enum.m"
      case (MR_Integer) 0:
#line 351 "add_foreign_enum.m"
      case (MR_Integer) 1:
#line 351 "add_foreign_enum.m"
      case (MR_Integer) 2:
#line 349 "add_foreign_enum.m"
        {
#line 349 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;

#line 350 "add_foreign_enum.m"
          {
#line 350 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 350 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_10[0]));
#line 350 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1));
#line 350 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 350 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28));
#line 350 "add_foreign_enum.m"
          }
#line 350 "add_foreign_enum.m"
          {
#line 350 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29 = mercury__bool__pred_to_bool_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44);
          }
#line 349 "add_foreign_enum.m"
        }
#line 351 "add_foreign_enum.m"
        break;
#line 351 "add_foreign_enum.m"
      case (MR_Integer) 3:
#line 352 "add_foreign_enum.m"
        {
#line 353 "add_foreign_enum.m"
          {
#line 353 "add_foreign_enum.m"
            mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "foreign_export_enum for target language");
#line 353 "add_foreign_enum.m"
            return;
          }
#line 352 "add_foreign_enum.m"
        }
#line 351 "add_foreign_enum.m"
        break;
#line 351 "add_foreign_enum.m"
    }
#line 358 "add_foreign_enum.m"
#line 358 "add_foreign_enum.m"
    switch (hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29) {
#line 358 "add_foreign_enum.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 358 "add_foreign_enum.m"
      case (MR_Integer) 0:
#line 359 "add_foreign_enum.m"
        {
#line 360 "add_foreign_enum.m"
          {
#line 360 "add_foreign_enum.m"
            mercury__list__cons_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
          }
#line 359 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32;
#line 359 "add_foreign_enum.m"
        }
#line 358 "add_foreign_enum.m"
        break;
#line 358 "add_foreign_enum.m"
      case (MR_Integer) 1:
#line 356 "add_foreign_enum.m"
        {
#line 357 "add_foreign_enum.m"
          {
#line 357 "add_foreign_enum.m"
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33);
          }
#line 356 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34;
#line 356 "add_foreign_enum.m"
        }
#line 358 "add_foreign_enum.m"
        break;
#line 358 "add_foreign_enum.m"
    }
#line 315 "add_foreign_enum.m"
  }
#line 308 "add_foreign_enum.m"
}

#line 18 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57,
#line 18 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59,
#line 18 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60)
#line 18 "add_foreign_enum.m"
{
#line 45 "add_foreign_enum.m"
  {
#line 45 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 0)));
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 1)));
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 2)));
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 3)));
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 0)));
#line 45 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 1)));
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19;
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20;
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63;
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66;
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69;
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;
#line 45 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71;
#line 56 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153;
#line 58 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__lo_0;
#line 58 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__hi_1;
#line 58 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__mid_2;
#line 58 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__result_3;

#line 49 "add_foreign_enum.m"
    {
#line 49 "add_foreign_enum.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19);
    }
#line 52 "add_foreign_enum.m"
    {
#line 52 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17));
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18));
#line 52 "add_foreign_enum.m"
    }
#line 52 "add_foreign_enum.m"
    {
#line 52 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71));
#line 52 "add_foreign_enum.m"
    }
#line 52 "add_foreign_enum.m"
    {
#line 52 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
#line 52 "add_foreign_enum.m"
    }
#line 51 "add_foreign_enum.m"
    {
#line 51 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 51 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
#line 51 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69));
#line 51 "add_foreign_enum.m"
    }
#line 50 "add_foreign_enum.m"
    {
#line 50 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 50 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[60])));
#line 50 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
#line 50 "add_foreign_enum.m"
    }
#line 50 "add_foreign_enum.m"
    {
#line 50 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 50 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[43])));
#line 50 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63));
#line 50 "add_foreign_enum.m"
    }
#line 56 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18 == (MR_Integer) 0);
#line 56 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 56 "add_foreign_enum.m"
      {
#line 57 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17)) == (MR_mktag((MR_Integer) 0)));
#line 57 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 57 "add_foreign_enum.m"
          {
#line 57 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, (MR_Integer) 0)));
#line 58 "add_foreign_enum.m"
            /* binary string simple lookup switch */
#line 58 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (MR_Integer) 0;
#line 58 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (MR_Integer) 3;
#line 58 "add_foreign_enum.m"
            do
#line 58 "add_foreign_enum.m"
              {
#line 58 "add_foreign_enum.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 = (((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 + hlds__make_hlds__add_pragma__add_foreign_enum__hi_1)) / (MR_Integer) 2);
#line 58 "add_foreign_enum.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__result_3 = MR_strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153, ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[4 + hlds__make_hlds__add_pragma__add_foreign_enum__mid_2]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0);
#line 58 "add_foreign_enum.m"
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 == (MR_Integer) 0))
#line 58 "add_foreign_enum.m"
                  {
#line 58 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 58 "add_foreign_enum.m"
                    /* jump out of search loop */
#line 58 "add_foreign_enum.m"
                    goto label_0;
#line 58 "add_foreign_enum.m"
                  }
#line 58 "add_foreign_enum.m"
                else
#line 58 "add_foreign_enum.m"
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 < (MR_Integer) 0))
#line 58 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 - (MR_Integer) 1);
#line 58 "add_foreign_enum.m"
                else
#line 58 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 + (MR_Integer) 1);
#line 58 "add_foreign_enum.m"
              }
#line 58 "add_foreign_enum.m"
            while ((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 <= hlds__make_hlds__add_pragma__add_foreign_enum__hi_1));
#line 58 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 58 "add_foreign_enum.m"
          label_0:;
#line 57 "add_foreign_enum.m"
          }
#line 56 "add_foreign_enum.m"
      }
#line 1643 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 1645 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 1647 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54;
#line 1649 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55;
#line 1651 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56;
#line 1653 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84;
#line 1655 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
#line 1657 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138;
#line 1659 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139;
#line 1661 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142;

#line 64 "add_foreign_enum.m"
        {
#line 64 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 64 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 64 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[8])));
#line 64 "add_foreign_enum.m"
        }
#line 63 "add_foreign_enum.m"
        {
#line 63 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 63 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 63 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84));
#line 63 "add_foreign_enum.m"
        }
#line 65 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 147 "add_foreign_enum.m"
        {
#line 147 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54);
        }
#line 147 "add_foreign_enum.m"
        {
#line 147 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139));
#line 147 "add_foreign_enum.m"
        }
#line 147 "add_foreign_enum.m"
        {
#line 147 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138));
#line 147 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_foreign_enum.m"
        }
#line 147 "add_foreign_enum.m"
        {
#line 147 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 147 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137));
#line 147 "add_foreign_enum.m"
        }
#line 148 "add_foreign_enum.m"
        {
#line 148 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55));
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
        }
#line 148 "add_foreign_enum.m"
        {
#line 148 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142));
#line 148 "add_foreign_enum.m"
        }
#line 149 "add_foreign_enum.m"
        {
#line 149 "add_foreign_enum.m"
          MR_Word base;
#line 149 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 149 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56));
#line 149 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
#line 149 "add_foreign_enum.m"
        }
#line 1755 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 1757 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    else
#line 1759 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 1761 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23;

#line 68 "add_foreign_enum.m"
        {
#line 68 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23);
        }
#line 1769 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 1771 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 1773 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24;

#line 69 "add_foreign_enum.m"
            {
#line 69 "add_foreign_enum.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24);
            }
#line 1781 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 1782 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24)) {
#line 1784 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1786 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 0:
#line 1788 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 1790 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
#line 1792 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
#line 1794 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
#line 1796 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
#line 1798 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 1800 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 1802 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 1804 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

#line 77 "add_foreign_enum.m"
                  {
#line 77 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 77 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[10])));
#line 77 "add_foreign_enum.m"
                  }
#line 76 "add_foreign_enum.m"
                  {
#line 76 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 76 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 76 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122));
#line 76 "add_foreign_enum.m"
                  }
#line 75 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155);
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
#line 147 "add_foreign_enum.m"
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_foreign_enum.m"
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
#line 147 "add_foreign_enum.m"
                  }
#line 148 "add_foreign_enum.m"
                  {
#line 148 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                  }
#line 148 "add_foreign_enum.m"
                  {
#line 148 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
#line 148 "add_foreign_enum.m"
                  }
#line 149 "add_foreign_enum.m"
                  {
#line 149 "add_foreign_enum.m"
                    MR_Word base;
#line 149 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 149 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157));
#line 149 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
#line 149 "add_foreign_enum.m"
                  }
#line 1898 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 1900 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 1902 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 1:
#line 1904 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 1906 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 0)));
#line 1908 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 3)));
#line 1910 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237;
#line 1912 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238;
#line 82 "add_foreign_enum.m"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TagValues_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 1)));
#line 82 "add_foreign_enum.m"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___CheaperTagTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 2)));
#line 82 "add_foreign_enum.m"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeUserEq_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 4)));
#line 82 "add_foreign_enum.m"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeDirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 5)));
#line 82 "add_foreign_enum.m"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ReservedTag_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 82 "add_foreign_enum.m"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ReservedAddr_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 82 "add_foreign_enum.m"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___IsForeignType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 7)));

#line 122 "add_foreign_enum.m"
#line 122 "add_foreign_enum.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33)) {
#line 122 "add_foreign_enum.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 122 "add_foreign_enum.m"
                    case (MR_Integer) 0:
#line 122 "add_foreign_enum.m"
#line 122 "add_foreign_enum.m"
                      switch (MR_unmkbody(hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33)) {
#line 122 "add_foreign_enum.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 122 "add_foreign_enum.m"
                        case (MR_Integer) 0:
#line 122 "add_foreign_enum.m"
                        case (MR_Integer) 1:
#line 89 "add_foreign_enum.m"
                          {
#line 89 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 0)));
#line 89 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 1)));
#line 89 "add_foreign_enum.m"
                            MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42;
#line 89 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43;
#line 89 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;

#line 94 "add_foreign_enum.m"
                            if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = (MR_String) "";
#line 94 "add_foreign_enum.m"
                            else
#line 93 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40, (MR_Integer) 0)));
#line 98 "add_foreign_enum.m"
                            {
#line 98 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117);
                            }
#line 118 "add_foreign_enum.m"
                            if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "add_foreign_enum.m"
                              {
#line 119 "add_foreign_enum.m"
                                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 119 "add_foreign_enum.m"
                                hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;
#line 119 "add_foreign_enum.m"
                              }
#line 118 "add_foreign_enum.m"
                            else
#line 101 "add_foreign_enum.m"
                              {
#line 101 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, (MR_Integer) 0)));
#line 101 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45;

#line 102 "add_foreign_enum.m"
                                {
#line 102 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238);
                                }
#line 115 "add_foreign_enum.m"
                                if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 116 "add_foreign_enum.m"
                                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 115 "add_foreign_enum.m"
                                else
#line 107 "add_foreign_enum.m"
                                  {
#line 107 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, (MR_Integer) 0)));
#line 107 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47;
#line 107 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48;
#line 107 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49;

#line 108 "add_foreign_enum.m"
                                    {
#line 108 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 108 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 108 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 108 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14));
#line 108 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46));
#line 108 "add_foreign_enum.m"
                                    }
#line 110 "add_foreign_enum.m"
                                    {
#line 110 "add_foreign_enum.m"
                                      hlds__hlds_module__module_info_get_exported_enums_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48);
                                    }
#line 112 "add_foreign_enum.m"
                                    {
#line 112 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47));
#line 112 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48));
#line 112 "add_foreign_enum.m"
                                    }
#line 113 "add_foreign_enum.m"
                                    {
#line 113 "add_foreign_enum.m"
                                      hlds__hlds_module__module_info_set_exported_enums_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58);
                                    }
#line 107 "add_foreign_enum.m"
                                  }
#line 101 "add_foreign_enum.m"
                              }
#line 121 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 89 "add_foreign_enum.m"
                          }
#line 122 "add_foreign_enum.m"
                          break;
#line 122 "add_foreign_enum.m"
                        case (MR_Integer) 2:
#line 125 "add_foreign_enum.m"
                          {
#line 125 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100;
#line 125 "add_foreign_enum.m"
                            MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115;
#line 125 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146;

#line 129 "add_foreign_enum.m"
                            {
#line 129 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 129 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[16])));
#line 129 "add_foreign_enum.m"
                            }
#line 128 "add_foreign_enum.m"
                            {
#line 128 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 128 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100));
#line 128 "add_foreign_enum.m"
                            }
#line 133 "add_foreign_enum.m"
                            {
#line 133 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146));
#line 133 "add_foreign_enum.m"
                            }
#line 133 "add_foreign_enum.m"
                            {
#line 133 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115));
#line 133 "add_foreign_enum.m"
                            }
#line 125 "add_foreign_enum.m"
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 125 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
#line 125 "add_foreign_enum.m"
                          }
#line 122 "add_foreign_enum.m"
                          break;
#line 122 "add_foreign_enum.m"
                      }
#line 122 "add_foreign_enum.m"
                      break;
#line 122 "add_foreign_enum.m"
                    case (MR_Integer) 1:
#line 89 "add_foreign_enum.m"
                      {
#line 89 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 0)));
#line 89 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 1)));
#line 89 "add_foreign_enum.m"
                        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42;
#line 89 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43;
#line 89 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;

#line 94 "add_foreign_enum.m"
                        if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = (MR_String) "";
#line 94 "add_foreign_enum.m"
                        else
#line 93 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40, (MR_Integer) 0)));
#line 98 "add_foreign_enum.m"
                        {
#line 98 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117);
                        }
#line 118 "add_foreign_enum.m"
                        if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "add_foreign_enum.m"
                          {
#line 119 "add_foreign_enum.m"
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 119 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;
#line 119 "add_foreign_enum.m"
                          }
#line 118 "add_foreign_enum.m"
                        else
#line 101 "add_foreign_enum.m"
                          {
#line 101 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, (MR_Integer) 0)));
#line 101 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45;

#line 102 "add_foreign_enum.m"
                            {
#line 102 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238);
                            }
#line 115 "add_foreign_enum.m"
                            if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 116 "add_foreign_enum.m"
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 115 "add_foreign_enum.m"
                            else
#line 107 "add_foreign_enum.m"
                              {
#line 107 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, (MR_Integer) 0)));
#line 107 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47;
#line 107 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48;
#line 107 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49;

#line 108 "add_foreign_enum.m"
                                {
#line 108 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 108 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 108 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 108 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14));
#line 108 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46));
#line 108 "add_foreign_enum.m"
                                }
#line 110 "add_foreign_enum.m"
                                {
#line 110 "add_foreign_enum.m"
                                  hlds__hlds_module__module_info_get_exported_enums_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48);
                                }
#line 112 "add_foreign_enum.m"
                                {
#line 112 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47));
#line 112 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48));
#line 112 "add_foreign_enum.m"
                                }
#line 113 "add_foreign_enum.m"
                                {
#line 113 "add_foreign_enum.m"
                                  hlds__hlds_module__module_info_set_exported_enums_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58);
                                }
#line 107 "add_foreign_enum.m"
                              }
#line 101 "add_foreign_enum.m"
                          }
#line 121 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 89 "add_foreign_enum.m"
                      }
#line 122 "add_foreign_enum.m"
                      break;
#line 122 "add_foreign_enum.m"
                    case (MR_Integer) 2:
#line 125 "add_foreign_enum.m"
                      {
#line 125 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100;
#line 125 "add_foreign_enum.m"
                        MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115;
#line 125 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146;

#line 129 "add_foreign_enum.m"
                        {
#line 129 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 129 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[16])));
#line 129 "add_foreign_enum.m"
                        }
#line 128 "add_foreign_enum.m"
                        {
#line 128 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 128 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100));
#line 128 "add_foreign_enum.m"
                        }
#line 133 "add_foreign_enum.m"
                        {
#line 133 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146));
#line 133 "add_foreign_enum.m"
                        }
#line 133 "add_foreign_enum.m"
                        {
#line 133 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115));
#line 133 "add_foreign_enum.m"
                        }
#line 125 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 125 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
#line 125 "add_foreign_enum.m"
                      }
#line 122 "add_foreign_enum.m"
                      break;
#line 122 "add_foreign_enum.m"
                  }
#line 145 "add_foreign_enum.m"
                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238;
#line 145 "add_foreign_enum.m"
                  else
#line 146 "add_foreign_enum.m"
                    {
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198;
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199;
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200;
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201;
#line 146 "add_foreign_enum.m"
                      MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, (MR_Integer) 0)));
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203;
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
#line 146 "add_foreign_enum.m"
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208;

#line 146 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202, (MR_Integer) 0)));
#line 146 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202, (MR_Integer) 1)));
#line 147 "add_foreign_enum.m"
                      {
#line 147 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199);
                      }
#line 147 "add_foreign_enum.m"
                      {
#line 147 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
#line 147 "add_foreign_enum.m"
                      }
#line 147 "add_foreign_enum.m"
                      {
#line 147 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 147 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_foreign_enum.m"
                      }
#line 147 "add_foreign_enum.m"
                      {
#line 147 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 147 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203));
#line 147 "add_foreign_enum.m"
                      }
#line 148 "add_foreign_enum.m"
                      {
#line 148 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200));
#line 148 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                      }
#line 148 "add_foreign_enum.m"
                      {
#line 148 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198));
#line 148 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 148 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208));
#line 148 "add_foreign_enum.m"
                      }
#line 149 "add_foreign_enum.m"
                      {
#line 149 "add_foreign_enum.m"
                        MR_Word base;
#line 149 "add_foreign_enum.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 149 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201));
#line 149 "add_foreign_enum.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238));
#line 149 "add_foreign_enum.m"
                      }
#line 146 "add_foreign_enum.m"
                    }
#line 2391 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 2393 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 2395 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 2:
#line 2397 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 2399 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
#line 2401 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
#line 2403 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
#line 2405 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
#line 2407 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 2409 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 2411 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 2413 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

#line 77 "add_foreign_enum.m"
                  {
#line 77 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 77 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[10])));
#line 77 "add_foreign_enum.m"
                  }
#line 76 "add_foreign_enum.m"
                  {
#line 76 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 76 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 76 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122));
#line 76 "add_foreign_enum.m"
                  }
#line 75 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155);
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
#line 147 "add_foreign_enum.m"
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_foreign_enum.m"
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
#line 147 "add_foreign_enum.m"
                  }
#line 148 "add_foreign_enum.m"
                  {
#line 148 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                  }
#line 148 "add_foreign_enum.m"
                  {
#line 148 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
#line 148 "add_foreign_enum.m"
                  }
#line 149 "add_foreign_enum.m"
                  {
#line 149 "add_foreign_enum.m"
                    MR_Word base;
#line 149 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 149 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157));
#line 149 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
#line 149 "add_foreign_enum.m"
                  }
#line 2507 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 2509 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 2511 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 3:
#line 2513 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 2515 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
#line 2517 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
#line 2519 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
#line 2521 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
#line 2523 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 2525 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 2527 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 2529 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

#line 77 "add_foreign_enum.m"
                  {
#line 77 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 77 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[10])));
#line 77 "add_foreign_enum.m"
                  }
#line 76 "add_foreign_enum.m"
                  {
#line 76 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 76 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 76 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122));
#line 76 "add_foreign_enum.m"
                  }
#line 75 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155);
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
#line 147 "add_foreign_enum.m"
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_foreign_enum.m"
                  }
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 147 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
#line 147 "add_foreign_enum.m"
                  }
#line 148 "add_foreign_enum.m"
                  {
#line 148 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                  }
#line 148 "add_foreign_enum.m"
                  {
#line 148 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 148 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
#line 148 "add_foreign_enum.m"
                  }
#line 149 "add_foreign_enum.m"
                  {
#line 149 "add_foreign_enum.m"
                    MR_Word base;
#line 149 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 149 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157));
#line 149 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
#line 149 "add_foreign_enum.m"
                  }
#line 2623 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 2625 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 2627 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            }
#line 2629 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 2631 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        else
#line 2633 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 140 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 144 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
#line 2639 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 2641 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 45 "add_foreign_enum.m"
  }
#line 18 "add_foreign_enum.m"
}

#line 611 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__611__1_1_f_0(
#line 611 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25)
#line 611 "add_foreign_enum.m"
{
#line 611 "add_foreign_enum.m"
  {
#line 611 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 611 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26;
#line 611 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27;

#line 611 "add_foreign_enum.m"
    {
#line 611 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 611 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25));
#line 611 "add_foreign_enum.m"
    }
#line 611 "add_foreign_enum.m"
    {
#line 611 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27));
#line 611 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "add_foreign_enum.m"
    }
#line 611 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26;
#line 611 "add_foreign_enum.m"
  }
#line 611 "add_foreign_enum.m"
}

#line 267 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__267__1_1_f_0(
#line 267 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_104)
#line 267 "add_foreign_enum.m"
{
#line 267 "add_foreign_enum.m"
  {
#line 267 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 267 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_105;
#line 267 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106;

#line 267 "add_foreign_enum.m"
    {
#line 267 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 267 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_104));
#line 267 "add_foreign_enum.m"
    }
#line 267 "add_foreign_enum.m"
    {
#line 267 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_105, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_106_106));
#line 267 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "add_foreign_enum.m"
    }
#line 267 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_105;
#line 267 "add_foreign_enum.m"
  }
#line 267 "add_foreign_enum.m"
}

#line 248 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__248__1_1_f_0(
#line 248 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_68)
#line 248 "add_foreign_enum.m"
{
#line 248 "add_foreign_enum.m"
  {
#line 248 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 248 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_69;
#line 248 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;

#line 248 "add_foreign_enum.m"
    {
#line 248 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 248 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_68));
#line 248 "add_foreign_enum.m"
    }
#line 248 "add_foreign_enum.m"
    {
#line 248 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 248 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "add_foreign_enum.m"
    }
#line 248 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_69;
#line 248 "add_foreign_enum.m"
  }
#line 248 "add_foreign_enum.m"
}

#line 177 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14,
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_34)
#line 177 "add_foreign_enum.m"
{
#line 177 "add_foreign_enum.m"
  {
#line 177 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 177 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_35;

#line 177 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_34)) == (MR_mktag((MR_Integer) 1))))
#line 171 "add_foreign_enum.m"
      {
#line 171 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_34, (MR_Integer) 0)));
#line 171 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_34, (MR_Integer) 1)));

#line 172 "add_foreign_enum.m"
        {
#line 172 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_20, hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14);
        }
#line 174 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 173 "add_foreign_enum.m"
          {
#line 173 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_21));
#line 173 "add_foreign_enum.m"
          }
#line 174 "add_foreign_enum.m"
        else
#line 175 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_35 = hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_34;
#line 171 "add_foreign_enum.m"
      }
#line 177 "add_foreign_enum.m"
    else
#line 179 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_35 = hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_34;
#line 177 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_35;
#line 177 "add_foreign_enum.m"
  }
#line 177 "add_foreign_enum.m"
}

#line 635 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
#line 635 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 635 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
#line 635 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
#line 635 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
#line 635 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14)
#line 635 "add_foreign_enum.m"
{
#line 640 "add_foreign_enum.m"
  {
#line 640 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33;
#line 640 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;

#line 643 "add_foreign_enum.m"
    {
#line 643 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7));
#line 643 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8));
#line 643 "add_foreign_enum.m"
    }
#line 643 "add_foreign_enum.m"
    {
#line 643 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 643 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25));
#line 643 "add_foreign_enum.m"
    }
#line 643 "add_foreign_enum.m"
    {
#line 643 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24));
#line 643 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[42])));
#line 643 "add_foreign_enum.m"
    }
#line 642 "add_foreign_enum.m"
    {
#line 642 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
#line 642 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23));
#line 642 "add_foreign_enum.m"
    }
#line 642 "add_foreign_enum.m"
    {
#line 642 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[44])));
#line 642 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20));
#line 642 "add_foreign_enum.m"
    }
#line 641 "add_foreign_enum.m"
    {
#line 641 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[59])));
#line 641 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17));
#line 641 "add_foreign_enum.m"
    }
#line 645 "add_foreign_enum.m"
    {
#line 645 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10));
#line 645 "add_foreign_enum.m"
    }
#line 645 "add_foreign_enum.m"
    {
#line 645 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33));
#line 645 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "add_foreign_enum.m"
    }
#line 645 "add_foreign_enum.m"
    {
#line 645 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
#line 645 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
#line 645 "add_foreign_enum.m"
    }
#line 646 "add_foreign_enum.m"
    {
#line 646 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11));
#line 646 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "add_foreign_enum.m"
    }
#line 646 "add_foreign_enum.m"
    {
#line 646 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 646 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 646 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
#line 646 "add_foreign_enum.m"
    }
#line 647 "add_foreign_enum.m"
    {
#line 647 "add_foreign_enum.m"
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);
#line 647 "add_foreign_enum.m"
      return;
    }
#line 640 "add_foreign_enum.m"
  }
#line 635 "add_foreign_enum.m"
}

#line 611 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
#line 611 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 611 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 611 "add_foreign_enum.m"
{
#line 611 "add_foreign_enum.m"
  {
#line 611 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 611 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 611 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26;

#line 611 "add_foreign_enum.m"
    {
#line 611 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__611__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 611 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26));
#line 611 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 611 "add_foreign_enum.m"
  }
#line 611 "add_foreign_enum.m"
}

#line 602 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
#line 602 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
#line 602 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20)
#line 602 "add_foreign_enum.m"
{
#line 608 "add_foreign_enum.m"
  {
#line 608 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14;
#line 608 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47;
#line 608 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52;
#line 613 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15;

#line 610 "add_foreign_enum.m"
    {
#line 610 "add_foreign_enum.m"
      mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8, &hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
#line 611 "add_foreign_enum.m"
    {
#line 611 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5], hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
#line 612 "add_foreign_enum.m"
    {
#line 612 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
    }
#line 613 "add_foreign_enum.m"
    {
#line 613 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11, ((MR_Box) ((MR_String) "constructor does not have a foreign value")), ((MR_Box) ((MR_String) "constructors do not have foreign values")));
    }
#line 613 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15);
#line 3110 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 616 "add_foreign_enum.m"
    {
#line 616 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 616 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15));
#line 616 "add_foreign_enum.m"
    }
#line 616 "add_foreign_enum.m"
    {
#line 616 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38));
#line 616 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[58])));
#line 616 "add_foreign_enum.m"
    }
#line 616 "add_foreign_enum.m"
    {
#line 616 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[52])));
#line 616 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
#line 616 "add_foreign_enum.m"
    }
#line 617 "add_foreign_enum.m"
    {
#line 617 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14);
    }
#line 619 "add_foreign_enum.m"
    {
#line 619 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[56]));
    }
#line 619 "add_foreign_enum.m"
    {
#line 619 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
#line 619 "add_foreign_enum.m"
    }
#line 620 "add_foreign_enum.m"
    {
#line 620 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 0) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16));
#line 620 "add_foreign_enum.m"
    }
#line 620 "add_foreign_enum.m"
    {
#line 620 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_foreign_enum.m"
    }
#line 619 "add_foreign_enum.m"
    {
#line 619 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44));
#line 619 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
#line 619 "add_foreign_enum.m"
    }
#line 618 "add_foreign_enum.m"
    {
#line 618 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
#line 618 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43));
#line 618 "add_foreign_enum.m"
    }
#line 621 "add_foreign_enum.m"
    {
#line 621 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "add_foreign_enum.m"
    }
#line 621 "add_foreign_enum.m"
    {
#line 621 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52));
#line 621 "add_foreign_enum.m"
    }
#line 622 "add_foreign_enum.m"
    {
#line 622 "add_foreign_enum.m"
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);
#line 622 "add_foreign_enum.m"
      return;
    }
#line 608 "add_foreign_enum.m"
  }
#line 602 "add_foreign_enum.m"
}

#line 583 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 583 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 583 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
#line 583 "add_foreign_enum.m"
{
#line 589 "add_foreign_enum.m"
  {
#line 589 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 589 "add_foreign_enum.m"
    {
#line 589 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);
#line 589 "add_foreign_enum.m"
      return;
    }
#line 589 "add_foreign_enum.m"
  }
#line 583 "add_foreign_enum.m"
}

#line 575 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
#line 575 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1)
#line 575 "add_foreign_enum.m"
{
#line 578 "add_foreign_enum.m"
  {
#line 578 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 578 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_9[0 + hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0__vct_9_f_0;

#line 578 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
#line 578 "add_foreign_enum.m"
  }
#line 575 "add_foreign_enum.m"
}

#line 551 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
#line 551 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
#line 551 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
#line 551 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
#line 551 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
#line 551 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17)
#line 551 "add_foreign_enum.m"
{
#line 556 "add_foreign_enum.m"
  {
#line 556 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 556 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 0)));
#line 556 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 1)));
#line 556 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12;

#line 561 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9)) == (MR_mktag((MR_Integer) 1))))
#line 562 "add_foreign_enum.m"
      {
#line 562 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));
#line 562 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_20 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 1)));

#line 563 "add_foreign_enum.m"
        {
#line 563 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6);
        }
#line 565 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 564 "add_foreign_enum.m"
          {
#line 564 "add_foreign_enum.m"
            {
#line 564 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
#line 564 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_20));
#line 564 "add_foreign_enum.m"
            }
#line 564 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
#line 564 "add_foreign_enum.m"
          }
#line 565 "add_foreign_enum.m"
        else
#line 566 "add_foreign_enum.m"
          {
#line 566 "add_foreign_enum.m"
            {
#line 566 "add_foreign_enum.m"
              MR_Word base;
#line 566 "add_foreign_enum.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "add_foreign_enum.m"
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = base;
#line 566 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9));
#line 566 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16));
#line 566 "add_foreign_enum.m"
            }
#line 567 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9;
#line 566 "add_foreign_enum.m"
          }
#line 562 "add_foreign_enum.m"
      }
#line 561 "add_foreign_enum.m"
    else
#line 559 "add_foreign_enum.m"
      {
#line 559 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));

#line 560 "add_foreign_enum.m"
        {
#line 560 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
#line 560 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_11));
#line 560 "add_foreign_enum.m"
        }
#line 559 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
#line 559 "add_foreign_enum.m"
      }
#line 570 "add_foreign_enum.m"
    {
#line 570 "add_foreign_enum.m"
      MR_Word base;
#line 570 "add_foreign_enum.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 570 "add_foreign_enum.m"
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15 = base;
#line 570 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12));
#line 570 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10));
#line 570 "add_foreign_enum.m"
    }
#line 556 "add_foreign_enum.m"
  }
#line 551 "add_foreign_enum.m"
}

#line 530 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
#line 530 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 530 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 530 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 530 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 530 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4)
#line 530 "add_foreign_enum.m"
{
#line 530 "add_foreign_enum.m"
  {
#line 530 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 530 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15;
#line 530 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17;

#line 530 "add_foreign_enum.m"
    {
#line 530 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17);
    }
#line 530 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15));
#line 530 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17));
#line 530 "add_foreign_enum.m"
  }
#line 530 "add_foreign_enum.m"
}

#line 516 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
#line 516 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
#line 516 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23,
#line 516 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24)
#line 516 "add_foreign_enum.m"
{
#line 522 "add_foreign_enum.m"
  {
#line 522 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 522 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35;
#line 522 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_14;
#line 522 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_17;
#line 522 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_18;
#line 522 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28;
#line 530 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_18;

#line 525 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10)) == (MR_mktag((MR_Integer) 1))))
#line 524 "add_foreign_enum.m"
      {
#line 524 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15;

#line 524 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10, (MR_Integer) 0)));
#line 524 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10, (MR_Integer) 1)));
#line 524 "add_foreign_enum.m"
      }
#line 525 "add_foreign_enum.m"
    else
#line 526 "add_foreign_enum.m"
      {
#line 527 "add_foreign_enum.m"
        {
#line 527 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_foreign_enum_tag_map\'/7", (MR_String) "unqualified type name while processing foreign tags.");
#line 527 "add_foreign_enum.m"
          return;
        }
#line 526 "add_foreign_enum.m"
      }
#line 530 "add_foreign_enum.m"
    {
#line 530 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 530 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
#line 530 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1));
#line 530 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_14));
#line 530 "add_foreign_enum.m"
    }
#line 3529 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2];
#line 530 "add_foreign_enum.m"
    {
#line 530 "add_foreign_enum.m"
      mercury__list__map_foldl_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_35_35, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_28_28, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_18);
    }
#line 530 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_18 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_18);
#line 541 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "add_foreign_enum.m"
      {
#line 537 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_19;

#line 534 "add_foreign_enum.m"
        {
#line 534 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_17, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_19);
        }
#line 537 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 535 "add_foreign_enum.m"
          {
#line 535 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_20;

#line 535 "add_foreign_enum.m"
            {
#line 535 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_20 = mercury__bimap__forward_map_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_19);
            }
#line 536 "add_foreign_enum.m"
            {
#line 536 "add_foreign_enum.m"
              MR_Word base;
#line 536 "add_foreign_enum.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "add_foreign_enum.m"
              *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = base;
#line 536 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_20));
#line 536 "add_foreign_enum.m"
            }
#line 535 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23;
#line 535 "add_foreign_enum.m"
          }
#line 537 "add_foreign_enum.m"
        else
#line 538 "add_foreign_enum.m"
          {
#line 538 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47;
#line 538 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48;
#line 538 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60;
#line 538 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
#line 538 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62;
#line 538 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66;

#line 631 "add_foreign_enum.m"
            {
#line 631 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[40]));
            }
#line 631 "add_foreign_enum.m"
            {
#line 631 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 631 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62));
#line 631 "add_foreign_enum.m"
            }
#line 631 "add_foreign_enum.m"
            {
#line 631 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
#line 631 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "add_foreign_enum.m"
            }
#line 631 "add_foreign_enum.m"
            {
#line 631 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_8));
#line 631 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60));
#line 631 "add_foreign_enum.m"
            }
#line 632 "add_foreign_enum.m"
            {
#line 632 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_47));
#line 632 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "add_foreign_enum.m"
            }
#line 632 "add_foreign_enum.m"
            {
#line 632 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 632 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 632 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
#line 632 "add_foreign_enum.m"
            }
#line 633 "add_foreign_enum.m"
            {
#line 633 "add_foreign_enum.m"
              mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_48)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24);
            }
#line 539 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "add_foreign_enum.m"
          }
#line 537 "add_foreign_enum.m"
      }
#line 541 "add_foreign_enum.m"
    else
#line 542 "add_foreign_enum.m"
      {
#line 543 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_24 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_23;
#line 542 "add_foreign_enum.m"
      }
#line 522 "add_foreign_enum.m"
  }
#line 516 "add_foreign_enum.m"
}

#line 308 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 308 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 308 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 308 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
#line 308 "add_foreign_enum.m"
{
#line 315 "add_foreign_enum.m"
  {
#line 315 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 315 "add_foreign_enum.m"
    {
#line 315 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14, hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
#line 315 "add_foreign_enum.m"
      return;
    }
#line 315 "add_foreign_enum.m"
  }
#line 308 "add_foreign_enum.m"
}

#line 288 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
#line 288 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
#line 288 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
#line 288 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18)
#line 288 "add_foreign_enum.m"
{
#line 293 "add_foreign_enum.m"
  {
#line 293 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 293 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 293 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 293 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12;
#line 295 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13;

#line 294 "add_foreign_enum.m"
    {
#line 294 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12 = mercury__map__to_assoc_list_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9);
    }
#line 295 "add_foreign_enum.m"
    {
#line 295 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12, &hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13);
    }
#line 297 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 296 "add_foreign_enum.m"
      {
#line 296 "add_foreign_enum.m"
        {
#line 296 "add_foreign_enum.m"
          MR_Word base;
#line 296 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = base;
#line 296 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9));
#line 296 "add_foreign_enum.m"
        }
#line 296 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17;
#line 296 "add_foreign_enum.m"
      }
#line 297 "add_foreign_enum.m"
    else
#line 298 "add_foreign_enum.m"
      {
#line 298 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15;
#line 298 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16;
#line 298 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30;
#line 298 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31;
#line 298 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
#line 298 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36;

#line 298 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "add_foreign_enum.m"
        {
#line 303 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[35]));
        }
#line 303 "add_foreign_enum.m"
        {
#line 303 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 303 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
#line 303 "add_foreign_enum.m"
        }
#line 303 "add_foreign_enum.m"
        {
#line 303 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31));
#line 303 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "add_foreign_enum.m"
        }
#line 303 "add_foreign_enum.m"
        {
#line 303 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_7));
#line 303 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30));
#line 303 "add_foreign_enum.m"
        }
#line 304 "add_foreign_enum.m"
        {
#line 304 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15));
#line 304 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "add_foreign_enum.m"
        }
#line 304 "add_foreign_enum.m"
        {
#line 304 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 304 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 304 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36));
#line 304 "add_foreign_enum.m"
        }
#line 305 "add_foreign_enum.m"
        {
#line 305 "add_foreign_enum.m"
          MR_Word base;
#line 305 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = base;
#line 305 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16));
#line 305 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17));
#line 305 "add_foreign_enum.m"
        }
#line 298 "add_foreign_enum.m"
      }
#line 293 "add_foreign_enum.m"
  }
#line 288 "add_foreign_enum.m"
}

#line 267 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
#line 267 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 267 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 267 "add_foreign_enum.m"
{
#line 267 "add_foreign_enum.m"
  {
#line 267 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 267 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 267 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_105;

#line 267 "add_foreign_enum.m"
    {
#line 267 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_105 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__267__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 267 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_105));
#line 267 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 267 "add_foreign_enum.m"
  }
#line 267 "add_foreign_enum.m"
}

#line 248 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
#line 248 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 248 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 248 "add_foreign_enum.m"
{
#line 248 "add_foreign_enum.m"
  {
#line 248 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 248 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 248 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_69;

#line 248 "add_foreign_enum.m"
    {
#line 248 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_69 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__248__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 248 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_69));
#line 248 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 248 "add_foreign_enum.m"
  }
#line 248 "add_foreign_enum.m"
}

#line 216 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 216 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 216 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 216 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6,
#line 216 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7)
#line 216 "add_foreign_enum.m"
{
#line 216 "add_foreign_enum.m"
  {
#line 216 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 216 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31;
#line 216 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33;
#line 216 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35;

#line 216 "add_foreign_enum.m"
    {
#line 216 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35);
    }
#line 216 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31));
#line 216 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33));
#line 216 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35));
#line 216 "add_foreign_enum.m"
  }
#line 216 "add_foreign_enum.m"
}

#line 198 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15,
#line 198 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_17,
#line 198 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21,
#line 198 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22,
#line 198 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46,
#line 198 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47)
#line 198 "add_foreign_enum.m"
{
#line 205 "add_foreign_enum.m"
  {
#line 205 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52;
#line 215 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27;
#line 215 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28;
#line 215 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29;

#line 208 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15)) == (MR_mktag((MR_Integer) 1))))
#line 207 "add_foreign_enum.m"
      {
#line 207 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25;

#line 207 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 0)));
#line 207 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 1)));
#line 207 "add_foreign_enum.m"
      }
#line 208 "add_foreign_enum.m"
    else
#line 210 "add_foreign_enum.m"
      {
#line 211 "add_foreign_enum.m"
        {
#line 211 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "unqualified type name for foreign_export_enum");
#line 211 "add_foreign_enum.m"
          return;
        }
#line 210 "add_foreign_enum.m"
      }
#line 216 "add_foreign_enum.m"
    {
#line 216 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0]));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24));
#line 216 "add_foreign_enum.m"
    }
#line 4091 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 4093 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 217 "add_foreign_enum.m"
    {
#line 217 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154);
    }
#line 4100 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1];
#line 215 "add_foreign_enum.m"
    {
#line 215 "add_foreign_enum.m"
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
    }
#line 215 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27);
#line 215 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28);
#line 215 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
#line 222 "add_foreign_enum.m"
    {
#line 222 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
    }
#line 264 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 227 "add_foreign_enum.m"
      if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "add_foreign_enum.m"
        {
#line 225 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_17, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47);
#line 225 "add_foreign_enum.m"
          return;
        }
#line 227 "add_foreign_enum.m"
      else
#line 228 "add_foreign_enum.m"
        {
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159;
#line 228 "add_foreign_enum.m"
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__What_32;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63;
#line 228 "add_foreign_enum.m"
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79;
#line 228 "add_foreign_enum.m"
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_80_80;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_92_92;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94;
#line 228 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99;
#line 253 "add_foreign_enum.m"
          MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_80_80;

#line 232 "add_foreign_enum.m"
#line 232 "add_foreign_enum.m"
          switch (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14) {
#line 232 "add_foreign_enum.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 232 "add_foreign_enum.m"
            case (MR_Integer) 0:
#line 231 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__What_32 = (MR_String) "C identifiers.";
#line 232 "add_foreign_enum.m"
              break;
#line 232 "add_foreign_enum.m"
            case (MR_Integer) 1:
#line 232 "add_foreign_enum.m"
            case (MR_Integer) 3:
#line 238 "add_foreign_enum.m"
              {
#line 239 "add_foreign_enum.m"
                {
#line 239 "add_foreign_enum.m"
                  mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "foreign_export_enum pragma for unsupported language");
#line 239 "add_foreign_enum.m"
                  return;
                }
#line 238 "add_foreign_enum.m"
              }
#line 232 "add_foreign_enum.m"
              break;
#line 232 "add_foreign_enum.m"
            case (MR_Integer) 2:
#line 234 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__What_32 = (MR_String) "Java identifiers.";
#line 232 "add_foreign_enum.m"
              break;
#line 232 "add_foreign_enum.m"
          }
#line 244 "add_foreign_enum.m"
          {
#line 244 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
#line 244 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
#line 244 "add_foreign_enum.m"
          }
#line 244 "add_foreign_enum.m"
          {
#line 244 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 244 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
#line 244 "add_foreign_enum.m"
          }
#line 245 "add_foreign_enum.m"
          {
#line 245 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "can be converted into valid ", hlds__make_hlds__add_pragma__add_foreign_enum__What_32);
          }
#line 245 "add_foreign_enum.m"
          {
#line 245 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 245 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64));
#line 245 "add_foreign_enum.m"
          }
#line 246 "add_foreign_enum.m"
          {
#line 246 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63));
#line 246 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "add_foreign_enum.m"
          }
#line 244 "add_foreign_enum.m"
          {
#line 244 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60));
#line 244 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_62_62));
#line 244 "add_foreign_enum.m"
          }
#line 243 "add_foreign_enum.m"
          {
#line 243 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[51])));
#line 243 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59));
#line 243 "add_foreign_enum.m"
          }
#line 247 "add_foreign_enum.m"
          {
#line 247 "add_foreign_enum.m"
            mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, &hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34);
          }
#line 248 "add_foreign_enum.m"
          {
#line 248 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[3], hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34);
          }
#line 250 "add_foreign_enum.m"
          {
#line 250 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
          }
#line 4302 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 253 "add_foreign_enum.m"
          {
#line 253 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_80_80 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, ((MR_Box) ((MR_String) "constructor")), ((MR_Box) ((MR_String) "constructors")));
          }
#line 253 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_80_80 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_80_80);
#line 253 "add_foreign_enum.m"
          {
#line 253 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 253 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_80_80));
#line 253 "add_foreign_enum.m"
          }
#line 253 "add_foreign_enum.m"
          {
#line 253 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_79_79));
#line 253 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[29])));
#line 253 "add_foreign_enum.m"
          }
#line 252 "add_foreign_enum.m"
          {
#line 252 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[52])));
#line 252 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_78_78));
#line 252 "add_foreign_enum.m"
          }
#line 255 "add_foreign_enum.m"
          {
#line 255 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159, hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37);
          }
#line 257 "add_foreign_enum.m"
          {
#line 257 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_92_92 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33);
          }
#line 257 "add_foreign_enum.m"
          {
#line 257 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_92_92));
#line 257 "add_foreign_enum.m"
          }
#line 258 "add_foreign_enum.m"
          {
#line 258 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94, 0) = ((MR_Box) ((MR_Integer) 0));
#line 258 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38));
#line 258 "add_foreign_enum.m"
          }
#line 258 "add_foreign_enum.m"
          {
#line 258 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_94_94));
#line 258 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "add_foreign_enum.m"
          }
#line 257 "add_foreign_enum.m"
          {
#line 257 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_91_91));
#line 257 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_93_93));
#line 257 "add_foreign_enum.m"
          }
#line 256 "add_foreign_enum.m"
          {
#line 256 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
#line 256 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_90_90));
#line 256 "add_foreign_enum.m"
          }
#line 260 "add_foreign_enum.m"
          {
#line 260 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39));
#line 260 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "add_foreign_enum.m"
          }
#line 259 "add_foreign_enum.m"
          {
#line 259 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 259 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 259 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99));
#line 259 "add_foreign_enum.m"
          }
#line 261 "add_foreign_enum.m"
          {
#line 261 "add_foreign_enum.m"
            MR_Word base;
#line 261 "add_foreign_enum.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47 = base;
#line 261 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40));
#line 261 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46));
#line 261 "add_foreign_enum.m"
          }
#line 262 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 228 "add_foreign_enum.m"
        }
#line 264 "add_foreign_enum.m"
    else
#line 265 "add_foreign_enum.m"
      {
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112;
#line 265 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_113_113;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
#line 265 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141;
#line 269 "add_foreign_enum.m"
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_113_113;

#line 265 "add_foreign_enum.m"
        {
#line 265 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41 = mercury__map__keys_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
        }
#line 267 "add_foreign_enum.m"
        {
#line 267 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41);
        }
#line 4494 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 269 "add_foreign_enum.m"
        {
#line 269 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_113_113 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
        }
#line 269 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_113_113 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_113_113);
#line 269 "add_foreign_enum.m"
        {
#line 269 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_113_113));
#line 269 "add_foreign_enum.m"
        }
#line 272 "add_foreign_enum.m"
        {
#line 272 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
#line 272 "add_foreign_enum.m"
        }
#line 272 "add_foreign_enum.m"
        {
#line 272 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121));
#line 272 "add_foreign_enum.m"
        }
#line 272 "add_foreign_enum.m"
        {
#line 272 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120));
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
#line 272 "add_foreign_enum.m"
        }
#line 271 "add_foreign_enum.m"
        {
#line 271 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[54])));
#line 271 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119));
#line 271 "add_foreign_enum.m"
        }
#line 270 "add_foreign_enum.m"
        {
#line 270 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_112_112));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116));
#line 270 "add_foreign_enum.m"
        }
#line 268 "add_foreign_enum.m"
        {
#line 268 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[53])));
#line 268 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_111_111));
#line 268 "add_foreign_enum.m"
        }
#line 273 "add_foreign_enum.m"
        {
#line 273 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6]));
        }
#line 272 "add_foreign_enum.m"
        {
#line 272 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161, hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128);
        }
#line 276 "add_foreign_enum.m"
        {
#line 276 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43);
        }
#line 276 "add_foreign_enum.m"
        {
#line 276 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 276 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137));
#line 276 "add_foreign_enum.m"
        }
#line 276 "add_foreign_enum.m"
        {
#line 276 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136));
#line 276 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "add_foreign_enum.m"
        }
#line 275 "add_foreign_enum.m"
        {
#line 275 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
#line 275 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135));
#line 275 "add_foreign_enum.m"
        }
#line 278 "add_foreign_enum.m"
        {
#line 278 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "add_foreign_enum.m"
        }
#line 277 "add_foreign_enum.m"
        {
#line 277 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 277 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 277 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_141_141));
#line 277 "add_foreign_enum.m"
        }
#line 279 "add_foreign_enum.m"
        {
#line 279 "add_foreign_enum.m"
          MR_Word base;
#line 279 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_47 = base;
#line 279 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45));
#line 279 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_46));
#line 279 "add_foreign_enum.m"
        }
#line 280 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "add_foreign_enum.m"
      }
#line 205 "add_foreign_enum.m"
  }
#line 198 "add_foreign_enum.m"
}

#line 169 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
#line 169 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 169 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 169 "add_foreign_enum.m"
{
#line 169 "add_foreign_enum.m"
  {
#line 169 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 169 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 169 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_35;

#line 169 "add_foreign_enum.m"
    {
#line 169 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_35 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 169 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_35));
#line 169 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 169 "add_foreign_enum.m"
  }
#line 169 "add_foreign_enum.m"
}

#line 152 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11,
#line 152 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12,
#line 152 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29,
#line 152 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30)
#line 152 "add_foreign_enum.m"
{
#line 158 "add_foreign_enum.m"
  {
#line 158 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_23;
#line 187 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_24;

#line 161 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8)) == (MR_mktag((MR_Integer) 1))))
#line 160 "add_foreign_enum.m"
      {
#line 160 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15;

#line 160 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, (MR_Integer) 0)));
#line 160 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, (MR_Integer) 1)));
#line 160 "add_foreign_enum.m"
      }
#line 161 "add_foreign_enum.m"
    else
#line 162 "add_foreign_enum.m"
      {
#line 163 "add_foreign_enum.m"
        {
#line 163 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_overrides_map\'/7", (MR_String) "unqualified type name while building override map");
#line 163 "add_foreign_enum.m"
          return;
        }
#line 162 "add_foreign_enum.m"
      }
#line 169 "add_foreign_enum.m"
    {
#line 169 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[0]));
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1));
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14));
#line 169 "add_foreign_enum.m"
    }
#line 4769 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 4771 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 182 "add_foreign_enum.m"
    {
#line 182 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_23 = mercury__assoc_list__map_keys_only_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_17, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11);
    }
#line 184 "add_foreign_enum.m"
    {
#line 184 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_23, &hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_24);
    }
#line 187 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 185 "add_foreign_enum.m"
      {
#line 185 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_25;

#line 185 "add_foreign_enum.m"
        {
#line 185 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_25 = mercury__bimap__forward_map_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_24);
        }
#line 186 "add_foreign_enum.m"
        {
#line 186 "add_foreign_enum.m"
          MR_Word base;
#line 186 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = base;
#line 186 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_25));
#line 186 "add_foreign_enum.m"
        }
#line 185 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29;
#line 185 "add_foreign_enum.m"
      }
#line 187 "add_foreign_enum.m"
    else
#line 188 "add_foreign_enum.m"
      {
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51;

#line 188 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[25]));
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47));
#line 193 "add_foreign_enum.m"
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "add_foreign_enum.m"
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_9));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
#line 193 "add_foreign_enum.m"
        }
#line 194 "add_foreign_enum.m"
        {
#line 194 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "add_foreign_enum.m"
        }
#line 194 "add_foreign_enum.m"
        {
#line 194 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51));
#line 194 "add_foreign_enum.m"
        }
#line 195 "add_foreign_enum.m"
        {
#line 195 "add_foreign_enum.m"
          MR_Word base;
#line 195 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_30 = base;
#line 195 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28));
#line 195 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_29));
#line 195 "add_foreign_enum.m"
        }
#line 188 "add_foreign_enum.m"
      }
#line 158 "add_foreign_enum.m"
  }
#line 152 "add_foreign_enum.m"
}

#line 441 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 441 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 441 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 441 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6)
#line 441 "add_foreign_enum.m"
{
#line 441 "add_foreign_enum.m"
  {
#line 441 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 441 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21;
#line 441 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23;

#line 441 "add_foreign_enum.m"
    {
#line 441 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23);
    }
#line 441 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21));
#line 441 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23));
#line 441 "add_foreign_enum.m"
  }
#line 441 "add_foreign_enum.m"
}

#line 22 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(
#line 22 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8,
#line 22 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9,
#line 22 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
#line 22 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61,
#line 22 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62,
#line 22 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63,
#line 22 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64)
#line 22 "add_foreign_enum.m"
{
#line 365 "add_foreign_enum.m"
  {
#line 365 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 0)));
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 1)));
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 2)));
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 0)));
#line 365 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 1)));
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18;
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19;
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67;
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73;
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74;
#line 365 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75;
#line 375 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_197_197;
#line 377 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__lo_0;
#line 377 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__hi_1;
#line 377 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__mid_2;
#line 377 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__result_3;

#line 368 "add_foreign_enum.m"
    {
#line 368 "add_foreign_enum.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18);
    }
#line 371 "add_foreign_enum.m"
    {
#line 371 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16));
#line 371 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17));
#line 371 "add_foreign_enum.m"
    }
#line 371 "add_foreign_enum.m"
    {
#line 371 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 371 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75));
#line 371 "add_foreign_enum.m"
    }
#line 371 "add_foreign_enum.m"
    {
#line 371 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 371 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
#line 371 "add_foreign_enum.m"
    }
#line 370 "add_foreign_enum.m"
    {
#line 370 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
#line 370 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73));
#line 370 "add_foreign_enum.m"
    }
#line 369 "add_foreign_enum.m"
    {
#line 369 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[44])));
#line 369 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 369 "add_foreign_enum.m"
    }
#line 369 "add_foreign_enum.m"
    {
#line 369 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[43])));
#line 369 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67));
#line 369 "add_foreign_enum.m"
    }
#line 375 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 == (MR_Integer) 0);
#line 375 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 375 "add_foreign_enum.m"
      {
#line 376 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16)) == (MR_mktag((MR_Integer) 0)));
#line 376 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 376 "add_foreign_enum.m"
          {
#line 376 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, (MR_Integer) 0)));
#line 377 "add_foreign_enum.m"
            /* binary string simple lookup switch */
#line 377 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (MR_Integer) 0;
#line 377 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (MR_Integer) 3;
#line 377 "add_foreign_enum.m"
            do
#line 377 "add_foreign_enum.m"
              {
#line 377 "add_foreign_enum.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 = (((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 + hlds__make_hlds__add_pragma__add_foreign_enum__hi_1)) / (MR_Integer) 2);
#line 377 "add_foreign_enum.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__result_3 = MR_strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_197_197, ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[0 + hlds__make_hlds__add_pragma__add_foreign_enum__mid_2]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0);
#line 377 "add_foreign_enum.m"
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 == (MR_Integer) 0))
#line 377 "add_foreign_enum.m"
                  {
#line 377 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 377 "add_foreign_enum.m"
                    /* jump out of search loop */
#line 377 "add_foreign_enum.m"
                    goto label_0;
#line 377 "add_foreign_enum.m"
                  }
#line 377 "add_foreign_enum.m"
                else
#line 377 "add_foreign_enum.m"
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 < (MR_Integer) 0))
#line 377 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 - (MR_Integer) 1);
#line 377 "add_foreign_enum.m"
                else
#line 377 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 + (MR_Integer) 1);
#line 377 "add_foreign_enum.m"
              }
#line 377 "add_foreign_enum.m"
            while ((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 <= hlds__make_hlds__add_pragma__add_foreign_enum__hi_1));
#line 377 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 377 "add_foreign_enum.m"
          label_0:;
#line 376 "add_foreign_enum.m"
          }
#line 375 "add_foreign_enum.m"
      }
#line 5133 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 5135 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 5137 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58;
#line 5139 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59;
#line 5141 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60;
#line 5143 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88;
#line 5145 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163;
#line 5147 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;
#line 5149 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_165_165;
#line 5151 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168;

#line 383 "add_foreign_enum.m"
        {
#line 383 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 383 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[18])));
#line 383 "add_foreign_enum.m"
        }
#line 382 "add_foreign_enum.m"
        {
#line 382 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 382 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88));
#line 382 "add_foreign_enum.m"
        }
#line 384 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 511 "add_foreign_enum.m"
        {
#line 511 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_165_165 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58);
        }
#line 511 "add_foreign_enum.m"
        {
#line 511 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_165_165));
#line 511 "add_foreign_enum.m"
        }
#line 511 "add_foreign_enum.m"
        {
#line 511 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
#line 511 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
        }
#line 511 "add_foreign_enum.m"
        {
#line 511 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_163_163));
#line 511 "add_foreign_enum.m"
        }
#line 512 "add_foreign_enum.m"
        {
#line 512 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59));
#line 512 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
        }
#line 512 "add_foreign_enum.m"
        {
#line 512 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_168_168));
#line 512 "add_foreign_enum.m"
        }
#line 513 "add_foreign_enum.m"
        {
#line 513 "add_foreign_enum.m"
          MR_Word base;
#line 513 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60));
#line 513 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
        }
#line 5245 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 5247 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    else
#line 5249 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 5251 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22;

#line 387 "add_foreign_enum.m"
        {
#line 387 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22);
        }
#line 5259 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 5261 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 5263 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23;

#line 389 "add_foreign_enum.m"
            {
#line 389 "add_foreign_enum.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23);
            }
#line 5271 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 5272 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23)) {
#line 5274 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 5276 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 0:
#line 5278 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 5280 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
#line 5282 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200;
#line 5284 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201;
#line 5286 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202;
#line 5288 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
#line 5290 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
#line 5292 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206;
#line 5294 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209;

#line 397 "add_foreign_enum.m"
                  {
#line 397 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 397 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 397 "add_foreign_enum.m"
                  }
#line 396 "add_foreign_enum.m"
                  {
#line 396 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 396 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
#line 396 "add_foreign_enum.m"
                  }
#line 395 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200);
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206));
#line 511 "add_foreign_enum.m"
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 511 "add_foreign_enum.m"
                  }
#line 512 "add_foreign_enum.m"
                  {
#line 512 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                  }
#line 512 "add_foreign_enum.m"
                  {
#line 512 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209));
#line 512 "add_foreign_enum.m"
                  }
#line 513 "add_foreign_enum.m"
                  {
#line 513 "add_foreign_enum.m"
                    MR_Word base;
#line 513 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202));
#line 513 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
                  }
#line 5388 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 5390 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 5392 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 1:
#line 5394 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 5396 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 0)));
#line 5398 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 1)));
#line 5400 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 2)));
#line 5402 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 3)));
#line 5404 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 4)));
#line 5406 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 5)));
#line 5408 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 5410 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 5412 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 7)));
#line 5414 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38;
#line 5416 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39;
#line 5418 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40;

#line 406 "add_foreign_enum.m"
                  {
#line 406 "add_foreign_enum.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38);
                  }
#line 407 "add_foreign_enum.m"
                  {
#line 407 "add_foreign_enum.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38, &hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                  }
#line 408 "add_foreign_enum.m"
                  {
#line 408 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 = hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                  }
#line 5436 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 5437 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32)) {
#line 5439 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 5441 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    case (MR_Integer) 0:
#line 5443 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 5444 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      switch (MR_unmkbody(hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32)) {
#line 5446 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 5448 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        case (MR_Integer) 0:
#line 5450 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        case (MR_Integer) 1:
#line 5452 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          {
#line 5454 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41;
#line 5456 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42;

#line 414 "add_foreign_enum.m"
                            {
#line 414 "add_foreign_enum.m"
                              hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                            }
#line 418 "add_foreign_enum.m"
                            {
#line 418 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                            }
#line 426 "add_foreign_enum.m"
#line 426 "add_foreign_enum.m"
                            switch (hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42) {
#line 426 "add_foreign_enum.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 426 "add_foreign_enum.m"
                              case (MR_Integer) 0:
#line 427 "add_foreign_enum.m"
                                {
#line 427 "add_foreign_enum.m"
                                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_126_126;

#line 428 "add_foreign_enum.m"
                                  {
#line 428 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__V_126_126 = hlds__status__type_status_is_imported_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9);
                                  }
#line 428 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_126_126 == (MR_Integer) 1);
#line 427 "add_foreign_enum.m"
                                }
#line 426 "add_foreign_enum.m"
                                break;
#line 426 "add_foreign_enum.m"
                              case (MR_Integer) 1:
#line 421 "add_foreign_enum.m"
                                {
#line 421 "add_foreign_enum.m"
                                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_198_198 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;

#line 423 "add_foreign_enum.m"
                                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 423 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 423 "add_foreign_enum.m"
                                  else
#line 423 "add_foreign_enum.m"
                                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 422 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 423 "add_foreign_enum.m"
                                  else
#line 423 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 421 "add_foreign_enum.m"
                                }
#line 426 "add_foreign_enum.m"
                                break;
#line 426 "add_foreign_enum.m"
                            }
#line 5519 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 5521 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              {
#line 5523 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43;
#line 5525 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44;
#line 5527 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129;
#line 459 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45;

#line 433 "add_foreign_enum.m"
                                {
#line 433 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 433 "add_foreign_enum.m"
                                }
#line 434 "add_foreign_enum.m"
                                {
#line 434 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129);
                                }
#line 438 "add_foreign_enum.m"
                                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
#line 438 "add_foreign_enum.m"
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 438 "add_foreign_enum.m"
                                  {
#line 439 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44)) == (MR_mktag((MR_Integer) 1)));
#line 439 "add_foreign_enum.m"
                                    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 439 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, (MR_Integer) 0)));
#line 438 "add_foreign_enum.m"
                                  }
#line 459 "add_foreign_enum.m"
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 443 "add_foreign_enum.m"
                                  {
#line 443 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192;
#line 443 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193;
#line 443 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46;
#line 443 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47;
#line 443 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130;
#line 443 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_131_131;
#line 441 "add_foreign_enum.m"
                                    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46;
#line 441 "add_foreign_enum.m"
                                    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47;

#line 441 "add_foreign_enum.m"
                                    {
#line 441 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[0]));
#line 441 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1));
#line 441 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 441 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 441 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45));
#line 441 "add_foreign_enum.m"
                                    }
#line 5596 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5598 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 442 "add_foreign_enum.m"
                                    {
#line 442 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_131_131 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193);
                                    }
#line 441 "add_foreign_enum.m"
                                    {
#line 441 "add_foreign_enum.m"
                                      mercury__map__foldl2_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_192_192, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_193_193, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_130_130, hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_131_131)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
                                    }
#line 441 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46);
#line 441 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
#line 454 "add_foreign_enum.m"
                                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "add_foreign_enum.m"
                                      {
#line 445 "add_foreign_enum.m"
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48;
#line 445 "add_foreign_enum.m"
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49;
#line 445 "add_foreign_enum.m"
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50;

#line 446 "add_foreign_enum.m"
                                        {
#line 446 "add_foreign_enum.m"
                                          hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 6) = ((MR_Box) ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 | ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 << (MR_Integer) 1)))));
#line 446 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37));
#line 446 "add_foreign_enum.m"
                                        }
#line 450 "add_foreign_enum.m"
                                        {
#line 450 "add_foreign_enum.m"
                                          hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49);
                                        }
#line 451 "add_foreign_enum.m"
                                        {
#line 451 "add_foreign_enum.m"
                                          hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49, hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50);
                                        }
#line 453 "add_foreign_enum.m"
                                        {
#line 453 "add_foreign_enum.m"
                                          hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62);
                                        }
#line 445 "add_foreign_enum.m"
                                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129;
#line 445 "add_foreign_enum.m"
                                      }
#line 454 "add_foreign_enum.m"
                                    else
#line 455 "add_foreign_enum.m"
                                      {
#line 456 "add_foreign_enum.m"
                                        {
#line 456 "add_foreign_enum.m"
                                          hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
                                        }
#line 455 "add_foreign_enum.m"
                                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 455 "add_foreign_enum.m"
                                      }
#line 443 "add_foreign_enum.m"
                                  }
#line 459 "add_foreign_enum.m"
                                else
#line 462 "add_foreign_enum.m"
                                  {
#line 462 "add_foreign_enum.m"
                                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_129_129;
#line 462 "add_foreign_enum.m"
                                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 462 "add_foreign_enum.m"
                                  }
#line 5691 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              }
#line 5693 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            else
#line 5695 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              {
#line 466 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;

#line 471 "add_foreign_enum.m"
                                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 466 "add_foreign_enum.m"
                                hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;
#line 466 "add_foreign_enum.m"
                                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 5706 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 468 "add_foreign_enum.m"
                                  {
#line 468 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
#line 468 "add_foreign_enum.m"
                                    return;
                                  }
#line 5715 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                else
#line 5717 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                  {
#line 5719 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139;
#line 5721 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244;
#line 5723 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245;
#line 5725 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246;
#line 5727 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248;
#line 5729 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249;
#line 5731 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_250_250;
#line 5733 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253;

#line 473 "add_foreign_enum.m"
                                    {
#line 473 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 473 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
#line 473 "add_foreign_enum.m"
                                    }
#line 472 "add_foreign_enum.m"
                                    {
#line 472 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 472 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139));
#line 472 "add_foreign_enum.m"
                                    }
#line 511 "add_foreign_enum.m"
                                    {
#line 511 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_250_250 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_244);
                                    }
#line 511 "add_foreign_enum.m"
                                    {
#line 511 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_250_250));
#line 511 "add_foreign_enum.m"
                                    }
#line 511 "add_foreign_enum.m"
                                    {
#line 511 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_249_249));
#line 511 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
                                    }
#line 511 "add_foreign_enum.m"
                                    {
#line 511 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248));
#line 511 "add_foreign_enum.m"
                                    }
#line 512 "add_foreign_enum.m"
                                    {
#line 512 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_245));
#line 512 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                                    }
#line 512 "add_foreign_enum.m"
                                    {
#line 512 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_253_253));
#line 512 "add_foreign_enum.m"
                                    }
#line 513 "add_foreign_enum.m"
                                    {
#line 513 "add_foreign_enum.m"
                                      MR_Word base;
#line 513 "add_foreign_enum.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
                                      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_246));
#line 513 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
                                    }
#line 5825 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                  }
#line 5827 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              }
#line 5829 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          }
#line 5831 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          break;
#line 5833 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        case (MR_Integer) 2:
#line 5835 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          {
#line 5837 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
#line 5839 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328;
#line 5841 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329;
#line 5843 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330;
#line 5845 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332;
#line 5847 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333;
#line 5849 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334;
#line 5851 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337;

#line 496 "add_foreign_enum.m"
                            {
#line 496 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 496 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 496 "add_foreign_enum.m"
                            }
#line 495 "add_foreign_enum.m"
                            {
#line 495 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 495 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
#line 495 "add_foreign_enum.m"
                            }
#line 494 "add_foreign_enum.m"
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328);
                            }
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334));
#line 511 "add_foreign_enum.m"
                            }
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333));
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
                            }
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332));
#line 511 "add_foreign_enum.m"
                            }
#line 512 "add_foreign_enum.m"
                            {
#line 512 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                            }
#line 512 "add_foreign_enum.m"
                            {
#line 512 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337));
#line 512 "add_foreign_enum.m"
                            }
#line 513 "add_foreign_enum.m"
                            {
#line 513 "add_foreign_enum.m"
                              MR_Word base;
#line 513 "add_foreign_enum.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330));
#line 513 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
                            }
#line 5945 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          }
#line 5947 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          break;
#line 5949 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 5951 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      break;
#line 5953 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    case (MR_Integer) 1:
#line 5955 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      {
#line 478 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 480 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
#line 480 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
#line 481 "add_foreign_enum.m"
                        if (!(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded))
#line 481 "add_foreign_enum.m"
                          {
#line 481 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_114_114 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;

#line 481 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "add_foreign_enum.m"
                          }
#line 5974 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 508 "add_foreign_enum.m"
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
#line 5978 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        else
#line 5980 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          {
#line 5982 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117;
#line 5984 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285;
#line 5986 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286;
#line 5988 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287;
#line 5990 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289;
#line 5992 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290;
#line 5994 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_291_291;
#line 5996 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294;

#line 487 "add_foreign_enum.m"
                            {
#line 487 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 487 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[50])));
#line 487 "add_foreign_enum.m"
                            }
#line 486 "add_foreign_enum.m"
                            {
#line 486 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 486 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117));
#line 486 "add_foreign_enum.m"
                            }
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_291_291 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_285);
                            }
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_291_291));
#line 511 "add_foreign_enum.m"
                            }
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_290_290));
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
                            }
#line 511 "add_foreign_enum.m"
                            {
#line 511 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289));
#line 511 "add_foreign_enum.m"
                            }
#line 512 "add_foreign_enum.m"
                            {
#line 512 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_286));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                            }
#line 512 "add_foreign_enum.m"
                            {
#line 512 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_294_294));
#line 512 "add_foreign_enum.m"
                            }
#line 513 "add_foreign_enum.m"
                            {
#line 513 "add_foreign_enum.m"
                              MR_Word base;
#line 513 "add_foreign_enum.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_287));
#line 513 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
                            }
#line 6088 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          }
#line 6090 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 6092 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      break;
#line 6094 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    case (MR_Integer) 2:
#line 6096 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      {
#line 6098 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
#line 6100 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328;
#line 6102 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329;
#line 6104 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330;
#line 6106 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332;
#line 6108 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333;
#line 6110 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334;
#line 6112 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337;

#line 496 "add_foreign_enum.m"
                        {
#line 496 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 496 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 496 "add_foreign_enum.m"
                        }
#line 495 "add_foreign_enum.m"
                        {
#line 495 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 495 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
#line 495 "add_foreign_enum.m"
                        }
#line 494 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 511 "add_foreign_enum.m"
                        {
#line 511 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_328);
                        }
#line 511 "add_foreign_enum.m"
                        {
#line 511 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_334_334));
#line 511 "add_foreign_enum.m"
                        }
#line 511 "add_foreign_enum.m"
                        {
#line 511 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_333_333));
#line 511 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
                        }
#line 511 "add_foreign_enum.m"
                        {
#line 511 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332));
#line 511 "add_foreign_enum.m"
                        }
#line 512 "add_foreign_enum.m"
                        {
#line 512 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_329));
#line 512 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                        }
#line 512 "add_foreign_enum.m"
                        {
#line 512 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_337_337));
#line 512 "add_foreign_enum.m"
                        }
#line 513 "add_foreign_enum.m"
                        {
#line 513 "add_foreign_enum.m"
                          MR_Word base;
#line 513 "add_foreign_enum.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_330));
#line 513 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
                        }
#line 6206 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 6208 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      break;
#line 6210 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  }
#line 6212 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 6214 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 6216 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 2:
#line 6218 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 6220 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
#line 6222 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200;
#line 6224 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201;
#line 6226 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202;
#line 6228 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
#line 6230 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
#line 6232 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206;
#line 6234 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209;

#line 397 "add_foreign_enum.m"
                  {
#line 397 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 397 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 397 "add_foreign_enum.m"
                  }
#line 396 "add_foreign_enum.m"
                  {
#line 396 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 396 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
#line 396 "add_foreign_enum.m"
                  }
#line 395 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200);
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206));
#line 511 "add_foreign_enum.m"
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 511 "add_foreign_enum.m"
                  }
#line 512 "add_foreign_enum.m"
                  {
#line 512 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                  }
#line 512 "add_foreign_enum.m"
                  {
#line 512 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209));
#line 512 "add_foreign_enum.m"
                  }
#line 513 "add_foreign_enum.m"
                  {
#line 513 "add_foreign_enum.m"
                    MR_Word base;
#line 513 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202));
#line 513 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
                  }
#line 6328 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 6330 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 6332 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 3:
#line 6334 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 6336 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
#line 6338 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200;
#line 6340 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201;
#line 6342 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202;
#line 6344 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
#line 6346 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
#line 6348 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206;
#line 6350 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209;

#line 397 "add_foreign_enum.m"
                  {
#line 397 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 397 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 397 "add_foreign_enum.m"
                  }
#line 396 "add_foreign_enum.m"
                  {
#line 396 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 396 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
#line 396 "add_foreign_enum.m"
                  }
#line 395 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_200);
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_206_206));
#line 511 "add_foreign_enum.m"
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "add_foreign_enum.m"
                  }
#line 511 "add_foreign_enum.m"
                  {
#line 511 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 511 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 511 "add_foreign_enum.m"
                  }
#line 512 "add_foreign_enum.m"
                  {
#line 512 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_201));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                  }
#line 512 "add_foreign_enum.m"
                  {
#line 512 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 512 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_209_209));
#line 512 "add_foreign_enum.m"
                  }
#line 513 "add_foreign_enum.m"
                  {
#line 513 "add_foreign_enum.m"
                    MR_Word base;
#line 513 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 513 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_202));
#line 513 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 513 "add_foreign_enum.m"
                  }
#line 6444 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 6446 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 6448 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            }
#line 6450 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 6452 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        else
#line 6454 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 505 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 508 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
#line 6460 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 6462 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 365 "add_foreign_enum.m"
  }
#line 22 "add_foreign_enum.m"
}

#line 18 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeStatus_9,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57,
#line 18 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59,
#line 18 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60)
#line 18 "add_foreign_enum.m"
{
#line 45 "add_foreign_enum.m"
  {
#line 45 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 45 "add_foreign_enum.m"
    {
#line 45 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60);
#line 45 "add_foreign_enum.m"
      return;
    }
#line 45 "add_foreign_enum.m"
  }
#line 18 "add_foreign_enum.m"
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
