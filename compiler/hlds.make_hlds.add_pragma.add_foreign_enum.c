/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"




#line 159 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 162 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 165 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 168 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 171 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 591 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

#line 357 "add_foreign_enum.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
#line 357 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg);

#line 315 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 315 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

#line 621 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__621__1_1_f_0(
#line 621 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25);

#line 274 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__274__1_1_f_0(
#line 274 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_125);

#line 229 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__229__1_1_f_0(
#line 229 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_74);

#line 177 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15,
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33);

#line 645 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
#line 645 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 645 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
#line 645 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
#line 645 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
#line 645 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);

#line 621 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
#line 621 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 621 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 610 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
#line 610 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);

#line 591 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

#line 582 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
#line 582 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1);

#line 558 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
#line 558 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
#line 558 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
#line 558 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
#line 558 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
#line 558 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17);

#line 537 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
#line 537 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 537 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 537 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 537 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 537 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4);

#line 524 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
#line 524 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22,
#line 524 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23);

#line 315 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 315 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

#line 295 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
#line 295 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
#line 295 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18);

#line 274 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
#line 274 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 274 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 229 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
#line 229 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 229 "add_foreign_enum.m"
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
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48,
#line 198 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);

#line 169 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
#line 169 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 169 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 153 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11,
#line 153 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28,
#line 153 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29);

#line 449 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 449 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 449 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[6][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[65][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][4];




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
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[65][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is an atomic type"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not an enumeration type"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "constructors."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It has one or more non-zero arity"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "foreign names does not form a bijection."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the user-specified mapping between Mercury and"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not match"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot be converted:"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[27])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not form a bijection."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the mapping between Mercury and foreign names"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "foreign values does not form a bijection."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the mapping between Mercury enumeration values and"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not defined in this module."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has multiple foreign_enum pragmas."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "user-specified foreign names"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for constructors that do not match match"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "any of the constructors of"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The following"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: not all the constructors of the type"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: not all constructors have a foreign value."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[1][11] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1][6] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[1][14] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 994 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1003 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 1012 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1020 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1028 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 591 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
#line 591 "add_foreign_enum.m"
{
#line 597 "add_foreign_enum.m"
  {
#line 597 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 597 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17;
#line 600 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
#line 598 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
#line 598 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16;
#line 606 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18;
#line 603 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18;

#line 598 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 598 "add_foreign_enum.m"
      {
#line 598 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 1)));
#line 598 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 2)));
#line 598 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 3)));
#line 598 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 == (MR_Integer) 0);
#line 598 "add_foreign_enum.m"
      }
#line 600 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 599 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17 = hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
#line 600 "add_foreign_enum.m"
    else
#line 601 "add_foreign_enum.m"
      {
#line 601 "add_foreign_enum.m"
        {
#line 601 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.make_foreign_tag\'/8", (MR_String) "non arity zero enumeration constant.");
#line 601 "add_foreign_enum.m"
          return;
        }
#line 601 "add_foreign_enum.m"
      }
#line 603 "add_foreign_enum.m"
    {
#line 603 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
    }
#line 603 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 603 "add_foreign_enum.m"
      {
#line 603 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
#line 603 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 603 "add_foreign_enum.m"
      }
#line 606 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 604 "add_foreign_enum.m"
      {
#line 604 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19;

#line 604 "add_foreign_enum.m"
        {
#line 604 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 604 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 604 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9));
#line 604 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18));
#line 604 "add_foreign_enum.m"
        }
#line 605 "add_foreign_enum.m"
        {
#line 605 "add_foreign_enum.m"
          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21);
        }
#line 604 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22;
#line 604 "add_foreign_enum.m"
      }
#line 606 "add_foreign_enum.m"
    else
#line 607 "add_foreign_enum.m"
      {
#line 607 "add_foreign_enum.m"
        {
#line 607 "add_foreign_enum.m"
          MR_Word base;
#line 607 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = base;
#line 607 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17));
#line 607 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22));
#line 607 "add_foreign_enum.m"
        }
#line 607 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20;
#line 607 "add_foreign_enum.m"
      }
#line 597 "add_foreign_enum.m"
  }
#line 591 "add_foreign_enum.m"
}

#line 357 "add_foreign_enum.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
#line 357 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg)
#line 357 "add_foreign_enum.m"
{
#line 357 "add_foreign_enum.m"
  {
#line 357 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 357 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;

#line 357 "add_foreign_enum.m"
    {
#line 357 "add_foreign_enum.m"
      return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))));
    }
#line 357 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 357 "add_foreign_enum.m"
  }
#line 357 "add_foreign_enum.m"
}

#line 315 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 315 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
#line 315 "add_foreign_enum.m"
{
#line 322 "add_foreign_enum.m"
  {
#line 322 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 322 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 2)));
#line 322 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
#line 322 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24;
#line 322 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27;
#line 322 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28;
#line 322 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29;
#line 323 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 0)));
#line 323 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 1)));
#line 323 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 3)));
#line 323 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 4)));
#line 323 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 5)));
#line 340 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
#line 340 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
#line 338 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26;

#line 332 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20)) == (MR_mktag((MR_Integer) 1))))
#line 329 "add_foreign_enum.m"
      {
#line 330 "add_foreign_enum.m"
        {
#line 330 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20);
        }
#line 331 "add_foreign_enum.m"
        {
#line 331 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23));
#line 331 "add_foreign_enum.m"
        }
#line 329 "add_foreign_enum.m"
      }
#line 332 "add_foreign_enum.m"
    else
#line 333 "add_foreign_enum.m"
      {
#line 334 "add_foreign_enum.m"
        {
#line 334 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "unqualified constructor name");
#line 334 "add_foreign_enum.m"
          return;
        }
#line 333 "add_foreign_enum.m"
      }
#line 338 "add_foreign_enum.m"
    {
#line 338 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39);
    }
#line 338 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 338 "add_foreign_enum.m"
      {
#line 338 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26);
#line 338 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 338 "add_foreign_enum.m"
      }
#line 340 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 339 "add_foreign_enum.m"
      {
#line 339 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
#line 339 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
#line 339 "add_foreign_enum.m"
      }
#line 340 "add_foreign_enum.m"
    else
#line 346 "add_foreign_enum.m"
      {
#line 346 "add_foreign_enum.m"
        if ((hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14 == (MR_Integer) 1))
#line 348 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
#line 346 "add_foreign_enum.m"
        else
#line 345 "add_foreign_enum.m"
          {
#line 345 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = mercury__string__to_upper_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23);
          }
#line 346 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30;
#line 346 "add_foreign_enum.m"
      }
#line 351 "add_foreign_enum.m"
    {
#line 351 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27);
    }
#line 358 "add_foreign_enum.m"
    if ((((hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12 == (MR_Integer) 4)) || ((hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12 == (MR_Integer) 3))))
#line 361 "add_foreign_enum.m"
      {
#line 362 "add_foreign_enum.m"
        {
#line 362 "add_foreign_enum.m"
          mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "foreign_export_enum for target language");
#line 362 "add_foreign_enum.m"
          return;
        }
#line 361 "add_foreign_enum.m"
      }
#line 358 "add_foreign_enum.m"
    else
#line 356 "add_foreign_enum.m"
      {
#line 356 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;

#line 357 "add_foreign_enum.m"
        {
#line 357 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 357 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
#line 357 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1));
#line 357 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 357 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28));
#line 357 "add_foreign_enum.m"
        }
#line 357 "add_foreign_enum.m"
        {
#line 357 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29 = mercury__bool__pred_to_bool_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44);
        }
#line 356 "add_foreign_enum.m"
      }
#line 367 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29 == (MR_Integer) 0))
#line 368 "add_foreign_enum.m"
      {
#line 369 "add_foreign_enum.m"
        {
#line 369 "add_foreign_enum.m"
          mercury__list__cons_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
        }
#line 368 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32;
#line 368 "add_foreign_enum.m"
      }
#line 367 "add_foreign_enum.m"
    else
#line 365 "add_foreign_enum.m"
      {
#line 366 "add_foreign_enum.m"
        {
#line 366 "add_foreign_enum.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33);
        }
#line 365 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34;
#line 365 "add_foreign_enum.m"
      }
#line 322 "add_foreign_enum.m"
  }
#line 315 "add_foreign_enum.m"
}

#line 19 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57,
#line 19 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58,
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59,
#line 19 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60)
#line 19 "add_foreign_enum.m"
{
#line 46 "add_foreign_enum.m"
  {
#line 46 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 0)));
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 1)));
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 2)));
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 3)));
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 0)));
#line 46 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 1)));
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19;
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20;
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63;
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66;
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69;
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;
#line 46 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71;
#line 57 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153;

#line 50 "add_foreign_enum.m"
    {
#line 50 "add_foreign_enum.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19);
    }
#line 53 "add_foreign_enum.m"
    {
#line 53 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 53 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17));
#line 53 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18));
#line 53 "add_foreign_enum.m"
    }
#line 53 "add_foreign_enum.m"
    {
#line 53 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 53 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 53 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_71_71));
#line 53 "add_foreign_enum.m"
    }
#line 53 "add_foreign_enum.m"
    {
#line 53 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 53 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 53 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
#line 53 "add_foreign_enum.m"
    }
#line 52 "add_foreign_enum.m"
    {
#line 52 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
#line 52 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69));
#line 52 "add_foreign_enum.m"
    }
#line 51 "add_foreign_enum.m"
    {
#line 51 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 51 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[64])));
#line 51 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
#line 51 "add_foreign_enum.m"
    }
#line 51 "add_foreign_enum.m"
    {
#line 51 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 51 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 51 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63));
#line 51 "add_foreign_enum.m"
    }
#line 57 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18 == (MR_Integer) 0);
#line 57 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 57 "add_foreign_enum.m"
      {
#line 58 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17)) == (MR_mktag((MR_Integer) 0)));
#line 58 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 58 "add_foreign_enum.m"
          {
#line 58 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, (MR_Integer) 0)));
#line 59 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153, (MR_String) "int") == 0))
#line 60 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 59 "add_foreign_enum.m"
            else
#line 59 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153, (MR_String) "float") == 0))
#line 59 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 59 "add_foreign_enum.m"
            else
#line 59 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153, (MR_String) "string") == 0))
#line 61 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 59 "add_foreign_enum.m"
            else
#line 59 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_153_153, (MR_String) "character") == 0))
#line 58 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 59 "add_foreign_enum.m"
            else
#line 59 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 58 "add_foreign_enum.m"
          }
#line 57 "add_foreign_enum.m"
      }
#line 1570 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 1572 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 1574 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54;
#line 1576 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55;
#line 1578 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56;
#line 1580 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84;
#line 1582 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
#line 1584 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138;
#line 1586 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139;
#line 1588 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142;

#line 65 "add_foreign_enum.m"
        {
#line 65 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 65 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 65 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[8])));
#line 65 "add_foreign_enum.m"
        }
#line 64 "add_foreign_enum.m"
        {
#line 64 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 64 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 64 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84));
#line 64 "add_foreign_enum.m"
        }
#line 66 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 148 "add_foreign_enum.m"
        {
#line 148 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54);
        }
#line 148 "add_foreign_enum.m"
        {
#line 148 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139));
#line 148 "add_foreign_enum.m"
        }
#line 148 "add_foreign_enum.m"
        {
#line 148 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138));
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
        }
#line 148 "add_foreign_enum.m"
        {
#line 148 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 148 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137));
#line 148 "add_foreign_enum.m"
        }
#line 149 "add_foreign_enum.m"
        {
#line 149 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55));
#line 149 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_foreign_enum.m"
        }
#line 149 "add_foreign_enum.m"
        {
#line 149 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 149 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_142_142));
#line 149 "add_foreign_enum.m"
        }
#line 150 "add_foreign_enum.m"
        {
#line 150 "add_foreign_enum.m"
          MR_Word base;
#line 150 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 150 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56));
#line 150 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
#line 150 "add_foreign_enum.m"
        }
#line 1682 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 1684 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    else
#line 1686 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 1688 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23;

#line 69 "add_foreign_enum.m"
        {
#line 69 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23);
        }
#line 1696 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 1698 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 1700 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24;

#line 70 "add_foreign_enum.m"
            {
#line 70 "add_foreign_enum.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24);
            }
#line 1708 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24)) == (MR_mktag((MR_Integer) 1))))
#line 1710 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              {
#line 1712 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 0)));
#line 1714 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 3)));
#line 1716 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237;
#line 1718 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238;
#line 83 "add_foreign_enum.m"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TagValues_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 1)));
#line 83 "add_foreign_enum.m"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___CheaperTagTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 2)));
#line 83 "add_foreign_enum.m"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeUserEq_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 4)));
#line 83 "add_foreign_enum.m"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeDirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 5)));
#line 83 "add_foreign_enum.m"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ReservedTag_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 83 "add_foreign_enum.m"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ReservedAddr_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 83 "add_foreign_enum.m"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___IsForeignType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 7)));

#line 123 "add_foreign_enum.m"
                if ((((hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33)) == (MR_mktag((MR_Integer) 2))))))
#line 126 "add_foreign_enum.m"
                  {
#line 126 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100;
#line 126 "add_foreign_enum.m"
                    MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115;
#line 126 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146;

#line 130 "add_foreign_enum.m"
                    {
#line 130 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 130 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[16])));
#line 130 "add_foreign_enum.m"
                    }
#line 129 "add_foreign_enum.m"
                    {
#line 129 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 129 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100));
#line 129 "add_foreign_enum.m"
                    }
#line 134 "add_foreign_enum.m"
                    {
#line 134 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 134 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146));
#line 134 "add_foreign_enum.m"
                    }
#line 134 "add_foreign_enum.m"
                    {
#line 134 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 134 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_115_115));
#line 134 "add_foreign_enum.m"
                    }
#line 126 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 126 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
#line 126 "add_foreign_enum.m"
                  }
#line 123 "add_foreign_enum.m"
                else
#line 90 "add_foreign_enum.m"
                  {
#line 90 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 0)));
#line 90 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_15, (MR_Integer) 1)));
#line 90 "add_foreign_enum.m"
                    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42;
#line 90 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43;
#line 90 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;

#line 95 "add_foreign_enum.m"
                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = (MR_String) "";
#line 95 "add_foreign_enum.m"
                    else
#line 94 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_40, (MR_Integer) 0)));
#line 99 "add_foreign_enum.m"
                    {
#line 99 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_16, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117);
                    }
#line 119 "add_foreign_enum.m"
                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 120 "add_foreign_enum.m"
                      {
#line 120 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 120 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117;
#line 120 "add_foreign_enum.m"
                      }
#line 119 "add_foreign_enum.m"
                    else
#line 102 "add_foreign_enum.m"
                      {
#line 102 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_43, (MR_Integer) 0)));
#line 102 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45;

#line 103 "add_foreign_enum.m"
                        {
#line 103 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_42, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_41, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_117_117, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238);
                        }
#line 116 "add_foreign_enum.m"
                        if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "add_foreign_enum.m"
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 116 "add_foreign_enum.m"
                        else
#line 108 "add_foreign_enum.m"
                          {
#line 108 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_45, (MR_Integer) 0)));
#line 108 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47;
#line 108 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48;
#line 108 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49;

#line 109 "add_foreign_enum.m"
                            {
#line 109 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 109 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 109 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 109 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14));
#line 109 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_46));
#line 109 "add_foreign_enum.m"
                            }
#line 111 "add_foreign_enum.m"
                            {
#line 111 "add_foreign_enum.m"
                              hlds__hlds_module__module_info_get_exported_enums_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48);
                            }
#line 113 "add_foreign_enum.m"
                            {
#line 113 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_47));
#line 113 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_48));
#line 113 "add_foreign_enum.m"
                            }
#line 114 "add_foreign_enum.m"
                            {
#line 114 "add_foreign_enum.m"
                              hlds__hlds_module__module_info_set_exported_enums_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_49, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58);
                            }
#line 108 "add_foreign_enum.m"
                          }
#line 102 "add_foreign_enum.m"
                      }
#line 122 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 90 "add_foreign_enum.m"
                  }
#line 146 "add_foreign_enum.m"
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238;
#line 146 "add_foreign_enum.m"
                else
#line 147 "add_foreign_enum.m"
                  {
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198;
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199;
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200;
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201;
#line 147 "add_foreign_enum.m"
                    MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237, (MR_Integer) 0)));
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203;
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205;
#line 147 "add_foreign_enum.m"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208;

#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202, (MR_Integer) 0)));
#line 147 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_202_202, (MR_Integer) 1)));
#line 148 "add_foreign_enum.m"
                    {
#line 148 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_199);
                    }
#line 148 "add_foreign_enum.m"
                    {
#line 148 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_205_205));
#line 148 "add_foreign_enum.m"
                    }
#line 148 "add_foreign_enum.m"
                    {
#line 148 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 148 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                    }
#line 148 "add_foreign_enum.m"
                    {
#line 148 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 148 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_203_203));
#line 148 "add_foreign_enum.m"
                    }
#line 149 "add_foreign_enum.m"
                    {
#line 149 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_200));
#line 149 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_foreign_enum.m"
                    }
#line 149 "add_foreign_enum.m"
                    {
#line 149 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Severity_198));
#line 149 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 149 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_208_208));
#line 149 "add_foreign_enum.m"
                    }
#line 150 "add_foreign_enum.m"
                    {
#line 150 "add_foreign_enum.m"
                      MR_Word base;
#line 150 "add_foreign_enum.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_foreign_enum.m"
                      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 150 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201));
#line 150 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_118_238));
#line 150 "add_foreign_enum.m"
                    }
#line 147 "add_foreign_enum.m"
                  }
#line 2003 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              }
#line 2005 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            else
#line 2007 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              {
#line 2009 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
#line 2011 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
#line 2013 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
#line 2015 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
#line 2017 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 2019 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 2021 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 2023 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

#line 78 "add_foreign_enum.m"
                {
#line 78 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 78 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 78 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[10])));
#line 78 "add_foreign_enum.m"
                }
#line 77 "add_foreign_enum.m"
                {
#line 77 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 77 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 77 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122));
#line 77 "add_foreign_enum.m"
                }
#line 76 "add_foreign_enum.m"
                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 148 "add_foreign_enum.m"
                {
#line 148 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155);
                }
#line 148 "add_foreign_enum.m"
                {
#line 148 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
#line 148 "add_foreign_enum.m"
                }
#line 148 "add_foreign_enum.m"
                {
#line 148 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
#line 148 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_foreign_enum.m"
                }
#line 148 "add_foreign_enum.m"
                {
#line 148 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 148 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
#line 148 "add_foreign_enum.m"
                }
#line 149 "add_foreign_enum.m"
                {
#line 149 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156));
#line 149 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_foreign_enum.m"
                }
#line 149 "add_foreign_enum.m"
                {
#line 149 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 149 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
#line 149 "add_foreign_enum.m"
                }
#line 150 "add_foreign_enum.m"
                {
#line 150 "add_foreign_enum.m"
                  MR_Word base;
#line 150 "add_foreign_enum.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = base;
#line 150 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157));
#line 150 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59));
#line 150 "add_foreign_enum.m"
                }
#line 2117 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              }
#line 2119 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 2121 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        else
#line 2123 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 141 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 145 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
#line 2129 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 2131 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 46 "add_foreign_enum.m"
  }
#line 19 "add_foreign_enum.m"
}

#line 621 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__621__1_1_f_0(
#line 621 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25)
#line 621 "add_foreign_enum.m"
{
#line 621 "add_foreign_enum.m"
  {
#line 621 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 621 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26;
#line 621 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27;

#line 621 "add_foreign_enum.m"
    {
#line 621 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25));
#line 621 "add_foreign_enum.m"
    }
#line 621 "add_foreign_enum.m"
    {
#line 621 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27));
#line 621 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "add_foreign_enum.m"
    }
#line 621 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26;
#line 621 "add_foreign_enum.m"
  }
#line 621 "add_foreign_enum.m"
}

#line 274 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__274__1_1_f_0(
#line 274 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_125)
#line 274 "add_foreign_enum.m"
{
#line 274 "add_foreign_enum.m"
  {
#line 274 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 274 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126;
#line 274 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127;

#line 274 "add_foreign_enum.m"
    {
#line 274 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 274 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_125));
#line 274 "add_foreign_enum.m"
    }
#line 274 "add_foreign_enum.m"
    {
#line 274 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127));
#line 274 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "add_foreign_enum.m"
    }
#line 274 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126;
#line 274 "add_foreign_enum.m"
  }
#line 274 "add_foreign_enum.m"
}

#line 229 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__229__1_1_f_0(
#line 229 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_74)
#line 229 "add_foreign_enum.m"
{
#line 229 "add_foreign_enum.m"
  {
#line 229 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 229 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75;
#line 229 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76;

#line 229 "add_foreign_enum.m"
    {
#line 229 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 229 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_74));
#line 229 "add_foreign_enum.m"
    }
#line 229 "add_foreign_enum.m"
    {
#line 229 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76));
#line 229 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "add_foreign_enum.m"
    }
#line 229 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75;
#line 229 "add_foreign_enum.m"
  }
#line 229 "add_foreign_enum.m"
}

#line 177 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15,
#line 177 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33)
#line 177 "add_foreign_enum.m"
{
#line 177 "add_foreign_enum.m"
  {
#line 177 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 177 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34;

#line 177 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33)) == (MR_mktag((MR_Integer) 1))))
#line 171 "add_foreign_enum.m"
      {
#line 171 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33, (MR_Integer) 0)));
#line 171 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33, (MR_Integer) 1)));

#line 172 "add_foreign_enum.m"
        {
#line 172 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_19, hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15);
        }
#line 174 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 173 "add_foreign_enum.m"
          {
#line 173 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_20));
#line 173 "add_foreign_enum.m"
          }
#line 174 "add_foreign_enum.m"
        else
#line 175 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34 = hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33;
#line 171 "add_foreign_enum.m"
      }
#line 177 "add_foreign_enum.m"
    else
#line 179 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34 = hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33;
#line 177 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34;
#line 177 "add_foreign_enum.m"
  }
#line 177 "add_foreign_enum.m"
}

#line 645 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
#line 645 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 645 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
#line 645 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
#line 645 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
#line 645 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14)
#line 645 "add_foreign_enum.m"
{
#line 650 "add_foreign_enum.m"
  {
#line 650 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33;
#line 650 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;

#line 653 "add_foreign_enum.m"
    {
#line 653 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7));
#line 653 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8));
#line 653 "add_foreign_enum.m"
    }
#line 653 "add_foreign_enum.m"
    {
#line 653 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 653 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25));
#line 653 "add_foreign_enum.m"
    }
#line 653 "add_foreign_enum.m"
    {
#line 653 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24));
#line 653 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
#line 653 "add_foreign_enum.m"
    }
#line 652 "add_foreign_enum.m"
    {
#line 652 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23));
#line 652 "add_foreign_enum.m"
    }
#line 652 "add_foreign_enum.m"
    {
#line 652 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[47])));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20));
#line 652 "add_foreign_enum.m"
    }
#line 651 "add_foreign_enum.m"
    {
#line 651 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[63])));
#line 651 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17));
#line 651 "add_foreign_enum.m"
    }
#line 655 "add_foreign_enum.m"
    {
#line 655 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10));
#line 655 "add_foreign_enum.m"
    }
#line 655 "add_foreign_enum.m"
    {
#line 655 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33));
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "add_foreign_enum.m"
    }
#line 655 "add_foreign_enum.m"
    {
#line 655 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
#line 655 "add_foreign_enum.m"
    }
#line 656 "add_foreign_enum.m"
    {
#line 656 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11));
#line 656 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "add_foreign_enum.m"
    }
#line 656 "add_foreign_enum.m"
    {
#line 656 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 656 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 656 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
#line 656 "add_foreign_enum.m"
    }
#line 657 "add_foreign_enum.m"
    {
#line 657 "add_foreign_enum.m"
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);
#line 657 "add_foreign_enum.m"
      return;
    }
#line 650 "add_foreign_enum.m"
  }
#line 645 "add_foreign_enum.m"
}

#line 621 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
#line 621 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 621 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 621 "add_foreign_enum.m"
{
#line 621 "add_foreign_enum.m"
  {
#line 621 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 621 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 621 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26;

#line 621 "add_foreign_enum.m"
    {
#line 621 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__621__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 621 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26));
#line 621 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 621 "add_foreign_enum.m"
  }
#line 621 "add_foreign_enum.m"
}

#line 610 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
#line 610 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
#line 610 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20)
#line 610 "add_foreign_enum.m"
{
#line 616 "add_foreign_enum.m"
  {
#line 616 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14;
#line 616 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47;
#line 616 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52;
#line 623 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15;

#line 620 "add_foreign_enum.m"
    {
#line 620 "add_foreign_enum.m"
      mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8, &hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
#line 621 "add_foreign_enum.m"
    {
#line 621 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5], hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
#line 622 "add_foreign_enum.m"
    {
#line 622 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
    }
#line 623 "add_foreign_enum.m"
    {
#line 623 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11, ((MR_Box) ((MR_String) "constructor does not have a foreign value")), ((MR_Box) ((MR_String) "constructors do not have foreign values")));
    }
#line 623 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15);
#line 2600 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 626 "add_foreign_enum.m"
    {
#line 626 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 626 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15));
#line 626 "add_foreign_enum.m"
    }
#line 626 "add_foreign_enum.m"
    {
#line 626 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38));
#line 626 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[62])));
#line 626 "add_foreign_enum.m"
    }
#line 626 "add_foreign_enum.m"
    {
#line 626 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[57])));
#line 626 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
#line 626 "add_foreign_enum.m"
    }
#line 627 "add_foreign_enum.m"
    {
#line 627 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14);
    }
#line 629 "add_foreign_enum.m"
    {
#line 629 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[60]));
    }
#line 629 "add_foreign_enum.m"
    {
#line 629 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 629 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
#line 629 "add_foreign_enum.m"
    }
#line 630 "add_foreign_enum.m"
    {
#line 630 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 0) = ((MR_Box) ((MR_Integer) 0));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16));
#line 630 "add_foreign_enum.m"
    }
#line 630 "add_foreign_enum.m"
    {
#line 630 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "add_foreign_enum.m"
    }
#line 629 "add_foreign_enum.m"
    {
#line 629 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44));
#line 629 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
#line 629 "add_foreign_enum.m"
    }
#line 628 "add_foreign_enum.m"
    {
#line 628 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 628 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
#line 628 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43));
#line 628 "add_foreign_enum.m"
    }
#line 631 "add_foreign_enum.m"
    {
#line 631 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17));
#line 631 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "add_foreign_enum.m"
    }
#line 631 "add_foreign_enum.m"
    {
#line 631 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 631 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 631 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52));
#line 631 "add_foreign_enum.m"
    }
#line 632 "add_foreign_enum.m"
    {
#line 632 "add_foreign_enum.m"
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);
#line 632 "add_foreign_enum.m"
      return;
    }
#line 616 "add_foreign_enum.m"
  }
#line 610 "add_foreign_enum.m"
}

#line 591 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 591 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 591 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
#line 591 "add_foreign_enum.m"
{
#line 597 "add_foreign_enum.m"
  {
#line 597 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 597 "add_foreign_enum.m"
    {
#line 597 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);
#line 597 "add_foreign_enum.m"
      return;
    }
#line 597 "add_foreign_enum.m"
  }
#line 591 "add_foreign_enum.m"
}

#line 582 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
#line 582 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1)
#line 582 "add_foreign_enum.m"
{
#line 585 "add_foreign_enum.m"
  {
#line 585 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 585 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;

#line 585 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 == (MR_Integer) 0))
#line 585 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = (MR_Integer) 0;
#line 585 "add_foreign_enum.m"
    else
#line 585 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 == (MR_Integer) 2))
#line 587 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = (MR_Integer) 1;
#line 585 "add_foreign_enum.m"
    else
#line 585 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 == (MR_Integer) 4))
#line 589 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = (MR_Integer) 4;
#line 585 "add_foreign_enum.m"
    else
#line 585 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 == (MR_Integer) 1))
#line 586 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = (MR_Integer) 3;
#line 585 "add_foreign_enum.m"
    else
#line 588 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = (MR_Integer) 2;
#line 585 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
#line 585 "add_foreign_enum.m"
  }
#line 582 "add_foreign_enum.m"
}

#line 558 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
#line 558 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
#line 558 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
#line 558 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
#line 558 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
#line 558 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17)
#line 558 "add_foreign_enum.m"
{
#line 563 "add_foreign_enum.m"
  {
#line 563 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 563 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 0)));
#line 563 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 1)));
#line 563 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12;

#line 568 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9)) == (MR_mktag((MR_Integer) 1))))
#line 569 "add_foreign_enum.m"
      {
#line 569 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));
#line 569 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_20 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 1)));

#line 570 "add_foreign_enum.m"
        {
#line 570 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__match_sym_name_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6);
        }
#line 572 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 571 "add_foreign_enum.m"
          {
#line 571 "add_foreign_enum.m"
            {
#line 571 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
#line 571 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_20));
#line 571 "add_foreign_enum.m"
            }
#line 571 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
#line 571 "add_foreign_enum.m"
          }
#line 572 "add_foreign_enum.m"
        else
#line 573 "add_foreign_enum.m"
          {
#line 573 "add_foreign_enum.m"
            {
#line 573 "add_foreign_enum.m"
              MR_Word base;
#line 573 "add_foreign_enum.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "add_foreign_enum.m"
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = base;
#line 573 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9));
#line 573 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16));
#line 573 "add_foreign_enum.m"
            }
#line 574 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9;
#line 573 "add_foreign_enum.m"
          }
#line 569 "add_foreign_enum.m"
      }
#line 568 "add_foreign_enum.m"
    else
#line 566 "add_foreign_enum.m"
      {
#line 566 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));

#line 567 "add_foreign_enum.m"
        {
#line 567 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
#line 567 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_11));
#line 567 "add_foreign_enum.m"
        }
#line 566 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
#line 566 "add_foreign_enum.m"
      }
#line 577 "add_foreign_enum.m"
    {
#line 577 "add_foreign_enum.m"
      MR_Word base;
#line 577 "add_foreign_enum.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "add_foreign_enum.m"
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15 = base;
#line 577 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12));
#line 577 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10));
#line 577 "add_foreign_enum.m"
    }
#line 563 "add_foreign_enum.m"
  }
#line 558 "add_foreign_enum.m"
}

#line 537 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
#line 537 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 537 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 537 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 537 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 537 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4)
#line 537 "add_foreign_enum.m"
{
#line 537 "add_foreign_enum.m"
  {
#line 537 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 537 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15;
#line 537 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17;

#line 537 "add_foreign_enum.m"
    {
#line 537 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17);
    }
#line 537 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15));
#line 537 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17));
#line 537 "add_foreign_enum.m"
  }
#line 537 "add_foreign_enum.m"
}

#line 524 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
#line 524 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
#line 524 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22,
#line 524 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23)
#line 524 "add_foreign_enum.m"
{
#line 530 "add_foreign_enum.m"
  {
#line 530 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 530 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34;
#line 530 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_15;
#line 530 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_16;
#line 530 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_17;
#line 530 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27;
#line 533 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName0_14;
#line 537 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_17;

#line 531 "add_foreign_enum.m"
    {
#line 531 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName0_14);
    }
#line 533 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 532 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_15 = hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName0_14;
#line 533 "add_foreign_enum.m"
    else
#line 534 "add_foreign_enum.m"
      {
#line 534 "add_foreign_enum.m"
        {
#line 534 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_foreign_enum_tag_map\'/7", (MR_String) "unqualified type name while processing foreign tags.");
#line 534 "add_foreign_enum.m"
          return;
        }
#line 534 "add_foreign_enum.m"
      }
#line 537 "add_foreign_enum.m"
    {
#line 537 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 537 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[0]));
#line 537 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1));
#line 537 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 537 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_15));
#line 537 "add_foreign_enum.m"
    }
#line 3043 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2];
#line 537 "add_foreign_enum.m"
    {
#line 537 "add_foreign_enum.m"
      mercury__list__map_foldl_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_17);
    }
#line 537 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_17 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_17);
#line 548 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "add_foreign_enum.m"
      {
#line 544 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_18;

#line 541 "add_foreign_enum.m"
        {
#line 541 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_16, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_18);
        }
#line 544 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 542 "add_foreign_enum.m"
          {
#line 542 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_19;

#line 542 "add_foreign_enum.m"
            {
#line 542 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_19 = mercury__bimap__forward_map_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_18);
            }
#line 543 "add_foreign_enum.m"
            {
#line 543 "add_foreign_enum.m"
              MR_Word base;
#line 543 "add_foreign_enum.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "add_foreign_enum.m"
              *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = base;
#line 543 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_19));
#line 543 "add_foreign_enum.m"
            }
#line 542 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22;
#line 542 "add_foreign_enum.m"
          }
#line 544 "add_foreign_enum.m"
        else
#line 545 "add_foreign_enum.m"
          {
#line 545 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46;
#line 545 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47;
#line 545 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59;
#line 545 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60;
#line 545 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
#line 545 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65;

#line 641 "add_foreign_enum.m"
            {
#line 641 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[43]));
            }
#line 641 "add_foreign_enum.m"
            {
#line 641 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
#line 641 "add_foreign_enum.m"
            }
#line 641 "add_foreign_enum.m"
            {
#line 641 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60));
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "add_foreign_enum.m"
            }
#line 641 "add_foreign_enum.m"
            {
#line 641 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_8));
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59));
#line 641 "add_foreign_enum.m"
            }
#line 642 "add_foreign_enum.m"
            {
#line 642 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46));
#line 642 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "add_foreign_enum.m"
            }
#line 642 "add_foreign_enum.m"
            {
#line 642 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 642 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 642 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65));
#line 642 "add_foreign_enum.m"
            }
#line 643 "add_foreign_enum.m"
            {
#line 643 "add_foreign_enum.m"
              mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23);
            }
#line 546 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 545 "add_foreign_enum.m"
          }
#line 544 "add_foreign_enum.m"
      }
#line 548 "add_foreign_enum.m"
    else
#line 549 "add_foreign_enum.m"
      {
#line 550 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22;
#line 549 "add_foreign_enum.m"
      }
#line 530 "add_foreign_enum.m"
  }
#line 524 "add_foreign_enum.m"
}

#line 315 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 315 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 315 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 315 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
#line 315 "add_foreign_enum.m"
{
#line 322 "add_foreign_enum.m"
  {
#line 322 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 322 "add_foreign_enum.m"
    {
#line 322 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14, hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
#line 322 "add_foreign_enum.m"
      return;
    }
#line 322 "add_foreign_enum.m"
  }
#line 315 "add_foreign_enum.m"
}

#line 295 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
#line 295 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
#line 295 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
#line 295 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18)
#line 295 "add_foreign_enum.m"
{
#line 300 "add_foreign_enum.m"
  {
#line 300 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 300 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 300 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 300 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12;
#line 302 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13;

#line 301 "add_foreign_enum.m"
    {
#line 301 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12 = mercury__map__to_assoc_list_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9);
    }
#line 302 "add_foreign_enum.m"
    {
#line 302 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12, &hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13);
    }
#line 304 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 303 "add_foreign_enum.m"
      {
#line 303 "add_foreign_enum.m"
        {
#line 303 "add_foreign_enum.m"
          MR_Word base;
#line 303 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = base;
#line 303 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9));
#line 303 "add_foreign_enum.m"
        }
#line 303 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17;
#line 303 "add_foreign_enum.m"
      }
#line 304 "add_foreign_enum.m"
    else
#line 305 "add_foreign_enum.m"
      {
#line 305 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15;
#line 305 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16;
#line 305 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30;
#line 305 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31;
#line 305 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
#line 305 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36;

#line 305 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 310 "add_foreign_enum.m"
        {
#line 310 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[38]));
        }
#line 310 "add_foreign_enum.m"
        {
#line 310 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
#line 310 "add_foreign_enum.m"
        }
#line 310 "add_foreign_enum.m"
        {
#line 310 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31));
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "add_foreign_enum.m"
        }
#line 310 "add_foreign_enum.m"
        {
#line 310 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_7));
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30));
#line 310 "add_foreign_enum.m"
        }
#line 311 "add_foreign_enum.m"
        {
#line 311 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15));
#line 311 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "add_foreign_enum.m"
        }
#line 311 "add_foreign_enum.m"
        {
#line 311 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 311 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 311 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36));
#line 311 "add_foreign_enum.m"
        }
#line 312 "add_foreign_enum.m"
        {
#line 312 "add_foreign_enum.m"
          MR_Word base;
#line 312 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = base;
#line 312 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16));
#line 312 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17));
#line 312 "add_foreign_enum.m"
        }
#line 305 "add_foreign_enum.m"
      }
#line 300 "add_foreign_enum.m"
  }
#line 295 "add_foreign_enum.m"
}

#line 274 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
#line 274 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 274 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 274 "add_foreign_enum.m"
{
#line 274 "add_foreign_enum.m"
  {
#line 274 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 274 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 274 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_126;

#line 274 "add_foreign_enum.m"
    {
#line 274 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_126 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__274__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 274 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_126));
#line 274 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 274 "add_foreign_enum.m"
  }
#line 274 "add_foreign_enum.m"
}

#line 229 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
#line 229 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 229 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 229 "add_foreign_enum.m"
{
#line 229 "add_foreign_enum.m"
  {
#line 229 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 229 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 229 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_75;

#line 229 "add_foreign_enum.m"
    {
#line 229 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_75 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__229__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 229 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_75));
#line 229 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 229 "add_foreign_enum.m"
  }
#line 229 "add_foreign_enum.m"
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
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48,
#line 198 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49)
#line 198 "add_foreign_enum.m"
{
#line 205 "add_foreign_enum.m"
  {
#line 205 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53;
#line 205 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_54_54;
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
      hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[0]));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19));
#line 216 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24));
#line 216 "add_foreign_enum.m"
    }
#line 3605 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 3607 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 217 "add_foreign_enum.m"
    {
#line 217 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_54_54 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170);
    }
#line 3614 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1];
#line 215 "add_foreign_enum.m"
    {
#line 215 "add_foreign_enum.m"
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_54_54)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
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
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
    }
#line 222 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
#line 247 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 226 "add_foreign_enum.m"
      {
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingComponents_32;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingList_34;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingVerbosePieces_35;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85;
#line 226 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_86_86;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_101_101;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103;
#line 226 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108;
#line 233 "add_foreign_enum.m"
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_86_86;

#line 226 "add_foreign_enum.m"
        {
#line 226 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
#line 226 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
#line 226 "add_foreign_enum.m"
        }
#line 226 "add_foreign_enum.m"
        {
#line 226 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 226 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
#line 226 "add_foreign_enum.m"
        }
#line 226 "add_foreign_enum.m"
        {
#line 226 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65));
#line 226 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6])));
#line 226 "add_foreign_enum.m"
        }
#line 225 "add_foreign_enum.m"
        {
#line 225 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[56])));
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64));
#line 225 "add_foreign_enum.m"
        }
#line 224 "add_foreign_enum.m"
        {
#line 224 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[55])));
#line 224 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
#line 224 "add_foreign_enum.m"
        }
#line 223 "add_foreign_enum.m"
        {
#line 223 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[54])));
#line 223 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58));
#line 223 "add_foreign_enum.m"
        }
#line 227 "add_foreign_enum.m"
        {
#line 227 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31 = mercury__map__keys_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
        }
#line 229 "add_foreign_enum.m"
        {
#line 229 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingComponents_32 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[3], hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31);
        }
#line 230 "add_foreign_enum.m"
        {
#line 230 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingList_34 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingComponents_32, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
        }
#line 3762 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 233 "add_foreign_enum.m"
        {
#line 233 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_86_86 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
        }
#line 233 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_86_86 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_86_86);
#line 233 "add_foreign_enum.m"
        {
#line 233 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 233 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_86_86));
#line 233 "add_foreign_enum.m"
        }
#line 234 "add_foreign_enum.m"
        {
#line 234 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85));
#line 234 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[30])));
#line 234 "add_foreign_enum.m"
        }
#line 232 "add_foreign_enum.m"
        {
#line 232 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[57])));
#line 232 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84));
#line 232 "add_foreign_enum.m"
        }
#line 236 "add_foreign_enum.m"
        {
#line 236 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingVerbosePieces_35 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175, hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingList_34);
        }
#line 238 "add_foreign_enum.m"
        {
#line 238 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_101_101 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30);
        }
#line 238 "add_foreign_enum.m"
        {
#line 238 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 238 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_101_101));
#line 238 "add_foreign_enum.m"
        }
#line 239 "add_foreign_enum.m"
        {
#line 239 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103, 0) = ((MR_Box) ((MR_Integer) 0));
#line 239 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingVerbosePieces_35));
#line 239 "add_foreign_enum.m"
        }
#line 239 "add_foreign_enum.m"
        {
#line 239 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103));
#line 239 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "add_foreign_enum.m"
        }
#line 238 "add_foreign_enum.m"
        {
#line 238 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100));
#line 238 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
#line 238 "add_foreign_enum.m"
        }
#line 237 "add_foreign_enum.m"
        {
#line 237 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 237 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
#line 237 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99));
#line 237 "add_foreign_enum.m"
        }
#line 241 "add_foreign_enum.m"
        {
#line 241 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36));
#line 241 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "add_foreign_enum.m"
        }
#line 240 "add_foreign_enum.m"
        {
#line 240 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 240 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 240 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108));
#line 240 "add_foreign_enum.m"
        }
#line 242 "add_foreign_enum.m"
        {
#line 242 "add_foreign_enum.m"
          mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);
        }
#line 243 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 226 "add_foreign_enum.m"
      }
#line 247 "add_foreign_enum.m"
    else
#line 252 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "add_foreign_enum.m"
      {
#line 250 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_17, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);
#line 250 "add_foreign_enum.m"
        return;
      }
#line 252 "add_foreign_enum.m"
    else
#line 253 "add_foreign_enum.m"
      {
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178;
#line 253 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__What_40;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_42;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_43;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_44;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_45;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120;
#line 253 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136;
#line 253 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_149_149;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151;
#line 253 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156;
#line 279 "add_foreign_enum.m"
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_137_137;

#line 257 "add_foreign_enum.m"
        if ((hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14 == (MR_Integer) 0))
#line 256 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__What_40 = (MR_String) "C identifiers.";
#line 257 "add_foreign_enum.m"
        else
#line 257 "add_foreign_enum.m"
        if ((hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14 == (MR_Integer) 2))
#line 259 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__What_40 = (MR_String) "Java identifiers.";
#line 257 "add_foreign_enum.m"
        else
#line 264 "add_foreign_enum.m"
          {
#line 265 "add_foreign_enum.m"
            {
#line 265 "add_foreign_enum.m"
              mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "foreign_export_enum pragma for unsupported language");
#line 265 "add_foreign_enum.m"
              return;
            }
#line 264 "add_foreign_enum.m"
          }
#line 270 "add_foreign_enum.m"
        {
#line 270 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
#line 270 "add_foreign_enum.m"
        }
#line 270 "add_foreign_enum.m"
        {
#line 270 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118));
#line 270 "add_foreign_enum.m"
        }
#line 271 "add_foreign_enum.m"
        {
#line 271 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "can be converted into valid ", hlds__make_hlds__add_pragma__add_foreign_enum__What_40);
        }
#line 271 "add_foreign_enum.m"
        {
#line 271 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 271 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121));
#line 271 "add_foreign_enum.m"
        }
#line 272 "add_foreign_enum.m"
        {
#line 272 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120));
#line 272 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "add_foreign_enum.m"
        }
#line 270 "add_foreign_enum.m"
        {
#line 270 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119));
#line 270 "add_foreign_enum.m"
        }
#line 269 "add_foreign_enum.m"
        {
#line 269 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[58])));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116));
#line 269 "add_foreign_enum.m"
        }
#line 273 "add_foreign_enum.m"
        {
#line 273 "add_foreign_enum.m"
          mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, &hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_42);
        }
#line 274 "add_foreign_enum.m"
        {
#line 274 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_43 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_42);
        }
#line 276 "add_foreign_enum.m"
        {
#line 276 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_44 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_43, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
        }
#line 4061 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 279 "add_foreign_enum.m"
        {
#line 279 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_137_137 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, ((MR_Box) ((MR_String) "constructor")), ((MR_Box) ((MR_String) "constructors")));
        }
#line 279 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_137_137);
#line 279 "add_foreign_enum.m"
        {
#line 279 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 279 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137));
#line 279 "add_foreign_enum.m"
        }
#line 279 "add_foreign_enum.m"
        {
#line 279 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136));
#line 279 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[32])));
#line 279 "add_foreign_enum.m"
        }
#line 278 "add_foreign_enum.m"
        {
#line 278 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[57])));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135));
#line 278 "add_foreign_enum.m"
        }
#line 281 "add_foreign_enum.m"
        {
#line 281 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_45 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178, hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_44);
        }
#line 283 "add_foreign_enum.m"
        {
#line 283 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_149_149 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41);
        }
#line 283 "add_foreign_enum.m"
        {
#line 283 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 283 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_149_149));
#line 283 "add_foreign_enum.m"
        }
#line 284 "add_foreign_enum.m"
        {
#line 284 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151, 0) = ((MR_Box) ((MR_Integer) 0));
#line 284 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_45));
#line 284 "add_foreign_enum.m"
        }
#line 284 "add_foreign_enum.m"
        {
#line 284 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151));
#line 284 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "add_foreign_enum.m"
        }
#line 283 "add_foreign_enum.m"
        {
#line 283 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148));
#line 283 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
#line 283 "add_foreign_enum.m"
        }
#line 282 "add_foreign_enum.m"
        {
#line 282 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
#line 282 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147));
#line 282 "add_foreign_enum.m"
        }
#line 286 "add_foreign_enum.m"
        {
#line 286 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46));
#line 286 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "add_foreign_enum.m"
        }
#line 285 "add_foreign_enum.m"
        {
#line 285 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 285 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 285 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156));
#line 285 "add_foreign_enum.m"
        }
#line 287 "add_foreign_enum.m"
        {
#line 287 "add_foreign_enum.m"
          mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);
        }
#line 288 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 253 "add_foreign_enum.m"
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
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_34;

#line 169 "add_foreign_enum.m"
    {
#line 169 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_34 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__177__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 169 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_34));
#line 169 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 169 "add_foreign_enum.m"
  }
#line 169 "add_foreign_enum.m"
}

#line 153 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11,
#line 153 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12,
#line 153 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28,
#line 153 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29)
#line 153 "add_foreign_enum.m"
{
#line 159 "add_foreign_enum.m"
  {
#line 159 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 159 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54;
#line 159 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55;
#line 159 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15;
#line 159 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16;
#line 159 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_22;
#line 162 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName0_14;
#line 187 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_23;

#line 160 "add_foreign_enum.m"
    {
#line 160 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, &hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName0_14);
    }
#line 162 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 161 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15 = hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName0_14;
#line 162 "add_foreign_enum.m"
    else
#line 163 "add_foreign_enum.m"
      {
#line 163 "add_foreign_enum.m"
        {
#line 163 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_overrides_map\'/7", (MR_String) "unqualified type name while building override map");
#line 163 "add_foreign_enum.m"
          return;
        }
#line 163 "add_foreign_enum.m"
      }
#line 169 "add_foreign_enum.m"
    {
#line 169 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[0]));
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1));
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15));
#line 169 "add_foreign_enum.m"
    }
#line 4300 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 4302 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 182 "add_foreign_enum.m"
    {
#line 182 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_22 = mercury__assoc_list__map_keys_only_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11);
    }
#line 184 "add_foreign_enum.m"
    {
#line 184 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_22, &hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_23);
    }
#line 187 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 185 "add_foreign_enum.m"
      {
#line 185 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_24;

#line 185 "add_foreign_enum.m"
        {
#line 185 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_24 = mercury__bimap__forward_map_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_23);
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_24));
#line 186 "add_foreign_enum.m"
        }
#line 185 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28;
#line 185 "add_foreign_enum.m"
      }
#line 187 "add_foreign_enum.m"
    else
#line 188 "add_foreign_enum.m"
      {
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
#line 188 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50;

#line 188 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[25]));
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
#line 193 "add_foreign_enum.m"
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "add_foreign_enum.m"
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_9));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44));
#line 193 "add_foreign_enum.m"
        }
#line 194 "add_foreign_enum.m"
        {
#line 194 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "add_foreign_enum.m"
        }
#line 194 "add_foreign_enum.m"
        {
#line 194 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50));
#line 194 "add_foreign_enum.m"
        }
#line 195 "add_foreign_enum.m"
        {
#line 195 "add_foreign_enum.m"
          MR_Word base;
#line 195 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29 = base;
#line 195 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27));
#line 195 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28));
#line 195 "add_foreign_enum.m"
        }
#line 188 "add_foreign_enum.m"
      }
#line 159 "add_foreign_enum.m"
  }
#line 153 "add_foreign_enum.m"
}

#line 449 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 449 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 449 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 449 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6)
#line 449 "add_foreign_enum.m"
{
#line 449 "add_foreign_enum.m"
  {
#line 449 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 449 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21;
#line 449 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23;

#line 449 "add_foreign_enum.m"
    {
#line 449 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23);
    }
#line 449 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21));
#line 449 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23));
#line 449 "add_foreign_enum.m"
  }
#line 449 "add_foreign_enum.m"
}

#line 23 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(
#line 23 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8,
#line 23 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9,
#line 23 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
#line 23 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61,
#line 23 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62,
#line 23 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63,
#line 23 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64)
#line 23 "add_foreign_enum.m"
{
#line 374 "add_foreign_enum.m"
  {
#line 374 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 0)));
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 1)));
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 2)));
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 0)));
#line 374 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 1)));
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18;
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19;
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67;
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73;
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74;
#line 374 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75;
#line 384 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193;

#line 377 "add_foreign_enum.m"
    {
#line 377 "add_foreign_enum.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18);
    }
#line 380 "add_foreign_enum.m"
    {
#line 380 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16));
#line 380 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17));
#line 380 "add_foreign_enum.m"
    }
#line 380 "add_foreign_enum.m"
    {
#line 380 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 380 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75));
#line 380 "add_foreign_enum.m"
    }
#line 380 "add_foreign_enum.m"
    {
#line 380 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 380 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
#line 380 "add_foreign_enum.m"
    }
#line 379 "add_foreign_enum.m"
    {
#line 379 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73));
#line 379 "add_foreign_enum.m"
    }
#line 378 "add_foreign_enum.m"
    {
#line 378 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[47])));
#line 378 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 378 "add_foreign_enum.m"
    }
#line 378 "add_foreign_enum.m"
    {
#line 378 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 378 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67));
#line 378 "add_foreign_enum.m"
    }
#line 384 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 == (MR_Integer) 0);
#line 384 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 384 "add_foreign_enum.m"
      {
#line 385 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16)) == (MR_mktag((MR_Integer) 0)));
#line 385 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 385 "add_foreign_enum.m"
          {
#line 385 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, (MR_Integer) 0)));
#line 386 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193, (MR_String) "int") == 0))
#line 387 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 386 "add_foreign_enum.m"
            else
#line 386 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193, (MR_String) "float") == 0))
#line 386 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 386 "add_foreign_enum.m"
            else
#line 386 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193, (MR_String) "string") == 0))
#line 388 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 386 "add_foreign_enum.m"
            else
#line 386 "add_foreign_enum.m"
            if ((strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193, (MR_String) "character") == 0))
#line 385 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 386 "add_foreign_enum.m"
            else
#line 386 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 385 "add_foreign_enum.m"
          }
#line 384 "add_foreign_enum.m"
      }
#line 4638 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 4640 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 4642 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58;
#line 4644 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59;
#line 4646 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60;
#line 4648 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88;
#line 4650 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 4652 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 4654 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 4656 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

#line 392 "add_foreign_enum.m"
        {
#line 392 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 392 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[18])));
#line 392 "add_foreign_enum.m"
        }
#line 391 "add_foreign_enum.m"
        {
#line 391 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 391 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88));
#line 391 "add_foreign_enum.m"
        }
#line 393 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 519 "add_foreign_enum.m"
        {
#line 519 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58);
        }
#line 519 "add_foreign_enum.m"
        {
#line 519 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
#line 519 "add_foreign_enum.m"
        }
#line 519 "add_foreign_enum.m"
        {
#line 519 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
        }
#line 519 "add_foreign_enum.m"
        {
#line 519 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
#line 519 "add_foreign_enum.m"
        }
#line 520 "add_foreign_enum.m"
        {
#line 520 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59));
#line 520 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
        }
#line 520 "add_foreign_enum.m"
        {
#line 520 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 520 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
#line 520 "add_foreign_enum.m"
        }
#line 521 "add_foreign_enum.m"
        {
#line 521 "add_foreign_enum.m"
          MR_Word base;
#line 521 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 521 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60));
#line 521 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 521 "add_foreign_enum.m"
        }
#line 4750 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 4752 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    else
#line 4754 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 4756 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22;

#line 396 "add_foreign_enum.m"
        {
#line 396 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22);
        }
#line 4764 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 4766 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 4768 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23;

#line 398 "add_foreign_enum.m"
            {
#line 398 "add_foreign_enum.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23);
            }
#line 4776 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23)) == (MR_mktag((MR_Integer) 1))))
#line 4778 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              {
#line 4780 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 0)));
#line 4782 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 1)));
#line 4784 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 2)));
#line 4786 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 3)));
#line 4788 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 4)));
#line 4790 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 5)));
#line 4792 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 4794 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 4796 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 7)));
#line 4798 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38;
#line 4800 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39;
#line 4802 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40;

#line 415 "add_foreign_enum.m"
                {
#line 415 "add_foreign_enum.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38);
                }
#line 416 "add_foreign_enum.m"
                {
#line 416 "add_foreign_enum.m"
                  libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38, &hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                }
#line 417 "add_foreign_enum.m"
                {
#line 417 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 = hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                }
#line 4820 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                if ((((hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 4822 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  {
#line 4824 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41;
#line 4826 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42;

#line 423 "add_foreign_enum.m"
                    {
#line 423 "add_foreign_enum.m"
                      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                    }
#line 427 "add_foreign_enum.m"
                    {
#line 427 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                    }
#line 434 "add_foreign_enum.m"
                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42 == (MR_Integer) 0))
#line 435 "add_foreign_enum.m"
                      {
#line 435 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_125_125;

#line 436 "add_foreign_enum.m"
                        {
#line 436 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_125_125 = hlds__hlds_pred__status_is_imported_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9);
                        }
#line 436 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_125_125 == (MR_Integer) 1);
#line 435 "add_foreign_enum.m"
                      }
#line 434 "add_foreign_enum.m"
                    else
#line 430 "add_foreign_enum.m"
                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 432 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 430 "add_foreign_enum.m"
                    else
#line 430 "add_foreign_enum.m"
                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 431 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 430 "add_foreign_enum.m"
                    else
#line 430 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 4871 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 4873 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      {
#line 4875 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43;
#line 4877 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44;
#line 4879 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126;
#line 467 "add_foreign_enum.m"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45;

#line 441 "add_foreign_enum.m"
                        {
#line 441 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 441 "add_foreign_enum.m"
                        }
#line 442 "add_foreign_enum.m"
                        {
#line 442 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126);
                        }
#line 446 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
#line 446 "add_foreign_enum.m"
                        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 446 "add_foreign_enum.m"
                          {
#line 447 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44)) == (MR_mktag((MR_Integer) 1)));
#line 447 "add_foreign_enum.m"
                            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 447 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, (MR_Integer) 0)));
#line 446 "add_foreign_enum.m"
                          }
#line 467 "add_foreign_enum.m"
                        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 451 "add_foreign_enum.m"
                          {
#line 451 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188;
#line 451 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189;
#line 451 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46;
#line 451 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47;
#line 451 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127;
#line 451 "add_foreign_enum.m"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128;
#line 449 "add_foreign_enum.m"
                            MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46;
#line 449 "add_foreign_enum.m"
                            MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47;

#line 449 "add_foreign_enum.m"
                            {
#line 449 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 449 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[0]));
#line 449 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1));
#line 449 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 449 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 449 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45));
#line 449 "add_foreign_enum.m"
                            }
#line 4948 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 4950 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 450 "add_foreign_enum.m"
                            {
#line 450 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189);
                            }
#line 449 "add_foreign_enum.m"
                            {
#line 449 "add_foreign_enum.m"
                              mercury__map__foldl2_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
                            }
#line 449 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46);
#line 449 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
#line 462 "add_foreign_enum.m"
                            if ((hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "add_foreign_enum.m"
                              {
#line 453 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48;
#line 453 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49;
#line 453 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50;

#line 454 "add_foreign_enum.m"
                                {
#line 454 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 6) = ((MR_Box) ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 | ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 << (MR_Integer) 1)))));
#line 454 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37));
#line 454 "add_foreign_enum.m"
                                }
#line 458 "add_foreign_enum.m"
                                {
#line 458 "add_foreign_enum.m"
                                  hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49);
                                }
#line 459 "add_foreign_enum.m"
                                {
#line 459 "add_foreign_enum.m"
                                  hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49, hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50);
                                }
#line 461 "add_foreign_enum.m"
                                {
#line 461 "add_foreign_enum.m"
                                  hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62);
                                }
#line 453 "add_foreign_enum.m"
                                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126;
#line 453 "add_foreign_enum.m"
                              }
#line 462 "add_foreign_enum.m"
                            else
#line 463 "add_foreign_enum.m"
                              {
#line 464 "add_foreign_enum.m"
                                {
#line 464 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
                                }
#line 463 "add_foreign_enum.m"
                                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 463 "add_foreign_enum.m"
                              }
#line 451 "add_foreign_enum.m"
                          }
#line 467 "add_foreign_enum.m"
                        else
#line 470 "add_foreign_enum.m"
                          {
#line 470 "add_foreign_enum.m"
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126;
#line 470 "add_foreign_enum.m"
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 470 "add_foreign_enum.m"
                          }
#line 5043 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 5045 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    else
#line 5047 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      {
#line 479 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 474 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 5053 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 476 "add_foreign_enum.m"
                          {
#line 476 "add_foreign_enum.m"
                            hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
#line 476 "add_foreign_enum.m"
                            return;
                          }
#line 5062 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        else
#line 5064 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          {
#line 5066 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;
#line 5068 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239;
#line 5070 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240;
#line 5072 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241;
#line 5074 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243;
#line 5076 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244;
#line 5078 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_245_245;
#line 5080 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248;

#line 481 "add_foreign_enum.m"
                            {
#line 481 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 481 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[51])));
#line 481 "add_foreign_enum.m"
                            }
#line 480 "add_foreign_enum.m"
                            {
#line 480 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 480 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135));
#line 480 "add_foreign_enum.m"
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_245_245 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239);
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_245_245));
#line 519 "add_foreign_enum.m"
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243));
#line 519 "add_foreign_enum.m"
                            }
#line 520 "add_foreign_enum.m"
                            {
#line 520 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240));
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                            }
#line 520 "add_foreign_enum.m"
                            {
#line 520 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248));
#line 520 "add_foreign_enum.m"
                            }
#line 521 "add_foreign_enum.m"
                            {
#line 521 "add_foreign_enum.m"
                              MR_Word base;
#line 521 "add_foreign_enum.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_foreign_enum.m"
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 521 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241));
#line 521 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 521 "add_foreign_enum.m"
                            }
#line 5172 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          }
#line 5174 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 5176 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  }
#line 5178 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                else
#line 5180 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32)) == (MR_mktag((MR_Integer) 1))))
#line 5182 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  {
#line 486 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 488 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
#line 488 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
#line 489 "add_foreign_enum.m"
                    if (!(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded))
#line 489 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 5194 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 516 "add_foreign_enum.m"
                      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
#line 5198 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    else
#line 5200 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      {
#line 5202 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116;
#line 5204 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280;
#line 5206 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281;
#line 5208 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282;
#line 5210 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284;
#line 5212 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285;
#line 5214 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_286_286;
#line 5216 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289;

#line 495 "add_foreign_enum.m"
                        {
#line 495 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 495 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[53])));
#line 495 "add_foreign_enum.m"
                        }
#line 494 "add_foreign_enum.m"
                        {
#line 494 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 494 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116));
#line 494 "add_foreign_enum.m"
                        }
#line 519 "add_foreign_enum.m"
                        {
#line 519 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_286_286 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280);
                        }
#line 519 "add_foreign_enum.m"
                        {
#line 519 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_286_286));
#line 519 "add_foreign_enum.m"
                        }
#line 519 "add_foreign_enum.m"
                        {
#line 519 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285));
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                        }
#line 519 "add_foreign_enum.m"
                        {
#line 519 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284));
#line 519 "add_foreign_enum.m"
                        }
#line 520 "add_foreign_enum.m"
                        {
#line 520 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281));
#line 520 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                        }
#line 520 "add_foreign_enum.m"
                        {
#line 520 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 520 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289));
#line 520 "add_foreign_enum.m"
                        }
#line 521 "add_foreign_enum.m"
                        {
#line 521 "add_foreign_enum.m"
                          MR_Word base;
#line 521 "add_foreign_enum.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_foreign_enum.m"
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 521 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282));
#line 521 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 521 "add_foreign_enum.m"
                        }
#line 5308 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 5310 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  }
#line 5312 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                else
#line 5314 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  {
#line 5316 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
#line 5318 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323;
#line 5320 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324;
#line 5322 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325;
#line 5324 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327;
#line 5326 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328;
#line 5328 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329;
#line 5330 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332;

#line 504 "add_foreign_enum.m"
                    {
#line 504 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 504 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 504 "add_foreign_enum.m"
                    }
#line 503 "add_foreign_enum.m"
                    {
#line 503 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 503 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
#line 503 "add_foreign_enum.m"
                    }
#line 502 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 519 "add_foreign_enum.m"
                    {
#line 519 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323);
                    }
#line 519 "add_foreign_enum.m"
                    {
#line 519 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329));
#line 519 "add_foreign_enum.m"
                    }
#line 519 "add_foreign_enum.m"
                    {
#line 519 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328));
#line 519 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                    }
#line 519 "add_foreign_enum.m"
                    {
#line 519 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 519 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327));
#line 519 "add_foreign_enum.m"
                    }
#line 520 "add_foreign_enum.m"
                    {
#line 520 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324));
#line 520 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                    }
#line 520 "add_foreign_enum.m"
                    {
#line 520 "add_foreign_enum.m"
                      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 520 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332));
#line 520 "add_foreign_enum.m"
                    }
#line 521 "add_foreign_enum.m"
                    {
#line 521 "add_foreign_enum.m"
                      MR_Word base;
#line 521 "add_foreign_enum.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_foreign_enum.m"
                      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 521 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325));
#line 521 "add_foreign_enum.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 521 "add_foreign_enum.m"
                    }
#line 5424 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  }
#line 5426 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              }
#line 5428 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            else
#line 5430 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              {
#line 5432 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146;
#line 5434 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195;
#line 5436 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196;
#line 5438 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197;
#line 5440 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199;
#line 5442 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200;
#line 5444 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201;
#line 5446 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;

#line 406 "add_foreign_enum.m"
                {
#line 406 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 406 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 406 "add_foreign_enum.m"
                }
#line 405 "add_foreign_enum.m"
                {
#line 405 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 405 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146));
#line 405 "add_foreign_enum.m"
                }
#line 404 "add_foreign_enum.m"
                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 519 "add_foreign_enum.m"
                {
#line 519 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195);
                }
#line 519 "add_foreign_enum.m"
                {
#line 519 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201));
#line 519 "add_foreign_enum.m"
                }
#line 519 "add_foreign_enum.m"
                {
#line 519 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200));
#line 519 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                }
#line 519 "add_foreign_enum.m"
                {
#line 519 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 519 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199));
#line 519 "add_foreign_enum.m"
                }
#line 520 "add_foreign_enum.m"
                {
#line 520 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196));
#line 520 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                }
#line 520 "add_foreign_enum.m"
                {
#line 520 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 520 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 520 "add_foreign_enum.m"
                }
#line 521 "add_foreign_enum.m"
                {
#line 521 "add_foreign_enum.m"
                  MR_Word base;
#line 521 "add_foreign_enum.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 521 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197));
#line 521 "add_foreign_enum.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 521 "add_foreign_enum.m"
                }
#line 5540 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              }
#line 5542 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 5544 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        else
#line 5546 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 513 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 516 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
#line 5552 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 5554 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 374 "add_foreign_enum.m"
  }
#line 23 "add_foreign_enum.m"
}

#line 19 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ImportStatus_9,
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57,
#line 19 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58,
#line 19 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59,
#line 19 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60)
#line 19 "add_foreign_enum.m"
{
#line 46 "add_foreign_enum.m"
  {
#line 46 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 46 "add_foreign_enum.m"
    {
#line 46 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60);
#line 46 "add_foreign_enum.m"
      return;
    }
#line 46 "add_foreign_enum.m"
  }
#line 19 "add_foreign_enum.m"
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
